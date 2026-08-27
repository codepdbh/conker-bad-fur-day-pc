#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150882B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150882B0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150882B4: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150882B8: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x150882BC: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x150882C0: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x150882C4: bne         $v1, $zero, L_150882D4
    if (ctx->r3 != 0) {
        // 0x150882C8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_150882D4;
    }
    // 0x150882C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150882CC: jr          $ra
    // 0x150882D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150882D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150882D4:
    // 0x150882D4: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x150882D8: lb          $v0, 0x27($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X27);
    // 0x150882DC: jr          $ra
    // 0x150882E0: nop

    return;
    return;
    // 0x150882E0: nop

;}
RECOMP_FUNC void func_15040998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040998: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1504099C: jr          $ra
    // 0x150409A0: nop

    return;
    return;
    // 0x150409A0: nop

;}
RECOMP_FUNC void func_1507BDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507BDB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1507BDB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1507BDB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1507BDBC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1507BDC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x1507BDC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507BDC8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x1507BDCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507BDD0: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x1507BDD4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1507BDD8: beql        $t6, $zero, L_1507C21C
    if (ctx->r14 == 0) {
        // 0x1507BDDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507C21C;
    }
    goto skip_0;
    // 0x1507BDDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1507BDE0: beq         $s1, $zero, L_1507BE34
    if (ctx->r17 == 0) {
        // 0x1507BDE4: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1507BE34;
    }
    // 0x1507BDE4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1507BDE8: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x1507BDEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507BDF0: bne         $t7, $zero, L_1507BE30
    if (ctx->r15 != 0) {
        // 0x1507BDF4: nop
    
            goto L_1507BE30;
    }
    // 0x1507BDF4: nop

    // 0x1507BDF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507BDFC: lwc1        $f0, -0x165C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1507BE00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1507BE04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1507BE08: nop

    // 0x1507BE0C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1507BE10: nop

    // 0x1507BE14: bc1f        L_1507BE28
    if (!c1cs) {
        // 0x1507BE18: nop
    
            goto L_1507BE28;
    }
    // 0x1507BE18: nop

    // 0x1507BE1C: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1507BE20: b           L_1507BE34
    // 0x1507BE24: nop

        goto L_1507BE34;
    // 0x1507BE24: nop

L_1507BE28:
    // 0x1507BE28: b           L_1507BE34
    // 0x1507BE2C: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
        goto L_1507BE34;
    // 0x1507BE2C: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
L_1507BE30:
    // 0x1507BE30: lwc1        $f12, -0x165C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X165C);
L_1507BE34:
    // 0x1507BE34: lbu         $t8, -0x15F4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X15F4);
    // 0x1507BE38: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1507BE3C: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x1507BE40: beq         $t8, $zero, L_1507BE50
    if (ctx->r24 == 0) {
        // 0x1507BE44: subu        $t6, $s1, $t5
        ctx->r14 = SUB32(ctx->r17, ctx->r13);
            goto L_1507BE50;
    }
    // 0x1507BE44: subu        $t6, $s1, $t5
    ctx->r14 = SUB32(ctx->r17, ctx->r13);
    // 0x1507BE48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1507BE4C: nop

L_1507BE50:
    // 0x1507BE50: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1507BE54: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507BE58: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1507BE5C: mul.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1507BE60: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1507BE64: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1507BE68: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x1507BE6C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1507BE70: nop

    // 0x1507BE74: bc1fl       L_1507BE8C
    if (!c1cs) {
        // 0x1507BE78: lwc1        $f10, 0x8($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
            goto L_1507BE8C;
    }
    goto skip_1;
    // 0x1507BE78: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x1507BE7C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1507BE80: b           L_1507BE90
    // 0x1507BE84: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
        goto L_1507BE90;
    // 0x1507BE84: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1507BE88: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
L_1507BE8C:
    // 0x1507BE8C: add.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f10.fl;
L_1507BE90:
    // 0x1507BE90: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x1507BE94: andi        $t9, $a3, 0x8000
    ctx->r25 = ctx->r7 & 0X8000;
    // 0x1507BE98: beq         $s1, $zero, L_1507BED0
    if (ctx->r17 == 0) {
        // 0x1507BE9C: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_1507BED0;
    }
    // 0x1507BE9C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x1507BEA0: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x1507BEA4: lbu         $t3, 0x1FC($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1FC);
    // 0x1507BEA8: lw          $t1, 0xF4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XF4);
    // 0x1507BEAC: mflo        $t7
    ctx->r15 = lo;
    // 0x1507BEB0: andi        $t4, $t3, 0xFFFB
    ctx->r12 = ctx->r11 & 0XFFFB;
    // 0x1507BEB4: sb          $t4, 0x1FC($s1)
    MEM_B(0X1FC, ctx->r17) = ctx->r12;
    // 0x1507BEB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507BEBC: sb          $t7, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r15;
    // 0x1507BEC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507BEC4: andi        $t2, $t1, 0xE
    ctx->r10 = ctx->r9 & 0XE;
    // 0x1507BEC8: or          $a3, $t9, $t2
    ctx->r7 = ctx->r25 | ctx->r10;
    // 0x1507BECC: sw          $s1, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r17;
L_1507BED0:
    // 0x1507BED0: beq         $s1, $zero, L_1507BF34
    if (ctx->r17 == 0) {
        // 0x1507BED4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1507BF34;
    }
    // 0x1507BED4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1507BED8: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x1507BEDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507BEE0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1507BEE4: bne         $t8, $at, L_1507BEF4
    if (ctx->r24 != ctx->r1) {
        // 0x1507BEE8: addu        $t9, $t9, $a1
        ctx->r25 = ADD32(ctx->r25, ctx->r5);
            goto L_1507BEF4;
    }
    // 0x1507BEE8: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x1507BEEC: lbu         $t9, 0x365E($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X365E);
    // 0x1507BEF0: beq         $t9, $zero, L_1507BF34
    if (ctx->r25 == 0) {
        // 0x1507BEF4: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1507BF34;
    }
L_1507BEF4:
    // 0x1507BEF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507BEF8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1507BEFC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507BF00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507BF04: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x1507BF08: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x1507BF0C: jal         0x1506AD30
    // 0x1507BF10: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_1506AD30(rdram, ctx);
        goto after_0;
    // 0x1507BF10: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1507BF14: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1507BF18: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1507BF1C: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x1507BF20: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x1507BF24: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1507BF28: bc1tl       L_1507BF38
    if (c1cs) {
        // 0x1507BF2C: lwc1        $f16, 0x10($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
            goto L_1507BF38;
    }
    goto skip_2;
    // 0x1507BF2C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x1507BF30: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1507BF34:
    // 0x1507BF34: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
L_1507BF38:
    // 0x1507BF38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1507BF3C: c.le.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl <= ctx->f16.fl;
    // 0x1507BF40: nop

    // 0x1507BF44: bc1fl       L_1507C19C
    if (!c1cs) {
        // 0x1507BF48: lwc1        $f0, 0x20($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
            goto L_1507C19C;
    }
    goto skip_3;
    // 0x1507BF48: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    skip_3:
    // 0x1507BF4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1507BF50: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507BF54: sub.s       $f0, $f18, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x1507BF58: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1507BF5C: nop

    // 0x1507BF60: bc1f        L_1507C008
    if (!c1cs) {
        // 0x1507BF64: nop
    
            goto L_1507C008;
    }
    // 0x1507BF64: nop

    // 0x1507BF68: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1507BF6C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1507BF70: nop

    // 0x1507BF74: bc1f        L_1507C008
    if (!c1cs) {
        // 0x1507BF78: nop
    
            goto L_1507C008;
    }
    // 0x1507BF78: nop

    // 0x1507BF7C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x1507BF80: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1507BF84: beq         $t1, $zero, L_1507C008
    if (ctx->r9 == 0) {
        // 0x1507BF88: nop
    
            goto L_1507C008;
    }
    // 0x1507BF88: nop

    // 0x1507BF8C: beq         $s1, $zero, L_1507BFB0
    if (ctx->r17 == 0) {
        // 0x1507BF90: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_1507BFB0;
    }
    // 0x1507BF90: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x1507BF94: lw          $t2, 0xF4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XF4);
    // 0x1507BF98: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x1507BF9C: beq         $t3, $zero, L_1507BFB0
    if (ctx->r11 == 0) {
        // 0x1507BFA0: nop
    
            goto L_1507BFB0;
    }
    // 0x1507BFA0: nop

    // 0x1507BFA4: sh          $zero, 0x10C($s1)
    MEM_H(0X10C, ctx->r17) = 0;
    // 0x1507BFA8: sw          $zero, 0x1C4($s1)
    MEM_W(0X1C4, ctx->r17) = 0;
    // 0x1507BFAC: swc1        $f14, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f14.u32l;
L_1507BFB0:
    // 0x1507BFB0: lbu         $t4, 0x35EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X35EA);
    // 0x1507BFB4: bnel        $t4, $zero, L_1507BFF8
    if (ctx->r12 != 0) {
        // 0x1507BFB8: lw          $t5, 0x28($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X28);
            goto L_1507BFF8;
    }
    goto skip_4;
    // 0x1507BFB8: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    skip_4:
    // 0x1507BFBC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1507BFC0: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x1507BFC4: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x1507BFC8: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x1507BFCC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1507BFD0: jalr        $t9
    // 0x1507BFD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1507BFD4: nop

    after_1:
    // 0x1507BFD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1507BFDC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1507BFE0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1507BFE4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x1507BFE8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1507BFEC: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x1507BFF0: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1507BFF4: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
L_1507BFF8:
    // 0x1507BFF8: beq         $v0, $t5, L_1507C008
    if (ctx->r2 == ctx->r13) {
        // 0x1507BFFC: nop
    
            goto L_1507C008;
    }
    // 0x1507BFFC: nop

    // 0x1507C000: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1507C004: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1507C008:
    // 0x1507C008: beq         $s1, $zero, L_1507C06C
    if (ctx->r17 == 0) {
        // 0x1507C00C: nop
    
            goto L_1507C06C;
    }
    // 0x1507C00C: nop

    // 0x1507C010: lbu         $v1, 0x1FD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1FD);
    // 0x1507C014: beq         $v1, $zero, L_1507C06C
    if (ctx->r3 == 0) {
        // 0x1507C018: nop
    
            goto L_1507C06C;
    }
    // 0x1507C018: nop

    // 0x1507C01C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507C020: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1507C024: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x1507C028: nop

    // 0x1507C02C: bc1f        L_1507C06C
    if (!c1cs) {
        // 0x1507C030: nop
    
            goto L_1507C06C;
    }
    // 0x1507C030: nop

    // 0x1507C034: lhu         $t6, 0x76($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X76);
    // 0x1507C038: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x1507C03C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1507C040: sh          $v0, 0x76($s1)
    MEM_H(0X76, ctx->r17) = ctx->r2;
    // 0x1507C044: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
    // 0x1507C048: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    // 0x1507C04C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1507C050: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1507C054: lw          $t1, 0xF4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XF4);
    // 0x1507C058: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x1507C05C: beql        $t2, $zero, L_1507C1C8
    if (ctx->r10 == 0) {
        // 0x1507C060: lh          $v0, 0x3C($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X3C);
            goto L_1507C1C8;
    }
    goto skip_5;
    // 0x1507C060: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    skip_5:
    // 0x1507C064: b           L_1507C1C4
    // 0x1507C068: sh          $zero, 0x21C($s1)
    MEM_H(0X21C, ctx->r17) = 0;
        goto L_1507C1C4;
    // 0x1507C068: sh          $zero, 0x21C($s1)
    MEM_H(0X21C, ctx->r17) = 0;
L_1507C06C:
    // 0x1507C06C: bne         $a3, $zero, L_1507C0B0
    if (ctx->r7 != 0) {
        // 0x1507C070: nop
    
            goto L_1507C0B0;
    }
    // 0x1507C070: nop

    // 0x1507C074: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507C078: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1507C07C: nop

    // 0x1507C080: bc1f        L_1507C0B0
    if (!c1cs) {
        // 0x1507C084: nop
    
            goto L_1507C0B0;
    }
    // 0x1507C084: nop

    // 0x1507C088: sub.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1507C08C: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1507C090: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1507C094: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1507C098: beq         $s1, $zero, L_1507C1C4
    if (ctx->r17 == 0) {
        // 0x1507C09C: swc1        $f4, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
            goto L_1507C1C4;
    }
    // 0x1507C09C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x1507C0A0: lbu         $t3, 0x1FC($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1FC);
    // 0x1507C0A4: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x1507C0A8: b           L_1507C1C4
    // 0x1507C0AC: sb          $t4, 0x1FC($s1)
    MEM_B(0X1FC, ctx->r17) = ctx->r12;
        goto L_1507C1C4;
    // 0x1507C0AC: sb          $t4, 0x1FC($s1)
    MEM_B(0X1FC, ctx->r17) = ctx->r12;
L_1507C0B0:
    // 0x1507C0B0: beq         $a3, $zero, L_1507C190
    if (ctx->r7 == 0) {
        // 0x1507C0B4: nop
    
            goto L_1507C190;
    }
    // 0x1507C0B4: nop

    // 0x1507C0B8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507C0BC: sub.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1507C0C0: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1507C0C4: nop

    // 0x1507C0C8: bc1f        L_1507C190
    if (!c1cs) {
        // 0x1507C0CC: nop
    
            goto L_1507C190;
    }
    // 0x1507C0CC: nop

    // 0x1507C0D0: beql        $s1, $zero, L_1507C0EC
    if (ctx->r17 == 0) {
        // 0x1507C0D4: lhu         $t6, 0x4($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X4);
            goto L_1507C0EC;
    }
    goto skip_6;
    // 0x1507C0D4: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
    skip_6:
    // 0x1507C0D8: lw          $t9, 0xF4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XF4);
    // 0x1507C0DC: andi        $t5, $t9, 0xA
    ctx->r13 = ctx->r25 & 0XA;
    // 0x1507C0E0: bne         $t5, $zero, L_1507C0F8
    if (ctx->r13 != 0) {
        // 0x1507C0E4: nop
    
            goto L_1507C0F8;
    }
    // 0x1507C0E4: nop

    // 0x1507C0E8: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
L_1507C0EC:
    // 0x1507C0EC: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x1507C0F0: beql        $t7, $zero, L_1507C104
    if (ctx->r15 == 0) {
        // 0x1507C0F4: lwc1        $f8, 0x8($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
            goto L_1507C104;
    }
    goto skip_7;
    // 0x1507C0F4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    skip_7:
L_1507C0F8:
    // 0x1507C0F8: b           L_1507C150
    // 0x1507C0FC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_1507C150;
    // 0x1507C0FC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x1507C100: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
L_1507C104:
    // 0x1507C104: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x1507C108: nop

    // 0x1507C10C: bc1fl       L_1507C138
    if (!c1cs) {
        // 0x1507C110: lwc1        $f10, 0x20($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
            goto L_1507C138;
    }
    goto skip_8;
    // 0x1507C110: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    skip_8:
    // 0x1507C114: beq         $s1, $zero, L_1507C150
    if (ctx->r17 == 0) {
        // 0x1507C118: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_1507C150;
    }
    // 0x1507C118: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x1507C11C: lw          $t8, 0xF4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XF4);
    // 0x1507C120: andi        $t1, $t8, 0x4
    ctx->r9 = ctx->r24 & 0X4;
    // 0x1507C124: beq         $t1, $zero, L_1507C150
    if (ctx->r9 == 0) {
        // 0x1507C128: nop
    
            goto L_1507C150;
    }
    // 0x1507C128: nop

    // 0x1507C12C: b           L_1507C150
    // 0x1507C130: sh          $zero, 0x21C($s1)
    MEM_H(0X21C, ctx->r17) = 0;
        goto L_1507C150;
    // 0x1507C130: sh          $zero, 0x21C($s1)
    MEM_H(0X21C, ctx->r17) = 0;
    // 0x1507C134: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
L_1507C138:
    // 0x1507C138: beq         $s1, $zero, L_1507C150
    if (ctx->r17 == 0) {
        // 0x1507C13C: swc1        $f10, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
            goto L_1507C150;
    }
    // 0x1507C13C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1507C140: lbu         $t2, 0x1FC($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1FC);
    // 0x1507C144: sb          $zero, 0x138($s1)
    MEM_B(0X138, ctx->r17) = 0;
    // 0x1507C148: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x1507C14C: sb          $t3, 0x1FC($s1)
    MEM_B(0X1FC, ctx->r17) = ctx->r11;
L_1507C150:
    // 0x1507C150: beql        $s1, $zero, L_1507C178
    if (ctx->r17 == 0) {
        // 0x1507C154: lwc1        $f16, 0x8($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
            goto L_1507C178;
    }
    goto skip_9;
    // 0x1507C154: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    skip_9:
    // 0x1507C158: lw          $t4, 0xF4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XF4);
    // 0x1507C15C: andi        $t9, $t4, 0x8
    ctx->r25 = ctx->r12 & 0X8;
    // 0x1507C160: beql        $t9, $zero, L_1507C178
    if (ctx->r25 == 0) {
        // 0x1507C164: lwc1        $f16, 0x8($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
            goto L_1507C178;
    }
    goto skip_10;
    // 0x1507C164: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    skip_10:
    // 0x1507C168: sh          $zero, 0x10C($s1)
    MEM_H(0X10C, ctx->r17) = 0;
    // 0x1507C16C: sw          $zero, 0x1C4($s1)
    MEM_W(0X1C4, ctx->r17) = 0;
    // 0x1507C170: swc1        $f14, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f14.u32l;
    // 0x1507C174: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
L_1507C178:
    // 0x1507C178: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x1507C17C: nop

    // 0x1507C180: bc1fl       L_1507C1C8
    if (!c1cs) {
        // 0x1507C184: lh          $v0, 0x3C($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X3C);
            goto L_1507C1C8;
    }
    goto skip_11;
    // 0x1507C184: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    skip_11:
    // 0x1507C188: b           L_1507C1C4
    // 0x1507C18C: swc1        $f14, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f14.u32l;
        goto L_1507C1C4;
    // 0x1507C18C: swc1        $f14, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f14.u32l;
L_1507C190:
    // 0x1507C190: b           L_1507C1C4
    // 0x1507C194: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
        goto L_1507C1C4;
    // 0x1507C194: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
    // 0x1507C198: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_1507C19C:
    // 0x1507C19C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1507C1A0: nop

    // 0x1507C1A4: bc1fl       L_1507C1C4
    if (!c1cs) {
        // 0x1507C1A8: swc1        $f12, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
            goto L_1507C1C4;
    }
    goto skip_12;
    // 0x1507C1A8: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
    skip_12:
    // 0x1507C1AC: sub.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1507C1B0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507C1B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1507C1B8: b           L_1507C1C4
    // 0x1507C1BC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_1507C1C4;
    // 0x1507C1BC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x1507C1C0: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
L_1507C1C4:
    // 0x1507C1C4: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
L_1507C1C8:
    // 0x1507C1C8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1507C1CC: blez        $v0, L_1507C1EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1507C1D0: nop
    
            goto L_1507C1EC;
    }
    // 0x1507C1D0: nop

    // 0x1507C1D4: lh          $t5, 0x3A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X3A);
    // 0x1507C1D8: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1507C1DC: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1507C1E0: mflo        $t7
    ctx->r15 = lo;
    // 0x1507C1E4: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x1507C1E8: sh          $t8, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r24;
L_1507C1EC:
    // 0x1507C1EC: beql        $s1, $zero, L_1507C21C
    if (ctx->r17 == 0) {
        // 0x1507C1F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507C21C;
    }
    goto skip_13;
    // 0x1507C1F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_13:
    // 0x1507C1F4: beq         $t0, $zero, L_1507C214
    if (ctx->r8 == 0) {
        // 0x1507C1F8: lwc1        $f2, 0x8($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
            goto L_1507C214;
    }
    // 0x1507C1F8: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1507C1FC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507C200: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1507C204: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507C208: jal         0x1506AD30
    // 0x1507C20C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506AD30(rdram, ctx);
        goto after_2;
    // 0x1507C20C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x1507C210: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
L_1507C214:
    // 0x1507C214: swc1        $f2, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->f2.u32l;
    // 0x1507C218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1507C21C:
    // 0x1507C21C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1507C220: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1507C224: jr          $ra
    // 0x1507C228: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1507C228: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1506EC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EC50: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506EC54: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506EC58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506EC5C: lwc1        $f4, -0x6258($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6258);
    // 0x1506EC60: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1506EC64: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506EC68: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1506EC6C: nop

    // 0x1506EC70: bc1f        L_1506ECC8
    if (!c1cs) {
        // 0x1506EC74: nop
    
            goto L_1506ECC8;
    }
    // 0x1506EC74: nop

    // 0x1506EC78: lw          $v1, 0x1580($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1580);
    // 0x1506EC7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506EC80: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x1506EC84: beq         $t6, $zero, L_1506ECA4
    if (ctx->r14 == 0) {
        // 0x1506EC88: andi        $t7, $v1, 0xFF
        ctx->r15 = ctx->r3 & 0XFF;
            goto L_1506ECA4;
    }
    // 0x1506EC88: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x1506EC8C: lwc1        $f8, -0x3D18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x1506EC90: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506EC94: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x1506EC98: nop

    // 0x1506EC9C: bc1f        L_1506ECC8
    if (!c1cs) {
        // 0x1506ECA0: nop
    
            goto L_1506ECC8;
    }
    // 0x1506ECA0: nop

L_1506ECA4:
    // 0x1506ECA4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1506ECA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506ECAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1506ECB0: swc1        $f18, 0x1878($at)
    MEM_W(0X1878, ctx->r1) = ctx->f18.u32l;
    // 0x1506ECB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506ECB8: sw          $zero, 0x1880($at)
    MEM_W(0X1880, ctx->r1) = 0;
    // 0x1506ECBC: lbu         $t8, 0x138($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X138);
    // 0x1506ECC0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x1506ECC4: sb          $t9, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r25;
L_1506ECC8:
    // 0x1506ECC8: jr          $ra
    // 0x1506ECCC: nop

    return;
    return;
    // 0x1506ECCC: nop

;}
RECOMP_FUNC void func_15144528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144528: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1514452C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x15144530: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x15144534: nop

    // 0x15144538: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x1514453C: nop

    // 0x15144540: bc1fl       L_15144564
    if (!c1cs) {
        // 0x15144544: c.lt.s      $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
            goto L_15144564;
    }
    goto skip_0;
    // 0x15144544: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    skip_0:
    // 0x15144548: sub.s       $f0, $f14, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x1514454C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_15144550:
    // 0x15144550: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x15144554: nop

    // 0x15144558: bc1tl       L_15144550
    if (c1cs) {
        // 0x1514455C: sub.s       $f12, $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_15144550;
    }
    goto skip_1;
    // 0x1514455C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x15144560: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
L_15144564:
    // 0x15144564: nop

    // 0x15144568: bc1fl       L_1514458C
    if (!c1cs) {
        // 0x1514456C: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_1514458C;
    }
    goto skip_2;
    // 0x1514456C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x15144570: sub.s       $f0, $f14, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x15144574: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
L_15144578:
    // 0x15144578: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x1514457C: nop

    // 0x15144580: bc1tl       L_15144578
    if (c1cs) {
        // 0x15144584: add.s       $f12, $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
            goto L_15144578;
    }
    goto skip_3;
    // 0x15144584: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    skip_3:
    // 0x15144588: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_1514458C:
    // 0x1514458C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x15144590: jr          $ra
    // 0x15144594: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x15144594: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150C19C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C19C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150C19C4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150C19C8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150C19CC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150C19D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C19D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150C19D8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150C19DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C19E0: beq         $a2, $at, L_150C19FC
    if (ctx->r6 == ctx->r1) {
        // 0x150C19E4: addiu       $t7, $zero, 0x18
        ctx->r15 = ADD32(0, 0X18);
            goto L_150C19FC;
    }
    // 0x150C19E4: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x150C19E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150C19EC: beq         $a2, $at, L_150C1A04
    if (ctx->r6 == ctx->r1) {
        // 0x150C19F0: addiu       $t8, $zero, 0x15
        ctx->r24 = ADD32(0, 0X15);
            goto L_150C1A04;
    }
    // 0x150C19F0: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x150C19F4: b           L_150C1A0C
    // 0x150C19F8: lw          $a0, 0x1D4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1D4);
        goto L_150C1A0C;
    // 0x150C19F8: lw          $a0, 0x1D4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1D4);
L_150C19FC:
    // 0x150C19FC: b           L_150C1A08
    // 0x150C1A00: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_150C1A08;
    // 0x150C1A00: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_150C1A04:
    // 0x150C1A04: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_150C1A08:
    // 0x150C1A08: lw          $a0, 0x1D4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1D4);
L_150C1A0C:
    // 0x150C1A0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x150C1A10: jal         0x15142314
    // 0x150C1A14: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150C1A14: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x150C1A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C1A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C1A20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150C1A24: jr          $ra
    // 0x150C1A28: nop

    return;
    return;
    // 0x150C1A28: nop

;}
RECOMP_FUNC void func_1514A19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514A19C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514A1A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1514A1A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1514A1A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514A1AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1514A1B0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1514A1B4: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x1514A1B8: lh          $t6, 0x12E($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12E);
    // 0x1514A1BC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x1514A1C0: sh          $t8, 0x12E($s1)
    MEM_H(0X12E, ctx->r17) = ctx->r24;
    // 0x1514A1C4: lh          $t9, 0x12E($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X12E);
    // 0x1514A1C8: bgezl       $t9, L_1514A244
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1514A1CC: addiu       $s0, $s1, 0x110
        ctx->r16 = ADD32(ctx->r17, 0X110);
            goto L_1514A244;
    }
    goto skip_0;
    // 0x1514A1CC: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    skip_0:
    // 0x1514A1D0: jal         0x150ADA20
    // 0x1514A1D4: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514A1D4: nop

    after_0:
    // 0x1514A1D8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1514A1DC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514A1E0: mfhi        $t0
    ctx->r8 = hi;
    // 0x1514A1E4: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x1514A1E8: jal         0x150ADA20
    // 0x1514A1EC: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1514A1EC: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_1:
    // 0x1514A1F0: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x1514A1F4: beq         $t1, $zero, L_1514A220
    if (ctx->r9 == 0) {
        // 0x1514A1F8: nop
    
            goto L_1514A220;
    }
    // 0x1514A1F8: nop

    // 0x1514A1FC: jal         0x150ADA68
    // 0x1514A200: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1514A200: nop

    after_2:
    // 0x1514A204: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1514A208: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1514A20C: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1514A210: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1514A214: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1514A218: b           L_1514A240
    // 0x1514A21C: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
        goto L_1514A240;
    // 0x1514A21C: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_1514A220:
    // 0x1514A220: jal         0x150ADA68
    // 0x1514A224: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1514A224: nop

    after_3:
    // 0x1514A228: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1514A22C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1514A230: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1514A234: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1514A238: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1514A23C: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_1514A240:
    // 0x1514A240: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_1514A244:
    // 0x1514A244: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1514A248: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x1514A24C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A250: lwc1        $f16, 0x5794($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5794);
    // 0x1514A254: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1514A258: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1514A25C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1514A260: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1514A264: swc1        $f4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f4.u32l;
    // 0x1514A268: lh          $t2, 0x1C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1C);
    // 0x1514A26C: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1514A270: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1514A274: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x1514A278: lh          $t5, 0x1C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1C);
    // 0x1514A27C: bgezl       $t5, L_1514A2C0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1514A280: lwc1        $f0, 0x2C($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
            goto L_1514A2C0;
    }
    goto skip_1;
    // 0x1514A280: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    skip_1:
    // 0x1514A284: jal         0x150ADA20
    // 0x1514A288: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1514A288: nop

    after_4:
    // 0x1514A28C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1514A290: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514A294: mfhi        $t6
    ctx->r14 = hi;
    // 0x1514A298: sh          $t6, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r14;
    // 0x1514A29C: jal         0x150ADA68
    // 0x1514A2A0: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1514A2A0: nop

    after_5:
    // 0x1514A2A4: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514A2A8: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1514A2AC: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1514A2B0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1514A2B4: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1514A2B8: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x1514A2BC: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
L_1514A2C0:
    // 0x1514A2C0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514A2C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A2C8: lwc1        $f6, 0x5798($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5798);
    // 0x1514A2CC: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1514A2D0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1514A2D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1514A2D8: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1514A2DC: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x1514A2E0: lh          $t7, 0x44($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X44);
    // 0x1514A2E4: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1514A2E8: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1514A2EC: sh          $t9, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r25;
    // 0x1514A2F0: lh          $t0, 0x44($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X44);
    // 0x1514A2F4: bgezl       $t0, L_1514A338
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1514A2F8: lw          $v1, 0x24($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X24);
            goto L_1514A338;
    }
    goto skip_2;
    // 0x1514A2F8: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x1514A2FC: jal         0x150ADA20
    // 0x1514A300: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1514A300: nop

    after_6:
    // 0x1514A304: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1514A308: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514A30C: mfhi        $t1
    ctx->r9 = hi;
    // 0x1514A310: sh          $t1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r9;
    // 0x1514A314: jal         0x150ADA68
    // 0x1514A318: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1514A318: nop

    after_7:
    // 0x1514A31C: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514A320: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514A324: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1514A328: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1514A32C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1514A330: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x1514A334: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
L_1514A338:
    // 0x1514A338: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1514A33C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A340: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x1514A344: lwc1        $f4, 0x579C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X579C);
    // 0x1514A348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514A34C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1514A350: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x1514A354: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514A358: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1514A35C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1514A360: nop

    // 0x1514A364: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x1514A368: sw          $t4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r12;
    // 0x1514A36C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514A370: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1514A374: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1514A378: jr          $ra
    // 0x1514A37C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1514A37C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1515EB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515EB84: addiu       $sp, $sp, -0x360
    ctx->r29 = ADD32(ctx->r29, -0X360);
    // 0x1515EB88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1515EB8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1515EB90: lw          $s0, 0x370($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X370);
    // 0x1515EB94: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x1515EB98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515EB9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1515EBA0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1515EBA4: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x1515EBA8: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x1515EBAC: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x1515EBB0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1515EBB4: addiu       $s3, $sp, 0x34
    ctx->r19 = ADD32(ctx->r29, 0X34);
    // 0x1515EBB8: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x1515EBBC: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1515EBC0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x1515EBC4: swc1        $f0, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f0.u32l;
    // 0x1515EBC8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x1515EBCC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1515EBD0: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x1515EBD4: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x1515EBD8: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x1515EBDC: beq         $s0, $zero, L_1515EC58
    if (ctx->r16 == 0) {
        // 0x1515EBE0: swc1        $f12, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
            goto L_1515EC58;
    }
    // 0x1515EBE0: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x1515EBE4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
L_1515EBE8:
    // 0x1515EBE8: lbu         $t6, 0x14($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X14);
    // 0x1515EBEC: bnel        $t6, $zero, L_1515EC50
    if (ctx->r14 != 0) {
        // 0x1515EBF0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515EC50;
    }
    goto skip_0;
    // 0x1515EBF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x1515EBF4: beql        $s1, $zero, L_1515EC14
    if (ctx->r17 == 0) {
        // 0x1515EBF8: lbu         $t0, 0x15($a1)
        ctx->r8 = MEM_BU(ctx->r5, 0X15);
            goto L_1515EC14;
    }
    goto skip_1;
    // 0x1515EBF8: lbu         $t0, 0x15($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X15);
    skip_1:
    // 0x1515EBFC: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x1515EC00: srl         $t8, $t7, 24
    ctx->r24 = S32(U32(ctx->r15) >> 24);
    // 0x1515EC04: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x1515EC08: beql        $t9, $zero, L_1515EC50
    if (ctx->r25 == 0) {
        // 0x1515EC0C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515EC50;
    }
    goto skip_2;
    // 0x1515EC0C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x1515EC10: lbu         $t0, 0x15($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X15);
L_1515EC14:
    // 0x1515EC14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1515EC18: sra         $t1, $t0, 2
    ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
    // 0x1515EC1C: beq         $s2, $t1, L_1515EC34
    if (ctx->r18 == ctx->r9) {
        // 0x1515EC20: nop
    
            goto L_1515EC34;
    }
    // 0x1515EC20: nop

    // 0x1515EC24: lw          $t2, 0x18($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X18);
    // 0x1515EC28: srl         $t3, $t2, 31
    ctx->r11 = S32(U32(ctx->r10) >> 31);
    // 0x1515EC2C: bnel        $t3, $zero, L_1515EC50
    if (ctx->r11 != 0) {
        // 0x1515EC30: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515EC50;
    }
    goto skip_3;
    // 0x1515EC30: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_1515EC34:
    // 0x1515EC34: jal         0x150A1DA0
    // 0x1515EC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150A1DA0(rdram, ctx);
        goto after_0;
    // 0x1515EC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1515EC3C: bnel        $v0, $zero, L_1515EC50
    if (ctx->r2 != 0) {
        // 0x1515EC40: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1515EC50;
    }
    goto skip_4;
    // 0x1515EC40: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x1515EC44: b           L_1515EC5C
    // 0x1515EC48: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
        goto L_1515EC5C;
    // 0x1515EC48: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x1515EC4C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_1515EC50:
    // 0x1515EC50: bnel        $s0, $zero, L_1515EBE8
    if (ctx->r16 != 0) {
        // 0x1515EC54: lw          $a1, 0x4($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X4);
            goto L_1515EBE8;
    }
    goto skip_5;
    // 0x1515EC54: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    skip_5:
L_1515EC58:
    // 0x1515EC58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515EC5C:
    // 0x1515EC5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515EC60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1515EC64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1515EC68: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1515EC6C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1515EC70: jr          $ra
    // 0x1515EC74: addiu       $sp, $sp, 0x360
    ctx->r29 = ADD32(ctx->r29, 0X360);
    return;
    return;
    // 0x1515EC74: addiu       $sp, $sp, 0x360
    ctx->r29 = ADD32(ctx->r29, 0X360);
;}
RECOMP_FUNC void func_15053430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15053430: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15053434: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15053438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1505343C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15053440: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x15053444: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15053448: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1505344C: bne         $v1, $at, L_15053468
    if (ctx->r3 != ctx->r1) {
        // 0x15053450: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_15053468;
    }
    // 0x15053450: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15053454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15053458: jal         0x15060F28
    // 0x1505345C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x1505345C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15053460: b           L_150535E0
    // 0x15053464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x15053464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15053468:
    // 0x15053468: lbu         $v0, 0x10E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10E);
    // 0x1505346C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15053470: lw          $t7, 0x1C90($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1C90);
    // 0x15053474: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x15053478: beq         $v0, $zero, L_15053498
    if (ctx->r2 == 0) {
        // 0x1505347C: lbu         $t0, 0x28($t7)
        ctx->r8 = MEM_BU(ctx->r15, 0X28);
            goto L_15053498;
    }
    // 0x1505347C: lbu         $t0, 0x28($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X28);
    // 0x15053480: beq         $at, $zero, L_15053498
    if (ctx->r1 == 0) {
        // 0x15053484: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15053498;
    }
    // 0x15053484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15053488: jal         0x1505D2B8
    // 0x1505348C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_1505D2B8(rdram, ctx);
        goto after_1;
    // 0x1505348C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x15053490: b           L_150535E0
    // 0x15053494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150535E0;
    // 0x15053494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15053498:
    // 0x15053498: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x1505349C: beq         $at, $zero, L_15053504
    if (ctx->r1 == 0) {
        // 0x150534A0: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_15053504;
    }
    // 0x150534A0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x150534A4: andi        $t8, $t0, 0x20
    ctx->r24 = ctx->r8 & 0X20;
    // 0x150534A8: beq         $t8, $zero, L_15053504
    if (ctx->r24 == 0) {
        // 0x150534AC: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_15053504;
    }
    // 0x150534AC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150534B0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150534B4: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150534B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150534BC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150534C0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150534C4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150534C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150534CC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x150534D0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150534D4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150534D8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150534DC: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    // 0x150534E0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150534E4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150534E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150534EC: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x150534F0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150534F4: jal         0x151669A0
    // 0x150534F8: nop

    func_151669A0(rdram, ctx);
        goto after_2;
    // 0x150534F8: nop

    after_2:
    // 0x150534FC: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x15053500: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_15053504:
    // 0x15053504: andi        $t5, $t0, 0x4
    ctx->r13 = ctx->r8 & 0X4;
    // 0x15053508: beq         $t5, $zero, L_15053524
    if (ctx->r13 == 0) {
        // 0x1505350C: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_15053524;
    }
    // 0x1505350C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x15053510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15053514: jal         0x1507D754
    // 0x15053518: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1507D754(rdram, ctx);
        goto after_3;
    // 0x15053518: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_3:
    // 0x1505351C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x15053520: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_15053524:
    // 0x15053524: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x15053528: beq         $t6, $zero, L_15053540
    if (ctx->r14 == 0) {
        // 0x1505352C: andi        $t8, $v1, 0x80
        ctx->r24 = ctx->r3 & 0X80;
            goto L_15053540;
    }
    // 0x1505352C: andi        $t8, $v1, 0x80
    ctx->r24 = ctx->r3 & 0X80;
    // 0x15053530: addiu       $t7, $zero, 0x2A
    ctx->r15 = ADD32(0, 0X2A);
    // 0x15053534: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x15053538: b           L_150535E0
    // 0x1505353C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x1505353C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15053540:
    // 0x15053540: beq         $t8, $zero, L_1505355C
    if (ctx->r24 == 0) {
        // 0x15053544: andi        $t9, $v1, 0x1
        ctx->r25 = ctx->r3 & 0X1;
            goto L_1505355C;
    }
    // 0x15053544: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x15053548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505354C: jal         0x15055B0C
    // 0x15053550: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    func_15055B0C(rdram, ctx);
        goto after_4;
    // 0x15053550: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    after_4:
    // 0x15053554: b           L_150535E0
    // 0x15053558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x15053558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1505355C:
    // 0x1505355C: beq         $t9, $zero, L_15053574
    if (ctx->r25 == 0) {
        // 0x15053560: andi        $t2, $v1, 0x40
        ctx->r10 = ctx->r3 & 0X40;
            goto L_15053574;
    }
    // 0x15053560: andi        $t2, $v1, 0x40
    ctx->r10 = ctx->r3 & 0X40;
    // 0x15053564: jal         0x15053694
    // 0x15053568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15053694(rdram, ctx);
        goto after_5;
    // 0x15053568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x1505356C: b           L_150535E0
    // 0x15053570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x15053570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15053574:
    // 0x15053574: beq         $t2, $zero, L_150535AC
    if (ctx->r10 == 0) {
        // 0x15053578: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150535AC;
    }
    // 0x15053578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505357C: lbu         $t5, 0x13F($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X13F);
    // 0x15053580: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15053584: lw          $t4, 0x2110($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2110);
    // 0x15053588: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x1505358C: addiu       $t3, $zero, 0x4E2
    ctx->r11 = ADD32(0, 0X4E2);
    // 0x15053590: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x15053594: sh          $t3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r11;
    // 0x15053598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505359C: jal         0x15060F28
    // 0x150535A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_6;
    // 0x150535A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x150535A4: b           L_150535E0
    // 0x150535A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x150535A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150535AC:
    // 0x150535AC: bne         $t1, $at, L_150535C4
    if (ctx->r9 != ctx->r1) {
        // 0x150535B0: nop
    
            goto L_150535C4;
    }
    // 0x150535B0: nop

    // 0x150535B4: jal         0x150536D0
    // 0x150535B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150536D0(rdram, ctx);
        goto after_7;
    // 0x150535B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x150535BC: b           L_150535E0
    // 0x150535C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x150535C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150535C4:
    // 0x150535C4: bne         $t1, $zero, L_150535D4
    if (ctx->r9 != 0) {
        // 0x150535C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150535D4;
    }
    // 0x150535C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150535CC: jal         0x15060F28
    // 0x150535D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_8;
    // 0x150535D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_150535D4:
    // 0x150535D4: b           L_150535E0
    // 0x150535D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150535E0;
    // 0x150535D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150535DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150535E0:
    // 0x150535E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150535E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150535E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150535EC: jr          $ra
    // 0x150535F0: nop

    return;
    return;
    // 0x150535F0: nop

;}
RECOMP_FUNC void func_150C9BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C9BDC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150C9BE0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150C9BE4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150C9BE8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x150C9BEC: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x150C9BF0: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150C9BF4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150C9BF8: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150C9BFC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150C9C00: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150C9C04: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150C9C08: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150C9C0C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150C9C10: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150C9C14: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150C9C18: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150C9C1C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150C9C20: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150C9C24: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x150C9C28: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150C9C2C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150C9C30: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150C9C34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C9C38: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150C9C3C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C9C40: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150C9C44: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x150C9C48: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150C9C4C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x150C9C50: addiu       $s6, $s6, -0x3D30
    ctx->r22 = ADD32(ctx->r22, -0X3D30);
    // 0x150C9C54: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x150C9C58: addiu       $fp, $zero, 0x14
    ctx->r30 = ADD32(0, 0X14);
    // 0x150C9C5C: addiu       $s7, $zero, 0x32C
    ctx->r23 = ADD32(0, 0X32C);
    // 0x150C9C60: addiu       $s5, $zero, 0x13
    ctx->r21 = ADD32(0, 0X13);
    // 0x150C9C64: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x150C9C68: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x150C9C6C: addiu       $s2, $zero, 0x53
    ctx->r18 = ADD32(0, 0X53);
    // 0x150C9C70: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_150C9C74:
    // 0x150C9C74: beq         $v0, $zero, L_150C9D6C
    if (ctx->r2 == 0) {
        // 0x150C9C78: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9C78: nop

    // 0x150C9C7C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150C9C80: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x150C9C84: nop

    // 0x150C9C88: bc1f        L_150C9D6C
    if (!c1cs) {
        // 0x150C9C8C: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9C8C: nop

    // 0x150C9C90: lbu         $t6, 0x125($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X125);
    // 0x150C9C94: bne         $t6, $zero, L_150C9D6C
    if (ctx->r14 != 0) {
        // 0x150C9C98: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9C98: nop

    // 0x150C9C9C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x150C9CA0: beql        $s2, $v1, L_150C9CB4
    if (ctx->r18 == ctx->r3) {
        // 0x150C9CA4: lwc1        $f6, 0x14($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
            goto L_150C9CB4;
    }
    goto skip_0;
    // 0x150C9CA4: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x150C9CA8: bne         $s3, $v0, L_150C9D6C
    if (ctx->r19 != ctx->r2) {
        // 0x150C9CAC: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9CAC: nop

    // 0x150C9CB0: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
L_150C9CB4:
    // 0x150C9CB4: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x150C9CB8: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C9CBC: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150C9CC0: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150C9CC4: lwc1        $f18, 0x44($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X44);
    // 0x150C9CC8: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150C9CCC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150C9CD0: nop

    // 0x150C9CD4: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150C9CD8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C9CDC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150C9CE0: sub.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x150C9CE4: bne         $s2, $v1, L_150C9CFC
    if (ctx->r18 != ctx->r3) {
        // 0x150C9CE8: mov.s       $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
            goto L_150C9CFC;
    }
    // 0x150C9CE8: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x150C9CEC: lbu         $t7, 0x13C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13C);
    // 0x150C9CF0: bnel        $t7, $zero, L_150C9D00
    if (ctx->r15 != 0) {
        // 0x150C9CF4: sub.s       $f0, $f18, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f14.fl;
            goto L_150C9D00;
    }
    goto skip_1;
    // 0x150C9CF4: sub.s       $f0, $f18, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f14.fl;
    skip_1:
    // 0x150C9CF8: sub.s       $f14, $f16, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f24.fl;
L_150C9CFC:
    // 0x150C9CFC: sub.s       $f0, $f18, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f14.fl;
L_150C9D00:
    // 0x150C9D00: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x150C9D04: nop

    // 0x150C9D08: bc1f        L_150C9D6C
    if (!c1cs) {
        // 0x150C9D0C: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9D0C: nop

    // 0x150C9D10: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x150C9D14: nop

    // 0x150C9D18: bc1f        L_150C9D6C
    if (!c1cs) {
        // 0x150C9D1C: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9D1C: nop

    // 0x150C9D20: bne         $s2, $v1, L_150C9D58
    if (ctx->r18 != ctx->r3) {
        // 0x150C9D24: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C9D58;
    }
    // 0x150C9D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C9D28: lbu         $t8, 0x124($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X124);
    // 0x150C9D2C: sb          $s4, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r20;
    // 0x150C9D30: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    // 0x150C9D34: multu       $t8, $s7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C9D38: sb          $s5, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r21;
    // 0x150C9D3C: mflo        $t9
    ctx->r25 = lo;
    // 0x150C9D40: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x150C9D44: lbu         $t1, 0x65($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X65);
    // 0x150C9D48: beq         $t1, $zero, L_150C9D6C
    if (ctx->r9 == 0) {
        // 0x150C9D4C: nop
    
            goto L_150C9D6C;
    }
    // 0x150C9D4C: nop

    // 0x150C9D50: b           L_150C9D6C
    // 0x150C9D54: sb          $fp, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r30;
        goto L_150C9D6C;
    // 0x150C9D54: sb          $fp, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r30;
L_150C9D58:
    // 0x150C9D58: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x150C9D5C: ori         $a1, $a1, 0xE
    ctx->r5 = ctx->r5 | 0XE;
    // 0x150C9D60: lhu         $a2, 0x7A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X7A);
    // 0x150C9D64: jal         0x1505D024
    // 0x150C9D68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x150C9D68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
L_150C9D6C:
    // 0x150C9D6C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150C9D70: addiu       $t2, $t2, 0x121C
    ctx->r10 = ADD32(ctx->r10, 0X121C);
    // 0x150C9D74: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x150C9D78: bnel        $s0, $t2, L_150C9C74
    if (ctx->r16 != ctx->r10) {
        // 0x150C9D7C: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_150C9C74;
    }
    goto skip_2;
    // 0x150C9D7C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x150C9D80: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x150C9D84: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x150C9D88: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x150C9D8C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x150C9D90: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x150C9D94: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x150C9D98: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150C9D9C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150C9DA0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150C9DA4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150C9DA8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150C9DAC: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150C9DB0: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150C9DB4: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150C9DB8: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x150C9DBC: jr          $ra
    // 0x150C9DC0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150C9DC0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_150102D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150102D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150102D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150102D8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x150102DC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150102E0: addiu       $t6, $zero, -0x6
    ctx->r14 = ADD32(0, -0X6);
    // 0x150102E4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150102E8: lw          $a1, 0x2E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E8);
    // 0x150102EC: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x150102F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150102F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150102F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150102FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15010300: jal         0x15195AA8
    // 0x15010304: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_0;
    // 0x15010304: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x15010308: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1501030C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010310: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15010314: addiu       $t8, $zero, -0x6
    ctx->r24 = ADD32(0, -0X6);
    // 0x15010318: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1501031C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15010320: lw          $a1, 0x2E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E8);
    // 0x15010324: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x15010328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501032C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010330: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15010334: jal         0x15195AA8
    // 0x15010338: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x15010338: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x1501033C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15010340: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010344: addiu       $t9, $zero, -0x3
    ctx->r25 = ADD32(0, -0X3);
    // 0x15010348: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1501034C: lw          $a1, 0x2EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EC);
    // 0x15010350: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x15010354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010358: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1501035C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15010360: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15010364: jal         0x15195AA8
    // 0x15010368: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_2;
    // 0x15010368: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
    // 0x1501036C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15010370: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010374: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15010378: addiu       $t1, $zero, -0x3
    ctx->r9 = ADD32(0, -0X3);
    // 0x1501037C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15010380: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15010384: lw          $a1, 0x2EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EC);
    // 0x15010388: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x1501038C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010390: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010394: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15010398: jal         0x15195AA8
    // 0x1501039C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_3;
    // 0x1501039C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x150103A0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150103A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150103A8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150103AC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150103B0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150103B4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150103B8: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x150103BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150103C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150103C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150103C8: jal         0x15149130
    // 0x150103CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_4;
    // 0x150103CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_4:
    // 0x150103D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150103D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150103D8: jr          $ra
    // 0x150103DC: nop

    return;
    return;
    // 0x150103DC: nop

;}
RECOMP_FUNC void func_150D596C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D596C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D5970: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150D5974: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D5978: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D597C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D5980: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150D5984: beq         $a2, $zero, L_150D59A0
    if (ctx->r6 == 0) {
        // 0x150D5988: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150D59A0;
    }
    // 0x150D5988: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150D598C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x150D5990: beq         $a2, $at, L_150D59A0
    if (ctx->r6 == ctx->r1) {
        // 0x150D5994: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_150D59A0;
    }
    // 0x150D5994: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150D5998: bnel        $a2, $at, L_150D59D8
    if (ctx->r6 != ctx->r1) {
        // 0x150D599C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_150D59D8;
    }
    goto skip_0;
    // 0x150D599C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    skip_0:
L_150D59A0:
    // 0x150D59A0: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x150D59A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D59A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150D59AC: beq         $v1, $t7, L_150D59C4
    if (ctx->r3 == ctx->r15) {
        // 0x150D59B0: nop
    
            goto L_150D59C4;
    }
    // 0x150D59B0: nop

    // 0x150D59B4: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x150D59B8: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x150D59BC: bnel        $t8, $t9, L_150D5A20
    if (ctx->r24 != ctx->r25) {
        // 0x150D59C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D5A20;
    }
    goto skip_1;
    // 0x150D59C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_150D59C4:
    // 0x150D59C4: jal         0x1516972C
    // 0x150D59C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150D59C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x150D59CC: b           L_150D5A20
    // 0x150D59D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150D5A20;
    // 0x150D59D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D59D4: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
L_150D59D8:
    // 0x150D59D8: bne         $v0, $at, L_150D5A1C
    if (ctx->r2 != ctx->r1) {
        // 0x150D59DC: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_150D5A1C;
    }
    // 0x150D59DC: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x150D59E0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150D59E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D59E8: bnel        $v1, $a0, L_150D5A08
    if (ctx->r3 != ctx->r4) {
        // 0x150D59EC: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_150D5A08;
    }
    goto skip_2;
    // 0x150D59EC: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x150D59F0: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x150D59F4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x150D59F8: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x150D59FC: b           L_150D5A1C
    // 0x150D5A00: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_150D5A1C;
    // 0x150D5A00: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x150D5A04: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_150D5A08:
    // 0x150D5A08: bnel        $t2, $a0, L_150D5A20
    if (ctx->r10 != ctx->r4) {
        // 0x150D5A0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D5A20;
    }
    goto skip_3;
    // 0x150D5A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x150D5A10: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150D5A14: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x150D5A18: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_150D5A1C:
    // 0x150D5A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D5A20:
    // 0x150D5A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D5A24: jr          $ra
    // 0x150D5A28: nop

    return;
    return;
    // 0x150D5A28: nop

;}
RECOMP_FUNC void func_1515A78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515A78C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1515A790: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1515A794: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1515A798: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1515A79C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1515A7A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1515A7A4: sb          $t6, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r14;
    // 0x1515A7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515A7AC: jal         0x1515A60C
    // 0x1515A7B0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_1515A60C(rdram, ctx);
        goto after_0;
    // 0x1515A7B0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_0:
    // 0x1515A7B4: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x1515A7B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1515A7BC: nop

    // 0x1515A7C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1515A7C4: nop

    // 0x1515A7C8: bc1fl       L_1515A7DC
    if (!c1cs) {
        // 0x1515A7CC: lwc1        $f8, 0x40($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
            goto L_1515A7DC;
    }
    goto skip_0;
    // 0x1515A7CC: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    skip_0:
    // 0x1515A7D0: b           L_1515A90C
    // 0x1515A7D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1515A90C;
    // 0x1515A7D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515A7D8: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
L_1515A7DC:
    // 0x1515A7DC: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x1515A7E0: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1515A7E4: addiu       $t8, $s0, 0xA8
    ctx->r24 = ADD32(ctx->r16, 0XA8);
    // 0x1515A7E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1515A7EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515A7F0: lwc1        $f10, 0x6408($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6408);
    // 0x1515A7F4: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x1515A7F8: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x1515A7FC: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x1515A800: lwc1        $f6, 0x54($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X54);
    // 0x1515A804: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1515A808: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x1515A80C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1515A810: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x1515A814: lwc1        $f0, 0x20($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X20);
    // 0x1515A818: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x1515A81C: nop

    // 0x1515A820: bc1fl       L_1515A86C
    if (!c1cs) {
        // 0x1515A824: lwc1        $f18, 0x44($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
            goto L_1515A86C;
    }
    goto skip_1;
    // 0x1515A824: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    skip_1:
    // 0x1515A828: jal         0x1514672C
    // 0x1515A82C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_1514672C(rdram, ctx);
        goto after_1;
    // 0x1515A82C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x1515A830: bne         $v0, $zero, L_1515A840
    if (ctx->r2 != 0) {
        // 0x1515A834: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_1515A840;
    }
    // 0x1515A834: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1515A838: b           L_1515A90C
    // 0x1515A83C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515A90C;
    // 0x1515A83C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515A840:
    // 0x1515A840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1515A844: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x1515A848: jal         0x15046C00
    // 0x1515A84C: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    func_15046C00(rdram, ctx);
        goto after_2;
    // 0x1515A84C: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    after_2:
    // 0x1515A850: beql        $v0, $zero, L_1515A888
    if (ctx->r2 == 0) {
        // 0x1515A854: lbu         $t0, 0x4B($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X4B);
            goto L_1515A888;
    }
    goto skip_2;
    // 0x1515A854: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    skip_2:
    // 0x1515A858: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1515A85C: sb          $zero, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = 0;
    // 0x1515A860: b           L_1515A884
    // 0x1515A864: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
        goto L_1515A884;
    // 0x1515A864: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x1515A868: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
L_1515A86C:
    // 0x1515A86C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x1515A870: nop

    // 0x1515A874: bc1fl       L_1515A888
    if (!c1cs) {
        // 0x1515A878: lbu         $t0, 0x4B($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X4B);
            goto L_1515A888;
    }
    goto skip_3;
    // 0x1515A878: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    skip_3:
    // 0x1515A87C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x1515A880: sb          $zero, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = 0;
L_1515A884:
    // 0x1515A884: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
L_1515A888:
    // 0x1515A888: bnel        $t0, $zero, L_1515A90C
    if (ctx->r8 != 0) {
        // 0x1515A88C: lbu         $v0, 0x4B($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X4B);
            goto L_1515A90C;
    }
    goto skip_4;
    // 0x1515A88C: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
    skip_4:
    // 0x1515A890: jal         0x150ADA68
    // 0x1515A894: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1515A894: nop

    after_3:
    // 0x1515A898: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515A89C: lwc1        $f4, 0x640C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X640C);
    // 0x1515A8A0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1515A8A4: nop

    // 0x1515A8A8: bc1fl       L_1515A90C
    if (!c1cs) {
        // 0x1515A8AC: lbu         $v0, 0x4B($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X4B);
            goto L_1515A90C;
    }
    goto skip_5;
    // 0x1515A8AC: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
    skip_5:
    // 0x1515A8B0: lbu         $t1, 0x9D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X9D);
    // 0x1515A8B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1515A8B8: bnel        $t1, $at, L_1515A90C
    if (ctx->r9 != ctx->r1) {
        // 0x1515A8BC: lbu         $v0, 0x4B($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X4B);
            goto L_1515A90C;
    }
    goto skip_6;
    // 0x1515A8BC: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
    skip_6:
    // 0x1515A8C0: jal         0x151D8E20
    // 0x1515A8C4: nop

    func_151D8E20(rdram, ctx);
        goto after_4;
    // 0x1515A8C4: nop

    after_4:
    // 0x1515A8C8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1515A8CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515A8D0: lwc1        $f8, 0x6410($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6410);
    // 0x1515A8D4: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x1515A8D8: lbu         $a2, 0x2B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2B);
    // 0x1515A8DC: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x1515A8E0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1515A8E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1515A8E8: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x1515A8EC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x1515A8F0: addiu       $a3, $s0, 0x84
    ctx->r7 = ADD32(ctx->r16, 0X84);
    // 0x1515A8F4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1515A8F8: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x1515A8FC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1515A900: jal         0x151DBCBC
    // 0x1515A904: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_151DBCBC(rdram, ctx);
        goto after_5;
    // 0x1515A904: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_5:
    // 0x1515A908: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
L_1515A90C:
    // 0x1515A90C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1515A910: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1515A914: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1515A918: jr          $ra
    // 0x1515A91C: nop

    return;
    return;
    // 0x1515A91C: nop

;}
RECOMP_FUNC void func_15187A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15187A98: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x15187A9C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15187AA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15187AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15187AA8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15187AAC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15187AB0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15187AB4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15187AB8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15187ABC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15187AC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15187AC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15187AC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15187ACC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15187AD0: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x15187AD4: lh          $t6, 0xA8($s1)
    ctx->r14 = MEM_H(ctx->r17, 0XA8);
    // 0x15187AD8: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x15187ADC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15187AE0: bltzl       $t6, L_15187D38
    if (SIGNED(ctx->r14) < 0) {
        // 0x15187AE4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15187D38;
    }
    goto skip_0;
    // 0x15187AE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x15187AE8: lw          $a1, 0x90($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X90);
    // 0x15187AEC: lw          $a2, 0x94($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X94);
    // 0x15187AF0: jal         0x150A7DA0
    // 0x15187AF4: lw          $a3, 0x98($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X98);
    func_150A7DA0(rdram, ctx);
        goto after_0;
    // 0x15187AF4: lw          $a3, 0x98($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X98);
    after_0:
    // 0x15187AF8: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15187AFC: addiu       $s5, $s5, -0x1640
    ctx->r21 = ADD32(ctx->r21, -0X1640);
    // 0x15187B00: lbu         $t7, 0x0($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X0);
    // 0x15187B04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15187B08: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15187B0C: addu        $a1, $s1, $t8
    ctx->r5 = ADD32(ctx->r17, ctx->r24);
    // 0x15187B10: jal         0x151EFD00
    // 0x15187B14: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    guMtxF2L2(rdram, ctx);
        goto after_1;
    // 0x15187B14: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x15187B18: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x15187B1C: lui         $fp, 0xDA38
    ctx->r30 = S32(0XDA38 << 16);
    // 0x15187B20: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15187B24: ori         $fp, $fp, 0x3
    ctx->r30 = ctx->r30 | 0X3;
    // 0x15187B28: addiu       $s7, $s7, -0x2AC8
    ctx->r23 = ADD32(ctx->r23, -0X2AC8);
    // 0x15187B2C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15187B30: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15187B34: addiu       $s6, $sp, 0x78
    ctx->r22 = ADD32(ctx->r29, 0X78);
L_15187B38:
    // 0x15187B38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15187B3C: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x15187B40: lbu         $t9, 0x0($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X0);
    // 0x15187B44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187B48: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15187B4C: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x15187B50: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x15187B54: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x15187B58: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15187B5C: lw          $t3, 0xA4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XA4);
    // 0x15187B60: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x15187B64: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15187B68: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x15187B6C: jal         0x150A7DA0
    // 0x15187B70: lw          $a1, 0x90($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X90);
    func_150A7DA0(rdram, ctx);
        goto after_2;
    // 0x15187B70: lw          $a1, 0x90($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X90);
    after_2:
    // 0x15187B74: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15187B78: lwc1        $f6, 0xA0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x15187B7C: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x15187B80: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x15187B84: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15187B88: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15187B8C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x15187B90: lwc1        $f16, 0x9C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x15187B94: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15187B98: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x15187B9C: lwc1        $f6, 0x9C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x15187BA0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15187BA4: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x15187BA8: lw          $t5, 0xA4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XA4);
    // 0x15187BAC: addu        $v0, $t5, $s3
    ctx->r2 = ADD32(ctx->r13, ctx->r19);
    // 0x15187BB0: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x15187BB4: bnel        $t6, $zero, L_15187BDC
    if (ctx->r14 != 0) {
        // 0x15187BB8: lw          $a1, 0x80($v0)
        ctx->r5 = MEM_W(ctx->r2, 0X80);
            goto L_15187BDC;
    }
    goto skip_1;
    // 0x15187BB8: lw          $a1, 0x80($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X80);
    skip_1:
    // 0x15187BBC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x15187BC0: lw          $a1, 0x80($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X80);
    // 0x15187BC4: lw          $a2, 0x84($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X84);
    // 0x15187BC8: jal         0x150A8050
    // 0x15187BCC: lw          $a3, 0x88($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X88);
    func_150A8050(rdram, ctx);
        goto after_3;
    // 0x15187BCC: lw          $a3, 0x88($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X88);
    after_3:
    // 0x15187BD0: b           L_15187BEC
    // 0x15187BD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_15187BEC;
    // 0x15187BD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15187BD8: lw          $a1, 0x80($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X80);
L_15187BDC:
    // 0x15187BDC: lw          $a2, 0x84($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X84);
    // 0x15187BE0: jal         0x15187D6C
    // 0x15187BE4: lw          $a3, 0x88($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X88);
    func_15187D6C(rdram, ctx);
        goto after_4;
    // 0x15187BE4: lw          $a3, 0x88($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X88);
    after_4:
    // 0x15187BE8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_15187BEC:
    // 0x15187BEC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15187BF0: jal         0x150A7A48
    // 0x15187BF4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_150A7A48(rdram, ctx);
        goto after_5;
    // 0x15187BF4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_5:
    // 0x15187BF8: lw          $t7, 0xA4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XA4);
    // 0x15187BFC: lbu         $t0, 0x0($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X0);
    // 0x15187C00: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x15187C04: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x15187C08: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x15187C0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15187C10: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x15187C14: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x15187C18: jal         0x150A7790
    // 0x15187C1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    guMtxF2L(rdram, ctx);
        goto after_6;
    // 0x15187C1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x15187C20: lw          $t2, 0xA4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XA4);
    // 0x15187C24: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15187C28: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x15187C2C: addu        $v0, $t2, $s3
    ctx->r2 = ADD32(ctx->r10, ctx->r19);
    // 0x15187C30: lh          $a1, 0x96($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X96);
    // 0x15187C34: lh          $t3, 0x94($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X94);
    // 0x15187C38: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x15187C3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187C40: subu        $t4, $a1, $t3
    ctx->r12 = SUB32(ctx->r5, ctx->r11);
    // 0x15187C44: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x15187C48: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x15187C4C: div         $zero, $t5, $a1
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r5)));
    // 0x15187C50: mflo        $a2
    ctx->r6 = lo;
    // 0x15187C54: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x15187C58: bne         $a1, $zero, L_15187C64
    if (ctx->r5 != 0) {
        // 0x15187C5C: nop
    
            goto L_15187C64;
    }
    // 0x15187C5C: nop

    // 0x15187C60: break       7
    do_break(353926240);
L_15187C64:
    // 0x15187C64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15187C68: bne         $a1, $at, L_15187C7C
    if (ctx->r5 != ctx->r1) {
        // 0x15187C6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15187C7C;
    }
    // 0x15187C6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15187C70: bne         $t5, $at, L_15187C7C
    if (ctx->r13 != ctx->r1) {
        // 0x15187C74: nop
    
            goto L_15187C7C;
    }
    // 0x15187C74: nop

    // 0x15187C78: break       6
    do_break(353926264);
L_15187C7C:
    // 0x15187C7C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x15187C80: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15187C84: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x15187C88: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15187C8C: lui         $t0, 0xDA38
    ctx->r8 = S32(0XDA38 << 16);
    // 0x15187C90: ori         $t0, $t0, 0x1
    ctx->r8 = ctx->r8 | 0X1;
    // 0x15187C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15187C98: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x15187C9C: lbu         $t3, 0x0($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X0);
    // 0x15187CA0: lw          $t9, 0xA4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA4);
    // 0x15187CA4: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x15187CA8: addu        $t1, $t1, $s2
    ctx->r9 = ADD32(ctx->r9, ctx->r18);
    // 0x15187CAC: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x15187CB0: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15187CB4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x15187CB8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x15187CBC: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x15187CC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187CC4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x15187CC8: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x15187CCC: ori         $t6, $t6, 0x4008
    ctx->r14 = ctx->r14 | 0X4008;
    // 0x15187CD0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x15187CD4: sw          $s7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r23;
    // 0x15187CD8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187CDC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15187CE0: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x15187CE4: ori         $t7, $t7, 0x204
    ctx->r15 = ctx->r15 | 0X204;
    // 0x15187CE8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15187CEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15187CF0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187CF4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15187CF8: lui         $t8, 0x500
    ctx->r24 = S32(0X500 << 16);
    // 0x15187CFC: ori         $t8, $t8, 0x206
    ctx->r24 = ctx->r24 | 0X206;
    // 0x15187D00: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x15187D04: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15187D08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15187D10: lui         $t0, 0x500
    ctx->r8 = S32(0X500 << 16);
    // 0x15187D14: ori         $t0, $t0, 0x406
    ctx->r8 = ctx->r8 | 0X406;
    // 0x15187D18: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x15187D1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15187D20: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15187D24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15187D28: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15187D2C: bne         $s2, $at, L_15187B38
    if (ctx->r18 != ctx->r1) {
        // 0x15187D30: addiu       $s3, $s3, 0xA0
        ctx->r19 = ADD32(ctx->r19, 0XA0);
            goto L_15187B38;
    }
    // 0x15187D30: addiu       $s3, $s3, 0xA0
    ctx->r19 = ADD32(ctx->r19, 0XA0);
    // 0x15187D34: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15187D38:
    // 0x15187D38: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15187D3C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15187D40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15187D44: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15187D48: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15187D4C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15187D50: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15187D54: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15187D58: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15187D5C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15187D60: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15187D64: jr          $ra
    // 0x15187D68: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x15187D68: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_15016680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016680: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016684: sw          $zero, 0x212C($at)
    MEM_W(0X212C, ctx->r1) = 0;
    // 0x15016688: jr          $ra
    // 0x1501668C: nop

    return;
    return;
    // 0x1501668C: nop

;}
RECOMP_FUNC void func_151CF844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CF844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151CF848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151CF84C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151CF850: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151CF854: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151CF858: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151CF85C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151CF860: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x151CF864: lw          $t7, 0x98($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X98);
    // 0x151CF868: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151CF86C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x151CF870: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x151CF874: addiu       $a3, $t7, 0x4
    ctx->r7 = ADD32(ctx->r15, 0X4);
    // 0x151CF878: beql        $t8, $zero, L_151CF88C
    if (ctx->r24 == 0) {
        // 0x151CF87C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151CF88C;
    }
    goto skip_0;
    // 0x151CF87C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x151CF880: jal         0x15169850
    // 0x151CF884: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151CF884: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151CF888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151CF88C:
    // 0x151CF88C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151CF890: jr          $ra
    // 0x151CF894: nop

    return;
    return;
    // 0x151CF894: nop

;}
RECOMP_FUNC void func_16001678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001678: lui         $t6, 0x1600
    ctx->r14 = S32(0X1600 << 16);
    // 0x1600167C: lbu         $t6, 0x3888($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3888);
    // 0x16001680: lui         $v1, 0x1600
    ctx->r3 = S32(0X1600 << 16);
    // 0x16001684: lw          $v1, 0x38A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X38A8);
    // 0x16001688: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x1600168C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x16001690: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x16001694: addiu       $at, $zero, 0x124
    ctx->r1 = ADD32(0, 0X124);
    // 0x16001698: bne         $v1, $at, L_160016A8
    if (ctx->r3 != ctx->r1) {
        // 0x1600169C: lw          $v0, -0x5518($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X5518);
            goto L_160016A8;
    }
    // 0x1600169C: lw          $v0, -0x5518($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5518);
    // 0x160016A0: b           L_160016AC
    // 0x160016A4: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
        goto L_160016AC;
    // 0x160016A4: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
L_160016A8:
    // 0x160016A8: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
L_160016AC:
    // 0x160016AC: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x160016B0: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x160016B4: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x160016B8: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x160016BC: mflo        $t9
    ctx->r25 = lo;
    // 0x160016C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x160016C4: addu        $a1, $t0, $v0
    ctx->r5 = ADD32(ctx->r8, ctx->r2);
    // 0x160016C8: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x160016CC: beq         $at, $zero, L_160016EC
    if (ctx->r1 == 0) {
        // 0x160016D0: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_160016EC;
    }
L_160016D0:
    // 0x160016D0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x160016D4: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x160016D8: sw          $v1, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r3;
    // 0x160016DC: sw          $v1, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r3;
    // 0x160016E0: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    // 0x160016E4: bne         $at, $zero, L_160016D0
    if (ctx->r1 != 0) {
        // 0x160016E8: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_160016D0;
    }
    // 0x160016E8: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
L_160016EC:
    // 0x160016EC: jr          $ra
    // 0x160016F0: nop

    return;
    return;
    // 0x160016F0: nop

;}
RECOMP_FUNC void func_1508CAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508CAD8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x1508CADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508CAE0: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x1508CAE4: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x1508CAE8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x1508CAEC: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x1508CAF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1508CAF4: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1508CAF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1508CAFC: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x1508CB00: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1508CB04: lwc1        $f6, 0x6C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x1508CB08: lwc1        $f4, 0x70($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X70);
    // 0x1508CB0C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x1508CB10: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x1508CB14: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1508CB18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1508CB1C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1508CB20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508CB24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1508CB28: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508CB2C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1508CB30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508CB34: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508CB38: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1508CB3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508CB40: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508CB44: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x1508CB48: addu        $a3, $t9, $t6
    ctx->r7 = ADD32(ctx->r25, ctx->r14);
    // 0x1508CB4C: beq         $t7, $at, L_1508D83C
    if (ctx->r15 == ctx->r1) {
        // 0x1508CB50: swc1        $f8, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
            goto L_1508D83C;
    }
    // 0x1508CB50: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x1508CB54: lw          $t2, 0x318($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X318);
    // 0x1508CB58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1508CB5C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1508CB60: beql        $t2, $zero, L_1508CB74
    if (ctx->r10 == 0) {
        // 0x1508CB64: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_1508CB74;
    }
    goto skip_0;
    // 0x1508CB64: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    skip_0:
    // 0x1508CB68: b           L_1508CB74
    // 0x1508CB6C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
        goto L_1508CB74;
    // 0x1508CB6C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x1508CB70: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_1508CB74:
    // 0x1508CB74: lw          $t8, 0x31C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X31C);
    // 0x1508CB78: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x1508CB7C: lbu         $a1, 0x78($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X78);
    // 0x1508CB80: beql        $a1, $a2, L_1508CB9C
    if (ctx->r5 == ctx->r6) {
        // 0x1508CB84: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_1508CB9C;
    }
    goto skip_1;
    // 0x1508CB84: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    skip_1:
    // 0x1508CB88: beq         $a1, $at, L_1508CB98
    if (ctx->r5 == ctx->r1) {
        // 0x1508CB8C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1508CB98;
    }
    // 0x1508CB8C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1508CB90: bnel        $a1, $at, L_1508CBA0
    if (ctx->r5 != ctx->r1) {
        // 0x1508CB94: lw          $a0, 0xA4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA4);
            goto L_1508CBA0;
    }
    goto skip_2;
    // 0x1508CB94: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    skip_2:
L_1508CB98:
    // 0x1508CB98: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_1508CB9C:
    // 0x1508CB9C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
L_1508CBA0:
    // 0x1508CBA0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1508CBA4: ori         $at, $at, 0xFFF
    ctx->r1 = ctx->r1 | 0XFFF;
    // 0x1508CBA8: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x1508CBAC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1508CBB0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508CBB4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508CBB8: jal         0x1505EEF4
    // 0x1508CBBC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x1508CBBC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_0:
    // 0x1508CBC0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508CBC4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x1508CBC8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508CBCC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508CBD0: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x1508CBD4: bne         $v0, $zero, L_1508CBE4
    if (ctx->r2 != 0) {
        // 0x1508CBD8: sw          $v0, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r2;
            goto L_1508CBE4;
    }
    // 0x1508CBD8: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x1508CBDC: b           L_1508D840
    // 0x1508CBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1508D840;
    // 0x1508CBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1508CBE4:
    // 0x1508CBE4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x1508CBE8: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x1508CBEC: beq         $a1, $at, L_1508CC10
    if (ctx->r5 == ctx->r1) {
        // 0x1508CBF0: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_1508CC10;
    }
    // 0x1508CBF0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1508CBF4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1508CBF8: beq         $a1, $at, L_1508CC10
    if (ctx->r5 == ctx->r1) {
        // 0x1508CBFC: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_1508CC10;
    }
    // 0x1508CBFC: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1508CC00: beq         $a1, $at, L_1508CC10
    if (ctx->r5 == ctx->r1) {
        // 0x1508CC04: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_1508CC10;
    }
    // 0x1508CC04: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x1508CC08: bne         $a1, $at, L_1508CC18
    if (ctx->r5 != ctx->r1) {
        // 0x1508CC0C: nop
    
            goto L_1508CC18;
    }
    // 0x1508CC0C: nop

L_1508CC10:
    // 0x1508CC10: b           L_1508CC64
    // 0x1508CC14: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_1508CC64;
    // 0x1508CC14: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_1508CC18:
    // 0x1508CC18: bne         $a1, $a2, L_1508CC28
    if (ctx->r5 != ctx->r6) {
        // 0x1508CC1C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1508CC28;
    }
    // 0x1508CC1C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1508CC20: b           L_1508CC64
    // 0x1508CC24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_1508CC64;
    // 0x1508CC24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_1508CC28:
    // 0x1508CC28: beq         $a1, $at, L_1508CC3C
    if (ctx->r5 == ctx->r1) {
        // 0x1508CC2C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_1508CC3C;
    }
    // 0x1508CC2C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1508CC30: beq         $a1, $at, L_1508CC3C
    if (ctx->r5 == ctx->r1) {
        // 0x1508CC34: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1508CC3C;
    }
    // 0x1508CC34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508CC38: bne         $a1, $at, L_1508CC54
    if (ctx->r5 != ctx->r1) {
        // 0x1508CC3C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_1508CC54;
    }
L_1508CC3C:
    // 0x1508CC3C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1508CC40: beq         $a1, $at, L_1508CC4C
    if (ctx->r5 == ctx->r1) {
        // 0x1508CC44: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_1508CC4C;
    }
    // 0x1508CC44: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1508CC48: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
L_1508CC4C:
    // 0x1508CC4C: b           L_1508CC64
    // 0x1508CC50: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
        goto L_1508CC64;
    // 0x1508CC50: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_1508CC54:
    // 0x1508CC54: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1508CC58: bnel        $a1, $at, L_1508CC68
    if (ctx->r5 != ctx->r1) {
        // 0x1508CC5C: addiu       $t4, $zero, 0x3
        ctx->r12 = ADD32(0, 0X3);
            goto L_1508CC68;
    }
    goto skip_3;
    // 0x1508CC5C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    skip_3:
    // 0x1508CC60: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_1508CC64:
    // 0x1508CC64: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
L_1508CC68:
    // 0x1508CC68: bne         $a1, $t4, L_1508CC74
    if (ctx->r5 != ctx->r12) {
        // 0x1508CC6C: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_1508CC74;
    }
    // 0x1508CC6C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1508CC70: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
L_1508CC74:
    // 0x1508CC74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508CC78: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1508CC7C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1508CC80: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x1508CC84: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1508CC88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1508CC8C: addiu       $t3, $t3, 0x23B0
    ctx->r11 = ADD32(ctx->r11, 0X23B0);
    // 0x1508CC90: bne         $t6, $at, L_1508CCA4
    if (ctx->r14 != ctx->r1) {
        // 0x1508CC94: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_1508CCA4;
    }
    // 0x1508CC94: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1508CC98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508CC9C: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1508CCA0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_1508CCA4:
    // 0x1508CCA4: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x1508CCA8: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x1508CCAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1508CCB0: lh          $t7, 0x16BC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X16BC);
    // 0x1508CCB4: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x1508CCB8: beq         $t7, $at, L_1508CCD0
    if (ctx->r15 == ctx->r1) {
        // 0x1508CCBC: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_1508CCD0;
    }
    // 0x1508CCBC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1508CCC0: lb          $t8, 0xBD0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0XBD0);
    // 0x1508CCC4: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x1508CCC8: bnel        $at, $zero, L_1508CDCC
    if (ctx->r1 != 0) {
        // 0x1508CCCC: lw          $t6, 0xAC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XAC);
            goto L_1508CDCC;
    }
    goto skip_4;
    // 0x1508CCCC: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    skip_4:
L_1508CCD0:
    // 0x1508CCD0: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508CCD4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1508CCD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1508CCDC: lbu         $v1, 0x78($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X78);
    // 0x1508CCE0: beq         $v1, $at, L_1508CD28
    if (ctx->r3 == ctx->r1) {
        // 0x1508CCE4: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_1508CD28;
    }
    // 0x1508CCE4: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x1508CCE8: beq         $v1, $at, L_1508CD40
    if (ctx->r3 == ctx->r1) {
        // 0x1508CCEC: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_1508CD40;
    }
    // 0x1508CCEC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1508CCF0: beq         $v1, $at, L_1508CD1C
    if (ctx->r3 == ctx->r1) {
        // 0x1508CCF4: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_1508CD1C;
    }
    // 0x1508CCF4: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1508CCF8: beq         $v1, $at, L_1508CD34
    if (ctx->r3 == ctx->r1) {
        // 0x1508CCFC: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_1508CD34;
    }
    // 0x1508CCFC: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x1508CD00: beq         $v1, $at, L_1508CD28
    if (ctx->r3 == ctx->r1) {
        // 0x1508CD04: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_1508CD28;
    }
    // 0x1508CD04: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x1508CD08: beq         $v1, $at, L_1508CD1C
    if (ctx->r3 == ctx->r1) {
        // 0x1508CD0C: nop
    
            goto L_1508CD1C;
    }
    // 0x1508CD0C: nop

    // 0x1508CD10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1508CD14: b           L_1508CD4C
    // 0x1508CD18: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
        goto L_1508CD4C;
    // 0x1508CD18: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
L_1508CD1C:
    // 0x1508CD1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508CD20: b           L_1508CD48
    // 0x1508CD24: lwc1        $f2, -0x2594($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2594);
        goto L_1508CD48;
    // 0x1508CD24: lwc1        $f2, -0x2594($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2594);
L_1508CD28:
    // 0x1508CD28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508CD2C: b           L_1508CD48
    // 0x1508CD30: lwc1        $f2, -0x2590($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2590);
        goto L_1508CD48;
    // 0x1508CD30: lwc1        $f2, -0x2590($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2590);
L_1508CD34:
    // 0x1508CD34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508CD38: b           L_1508CD48
    // 0x1508CD3C: lwc1        $f2, -0x258C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X258C);
        goto L_1508CD48;
    // 0x1508CD3C: lwc1        $f2, -0x258C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X258C);
L_1508CD40:
    // 0x1508CD40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508CD44: lwc1        $f2, -0x2588($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2588);
L_1508CD48:
    // 0x1508CD48: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
L_1508CD4C:
    // 0x1508CD4C: nop

    // 0x1508CD50: bc1tl       L_1508CDCC
    if (c1cs) {
        // 0x1508CD54: lw          $t6, 0xAC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XAC);
            goto L_1508CDCC;
    }
    goto skip_5;
    // 0x1508CD54: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    skip_5:
    // 0x1508CD58: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508CD5C: lwc1        $f10, 0x14($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1508CD60: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1508CD64: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x1508CD68: lwc1        $f6, 0x1C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1508CD6C: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508CD70: lwc1        $f10, 0x18($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1508CD74: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1508CD78: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CD7C: sub.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x1508CD80: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1508CD84: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1508CD88: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1508CD8C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1508CD90: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1508CD94: lwc1        $f8, 0x16B4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X16B4);
    // 0x1508CD98: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1508CD9C: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1508CDA0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508CDA4: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1508CDA8: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1508CDAC: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1508CDB0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1508CDB4: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x1508CDB8: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1508CDBC: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x1508CDC0: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1508CDC4: nop

    // 0x1508CDC8: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
L_1508CDCC:
    // 0x1508CDCC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1508CDD0: bnel        $t6, $zero, L_1508CE10
    if (ctx->r14 != 0) {
        // 0x1508CDD4: lh          $t7, 0x1A4($v0)
        ctx->r15 = MEM_H(ctx->r2, 0X1A4);
            goto L_1508CE10;
    }
    goto skip_6;
    // 0x1508CDD4: lh          $t7, 0x1A4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X1A4);
    skip_6:
    // 0x1508CDD8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508CDDC: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CDE0: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x1508CDE4: addu        $v1, $a0, $t0
    ctx->r3 = ADD32(ctx->r4, ctx->r8);
    // 0x1508CDE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508CDEC: lwc1        $f2, 0x17A8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X17A8);
    // 0x1508CDF0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1508CDF4: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x1508CDF8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508CDFC: lwc1        $f8, 0x1828($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1828);
    // 0x1508CE00: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1508CE04: b           L_1508CE50
    // 0x1508CE08: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
        goto L_1508CE50;
    // 0x1508CE08: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1508CE0C: lh          $t7, 0x1A4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X1A4);
L_1508CE10:
    // 0x1508CE10: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CE14: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x1508CE18: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1508CE1C: addu        $v1, $a0, $t0
    ctx->r3 = ADD32(ctx->r4, ctx->r8);
    // 0x1508CE20: lwc1        $f2, 0x17A8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X17A8);
    // 0x1508CE24: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508CE28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508CE2C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1508CE30: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x1508CE34: lh          $t8, 0x1A8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X1A8);
    // 0x1508CE38: lwc1        $f10, 0x1828($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1828);
    // 0x1508CE3C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1508CE40: nop

    // 0x1508CE44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508CE48: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1508CE4C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
L_1508CE50:
    // 0x1508CE50: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1508CE54: lwc1        $f4, 0x1868($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1868);
    // 0x1508CE58: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1508CE5C: nop

    // 0x1508CE60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508CE64: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1508CE68: bne         $a1, $t4, L_1508CE7C
    if (ctx->r5 != ctx->r12) {
        // 0x1508CE6C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508CE7C;
    }
    // 0x1508CE6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508CE70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508CE74: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x1508CE78: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
L_1508CE7C:
    // 0x1508CE7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508CE80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508CE84: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x1508CE88: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CE8C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x1508CE90: nop

    // 0x1508CE94: bc1f        L_1508CEA4
    if (!c1cs) {
        // 0x1508CE98: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508CEA4;
    }
    // 0x1508CE98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508CE9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508CEA0: nop

L_1508CEA4:
    // 0x1508CEA4: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x1508CEA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508CEAC: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1508CEB0: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1508CEB4: swc1        $f8, 0x17A8($v1)
    MEM_W(0X17A8, ctx->r3) = ctx->f8.u32l;
    // 0x1508CEB8: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x1508CEBC: addu        $v1, $t6, $t0
    ctx->r3 = ADD32(ctx->r14, ctx->r8);
    // 0x1508CEC0: lwc1        $f10, 0x1828($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1828);
    // 0x1508CEC4: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1508CEC8: swc1        $f4, 0x1828($v1)
    MEM_W(0X1828, ctx->r3) = ctx->f4.u32l;
    // 0x1508CECC: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x1508CED0: lwc1        $f10, 0x14($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1508CED4: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x1508CED8: lwc1        $f8, 0x17A8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X17A8);
    // 0x1508CEDC: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1508CEE0: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x1508CEE4: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1508CEE8: lwc1        $f4, 0x1828($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1828);
    // 0x1508CEEC: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CEF0: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1508CEF4: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1508CEF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508CEFC: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1508CF00: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1508CF04: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508CF08: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1508CF0C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x1508CF10: bc1f        L_1508CF24
    if (!c1cs) {
        // 0x1508CF14: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1508CF24;
    }
    // 0x1508CF14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508CF18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508CF1C: b           L_1508CFA8
    // 0x1508CF20: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
        goto L_1508CFA8;
    // 0x1508CF20: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
L_1508CF24:
    // 0x1508CF24: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1508CF28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508CF2C: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x1508CF30: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x1508CF34: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1508CF38: nop

    // 0x1508CF3C: bc1t        L_1508CF4C
    if (c1cs) {
        // 0x1508CF40: nop
    
            goto L_1508CF4C;
    }
    // 0x1508CF40: nop

    // 0x1508CF44: bnel        $a1, $t4, L_1508CF64
    if (ctx->r5 != ctx->r12) {
        // 0x1508CF48: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_1508CF64;
    }
    goto skip_7;
    // 0x1508CF48: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_7:
L_1508CF4C:
    // 0x1508CF4C: beql        $t8, $zero, L_1508CF64
    if (ctx->r24 == 0) {
        // 0x1508CF50: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_1508CF64;
    }
    goto skip_8;
    // 0x1508CF50: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_8:
    // 0x1508CF54: bne         $v0, $zero, L_1508CF60
    if (ctx->r2 != 0) {
        // 0x1508CF58: sw          $zero, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = 0;
            goto L_1508CF60;
    }
    // 0x1508CF58: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x1508CF5C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_1508CF60:
    // 0x1508CF60: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_1508CF64:
    // 0x1508CF64: nop

    // 0x1508CF68: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508CF6C: bne         $a1, $a2, L_1508CF84
    if (ctx->r5 != ctx->r6) {
        // 0x1508CF70: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_1508CF84;
    }
    // 0x1508CF70: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x1508CF74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508CF78: nop

    // 0x1508CF7C: mul.s       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x1508CF80: nop

L_1508CF84:
    // 0x1508CF84: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1508CF88: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CF8C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x1508CF90: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1508CF94: nop

    // 0x1508CF98: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1508CF9C: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1508CFA0: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1508CFA4: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
L_1508CFA8:
    // 0x1508CFA8: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x1508CFAC: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1508CFB0: neg.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = -ctx->f18.fl;
    // 0x1508CFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1508CFB8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508CFBC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508CFC0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1508CFC4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1508CFC8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508CFCC: jal         0x1505A630
    // 0x1508CFD0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    func_1505A630(rdram, ctx);
        goto after_1;
    // 0x1508CFD0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x1508CFD4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x1508CFD8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508CFDC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508CFE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1508CFE4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1508CFE8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508CFEC: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1508CFF0: bgez        $v0, L_1508D008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1508CFF4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1508D008;
    }
    // 0x1508CFF4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508CFF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508CFFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D000: nop

    // 0x1508D004: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1508D008:
    // 0x1508D008: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1508D00C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D010: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508D014: mul.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1508D018: beql        $a1, $at, L_1508D030
    if (ctx->r5 == ctx->r1) {
        // 0x1508D01C: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_1508D030;
    }
    goto skip_9;
    // 0x1508D01C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    skip_9:
    // 0x1508D020: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D024: b           L_1508D03C
    // 0x1508D028: lwc1        $f14, 0x16C($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X16C);
        goto L_1508D03C;
    // 0x1508D028: lwc1        $f14, 0x16C($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X16C);
    // 0x1508D02C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_1508D030:
    // 0x1508D030: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D034: lwc1        $f4, 0x40($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X40);
    // 0x1508D038: sub.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f10.fl;
L_1508D03C:
    // 0x1508D03C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508D040: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D044: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1508D048: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1508D04C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D050: swc1        $f14, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f14.u32l;
    // 0x1508D054: jal         0x15144BC8
    // 0x1508D058: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    func_15144BC8(rdram, ctx);
        goto after_2;
    // 0x1508D058: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1508D05C: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1508D060: jal         0x15144BC8
    // 0x1508D064: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    func_15144BC8(rdram, ctx);
        goto after_3;
    // 0x1508D064: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x1508D068: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1508D06C: jal         0x15144BC8
    // 0x1508D070: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    func_15144BC8(rdram, ctx);
        goto after_4;
    // 0x1508D070: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    after_4:
    // 0x1508D074: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1508D078: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508D07C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508D080: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D084: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x1508D088: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1508D08C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1508D090: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D094: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1508D098: bc1f        L_1508D0B0
    if (!c1cs) {
        // 0x1508D09C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_1508D0B0;
    }
    // 0x1508D09C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1508D0A0: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x1508D0A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D0A8: nop

    // 0x1508D0AC: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
L_1508D0B0:
    // 0x1508D0B0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x1508D0B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508D0B8: nop

    // 0x1508D0BC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x1508D0C0: nop

    // 0x1508D0C4: bc1t        L_1508D0E0
    if (c1cs) {
        // 0x1508D0C8: lui         $at, 0xC234
        ctx->r1 = S32(0XC234 << 16);
            goto L_1508D0E0;
    }
    // 0x1508D0C8: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x1508D0CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D0D0: nop

    // 0x1508D0D4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x1508D0D8: nop

    // 0x1508D0DC: bc1f        L_1508D0E8
    if (!c1cs) {
        // 0x1508D0E0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_1508D0E8;
    }
L_1508D0E0:
    // 0x1508D0E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1508D0E4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_1508D0E8:
    // 0x1508D0E8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x1508D0EC: bnel        $t7, $zero, L_1508D130
    if (ctx->r15 != 0) {
        // 0x1508D0F0: lw          $t8, 0x9C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X9C);
            goto L_1508D130;
    }
    goto skip_10;
    // 0x1508D0F0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    skip_10:
    // 0x1508D0F4: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x1508D0F8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x1508D0FC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1508D100: lwc1        $f8, 0x18($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X18);
    // 0x1508D104: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1508D108: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508D10C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1508D110: lw          $t8, 0x23B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X23B0);
    // 0x1508D114: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508D118: addu        $v1, $t8, $t0
    ctx->r3 = ADD32(ctx->r24, ctx->r8);
    // 0x1508D11C: lwc1        $f0, 0x17E8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X17E8);
    // 0x1508D120: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1508D124: b           L_1508D160
    // 0x1508D128: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
        goto L_1508D160;
    // 0x1508D128: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1508D12C: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
L_1508D130:
    // 0x1508D130: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x1508D134: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508D138: lh          $t9, 0x1A6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X1A6);
    // 0x1508D13C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1508D140: lw          $t7, 0x23B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X23B0);
    // 0x1508D144: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1508D148: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508D14C: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x1508D150: lwc1        $f0, 0x17E8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X17E8);
    // 0x1508D154: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508D158: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508D15C: sub.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f0.fl;
L_1508D160:
    // 0x1508D160: mul.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1508D164: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508D168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1508D16C: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1508D170: swc1        $f4, 0x17E8($v1)
    MEM_W(0X17E8, ctx->r3) = ctx->f4.u32l;
    // 0x1508D174: lw          $t8, 0x23B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X23B0);
    // 0x1508D178: lw          $t7, 0x31C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D17C: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1508D180: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x1508D184: lwc1        $f10, 0x17E8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X17E8);
    // 0x1508D188: lwc1        $f6, 0x140($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X140);
    // 0x1508D18C: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x1508D190: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D194: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1508D198: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1508D19C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D1A0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508D1A4: jal         0x1505A630
    // 0x1508D1A8: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_5;
    // 0x1508D1A8: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    after_5:
    // 0x1508D1AC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x1508D1B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1508D1B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508D1B8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508D1BC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D1C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1508D1C4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1508D1C8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D1CC: bgez        $v0, L_1508D1E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1508D1D0: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1508D1E4;
    }
    // 0x1508D1D0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508D1D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508D1D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D1DC: nop

    // 0x1508D1E0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1508D1E4:
    // 0x1508D1E4: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1508D1E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D1EC: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D1F0: mul.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1508D1F4: lwc1        $f14, 0x170($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X170);
    // 0x1508D1F8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x1508D1FC: nop

    // 0x1508D200: bc1f        L_1508D224
    if (!c1cs) {
        // 0x1508D204: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_1508D224;
    }
    // 0x1508D204: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1508D208: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508D20C: nop

    // 0x1508D210: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
L_1508D214:
    // 0x1508D214: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x1508D218: nop

    // 0x1508D21C: bc1tl       L_1508D214
    if (c1cs) {
        // 0x1508D220: sub.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
            goto L_1508D214;
    }
    goto skip_11;
    // 0x1508D220: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
    skip_11:
L_1508D224:
    // 0x1508D224: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x1508D228: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1508D22C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508D230: bc1fl       L_1508D250
    if (!c1cs) {
        // 0x1508D234: sub.s       $f12, $f14, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
            goto L_1508D250;
    }
    goto skip_12;
    // 0x1508D234: sub.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
    skip_12:
    // 0x1508D238: sub.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
L_1508D23C:
    // 0x1508D23C: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x1508D240: nop

    // 0x1508D244: bc1tl       L_1508D23C
    if (c1cs) {
        // 0x1508D248: sub.s       $f14, $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
            goto L_1508D23C;
    }
    goto skip_13;
    // 0x1508D248: sub.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
    skip_13:
    // 0x1508D24C: sub.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
L_1508D250:
    // 0x1508D250: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508D254: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D258: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1508D25C: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1508D260: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D264: jal         0x15144BC8
    // 0x1508D268: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    func_15144BC8(rdram, ctx);
        goto after_6;
    // 0x1508D268: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x1508D26C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1508D270: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508D274: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1508D278: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508D27C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508D280: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D284: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x1508D288: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1508D28C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1508D290: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D294: bc1f        L_1508D2B0
    if (!c1cs) {
        // 0x1508D298: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_1508D2B0;
    }
    // 0x1508D298: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1508D29C: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
L_1508D2A0:
    // 0x1508D2A0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x1508D2A4: nop

    // 0x1508D2A8: bc1tl       L_1508D2A0
    if (c1cs) {
        // 0x1508D2AC: sub.s       $f2, $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_1508D2A0;
    }
    goto skip_14;
    // 0x1508D2AC: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    skip_14:
L_1508D2B0:
    // 0x1508D2B0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1508D2B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508D2B8: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1508D2BC: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x1508D2C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D2C4: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1508D2C8: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x1508D2CC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1508D2D0: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1508D2D4: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x1508D2D8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x1508D2DC: bc1fl       L_1508D2F0
    if (!c1cs) {
        // 0x1508D2E0: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_1508D2F0;
    }
    goto skip_15;
    // 0x1508D2E0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    skip_15:
    // 0x1508D2E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508D2E8: nop

    // 0x1508D2EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_1508D2F0:
    // 0x1508D2F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1508D2F4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x1508D2F8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x1508D2FC: nop

    // 0x1508D300: bc1fl       L_1508D310
    if (!c1cs) {
        // 0x1508D304: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1508D310;
    }
    goto skip_16;
    // 0x1508D304: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_16:
    // 0x1508D308: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x1508D30C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1508D310:
    // 0x1508D310: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1508D314: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1508D318: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x1508D31C: nop

    // 0x1508D320: bc1fl       L_1508D330
    if (!c1cs) {
        // 0x1508D324: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1508D330;
    }
    goto skip_17;
    // 0x1508D324: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_17:
    // 0x1508D328: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1508D32C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1508D330:
    // 0x1508D330: nop

    // 0x1508D334: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1508D338: nop

    // 0x1508D33C: bc1f        L_1508D348
    if (!c1cs) {
        // 0x1508D340: nop
    
            goto L_1508D348;
    }
    // 0x1508D340: nop

    // 0x1508D344: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1508D348:
    // 0x1508D348: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1508D34C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1508D350: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1508D354: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x1508D358: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508D35C: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x1508D360: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D364: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1508D368: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508D36C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508D370: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1508D374: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1508D378: sub.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1508D37C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1508D380: bc1f        L_1508D390
    if (!c1cs) {
        // 0x1508D384: nop
    
            goto L_1508D390;
    }
    // 0x1508D384: nop

    // 0x1508D388: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1508D38C: nop

L_1508D390:
    // 0x1508D390: bne         $a1, $at, L_1508D3A4
    if (ctx->r5 != ctx->r1) {
        // 0x1508D394: add.s       $f18, $f6, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f18.fl;
            goto L_1508D3A4;
    }
    // 0x1508D394: add.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1508D398: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x1508D39C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508D3A0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_1508D3A4:
    // 0x1508D3A4: beql        $t7, $zero, L_1508D450
    if (ctx->r15 == 0) {
        // 0x1508D3A8: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_1508D450;
    }
    goto skip_18;
    // 0x1508D3A8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    skip_18:
    // 0x1508D3AC: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D3B0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1508D3B4: lwc1        $f4, 0x16C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X16C);
    // 0x1508D3B8: addiu       $a2, $v0, 0x90
    ctx->r6 = ADD32(ctx->r2, 0X90);
    // 0x1508D3BC: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1508D3C0: swc1        $f8, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->f8.u32l;
    // 0x1508D3C4: lw          $t8, 0x31C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D3C8: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1508D3CC: swc1        $f6, 0x170($t8)
    MEM_W(0X170, ctx->r24) = ctx->f6.u32l;
    // 0x1508D3D0: lw          $a0, 0x31C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D3D4: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x1508D3D8: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x1508D3DC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D3E0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1508D3E4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1508D3E8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D3EC: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    // 0x1508D3F0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508D3F4: jal         0x15048758
    // 0x1508D3F8: addiu       $a0, $a0, 0x16C
    ctx->r4 = ADD32(ctx->r4, 0X16C);
    func_15048758(rdram, ctx);
        goto after_7;
    // 0x1508D3F8: addiu       $a0, $a0, 0x16C
    ctx->r4 = ADD32(ctx->r4, 0X16C);
    after_7:
    // 0x1508D3FC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D400: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1508D404: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1508D408: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D40C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1508D410: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1508D414: lwc1        $f4, 0x16C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X16C);
    // 0x1508D418: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D41C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1508D420: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1508D424: swc1        $f4, 0x174($v0)
    MEM_W(0X174, ctx->r2) = ctx->f4.u32l;
    // 0x1508D428: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D42C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1508D430: lwc1        $f10, 0x170($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X170);
    // 0x1508D434: swc1        $f10, 0x178($v0)
    MEM_W(0X178, ctx->r2) = ctx->f10.u32l;
    // 0x1508D438: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D43C: sb          $zero, 0x85($t9)
    MEM_B(0X85, ctx->r25) = 0;
    // 0x1508D440: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D444: b           L_1508D4B0
    // 0x1508D448: sb          $zero, 0x86($t6)
    MEM_B(0X86, ctx->r14) = 0;
        goto L_1508D4B0;
    // 0x1508D448: sb          $zero, 0x86($t6)
    MEM_B(0X86, ctx->r14) = 0;
    // 0x1508D44C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
L_1508D450:
    // 0x1508D450: beql        $t7, $zero, L_1508D488
    if (ctx->r15 == 0) {
        // 0x1508D454: trunc.w.s   $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_1508D488;
    }
    goto skip_19;
    // 0x1508D454: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    skip_19:
    // 0x1508D458: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1508D45C: lw          $t6, 0x36C($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X36C);
    // 0x1508D460: addiu       $a2, $t2, 0x1A4
    ctx->r6 = ADD32(ctx->r10, 0X1A4);
    // 0x1508D464: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    // 0x1508D468: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1508D46C: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508D470: sb          $t9, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r25;
    // 0x1508D474: lw          $t9, 0x36C($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X36C);
    // 0x1508D478: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1508D47C: b           L_1508D4B0
    // 0x1508D480: sb          $t8, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r24;
        goto L_1508D4B0;
    // 0x1508D480: sb          $t8, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r24;
    // 0x1508D484: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
L_1508D488:
    // 0x1508D488: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D48C: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x1508D490: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1508D494: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1508D498: addiu       $a2, $v0, 0x90
    ctx->r6 = ADD32(ctx->r2, 0X90);
    // 0x1508D49C: sb          $t7, 0x85($v0)
    MEM_B(0X85, ctx->r2) = ctx->r15;
    // 0x1508D4A0: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D4A4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1508D4A8: nop

    // 0x1508D4AC: sb          $t9, 0x86($t6)
    MEM_B(0X86, ctx->r14) = ctx->r25;
L_1508D4B0:
    // 0x1508D4B0: beq         $t1, $zero, L_1508D754
    if (ctx->r9 == 0) {
        // 0x1508D4B4: lw          $t9, 0xA8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XA8);
            goto L_1508D754;
    }
    // 0x1508D4B4: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x1508D4B8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1508D4BC: bne         $a1, $at, L_1508D524
    if (ctx->r5 != ctx->r1) {
        // 0x1508D4C0: lui         $at, 0xC248
        ctx->r1 = S32(0XC248 << 16);
            goto L_1508D524;
    }
    // 0x1508D4C0: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x1508D4C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508D4C8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508D4CC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x1508D4D0: nop

    // 0x1508D4D4: bc1fl       L_1508D7D4
    if (!c1cs) {
        // 0x1508D4D8: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7D4;
    }
    goto skip_20;
    // 0x1508D4D8: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_20:
    // 0x1508D4DC: lw          $t7, 0x23B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X23B0);
    // 0x1508D4E0: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x1508D4E4: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x1508D4E8: lw          $t9, 0x16C0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X16C0);
    // 0x1508D4EC: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x1508D4F0: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x1508D4F4: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x1508D4F8: and         $t7, $t9, $t8
    ctx->r15 = ctx->r25 & ctx->r24;
    // 0x1508D4FC: beql        $t7, $zero, L_1508D7D4
    if (ctx->r15 == 0) {
        // 0x1508D500: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7D4;
    }
    goto skip_21;
    // 0x1508D500: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_21:
    // 0x1508D504: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D508: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1508D50C: lhu         $t6, 0x8A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8A);
    // 0x1508D510: ori         $t9, $t6, 0x2000
    ctx->r25 = ctx->r14 | 0X2000;
    // 0x1508D514: sh          $t9, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r25;
    // 0x1508D518: lw          $t8, 0x31C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D51C: b           L_1508D7D0
    // 0x1508D520: sb          $v1, 0x8E($t8)
    MEM_B(0X8E, ctx->r24) = ctx->r3;
        goto L_1508D7D0;
    // 0x1508D520: sb          $v1, 0x8E($t8)
    MEM_B(0X8E, ctx->r24) = ctx->r3;
L_1508D524:
    // 0x1508D524: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508D528: bne         $a1, $at, L_1508D690
    if (ctx->r5 != ctx->r1) {
        // 0x1508D52C: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1508D690;
    }
    // 0x1508D52C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508D530: lui         $at, 0x4308
    ctx->r1 = S32(0X4308 << 16);
    // 0x1508D534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508D538: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1508D53C: lui         $at, 0x4426
    ctx->r1 = S32(0X4426 << 16);
    // 0x1508D540: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508D544: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1508D548: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1508D54C: div.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1508D550: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1508D554: nop

    // 0x1508D558: bc1f        L_1508D564
    if (!c1cs) {
        // 0x1508D55C: nop
    
            goto L_1508D564;
    }
    // 0x1508D55C: nop

    // 0x1508D560: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_1508D564:
    // 0x1508D564: lw          $t7, -0x1654($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1654);
    // 0x1508D568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508D56C: lwc1        $f6, -0x2584($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2584);
    // 0x1508D570: andi        $t6, $t7, 0x3F
    ctx->r14 = ctx->r15 & 0X3F;
    // 0x1508D574: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1508D578: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    // 0x1508D57C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D580: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508D584: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D588: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x1508D58C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x1508D590: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x1508D594: mul.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1508D598: jal         0x15047D60
    // 0x1508D59C: nop

    sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x1508D59C: nop

    after_8:
    // 0x1508D5A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508D5A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1508D5A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508D5AC: lwc1        $f4, -0x2580($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2580);
    // 0x1508D5B0: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1508D5B4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1508D5B8: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1508D5BC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D5C0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D5C4: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1508D5C8: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1508D5CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508D5D0: add.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1508D5D4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x1508D5D8: nop

    // 0x1508D5DC: bc1f        L_1508D5E8
    if (!c1cs) {
        // 0x1508D5E0: nop
    
            goto L_1508D5E8;
    }
    // 0x1508D5E0: nop

    // 0x1508D5E4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_1508D5E8:
    // 0x1508D5E8: lwc1        $f8, -0x257C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X257C);
    // 0x1508D5EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508D5F0: lwc1        $f4, -0x2578($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2578);
    // 0x1508D5F4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1508D5F8: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1508D5FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D600: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D604: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x1508D608: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x1508D60C: sb          $zero, 0x86($t9)
    MEM_B(0X86, ctx->r25) = 0;
    // 0x1508D610: lw          $t8, 0x31C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D614: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1508D618: add.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1508D61C: sb          $zero, 0x85($t8)
    MEM_B(0X85, ctx->r24) = 0;
    // 0x1508D620: lhu         $t7, 0x76($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X76);
    // 0x1508D624: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1508D628: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508D62C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1508D630: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1508D634: nop

    // 0x1508D638: subu        $t8, $t7, $t9
    ctx->r24 = SUB32(ctx->r15, ctx->r25);
    // 0x1508D63C: or          $t7, $t8, $zero
    ctx->r15 = ctx->r24 | 0;
    // 0x1508D640: sh          $t8, 0x76($a3)
    MEM_H(0X76, ctx->r7) = ctx->r24;
    // 0x1508D644: addiu       $t9, $t7, 0x4000
    ctx->r25 = ADD32(ctx->r15, 0X4000);
    // 0x1508D648: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x1508D64C: sra         $t6, $t8, 16
    ctx->r14 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1508D650: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1508D654: sh          $t7, 0x7A($a3)
    MEM_H(0X7A, ctx->r7) = ctx->r15;
    // 0x1508D658: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508D65C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1508D660: swc1        $f6, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f6.u32l;
    // 0x1508D664: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x1508D668: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1508D66C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1508D670: jal         0x150DA5EC
    // 0x1508D674: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    func_150DA5EC(rdram, ctx);
        goto after_9;
    // 0x1508D674: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    after_9:
    // 0x1508D678: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1508D67C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1508D680: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1508D684: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1508D688: b           L_1508D7D4
    // 0x1508D68C: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
        goto L_1508D7D4;
    // 0x1508D68C: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
L_1508D690:
    // 0x1508D690: addiu       $v0, $v0, 0x23B0
    ctx->r2 = ADD32(ctx->r2, 0X23B0);
    // 0x1508D694: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1508D698: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x1508D69C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x1508D6A0: lw          $t8, 0x29C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X29C);
    // 0x1508D6A4: bltzl       $t8, L_1508D7D4
    if (SIGNED(ctx->r24) < 0) {
        // 0x1508D6A8: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7D4;
    }
    goto skip_22;
    // 0x1508D6A8: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_22:
    // 0x1508D6AC: lw          $t7, 0x31C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D6B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1508D6B4: bne         $t1, $at, L_1508D710
    if (ctx->r9 != ctx->r1) {
        // 0x1508D6B8: sh          $t6, 0x8A($t7)
        MEM_H(0X8A, ctx->r15) = ctx->r14;
            goto L_1508D710;
    }
    // 0x1508D6B8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    // 0x1508D6BC: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D6C0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1508D6C4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1508D6C8: sb          $v1, 0x8E($t9)
    MEM_B(0X8E, ctx->r25) = ctx->r3;
    // 0x1508D6CC: lb          $t8, 0xBD0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0XBD0);
    // 0x1508D6D0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1508D6D4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1508D6D8: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1508D6DC: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x1508D6E0: lw          $t8, 0x29C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X29C);
    // 0x1508D6E4: lb          $t6, 0x72D8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X72D8);
    // 0x1508D6E8: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1508D6EC: beql        $at, $zero, L_1508D7D4
    if (ctx->r1 == 0) {
        // 0x1508D6F0: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7D4;
    }
    goto skip_23;
    // 0x1508D6F0: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_23:
    // 0x1508D6F4: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D6F8: lhu         $t7, 0x8A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8A);
    // 0x1508D6FC: andi        $t9, $t7, 0xDFFF
    ctx->r25 = ctx->r15 & 0XDFFF;
    // 0x1508D700: sh          $t9, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r25;
    // 0x1508D704: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D708: b           L_1508D7D0
    // 0x1508D70C: sb          $zero, 0x8E($t6)
    MEM_B(0X8E, ctx->r14) = 0;
        goto L_1508D7D0;
    // 0x1508D70C: sb          $zero, 0x8E($t6)
    MEM_B(0X8E, ctx->r14) = 0;
L_1508D710:
    // 0x1508D710: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1508D714: bne         $t1, $v1, L_1508D748
    if (ctx->r9 != ctx->r3) {
        // 0x1508D718: lw          $t8, 0xA8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA8);
            goto L_1508D748;
    }
    // 0x1508D718: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x1508D71C: beql        $t8, $zero, L_1508D738
    if (ctx->r24 == 0) {
        // 0x1508D720: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D738;
    }
    goto skip_24;
    // 0x1508D720: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_24:
    // 0x1508D724: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D728: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x1508D72C: b           L_1508D7D0
    // 0x1508D730: sb          $t7, 0x8E($t9)
    MEM_B(0X8E, ctx->r25) = ctx->r15;
        goto L_1508D7D0;
    // 0x1508D730: sb          $t7, 0x8E($t9)
    MEM_B(0X8E, ctx->r25) = ctx->r15;
    // 0x1508D734: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
L_1508D738:
    // 0x1508D738: lhu         $t6, 0x8A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8A);
    // 0x1508D73C: andi        $t8, $t6, 0xDFFF
    ctx->r24 = ctx->r14 & 0XDFFF;
    // 0x1508D740: b           L_1508D7D0
    // 0x1508D744: sh          $t8, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r24;
        goto L_1508D7D0;
    // 0x1508D744: sh          $t8, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r24;
L_1508D748:
    // 0x1508D748: lw          $t7, 0x31C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D74C: b           L_1508D7D0
    // 0x1508D750: sb          $v1, 0x8E($t7)
    MEM_B(0X8E, ctx->r15) = ctx->r3;
        goto L_1508D7D0;
    // 0x1508D750: sb          $v1, 0x8E($t7)
    MEM_B(0X8E, ctx->r15) = ctx->r3;
L_1508D754:
    // 0x1508D754: beq         $t9, $zero, L_1508D794
    if (ctx->r25 == 0) {
        // 0x1508D758: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_1508D794;
    }
    // 0x1508D758: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1508D75C: beql        $t6, $zero, L_1508D77C
    if (ctx->r14 == 0) {
        // 0x1508D760: lw          $t6, 0x31C($a3)
        ctx->r14 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D77C;
    }
    goto skip_25;
    // 0x1508D760: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    skip_25:
    // 0x1508D764: lw          $t8, 0x31C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D768: sh          $zero, 0x8C($t8)
    MEM_H(0X8C, ctx->r24) = 0;
    // 0x1508D76C: lw          $t7, 0x31C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D770: b           L_1508D7D0
    // 0x1508D774: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
        goto L_1508D7D0;
    // 0x1508D774: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x1508D778: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
L_1508D77C:
    // 0x1508D77C: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    // 0x1508D780: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1508D784: sh          $t9, 0x8C($t6)
    MEM_H(0X8C, ctx->r14) = ctx->r25;
    // 0x1508D788: lw          $t7, 0x31C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D78C: b           L_1508D7D0
    // 0x1508D790: sb          $t8, 0x8F($t7)
    MEM_B(0X8F, ctx->r15) = ctx->r24;
        goto L_1508D7D0;
    // 0x1508D790: sb          $t8, 0x8F($t7)
    MEM_B(0X8F, ctx->r15) = ctx->r24;
L_1508D794:
    // 0x1508D794: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1508D798: beql        $t9, $zero, L_1508D7D4
    if (ctx->r25 == 0) {
        // 0x1508D79C: lw          $v0, 0x31C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7D4;
    }
    goto skip_26;
    // 0x1508D79C: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
    skip_26:
    // 0x1508D7A0: beql        $t2, $zero, L_1508D7BC
    if (ctx->r10 == 0) {
        // 0x1508D7A4: lw          $t9, 0x31C($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X31C);
            goto L_1508D7BC;
    }
    goto skip_27;
    // 0x1508D7A4: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
    skip_27:
    // 0x1508D7A8: lw          $v0, 0x36C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X36C);
    // 0x1508D7AC: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x1508D7B0: ori         $t8, $t6, 0x2000
    ctx->r24 = ctx->r14 | 0X2000;
    // 0x1508D7B4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x1508D7B8: lw          $t9, 0x31C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X31C);
L_1508D7BC:
    // 0x1508D7BC: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x1508D7C0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1508D7C4: sh          $t7, 0x8A($t9)
    MEM_H(0X8A, ctx->r25) = ctx->r15;
    // 0x1508D7C8: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D7CC: sb          $v1, 0x8E($t6)
    MEM_B(0X8E, ctx->r14) = ctx->r3;
L_1508D7D0:
    // 0x1508D7D0: lw          $v0, 0x31C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X31C);
L_1508D7D4:
    // 0x1508D7D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1508D7D8: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x1508D7DC: lhu         $t8, 0x8A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8A);
    // 0x1508D7E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508D7E4: ori         $t7, $t8, 0x10
    ctx->r15 = ctx->r24 | 0X10;
    // 0x1508D7E8: sh          $t7, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r15;
    // 0x1508D7EC: lw          $t6, 0x31C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X31C);
    // 0x1508D7F0: sb          $t9, 0x8E($t6)
    MEM_B(0X8E, ctx->r14) = ctx->r25;
    // 0x1508D7F4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1508D7F8: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1508D7FC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1508D800: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1508D804: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x1508D808: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1508D80C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1508D810: beq         $t8, $zero, L_1508D824
    if (ctx->r24 == 0) {
        // 0x1508D814: nop
    
            goto L_1508D824;
    }
    // 0x1508D814: nop

    // 0x1508D818: lwc1        $f4, 0x1A4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1A4);
    // 0x1508D81C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1508D820: swc1        $f8, 0x1A8($t2)
    MEM_W(0X1A8, ctx->r10) = ctx->f8.u32l;
L_1508D824:
    // 0x1508D824: beql        $t2, $zero, L_1508D840
    if (ctx->r10 == 0) {
        // 0x1508D828: lw          $v0, 0x3C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X3C);
            goto L_1508D840;
    }
    goto skip_28;
    // 0x1508D828: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    skip_28:
    // 0x1508D82C: lw          $v0, 0x36C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X36C);
    // 0x1508D830: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x1508D834: ori         $t9, $t7, 0x10
    ctx->r25 = ctx->r15 | 0X10;
    // 0x1508D838: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_1508D83C:
    // 0x1508D83C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_1508D840:
    // 0x1508D840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1508D844: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x1508D848: jr          $ra
    // 0x1508D84C: nop

    return;
    return;
    // 0x1508D84C: nop

;}
RECOMP_FUNC void func_15071E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071E20: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15071E24: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15071E28: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15071E2C: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15071E30: sb          $t6, 0x247($t7)
    MEM_B(0X247, ctx->r15) = ctx->r14;
    // 0x15071E34: jr          $ra
    // 0x15071E38: nop

    return;
    return;
    // 0x15071E38: nop

;}
RECOMP_FUNC void func_150198FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150198FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15019900: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15019904: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15019908: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501990C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15019910: lbu         $t6, -0x1A8B($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1A8B);
    // 0x15019914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15019918: bne         $t6, $at, L_1501992C
    if (ctx->r14 != ctx->r1) {
        // 0x1501991C: nop
    
            goto L_1501992C;
    }
    // 0x1501991C: nop

    // 0x15019920: jal         0x151D6778
    // 0x15019924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151D6778(rdram, ctx);
        goto after_0;
    // 0x15019924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15019928: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1501992C:
    // 0x1501992C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15019930: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x15019934: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15019938: addiu       $a0, $a0, 0x2FA4
    ctx->r4 = ADD32(ctx->r4, 0X2FA4);
    // 0x1501993C: beq         $v1, $zero, L_15019988
    if (ctx->r3 == 0) {
        // 0x15019940: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_15019988;
    }
    // 0x15019940: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x15019944: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x15019948: lui         $t8, 0xDC08
    ctx->r24 = S32(0XDC08 << 16);
    // 0x1501994C: ori         $t8, $t8, 0x8
    ctx->r24 = ctx->r24 | 0X8;
    // 0x15019950: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15019954: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15019958: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1501995C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15019960: lw          $t2, -0x19D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19D8);
    // 0x15019964: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x15019968: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x1501996C: sll         $t1, $t1, 7
    ctx->r9 = S32(ctx->r9 << 7);
    // 0x15019970: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x15019974: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x15019978: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x1501997C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15019980: b           L_150199B0
    // 0x15019984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_150199B0;
    // 0x15019984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15019988:
    // 0x15019988: lui         $t5, 0xDC08
    ctx->r13 = S32(0XDC08 << 16);
    // 0x1501998C: ori         $t5, $t5, 0x8
    ctx->r13 = ctx->r13 | 0X8;
    // 0x15019990: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15019994: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x15019998: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501999C: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x150199A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150199A4: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x150199A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x150199AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150199B0:
    // 0x150199B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150199B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150199B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150199BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150199C0: jal         0x1501A490
    // 0x150199C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_1;
    // 0x150199C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x150199C8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150199CC: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x150199D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150199D4: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150199D8: beq         $t8, $zero, L_15019B08
    if (ctx->r24 == 0) {
        // 0x150199DC: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_15019B08;
    }
    // 0x150199DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150199E0: lb          $v1, 0x2F90($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X2F90);
    // 0x150199E4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150199E8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150199EC: bne         $v1, $zero, L_15019ACC
    if (ctx->r3 != 0) {
        // 0x150199F0: slti        $at, $v1, 0x5
        ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_15019ACC;
    }
    // 0x150199F0: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x150199F4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150199F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150199FC: addiu       $t0, $t0, -0x19E0
    ctx->r8 = ADD32(ctx->r8, -0X19E0);
    // 0x15019A00: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15019A04: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x15019A08: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15019A0C: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x15019A10: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x15019A14: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x15019A18: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15019A1C: lw          $t4, -0x163C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X163C);
    // 0x15019A20: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15019A24: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15019A28: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x15019A2C: lui         $t5, 0xED00
    ctx->r13 = S32(0XED00 << 16);
    // 0x15019A30: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x15019A34: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15019A38: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15019A3C: lw          $t2, -0x19DC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19DC);
    // 0x15019A40: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15019A44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15019A48: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x15019A4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15019A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019A54: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15019A58: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x15019A5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15019A60: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15019A64: nop

    // 0x15019A68: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15019A6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15019A70: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15019A74: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15019A78: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15019A7C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x15019A80: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x15019A84: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x15019A88: or          $t6, $t1, $t5
    ctx->r14 = ctx->r9 | ctx->r13;
    // 0x15019A8C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x15019A90: lbu         $t7, -0x1640($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1640);
    // 0x15019A94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019A98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15019A9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15019AA0: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x15019AA4: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x15019AA8: jal         0x151D5E90
    // 0x15019AAC: lw          $a1, -0x5514($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5514);
    func_151D5E90(rdram, ctx);
        goto after_2;
    // 0x15019AAC: lw          $a1, -0x5514($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5514);
    after_2:
    // 0x15019AB0: jal         0x1501A680
    // 0x15019AB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1501A680(rdram, ctx);
        goto after_3;
    // 0x15019AB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x15019AB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15019ABC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15019AC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15019AC4: b           L_15019AE8
    // 0x15019AC8: sb          $v1, 0x2F90($at)
    MEM_B(0X2F90, ctx->r1) = ctx->r3;
        goto L_15019AE8;
    // 0x15019AC8: sb          $v1, 0x2F90($at)
    MEM_B(0X2F90, ctx->r1) = ctx->r3;
L_15019ACC:
    // 0x15019ACC: beq         $at, $zero, L_15019AE8
    if (ctx->r1 == 0) {
        // 0x15019AD0: addiu       $t3, $v1, 0x1
        ctx->r11 = ADD32(ctx->r3, 0X1);
            goto L_15019AE8;
    }
    // 0x15019AD0: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x15019AD4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15019AD8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15019ADC: sb          $t3, 0x2F90($at)
    MEM_B(0X2F90, ctx->r1) = ctx->r11;
    // 0x15019AE0: jal         0x151D61B0
    // 0x15019AE4: lw          $a0, -0x163C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X163C);
    func_151D61B0(rdram, ctx);
        goto after_4;
    // 0x15019AE4: lw          $a0, -0x163C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X163C);
    after_4:
L_15019AE8:
    // 0x15019AE8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15019AEC: lw          $a1, -0x163C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X163C);
    // 0x15019AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019AF8: jal         0x151D5E90
    // 0x15019AFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D5E90(rdram, ctx);
        goto after_5;
    // 0x15019AFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x15019B00: b           L_15019B0C
    // 0x15019B04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_15019B0C;
    // 0x15019B04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15019B08:
    // 0x15019B08: sb          $zero, 0x2F90($at)
    MEM_B(0X2F90, ctx->r1) = 0;
L_15019B0C:
    // 0x15019B0C: jal         0x1517EFAC
    // 0x15019B10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1517EFAC(rdram, ctx);
        goto after_6;
    // 0x15019B10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x15019B14: bne         $v0, $zero, L_15019B3C
    if (ctx->r2 != 0) {
        // 0x15019B18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15019B3C;
    }
    // 0x15019B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15019B1C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15019B20: jal         0x1517E28C
    // 0x15019B24: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
    func_1517E28C(rdram, ctx);
        goto after_7;
    // 0x15019B24: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
    after_7:
    // 0x15019B28: jal         0x15172F70
    // 0x15019B2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15172F70(rdram, ctx);
        goto after_8;
    // 0x15019B2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x15019B30: jal         0x15181EE0
    // 0x15019B34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15181EE0(rdram, ctx);
        goto after_9;
    // 0x15019B34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x15019B38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15019B3C:
    // 0x15019B3C: jal         0x1517F564
    // 0x15019B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1517F564(rdram, ctx);
        goto after_10;
    // 0x15019B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x15019B44: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15019B48: lbu         $t4, -0x1540($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1540);
    // 0x15019B4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15019B50: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15019B54: bnel        $t4, $zero, L_15019B78
    if (ctx->r12 != 0) {
        // 0x15019B58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15019B78;
    }
    goto skip_0;
    // 0x15019B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x15019B5C: lbu         $t1, -0x153F($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X153F);
    // 0x15019B60: bnel        $t1, $zero, L_15019B78
    if (ctx->r9 != 0) {
        // 0x15019B64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15019B78;
    }
    goto skip_1;
    // 0x15019B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x15019B68: jal         0x1508FD38
    // 0x15019B6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1508FD38(rdram, ctx);
        goto after_11;
    // 0x15019B6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x15019B70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15019B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15019B78:
    // 0x15019B78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15019B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019B80: jal         0x151674F8
    // 0x15019B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151674F8(rdram, ctx);
        goto after_12;
    // 0x15019B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x15019B88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15019B8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15019B90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15019B94: jal         0x151674F8
    // 0x15019B98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151674F8(rdram, ctx);
        goto after_13;
    // 0x15019B98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x15019B9C: jal         0x15096934
    // 0x15019BA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15096934(rdram, ctx);
        goto after_14;
    // 0x15019BA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x15019BA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15019BA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15019BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15019BB0: jr          $ra
    // 0x15019BB4: nop

    return;
    return;
    // 0x15019BB4: nop

;}
RECOMP_FUNC void func_1507B3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B404: jal         0x1507A3E8
    // 0x1507B408: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B408: nop

    after_0:
    // 0x1507B40C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B410: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B414: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B418: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B41C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B420: jal         0x1506E46C
    // 0x1507B424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1507B428: beq         $v0, $zero, L_1507B438
    if (ctx->r2 == 0) {
        // 0x1507B42C: addiu       $a0, $zero, 0xBB8
        ctx->r4 = ADD32(0, 0XBB8);
            goto L_1507B438;
    }
    // 0x1507B42C: addiu       $a0, $zero, 0xBB8
    ctx->r4 = ADD32(0, 0XBB8);
    // 0x1507B430: jal         0x1506BAD8
    // 0x1507B434: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    func_1506BAD8(rdram, ctx);
        goto after_2;
    // 0x1507B434: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    after_2:
L_1507B438:
    // 0x1507B438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B43C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B440: jr          $ra
    // 0x1507B444: nop

    return;
    return;
    // 0x1507B444: nop

;}
RECOMP_FUNC void __sinf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10026540: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x10026544: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x10026548: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x1002654C: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x10026550: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x10026554: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x10026558: beq         $at, $zero, L_100265C0
    if (ctx->r1 == 0) {
        // 0x1002655C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_100265C0;
    }
    // 0x1002655C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x10026560: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x10026564: bne         $at, $zero, L_100265B8
    if (ctx->r1 != 0) {
        // 0x10026568: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_100265B8;
    }
    // 0x10026568: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x1002656C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x10026570: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x10026574: addiu       $v1, $v1, -0x3730
    ctx->r3 = ADD32(ctx->r3, -0X3730);
    // 0x10026578: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x1002657C: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x10026580: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x10026584: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x10026588: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x1002658C: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x10026590: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x10026594: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x10026598: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x1002659C: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x100265A0: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x100265A4: nop

    // 0x100265A8: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x100265AC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x100265B0: jr          $ra
    // 0x100265B4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    return;
    // 0x100265B4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_100265B8:
    // 0x100265B8: jr          $ra
    // 0x100265BC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    return;
    // 0x100265BC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_100265C0:
    // 0x100265C0: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x100265C4: beq         $at, $zero, L_100266D8
    if (ctx->r1 == 0) {
        // 0x100265C8: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_100266D8;
    }
    // 0x100265C8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x100265CC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x100265D0: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100265D4: ldc1        $f10, -0x3708($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3708);
    // 0x100265D8: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x100265DC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x100265E0: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x100265E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x100265E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x100265EC: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x100265F0: nop

    // 0x100265F4: bc1fl       L_10026624
    if (!c1cs) {
        // 0x100265F8: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_10026624;
    }
    goto skip_0;
    // 0x100265F8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x100265FC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x10026600: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x10026604: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x10026608: nop

    // 0x1002660C: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x10026610: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x10026614: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x10026618: b           L_10026640
    // 0x1002661C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_10026640;
    // 0x1002661C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x10026620: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_10026624:
    // 0x10026624: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x10026628: nop

    // 0x1002662C: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x10026630: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x10026634: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x10026638: nop

    // 0x1002663C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_10026640:
    // 0x10026640: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10026644: ldc1        $f18, -0x3700($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3700);
    // 0x10026648: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x1002664C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10026650: ldc1        $f6, -0x36F8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X36F8);
    // 0x10026654: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x10026658: addiu       $v1, $v1, -0x3730
    ctx->r3 = ADD32(ctx->r3, -0X3730);
    // 0x1002665C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x10026660: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x10026664: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x10026668: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x1002666C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x10026670: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x10026674: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x10026678: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x1002667C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x10026680: nop

    // 0x10026684: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x10026688: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x1002668C: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x10026690: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x10026694: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x10026698: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x1002669C: bne         $t9, $zero, L_100266BC
    if (ctx->r25 != 0) {
        // 0x100266A0: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_100266BC;
    }
    // 0x100266A0: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x100266A4: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x100266A8: nop

    // 0x100266AC: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x100266B0: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x100266B4: jr          $ra
    // 0x100266B8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    return;
    // 0x100266B8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_100266BC:
    // 0x100266BC: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x100266C0: nop

    // 0x100266C4: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x100266C8: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x100266CC: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x100266D0: jr          $ra
    // 0x100266D4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    return;
    // 0x100266D4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_100266D8:
    // 0x100266D8: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x100266DC: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100266E0: bc1t        L_100266F4
    if (c1cs) {
        // 0x100266E4: nop
    
            goto L_100266F4;
    }
    // 0x100266E4: nop

    // 0x100266E8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100266EC: jr          $ra
    // 0x100266F0: lwc1        $f0, -0x36E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X36E0);
    return;
    return;
    // 0x100266F0: lwc1        $f0, -0x36E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X36E0);
L_100266F4:
    // 0x100266F4: lwc1        $f0, -0x36F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X36F0);
    // 0x100266F8: jr          $ra
    // 0x100266FC: nop

    return;
    return;
    // 0x100266FC: nop

;}
RECOMP_FUNC void func_1506B2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B2BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B2C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B2C8: jal         0x150721E8
    // 0x1506B2CC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_150721E8(rdram, ctx);
        goto after_0;
    // 0x1506B2CC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506B2D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B2D4: beq         $v0, $zero, L_1506B318
    if (ctx->r2 == 0) {
        // 0x1506B2D8: addiu       $a0, $a0, 0x154C
        ctx->r4 = ADD32(ctx->r4, 0X154C);
            goto L_1506B318;
    }
    // 0x1506B2D8: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1506B2DC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506B2E0: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x1506B2E4: subu        $t6, $v0, $v1
    ctx->r14 = SUB32(ctx->r2, ctx->r3);
    // 0x1506B2E8: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1506B2EC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x1506B2F0: lbu         $t9, 0x274($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X274);
    // 0x1506B2F4: mflo        $t7
    ctx->r15 = lo;
    // 0x1506B2F8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1506B2FC: bnel        $t8, $t9, L_1506B31C
    if (ctx->r24 != ctx->r25) {
        // 0x1506B300: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506B31C;
    }
    goto skip_0;
    // 0x1506B300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506B304: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x1506B308: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x1506B30C: sw          $zero, 0x218($t0)
    MEM_W(0X218, ctx->r8) = 0;
    // 0x1506B310: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x1506B314: sb          $t1, 0x232($t2)
    MEM_B(0X232, ctx->r10) = ctx->r9;
L_1506B318:
    // 0x1506B318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506B31C:
    // 0x1506B31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B320: jr          $ra
    // 0x1506B324: nop

    return;
    return;
    // 0x1506B324: nop

;}
RECOMP_FUNC void func_1514D9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514D9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514D9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514D9FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514DA00: jal         0x1514D978
    // 0x1514DA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514D978(rdram, ctx);
        goto after_0;
    // 0x1514DA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514DA08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1514DA0C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x1514DA10: jal         0x151ACA60
    // 0x1514DA14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151ACA60(rdram, ctx);
        goto after_1;
    // 0x1514DA14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1514DA18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514DA1C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1514DA20: jal         0x1514EC1C
    // 0x1514DA24: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1514DA24: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x1514DA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DA30: jr          $ra
    // 0x1514DA34: nop

    return;
    return;
    // 0x1514DA34: nop

;}
RECOMP_FUNC void func_1510D864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D864: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D868: sb          $zero, -0x6130($at)
    MEM_B(-0X6130, ctx->r1) = 0;
    // 0x1510D86C: jr          $ra
    // 0x1510D870: nop

    return;
    return;
    // 0x1510D870: nop

;}
RECOMP_FUNC void func_1509DDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DDC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509DDC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1509DDCC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1509DDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509DDD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1509DDD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1509DDDC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1509DDE0: jal         0x15178E14
    // 0x1509DDE4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_15178E14(rdram, ctx);
        goto after_0;
    // 0x1509DDE4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1509DDE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509DDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509DDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509DDF4: jr          $ra
    // 0x1509DDF8: nop

    return;
    return;
    // 0x1509DDF8: nop

;}
RECOMP_FUNC void func_15005EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005EE8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15005EEC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15005EF0: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005EF4: sh          $t7, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r15;
    // 0x15005EF8: jal         0x15124B18
    // 0x15005EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005F00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005F04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15005F08: sw          $t8, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r24;
    // 0x15005F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005F10: jr          $ra
    // 0x15005F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1515D130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D130: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1515D134: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1515D138: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1515D13C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1515D140: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x1515D144: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x1515D148: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1515D14C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1515D150: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1515D154: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1515D158: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1515D15C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1515D160: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1515D164: lbu         $t6, 0x30($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X30);
    // 0x1515D168: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1515D16C: addiu       $t8, $t8, 0x64A0
    ctx->r24 = ADD32(ctx->r24, 0X64A0);
    // 0x1515D170: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1515D174: jal         0x150ADA68
    // 0x1515D178: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1515D178: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x1515D17C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1515D180: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1515D184: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x1515D188: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515D18C: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1515D190: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1515D194: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1515D198: lui         $s5, 0x6
    ctx->r21 = S32(0X6 << 16);
    // 0x1515D19C: lui         $s4, 0x20
    ctx->r20 = S32(0X20 << 16);
    // 0x1515D1A0: ori         $s4, $s4, 0x5
    ctx->r20 = ctx->r20 | 0X5;
    // 0x1515D1A4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1515D1A8: ori         $s5, $s5, 0x600
    ctx->r21 = ctx->r21 | 0X600;
    // 0x1515D1AC: addiu       $fp, $sp, 0x5C
    ctx->r30 = ADD32(ctx->r29, 0X5C);
    // 0x1515D1B0: addiu       $s7, $sp, 0x64
    ctx->r23 = ADD32(ctx->r29, 0X64);
    // 0x1515D1B4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1515D1B8: addiu       $s6, $zero, 0x40
    ctx->r22 = ADD32(0, 0X40);
    // 0x1515D1BC: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x1515D1C0: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1515D1C4: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x1515D1C8: nop

    // 0x1515D1CC: bc1fl       L_1515D404
    if (!c1cs) {
        // 0x1515D1D0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_1515D404;
    }
    goto skip_0;
    // 0x1515D1D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x1515D1D4: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_1515D1D8:
    // 0x1515D1D8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1515D1DC: addiu       $t2, $zero, -0x3F
    ctx->r10 = ADD32(0, -0X3F);
    // 0x1515D1E0: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x1515D1E4: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x1515D1E8: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x1515D1EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1515D1F0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x1515D1F4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1515D1F8: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1515D1FC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1515D200: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x1515D204: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1515D208: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x1515D20C: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1515D210: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x1515D214: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1515D218: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x1515D21C: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1515D220: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x1515D224: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1515D228: sh          $zero, 0x88($sp)
    MEM_H(0X88, ctx->r29) = 0;
    // 0x1515D22C: sh          $t1, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r9;
    // 0x1515D230: sh          $t2, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r10;
    // 0x1515D234: sh          $t3, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r11;
    // 0x1515D238: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1515D23C: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x1515D240: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1515D244: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x1515D248: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x1515D24C: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x1515D250: addiu       $t3, $zero, 0x9B
    ctx->r11 = ADD32(0, 0X9B);
    // 0x1515D254: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x1515D258: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    // 0x1515D25C: lh          $t6, 0x30($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X30);
    // 0x1515D260: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x1515D264: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x1515D268: lh          $t7, 0x32($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X32);
    // 0x1515D26C: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x1515D270: sb          $t9, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r25;
    // 0x1515D274: sb          $t0, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r8;
    // 0x1515D278: sb          $t1, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r9;
    // 0x1515D27C: sb          $t2, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r10;
    // 0x1515D280: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x1515D284: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x1515D288: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x1515D28C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1515D290: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1515D294: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1515D298: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1515D29C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1515D2A0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1515D2A4: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x1515D2A8: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x1515D2AC: sb          $zero, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = 0;
    // 0x1515D2B0: sb          $t4, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r12;
    // 0x1515D2B4: sb          $t5, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r13;
    // 0x1515D2B8: sb          $zero, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = 0;
    // 0x1515D2BC: sb          $t6, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r14;
    // 0x1515D2C0: sb          $t7, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r15;
    // 0x1515D2C4: sb          $t8, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r24;
    // 0x1515D2C8: sb          $t9, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r25;
    // 0x1515D2CC: sb          $t0, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r8;
    // 0x1515D2D0: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x1515D2D4: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x1515D2D8: sb          $zero, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = 0;
    // 0x1515D2DC: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x1515D2E0: sb          $t1, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r9;
    // 0x1515D2E4: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x1515D2E8: sb          $t2, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r10;
    // 0x1515D2EC: sb          $t3, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r11;
    // 0x1515D2F0: sw          $s4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r20;
    // 0x1515D2F4: sw          $s5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r21;
    // 0x1515D2F8: lh          $t4, 0x34($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X34);
    // 0x1515D2FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1515D300: sh          $t4, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r12;
    // 0x1515D304: lh          $t5, 0x36($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X36);
    // 0x1515D308: sh          $t5, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r13;
    // 0x1515D30C: lh          $t6, 0x38($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X38);
    // 0x1515D310: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x1515D314: sh          $t6, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r14;
    // 0x1515D318: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1515D31C: sb          $t7, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r15;
    // 0x1515D320: sb          $zero, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = 0;
    // 0x1515D324: jal         0x150ADA20
    // 0x1515D328: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1515D328: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x1515D32C: jal         0x150ADA20
    // 0x1515D330: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1515D330: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_2:
    // 0x1515D334: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1515D338: andi        $t0, $v0, 0x7F
    ctx->r8 = ctx->r2 & 0X7F;
    // 0x1515D33C: subu        $a1, $s6, $t0
    ctx->r5 = SUB32(ctx->r22, ctx->r8);
    // 0x1515D340: lh          $t4, 0x6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X6);
    // 0x1515D344: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x1515D348: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x1515D34C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1515D350: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x1515D354: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1515D358: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1515D35C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1515D360: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x1515D364: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1515D368: jal         0x15143794
    // 0x1515D36C: nop

    func_15143794(rdram, ctx);
        goto after_3;
    // 0x1515D36C: nop

    after_3:
    // 0x1515D370: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1515D374: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1515D378: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1515D37C: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x1515D380: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1515D384: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1515D388: nop

    // 0x1515D38C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1515D390: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1515D394: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1515D398: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x1515D39C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1515D3A0: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x1515D3A4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1515D3A8: nop

    // 0x1515D3AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1515D3B0: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1515D3B4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x1515D3B8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1515D3BC: lh          $t0, 0x4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X4);
    // 0x1515D3C0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1515D3C4: nop

    // 0x1515D3C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1515D3CC: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1515D3D0: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x1515D3D4: lbu         $a2, 0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X1);
    // 0x1515D3D8: jal         0x15152B38
    // 0x1515D3DC: lbu         $a1, 0xC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XC);
    func_15152B38(rdram, ctx);
        goto after_4;
    // 0x1515D3DC: lbu         $a1, 0xC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XC);
    after_4:
    // 0x1515D3E0: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1515D3E4: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x1515D3E8: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x1515D3EC: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1515D3F0: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x1515D3F4: nop

    // 0x1515D3F8: bc1tl       L_1515D1D8
    if (c1cs) {
        // 0x1515D3FC: lw          $t9, 0x8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X8);
            goto L_1515D1D8;
    }
    goto skip_1;
    // 0x1515D3FC: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x1515D400: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_1515D404:
    // 0x1515D404: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1515D408: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1515D40C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1515D410: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1515D414: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1515D418: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1515D41C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1515D420: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1515D424: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x1515D428: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x1515D42C: jr          $ra
    // 0x1515D430: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x1515D430: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x1515D434: nop

    // 0x1515D438: nop

    // 0x1515D43C: nop

;}
RECOMP_FUNC void func_150FDD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDD10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150FDD14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150FDD18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150FDD1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150FDD20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150FDD24: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150FDD28: jal         0x15103828
    // 0x150FDD2C: nop

    func_15103828(rdram, ctx);
        goto after_0;
    // 0x150FDD2C: nop

    after_0:
    // 0x150FDD30: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150FDD34: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150FDD38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150FDD3C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150FDD40: bne         $t6, $at, L_150FDD7C
    if (ctx->r14 != ctx->r1) {
        // 0x150FDD44: addiu       $s0, $s0, -0x3D30
        ctx->r16 = ADD32(ctx->r16, -0X3D30);
            goto L_150FDD7C;
    }
    // 0x150FDD44: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x150FDD48: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x150FDD4C: addiu       $s2, $s2, 0x121C
    ctx->r18 = ADD32(ctx->r18, 0X121C);
    // 0x150FDD50: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x150FDD54: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
L_150FDD58:
    // 0x150FDD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FDD5C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x150FDD60: bnel        $s1, $t7, L_150FDD74
    if (ctx->r17 != ctx->r15) {
        // 0x150FDD64: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_150FDD74;
    }
    goto skip_0;
    // 0x150FDD64: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_0:
    // 0x150FDD68: jal         0x150ED638
    // 0x150FDD6C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_150ED638(rdram, ctx);
        goto after_1;
    // 0x150FDD6C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_1:
    // 0x150FDD70: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_150FDD74:
    // 0x150FDD74: bnel        $s0, $s2, L_150FDD58
    if (ctx->r16 != ctx->r18) {
        // 0x150FDD78: lbu         $t7, 0x4($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X4);
            goto L_150FDD58;
    }
    goto skip_1;
    // 0x150FDD78: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    skip_1:
L_150FDD7C:
    // 0x150FDD7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150FDD80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150FDD84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150FDD88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150FDD8C: jr          $ra
    // 0x150FDD90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150FDD90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15155564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15155564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15155568: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1515556C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15155570: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15155574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15155578: lbu         $t7, 0x2A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2A);
    // 0x1515557C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15155580: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15155584: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15155588: lw          $v0, -0x52FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X52FC);
    // 0x1515558C: beql        $v0, $zero, L_151555A0
    if (ctx->r2 == 0) {
        // 0x15155590: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151555A0;
    }
    goto skip_0;
    // 0x15155590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15155594: jalr        $v0
    // 0x15155598: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15155598: nop

    after_0:
    // 0x1515559C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151555A0:
    // 0x151555A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151555A4: jr          $ra
    // 0x151555A8: nop

    return;
    return;
    // 0x151555A8: nop

;}
RECOMP_FUNC void func_15157918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515791C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15157920: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15157924: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x15157928: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1515792C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15157930: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x15157934: lw          $a1, 0x120($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X120);
    // 0x15157938: lw          $a2, 0x124($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X124);
    // 0x1515793C: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x15157940: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x15157944: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    // 0x15157948: jal         0x150A8050
    // 0x1515794C: lw          $a3, 0x128($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X128);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x1515794C: lw          $a3, 0x128($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X128);
    after_0:
    // 0x15157950: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15157954: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x15157958: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x1515795C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15157960: addiu       $a0, $s0, 0x120
    ctx->r4 = ADD32(ctx->r16, 0X120);
    // 0x15157964: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15157968: addu        $t1, $s0, $t9
    ctx->r9 = ADD32(ctx->r16, ctx->r25);
    // 0x1515796C: swc1        $f4, 0xAC($t1)
    MEM_W(0XAC, ctx->r9) = ctx->f4.u32l;
    // 0x15157970: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15157974: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15157978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515797C: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x15157980: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x15157984: swc1        $f6, 0xB0($t4)
    MEM_W(0XB0, ctx->r12) = ctx->f6.u32l;
    // 0x15157988: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x1515798C: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x15157990: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x15157994: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x15157998: swc1        $f8, 0xB4($t7)
    MEM_W(0XB4, ctx->r15) = ctx->f8.u32l;
    // 0x1515799C: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x151579A0: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151579A4: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151579A8: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x151579AC: lwc1        $f10, 0x7C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X7C);
    // 0x151579B0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151579B4: swc1        $f18, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f18.u32l;
    // 0x151579B8: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x151579BC: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151579C0: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x151579C4: addu        $v1, $s0, $t2
    ctx->r3 = ADD32(ctx->r16, ctx->r10);
    // 0x151579C8: lwc1        $f4, 0x80($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X80);
    // 0x151579CC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151579D0: swc1        $f8, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f8.u32l;
    // 0x151579D4: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x151579D8: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151579DC: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x151579E0: addu        $v1, $s0, $t4
    ctx->r3 = ADD32(ctx->r16, ctx->r12);
    // 0x151579E4: lwc1        $f10, 0x84($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X84);
    // 0x151579E8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151579EC: swc1        $f18, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f18.u32l;
    // 0x151579F0: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x151579F4: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x151579F8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x151579FC: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x15157A00: lwc1        $f4, 0x8C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8C);
    // 0x15157A04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157A08: swc1        $f8, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f8.u32l;
    // 0x15157A0C: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15157A10: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15157A14: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15157A18: addu        $v1, $s0, $t8
    ctx->r3 = ADD32(ctx->r16, ctx->r24);
    // 0x15157A1C: lwc1        $f10, 0x90($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X90);
    // 0x15157A20: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157A24: swc1        $f18, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->f18.u32l;
    // 0x15157A28: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x15157A2C: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15157A30: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x15157A34: addu        $v1, $s0, $t1
    ctx->r3 = ADD32(ctx->r16, ctx->r9);
    // 0x15157A38: lwc1        $f4, 0x94($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X94);
    // 0x15157A3C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157A40: swc1        $f8, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f8.u32l;
    // 0x15157A44: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15157A48: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15157A4C: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x15157A50: addu        $v1, $s0, $t3
    ctx->r3 = ADD32(ctx->r16, ctx->r11);
    // 0x15157A54: lwc1        $f10, 0x9C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X9C);
    // 0x15157A58: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157A5C: swc1        $f18, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->f18.u32l;
    // 0x15157A60: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x15157A64: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15157A68: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x15157A6C: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x15157A70: lwc1        $f4, 0xA0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XA0);
    // 0x15157A74: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157A78: swc1        $f8, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->f8.u32l;
    // 0x15157A7C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x15157A80: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15157A84: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x15157A88: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x15157A8C: lwc1        $f10, 0xA4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x15157A90: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157A94: swc1        $f18, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f18.u32l;
    // 0x15157A98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15157A9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15157AA0: jr          $ra
    // 0x15157AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15157AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151BF340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BF340: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x151BF344: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x151BF348: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x151BF34C: andi        $s6, $a0, 0xFF
    ctx->r22 = ctx->r4 & 0XFF;
    // 0x151BF350: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x151BF354: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151BF358: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x151BF35C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x151BF360: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x151BF364: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x151BF368: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x151BF36C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x151BF370: sw          $a0, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r4;
    // 0x151BF374: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151BF378: jal         0x151494E0
    // 0x151BF37C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151BF37C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_0:
    // 0x151BF380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151BF384: jal         0x150859AC
    // 0x151BF388: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x151BF388: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x151BF38C: beq         $v0, $zero, L_151BF398
    if (ctx->r2 == 0) {
        // 0x151BF390: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151BF398;
    }
    // 0x151BF390: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151BF394: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
L_151BF398:
    // 0x151BF398: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x151BF39C: bne         $at, $zero, L_151BF3A8
    if (ctx->r1 != 0) {
        // 0x151BF3A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_151BF3A8;
    }
    // 0x151BF3A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x151BF3A4: addiu       $v1, $zero, 0x63
    ctx->r3 = ADD32(0, 0X63);
L_151BF3A8:
    // 0x151BF3A8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x151BF3AC: mflo        $t6
    ctx->r14 = lo;
    // 0x151BF3B0: mfhi        $t7
    ctx->r15 = hi;
    // 0x151BF3B4: sw          $t6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r14;
    // 0x151BF3B8: bne         $v0, $zero, L_151BF3C4
    if (ctx->r2 != 0) {
        // 0x151BF3BC: nop
    
            goto L_151BF3C4;
    }
    // 0x151BF3BC: nop

    // 0x151BF3C0: break       7
    do_break(354153408);
L_151BF3C4:
    // 0x151BF3C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151BF3C8: bne         $v0, $at, L_151BF3DC
    if (ctx->r2 != ctx->r1) {
        // 0x151BF3CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151BF3DC;
    }
    // 0x151BF3CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151BF3D0: bne         $v1, $at, L_151BF3DC
    if (ctx->r3 != ctx->r1) {
        // 0x151BF3D4: nop
    
            goto L_151BF3DC;
    }
    // 0x151BF3D4: nop

    // 0x151BF3D8: break       6
    do_break(354153432);
L_151BF3DC:
    // 0x151BF3DC: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
    // 0x151BF3E0: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x151BF3E4: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    // 0x151BF3E8: jal         0x100226F0
    // 0x151BF3EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x151BF3EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x151BF3F0: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x151BF3F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BF3F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF3FC: lwc1        $f12, -0x56F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X56F0);
    // 0x151BF400: jal         0x15047D60
    // 0x151BF404: swc1        $f4, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f4.u32l;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151BF404: swc1        $f4, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x151BF408: addiu       $t8, $zero, 0x49
    ctx->r24 = ADD32(0, 0X49);
    // 0x151BF40C: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x151BF410: swc1        $f0, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f0.u32l;
    // 0x151BF414: sb          $zero, 0x174($sp)
    MEM_B(0X174, ctx->r29) = 0;
    // 0x151BF418: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151BF41C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151BF420: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151BF424: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151BF428: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x151BF42C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151BF430: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BF434: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x151BF438: jal         0x15149130
    // 0x151BF43C: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    func_15149130(rdram, ctx);
        goto after_4;
    // 0x151BF43C: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    after_4:
    // 0x151BF440: beq         $v0, $zero, L_151BF7F0
    if (ctx->r2 == 0) {
        // 0x151BF444: addiu       $s5, $v0, 0x28
        ctx->r21 = ADD32(ctx->r2, 0X28);
            goto L_151BF7F0;
    }
    // 0x151BF444: addiu       $s5, $v0, 0x28
    ctx->r21 = ADD32(ctx->r2, 0X28);
    // 0x151BF448: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151BF44C: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x151BF450: jal         0x10022EC0
    // 0x151BF454: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151BF454: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_5:
    // 0x151BF458: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x151BF45C: lui         $s2, 0x20
    ctx->r18 = S32(0X20 << 16);
    // 0x151BF460: ori         $s2, $s2, 0x4
    ctx->r18 = ctx->r18 | 0X4;
    // 0x151BF464: addiu       $s1, $s1, 0x2458
    ctx->r17 = ADD32(ctx->r17, 0X2458);
    // 0x151BF468: addiu       $t5, $zero, 0xA3
    ctx->r13 = ADD32(0, 0XA3);
    // 0x151BF46C: sw          $t5, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r13;
    // 0x151BF470: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x151BF474: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151BF478: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x151BF47C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151BF480: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151BF484: sb          $t0, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r8;
    // 0x151BF488: sb          $t1, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r9;
    // 0x151BF48C: sb          $t2, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r10;
    // 0x151BF490: sb          $t3, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r11;
    // 0x151BF494: lui         $t8, 0x6
    ctx->r24 = S32(0X6 << 16);
    // 0x151BF498: sb          $t5, 0x125($sp)
    MEM_B(0X125, ctx->r29) = ctx->r13;
    // 0x151BF49C: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x151BF4A0: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x151BF4A4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151BF4A8: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x151BF4AC: ori         $t8, $t8, 0x601
    ctx->r24 = ctx->r24 | 0X601;
    // 0x151BF4B0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x151BF4B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151BF4B8: addiu       $t1, $zero, 0x38
    ctx->r9 = ADD32(0, 0X38);
    // 0x151BF4BC: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x151BF4C0: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x151BF4C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151BF4C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BF4CC: sh          $t4, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r12;
    // 0x151BF4D0: sw          $t6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r14;
    // 0x151BF4D4: sw          $t7, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r15;
    // 0x151BF4D8: sw          $t8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r24;
    // 0x151BF4DC: sb          $t9, 0x121($sp)
    MEM_B(0X121, ctx->r29) = ctx->r25;
    // 0x151BF4E0: sw          $t0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r8;
    // 0x151BF4E4: sw          $t1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r9;
    // 0x151BF4E8: sw          $t2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r10;
    // 0x151BF4EC: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x151BF4F0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151BF4F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BF4F8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BF4FC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BF500: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151BF504: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151BF508: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BF50C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151BF510: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151BF514: sb          $zero, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = 0;
    // 0x151BF518: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x151BF51C: sw          $s2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r18;
    // 0x151BF520: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x151BF524: sb          $t4, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r12;
    // 0x151BF528: sb          $t6, 0x126($sp)
    MEM_B(0X126, ctx->r29) = ctx->r14;
    // 0x151BF52C: sb          $t7, 0x127($sp)
    MEM_B(0X127, ctx->r29) = ctx->r15;
    // 0x151BF530: sb          $t8, 0x128($sp)
    MEM_B(0X128, ctx->r29) = ctx->r24;
    // 0x151BF534: sb          $t9, 0x129($sp)
    MEM_B(0X129, ctx->r29) = ctx->r25;
    // 0x151BF538: sb          $t0, 0x12A($sp)
    MEM_B(0X12A, ctx->r29) = ctx->r8;
    // 0x151BF53C: sb          $t1, 0x12B($sp)
    MEM_B(0X12B, ctx->r29) = ctx->r9;
    // 0x151BF540: sw          $zero, 0x130($sp)
    MEM_W(0X130, ctx->r29) = 0;
    // 0x151BF544: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x151BF548: sb          $t2, 0x135($sp)
    MEM_B(0X135, ctx->r29) = ctx->r10;
    // 0x151BF54C: sh          $t3, 0x148($sp)
    MEM_H(0X148, ctx->r29) = ctx->r11;
    // 0x151BF550: sh          $t4, 0x14A($sp)
    MEM_H(0X14A, ctx->r29) = ctx->r12;
    // 0x151BF554: beq         $t5, $zero, L_151BF56C
    if (ctx->r13 == 0) {
        // 0x151BF558: swc1        $f6, 0x138($sp)
        MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
            goto L_151BF56C;
    }
    // 0x151BF558: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x151BF55C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x151BF560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BF564: b           L_151BF57C
    // 0x151BF568: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
        goto L_151BF57C;
    // 0x151BF568: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
L_151BF56C:
    // 0x151BF56C: lui         $at, 0x429E
    ctx->r1 = S32(0X429E << 16);
    // 0x151BF570: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151BF574: nop

    // 0x151BF578: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
L_151BF57C:
    // 0x151BF57C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151BF580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF584: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x151BF588: lwc1        $f0, -0x56EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X56EC);
    // 0x151BF58C: addiu       $t6, $t6, 0x5480
    ctx->r14 = ADD32(ctx->r14, 0X5480);
    // 0x151BF590: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    // 0x151BF594: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151BF598: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x151BF59C: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x151BF5A0: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x151BF5A4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151BF5A8: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x151BF5AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151BF5B0: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x151BF5B4: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151BF5B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x151BF5BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BF5C0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x151BF5C4: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x151BF5C8: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x151BF5CC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151BF5D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BF5D4: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x151BF5D8: jal         0x15157010
    // 0x151BF5DC: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    func_15157010(rdram, ctx);
        goto after_6;
    // 0x151BF5DC: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x151BF5E0: beq         $v0, $zero, L_151BF5F8
    if (ctx->r2 == 0) {
        // 0x151BF5E4: sw          $v0, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r2;
            goto L_151BF5F8;
    }
    // 0x151BF5E4: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x151BF5E8: addiu       $a0, $v0, 0x120
    ctx->r4 = ADD32(ctx->r2, 0X120);
    // 0x151BF5EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151BF5F0: jal         0x10022EC0
    // 0x151BF5F4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151BF5F4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_7:
L_151BF5F8:
    // 0x151BF5F8: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x151BF5FC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151BF600: addiu       $t1, $t1, -0x574C
    ctx->r9 = ADD32(ctx->r9, -0X574C);
    // 0x151BF604: addiu       $t3, $t1, 0x24
    ctx->r11 = ADD32(ctx->r9, 0X24);
    // 0x151BF608: or          $t4, $s4, $zero
    ctx->r12 = ctx->r20 | 0;
L_151BF60C:
    // 0x151BF60C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151BF610: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x151BF614: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x151BF618: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x151BF61C: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x151BF620: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x151BF624: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x151BF628: bne         $t1, $t3, L_151BF60C
    if (ctx->r9 != ctx->r11) {
        // 0x151BF62C: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_151BF60C;
    }
    // 0x151BF62C: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x151BF630: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151BF634: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151BF638: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x151BF63C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x151BF640: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x151BF644: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x151BF648: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BF64C: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x151BF650: beq         $t5, $zero, L_151BF668
    if (ctx->r13 == 0) {
        // 0x151BF654: swc1        $f18, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
            goto L_151BF668;
    }
    // 0x151BF654: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x151BF658: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x151BF65C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BF660: b           L_151BF678
    // 0x151BF664: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
        goto L_151BF678;
    // 0x151BF664: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
L_151BF668:
    // 0x151BF668: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x151BF66C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BF670: nop

    // 0x151BF674: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
L_151BF678:
    // 0x151BF678: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151BF67C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151BF680: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151BF684: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BF688: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151BF68C: sb          $t4, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r12;
    // 0x151BF690: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BF694: lw          $t4, 0x150($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X150);
    // 0x151BF698: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151BF69C: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x151BF6A0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151BF6A4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151BF6A8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BF6AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BF6B0: sh          $t8, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r24;
    // 0x151BF6B4: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x151BF6B8: sh          $t6, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r14;
    // 0x151BF6BC: sb          $t0, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r8;
    // 0x151BF6C0: sb          $t2, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r10;
    // 0x151BF6C4: sb          $t3, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r11;
    // 0x151BF6C8: sb          $t1, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r9;
    // 0x151BF6CC: lui         $t9, 0x9F
    ctx->r25 = S32(0X9F << 16);
    // 0x151BF6D0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151BF6D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BF6D8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BF6DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BF6E0: ori         $t9, $t9, 0x601
    ctx->r25 = ctx->r25 | 0X601;
    // 0x151BF6E4: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x151BF6E8: addiu       $t2, $zero, 0x13
    ctx->r10 = ADD32(0, 0X13);
    // 0x151BF6EC: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x151BF6F0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x151BF6F4: sb          $zero, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = 0;
    // 0x151BF6F8: sb          $t5, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r13;
    // 0x151BF6FC: sb          $t8, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r24;
    // 0x151BF700: sb          $t7, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r15;
    // 0x151BF704: sb          $t6, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r14;
    // 0x151BF708: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x151BF70C: sw          $s2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r18;
    // 0x151BF710: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    // 0x151BF714: sb          $zero, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = 0;
    // 0x151BF718: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x151BF71C: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x151BF720: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x151BF724: sw          $t3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r11;
    // 0x151BF728: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    // 0x151BF72C: sb          $zero, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = 0;
    // 0x151BF730: swc1        $f12, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f12.u32l;
    // 0x151BF734: swc1        $f12, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f12.u32l;
    // 0x151BF738: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151BF73C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151BF740: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x151BF744: bne         $t4, $zero, L_151BF78C
    if (ctx->r12 != 0) {
        // 0x151BF748: swc1        $f2, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->f2.u32l;
            goto L_151BF78C;
    }
    // 0x151BF748: swc1        $f2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f2.u32l;
    // 0x151BF74C: lw          $t5, 0x154($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X154);
    // 0x151BF750: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x151BF754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151BF758: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x151BF75C: addu        $t7, $s4, $t8
    ctx->r15 = ADD32(ctx->r20, ctx->r24);
    // 0x151BF760: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x151BF764: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x151BF768: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x151BF76C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BF770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151BF774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BF778: jal         0x1515548C
    // 0x151BF77C: sb          $t6, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r14;
    func_1515548C(rdram, ctx);
        goto after_8;
    // 0x151BF77C: sb          $t6, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r14;
    after_8:
    // 0x151BF780: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x151BF784: b           L_151BF7F0
    // 0x151BF788: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
        goto L_151BF7F0;
    // 0x151BF788: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
L_151BF78C:
    // 0x151BF78C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151BF790: addiu       $s3, $sp, 0x150
    ctx->r19 = ADD32(ctx->r29, 0X150);
    // 0x151BF794: addiu       $s2, $sp, 0x84
    ctx->r18 = ADD32(ctx->r29, 0X84);
L_151BF798:
    // 0x151BF798: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x151BF79C: addu        $t9, $s3, $s1
    ctx->r25 = ADD32(ctx->r19, ctx->r17);
    // 0x151BF7A0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x151BF7A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151BF7A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151BF7AC: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x151BF7B0: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x151BF7B4: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x151BF7B8: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x151BF7BC: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x151BF7C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BF7C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151BF7C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BF7CC: jal         0x1515548C
    // 0x151BF7D0: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    func_1515548C(rdram, ctx);
        goto after_9;
    // 0x151BF7D0: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    after_9:
    // 0x151BF7D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151BF7D8: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x151BF7DC: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x151BF7E0: addu        $t4, $s5, $s1
    ctx->r12 = ADD32(ctx->r21, ctx->r17);
    // 0x151BF7E4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x151BF7E8: bne         $at, $zero, L_151BF798
    if (ctx->r1 != 0) {
        // 0x151BF7EC: sw          $v0, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r2;
            goto L_151BF798;
    }
    // 0x151BF7EC: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
L_151BF7F0:
    // 0x151BF7F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151BF7F4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x151BF7F8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x151BF7FC: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x151BF800: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x151BF804: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x151BF808: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x151BF80C: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x151BF810: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x151BF814: jr          $ra
    // 0x151BF818: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    return;
    // 0x151BF818: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void func_1506FCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FCC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FCCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FCD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FCD4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FCD8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FCDC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1506FCE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506FCE4: jal         0x15196438
    // 0x1506FCE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15196438(rdram, ctx);
        goto after_0;
    // 0x1506FCE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1506FCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FCF4: jr          $ra
    // 0x1506FCF8: nop

    return;
    return;
    // 0x1506FCF8: nop

;}
RECOMP_FUNC void func_150511E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150511E8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150511EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150511F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150511F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150511F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150511FC: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15051200: addiu       $a1, $s0, 0x18C
    ctx->r5 = ADD32(ctx->r16, 0X18C);
    // 0x15051204: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x15051208: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x1505120C: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x15051210: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x15051214: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x15051218: bc1f        L_15051510
    if (!c1cs) {
        // 0x1505121C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15051510;
    }
    // 0x1505121C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051224: lwc1        $f14, -0x6D28($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6D28);
    // 0x15051228: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505122C: lwc1        $f16, -0x6D24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6D24);
    // 0x15051230: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x15051234: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15051238: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x1505123C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051240: lwc1        $f12, -0x6D20($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6D20);
    // 0x15051244: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15051248: beq         $v0, $at, L_15051258
    if (ctx->r2 == ctx->r1) {
        // 0x1505124C: addiu       $t8, $sp, 0x68
        ctx->r24 = ADD32(ctx->r29, 0X68);
            goto L_15051258;
    }
    // 0x1505124C: addiu       $t8, $sp, 0x68
    ctx->r24 = ADD32(ctx->r29, 0X68);
    // 0x15051250: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x15051254: bne         $v0, $at, L_15051278
    if (ctx->r2 != ctx->r1) {
        // 0x15051258: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15051278;
    }
L_15051258:
    // 0x15051258: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505125C: lwc1        $f14, -0x6D1C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6D1C);
    // 0x15051260: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051264: lwc1        $f16, -0x6D18($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6D18);
    // 0x15051268: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1505126C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15051270: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051274: lwc1        $f12, -0x6D14($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6D14);
L_15051278:
    // 0x15051278: lw          $a0, 0x188($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X188);
    // 0x1505127C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x15051280: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x15051284: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x15051288: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x1505128C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x15051290: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15051294: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15051298: jal         0x1510F820
    // 0x1505129C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1510F820(rdram, ctx);
        goto after_0;
    // 0x1505129C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150512A0: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x150512A4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x150512A8: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150512AC: sll         $t9, $v0, 11
    ctx->r25 = S32(ctx->r2 << 11);
    // 0x150512B0: bgez        $t9, L_15051358
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150512B4: lwc1        $f16, 0x50($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
            goto L_15051358;
    }
    // 0x150512B4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150512B8: lw          $a0, 0x188($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X188);
    // 0x150512BC: addiu       $t0, $sp, 0x5C
    ctx->r8 = ADD32(ctx->r29, 0X5C);
    // 0x150512C0: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x150512C4: addiu       $t2, $sp, 0x68
    ctx->r10 = ADD32(ctx->r29, 0X68);
    // 0x150512C8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150512CC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150512D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150512D4: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x150512D8: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x150512DC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x150512E0: jal         0x1510F820
    // 0x150512E4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    func_1510F820(rdram, ctx);
        goto after_1;
    // 0x150512E4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x150512E8: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150512EC: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150512F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150512F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150512F8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x150512FC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x15051300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15051304: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x15051308: jal         0x1505210C
    // 0x1505130C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_1505210C(rdram, ctx);
        goto after_2;
    // 0x1505130C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x15051310: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15051314: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15051318: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1505131C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15051320: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x15051324: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15051328: lwc1        $f12, 0xC4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x1505132C: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x15051330: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15051334: nop

    // 0x15051338: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x1505133C: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15051340: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15051344: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x15051348: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1505134C: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x15051350: swc1        $f8, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f8.u32l;
    // 0x15051354: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
L_15051358:
    // 0x15051358: sll         $t3, $v0, 12
    ctx->r11 = S32(ctx->r2 << 12);
    // 0x1505135C: bgezl       $t3, L_15051548
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15051360: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15051548;
    }
    goto skip_0;
    // 0x15051360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x15051364: lbu         $v0, 0x226($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X226);
    // 0x15051368: beql        $v0, $zero, L_15051394
    if (ctx->r2 == 0) {
        // 0x1505136C: lwc1        $f18, 0x6C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051394;
    }
    goto skip_1;
    // 0x1505136C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    skip_1:
    // 0x15051370: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x15051374: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15051378: bgez        $v0, L_1505138C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1505137C: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1505138C;
    }
    // 0x1505137C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15051380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051384: nop

    // 0x15051388: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1505138C:
    // 0x1505138C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15051390: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
L_15051394:
    // 0x15051394: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051398: lwc1        $f14, -0x6D10($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6D10);
    // 0x1505139C: abs.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = fabsf(ctx->f18.fl);
    // 0x150513A0: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150513A4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x150513A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150513AC: bc1fl       L_150513E0
    if (!c1cs) {
        // 0x150513B0: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_150513E0;
    }
    goto skip_2;
    // 0x150513B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_2:
    // 0x150513B4: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x150513B8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150513BC: nop

    // 0x150513C0: bc1fl       L_150513E0
    if (!c1cs) {
        // 0x150513C4: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_150513E0;
    }
    goto skip_3;
    // 0x150513C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_3:
    // 0x150513C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150513CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150513D0: lwc1        $f2, -0x6D0C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6D0C);
    // 0x150513D4: b           L_1505151C
    // 0x150513D8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
        goto L_1505151C;
    // 0x150513D8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x150513DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_150513E0:
    // 0x150513E0: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150513E4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x150513E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150513EC: abs.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = fabsf(ctx->f12.fl);
    // 0x150513F0: bc1fl       L_15051430
    if (!c1cs) {
        // 0x150513F4: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_15051430;
    }
    goto skip_4;
    // 0x150513F4: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_4:
    // 0x150513F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150513FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15051400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15051404: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x15051408: nop

    // 0x1505140C: bc1fl       L_15051428
    if (!c1cs) {
        // 0x15051410: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_15051428;
    }
    goto skip_5;
    // 0x15051410: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_5:
    // 0x15051414: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15051418: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505141C: b           L_1505142C
    // 0x15051420: nop

        goto L_1505142C;
    // 0x15051420: nop

    // 0x15051424: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_15051428:
    // 0x15051428: nop

L_1505142C:
    // 0x1505142C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_15051430:
    // 0x15051430: nop

    // 0x15051434: bc1fl       L_15051474
    if (!c1cs) {
        // 0x15051438: swc1        $f12, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
            goto L_15051474;
    }
    goto skip_6;
    // 0x15051438: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    skip_6:
    // 0x1505143C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15051440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15051444: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15051448: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x1505144C: nop

    // 0x15051450: bc1fl       L_1505146C
    if (!c1cs) {
        // 0x15051454: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_1505146C;
    }
    goto skip_7;
    // 0x15051454: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_7:
    // 0x15051458: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1505145C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15051460: b           L_15051474
    // 0x15051464: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
        goto L_15051474;
    // 0x15051464: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x15051468: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_1505146C:
    // 0x1505146C: nop

    // 0x15051470: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
L_15051474:
    // 0x15051474: beq         $v0, $zero, L_150514CC
    if (ctx->r2 == 0) {
        // 0x15051478: swc1        $f18, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
            goto L_150514CC;
    }
    // 0x15051478: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x1505147C: lbu         $t4, 0x4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4);
    // 0x15051480: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x15051484: bne         $t4, $at, L_150514CC
    if (ctx->r12 != ctx->r1) {
        // 0x15051488: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_150514CC;
    }
    // 0x15051488: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1505148C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051490: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15051494: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051498: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x1505149C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150514A0: nop

    // 0x150514A4: bc1fl       L_150514BC
    if (!c1cs) {
        // 0x150514A8: lbu         $t5, 0x89($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X89);
            goto L_150514BC;
    }
    goto skip_8;
    // 0x150514A8: lbu         $t5, 0x89($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X89);
    skip_8:
    // 0x150514AC: lwc1        $f4, -0x6D08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D08);
    // 0x150514B0: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150514B4: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x150514B8: lbu         $t5, 0x89($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X89);
L_150514BC:
    // 0x150514BC: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x150514C0: beql        $at, $zero, L_150514D0
    if (ctx->r1 == 0) {
        // 0x150514C4: lwc1        $f18, 0x6C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_150514D0;
    }
    goto skip_9;
    // 0x150514C4: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    skip_9:
    // 0x150514C8: sb          $t6, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r14;
L_150514CC:
    // 0x150514CC: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
L_150514D0:
    // 0x150514D0: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150514D4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150514D8: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x150514DC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150514E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150514E4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150514E8: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150514EC: mul.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150514F0: lwc1        $f6, -0x6D04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6D04);
    // 0x150514F4: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150514F8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150514FC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15051500: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15051504: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x15051508: b           L_15051520
    // 0x1505150C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
        goto L_15051520;
    // 0x1505150C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
L_15051510:
    // 0x15051510: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x15051514: lwc1        $f2, -0x6D00($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6D00);
    // 0x15051518: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_1505151C:
    // 0x1505151C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
L_15051520:
    // 0x15051520: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x15051524: addiu       $t7, $s0, 0x168
    ctx->r15 = ADD32(ctx->r16, 0X168);
    // 0x15051528: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1505152C: neg.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = -ctx->f18.fl;
    // 0x15051530: addiu       $a3, $s0, 0x164
    ctx->r7 = ADD32(ctx->r16, 0X164);
    // 0x15051534: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x15051538: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x1505153C: jal         0x1505A250
    // 0x15051540: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_1505A250(rdram, ctx);
        goto after_3;
    // 0x15051540: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x15051544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15051548:
    // 0x15051548: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1505154C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x15051550: jr          $ra
    // 0x15051554: nop

    return;
    return;
    // 0x15051554: nop

;}
RECOMP_FUNC void func_150778F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150778F0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150778F4: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x150778F8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x150778FC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15077900: lw          $t7, 0x2108($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2108);
    // 0x15077904: lbu         $t6, 0x13F($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X13F);
    // 0x15077908: lbu         $a0, 0x21F($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X21F);
    // 0x1507790C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15077910: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x15077914: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15077918: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x1507791C: beq         $a0, $zero, L_15077928
    if (ctx->r4 == 0) {
        // 0x15077920: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_15077928;
    }
    // 0x15077920: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x15077924: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_15077928:
    // 0x15077928: lbu         $t0, 0x21E($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X21E);
    // 0x1507792C: lb          $t1, 0x221($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X221);
    // 0x15077930: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15077934: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x15077938: sb          $t2, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r10;
    // 0x1507793C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15077940: lbu         $t3, 0x21E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X21E);
    // 0x15077944: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15077948: sb          $t4, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r12;
    // 0x1507794C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15077950: lbu         $t5, 0x21E($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X21E);
    // 0x15077954: div         $zero, $t5, $v0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r2)));
    // 0x15077958: mfhi        $t6
    ctx->r14 = hi;
    // 0x1507795C: sb          $t6, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r14;
    // 0x15077960: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15077964: bne         $a0, $zero, L_15077970
    if (ctx->r4 != 0) {
        // 0x15077968: nop
    
            goto L_15077970;
    }
    // 0x15077968: nop

    // 0x1507796C: break       7
    do_break(352811372);
L_15077970:
    // 0x15077970: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15077974: bne         $a0, $at, L_15077988
    if (ctx->r4 != ctx->r1) {
        // 0x15077978: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15077988;
    }
    // 0x15077978: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507797C: bne         $t5, $at, L_15077988
    if (ctx->r13 != ctx->r1) {
        // 0x15077980: nop
    
            goto L_15077988;
    }
    // 0x15077980: nop

    // 0x15077984: break       6
    do_break(352811396);
L_15077988:
    // 0x15077988: lbu         $a1, 0x220($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X220);
    // 0x1507798C: lbu         $t7, 0x21E($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X21E);
    // 0x15077990: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15077994: beq         $at, $zero, L_150779A0
    if (ctx->r1 == 0) {
        // 0x15077998: nop
    
            goto L_150779A0;
    }
    // 0x15077998: nop

    // 0x1507799C: sb          $a1, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r5;
L_150779A0:
    // 0x150779A0: jr          $ra
    // 0x150779A4: nop

    return;
    return;
    // 0x150779A4: nop

;}
RECOMP_FUNC void func_15178EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15178EB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EB4: sb          $zero, -0x2BCC($at)
    MEM_B(-0X2BCC, ctx->r1) = 0;
    // 0x15178EB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EBC: sb          $zero, -0x2BBA($at)
    MEM_B(-0X2BBA, ctx->r1) = 0;
    // 0x15178EC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EC4: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x15178EC8: sh          $t6, -0x2BBC($at)
    MEM_H(-0X2BBC, ctx->r1) = ctx->r14;
    // 0x15178ECC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178ED0: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x15178ED4: sb          $t7, -0x2BCE($at)
    MEM_B(-0X2BCE, ctx->r1) = ctx->r15;
    // 0x15178ED8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EDC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x15178EE0: sb          $t8, -0x2BCD($at)
    MEM_B(-0X2BCD, ctx->r1) = ctx->r24;
    // 0x15178EE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EE8: sh          $zero, -0x2BCA($at)
    MEM_H(-0X2BCA, ctx->r1) = 0;
    // 0x15178EEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15178EF0: sw          $zero, -0x2BC0($at)
    MEM_W(-0X2BC0, ctx->r1) = 0;
    // 0x15178EF4: jr          $ra
    // 0x15178EF8: nop

    return;
    return;
    // 0x15178EF8: nop

;}
RECOMP_FUNC void func_1502CC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502CC34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1502CC38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502CC3C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1502CC40: sll         $a2, $a1, 2
    ctx->r6 = S32(ctx->r5 << 2);
    // 0x1502CC44: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1502CC48: addiu       $t6, $t6, -0x6498
    ctx->r14 = ADD32(ctx->r14, -0X6498);
    // 0x1502CC4C: subu        $a2, $a2, $a1
    ctx->r6 = SUB32(ctx->r6, ctx->r5);
    // 0x1502CC50: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x1502CC54: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x1502CC58: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1502CC5C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1502CC60: addiu       $t3, $t3, -0x6488
    ctx->r11 = ADD32(ctx->r11, -0X6488);
    // 0x1502CC64: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x1502CC68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x1502CC6C: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x1502CC70: addu        $v1, $a2, $t3
    ctx->r3 = ADD32(ctx->r6, ctx->r11);
    // 0x1502CC74: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1502CC78: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1502CC7C: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x1502CC80: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x1502CC84: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1502CC88: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x1502CC8C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1502CC90: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1502CC94: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x1502CC98: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x1502CC9C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1502CCA0: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x1502CCA4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x1502CCA8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1502CCAC: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x1502CCB0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1502CCB4: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x1502CCB8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x1502CCBC: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x1502CCC0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x1502CCC4: lw          $t3, 0xC($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC);
    // 0x1502CCC8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1502CCCC: lbu         $t5, 0xA4($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XA4);
    // 0x1502CCD0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x1502CCD4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x1502CCD8: beq         $t5, $zero, L_1502CCEC
    if (ctx->r13 == 0) {
        // 0x1502CCDC: lw          $a1, 0x48($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X48);
            goto L_1502CCEC;
    }
    // 0x1502CCDC: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1502CCE0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x1502CCE4: jal         0x1502EC34
    // 0x1502CCE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1502EC34(rdram, ctx);
        goto after_0;
    // 0x1502CCE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
L_1502CCEC:
    // 0x1502CCEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1502CCF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1502CCF4: jr          $ra
    // 0x1502CCF8: nop

    return;
    return;
    // 0x1502CCF8: nop

;}
RECOMP_FUNC void func_1513CFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CFE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513CFE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513CFEC: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x1513CFF0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x1513CFF4: beql        $t7, $zero, L_1513D2E4
    if (ctx->r15 == 0) {
        // 0x1513CFF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1513D2E4;
    }
    goto skip_0;
    // 0x1513CFF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1513CFFC: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    // 0x1513D000: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1513D004: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1513D008: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x1513D00C: beql        $t9, $zero, L_1513D038
    if (ctx->r25 == 0) {
        // 0x1513D010: lbu         $v0, 0x70($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X70);
            goto L_1513D038;
    }
    goto skip_1;
    // 0x1513D010: lbu         $v0, 0x70($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X70);
    skip_1:
    // 0x1513D014: lh          $t0, 0x1C($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X1C);
    // 0x1513D018: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x1513D01C: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x1513D020: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
    // 0x1513D024: lh          $t3, 0x1C($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X1C);
    // 0x1513D028: bgezl       $t3, L_1513D038
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1513D02C: lbu         $v0, 0x70($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X70);
            goto L_1513D038;
    }
    goto skip_2;
    // 0x1513D02C: lbu         $v0, 0x70($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X70);
    skip_2:
    // 0x1513D030: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513D034: lbu         $v0, 0x70($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X70);
L_1513D038:
    // 0x1513D038: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513D03C: beql        $v0, $zero, L_1513D074
    if (ctx->r2 == 0) {
        // 0x1513D040: lbu         $v0, 0x71($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X71);
            goto L_1513D074;
    }
    goto skip_3;
    // 0x1513D040: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
    skip_3:
    // 0x1513D044: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x1513D048: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x1513D04C: lw          $t9, -0x6348($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6348);
    // 0x1513D050: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1513D054: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    // 0x1513D058: jalr        $t9
    // 0x1513D05C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513D05C: nop

    after_0:
    // 0x1513D060: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1513D064: bne         $v0, $zero, L_1513D070
    if (ctx->r2 != 0) {
        // 0x1513D068: lb          $a3, 0x1B($sp)
        ctx->r7 = MEM_B(ctx->r29, 0X1B);
            goto L_1513D070;
    }
    // 0x1513D068: lb          $a3, 0x1B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1B);
    // 0x1513D06C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1513D070:
    // 0x1513D070: lbu         $v0, 0x71($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X71);
L_1513D074:
    // 0x1513D074: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513D078: beq         $v0, $zero, L_1513D0A8
    if (ctx->r2 == 0) {
        // 0x1513D07C: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_1513D0A8;
    }
    // 0x1513D07C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x1513D080: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x1513D084: lw          $t9, -0x62A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X62A0);
    // 0x1513D088: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1513D08C: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    // 0x1513D090: jalr        $t9
    // 0x1513D094: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1513D094: nop

    after_1:
    // 0x1513D098: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1513D09C: bne         $v0, $zero, L_1513D0A8
    if (ctx->r2 != 0) {
        // 0x1513D0A0: lb          $a3, 0x1B($sp)
        ctx->r7 = MEM_B(ctx->r29, 0X1B);
            goto L_1513D0A8;
    }
    // 0x1513D0A0: lb          $a3, 0x1B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1B);
    // 0x1513D0A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1513D0A8:
    // 0x1513D0A8: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x1513D0AC: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x1513D0B0: bgezl       $t6, L_1513D0FC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1513D0B4: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_1513D0FC;
    }
    goto skip_4;
    // 0x1513D0B4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    skip_4:
    // 0x1513D0B8: bnel        $a3, $zero, L_1513D0FC
    if (ctx->r7 != 0) {
        // 0x1513D0BC: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_1513D0FC;
    }
    goto skip_5;
    // 0x1513D0BC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    skip_5:
    // 0x1513D0C0: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x1513D0C4: lh          $t7, 0x6C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6C);
    // 0x1513D0C8: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1513D0CC: beql        $at, $zero, L_1513D0FC
    if (ctx->r1 == 0) {
        // 0x1513D0D0: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_1513D0FC;
    }
    goto skip_6;
    // 0x1513D0D0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    skip_6:
    // 0x1513D0D4: lh          $t8, 0x6E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6E);
    // 0x1513D0D8: lbu         $t0, 0x5C($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X5C);
    // 0x1513D0DC: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1513D0E0: mflo        $v1
    ctx->r3 = lo;
    // 0x1513D0E4: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1513D0E8: beql        $at, $zero, L_1513D0FC
    if (ctx->r1 == 0) {
        // 0x1513D0EC: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_1513D0FC;
    }
    goto skip_7;
    // 0x1513D0EC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    skip_7:
    // 0x1513D0F0: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x1513D0F4: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x1513D0F8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
L_1513D0FC:
    // 0x1513D0FC: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x1513D100: beq         $t1, $zero, L_1513D144
    if (ctx->r9 == 0) {
        // 0x1513D104: nop
    
            goto L_1513D144;
    }
    // 0x1513D104: nop

    // 0x1513D108: bne         $a3, $zero, L_1513D144
    if (ctx->r7 != 0) {
        // 0x1513D10C: nop
    
            goto L_1513D144;
    }
    // 0x1513D10C: nop

    // 0x1513D110: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x1513D114: lh          $t2, 0x6C($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6C);
    // 0x1513D118: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1513D11C: beq         $at, $zero, L_1513D144
    if (ctx->r1 == 0) {
        // 0x1513D120: nop
    
            goto L_1513D144;
    }
    // 0x1513D120: nop

    // 0x1513D124: lh          $t3, 0x6E($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X6E);
    // 0x1513D128: lbu         $t4, 0x5C($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X5C);
    // 0x1513D12C: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1513D130: mflo        $v1
    ctx->r3 = lo;
    // 0x1513D134: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1513D138: beq         $at, $zero, L_1513D144
    if (ctx->r1 == 0) {
        // 0x1513D13C: nop
    
            goto L_1513D144;
    }
    // 0x1513D13C: nop

    // 0x1513D140: sb          $v1, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r3;
L_1513D144:
    // 0x1513D144: bne         $a3, $zero, L_1513D290
    if (ctx->r7 != 0) {
        // 0x1513D148: nop
    
            goto L_1513D290;
    }
    // 0x1513D148: nop

    // 0x1513D14C: lw          $a2, 0x24($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X24);
    // 0x1513D150: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1513D154: beq         $a2, $zero, L_1513D290
    if (ctx->r6 == 0) {
        // 0x1513D158: nop
    
            goto L_1513D290;
    }
    // 0x1513D158: nop

    // 0x1513D15C: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x1513D160: lbu         $t5, 0x18($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X18);
    // 0x1513D164: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1513D168: multu       $a2, $t7
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1513D16C: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x1513D170: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x1513D174: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1513D178: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x1513D17C: lbu         $a1, 0xB64($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB64);
    // 0x1513D180: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x1513D184: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x1513D188: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1513D18C: mflo        $t8
    ctx->r24 = lo;
    // 0x1513D190: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x1513D194: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1513D198: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x1513D19C: beq         $at, $zero, L_1513D21C
    if (ctx->r1 == 0) {
        // 0x1513D1A0: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_1513D21C;
    }
    // 0x1513D1A0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1513D1A4: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x1513D1A8: andi        $t1, $a1, 0x800
    ctx->r9 = ctx->r5 & 0X800;
    // 0x1513D1AC: beq         $t1, $zero, L_1513D1BC
    if (ctx->r9 == 0) {
        // 0x1513D1B0: andi        $t2, $a1, 0x400
        ctx->r10 = ctx->r5 & 0X400;
            goto L_1513D1BC;
    }
    // 0x1513D1B0: andi        $t2, $a1, 0x400
    ctx->r10 = ctx->r5 & 0X400;
    // 0x1513D1B4: b           L_1513D290
    // 0x1513D1B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1513D290;
    // 0x1513D1B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1513D1BC:
    // 0x1513D1BC: beq         $t2, $zero, L_1513D200
    if (ctx->r10 == 0) {
        // 0x1513D1C0: negu        $t5, $a2
        ctx->r13 = SUB32(0, ctx->r6);
            goto L_1513D200;
    }
    // 0x1513D1C0: negu        $t5, $a2
    ctx->r13 = SUB32(0, ctx->r6);
    // 0x1513D1C4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x1513D1C8: mfhi        $t3
    ctx->r11 = hi;
    // 0x1513D1CC: subu        $t4, $v1, $t3
    ctx->r12 = SUB32(ctx->r3, ctx->r11);
    // 0x1513D1D0: bne         $v1, $zero, L_1513D1DC
    if (ctx->r3 != 0) {
        // 0x1513D1D4: nop
    
            goto L_1513D1DC;
    }
    // 0x1513D1D4: nop

    // 0x1513D1D8: break       7
    do_break(353620440);
L_1513D1DC:
    // 0x1513D1DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1513D1E0: bne         $v1, $at, L_1513D1F4
    if (ctx->r3 != ctx->r1) {
        // 0x1513D1E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1513D1F4;
    }
    // 0x1513D1E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1513D1E8: bne         $v0, $at, L_1513D1F4
    if (ctx->r2 != ctx->r1) {
        // 0x1513D1EC: nop
    
            goto L_1513D1F4;
    }
    // 0x1513D1EC: nop

    // 0x1513D1F0: break       6
    do_break(353620464);
L_1513D1F4:
    // 0x1513D1F4: sw          $t4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r12;
    // 0x1513D1F8: b           L_1513D290
    // 0x1513D1FC: sw          $t5, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r13;
        goto L_1513D290;
    // 0x1513D1FC: sw          $t5, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r13;
L_1513D200:
    // 0x1513D200: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x1513D204: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1513D208: sw          $t9, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r25;
    // 0x1513D20C: bne         $at, $zero, L_1513D200
    if (ctx->r1 != 0) {
        // 0x1513D210: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1513D200;
    }
    // 0x1513D210: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1513D214: b           L_1513D290
    // 0x1513D218: nop

        goto L_1513D290;
    // 0x1513D218: nop

L_1513D21C:
    // 0x1513D21C: bgez        $v0, L_1513D290
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1513D220: nop
    
            goto L_1513D290;
    }
    // 0x1513D220: nop

    // 0x1513D224: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x1513D228: andi        $t7, $a1, 0x1000
    ctx->r15 = ctx->r5 & 0X1000;
    // 0x1513D22C: beq         $t7, $zero, L_1513D23C
    if (ctx->r15 == 0) {
        // 0x1513D230: andi        $t6, $a1, 0x400
        ctx->r14 = ctx->r5 & 0X400;
            goto L_1513D23C;
    }
    // 0x1513D230: andi        $t6, $a1, 0x400
    ctx->r14 = ctx->r5 & 0X400;
    // 0x1513D234: b           L_1513D290
    // 0x1513D238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1513D290;
    // 0x1513D238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1513D23C:
    // 0x1513D23C: beq         $t6, $zero, L_1513D280
    if (ctx->r14 == 0) {
        // 0x1513D240: negu        $t8, $v0
        ctx->r24 = SUB32(0, ctx->r2);
            goto L_1513D280;
    }
    // 0x1513D240: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
    // 0x1513D244: div         $zero, $t8, $v1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r3)));
    // 0x1513D248: mfhi        $t0
    ctx->r8 = hi;
    // 0x1513D24C: negu        $t1, $a2
    ctx->r9 = SUB32(0, ctx->r6);
    // 0x1513D250: bne         $v1, $zero, L_1513D25C
    if (ctx->r3 != 0) {
        // 0x1513D254: nop
    
            goto L_1513D25C;
    }
    // 0x1513D254: nop

    // 0x1513D258: break       7
    do_break(353620568);
L_1513D25C:
    // 0x1513D25C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1513D260: bne         $v1, $at, L_1513D274
    if (ctx->r3 != ctx->r1) {
        // 0x1513D264: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1513D274;
    }
    // 0x1513D264: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1513D268: bne         $t8, $at, L_1513D274
    if (ctx->r24 != ctx->r1) {
        // 0x1513D26C: nop
    
            goto L_1513D274;
    }
    // 0x1513D26C: nop

    // 0x1513D270: break       6
    do_break(353620592);
L_1513D274:
    // 0x1513D274: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x1513D278: b           L_1513D290
    // 0x1513D27C: sw          $t1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r9;
        goto L_1513D290;
    // 0x1513D27C: sw          $t1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r9;
L_1513D280:
    // 0x1513D280: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x1513D284: sw          $t2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r10;
    // 0x1513D288: bltz        $t2, L_1513D280
    if (SIGNED(ctx->r10) < 0) {
        // 0x1513D28C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_1513D280;
    }
    // 0x1513D28C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_1513D290:
    // 0x1513D290: beq         $a3, $zero, L_1513D2D0
    if (ctx->r7 == 0) {
        // 0x1513D294: nop
    
            goto L_1513D2D0;
    }
    // 0x1513D294: nop

    // 0x1513D298: lbu         $v0, 0x72($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X72);
    // 0x1513D29C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513D2A0: beq         $v0, $zero, L_1513D2D0
    if (ctx->r2 == 0) {
        // 0x1513D2A4: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_1513D2D0;
    }
    // 0x1513D2A4: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x1513D2A8: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x1513D2AC: lw          $t9, -0x61F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X61F0);
    // 0x1513D2B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1513D2B4: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    // 0x1513D2B8: jalr        $t9
    // 0x1513D2BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1513D2BC: nop

    after_2:
    // 0x1513D2C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1513D2C4: beq         $v0, $zero, L_1513D2D0
    if (ctx->r2 == 0) {
        // 0x1513D2C8: lb          $a3, 0x1B($sp)
        ctx->r7 = MEM_B(ctx->r29, 0X1B);
            goto L_1513D2D0;
    }
    // 0x1513D2C8: lb          $a3, 0x1B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1B);
    // 0x1513D2CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1513D2D0:
    // 0x1513D2D0: beql        $a3, $zero, L_1513D2E4
    if (ctx->r7 == 0) {
        // 0x1513D2D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1513D2E4;
    }
    goto skip_8;
    // 0x1513D2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x1513D2D8: jal         0x1516972C
    // 0x1513D2DC: nop

    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x1513D2DC: nop

    after_3:
    // 0x1513D2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513D2E4:
    // 0x1513D2E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1513D2E8: jr          $ra
    // 0x1513D2EC: nop

    return;
    return;
    // 0x1513D2EC: nop

;}
RECOMP_FUNC void func_150FB1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FB1E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150FB1EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FB1F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150FB1F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150FB1F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x150FB1FC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150FB200: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x150FB204: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150FB208: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x150FB20C: jal         0x151D710C
    // 0x150FB210: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151D710C(rdram, ctx);
        goto after_0;
    // 0x150FB210: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150FB214: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x150FB218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150FB21C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x150FB220: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150FB224: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x150FB228: jal         0x15157F80
    // 0x150FB22C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15157F80(rdram, ctx);
        goto after_1;
    // 0x150FB22C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x150FB230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FB234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150FB238: jr          $ra
    // 0x150FB23C: nop

    return;
    return;
    // 0x150FB23C: nop

;}
RECOMP_FUNC void func_15097798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15097798: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1509779C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150977A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150977A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150977A8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150977AC: lw          $t9, 0x2DB4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2DB4);
    // 0x150977B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150977B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150977B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150977BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150977C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150977C4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150977C8: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x150977CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150977D0: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150977D4: beq         $t9, $zero, L_150978FC
    if (ctx->r25 == 0) {
        // 0x150977D8: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_150978FC;
    }
    // 0x150977D8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x150977DC: addiu       $a0, $v0, 0x2A4
    ctx->r4 = ADD32(ctx->r2, 0X2A4);
    // 0x150977E0: addiu       $a1, $v0, 0x2F8
    ctx->r5 = ADD32(ctx->r2, 0X2F8);
    // 0x150977E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x150977E8: jal         0x15048F90
    // 0x150977EC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_15048F90(rdram, ctx);
        goto after_0;
    // 0x150977EC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x150977F0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150977F4: jal         0x1504917C
    // 0x150977F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_1504917C(rdram, ctx);
        goto after_1;
    // 0x150977F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x150977FC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x15097800: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15097804: addiu       $t2, $t2, 0x2E30
    ctx->r10 = ADD32(ctx->r10, 0X2E30);
    // 0x15097808: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1509780C: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x15097810: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15097814: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x15097818: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1509781C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15097820: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15097824: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x15097828: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1509782C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x15097830: lwc1        $f18, 0x2A4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2A4);
    // 0x15097834: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15097838: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509783C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15097840: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15097844: swc1        $f4, 0x2A4($v0)
    MEM_W(0X2A4, ctx->r2) = ctx->f4.u32l;
    // 0x15097848: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1509784C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15097850: lwc1        $f4, 0x2A8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2A8);
    // 0x15097854: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15097858: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1509785C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15097860: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15097864: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15097868: swc1        $f8, 0x2A8($v0)
    MEM_W(0X2A8, ctx->r2) = ctx->f8.u32l;
    // 0x1509786C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15097870: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15097874: lwc1        $f8, 0x2AC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2AC);
    // 0x15097878: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1509787C: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15097880: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15097884: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15097888: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1509788C: swc1        $f10, 0x2AC($v0)
    MEM_W(0X2AC, ctx->r2) = ctx->f10.u32l;
    // 0x15097890: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15097894: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15097898: lwc1        $f10, 0x2F8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1509789C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150978A0: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150978A4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150978A8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150978AC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150978B0: swc1        $f18, 0x2F8($v0)
    MEM_W(0X2F8, ctx->r2) = ctx->f18.u32l;
    // 0x150978B4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150978B8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150978BC: lwc1        $f18, 0x2FC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x150978C0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150978C4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150978C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150978CC: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150978D0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150978D4: swc1        $f4, 0x2FC($v0)
    MEM_W(0X2FC, ctx->r2) = ctx->f4.u32l;
    // 0x150978D8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150978DC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150978E0: lwc1        $f4, 0x300($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X300);
    // 0x150978E4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x150978E8: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150978EC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150978F0: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x150978F4: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150978F8: swc1        $f8, 0x300($v0)
    MEM_W(0X300, ctx->r2) = ctx->f8.u32l;
L_150978FC:
    // 0x150978FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15097900: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15097904: jr          $ra
    // 0x15097908: nop

    return;
    return;
    // 0x15097908: nop

;}
RECOMP_FUNC void __n_setUsptFromTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10015464: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x10015468: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x1001546C: beq         $t6, $zero, L_10015494
    if (ctx->r14 == 0) {
        // 0x10015470: nop
    
            goto L_10015494;
    }
    // 0x10015470: nop

    // 0x10015474: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x10015478: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1001547C: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x10015480: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x10015484: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x10015488: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1001548C: b           L_1001549C
    // 0x10015490: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
        goto L_1001549C;
    // 0x10015490: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
L_10015494:
    // 0x10015494: addiu       $t0, $zero, 0x1E8
    ctx->r8 = ADD32(0, 0X1E8);
    // 0x10015498: sw          $t0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r8;
L_1001549C:
    // 0x1001549C: b           L_100154A4
    // 0x100154A0: nop

        goto L_100154A4;
    // 0x100154A0: nop

L_100154A4:
    // 0x100154A4: jr          $ra
    // 0x100154A8: nop

    return;
    return;
    // 0x100154A8: nop

;}
RECOMP_FUNC void func_15047390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15047390: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15047394: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15047398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1504739C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150473A0: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x150473A4: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150473A8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150473AC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150473B0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150473B4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150473B8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150473BC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150473C0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x150473C4: jal         0x150A7BC0
    // 0x150473C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x150473C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150473CC: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150473D0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150473D4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150473D8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150473DC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150473E0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150473E4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150473E8: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150473EC: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150473F0: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150473F4: sub.s       $f30, $f4, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150473F8: mul.s       $f10, $f28, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x150473FC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15047400: mul.s       $f6, $f30, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x15047404: jal         0x10026530
    // 0x15047408: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x15047408: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x1504740C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15047410: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x15047414: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15047418: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x1504741C: nop

    // 0x15047420: bc1fl       L_15047430
    if (!c1cs) {
        // 0x15047424: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_15047430;
    }
    goto skip_0;
    // 0x15047424: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_0:
    // 0x15047428: lwc1        $f18, -0x72A0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X72A0);
    // 0x1504742C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_15047430:
    // 0x15047430: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15047434: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15047438: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1504743C: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15047440: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x15047444: nop

    // 0x15047448: mul.s       $f28, $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x1504744C: nop

    // 0x15047450: mul.s       $f30, $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f0.fl);
    // 0x15047454: nop

    // 0x15047458: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x1504745C: nop

    // 0x15047460: mul.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x15047464: sub.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x15047468: mul.s       $f6, $f8, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x1504746C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15047470: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x15047474: sub.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15047478: mul.s       $f6, $f10, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x1504747C: nop

    // 0x15047480: mul.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x15047484: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15047488: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x1504748C: nop

    // 0x15047490: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x15047494: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15047498: mul.s       $f8, $f24, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x1504749C: jal         0x10026530
    // 0x150474A0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x150474A0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x150474A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150474A8: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x150474AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150474B0: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x150474B4: nop

    // 0x150474B8: bc1fl       L_150474C8
    if (!c1cs) {
        // 0x150474BC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150474C8;
    }
    goto skip_1;
    // 0x150474BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x150474C0: lwc1        $f18, -0x729C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X729C);
    // 0x150474C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150474C8:
    // 0x150474C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150474CC: nop

    // 0x150474D0: div.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150474D4: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x150474D8: nop

    // 0x150474DC: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x150474E0: nop

    // 0x150474E4: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x150474E8: nop

    // 0x150474EC: mul.s       $f6, $f28, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f24.fl);
    // 0x150474F0: nop

    // 0x150474F4: mul.s       $f8, $f30, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f22.fl);
    // 0x150474F8: nop

    // 0x150474FC: mul.s       $f10, $f30, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x15047500: nop

    // 0x15047504: mul.s       $f4, $f26, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f24.fl);
    // 0x15047508: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1504750C: mul.s       $f6, $f26, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x15047510: nop

    // 0x15047514: mul.s       $f8, $f28, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x15047518: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x1504751C: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15047520: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15047524: nop

    // 0x15047528: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1504752C: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    // 0x15047530: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15047534: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15047538: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1504753C: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x15047540: jal         0x10026530
    // 0x15047544: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x15047544: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x15047548: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1504754C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x15047550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15047554: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x15047558: nop

    // 0x1504755C: bc1fl       L_1504756C
    if (!c1cs) {
        // 0x15047560: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1504756C;
    }
    goto skip_2;
    // 0x15047560: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x15047564: lwc1        $f18, -0x7298($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7298);
    // 0x15047568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1504756C:
    // 0x1504756C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15047570: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15047574: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15047578: div.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1504757C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15047580: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15047584: nop

    // 0x15047588: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1504758C: nop

    // 0x15047590: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15047594: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x15047598: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x1504759C: swc1        $f22, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f22.u32l;
    // 0x150475A0: swc1        $f24, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f24.u32l;
    // 0x150475A4: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150475A8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150475AC: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x150475B0: nop

    // 0x150475B4: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150475B8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150475BC: swc1        $f12, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f12.u32l;
    // 0x150475C0: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    // 0x150475C4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150475C8: mul.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x150475CC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150475D0: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x150475D4: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x150475D8: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150475DC: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150475E0: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x150475E4: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150475E8: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150475EC: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150475F0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x150475F4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150475F8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150475FC: swc1        $f26, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f26.u32l;
    // 0x15047600: mul.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x15047604: swc1        $f28, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f28.u32l;
    // 0x15047608: swc1        $f30, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f30.u32l;
    // 0x1504760C: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15047610: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15047614: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15047618: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504761C: nop

    // 0x15047620: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x15047624: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x15047628: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x1504762C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15047630: mul.s       $f10, $f14, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x15047634: nop

    // 0x15047638: mul.s       $f8, $f12, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f28.fl);
    // 0x1504763C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x15047640: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x15047644: mul.s       $f6, $f2, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f30.fl);
    // 0x15047648: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1504764C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15047650: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15047654: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x15047658: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x1504765C: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x15047660: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15047664: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15047668: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1504766C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15047670: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15047674: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15047678: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x1504767C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15047680: jr          $ra
    // 0x15047684: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15047684: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_151179BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151179BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151179C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151179C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151179C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151179CC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x151179D0: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
    // 0x151179D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x151179D8: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x151179DC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x151179E0: andi        $t6, $t0, 0x3
    ctx->r14 = ctx->r8 & 0X3;
    // 0x151179E4: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x151179E8: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151179EC: bne         $v1, $zero, L_15117A1C
    if (ctx->r3 != 0) {
        // 0x151179F0: andi        $t1, $v0, 0xFFFF
        ctx->r9 = ctx->r2 & 0XFFFF;
            goto L_15117A1C;
    }
    // 0x151179F0: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x151179F4: lh          $t5, 0x10($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X10);
    // 0x151179F8: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x151179FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15117A00: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x15117A04: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x15117A08: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15117A0C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x15117A10: or          $v1, $t5, $at
    ctx->r3 = ctx->r13 | ctx->r1;
    // 0x15117A14: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x15117A18: sw          $v1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r3;
L_15117A1C:
    // 0x15117A1C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x15117A20: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x15117A24: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x15117A28: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x15117A2C: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x15117A30: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15117A34: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15117A38: sll         $t9, $t3, 16
    ctx->r25 = S32(ctx->r11 << 16);
    // 0x15117A3C: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15117A40: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15117A44: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x15117A48: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x15117A4C: bne         $t0, $zero, L_15117A64
    if (ctx->r8 != 0) {
        // 0x15117A50: or          $t4, $t6, $zero
        ctx->r12 = ctx->r14 | 0;
            goto L_15117A64;
    }
    // 0x15117A50: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x15117A54: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x15117A58: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x15117A5C: b           L_15117D28
    // 0x15117A60: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
        goto L_15117D28;
    // 0x15117A60: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_15117A64:
    // 0x15117A64: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15117A68: lh          $t9, 0x12($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X12);
    // 0x15117A6C: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x15117A70: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
    // 0x15117A74: sh          $t3, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r11;
    // 0x15117A78: sh          $t2, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r10;
    // 0x15117A7C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x15117A80: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15117A84: sh          $a3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r7;
    // 0x15117A88: subu        $a0, $t2, $t8
    ctx->r4 = SUB32(ctx->r10, ctx->r24);
    // 0x15117A8C: subu        $a1, $t3, $t9
    ctx->r5 = SUB32(ctx->r11, ctx->r25);
    // 0x15117A90: jal         0x150AD9A0
    // 0x15117A94: subu        $a2, $t4, $t5
    ctx->r6 = SUB32(ctx->r12, ctx->r13);
    func_150AD9A0(rdram, ctx);
        goto after_0;
    // 0x15117A94: subu        $a2, $t4, $t5
    ctx->r6 = SUB32(ctx->r12, ctx->r13);
    after_0:
    // 0x15117A98: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15117A9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15117AA0: lh          $a3, 0x50($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X50);
    // 0x15117AA4: bne         $t0, $at, L_15117B18
    if (ctx->r8 != ctx->r1) {
        // 0x15117AA8: lw          $t1, 0x38($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X38);
            goto L_15117B18;
    }
    // 0x15117AA8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x15117AAC: bgez        $a3, L_15117ABC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x15117AB0: negu        $t7, $a3
        ctx->r15 = SUB32(0, ctx->r7);
            goto L_15117ABC;
    }
    // 0x15117AB0: negu        $t7, $a3
    ctx->r15 = SUB32(0, ctx->r7);
    // 0x15117AB4: b           L_15117AC0
    // 0x15117AB8: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
        goto L_15117AC0;
    // 0x15117AB8: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
L_15117ABC:
    // 0x15117ABC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
L_15117AC0:
    // 0x15117AC0: beq         $t1, $zero, L_15117B10
    if (ctx->r9 == 0) {
        // 0x15117AC4: nop
    
            goto L_15117B10;
    }
    // 0x15117AC4: nop

    // 0x15117AC8: lbu         $t6, 0x4F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4F);
    // 0x15117ACC: andi        $t8, $t6, 0x4
    ctx->r24 = ctx->r14 & 0X4;
    // 0x15117AD0: bne         $t8, $zero, L_15117B10
    if (ctx->r24 != 0) {
        // 0x15117AD4: nop
    
            goto L_15117B10;
    }
    // 0x15117AD4: nop

    // 0x15117AD8: lbu         $t9, 0x73($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X73);
    // 0x15117ADC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15117AE0: andi        $t5, $t9, 0x4
    ctx->r13 = ctx->r25 & 0X4;
    // 0x15117AE4: bne         $t5, $zero, L_15117B10
    if (ctx->r13 != 0) {
        // 0x15117AE8: nop
    
            goto L_15117B10;
    }
    // 0x15117AE8: nop

    // 0x15117AEC: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15117AF0: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x15117AF4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15117AF8: beq         $at, $zero, L_15117B08
    if (ctx->r1 == 0) {
        // 0x15117AFC: subu        $t7, $a0, $v1
        ctx->r15 = SUB32(ctx->r4, ctx->r3);
            goto L_15117B08;
    }
    // 0x15117AFC: subu        $t7, $a0, $v1
    ctx->r15 = SUB32(ctx->r4, ctx->r3);
    // 0x15117B00: b           L_15117B88
    // 0x15117B04: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_15117B88;
    // 0x15117B04: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_15117B08:
    // 0x15117B08: b           L_15117B88
    // 0x15117B0C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_15117B88;
    // 0x15117B0C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_15117B10:
    // 0x15117B10: b           L_15117B88
    // 0x15117B14: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_15117B88;
    // 0x15117B14: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_15117B18:
    // 0x15117B18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15117B1C: bne         $t0, $at, L_15117B64
    if (ctx->r8 != ctx->r1) {
        // 0x15117B20: addiu       $a0, $v0, 0x6
        ctx->r4 = ADD32(ctx->r2, 0X6);
            goto L_15117B64;
    }
    // 0x15117B20: addiu       $a0, $v0, 0x6
    ctx->r4 = ADD32(ctx->r2, 0X6);
    // 0x15117B24: bgez        $a3, L_15117B34
    if (SIGNED(ctx->r7) >= 0) {
        // 0x15117B28: sw          $a0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r4;
            goto L_15117B34;
    }
    // 0x15117B28: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15117B2C: b           L_15117B38
    // 0x15117B30: negu        $v1, $a3
    ctx->r3 = SUB32(0, ctx->r7);
        goto L_15117B38;
    // 0x15117B30: negu        $v1, $a3
    ctx->r3 = SUB32(0, ctx->r7);
L_15117B34:
    // 0x15117B34: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_15117B38:
    // 0x15117B38: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15117B3C: bnel        $at, $zero, L_15117B8C
    if (ctx->r1 != 0) {
        // 0x15117B40: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_15117B8C;
    }
    goto skip_0;
    // 0x15117B40: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x15117B44: bgez        $a3, L_15117B58
    if (SIGNED(ctx->r7) >= 0) {
        // 0x15117B48: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_15117B58;
    }
    // 0x15117B48: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x15117B4C: negu        $t6, $a3
    ctx->r14 = SUB32(0, ctx->r7);
    // 0x15117B50: b           L_15117B5C
    // 0x15117B54: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
        goto L_15117B5C;
    // 0x15117B54: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_15117B58:
    // 0x15117B58: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
L_15117B5C:
    // 0x15117B5C: b           L_15117B88
    // 0x15117B60: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_15117B88;
    // 0x15117B60: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_15117B64:
    // 0x15117B64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15117B68: bne         $t0, $at, L_15117B88
    if (ctx->r8 != ctx->r1) {
        // 0x15117B6C: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_15117B88;
    }
    // 0x15117B6C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x15117B70: beq         $at, $zero, L_15117B84
    if (ctx->r1 == 0) {
        // 0x15117B74: addiu       $t8, $v0, -0x3
        ctx->r24 = ADD32(ctx->r2, -0X3);
            goto L_15117B84;
    }
    // 0x15117B74: addiu       $t8, $v0, -0x3
    ctx->r24 = ADD32(ctx->r2, -0X3);
    // 0x15117B78: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x15117B7C: b           L_15117B88
    // 0x15117B80: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_15117B88;
    // 0x15117B80: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15117B84:
    // 0x15117B84: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_15117B88:
    // 0x15117B88: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
L_15117B8C:
    // 0x15117B8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117B90: beql        $v0, $t9, L_15117D18
    if (ctx->r2 == ctx->r25) {
        // 0x15117B94: lbu         $t6, 0x73($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X73);
            goto L_15117D18;
    }
    goto skip_1;
    // 0x15117B94: lbu         $t6, 0x73($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X73);
    skip_1:
    // 0x15117B98: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15117B9C: lwc1        $f6, 0x2FDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FDC);
    // 0x15117BA0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15117BA4: sh          $a3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r7;
    // 0x15117BA8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15117BAC: jal         0x15047C00
    // 0x15117BB0: nop

    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15117BB0: nop

    after_1:
    // 0x15117BB4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15117BB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117BBC: lwc1        $f10, 0x2FE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FE0);
    // 0x15117BC0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15117BC4: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15117BC8: jal         0x15047D60
    // 0x15117BCC: nop

    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x15117BCC: nop

    after_2:
    // 0x15117BD0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15117BD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117BD8: lwc1        $f6, 0x2FE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FE4);
    // 0x15117BDC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15117BE0: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15117BE4: jal         0x15047C00
    // 0x15117BE8: nop

    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x15117BE8: nop

    after_3:
    // 0x15117BEC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x15117BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117BF4: lwc1        $f10, 0x2FE8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FE8);
    // 0x15117BF8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15117BFC: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15117C00: jal         0x15047D60
    // 0x15117C04: nop

    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15117C04: nop

    after_4:
    // 0x15117C08: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x15117C0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117C10: lwc1        $f6, 0x2FEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FEC);
    // 0x15117C14: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15117C18: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15117C1C: jal         0x15047C00
    // 0x15117C20: nop

    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x15117C20: nop

    after_5:
    // 0x15117C24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117C28: lwc1        $f10, 0x2FF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FF0);
    // 0x15117C2C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15117C30: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x15117C34: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15117C38: jal         0x15047D60
    // 0x15117C3C: nop

    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x15117C3C: nop

    after_6:
    // 0x15117C40: lh          $a3, 0x50($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X50);
    // 0x15117C44: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15117C48: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15117C4C: bgez        $a3, L_15117C5C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x15117C50: lw          $t5, 0x48($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X48);
            goto L_15117C5C;
    }
    // 0x15117C50: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x15117C54: negu        $t7, $t5
    ctx->r15 = SUB32(0, ctx->r13);
    // 0x15117C58: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
L_15117C5C:
    // 0x15117C5C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15117C60: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15117C64: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15117C68: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15117C6C: mul.s       $f12, $f16, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x15117C70: lh          $t8, 0x56($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X56);
    // 0x15117C74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15117C78: nop

    // 0x15117C7C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15117C80: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x15117C84: nop

    // 0x15117C88: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15117C8C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15117C90: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15117C94: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15117C98: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117C9C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15117CA0: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15117CA4: nop

    // 0x15117CA8: mul.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15117CAC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15117CB0: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15117CB4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x15117CB8: nop

    // 0x15117CBC: sh          $t5, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r13;
    // 0x15117CC0: lh          $t7, 0x54($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X54);
    // 0x15117CC4: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15117CC8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15117CCC: nop

    // 0x15117CD0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15117CD4: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15117CD8: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15117CDC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15117CE0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15117CE4: nop

    // 0x15117CE8: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x15117CEC: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x15117CF0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15117CF4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15117CF8: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15117CFC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15117D00: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15117D04: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15117D08: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15117D0C: nop

    // 0x15117D10: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x15117D14: lbu         $t6, 0x73($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X73);
L_15117D18:
    // 0x15117D18: andi        $t9, $t6, 0xFFFC
    ctx->r25 = ctx->r14 & 0XFFFC;
    // 0x15117D1C: sb          $t9, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r25;
    // 0x15117D20: or          $t5, $t9, $t0
    ctx->r13 = ctx->r25 | ctx->r8;
    // 0x15117D24: sb          $t5, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r13;
L_15117D28:
    // 0x15117D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15117D2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15117D30: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15117D34: jr          $ra
    // 0x15117D38: nop

    return;
    return;
    // 0x15117D38: nop

;}
RECOMP_FUNC void func_150C3D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C3D48: lui         $at, 0xEDCB
    ctx->r1 = S32(0XEDCB << 16);
    // 0x150C3D4C: ori         $at, $at, 0xA988
    ctx->r1 = ctx->r1 | 0XA988;
    // 0x150C3D50: addu        $v0, $a0, $at
    ctx->r2 = ADD32(ctx->r4, ctx->r1);
    // 0x150C3D54: jr          $ra
    // 0x150C3D58: nop

    return;
    return;
    // 0x150C3D58: nop

;}
RECOMP_FUNC void func_1515A60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515A60C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515A610: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1515A614: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1515A618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1515A61C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1515A620: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1515A624: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x1515A628: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A62C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1515A630: jal         0x151423D8
    // 0x1515A634: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1515A634: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1515A638: addiu       $s1, $s0, 0xA8
    ctx->r17 = ADD32(ctx->r16, 0XA8);
    // 0x1515A63C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1515A640: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1515A644: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1515A648: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1515A64C: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x1515A650: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x1515A654: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A658: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1515A65C: jal         0x151423D8
    // 0x1515A660: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1515A660: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x1515A664: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x1515A668: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1515A66C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1515A670: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1515A674: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x1515A678: lbu         $a0, 0x10($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X10);
    // 0x1515A67C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A680: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x1515A684: jal         0x151423D8
    // 0x1515A688: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x1515A688: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x1515A68C: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x1515A690: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1515A694: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x1515A698: lbu         $a0, 0x11($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X11);
    // 0x1515A69C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A6A0: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x1515A6A4: jal         0x151423D8
    // 0x1515A6A8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x1515A6A8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x1515A6AC: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1515A6B0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1515A6B4: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x1515A6B8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1515A6BC: swc1        $f18, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f18.u32l;
    // 0x1515A6C0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1515A6C4: lb          $t0, 0x6($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X6);
    // 0x1515A6C8: lbu         $t3, 0x4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X4);
    // 0x1515A6CC: lb          $t5, 0x7($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X7);
    // 0x1515A6D0: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A6D4: lbu         $t8, 0x5($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X5);
    // 0x1515A6D8: lbu         $t0, 0x12($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X12);
    // 0x1515A6DC: mflo        $t2
    ctx->r10 = lo;
    // 0x1515A6E0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x1515A6E4: sb          $t4, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r12;
    // 0x1515A6E8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1515A6EC: lbu         $t2, 0x10($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X10);
    // 0x1515A6F0: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A6F4: lbu         $t5, 0x13($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X13);
    // 0x1515A6F8: mflo        $t7
    ctx->r15 = lo;
    // 0x1515A6FC: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x1515A700: sb          $t9, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r25;
    // 0x1515A704: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1515A708: lbu         $t7, 0x11($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X11);
    // 0x1515A70C: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A710: mflo        $t3
    ctx->r11 = lo;
    // 0x1515A714: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1515A718: sb          $t4, 0x10($s1)
    MEM_B(0X10, ctx->r17) = ctx->r12;
    // 0x1515A71C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1515A720: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A724: mflo        $t8
    ctx->r24 = lo;
    // 0x1515A728: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1515A72C: sb          $t9, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r25;
    // 0x1515A730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1515A734: blezl       $v0, L_1515A778
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1515A738: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1515A778;
    }
    goto skip_0;
    // 0x1515A738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_1515A73C:
    // 0x1515A73C: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x1515A740: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1515A744: lwc1        $f10, 0x5C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x1515A748: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1515A74C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515A750: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x1515A754: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    // 0x1515A758: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1515A75C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1515A760: swc1        $f18, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f18.u32l;
    // 0x1515A764: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1515A768: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515A76C: bgtz        $v0, L_1515A73C
    if (SIGNED(ctx->r2) > 0) {
        // 0x1515A770: swc1        $f8, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f8.u32l;
            goto L_1515A73C;
    }
    // 0x1515A770: swc1        $f8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f8.u32l;
    // 0x1515A774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1515A778:
    // 0x1515A778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1515A77C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1515A780: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1515A784: jr          $ra
    // 0x1515A788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1515A788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1505959C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505959C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150595A0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150595A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150595A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150595AC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150595B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x150595B4: lw          $t6, 0xF8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF8);
    // 0x150595B8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x150595BC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x150595C0: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x150595C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150595C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150595CC: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x150595D0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150595D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150595D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150595DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150595E0: lw          $t9, 0x25C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X25C);
    // 0x150595E4: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x150595E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150595EC: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x150595F0: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x150595F4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150595F8: addiu       $t8, $a1, 0x64
    ctx->r24 = ADD32(ctx->r5, 0X64);
    // 0x150595FC: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x15059600: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15059604: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15059608: sw          $t7, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r15;
    // 0x1505960C: sb          $t8, 0x13D($s0)
    MEM_B(0X13D, ctx->r16) = ctx->r24;
    // 0x15059610: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x15059614: sw          $t0, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = ctx->r8;
    // 0x15059618: addu        $s1, $t1, $t2
    ctx->r17 = ADD32(ctx->r9, ctx->r10);
    // 0x1505961C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x15059620: sb          $v0, 0x83($s1)
    MEM_B(0X83, ctx->r17) = ctx->r2;
    // 0x15059624: sb          $v0, 0x89($s1)
    MEM_B(0X89, ctx->r17) = ctx->r2;
    // 0x15059628: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x1505962C: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x15059630: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15059634: bnel        $a2, $at, L_15059644
    if (ctx->r6 != ctx->r1) {
        // 0x15059638: lbu         $t3, 0x4($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X4);
            goto L_15059644;
    }
    goto skip_0;
    // 0x15059638: lbu         $t3, 0x4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X4);
    skip_0:
    // 0x1505963C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15059640: lbu         $t3, 0x4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X4);
L_15059644:
    // 0x15059644: addiu       $at, $zero, 0x9B
    ctx->r1 = ADD32(0, 0X9B);
    // 0x15059648: bnel        $t3, $at, L_15059658
    if (ctx->r11 != ctx->r1) {
        // 0x1505964C: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_15059658;
    }
    goto skip_1;
    // 0x1505964C: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    skip_1:
    // 0x15059650: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x15059654: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
L_15059658:
    // 0x15059658: bnel        $a2, $at, L_15059668
    if (ctx->r6 != ctx->r1) {
        // 0x1505965C: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_15059668;
    }
    goto skip_2;
    // 0x1505965C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    skip_2:
    // 0x15059660: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x15059664: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_15059668:
    // 0x15059668: bnel        $a2, $at, L_150596AC
    if (ctx->r6 != ctx->r1) {
        // 0x1505966C: addiu       $at, $zero, 0x89
        ctx->r1 = ADD32(0, 0X89);
            goto L_150596AC;
    }
    goto skip_3;
    // 0x1505966C: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    skip_3:
    // 0x15059670: sb          $zero, 0x13C($s1)
    MEM_B(0X13C, ctx->r17) = 0;
    // 0x15059674: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15059678: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1505967C: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x15059680: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x15059684: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x15059688: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1505968C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15059690: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15059694: jal         0x1505A630
    // 0x15059698: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15059698: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_0:
    // 0x1505969C: sh          $v0, 0x76($s1)
    MEM_H(0X76, ctx->r17) = ctx->r2;
    // 0x150596A0: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x150596A4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x150596A8: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
L_150596AC:
    // 0x150596AC: bne         $a2, $at, L_150596B8
    if (ctx->r6 != ctx->r1) {
        // 0x150596B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150596B8;
    }
    // 0x150596B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150596B4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_150596B8:
    // 0x150596B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150596BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x150596C0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x150596C4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x150596C8: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x150596CC: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x150596D0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x150596D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150596D8: lhu         $a1, 0x60C0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X60C0);
    // 0x150596DC: lw          $a2, 0x60CC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X60CC);
    // 0x150596E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x150596E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150596E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x150596EC: jal         0x1505E650
    // 0x150596F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_1;
    // 0x150596F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x150596F4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x150596F8: addiu       $t5, $zero, 0xFE
    ctx->r13 = ADD32(0, 0XFE);
    // 0x150596FC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15059700: sb          $t5, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r13;
    // 0x15059704: sb          $zero, 0x105($s0)
    MEM_B(0X105, ctx->r16) = 0;
    // 0x15059708: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x1505970C: lhu         $a0, 0x60E4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X60E4);
    // 0x15059710: jal         0x1505E7CC
    // 0x15059714: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1505E7CC(rdram, ctx);
        goto after_2;
    // 0x15059714: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x15059718: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x1505971C: sb          $v0, 0x106($s0)
    MEM_B(0X106, ctx->r16) = ctx->r2;
    // 0x15059720: sh          $t6, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r14;
    // 0x15059724: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15059728: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1505972C: jal         0x1505E874
    // 0x15059730: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1505E874(rdram, ctx);
        goto after_3;
    // 0x15059730: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x15059734: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x15059738: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505973C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15059740: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x15059744: lw          $v1, 0x1588($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1588);
    // 0x15059748: beql        $v1, $zero, L_150597D8
    if (ctx->r3 == 0) {
        // 0x1505974C: lhu         $t4, 0x7A($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X7A);
            goto L_150597D8;
    }
    goto skip_4;
    // 0x1505974C: lhu         $t4, 0x7A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X7A);
    skip_4:
    // 0x15059750: lw          $v0, -0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X8);
    // 0x15059754: beq         $v0, $zero, L_15059788
    if (ctx->r2 == 0) {
        // 0x15059758: nop
    
            goto L_15059788;
    }
    // 0x15059758: nop

    // 0x1505975C: lbu         $t9, 0x106($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X106);
    // 0x15059760: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15059764: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15059768: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x1505976C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x15059770: lbu         $t2, 0x15($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X15);
    // 0x15059774: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x15059778: beq         $t3, $zero, L_15059788
    if (ctx->r11 == 0) {
        // 0x1505977C: nop
    
            goto L_15059788;
    }
    // 0x1505977C: nop

    // 0x15059780: lhu         $t4, 0x7A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X7A);
    // 0x15059784: sh          $t4, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r12;
L_15059788:
    // 0x15059788: beql        $v0, $zero, L_150597B8
    if (ctx->r2 == 0) {
        // 0x1505978C: lhu         $t0, 0x7A($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X7A);
            goto L_150597B8;
    }
    goto skip_5;
    // 0x1505978C: lhu         $t0, 0x7A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X7A);
    skip_5:
    // 0x15059790: lbu         $t5, 0x106($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X106);
    // 0x15059794: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15059798: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x1505979C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x150597A0: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x150597A4: lbu         $t8, 0x15($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X15);
    // 0x150597A8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x150597AC: bne         $t9, $zero, L_150597CC
    if (ctx->r25 != 0) {
        // 0x150597B0: nop
    
            goto L_150597CC;
    }
    // 0x150597B0: nop

    // 0x150597B4: lhu         $t0, 0x7A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X7A);
L_150597B8:
    // 0x150597B8: lhu         $t1, 0x7A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X7A);
    // 0x150597BC: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x150597C0: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x150597C4: b           L_150597E8
    // 0x150597C8: sb          $t3, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = ctx->r11;
        goto L_150597E8;
    // 0x150597C8: sb          $t3, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = ctx->r11;
L_150597CC:
    // 0x150597CC: b           L_150597E8
    // 0x150597D0: sb          $zero, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = 0;
        goto L_150597E8;
    // 0x150597D0: sb          $zero, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = 0;
    // 0x150597D4: lhu         $t4, 0x7A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X7A);
L_150597D8:
    // 0x150597D8: lhu         $t5, 0x7A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X7A);
    // 0x150597DC: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x150597E0: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x150597E4: sb          $t7, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = ctx->r15;
L_150597E8:
    // 0x150597E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150597EC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x150597F0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x150597F4: jr          $ra
    // 0x150597F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150597F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_15085DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15085DA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15085DAC: lwc1        $f4, 0x2360($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2360);
    // 0x15085DB0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085DB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15085DB8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x15085DBC: addiu       $v0, $v0, 0x2360
    ctx->r2 = ADD32(ctx->r2, 0X2360);
    // 0x15085DC0: bc1f        L_15085DE4
    if (!c1cs) {
        // 0x15085DC4: nop
    
            goto L_15085DE4;
    }
    // 0x15085DC4: nop

    // 0x15085DC8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
L_15085DCC:
    // 0x15085DCC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15085DD0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15085DD4: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x15085DD8: nop

    // 0x15085DDC: bc1tl       L_15085DCC
    if (c1cs) {
        // 0x15085DE0: lwc1        $f6, 0x4($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
            goto L_15085DCC;
    }
    goto skip_0;
    // 0x15085DE0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
L_15085DE4:
    // 0x15085DE4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085DE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x15085DEC: lbu         $v0, 0x237C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X237C);
    // 0x15085DF0: jr          $ra
    // 0x15085DF4: nop

    return;
    return;
    // 0x15085DF4: nop

;}
RECOMP_FUNC void func_150C5F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5F48: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C5F4C: lw          $t6, 0x5C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X5C);
    // 0x150C5F50: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x150C5F54: beq         $t6, $zero, L_150C5F74
    if (ctx->r14 == 0) {
        // 0x150C5F58: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_150C5F74;
    }
    // 0x150C5F58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150C5F5C: lw          $v0, 0x5C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X5C);
    // 0x150C5F60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C5F64: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C5F68: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x150C5F6C: b           L_150C5F88
    // 0x150C5F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C5F88;
    // 0x150C5F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5F74:
    // 0x150C5F74: jal         0x150C5F94
    // 0x150C5F78: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_150C5F94(rdram, ctx);
        goto after_0;
    // 0x150C5F78: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x150C5F7C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x150C5F80: sw          $v0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->r2;
    // 0x150C5F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5F88:
    // 0x150C5F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5F8C: jr          $ra
    // 0x150C5F90: nop

    return;
    return;
    // 0x150C5F90: nop

;}
RECOMP_FUNC void func_15040D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040D60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040D64: jr          $ra
    // 0x15040D68: nop

    return;
    return;
    // 0x15040D68: nop

;}
RECOMP_FUNC void func_1506EA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EA58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506EA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506EA60: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506EA64: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506EA68: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506EA6C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506EA70: jal         0x1506E46C
    // 0x1506EA74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506EA74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506EA78: beq         $v0, $zero, L_1506EA88
    if (ctx->r2 == 0) {
        // 0x1506EA7C: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506EA88;
    }
    // 0x1506EA7C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506EA80: jal         0x1506BC24
    // 0x1506EA84: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    func_1506BC24(rdram, ctx);
        goto after_1;
    // 0x1506EA84: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    after_1:
L_1506EA88:
    // 0x1506EA88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506EA8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506EA90: jr          $ra
    // 0x1506EA94: nop

    return;
    return;
    // 0x1506EA94: nop

;}
RECOMP_FUNC void func_1500A68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A68C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A694: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A698: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1500A69C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1500A6A0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500A6A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500A6A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1500A6AC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500A6B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A6B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A6B8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x1500A6BC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1500A6C0: jal         0x15162740
    // 0x1500A6C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x1500A6C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1500A6C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A6D0: jr          $ra
    // 0x1500A6D4: nop

    return;
    return;
    // 0x1500A6D4: nop

;}
RECOMP_FUNC void func_1519FE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519FE6C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x1519FE70: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1519FE74: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x1519FE78: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x1519FE7C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x1519FE80: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1519FE84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1519FE88: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1519FE8C: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x1519FE90: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x1519FE94: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x1519FE98: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x1519FE9C: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x1519FEA0: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x1519FEA4: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x1519FEA8: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1519FEAC: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1519FEB0: bne         $at, $zero, L_151A0828
    if (ctx->r1 != 0) {
        // 0x1519FEB4: addiu       $a0, $s1, 0x84
        ctx->r4 = ADD32(ctx->r17, 0X84);
            goto L_151A0828;
    }
    // 0x1519FEB4: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x1519FEB8: lbu         $a2, 0x25($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FEBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519FEC0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1519FEC4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x1519FEC8: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x1519FECC: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x1519FED0: addiu       $a2, $t6, 0x120
    ctx->r6 = ADD32(ctx->r14, 0X120);
    // 0x1519FED4: jal         0x151D5D60
    // 0x1519FED8: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1519FED8: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    after_0:
    // 0x1519FEDC: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x1519FEE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1519FEE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519FEE8: beql        $t7, $zero, L_151A082C
    if (ctx->r15 == 0) {
        // 0x1519FEEC: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151A082C;
    }
    goto skip_0;
    // 0x1519FEEC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x1519FEF0: lw          $t1, 0x98($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X98);
    // 0x1519FEF4: lw          $t4, 0x94($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X94);
    // 0x1519FEF8: sb          $t8, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r24;
    // 0x1519FEFC: lbu         $v0, 0x4($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X4);
    // 0x1519FF00: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x1519FF04: beq         $t9, $zero, L_1519FF6C
    if (ctx->r25 == 0) {
        // 0x1519FF08: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1519FF6C;
    }
    // 0x1519FF08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519FF0C: lbu         $a0, 0x40($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X40);
    // 0x1519FF10: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    // 0x1519FF14: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
L_1519FF18:
    // 0x1519FF18: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519FF1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1519FF20: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1519FF24: mflo        $t6
    ctx->r14 = lo;
    // 0x1519FF28: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1519FF2C: sh          $a1, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r5;
    // 0x1519FF30: lbu         $t8, 0x41($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X41);
    // 0x1519FF34: lbu         $t6, 0x25($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FF38: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1519FF3C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x1519FF40: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x1519FF44: bne         $v0, $t6, L_1519FF50
    if (ctx->r2 != ctx->r14) {
        // 0x1519FF48: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_1519FF50;
    }
    // 0x1519FF48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x1519FF4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1519FF50:
    // 0x1519FF50: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1519FF54: beql        $a0, $zero, L_1519FF6C
    if (ctx->r4 == 0) {
        // 0x1519FF58: lbu         $v0, 0x4($t1)
        ctx->r2 = MEM_BU(ctx->r9, 0X4);
            goto L_1519FF6C;
    }
    goto skip_1;
    // 0x1519FF58: lbu         $v0, 0x4($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X4);
    skip_1:
    // 0x1519FF5C: lb          $t9, 0x2E($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FF60: bne         $v0, $t9, L_1519FF18
    if (ctx->r2 != ctx->r25) {
        // 0x1519FF64: nop
    
            goto L_1519FF18;
    }
    // 0x1519FF64: nop

    // 0x1519FF68: lbu         $v0, 0x4($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X4);
L_1519FF6C:
    // 0x1519FF6C: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x1519FF70: beq         $t6, $zero, L_1519FFF8
    if (ctx->r14 == 0) {
        // 0x1519FF74: addiu       $s2, $zero, 0x24
        ctx->r18 = ADD32(0, 0X24);
            goto L_1519FFF8;
    }
    // 0x1519FF74: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
    // 0x1519FF78: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FF7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519FF80: lbu         $a1, 0x42($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X42);
    // 0x1519FF84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1519FF88: bgez        $v0, L_1519FF98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519FF8C: nop
    
            goto L_1519FF98;
    }
    // 0x1519FF8C: nop

    // 0x1519FF90: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FF94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519FF98:
    // 0x1519FF98: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519FF9C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1519FFA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1519FFA4: mflo        $t7
    ctx->r15 = lo;
    // 0x1519FFA8: addu        $v1, $t4, $t7
    ctx->r3 = ADD32(ctx->r12, ctx->r15);
    // 0x1519FFAC: lh          $t8, 0x14($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X14);
    // 0x1519FFB0: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519FFB4: mflo        $t9
    ctx->r25 = lo;
    // 0x1519FFB8: sra         $t6, $t9, 8
    ctx->r14 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1519FFBC: sh          $t6, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r14;
    // 0x1519FFC0: lbu         $t7, 0x43($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X43);
    // 0x1519FFC4: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x1519FFC8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1519FFCC: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x1519FFD0: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x1519FFD4: bgez        $v0, L_1519FFE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519FFD8: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_1519FFE4;
    }
    // 0x1519FFD8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1519FFDC: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x1519FFE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519FFE4:
    // 0x1519FFE4: beq         $a1, $zero, L_1519FFF8
    if (ctx->r5 == 0) {
        // 0x1519FFE8: nop
    
            goto L_1519FFF8;
    }
    // 0x1519FFE8: nop

    // 0x1519FFEC: lb          $t7, 0x2E($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2E);
    // 0x1519FFF0: bne         $v0, $t7, L_1519FF98
    if (ctx->r2 != ctx->r15) {
        // 0x1519FFF4: nop
    
            goto L_1519FF98;
    }
    // 0x1519FFF4: nop

L_1519FFF8:
    // 0x1519FFF8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1519FFFC: addiu       $t8, $zero, 0x39
    ctx->r24 = ADD32(0, 0X39);
    // 0x151A0000: addiu       $t9, $sp, 0x91
    ctx->r25 = ADD32(ctx->r29, 0X91);
    // 0x151A0004: addiu       $t6, $zero, 0x3E
    ctx->r14 = ADD32(0, 0X3E);
    // 0x151A0008: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151A000C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151A0010: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151A0014: addiu       $a1, $a1, 0xE0C
    ctx->r5 = ADD32(ctx->r5, 0XE0C);
    // 0x151A0018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A001C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A0020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A0024: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151A0028: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A002C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151A0030: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x151A0034: jal         0x15142E24
    // 0x151A0038: sw          $t4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r12;
    func_15142E24(rdram, ctx);
        goto after_1;
    // 0x151A0038: sw          $t4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r12;
    after_1:
    // 0x151A003C: lui         $a2, 0x16
    ctx->r6 = S32(0X16 << 16);
    // 0x151A0040: addiu       $s0, $sp, 0x91
    ctx->r16 = ADD32(ctx->r29, 0X91);
    // 0x151A0044: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151A0048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A004C: jal         0x15142B7C
    // 0x151A0050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15142B7C(rdram, ctx);
        goto after_2;
    // 0x151A0050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x151A0054: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x151A0058: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A005C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A0060: lbu         $a1, 0x2A($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X2A);
    // 0x151A0064: lbu         $a2, 0x2B($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X2B);
    // 0x151A0068: lbu         $a3, 0x2C($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X2C);
    // 0x151A006C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151A0070: jal         0x15142C10
    // 0x151A0074: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15142C10(rdram, ctx);
        goto after_3;
    // 0x151A0074: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x151A0078: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151A007C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151A0080: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151A0084: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151A0088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A008C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A0090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A0094: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151A0098: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151A009C: jal         0x15142CF0
    // 0x151A00A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_15142CF0(rdram, ctx);
        goto after_4;
    // 0x151A00A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_4:
    // 0x151A00A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A00A8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x151A00AC: jal         0x1513F4E4
    // 0x151A00B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_5;
    // 0x151A00B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x151A00B4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151A00B8: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151A00BC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151A00C0: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
    // 0x151A00C4: or          $t9, $a1, $at
    ctx->r25 = ctx->r5 | ctx->r1;
    // 0x151A00C8: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    // 0x151A00CC: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
    // 0x151A00D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A00D4: jal         0x15142FBC
    // 0x151A00D8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_15142FBC(rdram, ctx);
        goto after_6;
    // 0x151A00D8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x151A00DC: lhu         $t7, 0x1E($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X1E);
    // 0x151A00E0: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x151A00E4: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x151A00E8: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x151A00EC: beq         $t8, $zero, L_151A015C
    if (ctx->r24 == 0) {
        // 0x151A00F0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151A015C;
    }
    // 0x151A00F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151A00F4: lb          $t0, 0x2E($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2E);
    // 0x151A00F8: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x151A00FC: bgez        $t0, L_151A010C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151A0100: nop
    
            goto L_151A010C;
    }
    // 0x151A0100: nop

    // 0x151A0104: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x151A0108: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_151A010C:
    // 0x151A010C: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A0110: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
    // 0x151A0114: addiu       $t9, $sp, 0xCC
    ctx->r25 = ADD32(ctx->r29, 0XCC);
    // 0x151A0118: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151A011C: lw          $t7, 0x14($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X14);
    // 0x151A0120: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x151A0124: lw          $at, 0x18($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X18);
    // 0x151A0128: mflo        $t8
    ctx->r24 = lo;
    // 0x151A012C: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x151A0130: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151A0134: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x151A0138: lh          $t6, 0x14($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X14);
    // 0x151A013C: lwc1        $f4, 0x38($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X38);
    // 0x151A0140: lh          $t2, 0x16($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X16);
    // 0x151A0144: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A0148: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x151A014C: mflo        $a1
    ctx->r5 = lo;
    // 0x151A0150: sra         $t7, $a1, 8
    ctx->r15 = S32(SIGNED(ctx->r5) >> 8);
    // 0x151A0154: b           L_151A01E0
    // 0x151A0158: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_151A01E0;
    // 0x151A0158: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_151A015C:
    // 0x151A015C: lb          $a0, 0x2E($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X2E);
    // 0x151A0160: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151A0164: bgezl       $a0, L_151A0178
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151A0168: addiu       $t0, $a0, -0x1
        ctx->r8 = ADD32(ctx->r4, -0X1);
            goto L_151A0178;
    }
    goto skip_2;
    // 0x151A0168: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    skip_2:
    // 0x151A016C: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x151A0170: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151A0174: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
L_151A0178:
    // 0x151A0178: bgez        $t0, L_151A0188
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151A017C: nop
    
            goto L_151A0188;
    }
    // 0x151A017C: nop

    // 0x151A0180: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x151A0184: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_151A0188:
    // 0x151A0188: multu       $a0, $s2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A018C: mflo        $t8
    ctx->r24 = lo;
    // 0x151A0190: addu        $v1, $t4, $t8
    ctx->r3 = ADD32(ctx->r12, ctx->r24);
    // 0x151A0194: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151A0198: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x151A019C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x151A01A0: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x151A01A4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151A01A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151A01AC: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x151A01B0: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x151A01B4: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151A01B8: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x151A01BC: lh          $t9, 0x10($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X10);
    // 0x151A01C0: lh          $t6, 0x14($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X14);
    // 0x151A01C4: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151A01C8: lh          $t2, 0x16($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X16);
    // 0x151A01CC: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A01D0: swc1        $f12, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f12.u32l;
    // 0x151A01D4: mflo        $a1
    ctx->r5 = lo;
    // 0x151A01D8: sra         $t7, $a1, 8
    ctx->r15 = S32(SIGNED(ctx->r5) >> 8);
    // 0x151A01DC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_151A01E0:
    // 0x151A01E0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151A01E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A01E8: lwc1        $f14, -0x7300($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7300);
    // 0x151A01EC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x151A01F0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151A01F4: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151A01F8: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151A01FC: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x151A0200: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151A0204: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151A0208: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x151A020C: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x151A0210: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x151A0214: lh          $t6, 0x14($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X14);
    // 0x151A0218: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151A021C: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151A0220: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A0224: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x151A0228: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151A022C: lh          $a3, 0x16($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X16);
    // 0x151A0230: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A0234: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151A0238: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    // 0x151A023C: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x151A0240: neg.s       $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = -ctx->f22.fl;
    // 0x151A0244: mflo        $t3
    ctx->r11 = lo;
    // 0x151A0248: sra         $t7, $t3, 8
    ctx->r15 = S32(SIGNED(ctx->r11) >> 8);
    // 0x151A024C: bc1t        L_151A026C
    if (c1cs) {
        // 0x151A0250: or          $t3, $t7, $zero
        ctx->r11 = ctx->r15 | 0;
            goto L_151A026C;
    }
    // 0x151A0250: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x151A0254: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x151A0258: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A025C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151A0260: nop

    // 0x151A0264: bc1fl       L_151A0290
    if (!c1cs) {
        // 0x151A0268: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_151A0290;
    }
    goto skip_3;
    // 0x151A0268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_3:
L_151A026C:
    // 0x151A026C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151A0270: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A0274: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A0278: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151A027C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151A0280: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151A0284: b           L_151A0298
    // 0x151A0288: div.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
        goto L_151A0298;
    // 0x151A0288: div.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A028C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_151A0290:
    // 0x151A0290: nop

    // 0x151A0294: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_151A0298:
    // 0x151A0298: lh          $t8, 0x46($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X46);
    // 0x151A029C: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x151A02A0: sh          $t8, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r24;
    // 0x151A02A4: lh          $t9, 0x4A($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X4A);
    // 0x151A02A8: lh          $t6, 0x46($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X46);
    // 0x151A02AC: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x151A02B0: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x151A02B4: lh          $t8, 0x98($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X98);
    // 0x151A02B8: lh          $t6, 0x94($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X94);
    // 0x151A02BC: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151A02C0: beql        $at, $zero, L_151A02FC
    if (ctx->r1 == 0) {
        // 0x151A02C4: lwc1        $f12, 0xA4($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
            goto L_151A02FC;
    }
    goto skip_4;
    // 0x151A02C4: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    skip_4:
    // 0x151A02C8: bgez        $t6, L_151A02DC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151A02CC: andi        $t9, $t6, 0x3FF
        ctx->r25 = ctx->r14 & 0X3FF;
            goto L_151A02DC;
    }
    // 0x151A02CC: andi        $t9, $t6, 0x3FF
    ctx->r25 = ctx->r14 & 0X3FF;
    // 0x151A02D0: beq         $t9, $zero, L_151A02DC
    if (ctx->r25 == 0) {
        // 0x151A02D4: nop
    
            goto L_151A02DC;
    }
    // 0x151A02D4: nop

    // 0x151A02D8: addiu       $t9, $t9, -0x400
    ctx->r25 = ADD32(ctx->r25, -0X400);
L_151A02DC:
    // 0x151A02DC: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    // 0x151A02E0: or          $t8, $t9, $zero
    ctx->r24 = ctx->r25 | 0;
    // 0x151A02E4: sh          $t8, 0x46($t1)
    MEM_H(0X46, ctx->r9) = ctx->r24;
    // 0x151A02E8: lh          $t6, 0x46($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X46);
    // 0x151A02EC: lh          $t9, 0x4A($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X4A);
    // 0x151A02F0: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x151A02F4: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x151A02F8: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
L_151A02FC:
    // 0x151A02FC: lh          $t8, 0x98($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X98);
    // 0x151A0300: lh          $t6, 0x94($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X94);
    // 0x151A0304: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x151A0308: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151A030C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x151A0310: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x151A0314: sh          $t7, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r15;
    // 0x151A0318: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x151A031C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151A0320: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x151A0324: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0328: bne         $v0, $at, L_151A0338
    if (ctx->r2 != ctx->r1) {
        // 0x151A032C: trunc.w.s   $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
            goto L_151A0338;
    }
    // 0x151A032C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A0330: b           L_151A0354
    // 0x151A0334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A0354;
    // 0x151A0334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A0338:
    // 0x151A0338: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151A033C: bne         $v0, $at, L_151A0350
    if (ctx->r2 != ctx->r1) {
        // 0x151A0340: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151A0350;
    }
    // 0x151A0340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151A0344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151A0348: b           L_151A0354
    // 0x151A034C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151A0354;
    // 0x151A034C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151A0350:
    // 0x151A0350: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151A0354:
    // 0x151A0354: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151A0358: mul.s       $f4, $f20, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x151A035C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x151A0360: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
    // 0x151A0364: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151A0368: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A036C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x151A0370: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A0374: mul.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151A0378: addu        $t5, $a0, $t9
    ctx->r13 = ADD32(ctx->r4, ctx->r25);
    // 0x151A037C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151A0380: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151A0384: lui         $ra, 0x100
    ctx->r31 = S32(0X100 << 16);
    // 0x151A0388: ori         $ra, $ra, 0x600C
    ctx->r31 = ctx->r31 | 0X600C;
    // 0x151A038C: sh          $t8, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r24;
    // 0x151A0390: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151A0394: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0398: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151A039C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A03A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151A03A4: nop

    // 0x151A03A8: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x151A03AC: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03B0: sh          $t2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r10;
    // 0x151A03B4: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03B8: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x151A03BC: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x151A03C0: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03C4: sb          $a2, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r6;
    // 0x151A03C8: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03CC: sb          $a2, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r6;
    // 0x151A03D0: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03D4: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A03D8: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03DC: sb          $zero, 0xF($t8)
    MEM_B(0XF, ctx->r24) = 0;
    // 0x151A03E0: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03E4: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x151A03E8: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151A03EC: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A03F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A03F4: addiu       $t7, $t9, 0x10
    ctx->r15 = ADD32(ctx->r25, 0X10);
    // 0x151A03F8: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x151A03FC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151A0400: nop

    // 0x151A0404: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x151A0408: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151A040C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0410: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A0414: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151A0418: nop

    // 0x151A041C: sh          $t8, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r24;
    // 0x151A0420: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151A0424: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0428: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A042C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151A0430: nop

    // 0x151A0434: sh          $t9, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r25;
    // 0x151A0438: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A043C: sh          $t2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r10;
    // 0x151A0440: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0444: lh          $t7, 0x96($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X96);
    // 0x151A0448: sh          $t7, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r15;
    // 0x151A044C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0450: sb          $a2, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r6;
    // 0x151A0454: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0458: sb          $a2, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r6;
    // 0x151A045C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0460: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A0464: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0468: sb          $a1, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r5;
    // 0x151A046C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0470: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151A0474: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151A0478: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A047C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x151A0480: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x151A0484: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x151A0488: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A048C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151A0490: nop

    // 0x151A0494: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151A0498: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151A049C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A04A0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151A04A4: nop

    // 0x151A04A8: sh          $t9, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r25;
    // 0x151A04AC: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151A04B0: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x151A04B4: sh          $t2, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r10;
    // 0x151A04B8: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x151A04BC: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x151A04C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A04C4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151A04C8: nop

    // 0x151A04CC: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x151A04D0: lh          $t8, 0x0($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X0);
    // 0x151A04D4: sb          $a2, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r6;
    // 0x151A04D8: sb          $a2, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r6;
    // 0x151A04DC: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A04E0: sb          $zero, 0xF($t7)
    MEM_B(0XF, ctx->r15) = 0;
    // 0x151A04E4: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x151A04E8: addiu       $t6, $t7, 0x10
    ctx->r14 = ADD32(ctx->r15, 0X10);
    // 0x151A04EC: sh          $t8, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r24;
    // 0x151A04F0: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x151A04F4: neg.s       $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = -ctx->f22.fl;
L_151A04F8:
    // 0x151A04F8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151A04FC: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151A0500: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0504: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151A0508: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151A050C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x151A0510: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A0514: mul.s       $f6, $f20, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x151A0518: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151A051C: nop

    // 0x151A0520: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151A0524: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151A0528: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x151A052C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0530: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A0534: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151A0538: nop

    // 0x151A053C: sh          $t9, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r25;
    // 0x151A0540: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151A0544: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0548: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151A054C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A0550: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151A0554: nop

    // 0x151A0558: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x151A055C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0560: sh          $a3, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r7;
    // 0x151A0564: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0568: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x151A056C: sh          $t7, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r15;
    // 0x151A0570: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0574: sb          $a2, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r6;
    // 0x151A0578: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A057C: sb          $a2, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r6;
    // 0x151A0580: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0584: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A0588: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A058C: sb          $zero, 0xF($t6)
    MEM_B(0XF, ctx->r14) = 0;
    // 0x151A0590: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0594: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x151A0598: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151A059C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A05A0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A05A4: addiu       $t7, $t8, 0x10
    ctx->r15 = ADD32(ctx->r24, 0X10);
    // 0x151A05A8: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x151A05AC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151A05B0: nop

    // 0x151A05B4: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x151A05B8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151A05BC: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A05C0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A05C4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151A05C8: nop

    // 0x151A05CC: sh          $t6, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r14;
    // 0x151A05D0: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151A05D4: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A05D8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A05DC: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151A05E0: nop

    // 0x151A05E4: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
    // 0x151A05E8: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A05EC: sh          $a3, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r7;
    // 0x151A05F0: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A05F4: lh          $t7, 0x96($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X96);
    // 0x151A05F8: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x151A05FC: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0600: sb          $a2, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r6;
    // 0x151A0604: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0608: sb          $a2, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r6;
    // 0x151A060C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0610: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A0614: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0618: sb          $t3, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r11;
    // 0x151A061C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0620: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x151A0624: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151A0628: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A062C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x151A0630: addiu       $t7, $t9, 0x10
    ctx->r15 = ADD32(ctx->r25, 0X10);
    // 0x151A0634: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x151A0638: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A063C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151A0640: nop

    // 0x151A0644: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x151A0648: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151A064C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0650: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A0654: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151A0658: nop

    // 0x151A065C: sh          $t8, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r24;
    // 0x151A0660: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151A0664: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0668: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x151A066C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A0670: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151A0674: nop

    // 0x151A0678: sh          $t9, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r25;
    // 0x151A067C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0680: sh          $a3, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r7;
    // 0x151A0684: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0688: lh          $t7, 0x0($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X0);
    // 0x151A068C: sh          $t7, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r15;
    // 0x151A0690: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A0694: sb          $a2, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r6;
    // 0x151A0698: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A069C: sb          $a2, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r6;
    // 0x151A06A0: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A06A4: sb          $a2, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r6;
    // 0x151A06A8: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A06AC: sb          $zero, 0xF($t9)
    MEM_B(0XF, ctx->r25) = 0;
    // 0x151A06B0: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151A06B4: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151A06B8: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x151A06BC: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x151A06C0: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x151A06C4: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x151A06C8: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x151A06CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151A06D0: lui         $t6, 0x500
    ctx->r14 = S32(0X500 << 16);
    // 0x151A06D4: addiu       $t8, $t9, -0x60
    ctx->r24 = ADD32(ctx->r25, -0X60);
    // 0x151A06D8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151A06DC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151A06E0: ori         $t6, $t6, 0x608
    ctx->r14 = ctx->r14 | 0X608;
    // 0x151A06E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151A06E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151A06EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151A06F0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151A06F4: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x151A06F8: ori         $t7, $t7, 0x802
    ctx->r15 = ctx->r15 | 0X802;
    // 0x151A06FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151A0700: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151A0704: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151A0708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A070C: lui         $t9, 0x502
    ctx->r25 = S32(0X502 << 16);
    // 0x151A0710: ori         $t9, $t9, 0x80A
    ctx->r25 = ctx->r25 | 0X80A;
    // 0x151A0714: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x151A0718: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x151A071C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151A0720: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151A0724: lui         $t8, 0x502
    ctx->r24 = S32(0X502 << 16);
    // 0x151A0728: ori         $t8, $t8, 0xA04
    ctx->r24 = ctx->r24 | 0XA04;
    // 0x151A072C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x151A0730: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151A0734: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151A0738: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x151A073C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x151A0740: bgez        $t0, L_151A0750
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151A0744: addiu       $t7, $sp, 0xD8
        ctx->r15 = ADD32(ctx->r29, 0XD8);
            goto L_151A0750;
    }
    // 0x151A0744: addiu       $t7, $sp, 0xD8
    ctx->r15 = ADD32(ctx->r29, 0XD8);
    // 0x151A0748: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x151A074C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_151A0750:
    // 0x151A0750: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    // 0x151A0754: beq         $a0, $v1, L_151A0820
    if (ctx->r4 == ctx->r3) {
        // 0x151A0758: nop
    
            goto L_151A0820;
    }
    // 0x151A0758: nop

    // 0x151A075C: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A0760: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151A0764: addiu       $t6, $sp, 0xCC
    ctx->r14 = ADD32(ctx->r29, 0XCC);
    // 0x151A0768: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151A076C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x151A0770: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151A0774: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151A0778: mflo        $t9
    ctx->r25 = lo;
    // 0x151A077C: addu        $v0, $t4, $t9
    ctx->r2 = ADD32(ctx->r12, ctx->r25);
    // 0x151A0780: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151A0784: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151A0788: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x151A078C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151A0790: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151A0794: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151A0798: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x151A079C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151A07A0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x151A07A4: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x151A07A8: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x151A07AC: lh          $t7, 0x14($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X14);
    // 0x151A07B0: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151A07B4: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151A07B8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A07BC: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A07C0: lh          $a3, 0x16($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X16);
    // 0x151A07C4: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A07C8: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x151A07CC: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    // 0x151A07D0: mflo        $t3
    ctx->r11 = lo;
    // 0x151A07D4: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x151A07D8: bc1f        L_151A07F8
    if (!c1cs) {
        // 0x151A07DC: or          $t3, $t9, $zero
        ctx->r11 = ctx->r25 | 0;
            goto L_151A07F8;
    }
    // 0x151A07DC: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x151A07E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A07E4: nop

    // 0x151A07E8: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x151A07EC: nop

    // 0x151A07F0: bc1tl       L_151A0818
    if (c1cs) {
        // 0x151A07F4: mov.s       $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
            goto L_151A0818;
    }
    goto skip_5;
    // 0x151A07F4: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    skip_5:
L_151A07F8:
    // 0x151A07F8: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151A07FC: nop

    // 0x151A0800: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151A0804: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151A0808: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151A080C: b           L_151A0818
    // 0x151A0810: div.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
        goto L_151A0818;
    // 0x151A0810: div.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A0814: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_151A0818:
    // 0x151A0818: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A081C: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
L_151A0820:
    // 0x151A0820: bnel        $a0, $v1, L_151A04F8
    if (ctx->r4 != ctx->r3) {
        // 0x151A0824: neg.s       $f8, $f22
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = -ctx->f22.fl;
            goto L_151A04F8;
    }
    goto skip_6;
    // 0x151A0824: neg.s       $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = -ctx->f22.fl;
    skip_6:
L_151A0828:
    // 0x151A0828: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151A082C:
    // 0x151A082C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151A0830: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x151A0834: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x151A0838: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151A083C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x151A0840: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x151A0844: jr          $ra
    // 0x151A0848: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x151A0848: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_15072918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507291C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15072920: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072924: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072928: jal         0x15060F28
    // 0x1507292C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x1507292C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15072930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15072934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072938: jr          $ra
    // 0x1507293C: nop

    return;
    return;
    // 0x1507293C: nop

;}
RECOMP_FUNC void __n_CSPHandleNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10014048: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1001404C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10014050: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10014054: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10014058: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x1001405C: beq         $t7, $zero, L_10014074
    if (ctx->r15 == 0) {
        // 0x10014060: nop
    
            goto L_10014074;
    }
    // 0x10014060: nop

    // 0x10014064: lw          $t8, 0x2C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X2C);
    // 0x10014068: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1001406C: bne         $t8, $at, L_1001407C
    if (ctx->r24 != ctx->r1) {
        // 0x10014070: nop
    
            goto L_1001407C;
    }
    // 0x10014070: nop

L_10014074:
    // 0x10014074: b           L_1001414C
    // 0x10014078: nop

        goto L_1001414C;
    // 0x10014078: nop

L_1001407C:
    // 0x1001407C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10014080: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10014084: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x10014088: jal         0x10018100
    // 0x1001408C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    n_alCSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x1001408C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_0:
    // 0x10014090: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x10014094: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x10014098: sltiu       $at, $t1, 0x15
    ctx->r1 = ctx->r9 < 0X15 ? 1 : 0;
    // 0x1001409C: beq         $at, $zero, L_1001413C
    if (ctx->r1 == 0) {
        // 0x100140A0: nop
    
            goto L_1001413C;
    }
    // 0x100140A0: nop

    // 0x100140A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x100140A8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100140AC: addu        $at, $at, $t1
    gpr jr_addend_100140B4 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x100140B0: lw          $t1, -0x3B34($at)
    ctx->r9 = ADD32(ctx->r1, -0X3B34);
    // 0x100140B4: jr          $t1
    // 0x100140B8: nop

    switch (jr_addend_100140B4 >> 2) {
        case 0: goto L_100140BC; break;
        case 1: goto L_1001413C; break;
        case 2: goto L_100140D8; break;
        case 3: goto L_100140F4; break;
        case 4: goto L_1001413C; break;
        case 5: goto L_1001413C; break;
        case 6: goto L_1001413C; break;
        case 7: goto L_1001413C; break;
        case 8: goto L_1001413C; break;
        case 9: goto L_1001413C; break;
        case 10: goto L_1001413C; break;
        case 11: goto L_1001413C; break;
        case 12: goto L_1001413C; break;
        case 13: goto L_1001413C; break;
        case 14: goto L_1001413C; break;
        case 15: goto L_1001413C; break;
        case 16: goto L_1001413C; break;
        case 17: goto L_1001413C; break;
        case 18: goto L_1001412C; break;
        case 19: goto L_1001412C; break;
        case 20: goto L_1001412C; break;
        default: switch_error(__func__, 0x100140B4, 0x8002C4CC);
    }
    // 0x100140B8: nop

L_100140BC:
    // 0x100140BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x100140C0: jal         0x1001415C
    // 0x100140C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    __n_CSPHandleMIDIMsg(rdram, ctx);
        goto after_1;
    // 0x100140C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x100140C8: jal         0x100154AC
    // 0x100140CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __n_CSPPostNextSeqEvent(rdram, ctx);
        goto after_2;
    // 0x100140CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x100140D0: b           L_10014144
    // 0x100140D4: nop

        goto L_10014144;
    // 0x100140D4: nop

L_100140D8:
    // 0x100140D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x100140DC: jal         0x10015044
    // 0x100140E0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    static_3_10015044(rdram, ctx);
        goto after_3;
    // 0x100140E0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x100140E4: jal         0x100154AC
    // 0x100140E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __n_CSPPostNextSeqEvent(rdram, ctx);
        goto after_4;
    // 0x100140E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x100140EC: b           L_10014144
    // 0x100140F0: nop

        goto L_10014144;
    // 0x100140F0: nop

L_100140F4:
    // 0x100140F4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x100140F8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x100140FC: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x10014100: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x10014104: sh          $t4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r12;
    // 0x10014108: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1001410C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x10014110: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x10014114: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10014118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1001411C: jal         0x1001C224
    // 0x10014120: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x10014120: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_5:
    // 0x10014124: b           L_10014144
    // 0x10014128: nop

        goto L_10014144;
    // 0x10014128: nop

L_1001412C:
    // 0x1001412C: jal         0x100154AC
    // 0x10014130: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __n_CSPPostNextSeqEvent(rdram, ctx);
        goto after_6;
    // 0x10014130: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x10014134: b           L_10014144
    // 0x10014138: nop

        goto L_10014144;
    // 0x10014138: nop

L_1001413C:
    // 0x1001413C: b           L_10014144
    // 0x10014140: nop

        goto L_10014144;
    // 0x10014140: nop

L_10014144:
    // 0x10014144: b           L_1001414C
    // 0x10014148: nop

        goto L_1001414C;
    // 0x10014148: nop

L_1001414C:
    // 0x1001414C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10014150: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10014154: jr          $ra
    // 0x10014158: nop

    return;
    return;
    // 0x10014158: nop

;}
RECOMP_FUNC void func_1506FBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FBE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FBEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FBF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FBF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FBF8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FBFC: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x1506FC00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506FC04: jal         0x151A0A10
    // 0x1506FC08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151A0A10(rdram, ctx);
        goto after_0;
    // 0x1506FC08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1506FC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FC14: jr          $ra
    // 0x1506FC18: nop

    return;
    return;
    // 0x1506FC18: nop

;}
RECOMP_FUNC void func_1516D738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D738: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1516D73C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1516D740: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1516D744: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1516D748: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x1516D74C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516D750: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1516D754: sb          $zero, 0x2DAB($at)
    MEM_B(0X2DAB, ctx->r1) = 0;
    // 0x1516D758: lbu         $t6, 0x1A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1A);
    // 0x1516D75C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1516D760: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x1516D764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1516D768: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1516D76C: lw          $a1, -0x35B4($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X35B4);
    // 0x1516D770: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x1516D774: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x1516D778: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1516D77C: lbu         $t0, 0x1B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1B);
    // 0x1516D780: addiu       $t2, $sp, 0x84
    ctx->r10 = ADD32(ctx->r29, 0X84);
    // 0x1516D784: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x1516D788: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x1516D78C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1516D790: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1516D794: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1516D798: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1516D79C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1516D7A0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1516D7A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1516D7A8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1516D7AC: jal         0x15142E24
    // 0x1516D7B0: sll         $a2, $t0, 8
    ctx->r6 = S32(ctx->r8 << 8);
    func_15142E24(rdram, ctx);
        goto after_0;
    // 0x1516D7B0: sll         $a2, $t0, 8
    ctx->r6 = S32(ctx->r8 << 8);
    after_0:
    // 0x1516D7B4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x1516D7B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1516D7BC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1516D7C0: lbu         $t6, 0xA($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XA);
    // 0x1516D7C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1516D7C8: addiu       $a2, $a2, -0x2E44
    ctx->r6 = ADD32(ctx->r6, -0X2E44);
    // 0x1516D7CC: bne         $t6, $at, L_1516D7DC
    if (ctx->r14 != ctx->r1) {
        // 0x1516D7D0: addiu       $a3, $sp, 0x78
        ctx->r7 = ADD32(ctx->r29, 0X78);
            goto L_1516D7DC;
    }
    // 0x1516D7D0: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x1516D7D4: b           L_1516D7E0
    // 0x1516D7D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_1516D7E0;
    // 0x1516D7D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_1516D7DC:
    // 0x1516D7DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_1516D7E0:
    // 0x1516D7E0: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
    // 0x1516D7E4: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x1516D7E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1516D7EC: beq         $a1, $t7, L_1516D86C
    if (ctx->r5 == ctx->r15) {
        // 0x1516D7F0: nop
    
            goto L_1516D86C;
    }
    // 0x1516D7F0: nop

    // 0x1516D7F4: bne         $t8, $zero, L_1516D810
    if (ctx->r24 != 0) {
        // 0x1516D7F8: lui         $t9, 0xE700
        ctx->r25 = S32(0XE700 << 16);
            goto L_1516D810;
    }
    // 0x1516D7F8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x1516D7FC: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x1516D800: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1516D804: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1516D808: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1516D80C: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
L_1516D810:
    // 0x1516D810: bne         $a1, $at, L_1516D844
    if (ctx->r5 != ctx->r1) {
        // 0x1516D814: sh          $a1, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r5;
            goto L_1516D844;
    }
    // 0x1516D814: sh          $a1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r5;
    // 0x1516D818: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x1516D81C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1516D820: lui         $t2, 0xFC30
    ctx->r10 = S32(0XFC30 << 16);
    // 0x1516D824: lui         $t3, 0x5566
    ctx->r11 = S32(0X5566 << 16);
    // 0x1516D828: ori         $t3, $t3, 0xFF7F
    ctx->r11 = ctx->r11 | 0XFF7F;
    // 0x1516D82C: ori         $t2, $t2, 0xB261
    ctx->r10 = ctx->r10 | 0XB261;
    // 0x1516D830: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1516D834: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x1516D838: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1516D83C: b           L_1516D86C
    // 0x1516D840: nop

        goto L_1516D86C;
    // 0x1516D840: nop

L_1516D844:
    // 0x1516D844: lui         $t4, 0x10
    ctx->r12 = S32(0X10 << 16);
    // 0x1516D848: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x1516D84C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1516D850: lui         $t5, 0xFC30
    ctx->r13 = S32(0XFC30 << 16);
    // 0x1516D854: lui         $t6, 0x5FFE
    ctx->r14 = S32(0X5FFE << 16);
    // 0x1516D858: ori         $t6, $t6, 0xFE38
    ctx->r14 = ctx->r14 | 0XFE38;
    // 0x1516D85C: ori         $t5, $t5, 0xB5FF
    ctx->r13 = ctx->r13 | 0XB5FF;
    // 0x1516D860: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x1516D864: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1516D868: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_1516D86C:
    // 0x1516D86C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1516D870: lw          $t8, 0x2C9C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2C9C);
    // 0x1516D874: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1516D878: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
    // 0x1516D87C: ori         $a2, $a2, 0x49DC
    ctx->r6 = ctx->r6 | 0X49DC;
    // 0x1516D880: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1516D884: jal         0x15142FBC
    // 0x1516D888: ori         $a1, $t9, 0x2C00
    ctx->r5 = ctx->r25 | 0X2C00;
    func_15142FBC(rdram, ctx);
        goto after_1;
    // 0x1516D888: ori         $a1, $t9, 0x2C00
    ctx->r5 = ctx->r25 | 0X2C00;
    after_1:
    // 0x1516D88C: lh          $t2, 0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE);
    // 0x1516D890: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516D894: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1516D898: sh          $t2, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r10;
    // 0x1516D89C: lh          $t3, 0x10($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X10);
    // 0x1516D8A0: addiu       $v1, $v1, -0x2E38
    ctx->r3 = ADD32(ctx->r3, -0X2E38);
    // 0x1516D8A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1516D8A8: sh          $t3, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r11;
    // 0x1516D8AC: lh          $t4, 0x12($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X12);
    // 0x1516D8B0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1516D8B4: sh          $t4, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r12;
    // 0x1516D8B8: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x1516D8BC: sh          $t5, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r13;
    // 0x1516D8C0: lh          $t6, 0x16($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X16);
    // 0x1516D8C4: sh          $t6, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r14;
    // 0x1516D8C8: lbu         $t7, 0x1F($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1F);
    // 0x1516D8CC: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
    // 0x1516D8D0: sb          $t7, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r15;
    // 0x1516D8D4: lbu         $t8, 0x1C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1C);
    // 0x1516D8D8: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x1516D8DC: sb          $t8, 0x2DA8($at)
    MEM_B(0X2DA8, ctx->r1) = ctx->r24;
    // 0x1516D8E0: lbu         $t9, 0x1D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1D);
    // 0x1516D8E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516D8E8: sb          $t9, 0x2DA9($at)
    MEM_B(0X2DA9, ctx->r1) = ctx->r25;
    // 0x1516D8EC: lbu         $t1, 0x1E($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E);
    // 0x1516D8F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516D8F4: sb          $t1, 0x2DAA($at)
    MEM_B(0X2DAA, ctx->r1) = ctx->r9;
    // 0x1516D8F8: lbu         $a1, 0x20($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X20);
    // 0x1516D8FC: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x1516D900: lbu         $a2, 0x21($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X21);
    // 0x1516D904: lbu         $a3, 0x22($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X22);
    // 0x1516D908: bne         $a1, $t2, L_1516D92C
    if (ctx->r5 != ctx->r10) {
        // 0x1516D90C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_1516D92C;
    }
    // 0x1516D90C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D910: lh          $t3, -0x2E36($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X2E36);
    // 0x1516D914: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1516D918: bnel        $a2, $t3, L_1516D930
    if (ctx->r6 != ctx->r11) {
        // 0x1516D91C: lw          $t5, 0x78($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X78);
            goto L_1516D930;
    }
    goto skip_0;
    // 0x1516D91C: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    skip_0:
    // 0x1516D920: lh          $t4, -0x2E34($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X2E34);
    // 0x1516D924: beq         $a3, $t4, L_1516D980
    if (ctx->r7 == ctx->r12) {
        // 0x1516D928: nop
    
            goto L_1516D980;
    }
    // 0x1516D928: nop

L_1516D92C:
    // 0x1516D92C: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
L_1516D930:
    // 0x1516D930: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
    // 0x1516D934: sh          $a2, -0x2E36($at)
    MEM_H(-0X2E36, ctx->r1) = ctx->r6;
    // 0x1516D938: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1516D93C: bne         $t5, $zero, L_1516D954
    if (ctx->r13 != 0) {
        // 0x1516D940: sh          $a3, -0x2E34($at)
        MEM_H(-0X2E34, ctx->r1) = ctx->r7;
            goto L_1516D954;
    }
    // 0x1516D940: sh          $a3, -0x2E34($at)
    MEM_H(-0X2E34, ctx->r1) = ctx->r7;
    // 0x1516D944: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1516D948: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1516D94C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x1516D950: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_1516D954:
    // 0x1516D954: andi        $t1, $a2, 0xFF
    ctx->r9 = ctx->r6 & 0XFF;
    // 0x1516D958: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x1516D95C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1516D960: sll         $t9, $a1, 24
    ctx->r25 = S32(ctx->r5 << 24);
    // 0x1516D964: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x1516D968: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x1516D96C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x1516D970: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1516D974: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1516D978: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1516D97C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_1516D980:
    // 0x1516D980: jal         0x15095760
    // 0x1516D984: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_15095760(rdram, ctx);
        goto after_2;
    // 0x1516D984: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_2:
    // 0x1516D988: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1516D98C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1516D990: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x1516D994: jr          $ra
    // 0x1516D998: nop

    return;
    return;
    // 0x1516D998: nop

;}
RECOMP_FUNC void func_1506D570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D570: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506D574: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506D578: sb          $zero, 0x6E($t6)
    MEM_B(0X6E, ctx->r14) = 0;
    // 0x1506D57C: jr          $ra
    // 0x1506D580: nop

    return;
    return;
    // 0x1506D580: nop

;}
RECOMP_FUNC void func_1509E8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509E8A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509E8A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509E8A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1509E8AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1509E8B0: beq         $a1, $at, L_1509E8C8
    if (ctx->r5 == ctx->r1) {
        // 0x1509E8B4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_1509E8C8;
    }
    // 0x1509E8B4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1509E8B8: beq         $a1, $at, L_1509E8D8
    if (ctx->r5 == ctx->r1) {
        // 0x1509E8BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509E8D8;
    }
    // 0x1509E8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509E8C0: b           L_1509E8E8
    // 0x1509E8C4: nop

        goto L_1509E8E8;
    // 0x1509E8C4: nop

L_1509E8C8:
    // 0x1509E8C8: jal         0x1000E0F8
    // 0x1509E8CC: nop

    func_1000E0F8(rdram, ctx);
        goto after_0;
    // 0x1509E8CC: nop

    after_0:
    // 0x1509E8D0: b           L_1509E8EC
    // 0x1509E8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E8EC;
    // 0x1509E8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E8D8:
    // 0x1509E8D8: jal         0x1000E8F0
    // 0x1509E8DC: nop

    func_1000E8F0(rdram, ctx);
        goto after_1;
    // 0x1509E8DC: nop

    after_1:
    // 0x1509E8E0: b           L_1509E8EC
    // 0x1509E8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E8EC;
    // 0x1509E8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E8E8:
    // 0x1509E8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E8EC:
    // 0x1509E8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509E8F0: jr          $ra
    // 0x1509E8F4: nop

    return;
    return;
    // 0x1509E8F4: nop

;}
RECOMP_FUNC void func_1509DD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DD30: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509DD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509DD38: jr          $ra
    // 0x1509DD3C: nop

    return;
    return;
    // 0x1509DD3C: nop

;}
RECOMP_FUNC void func_15107B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107B78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15107B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15107B80: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15107B84: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15107B88: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15107B8C: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x15107B90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x15107B94: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x15107B98: beq         $t6, $zero, L_15107C0C
    if (ctx->r14 == 0) {
        // 0x15107B9C: addiu       $a3, $sp, 0x18
        ctx->r7 = ADD32(ctx->r29, 0X18);
            goto L_15107C0C;
    }
    // 0x15107B9C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x15107BA0: jal         0x1515C244
    // 0x15107BA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_1515C244(rdram, ctx);
        goto after_0;
    // 0x15107BA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x15107BA8: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x15107BAC: lh          $a1, 0x42($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X42);
    // 0x15107BB0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x15107BB4: jal         0x15143794
    // 0x15107BB8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_15143794(rdram, ctx);
        goto after_1;
    // 0x15107BB8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x15107BBC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15107BC0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15107BC4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15107BC8: lwc1        $f14, 0xF0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0XF0);
    // 0x15107BCC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15107BD0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15107BD4: mul.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15107BD8: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x15107BDC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15107BE0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15107BE4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x15107BE8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x15107BEC: add.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15107BF0: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x15107BF4: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x15107BF8: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x15107BFC: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x15107C00: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15107C04: jal         0x151C329C
    // 0x15107C08: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_151C329C(rdram, ctx);
        goto after_2;
    // 0x15107C08: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_2:
L_15107C0C:
    // 0x15107C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15107C10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15107C14: jr          $ra
    // 0x15107C18: nop

    return;
    return;
    // 0x15107C18: nop

;}
RECOMP_FUNC void func_1507879C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507879C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150787A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150787A4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150787A8: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x150787AC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150787B0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150787B4: lbu         $t7, 0x222($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X222);
    // 0x150787B8: lbu         $v1, 0x1892($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1892);
    // 0x150787BC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150787C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150787C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150787C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150787CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150787D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150787D4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150787D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150787DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150787E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150787E4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x150787E8: lw          $v0, -0x3A60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A60);
    // 0x150787EC: bne         $v1, $zero, L_15078820
    if (ctx->r3 != 0) {
        // 0x150787F0: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_15078820;
    }
    // 0x150787F0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150787F4: lbu         $t9, 0x1891($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1891);
    // 0x150787F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150787FC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15078800: bgez        $t9, L_15078814
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15078804: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15078814;
    }
    // 0x15078804: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15078808: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1507880C: nop

    // 0x15078810: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15078814:
    // 0x15078814: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x15078818: nop

    // 0x1507881C: bc1t        L_15078858
    if (c1cs) {
        // 0x15078820: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15078858;
    }
L_15078820:
    // 0x15078820: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15078824: bne         $v1, $at, L_15078864
    if (ctx->r3 != ctx->r1) {
        // 0x15078828: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_15078864;
    }
    // 0x15078828: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507882C: lbu         $t0, 0x1891($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1891);
    // 0x15078830: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15078834: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15078838: bgez        $t0, L_1507884C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1507883C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1507884C;
    }
    // 0x1507883C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15078840: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15078844: nop

    // 0x15078848: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_1507884C:
    // 0x1507884C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15078850: nop

    // 0x15078854: bc1f        L_15078864
    if (!c1cs) {
        // 0x15078858: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_15078864;
    }
L_15078858:
    // 0x15078858: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507885C: jal         0x15075400
    // 0x15078860: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x15078860: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
L_15078864:
    // 0x15078864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15078868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507886C: jr          $ra
    // 0x15078870: nop

    return;
    return;
    // 0x15078870: nop

;}
RECOMP_FUNC void func_150FFD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FFD84: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x150FFD88: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x150FFD8C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150FFD90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FFD94: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150FFD98: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150FFD9C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x150FFDA0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x150FFDA4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x150FFDA8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x150FFDAC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x150FFDB0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x150FFDB4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x150FFDB8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150FFDBC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150FFDC0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150FFDC4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150FFDC8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150FFDCC: sw          $a2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r6;
    // 0x150FFDD0: sw          $a3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r7;
    // 0x150FFDD4: jal         0x150ADA20
    // 0x150FFDD8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150FFDD8: nop

    after_0:
    // 0x150FFDDC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150FFDE0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FFDE4: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x150FFDE8: addiu       $t6, $zero, 0x2203
    ctx->r14 = ADD32(0, 0X2203);
    // 0x150FFDEC: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x150FFDF0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FFDF4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150FFDF8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150FFDFC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FFE00: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FFE04: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FFE08: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FFE0C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FFE10: sh          $t6, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r14;
    // 0x150FFE14: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x150FFE18: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150FFE1C: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x150FFE20: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150FFE24: sb          $t8, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r24;
    // 0x150FFE28: sb          $t9, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r25;
    // 0x150FFE2C: sb          $t0, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r8;
    // 0x150FFE30: sb          $t1, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r9;
    // 0x150FFE34: sb          $t2, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r10;
    // 0x150FFE38: sb          $t3, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r11;
    // 0x150FFE3C: sb          $t4, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r12;
    // 0x150FFE40: sb          $t5, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r13;
    // 0x150FFE44: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x150FFE48: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x150FFE4C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150FFE50: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150FFE54: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x150FFE58: addiu       $t1, $t1, 0x5480
    ctx->r9 = ADD32(ctx->r9, 0X5480);
    // 0x150FFE5C: addiu       $t0, $sp, 0xE4
    ctx->r8 = ADD32(ctx->r29, 0XE4);
    // 0x150FFE60: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150FFE64: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x150FFE68: mfhi        $s2
    ctx->r18 = hi;
    // 0x150FFE6C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x150FFE70: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150FFE74: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150FFE78: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150FFE7C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x150FFE80: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150FFE84: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150FFE88: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x150FFE8C: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x150FFE90: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150FFE94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FFE98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FFE9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FFEA0: ori         $t6, $t6, 0xC207
    ctx->r14 = ctx->r14 | 0XC207;
    // 0x150FFEA4: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150FFEA8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150FFEAC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150FFEB0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150FFEB4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FFEB8: addiu       $s2, $s2, 0xA
    ctx->r18 = ADD32(ctx->r18, 0XA);
    // 0x150FFEBC: sh          $t5, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r13;
    // 0x150FFEC0: sh          $t8, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r24;
    // 0x150FFEC4: sh          $t7, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r15;
    // 0x150FFEC8: sw          $t6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r14;
    // 0x150FFECC: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x150FFED0: sb          $t9, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r25;
    // 0x150FFED4: sb          $t3, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = ctx->r11;
    // 0x150FFED8: sb          $t2, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = ctx->r10;
    // 0x150FFEDC: sb          $t0, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r8;
    // 0x150FFEE0: sb          $zero, 0x10D($sp)
    MEM_B(0X10D, ctx->r29) = 0;
    // 0x150FFEE4: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x150FFEE8: sb          $t1, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r9;
    // 0x150FFEEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150FFEF0: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x150FFEF4: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x150FFEF8: jal         0x15145974
    // 0x150FFEFC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    func_15145974(rdram, ctx);
        goto after_1;
    // 0x150FFEFC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150FFF00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150FFF04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FFF08: lwc1        $f10, 0x218C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X218C);
    // 0x150FFF0C: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150FFF10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FFF14: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x150FFF18: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150FFF1C: lwc1        $f6, 0x2190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2190);
    // 0x150FFF20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FFF24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FFF28: lwc1        $f28, 0x2194($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X2194);
    // 0x150FFF2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150FFF30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FFF34: lwc1        $f26, 0x2198($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X2198);
    // 0x150FFF38: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150FFF3C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150FFF40: lui         $at, 0x431B
    ctx->r1 = S32(0X431B << 16);
    // 0x150FFF44: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150FFF48: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150FFF4C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150FFF50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150FFF54: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x150FFF58: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x150FFF5C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150FFF60: mfc1        $s6, $f10
    ctx->r22 = (int32_t)ctx->f10.u32l;
    // 0x150FFF64: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x150FFF68: sra         $t8, $t5, 16
    ctx->r24 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150FFF6C: sll         $t1, $s6, 16
    ctx->r9 = S32(ctx->r22 << 16);
    // 0x150FFF70: sra         $t4, $t1, 16
    ctx->r12 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150FFF74: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x150FFF78: sra         $t7, $t4, 8
    ctx->r15 = S32(SIGNED(ctx->r12) >> 8);
    // 0x150FFF7C: addiu       $v0, $t9, -0x8A
    ctx->r2 = ADD32(ctx->r25, -0X8A);
    // 0x150FFF80: addiu       $s6, $t7, -0x8A
    ctx->r22 = ADD32(ctx->r15, -0X8A);
    // 0x150FFF84: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x150FFF88: sll         $t6, $s6, 16
    ctx->r14 = S32(ctx->r22 << 16);
    // 0x150FFF8C: sra         $s5, $t3, 16
    ctx->r21 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150FFF90: sra         $s6, $t6, 16
    ctx->r22 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150FFF94: addiu       $s7, $s7, 0x2160
    ctx->r23 = ADD32(ctx->r23, 0X2160);
    // 0x150FFF98: addiu       $fp, $zero, 0xD
    ctx->r30 = ADD32(0, 0XD);
    // 0x150FFF9C: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
    // 0x150FFFA0: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x150FFFA4: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
L_150FFFA8:
    // 0x150FFFA8: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    // 0x150FFFAC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150FFFB0: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x150FFFB4: lw          $t0, 0xC($s7)
    ctx->r8 = MEM_W(ctx->r23, 0XC);
    // 0x150FFFB8: lw          $at, 0x8($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X8);
    // 0x150FFFBC: sw          $t0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r8;
    // 0x150FFFC0: jal         0x150ADA20
    // 0x150FFFC4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150FFFC4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_2:
    // 0x150FFFC8: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x150FFFCC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x150FFFD0: addu        $t5, $s3, $t4
    ctx->r13 = ADD32(ctx->r19, ctx->r12);
    // 0x150FFFD4: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x150FFFD8: jal         0x150ADA20
    // 0x150FFFDC: sb          $t8, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FFFDC: sb          $t8, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r24;
    after_3:
    // 0x150FFFE0: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x150FFFE4: mfhi        $t7
    ctx->r15 = hi;
    // 0x150FFFE8: addiu       $t6, $t7, 0xA
    ctx->r14 = ADD32(ctx->r15, 0XA);
    // 0x150FFFEC: bne         $fp, $zero, L_150FFFF8
    if (ctx->r30 != 0) {
        // 0x150FFFF0: nop
    
            goto L_150FFFF8;
    }
    // 0x150FFFF0: nop

    // 0x150FFFF4: break       7
    do_break(353370100);
L_150FFFF8:
    // 0x150FFFF8: sh          $t6, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r14;
    // 0x150FFFFC: jal         0x150ADA20
    // 0x15100000: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15100000: nop

    after_4:
    // 0x15100004: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15100008: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1510000C: mfhi        $t9
    ctx->r25 = hi;
    // 0x15100010: addiu       $t2, $t9, 0x9B
    ctx->r10 = ADD32(ctx->r25, 0X9B);
    // 0x15100014: jal         0x150ADA68
    // 0x15100018: sb          $t2, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15100018: sb          $t2, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r10;
    after_5:
    // 0x1510001C: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15100020: add.s       $f2, $f16, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x15100024: swc1        $f2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f2.u32l;
    // 0x15100028: jal         0x150ADA20
    // 0x1510002C: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1510002C: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x15100030: jal         0x150ADA20
    // 0x15100034: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15100034: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x15100038: jal         0x150ADA68
    // 0x1510003C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1510003C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x15100040: divu        $zero, $s1, $s4
    lo = S32(U32(ctx->r17) / U32(ctx->r20)); hi = S32(U32(ctx->r17) % U32(ctx->r20));
    // 0x15100044: mfhi        $t3
    ctx->r11 = hi;
    // 0x15100048: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1510004C: addu        $a0, $t3, $s5
    ctx->r4 = ADD32(ctx->r11, ctx->r21);
    // 0x15100050: divu        $zero, $s0, $s4
    lo = S32(U32(ctx->r16) / U32(ctx->r20)); hi = S32(U32(ctx->r16) % U32(ctx->r20));
    // 0x15100054: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x15100058: mfhi        $t4
    ctx->r12 = hi;
    // 0x1510005C: addu        $a1, $t4, $s6
    ctx->r5 = ADD32(ctx->r12, ctx->r22);
    // 0x15100060: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x15100064: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15100068: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x1510006C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15100070: bne         $s4, $zero, L_1510007C
    if (ctx->r20 != 0) {
        // 0x15100074: nop
    
            goto L_1510007C;
    }
    // 0x15100074: nop

    // 0x15100078: break       7
    do_break(353370232);
L_1510007C:
    // 0x1510007C: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15100080: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x15100084: bne         $s4, $zero, L_15100090
    if (ctx->r20 != 0) {
        // 0x15100088: nop
    
            goto L_15100090;
    }
    // 0x15100088: nop

    // 0x1510008C: break       7
    do_break(353370252);
L_15100090:
    // 0x15100090: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x15100094: jal         0x15143794
    // 0x15100098: nop

    func_15143794(rdram, ctx);
        goto after_9;
    // 0x15100098: nop

    after_9:
    // 0x1510009C: jal         0x150ADA68
    // 0x151000A0: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151000A0: nop

    after_10:
    // 0x151000A4: mul.s       $f6, $f0, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x151000A8: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x151000AC: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x151000B0: and         $t6, $t7, $at
    ctx->r14 = ctx->r15 & ctx->r1;
    // 0x151000B4: sw          $t6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r14;
    // 0x151000B8: add.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x151000BC: jal         0x150ADA20
    // 0x151000C0: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151000C0: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x151000C4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151000C8: beq         $t9, $zero, L_151000D8
    if (ctx->r25 == 0) {
        // 0x151000CC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151000D8;
    }
    // 0x151000CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151000D0: b           L_151000D8
    // 0x151000D4: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_151000D8;
    // 0x151000D4: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_151000D8:
    // 0x151000D8: jal         0x150ADA20
    // 0x151000DC: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151000DC: nop

    after_12:
    // 0x151000E0: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151000E4: beq         $t2, $zero, L_151000F4
    if (ctx->r10 == 0) {
        // 0x151000E8: lw          $t3, 0x100($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X100);
            goto L_151000F4;
    }
    // 0x151000E8: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x151000EC: b           L_151000F8
    // 0x151000F0: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_151000F8;
    // 0x151000F0: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_151000F4:
    // 0x151000F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151000F8:
    // 0x151000F8: lbu         $t4, 0x123($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X123);
    // 0x151000FC: lw          $t5, 0x124($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X124);
    // 0x15100100: or          $t0, $s0, $s1
    ctx->r8 = ctx->r16 | ctx->r17;
    // 0x15100104: or          $t1, $t3, $t0
    ctx->r9 = ctx->r11 | ctx->r8;
    // 0x15100108: sw          $t1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r9;
    // 0x1510010C: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x15100110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15100114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15100118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510011C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15100120: jal         0x15130280
    // 0x15100124: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15130280(rdram, ctx);
        goto after_13;
    // 0x15100124: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_13:
    // 0x15100128: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x1510012C: bgtzl       $s2, L_150FFFA8
    if (SIGNED(ctx->r18) > 0) {
        // 0x15100130: lw          $at, 0x0($s7)
        ctx->r1 = MEM_W(ctx->r23, 0X0);
            goto L_150FFFA8;
    }
    goto skip_0;
    // 0x15100130: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    skip_0:
    // 0x15100134: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x15100138: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1510013C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15100140: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15100144: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15100148: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1510014C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15100150: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15100154: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15100158: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x1510015C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15100160: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15100164: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15100168: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x1510016C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15100170: jr          $ra
    // 0x15100174: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x15100174: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_1503F904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1503F908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1503F90C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1503F910: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1503F914: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1503F918: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1503F91C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1503F920: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x1503F924: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x1503F928: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1503F92C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1503F930: addiu       $a0, $t6, 0x320
    ctx->r4 = ADD32(ctx->r14, 0X320);
    // 0x1503F934: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1503F938: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1503F93C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1503F940: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x1503F944: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1503F948: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x1503F94C: jal         0x1503F800
    // 0x1503F950: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    func_1503F800(rdram, ctx);
        goto after_0;
    // 0x1503F950: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    after_0:
    // 0x1503F954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1503F958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1503F95C: jr          $ra
    // 0x1503F960: nop

    return;
    return;
    // 0x1503F960: nop

;}
RECOMP_FUNC void func_151C2E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C2E94: bnel        $a0, $a1, L_151C2EA8
    if (ctx->r4 != ctx->r5) {
        // 0x151C2E98: lw          $t6, 0x0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X0);
            goto L_151C2EA8;
    }
    goto skip_0;
    // 0x151C2E98: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x151C2E9C: jr          $ra
    // 0x151C2EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151C2EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C2EA4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
L_151C2EA8:
    // 0x151C2EA8: bnel        $t6, $zero, L_151C2EBC
    if (ctx->r14 != 0) {
        // 0x151C2EAC: lbu         $t7, 0x4($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X4);
            goto L_151C2EBC;
    }
    goto skip_1;
    // 0x151C2EAC: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    skip_1:
    // 0x151C2EB0: jr          $ra
    // 0x151C2EB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151C2EB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C2EB8: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
L_151C2EBC:
    // 0x151C2EBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151C2EC0: bnel        $v0, $t7, L_151C2ED4
    if (ctx->r2 != ctx->r15) {
        // 0x151C2EC4: lbu         $t8, 0x127($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X127);
            goto L_151C2ED4;
    }
    goto skip_2;
    // 0x151C2EC4: lbu         $t8, 0x127($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X127);
    skip_2:
    // 0x151C2EC8: jr          $ra
    // 0x151C2ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151C2ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C2ED0: lbu         $t8, 0x127($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X127);
L_151C2ED4:
    // 0x151C2ED4: bnel        $v0, $t8, L_151C2EE8
    if (ctx->r2 != ctx->r24) {
        // 0x151C2ED8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151C2EE8;
    }
    goto skip_3;
    // 0x151C2ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x151C2EDC: jr          $ra
    // 0x151C2EE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151C2EE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C2EE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C2EE8:
    // 0x151C2EE8: jr          $ra
    // 0x151C2EEC: nop

    return;
    return;
    // 0x151C2EEC: nop

;}
RECOMP_FUNC void func_15191400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191400: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15191404: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15191408: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1519140C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15191410: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15191414: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15191418: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x1519141C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15191420: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15191424: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15191428: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1519142C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x15191430: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x15191434: addiu       $s3, $s3, -0x62C0
    ctx->r19 = ADD32(ctx->r19, -0X62C0);
    // 0x15191438: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1519143C: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x15191440: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x15191444: swc1        $f20, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f20.u32l;
    // 0x15191448: sw          $zero, 0x20($t6)
    MEM_W(0X20, ctx->r14) = 0;
    // 0x1519144C: lw          $s0, 0x24($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X24);
L_15191450:
    // 0x15191450: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15191454: beq         $v1, $zero, L_151914DC
    if (ctx->r3 == 0) {
        // 0x15191458: addiu       $v0, $v1, 0x110
        ctx->r2 = ADD32(ctx->r3, 0X110);
            goto L_151914DC;
    }
    // 0x15191458: addiu       $v0, $v1, 0x110
    ctx->r2 = ADD32(ctx->r3, 0X110);
    // 0x1519145C: lbu         $t7, 0x20($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20);
    // 0x15191460: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    // 0x15191464: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x15191468: multu       $t7, $s4
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519146C: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x15191470: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15191474: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x15191478: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1519147C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x15191480: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x15191484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15191488: mflo        $t8
    ctx->r24 = lo;
    // 0x1519148C: addu        $s1, $s3, $t8
    ctx->r17 = ADD32(ctx->r19, ctx->r24);
    // 0x15191490: jal         0x1513F680
    // 0x15191494: nop

    func_1513F680(rdram, ctx);
        goto after_0;
    // 0x15191494: nop

    after_0:
    // 0x15191498: jal         0x150ADA20
    // 0x1519149C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1519149C: nop

    after_1:
    // 0x151914A0: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x151914A4: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x151914A8: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x151914AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151914B0: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x151914B4: mfhi        $t2
    ctx->r10 = hi;
    // 0x151914B8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151914BC: sh          $t4, 0x1C($t5)
    MEM_H(0X1C, ctx->r13) = ctx->r12;
    // 0x151914C0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x151914C4: bne         $t1, $zero, L_151914D0
    if (ctx->r9 != 0) {
        // 0x151914C8: nop
    
            goto L_151914D0;
    }
    // 0x151914C8: nop

    // 0x151914CC: break       7
    do_break(353965260);
L_151914D0:
    // 0x151914D0: lw          $t6, 0x58($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X58);
    // 0x151914D4: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x151914D8: sw          $t7, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r15;
L_151914DC:
    // 0x151914DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151914E0: bne         $s2, $s5, L_15191450
    if (ctx->r18 != ctx->r21) {
        // 0x151914E4: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_15191450;
    }
    // 0x151914E4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x151914E8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x151914EC: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    // 0x151914F0: jal         0x100226F0
    // 0x151914F4: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x151914F4: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    after_2:
    // 0x151914F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151914FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15191500: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15191504: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15191508: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x1519150C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15191510: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15191514: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15191518: jr          $ra
    // 0x1519151C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1519151C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15077ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15077AC0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077AC4: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15077AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15077ACC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077AD0: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077AD4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15077AD8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077ADC: sb          $t6, 0x258($t7)
    MEM_B(0X258, ctx->r15) = ctx->r14;
    // 0x15077AE0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15077AE4: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077AE8: jal         0x150ADA20
    // 0x15077AEC: sb          $t8, 0x257($t9)
    MEM_B(0X257, ctx->r25) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15077AEC: sb          $t8, 0x257($t9)
    MEM_B(0X257, ctx->r25) = ctx->r24;
    after_0:
    // 0x15077AF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15077AF4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15077AF8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15077AFC: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x15077B00: mfhi        $t0
    ctx->r8 = hi;
    // 0x15077B04: sb          $t0, 0x86($t1)
    MEM_B(0X86, ctx->r9) = ctx->r8;
    // 0x15077B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15077B0C: jr          $ra
    // 0x15077B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15077B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15077508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077508: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1507750C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15077510: addiu       $a3, $a3, 0x1890
    ctx->r7 = ADD32(ctx->r7, 0X1890);
    // 0x15077514: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15077518: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x1507751C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15077520: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15077524: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x15077528: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1507752C: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x15077530: beq         $a2, $t7, L_15077578
    if (ctx->r6 == ctx->r15) {
        // 0x15077534: lui         $s0, 0x800D
        ctx->r16 = S32(0X800D << 16);
            goto L_15077578;
    }
    // 0x15077534: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15077538: addiu       $s0, $s0, 0x154C
    ctx->r16 = ADD32(ctx->r16, 0X154C);
    // 0x1507753C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15077540: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x15077544: lbu         $v1, 0x211($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X211);
    // 0x15077548: lbu         $t8, 0x20F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X20F);
    // 0x1507754C: bne         $v1, $t8, L_1507756C
    if (ctx->r3 != ctx->r24) {
        // 0x15077550: nop
    
            goto L_1507756C;
    }
    // 0x15077550: nop

    // 0x15077554: sh          $zero, 0x216($v0)
    MEM_H(0X216, ctx->r2) = 0;
    // 0x15077558: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1507755C: lw          $t9, 0x25C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X25C);
    // 0x15077560: ori         $t0, $t9, 0x800
    ctx->r8 = ctx->r25 | 0X800;
    // 0x15077564: b           L_150778DC
    // 0x15077568: sw          $t0, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r8;
        goto L_150778DC;
    // 0x15077568: sw          $t0, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r8;
L_1507756C:
    // 0x1507756C: bne         $s1, $v1, L_15077578
    if (ctx->r17 != ctx->r3) {
        // 0x15077570: nop
    
            goto L_15077578;
    }
    // 0x15077570: nop

    // 0x15077574: sh          $zero, 0x216($v0)
    MEM_H(0X216, ctx->r2) = 0;
L_15077578:
    // 0x15077578: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1507757C: addiu       $s0, $s0, 0x154C
    ctx->r16 = ADD32(ctx->r16, 0X154C);
    // 0x15077580: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15077584: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x15077588: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1507758C: lw          $t1, 0x25C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X25C);
    // 0x15077590: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x15077594: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x15077598: sw          $t2, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r10;
    // 0x1507759C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x150775A0: lw          $t4, 0x2108($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2108);
    // 0x150775A4: lbu         $t3, 0x13F($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X13F);
    // 0x150775A8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150775AC: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x150775B0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x150775B4: blezl       $t7, L_150778E0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x150775B8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150778E0;
    }
    goto skip_0;
    // 0x150775B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150775BC: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x150775C0: lbu         $t8, 0x211($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X211);
    // 0x150775C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150775C8: beql        $s1, $t8, L_150775E0
    if (ctx->r17 == ctx->r24) {
        // 0x150775CC: lbu         $t0, 0x212($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X212);
            goto L_150775E0;
    }
    goto skip_1;
    // 0x150775CC: lbu         $t0, 0x212($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X212);
    skip_1:
    // 0x150775D0: sll         $a1, $a2, 24
    ctx->r5 = S32(ctx->r6 << 24);
    // 0x150775D4: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x150775D8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x150775DC: lbu         $t0, 0x212($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X212);
L_150775E0:
    // 0x150775E0: beql        $s1, $t0, L_150775F0
    if (ctx->r17 == ctx->r8) {
        // 0x150775E4: lbu         $v1, 0x20F($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X20F);
            goto L_150775F0;
    }
    goto skip_2;
    // 0x150775E4: lbu         $v1, 0x20F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X20F);
    skip_2:
    // 0x150775E8: sb          $a2, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r6;
    // 0x150775EC: lbu         $v1, 0x20F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X20F);
L_150775F0:
    // 0x150775F0: bne         $s1, $v1, L_15077658
    if (ctx->r17 != ctx->r3) {
        // 0x150775F4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_15077658;
    }
    // 0x150775F4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x150775F8: lbu         $t1, 0x0($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X0);
    // 0x150775FC: addiu       $t6, $v0, 0x211
    ctx->r14 = ADD32(ctx->r2, 0X211);
    // 0x15077600: addiu       $t7, $v0, 0x212
    ctx->r15 = ADD32(ctx->r2, 0X212);
    // 0x15077604: bnel        $a2, $t1, L_15077620
    if (ctx->r6 != ctx->r9) {
        // 0x15077608: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_15077620;
    }
    goto skip_3;
    // 0x15077608: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_3:
    // 0x1507760C: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x15077610: lbu         $t2, 0x210($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X210);
    // 0x15077614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15077618: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x1507761C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_15077620:
    // 0x15077620: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x15077624: sra         $t4, $a3, 24
    ctx->r12 = S32(SIGNED(ctx->r7) >> 24);
    // 0x15077628: bne         $t3, $s1, L_15077738
    if (ctx->r11 != ctx->r17) {
        // 0x1507762C: or          $a3, $t4, $zero
        ctx->r7 = ctx->r12 | 0;
            goto L_15077738;
    }
    // 0x1507762C: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x15077630: lb          $t5, 0x76($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X76);
    // 0x15077634: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15077638: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1507763C: lw          $a2, 0x1C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C);
    // 0x15077640: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15077644: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15077648: jal         0x15086098
    // 0x1507764C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15086098(rdram, ctx);
        goto after_0;
    // 0x1507764C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x15077650: b           L_15077738
    // 0x15077654: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
        goto L_15077738;
    // 0x15077654: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
L_15077658:
    // 0x15077658: beql        $s1, $a0, L_1507773C
    if (ctx->r17 == ctx->r4) {
        // 0x1507765C: lw          $t3, 0x84($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X84);
            goto L_1507773C;
    }
    goto skip_4;
    // 0x1507765C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    skip_4:
    // 0x15077660: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
    // 0x15077664: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x15077668: addiu       $a3, $v0, 0x211
    ctx->r7 = ADD32(ctx->r2, 0X211);
    // 0x1507766C: bne         $a2, $t8, L_15077728
    if (ctx->r6 != ctx->r24) {
        // 0x15077670: addiu       $t2, $v0, 0x212
        ctx->r10 = ADD32(ctx->r2, 0X212);
            goto L_15077728;
    }
    // 0x15077670: addiu       $t2, $v0, 0x212
    ctx->r10 = ADD32(ctx->r2, 0X212);
    // 0x15077674: lbu         $a0, 0x210($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X210);
    // 0x15077678: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1507767C: lw          $a3, 0x2350($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2350);
    // 0x15077680: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15077684: beq         $s1, $a0, L_1507768C
    if (ctx->r17 == ctx->r4) {
        // 0x15077688: addu        $a2, $t9, $a3
        ctx->r6 = ADD32(ctx->r25, ctx->r7);
            goto L_1507768C;
    }
    // 0x15077688: addu        $a2, $t9, $a3
    ctx->r6 = ADD32(ctx->r25, ctx->r7);
L_1507768C:
    // 0x1507768C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15077690: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15077694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15077698: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_1507769C:
    // 0x1507769C: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x150776A0: beql        $s1, $v0, L_150776F4
    if (ctx->r17 == ctx->r2) {
        // 0x150776A4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_150776F4;
    }
    goto skip_5;
    // 0x150776A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_5:
    // 0x150776A8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x150776AC: lbu         $t8, 0x210($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X210);
    // 0x150776B0: beql        $t8, $v0, L_150776F4
    if (ctx->r24 == ctx->r2) {
        // 0x150776B4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_150776F4;
    }
    goto skip_6;
    // 0x150776B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_6:
    // 0x150776B8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x150776BC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x150776C0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150776C4: jal         0x150ADA68
    // 0x150776C8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150776C8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x150776CC: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150776D0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x150776D4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x150776D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150776DC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x150776E0: bc1fl       L_150776F4
    if (!c1cs) {
        // 0x150776E4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_150776F4;
    }
    goto skip_7;
    // 0x150776E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_7:
    // 0x150776E8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150776EC: lbu         $a1, 0x9($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X9);
    // 0x150776F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150776F4:
    // 0x150776F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150776F8: bne         $a0, $at, L_1507769C
    if (ctx->r4 != ctx->r1) {
        // 0x150776FC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1507769C;
    }
    // 0x150776FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15077700: bne         $a1, $s1, L_15077720
    if (ctx->r5 != ctx->r17) {
        // 0x15077704: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_15077720;
    }
    // 0x15077704: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x15077708: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1507770C: lw          $t9, 0x25C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X25C);
    // 0x15077710: ori         $t0, $t9, 0x800
    ctx->r8 = ctx->r25 | 0X800;
    // 0x15077714: sw          $t0, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r8;
    // 0x15077718: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x1507771C: lbu         $v1, 0x210($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X210);
L_15077720:
    // 0x15077720: b           L_15077738
    // 0x15077724: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
        goto L_15077738;
    // 0x15077724: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
L_15077728:
    // 0x15077728: lb          $a2, 0x76($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X76);
    // 0x1507772C: jal         0x15086364
    // 0x15077730: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_15086364(rdram, ctx);
        goto after_2;
    // 0x15077730: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x15077734: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
L_15077738:
    // 0x15077738: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
L_1507773C:
    // 0x1507773C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x15077740: beql        $t3, $s1, L_150778E0
    if (ctx->r11 == ctx->r17) {
        // 0x15077744: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150778E0;
    }
    goto skip_8;
    // 0x15077744: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x15077748: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1507774C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x15077750: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x15077754: sb          $zero, 0x21E($t4)
    MEM_B(0X21E, ctx->r12) = 0;
    // 0x15077758: jal         0x15086CBC
    // 0x1507775C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    func_15086CBC(rdram, ctx);
        goto after_3;
    // 0x1507775C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    after_3:
    // 0x15077760: beq         $v0, $zero, L_150778DC
    if (ctx->r2 == 0) {
        // 0x15077764: lw          $v1, 0x84($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X84);
            goto L_150778DC;
    }
    // 0x15077764: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x15077768: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1507776C: lw          $t5, 0x2354($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2354);
    // 0x15077770: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15077774: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15077778: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1507777C: sh          $t5, 0x216($t6)
    MEM_H(0X216, ctx->r14) = ctx->r13;
    // 0x15077780: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15077784: lbu         $t7, 0x20F($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20F);
    // 0x15077788: sb          $t7, 0x210($v0)
    MEM_B(0X210, ctx->r2) = ctx->r15;
    // 0x1507778C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15077790: sb          $v1, 0x20F($t8)
    MEM_B(0X20F, ctx->r24) = ctx->r3;
    // 0x15077794: lw          $t9, 0x2350($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2350);
    // 0x15077798: sll         $t0, $v1, 4
    ctx->r8 = S32(ctx->r3 << 4);
    // 0x1507779C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x150777A0: lbu         $t2, 0x8($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X8);
    // 0x150777A4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150777A8: bgez        $t2, L_150777BC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x150777AC: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150777BC;
    }
    // 0x150777AC: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150777B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150777B4: nop

    // 0x150777B8: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_150777BC:
    // 0x150777BC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x150777C0: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150777C4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150777C8: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150777CC: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150777D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150777D4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150777D8: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150777DC: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150777E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150777E4: add.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x150777E8: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150777EC: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150777F0: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x150777F4: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x150777F8: nop

    // 0x150777FC: bc1f        L_15077854
    if (!c1cs) {
        // 0x15077800: nop
    
            goto L_15077854;
    }
    // 0x15077800: nop

    // 0x15077804: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x15077808: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x1507780C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15077810: jal         0x150ADA68
    // 0x15077814: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15077814: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x15077818: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1507781C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15077820: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15077824: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15077828: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1507782C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15077830: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15077834: div.s       $f12, $f6, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15077838: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1507783C: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x15077840: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15077844: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x15077848: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x1507784C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15077850: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
L_15077854:
    // 0x15077854: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15077858: addiu       $v1, $v1, 0x2104
    ctx->r3 = ADD32(ctx->r3, 0X2104);
    // 0x1507785C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15077860: lbu         $t6, 0x13F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X13F);
    // 0x15077864: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15077868: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1507786C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15077870: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x15077874: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15077878: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1507787C: nop

    // 0x15077880: sh          $t4, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r12;
    // 0x15077884: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x15077888: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1507788C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15077890: lbu         $t6, 0x13F($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X13F);
    // 0x15077894: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15077898: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x1507789C: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x150778A0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x150778A4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150778A8: nop

    // 0x150778AC: sh          $t1, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r9;
    // 0x150778B0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x150778B4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150778B8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150778BC: lbu         $t6, 0x13F($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X13F);
    // 0x150778C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150778C4: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x150778C8: addu        $t5, $t0, $t2
    ctx->r13 = ADD32(ctx->r8, ctx->r10);
    // 0x150778CC: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x150778D0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150778D4: nop

    // 0x150778D8: sh          $t9, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r25;
L_150778DC:
    // 0x150778DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150778E0:
    // 0x150778E0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x150778E4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x150778E8: jr          $ra
    // 0x150778EC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x150778EC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_151B229C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B229C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B22A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B22A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151B22A8: jal         0x151B220C
    // 0x151B22AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151B220C(rdram, ctx);
        goto after_0;
    // 0x151B22AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151B22B0: jal         0x1514933C
    // 0x151B22B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151B22B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151B22B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B22BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B22C0: jr          $ra
    // 0x151B22C4: nop

    return;
    return;
    // 0x151B22C4: nop

;}
RECOMP_FUNC void func_1506E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E46C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1506E470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E474: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1506E478: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1506E47C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1506E480: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x1506E484: sll         $t7, $a3, 10
    ctx->r15 = S32(ctx->r7 << 10);
    // 0x1506E488: bgez        $t7, L_1506E51C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1506E48C: andi        $v1, $a3, 0x7FFF
        ctx->r3 = ctx->r7 & 0X7FFF;
            goto L_1506E51C;
    }
    // 0x1506E48C: andi        $v1, $a3, 0x7FFF
    ctx->r3 = ctx->r7 & 0X7FFF;
    // 0x1506E490: beq         $a2, $zero, L_1506E4B8
    if (ctx->r6 == 0) {
        // 0x1506E494: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_1506E4B8;
    }
    // 0x1506E494: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1506E498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1506E49C: beq         $a2, $at, L_1506E4D8
    if (ctx->r6 == ctx->r1) {
        // 0x1506E4A0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_1506E4D8;
    }
    // 0x1506E4A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1506E4A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1506E4A8: beql        $a2, $at, L_1506E4FC
    if (ctx->r6 == ctx->r1) {
        // 0x1506E4AC: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_1506E4FC;
    }
    goto skip_0;
    // 0x1506E4AC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    skip_0:
    // 0x1506E4B0: b           L_1506E520
    // 0x1506E4B4: sltiu       $at, $v1, 0x7D0
    ctx->r1 = ctx->r3 < 0X7D0 ? 1 : 0;
        goto L_1506E520;
    // 0x1506E4B4: sltiu       $at, $v1, 0x7D0
    ctx->r1 = ctx->r3 < 0X7D0 ? 1 : 0;
L_1506E4B8:
    // 0x1506E4B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1506E4BC: jal         0x100107F8
    // 0x1506E4C0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_100107F8(rdram, ctx);
        goto after_0;
    // 0x1506E4C0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x1506E4C4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1506E4C8: beq         $v0, $zero, L_1506E51C
    if (ctx->r2 == 0) {
        // 0x1506E4CC: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_1506E51C;
    }
    // 0x1506E4CC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1506E4D0: b           L_1506E5EC
    // 0x1506E4D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1506E5EC;
    // 0x1506E4D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1506E4D8:
    // 0x1506E4D8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1506E4DC: jal         0x10010894
    // 0x1506E4E0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_10010894(rdram, ctx);
        goto after_1;
    // 0x1506E4E0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x1506E4E4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1506E4E8: beq         $v0, $zero, L_1506E51C
    if (ctx->r2 == 0) {
        // 0x1506E4EC: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_1506E51C;
    }
    // 0x1506E4EC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1506E4F0: b           L_1506E5EC
    // 0x1506E4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1506E5EC;
    // 0x1506E4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1506E4F8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_1506E4FC:
    // 0x1506E4FC: jal         0x151F2CDC
    // 0x1506E500: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_151F2CDC(rdram, ctx);
        goto after_2;
    // 0x1506E500: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_2:
    // 0x1506E504: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1506E508: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1506E50C: bne         $v0, $at, L_1506E51C
    if (ctx->r2 != ctx->r1) {
        // 0x1506E510: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_1506E51C;
    }
    // 0x1506E510: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1506E514: b           L_1506E5EC
    // 0x1506E518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1506E5EC;
    // 0x1506E518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1506E51C:
    // 0x1506E51C: sltiu       $at, $v1, 0x7D0
    ctx->r1 = ctx->r3 < 0X7D0 ? 1 : 0;
L_1506E520:
    // 0x1506E520: bne         $at, $zero, L_1506E580
    if (ctx->r1 != 0) {
        // 0x1506E524: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_1506E580;
    }
    // 0x1506E524: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1506E528: lbu         $t9, 0x288($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X288);
    // 0x1506E52C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1506E530: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x1506E534: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1506E538: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1506E53C: lw          $t1, -0x1A58($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1A58);
    // 0x1506E540: lui         $at, 0xFF20
    ctx->r1 = S32(0XFF20 << 16);
    // 0x1506E544: and         $t4, $a3, $at
    ctx->r12 = ctx->r7 & ctx->r1;
    // 0x1506E548: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1506E54C: lw          $v0, -0x1F40($t3)
    ctx->r2 = MEM_W(ctx->r11, -0X1F40);
    // 0x1506E550: bne         $v0, $zero, L_1506E560
    if (ctx->r2 != 0) {
        // 0x1506E554: nop
    
            goto L_1506E560;
    }
    // 0x1506E554: nop

    // 0x1506E558: b           L_1506E5EC
    // 0x1506E55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1506E5EC;
    // 0x1506E55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1506E560:
    // 0x1506E560: beq         $t4, $zero, L_1506E57C
    if (ctx->r12 == 0) {
        // 0x1506E564: or          $a3, $t4, $zero
        ctx->r7 = ctx->r12 | 0;
            goto L_1506E57C;
    }
    // 0x1506E564: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x1506E568: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1506E56C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1506E570: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x1506E574: b           L_1506E580
    // 0x1506E578: or          $a3, $t4, $t5
    ctx->r7 = ctx->r12 | ctx->r13;
        goto L_1506E580;
    // 0x1506E578: or          $a3, $t4, $t5
    ctx->r7 = ctx->r12 | ctx->r13;
L_1506E57C:
    // 0x1506E57C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
L_1506E580:
    // 0x1506E580: srl         $v1, $a3, 16
    ctx->r3 = S32(U32(ctx->r7) >> 16);
    // 0x1506E584: beql        $v1, $zero, L_1506E5E4
    if (ctx->r3 == 0) {
        // 0x1506E588: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_1506E5E4;
    }
    goto skip_1;
    // 0x1506E588: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x1506E58C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1506E590: jal         0x150ADA20
    // 0x1506E594: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1506E594: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_3:
    // 0x1506E598: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1506E59C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1506E5A0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x1506E5A4: srl         $t6, $a3, 24
    ctx->r14 = S32(U32(ctx->r7) >> 24);
    // 0x1506E5A8: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x1506E5AC: bne         $at, $zero, L_1506E5D8
    if (ctx->r1 != 0) {
        // 0x1506E5B0: andi        $t8, $v1, 0x1F
        ctx->r24 = ctx->r3 & 0X1F;
            goto L_1506E5D8;
    }
    // 0x1506E5B0: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x1506E5B4: andi        $t9, $a3, 0x7FFF
    ctx->r25 = ctx->r7 & 0X7FFF;
    // 0x1506E5B8: beq         $t8, $zero, L_1506E5E0
    if (ctx->r24 == 0) {
        // 0x1506E5BC: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_1506E5E0;
    }
    // 0x1506E5BC: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x1506E5C0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1506E5C4: jal         0x1000F568
    // 0x1506E5C8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_1000F568(rdram, ctx);
        goto after_4;
    // 0x1506E5C8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_4:
    // 0x1506E5CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1506E5D0: b           L_1506E5E4
    // 0x1506E5D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
        goto L_1506E5E4;
    // 0x1506E5D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_1506E5D8:
    // 0x1506E5D8: b           L_1506E5EC
    // 0x1506E5DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1506E5EC;
    // 0x1506E5DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1506E5E0:
    // 0x1506E5E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_1506E5E4:
    // 0x1506E5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1506E5E8: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
L_1506E5EC:
    // 0x1506E5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E5F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1506E5F4: jr          $ra
    // 0x1506E5F8: nop

    return;
    return;
    // 0x1506E5F8: nop

;}
RECOMP_FUNC void func_151B4EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B4EA4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151B4EA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B4EAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151B4EB0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151B4EB4: lwc1        $f0, -0x5C2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C2C);
    // 0x151B4EB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151B4EBC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x151B4EC0: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x151B4EC4: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x151B4EC8: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151B4ECC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B4ED0: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x151B4ED4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151B4ED8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B4EDC: nop

    // 0x151B4EE0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151B4EE4: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x151B4EE8: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x151B4EEC: jal         0x150ADA68
    // 0x151B4EF0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151B4EF0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151B4EF4: jal         0x150ADA20
    // 0x151B4EF8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151B4EF8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151B4EFC: jal         0x150ADA20
    // 0x151B4F00: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151B4F00: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_2:
    // 0x151B4F04: jal         0x150ADA68
    // 0x151B4F08: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151B4F08: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_3:
    // 0x151B4F0C: jal         0x150ADA20
    // 0x151B4F10: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151B4F10: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x151B4F14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B4F18: lwc1        $f0, -0x5C28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C28);
    // 0x151B4F1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B4F20: lwc1        $f8, -0x5C24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C24);
    // 0x151B4F24: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x151B4F28: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151B4F2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B4F30: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x151B4F34: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x151B4F38: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151B4F3C: mfhi        $t7
    ctx->r15 = hi;
    // 0x151B4F40: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x151B4F44: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B4F48: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151B4F4C: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x151B4F50: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B4F54: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x151B4F58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B4F5C: lui         $at, 0x42DA
    ctx->r1 = S32(0X42DA << 16);
    // 0x151B4F60: lbu         $t4, 0x87($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X87);
    // 0x151B4F64: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B4F68: mfhi        $t0
    ctx->r8 = hi;
    // 0x151B4F6C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151B4F70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B4F74: addiu       $t1, $t0, 0x9B
    ctx->r9 = ADD32(ctx->r8, 0X9B);
    // 0x151B4F78: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x151B4F7C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151B4F80: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B4F84: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151B4F88: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151B4F8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151B4F90: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x151B4F94: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x151B4F98: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151B4F9C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x151B4FA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151B4FA4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151B4FA8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x151B4FAC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151B4FB0: lbu         $a2, 0x83($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X83);
    // 0x151B4FB4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151B4FB8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151B4FBC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151B4FC0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151B4FC4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151B4FC8: jal         0x151D9014
    // 0x151B4FCC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    func_151D9014(rdram, ctx);
        goto after_5;
    // 0x151B4FCC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    after_5:
    // 0x151B4FD0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151B4FD4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151B4FD8: jr          $ra
    // 0x151B4FDC: nop

    return;
    return;
    // 0x151B4FDC: nop

;}
RECOMP_FUNC void func_150796CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150796CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150796D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150796D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150796D8: jal         0x15083FB0
    // 0x150796DC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15083FB0(rdram, ctx);
        goto after_0;
    // 0x150796DC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x150796E0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150796E4: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x150796E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150796EC: beq         $t6, $zero, L_15079738
    if (ctx->r14 == 0) {
        // 0x150796F0: nop
    
            goto L_15079738;
    }
    // 0x150796F0: nop

    // 0x150796F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150796F8: beq         $v0, $at, L_15079780
    if (ctx->r2 == ctx->r1) {
        // 0x150796FC: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_15079780;
    }
    // 0x150796FC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15079700: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x15079704: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15079708: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507970C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x15079710: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079714: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15079718: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507971C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15079720: lbu         $t7, 0x1891($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1891);
    // 0x15079724: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079728: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507972C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15079730: b           L_15079780
    // 0x15079734: sb          $t7, -0x3C0B($at)
    MEM_B(-0X3C0B, ctx->r1) = ctx->r15;
        goto L_15079780;
    // 0x15079734: sb          $t7, -0x3C0B($at)
    MEM_B(-0X3C0B, ctx->r1) = ctx->r15;
L_15079738:
    // 0x15079738: beq         $v0, $at, L_15079780
    if (ctx->r2 == ctx->r1) {
        // 0x1507973C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_15079780;
    }
    // 0x1507973C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15079740: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15079744: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079748: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x1507974C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079750: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15079754: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079758: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x1507975C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079760: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15079764: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15079768: lbu         $t0, -0x3C2C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3C2C);
    // 0x1507976C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15079770: beql        $t0, $zero, L_15079784
    if (ctx->r8 == 0) {
        // 0x15079774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15079784;
    }
    goto skip_0;
    // 0x15079774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15079778: jal         0x15075400
    // 0x1507977C: lbu         $a0, 0x1891($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1891);
    func_15075400(rdram, ctx);
        goto after_1;
    // 0x1507977C: lbu         $a0, 0x1891($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1891);
    after_1:
L_15079780:
    // 0x15079780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15079784:
    // 0x15079784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15079788: jr          $ra
    // 0x1507978C: nop

    return;
    return;
    // 0x1507978C: nop

;}
RECOMP_FUNC void func_151B85AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B85AC: lw          $v0, 0x110($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X110);
    // 0x151B85B0: beql        $v0, $zero, L_151B8628
    if (ctx->r2 == 0) {
        // 0x151B85B4: lw          $t8, 0x58($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X58);
            goto L_151B8628;
    }
    goto skip_0;
    // 0x151B85B4: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    skip_0:
    // 0x151B85B8: lw          $at, 0x38($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X38);
    // 0x151B85BC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151B85C0: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x151B85C4: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x151B85C8: lw          $t7, 0x3C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X3C);
    // 0x151B85CC: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x151B85D0: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151B85D4: sw          $t7, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r15;
    // 0x151B85D8: lw          $at, 0x40($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X40);
    // 0x151B85DC: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x151B85E0: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    // 0x151B85E4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B85E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B85EC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151B85F0: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151B85F4: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x151B85F8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B85FC: lwc1        $f16, 0x54($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X54);
    // 0x151B8600: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151B8604: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151B8608: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x151B860C: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x151B8610: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B8614: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151B8618: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151B861C: b           L_151B8630
    // 0x151B8620: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
        goto L_151B8630;
    // 0x151B8620: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x151B8624: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
L_151B8628:
    // 0x151B8628: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x151B862C: sw          $t9, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r25;
L_151B8630:
    // 0x151B8630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B8634: jr          $ra
    // 0x151B8638: nop

    return;
    return;
    // 0x151B8638: nop

;}
RECOMP_FUNC void func_1506BE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BE54: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BE58: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506BE5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506BE60: lwc1        $f8, -0x63BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X63BC);
    // 0x1506BE64: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1506BE68: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506BE6C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506BE70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506BE74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1506BE78: swc1        $f10, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f10.u32l;
    // 0x1506BE7C: jr          $ra
    // 0x1506BE80: nop

    return;
    return;
    // 0x1506BE80: nop

;}
RECOMP_FUNC void func_151E83E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E83E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E83EC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E83F0: addiu       $v0, $v0, 0xA80
    ctx->r2 = ADD32(ctx->r2, 0XA80);
    // 0x151E83F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151E83F8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x151E83FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151E8400: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x151E8404: bne         $t6, $zero, L_151E8420
    if (ctx->r14 != 0) {
        // 0x151E8408: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_151E8420;
    }
    // 0x151E8408: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x151E840C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x151E8410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E8414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E8418: jal         0x1501D348
    // 0x151E841C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501D348(rdram, ctx);
        goto after_0;
    // 0x151E841C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_151E8420:
    // 0x151E8420: jal         0x151E530C
    // 0x151E8424: nop

    func_151E530C(rdram, ctx);
        goto after_1;
    // 0x151E8424: nop

    after_1:
    // 0x151E8428: jal         0x1517EFDC
    // 0x151E842C: nop

    func_1517EFDC(rdram, ctx);
        goto after_2;
    // 0x151E842C: nop

    after_2:
    // 0x151E8430: bne         $v0, $zero, L_151E8440
    if (ctx->r2 != 0) {
        // 0x151E8434: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_151E8440;
    }
    // 0x151E8434: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E8438: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E843C: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
L_151E8440:
    // 0x151E8440: lw          $t8, 0xA90($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XA90);
    // 0x151E8444: slti        $at, $t8, 0x65
    ctx->r1 = SIGNED(ctx->r24) < 0X65 ? 1 : 0;
    // 0x151E8448: bnel        $at, $zero, L_151E849C
    if (ctx->r1 != 0) {
        // 0x151E844C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151E849C;
    }
    goto skip_0;
    // 0x151E844C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x151E8450: jal         0x151E5034
    // 0x151E8454: nop

    func_151E5034(rdram, ctx);
        goto after_3;
    // 0x151E8454: nop

    after_3:
    // 0x151E8458: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E845C: sb          $zero, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = 0;
    // 0x151E8460: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8464: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E8468: sb          $t9, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r25;
    // 0x151E846C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8470: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    // 0x151E8474: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151E8478: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151E847C: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151E8480: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151E8484: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151E8488: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x151E848C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E8490: jal         0x1501C730
    // 0x151E8494: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_4;
    // 0x151E8494: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x151E8498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151E849C:
    // 0x151E849C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151E84A0: jr          $ra
    // 0x151E84A4: nop

    return;
    return;
    // 0x151E84A4: nop

;}
RECOMP_FUNC void func_1518F8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F8E0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x1518F8E4: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x1518F8E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518F8EC: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1518F8F0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1518F8F4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1518F8F8: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1518F8FC: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1518F900: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1518F904: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1518F908: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1518F90C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1518F910: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1518F914: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1518F918: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1518F91C: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x1518F920: lwc1        $f4, 0x30($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X30);
    // 0x1518F924: lw          $s6, 0x10($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X10);
    // 0x1518F928: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x1518F92C: nop

    // 0x1518F930: bc1fl       L_1518FBD0
    if (!c1cs) {
        // 0x1518F934: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1518FBD0;
    }
    goto skip_0;
    // 0x1518F934: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x1518F938: lw          $t6, 0x1D4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X1D4);
    // 0x1518F93C: addiu       $s0, $s4, 0x30
    ctx->r16 = ADD32(ctx->r20, 0X30);
    // 0x1518F940: beql        $t6, $zero, L_1518FBB0
    if (ctx->r14 == 0) {
        // 0x1518F944: lwc1        $f0, 0x0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
            goto L_1518FBB0;
    }
    goto skip_1;
    // 0x1518F944: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x1518F948: lbu         $t7, 0x74($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X74);
    // 0x1518F94C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1518F950: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x1518F954: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x1518F958: beq         $t8, $at, L_1518FBAC
    if (ctx->r24 == ctx->r1) {
        // 0x1518F95C: addiu       $fp, $fp, 0x990
        ctx->r30 = ADD32(ctx->r30, 0X990);
            goto L_1518FBAC;
    }
    // 0x1518F95C: addiu       $fp, $fp, 0x990
    ctx->r30 = ADD32(ctx->r30, 0X990);
    // 0x1518F960: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x1518F964: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x1518F968: addiu       $s7, $s7, 0x968
    ctx->r23 = ADD32(ctx->r23, 0X968);
    // 0x1518F96C: addiu       $s0, $s4, 0x30
    ctx->r16 = ADD32(ctx->r20, 0X30);
    // 0x1518F970: addiu       $s5, $sp, 0xCC
    ctx->r21 = ADD32(ctx->r29, 0XCC);
    // 0x1518F974: lh          $t9, 0x20($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X20);
L_1518F978:
    // 0x1518F978: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x1518F97C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1518F980: beql        $at, $zero, L_1518FB88
    if (ctx->r1 == 0) {
        // 0x1518F984: lwc1        $f16, 0x0($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
            goto L_1518FB88;
    }
    goto skip_2;
    // 0x1518F984: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x1518F988: jal         0x150ADA20
    // 0x1518F98C: lw          $s1, 0x48($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X48);
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518F98C: lw          $s1, 0x48($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X48);
    after_0:
    // 0x1518F990: sll         $t1, $s1, 1
    ctx->r9 = S32(ctx->r17 << 1);
    // 0x1518F994: addu        $t2, $s7, $t1
    ctx->r10 = ADD32(ctx->r23, ctx->r9);
    // 0x1518F998: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x1518F99C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x1518F9A0: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x1518F9A4: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x1518F9A8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1518F9AC: mfhi        $t4
    ctx->r12 = hi;
    // 0x1518F9B0: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1518F9B4: bne         $t3, $zero, L_1518F9C0
    if (ctx->r11 != 0) {
        // 0x1518F9B8: nop
    
            goto L_1518F9C0;
    }
    // 0x1518F9B8: nop

    // 0x1518F9BC: break       7
    do_break(353958332);
L_1518F9C0:
    // 0x1518F9C0: addu        $s2, $t5, $t8
    ctx->r18 = ADD32(ctx->r13, ctx->r24);
    // 0x1518F9C4: jal         0x150ADA68
    // 0x1518F9C8: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1518F9C8: nop

    after_1:
    // 0x1518F9CC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1518F9D0: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1518F9D4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518F9D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518F9DC: jal         0x150ADA68
    // 0x1518F9E0: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1518F9E0: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1518F9E4: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1518F9E8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1518F9EC: addiu       $s1, $s2, 0x4
    ctx->r17 = ADD32(ctx->r18, 0X4);
    // 0x1518F9F0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518F9F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1518F9F8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1518F9FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1518FA00: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x1518FA04: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x1518FA08: lw          $t9, 0x1D4($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X1D4);
    // 0x1518FA0C: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1518FA10: jal         0x15143134
    // 0x1518FA14: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    func_15143134(rdram, ctx);
        goto after_3;
    // 0x1518FA14: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    after_3:
    // 0x1518FA18: jal         0x150ADA20
    // 0x1518FA1C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1518FA1C: nop

    after_4:
    // 0x1518FA20: jal         0x150ADA20
    // 0x1518FA24: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1518FA24: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_5:
    // 0x1518FA28: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x1518FA2C: beq         $t2, $zero, L_1518FA3C
    if (ctx->r10 == 0) {
        // 0x1518FA30: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_1518FA3C;
    }
    // 0x1518FA30: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1518FA34: b           L_1518FA40
    // 0x1518FA38: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_1518FA40;
    // 0x1518FA38: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_1518FA3C:
    // 0x1518FA3C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_1518FA40:
    // 0x1518FA40: lbu         $t3, 0x25($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X25);
    // 0x1518FA44: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x1518FA48: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1518FA4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1518FA50: divu        $zero, $s3, $t4
    lo = S32(U32(ctx->r19) / U32(ctx->r12)); hi = S32(U32(ctx->r19) % U32(ctx->r12));
    // 0x1518FA54: addiu       $t8, $t8, 0x5480
    ctx->r24 = ADD32(ctx->r24, 0X5480);
    // 0x1518FA58: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1518FA5C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x1518FA60: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x1518FA64: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x1518FA68: addiu       $t0, $zero, 0x23
    ctx->r8 = ADD32(0, 0X23);
    // 0x1518FA6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1518FA70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518FA74: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1518FA78: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1518FA7C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x1518FA80: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1518FA84: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1518FA88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1518FA8C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1518FA90: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1518FA94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1518FA98: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1518FA9C: lbu         $t3, 0xC($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0XC);
    // 0x1518FAA0: mfhi        $t6
    ctx->r14 = hi;
    // 0x1518FAA4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x1518FAA8: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x1518FAAC: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x1518FAB0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x1518FAB4: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x1518FAB8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1518FABC: bne         $t4, $zero, L_1518FAC8
    if (ctx->r12 != 0) {
        // 0x1518FAC0: nop
    
            goto L_1518FAC8;
    }
    // 0x1518FAC0: nop

    // 0x1518FAC4: break       7
    do_break(353958596);
L_1518FAC8:
    // 0x1518FAC8: lbu         $t4, 0x1($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X1);
    // 0x1518FACC: jal         0x1514B8E4
    // 0x1518FAD0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    func_1514B8E4(rdram, ctx);
        goto after_6;
    // 0x1518FAD0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    after_6:
    // 0x1518FAD4: beq         $v0, $zero, L_1518FB84
    if (ctx->r2 == 0) {
        // 0x1518FAD8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1518FB84;
    }
    // 0x1518FAD8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1518FADC: sw          $s6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r22;
    // 0x1518FAE0: lbu         $t6, 0x3B($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X3B);
    // 0x1518FAE4: addiu       $t7, $sp, 0xA4
    ctx->r15 = ADD32(ctx->r29, 0XA4);
    // 0x1518FAE8: sb          $t6, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r14;
    // 0x1518FAEC: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x1518FAF0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1518FAF4: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x1518FAF8: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x1518FAFC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x1518FB00: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x1518FB04: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x1518FB08: jal         0x150ADA20
    // 0x1518FB0C: sb          $t9, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1518FB0C: sb          $t9, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r25;
    after_7:
    // 0x1518FB10: lh          $t1, 0x28($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X28);
    // 0x1518FB14: lh          $t4, 0x26($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X26);
    // 0x1518FB18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1518FB1C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1518FB20: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x1518FB24: mfhi        $t3
    ctx->r11 = hi;
    // 0x1518FB28: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x1518FB2C: sh          $t6, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r14;
    // 0x1518FB30: sb          $t8, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r24;
    // 0x1518FB34: lbu         $t5, 0x4C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4C);
    // 0x1518FB38: bne         $t2, $zero, L_1518FB44
    if (ctx->r10 != 0) {
        // 0x1518FB3C: nop
    
            goto L_1518FB44;
    }
    // 0x1518FB3C: nop

    // 0x1518FB40: break       7
    do_break(353958720);
L_1518FB44:
    // 0x1518FB44: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x1518FB48: beq         $t7, $zero, L_1518FB5C
    if (ctx->r15 == 0) {
        // 0x1518FB4C: addiu       $a0, $sp, 0x9C
        ctx->r4 = ADD32(ctx->r29, 0X9C);
            goto L_1518FB5C;
    }
    // 0x1518FB4C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x1518FB50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518FB54: b           L_1518FB60
    // 0x1518FB58: sb          $t0, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r8;
        goto L_1518FB60;
    // 0x1518FB58: sb          $t0, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r8;
L_1518FB5C:
    // 0x1518FB5C: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
L_1518FB60:
    // 0x1518FB60: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x1518FB64: sw          $s4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r20;
    // 0x1518FB68: sw          $s3, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r19;
    // 0x1518FB6C: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x1518FB70: lbu         $a3, 0xC($s4)
    ctx->r7 = MEM_BU(ctx->r20, 0XC);
    // 0x1518FB74: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1518FB78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1518FB7C: jal         0x151D2BA4
    // 0x1518FB80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_151D2BA4(rdram, ctx);
        goto after_8;
    // 0x1518FB80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_8:
L_1518FB84:
    // 0x1518FB84: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
L_1518FB88:
    // 0x1518FB88: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x1518FB8C: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x1518FB90: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1518FB94: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x1518FB98: nop

    // 0x1518FB9C: bc1tl       L_1518F978
    if (c1cs) {
        // 0x1518FBA0: lh          $t9, 0x20($s4)
        ctx->r25 = MEM_H(ctx->r20, 0X20);
            goto L_1518F978;
    }
    goto skip_3;
    // 0x1518FBA0: lh          $t9, 0x20($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X20);
    skip_3:
    // 0x1518FBA4: b           L_1518FBD0
    // 0x1518FBA8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
        goto L_1518FBD0;
    // 0x1518FBA8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1518FBAC:
    // 0x1518FBAC: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
L_1518FBB0:
    // 0x1518FBB0: sub.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
L_1518FBB4:
    // 0x1518FBB4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x1518FBB8: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1518FBBC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x1518FBC0: nop

    // 0x1518FBC4: bc1tl       L_1518FBB4
    if (c1cs) {
        // 0x1518FBC8: sub.s       $f6, $f0, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_1518FBB4;
    }
    goto skip_4;
    // 0x1518FBC8: sub.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
    skip_4:
    // 0x1518FBCC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1518FBD0:
    // 0x1518FBD0: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x1518FBD4: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x1518FBD8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1518FBDC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1518FBE0: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1518FBE4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1518FBE8: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1518FBEC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1518FBF0: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1518FBF4: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1518FBF8: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1518FBFC: jr          $ra
    // 0x1518FC00: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x1518FC00: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_151D5714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5714: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151D5718: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D571C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151D5720: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151D5724: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151D5728: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151D572C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x151D5730: lw          $v0, 0x1D4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D4);
    // 0x151D5734: beql        $v0, $zero, L_151D57EC
    if (ctx->r2 == 0) {
        // 0x151D5738: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151D57EC;
    }
    goto skip_0;
    // 0x151D5738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151D573C: lbu         $t7, 0x74($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X74);
    // 0x151D5740: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x151D5744: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151D5748: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x151D574C: beq         $t8, $at, L_151D57E8
    if (ctx->r24 == ctx->r1) {
        // 0x151D5750: sll         $t0, $t9, 6
        ctx->r8 = S32(ctx->r25 << 6);
            goto L_151D57E8;
    }
    // 0x151D5750: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x151D5754: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x151D5758: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x151D575C: addu        $a2, $v0, $t0
    ctx->r6 = ADD32(ctx->r2, ctx->r8);
    // 0x151D5760: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x151D5764: addiu       $t4, $sp, 0x40
    ctx->r12 = ADD32(ctx->r29, 0X40);
    // 0x151D5768: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151D576C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151D5770: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x151D5774: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151D5778: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151D577C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x151D5780: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x151D5784: jal         0x15145EA4
    // 0x151D5788: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x151D5788: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_0:
    // 0x151D578C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151D5790: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151D5794: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151D5798: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151D579C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D57A0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151D57A4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151D57A8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151D57AC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151D57B0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x151D57B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D57B8: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x151D57BC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151D57C0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151D57C4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x151D57C8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151D57CC: lbu         $t5, 0x6F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X6F);
    // 0x151D57D0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x151D57D4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x151D57D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x151D57DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151D57E0: jal         0x151D4408
    // 0x151D57E4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_151D4408(rdram, ctx);
        goto after_1;
    // 0x151D57E4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_1:
L_151D57E8:
    // 0x151D57E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151D57EC:
    // 0x151D57EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151D57F0: jr          $ra
    // 0x151D57F4: nop

    return;
    return;
    // 0x151D57F4: nop

;}
RECOMP_FUNC void func_1505EEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505EEB0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1505EEB4: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x1505EEB8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505EEBC: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x1505EEC0: beq         $a0, $t6, L_1505EEE4
    if (ctx->r4 == ctx->r14) {
        // 0x1505EEC4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1505EEE4;
    }
    // 0x1505EEC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505EEC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_1505EECC:
    // 0x1505EECC: slti        $at, $a2, 0x19
    ctx->r1 = SIGNED(ctx->r6) < 0X19 ? 1 : 0;
    // 0x1505EED0: beq         $at, $zero, L_1505EEE4
    if (ctx->r1 == 0) {
        // 0x1505EED4: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1505EEE4;
    }
    // 0x1505EED4: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505EED8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1505EEDC: bnel        $a0, $t7, L_1505EECC
    if (ctx->r4 != ctx->r15) {
        // 0x1505EEE0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_1505EECC;
    }
    goto skip_0;
    // 0x1505EEE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
L_1505EEE4:
    // 0x1505EEE4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x1505EEE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505EEEC: jr          $ra
    // 0x1505EEF0: nop

    return;
    return;
    // 0x1505EEF0: nop

;}
RECOMP_FUNC void func_151CE634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CE634: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151CE638: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151CE63C: addiu       $t1, $t1, -0x2E70
    ctx->r9 = ADD32(ctx->r9, -0X2E70);
    // 0x151CE640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151CE644: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
L_151CE648:
    // 0x151CE648: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151CE64C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x151CE650: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151CE654: lw          $t8, 0x5760($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5760);
    // 0x151CE658: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151CE65C: addiu       $a0, $t6, -0x31B0
    ctx->r4 = ADD32(ctx->r14, -0X31B0);
    // 0x151CE660: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151CE664: addu        $a1, $t9, $a0
    ctx->r5 = ADD32(ctx->r25, ctx->r4);
L_151CE668:
    // 0x151CE668: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151CE66C: beql        $v1, $zero, L_151CE6A8
    if (ctx->r3 == 0) {
        // 0x151CE670: addiu       $a0, $a0, 0x1A0
        ctx->r4 = ADD32(ctx->r4, 0X1A0);
            goto L_151CE6A8;
    }
    goto skip_0;
    // 0x151CE670: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    skip_0:
    // 0x151CE674: lw          $t2, 0x20($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X20);
L_151CE678:
    // 0x151CE678: bnel        $t0, $t2, L_151CE69C
    if (ctx->r8 != ctx->r10) {
        // 0x151CE67C: lw          $v1, 0x8($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X8);
            goto L_151CE69C;
    }
    goto skip_1;
    // 0x151CE67C: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    skip_1:
    // 0x151CE680: lw          $a2, 0x98($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X98);
    // 0x151CE684: lw          $t3, 0x48($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X48);
    // 0x151CE688: bnel        $a3, $t3, L_151CE69C
    if (ctx->r7 != ctx->r11) {
        // 0x151CE68C: lw          $v1, 0x8($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X8);
            goto L_151CE69C;
    }
    goto skip_2;
    // 0x151CE68C: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    skip_2:
    // 0x151CE690: jr          $ra
    // 0x151CE694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x151CE694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151CE698: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
L_151CE69C:
    // 0x151CE69C: bnel        $v1, $zero, L_151CE678
    if (ctx->r3 != 0) {
        // 0x151CE6A0: lw          $t2, 0x20($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X20);
            goto L_151CE678;
    }
    goto skip_3;
    // 0x151CE6A0: lw          $t2, 0x20($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X20);
    skip_3:
    // 0x151CE6A4: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
L_151CE6A8:
    // 0x151CE6A8: bne         $a0, $t1, L_151CE668
    if (ctx->r4 != ctx->r9) {
        // 0x151CE6AC: addiu       $a1, $a1, 0x1A0
        ctx->r5 = ADD32(ctx->r5, 0X1A0);
            goto L_151CE668;
    }
    // 0x151CE6AC: addiu       $a1, $a1, 0x1A0
    ctx->r5 = ADD32(ctx->r5, 0X1A0);
    // 0x151CE6B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151CE6B4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x151CE6B8: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x151CE6BC: bne         $at, $zero, L_151CE648
    if (ctx->r1 != 0) {
        // 0x151CE6C0: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_151CE648;
    }
    // 0x151CE6C0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x151CE6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151CE6C8: jr          $ra
    // 0x151CE6CC: nop

    return;
    return;
    // 0x151CE6CC: nop

;}
RECOMP_FUNC void func_150D5A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D5A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D5A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D5A34: jal         0x1514933C
    // 0x150D5A38: nop

    func_1514933C(rdram, ctx);
        goto after_0;
    // 0x150D5A38: nop

    after_0:
    // 0x150D5A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D5A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D5A44: jr          $ra
    // 0x150D5A48: nop

    return;
    return;
    // 0x150D5A48: nop

;}
RECOMP_FUNC void func_15083FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15083FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15083FB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15083FB8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15083FBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15083FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15083FC4: jal         0x15083E90
    // 0x15083FC8: nop

    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x15083FC8: nop

    after_0:
    // 0x15083FCC: beq         $v0, $zero, L_15083FF4
    if (ctx->r2 == 0) {
        // 0x15083FD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15083FF4;
    }
    // 0x15083FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15083FD4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15083FD8: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15083FDC: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x15083FE0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15083FE4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15083FE8: mflo        $v0
    ctx->r2 = lo;
    // 0x15083FEC: b           L_15083FF8
    // 0x15083FF0: nop

        goto L_15083FF8;
    // 0x15083FF0: nop

L_15083FF4:
    // 0x15083FF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15083FF8:
    // 0x15083FF8: jr          $ra
    // 0x15083FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15083FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150885EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150885EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150885F0: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x150885F4: addiu       $t0, $t0, 0x72A0
    ctx->r8 = ADD32(ctx->r8, 0X72A0);
    // 0x150885F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150885FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15088600: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15088604: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15088608: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1508860C: beq         $v1, $zero, L_1508867C
    if (ctx->r3 == 0) {
        // 0x15088610: addiu       $a2, $zero, 0x84
        ctx->r6 = ADD32(0, 0X84);
            goto L_1508867C;
    }
    // 0x15088610: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    // 0x15088614: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15088618: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1508861C: mflo        $a3
    ctx->r7 = lo;
    // 0x15088620: addu        $v0, $v1, $a3
    ctx->r2 = ADD32(ctx->r3, ctx->r7);
    // 0x15088624: lb          $t7, 0x31($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X31);
    // 0x15088628: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508862C: addu        $a1, $a3, $v1
    ctx->r5 = ADD32(ctx->r7, ctx->r3);
    // 0x15088630: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15088634: lb          $t8, 0x30($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X30);
    // 0x15088638: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x1508863C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15088640: mflo        $t2
    ctx->r10 = lo;
    // 0x15088644: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    // 0x15088648: jal         0x10023A10
    // 0x1508864C: nop

    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1508864C: nop

    after_0:
    // 0x15088650: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x15088654: addiu       $t0, $t0, 0x72A0
    ctx->r8 = ADD32(ctx->r8, 0X72A0);
    // 0x15088658: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x1508865C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15088660: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x15088664: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x15088668: sb          $t3, 0x31($t5)
    MEM_B(0X31, ctx->r13) = ctx->r11;
    // 0x1508866C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x15088670: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15088674: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x15088678: sb          $t6, 0x30($t8)
    MEM_B(0X30, ctx->r24) = ctx->r14;
L_1508867C:
    // 0x1508867C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15088680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15088684: jr          $ra
    // 0x15088688: nop

    return;
    return;
    // 0x15088688: nop

;}
RECOMP_FUNC void func_1502E474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502E474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1502E478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1502E47C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1502E480: lhu         $a1, 0x3E7A($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3E7A);
    // 0x1502E484: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502E488: beql        $a1, $zero, L_1502E4AC
    if (ctx->r5 == 0) {
        // 0x1502E48C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1502E4AC;
    }
    goto skip_0;
    // 0x1502E48C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_0:
    // 0x1502E490: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1502E494: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1502E498: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502E49C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x1502E4A0: jal         0x150A9984
    // 0x1502E4A4: lw          $a0, 0x3E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3E80);
    func_150A9984(rdram, ctx);
        goto after_0;
    // 0x1502E4A4: lw          $a0, 0x3E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3E80);
    after_0:
    // 0x1502E4A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_1502E4AC:
    // 0x1502E4AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502E4B0: sb          $t8, 0x3E90($at)
    MEM_B(0X3E90, ctx->r1) = ctx->r24;
    // 0x1502E4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1502E4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1502E4BC: jr          $ra
    // 0x1502E4C0: nop

    return;
    return;
    // 0x1502E4C0: nop

;}
RECOMP_FUNC void func_1515BAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BAE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1515BAE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1515BAE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1515BAEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1515BAF0: lbu         $t6, 0x11($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X11);
    // 0x1515BAF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1515BAF8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1515BAFC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x1515BB00: beq         $t7, $zero, L_1515BB28
    if (ctx->r15 == 0) {
        // 0x1515BB04: nop
    
            goto L_1515BB28;
    }
    // 0x1515BB04: nop

    // 0x1515BB08: lh          $t8, 0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X14);
    // 0x1515BB0C: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1515BB10: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1515BB14: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x1515BB18: lh          $t1, 0x14($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X14);
    // 0x1515BB1C: bgez        $t1, L_1515BB28
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1515BB20: nop
    
            goto L_1515BB28;
    }
    // 0x1515BB20: nop

    // 0x1515BB24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1515BB28:
    // 0x1515BB28: bne         $v1, $zero, L_1515BB8C
    if (ctx->r3 != 0) {
        // 0x1515BB2C: nop
    
            goto L_1515BB8C;
    }
    // 0x1515BB2C: nop

    // 0x1515BB30: lb          $v0, 0x38($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X38);
    // 0x1515BB34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515BB38: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1515BB3C: beq         $v0, $at, L_1515BB68
    if (ctx->r2 == ctx->r1) {
        // 0x1515BB40: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_1515BB68;
    }
    // 0x1515BB40: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x1515BB44: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x1515BB48: lw          $t9, -0x4F88($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F88);
    // 0x1515BB4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515BB50: sb          $v1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r3;
    // 0x1515BB54: jalr        $t9
    // 0x1515BB58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1515BB58: nop

    after_0:
    // 0x1515BB5C: bne         $v0, $zero, L_1515BB68
    if (ctx->r2 != 0) {
        // 0x1515BB60: lbu         $v1, 0x23($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X23);
            goto L_1515BB68;
    }
    // 0x1515BB60: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x1515BB64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1515BB68:
    // 0x1515BB68: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x1515BB6C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x1515BB70: addiu       $a2, $s0, 0x18
    ctx->r6 = ADD32(ctx->r16, 0X18);
    // 0x1515BB74: beq         $t3, $zero, L_1515BB8C
    if (ctx->r11 == 0) {
        // 0x1515BB78: nop
    
            goto L_1515BB8C;
    }
    // 0x1515BB78: nop

    // 0x1515BB7C: lbu         $a0, 0x10($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X10);
    // 0x1515BB80: jal         0x1514401C
    // 0x1515BB84: lbu         $a3, 0x12($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X12);
    func_1514401C(rdram, ctx);
        goto after_1;
    // 0x1515BB84: lbu         $a3, 0x12($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X12);
    after_1:
    // 0x1515BB88: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_1515BB8C:
    // 0x1515BB8C: beql        $v1, $zero, L_1515BBE0
    if (ctx->r3 == 0) {
        // 0x1515BB90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1515BBE0;
    }
    goto skip_0;
    // 0x1515BB90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1515BB94: lb          $v0, 0x39($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X39);
    // 0x1515BB98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515BB9C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1515BBA0: beq         $v0, $at, L_1515BBD4
    if (ctx->r2 == ctx->r1) {
        // 0x1515BBA4: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_1515BBD4;
    }
    // 0x1515BBA4: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x1515BBA8: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x1515BBAC: lw          $t9, -0x4F84($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F84);
    // 0x1515BBB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515BBB4: jalr        $t9
    // 0x1515BBB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1515BBB8: nop

    after_2:
    // 0x1515BBBC: beql        $v0, $zero, L_1515BBE0
    if (ctx->r2 == 0) {
        // 0x1515BBC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1515BBE0;
    }
    goto skip_1;
    // 0x1515BBC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1515BBC4: jal         0x1516972C
    // 0x1515BBC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x1515BBC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1515BBCC: b           L_1515BBE0
    // 0x1515BBD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1515BBE0;
    // 0x1515BBD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1515BBD4:
    // 0x1515BBD4: jal         0x1516972C
    // 0x1515BBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x1515BBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x1515BBDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1515BBE0:
    // 0x1515BBE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1515BBE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1515BBE8: jr          $ra
    // 0x1515BBEC: nop

    return;
    return;
    // 0x1515BBEC: nop

;}
RECOMP_FUNC void func_150335C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150335C8: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x150335CC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150335D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150335D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150335D8: sw          $a1, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r5;
    // 0x150335DC: sw          $a2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r6;
    // 0x150335E0: sw          $a3, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r7;
    // 0x150335E4: lw          $t6, 0x16C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X16C);
    // 0x150335E8: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x150335EC: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x150335F0: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150335F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x150335F8: bne         $t7, $zero, L_15033608
    if (ctx->r15 != 0) {
        // 0x150335FC: nop
    
            goto L_15033608;
    }
    // 0x150335FC: nop

    // 0x15033600: b           L_15033778
    // 0x15033604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15033778;
    // 0x15033604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033608:
    // 0x15033608: jal         0x15083568
    // 0x1503360C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x1503360C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15033610: lw          $v1, 0x174($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X174);
    // 0x15033614: beq         $v0, $zero, L_15033774
    if (ctx->r2 == 0) {
        // 0x15033618: sw          $v0, 0x164($sp)
        MEM_W(0X164, ctx->r29) = ctx->r2;
            goto L_15033774;
    }
    // 0x15033618: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    // 0x1503361C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x15033620: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x15033624: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x15033628: lw          $t8, 0x178($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X178);
    // 0x1503362C: beql        $t8, $zero, L_15033648
    if (ctx->r24 == 0) {
        // 0x15033630: lbu         $t1, 0x16($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X16);
            goto L_15033648;
    }
    goto skip_0;
    // 0x15033630: lbu         $t1, 0x16($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X16);
    skip_0:
    // 0x15033634: lbu         $t9, 0x16($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X16);
    // 0x15033638: andi        $t0, $t9, 0xFFFB
    ctx->r8 = ctx->r25 & 0XFFFB;
    // 0x1503363C: b           L_15033650
    // 0x15033640: sb          $t0, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r8;
        goto L_15033650;
    // 0x15033640: sb          $t0, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r8;
    // 0x15033644: lbu         $t1, 0x16($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X16);
L_15033648:
    // 0x15033648: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x1503364C: sb          $t2, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r10;
L_15033650:
    // 0x15033650: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x15033654: sll         $t5, $v1, 6
    ctx->r13 = S32(ctx->r3 << 6);
    // 0x15033658: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x1503365C: lw          $t4, 0x1D4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1D4);
    // 0x15033660: jal         0x151EFEB8
    // 0x15033664: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x15033664: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    after_1:
    // 0x15033668: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x1503366C: jal         0x15048B10
    // 0x15033670: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    func_15048B10(rdram, ctx);
        goto after_2;
    // 0x15033670: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    after_2:
    // 0x15033674: lwc1        $f0, 0x14C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x15033678: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x1503367C: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    // 0x15033680: lw          $a3, 0xC4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC4);
    // 0x15033684: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x15033688: lwc1        $f6, 0x150($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1503368C: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x15033690: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x15033694: jal         0x150A9B0C
    // 0x15033698: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150A9B0C(rdram, ctx);
        goto after_3;
    // 0x15033698: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x1503369C: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150336A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150336A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150336A8: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x150336AC: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150336B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150336B4: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x150336B8: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x150336BC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150336C0: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x150336C4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x150336C8: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x150336CC: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x150336D0: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x150336D4: swc1        $f18, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f18.u32l;
    // 0x150336D8: jal         0x150A7A48
    // 0x150336DC: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    func_150A7A48(rdram, ctx);
        goto after_4;
    // 0x150336DC: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150336E0: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x150336E4: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x150336E8: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x150336EC: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x150336F0: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x150336F4: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x150336F8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150336FC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15033700: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15033704: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15033708: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1503370C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15033710: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x15033714: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x15033718: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x1503371C: jal         0x1503E5F8
    // 0x15033720: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    func_1503E5F8(rdram, ctx);
        goto after_5;
    // 0x15033720: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x15033724: lw          $t2, 0x17C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X17C);
    // 0x15033728: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1503372C: beql        $t2, $zero, L_15033744
    if (ctx->r10 == 0) {
        // 0x15033730: lwc1        $f4, 0x48($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
            goto L_15033744;
    }
    goto skip_1;
    // 0x15033730: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x15033734: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x15033738: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x1503373C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x15033740: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
L_15033744:
    // 0x15033744: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15033748: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1503374C: lw          $a0, 0x164($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X164);
    // 0x15033750: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x15033754: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x15033758: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x1503375C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15033760: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15033764: jal         0x15030D54
    // 0x15033768: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_15030D54(rdram, ctx);
        goto after_6;
    // 0x15033768: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x1503376C: b           L_15033778
    // 0x15033770: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
        goto L_15033778;
    // 0x15033770: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
L_15033774:
    // 0x15033774: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033778:
    // 0x15033778: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1503377C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15033780: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    // 0x15033784: jr          $ra
    // 0x15033788: nop

    return;
    return;
    // 0x15033788: nop

;}
RECOMP_FUNC void func_15074F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074F48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15074F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15074F50: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15074F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15074F58: lwc1        $f4, -0x5EF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5EF8);
    // 0x15074F5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15074F60: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15074F64: lwc1        $f10, -0x5EF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5EF4);
    // 0x15074F68: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15074F6C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15074F70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15074F74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15074F78: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15074F7C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x15074F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15074F84: jal         0x1505A630
    // 0x15074F88: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15074F88: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x15074F8C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15074F90: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15074F94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15074F98: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15074F9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15074FA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15074FA4: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15074FA8: sh          $v0, 0x76($a1)
    MEM_H(0X76, ctx->r5) = ctx->r2;
    // 0x15074FAC: lwc1        $f4, -0x5EF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5EF0);
    // 0x15074FB0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15074FB4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15074FB8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15074FBC: jal         0x15194408
    // 0x15074FC0: swc1        $f6, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f6.u32l;
    func_15194408(rdram, ctx);
        goto after_1;
    // 0x15074FC0: swc1        $f6, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f6.u32l;
    after_1:
    // 0x15074FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15074FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15074FCC: jr          $ra
    // 0x15074FD0: nop

    return;
    return;
    // 0x15074FD0: nop

;}
RECOMP_FUNC void func_1516FD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516FD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516FD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516FD58: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
    // 0x1516FD5C: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    // 0x1516FD60: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1516FD64: beq         $a1, $zero, L_1516FD9C
    if (ctx->r5 == 0) {
        // 0x1516FD68: nop
    
            goto L_1516FD9C;
    }
    // 0x1516FD68: nop

    // 0x1516FD6C: beq         $v0, $at, L_1516FDD4
    if (ctx->r2 == ctx->r1) {
        // 0x1516FD70: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_1516FDD4;
    }
    // 0x1516FD70: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1516FD74: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1516FD78: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x1516FD7C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1516FD80: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516FD84: bnel        $at, $zero, L_1516FD94
    if (ctx->r1 != 0) {
        // 0x1516FD88: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FD94;
    }
    goto skip_0;
    // 0x1516FD88: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_0:
    // 0x1516FD8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1516FD90: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FD94:
    // 0x1516FD94: b           L_1516FDD4
    // 0x1516FD98: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
        goto L_1516FDD4;
    // 0x1516FD98: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516FD9C:
    // 0x1516FD9C: beq         $v0, $zero, L_1516FDC0
    if (ctx->r2 == 0) {
        // 0x1516FDA0: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1516FDC0;
    }
    // 0x1516FDA0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1516FDA4: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1516FDA8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1516FDAC: subu        $v0, $v0, $t9
    ctx->r2 = SUB32(ctx->r2, ctx->r25);
    // 0x1516FDB0: bgezl       $v0, L_1516FDC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1516FDB4: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FDC0;
    }
    goto skip_1;
    // 0x1516FDB4: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1516FDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516FDBC: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FDC0:
    // 0x1516FDC0: sll         $v1, $v0, 9
    ctx->r3 = S32(ctx->r2 << 9);
    // 0x1516FDC4: sra         $t0, $v1, 8
    ctx->r8 = S32(SIGNED(ctx->r3) >> 8);
    // 0x1516FDC8: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
    // 0x1516FDCC: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x1516FDD0: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516FDD4:
    // 0x1516FDD4: bne         $a1, $zero, L_1516FDEC
    if (ctx->r5 != 0) {
        // 0x1516FDD8: nop
    
            goto L_1516FDEC;
    }
    // 0x1516FDD8: nop

    // 0x1516FDDC: bne         $v0, $zero, L_1516FDEC
    if (ctx->r2 != 0) {
        // 0x1516FDE0: nop
    
            goto L_1516FDEC;
    }
    // 0x1516FDE0: nop

    // 0x1516FDE4: b           L_1516FE0C
    // 0x1516FDE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1516FE0C;
    // 0x1516FDE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1516FDEC:
    // 0x1516FDEC: jal         0x1516F864
    // 0x1516FDF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1516F864(rdram, ctx);
        goto after_0;
    // 0x1516FDF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1516FDF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516FDF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516FDFC: lh          $t1, 0x18($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X18);
    // 0x1516FE00: lb          $t2, 0x2C($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X2C);
    // 0x1516FE04: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1516FE08: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
L_1516FE0C:
    // 0x1516FE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516FE10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516FE14: jr          $ra
    // 0x1516FE18: nop

    return;
    return;
    // 0x1516FE18: nop

;}
RECOMP_FUNC void func_1516C934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516C934: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1516C938: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1516C93C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1516C940: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1516C944: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1516C948: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1516C94C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1516C950: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1516C954: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1516C958: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1516C95C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1516C960: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1516C964: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1516C968: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x1516C96C: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x1516C970: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x1516C974: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x1516C978: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x1516C97C: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x1516C980: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    // 0x1516C984: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1516C988: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516C98C: or          $t0, $s2, $zero
    ctx->r8 = ctx->r18 | 0;
    // 0x1516C990: sw          $s1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r17;
    // 0x1516C994: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x1516C998: lwc1        $f4, 0x50($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X50);
    // 0x1516C99C: lwc1        $f6, 0x30($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X30);
    // 0x1516C9A0: lwc1        $f8, 0x54($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X54);
    // 0x1516C9A4: lwc1        $f10, 0x34($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X34);
    // 0x1516C9A8: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1516C9AC: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1516C9B0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1516C9B4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1516C9B8: addiu       $t7, $t7, 0x59A0
    ctx->r15 = ADD32(ctx->r15, 0X59A0);
    // 0x1516C9BC: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x1516C9C0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1516C9C4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1516C9C8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1516C9CC: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x1516C9D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1516C9D4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1516C9D8: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1516C9DC: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x1516C9E0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x1516C9E4: bne         $s7, $t8, L_1516CA08
    if (ctx->r23 != ctx->r24) {
        // 0x1516C9E8: lui         $at, 0x4580
        ctx->r1 = S32(0X4580 << 16);
            goto L_1516CA08;
    }
    // 0x1516C9E8: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x1516C9EC: lw          $t9, 0x24($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X24);
    // 0x1516C9F0: addu        $v0, $t9, $s3
    ctx->r2 = ADD32(ctx->r25, ctx->r19);
    // 0x1516C9F4: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
L_1516C9F8:
    // 0x1516C9F8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1516C9FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1516CA00: beql        $s7, $t1, L_1516C9F8
    if (ctx->r23 == ctx->r9) {
        // 0x1516CA04: lbu         $t1, 0x1($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X1);
            goto L_1516C9F8;
    }
    goto skip_0;
    // 0x1516CA04: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    skip_0:
L_1516CA08:
    // 0x1516CA08: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1516CA0C: lbu         $fp, 0x133($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X133);
    // 0x1516CA10: lbu         $s5, 0x137($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X137);
    // 0x1516CA14: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
L_1516CA18:
    // 0x1516CA18: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1516CA1C: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1516CA20: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1516CA24: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1516CA28: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1516CA2C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1516CA30: lw          $t5, -0x1638($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1638);
    // 0x1516CA34: lw          $t2, -0x145C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X145C);
    // 0x1516CA38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516CA3C: subu        $t6, $s1, $t5
    ctx->r14 = SUB32(ctx->r17, ctx->r13);
    // 0x1516CA40: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x1516CA44: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1516CA48: beq         $at, $zero, L_1516CA58
    if (ctx->r1 == 0) {
        // 0x1516CA4C: addu        $a0, $s3, $v1
        ctx->r4 = ADD32(ctx->r19, ctx->r3);
            goto L_1516CA58;
    }
    // 0x1516CA4C: addu        $a0, $s3, $v1
    ctx->r4 = ADD32(ctx->r19, ctx->r3);
    // 0x1516CA50: b           L_1516CA58
    // 0x1516CA54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1516CA58;
    // 0x1516CA54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1516CA58:
    // 0x1516CA58: beq         $v0, $zero, L_1516CA68
    if (ctx->r2 == 0) {
        // 0x1516CA5C: addiu       $a1, $sp, 0xA4
        ctx->r5 = ADD32(ctx->r29, 0XA4);
            goto L_1516CA68;
    }
    // 0x1516CA5C: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x1516CA60: b           L_1516CC14
    // 0x1516CA64: lw          $v0, 0x11C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X11C);
        goto L_1516CC14;
    // 0x1516CA64: lw          $v0, 0x11C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X11C);
L_1516CA68:
    // 0x1516CA68: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x1516CA6C: addu        $v0, $s4, $s0
    ctx->r2 = ADD32(ctx->r20, ctx->r16);
    // 0x1516CA70: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1516CA74: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
    // 0x1516CA78: bne         $s7, $v1, L_1516CA88
    if (ctx->r23 != ctx->r3) {
        // 0x1516CA7C: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_1516CA88;
    }
    // 0x1516CA7C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x1516CA80: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x1516CA84: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_1516CA88:
    // 0x1516CA88: bne         $v1, $zero, L_1516CBF0
    if (ctx->r3 != 0) {
        // 0x1516CA8C: addiu       $a2, $sp, 0xA0
        ctx->r6 = ADD32(ctx->r29, 0XA0);
            goto L_1516CBF0;
    }
    // 0x1516CA8C: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x1516CA90: jal         0x150428D4
    // 0x1516CA94: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    func_150428D4(rdram, ctx);
        goto after_0;
    // 0x1516CA94: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    after_0:
    // 0x1516CA98: bne         $s6, $zero, L_1516CAB4
    if (ctx->r22 != 0) {
        // 0x1516CA9C: lw          $t9, 0xA0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XA0);
            goto L_1516CAB4;
    }
    // 0x1516CA9C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x1516CAA0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1516CAA4: nop

    // 0x1516CAA8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1516CAAC: b           L_1516CAB8
    // 0x1516CAB0: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
        goto L_1516CAB8;
    // 0x1516CAB0: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
L_1516CAB4:
    // 0x1516CAB4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_1516CAB8:
    // 0x1516CAB8: lw          $t1, 0x10($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X10);
    // 0x1516CABC: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x1516CAC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1516CAC4: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x1516CAC8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x1516CACC: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x1516CAD0: sll         $t3, $v0, 14
    ctx->r11 = S32(ctx->r2 << 14);
    // 0x1516CAD4: bgez        $t3, L_1516CAF4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1516CAD8: sll         $t6, $v0, 13
        ctx->r14 = S32(ctx->r2 << 13);
            goto L_1516CAF4;
    }
    // 0x1516CAD8: sll         $t6, $v0, 13
    ctx->r14 = S32(ctx->r2 << 13);
    // 0x1516CADC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1516CAE0: lwc1        $f4, 0x30($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X30);
    // 0x1516CAE4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1516CAE8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1516CAEC: b           L_1516CAF8
    // 0x1516CAF0: sub.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f24.fl;
        goto L_1516CAF8;
    // 0x1516CAF0: sub.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f24.fl;
L_1516CAF4:
    // 0x1516CAF4: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
L_1516CAF8:
    // 0x1516CAF8: bgez        $t6, L_1516CB48
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1516CAFC: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_1516CB48;
    }
    // 0x1516CAFC: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x1516CB00: add.s       $f16, $f26, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f26.fl + ctx->f0.fl;
    // 0x1516CB04: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x1516CB08: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1516CB0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1516CB10: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x1516CB14: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1516CB18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1516CB1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516CB20: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x1516CB24: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1516CB28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1516CB2C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1516CB30: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x1516CB34: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x1516CB38: jal         0x150417AC
    // 0x1516CB3C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    func_150417AC(rdram, ctx);
        goto after_1;
    // 0x1516CB3C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    after_1:
    // 0x1516CB40: b           L_1516CBD4
    // 0x1516CB44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1516CBD4;
    // 0x1516CB44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1516CB48:
    // 0x1516CB48: bne         $t9, $zero, L_1516CB94
    if (ctx->r25 != 0) {
        // 0x1516CB4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1516CB94;
    }
    // 0x1516CB4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1516CB50: add.s       $f6, $f26, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f26.fl + ctx->f0.fl;
    // 0x1516CB54: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x1516CB58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1516CB5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516CB60: add.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x1516CB64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1516CB68: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x1516CB6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516CB70: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1516CB74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1516CB78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1516CB7C: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x1516CB80: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x1516CB84: jal         0x150417AC
    // 0x1516CB88: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    func_150417AC(rdram, ctx);
        goto after_2;
    // 0x1516CB88: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    after_2:
    // 0x1516CB8C: b           L_1516CBD4
    // 0x1516CB90: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1516CBD4;
    // 0x1516CB90: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1516CB94:
    // 0x1516CB94: add.s       $f8, $f26, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f26.fl + ctx->f0.fl;
    // 0x1516CB98: lbu         $t1, 0x12B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X12B);
    // 0x1516CB9C: lbu         $t3, 0x12F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X12F);
    // 0x1516CBA0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x1516CBA4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x1516CBA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1516CBAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516CBB0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x1516CBB4: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x1516CBB8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x1516CBBC: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x1516CBC0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x1516CBC4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1516CBC8: jal         0x150417AC
    // 0x1516CBCC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_150417AC(rdram, ctx);
        goto after_3;
    // 0x1516CBCC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_3:
    // 0x1516CBD0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1516CBD4:
    // 0x1516CBD4: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1516CBD8: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1516CBDC: nop

    // 0x1516CBE0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1516CBE4: add.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f16.fl;
    // 0x1516CBE8: b           L_1516CBF8
    // 0x1516CBEC: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
        goto L_1516CBF8;
    // 0x1516CBEC: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
L_1516CBF0:
    // 0x1516CBF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1516CBF4: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
L_1516CBF8:
    // 0x1516CBF8: addu        $t5, $s3, $v1
    ctx->r13 = ADD32(ctx->r19, ctx->r3);
    // 0x1516CBFC: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
    // 0x1516CC00: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1516CC04: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x1516CC08: bne         $t6, $zero, L_1516CA18
    if (ctx->r14 != 0) {
        // 0x1516CC0C: nop
    
            goto L_1516CA18;
    }
    // 0x1516CC0C: nop

    // 0x1516CC10: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1516CC14:
    // 0x1516CC14: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x1516CC18: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x1516CC1C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x1516CC20: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x1516CC24: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x1516CC28: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x1516CC2C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1516CC30: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1516CC34: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1516CC38: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1516CC3C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1516CC40: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1516CC44: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1516CC48: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1516CC4C: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1516CC50: jr          $ra
    // 0x1516CC54: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x1516CC54: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_1000E0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E0F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000E0FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000E100: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x1000E104: jal         0x1000B1FC
    // 0x1000E108: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000E108: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1000E10C: beq         $v0, $zero, L_1000E128
    if (ctx->r2 == 0) {
        // 0x1000E110: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1000E128;
    }
    // 0x1000E110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000E114: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x1000E118: bnel        $t7, $zero, L_1000E12C
    if (ctx->r15 != 0) {
        // 0x1000E11C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000E12C;
    }
    goto skip_0;
    // 0x1000E11C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1000E120: b           L_1000E12C
    // 0x1000E124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E12C;
    // 0x1000E124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E128:
    // 0x1000E128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000E12C:
    // 0x1000E12C: jr          $ra
    // 0x1000E130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1000E130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151411C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151411C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151411C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151411CC: jal         0x1513CAA0
    // 0x151411D0: nop

    func_1513CAA0(rdram, ctx);
        goto after_0;
    // 0x151411D0: nop

    after_0:
    // 0x151411D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151411D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151411DC: jr          $ra
    // 0x151411E0: nop

    return;
    return;
    // 0x151411E0: nop

;}
RECOMP_FUNC void func_150D4D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D4D58: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x150D4D5C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150D4D60: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150D4D64: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150D4D68: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x150D4D6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D4D70: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x150D4D74: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150D4D78: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150D4D7C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150D4D80: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150D4D84: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150D4D88: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150D4D8C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150D4D90: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150D4D94: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150D4D98: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150D4D9C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150D4DA0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150D4DA4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150D4DA8: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x150D4DAC: jal         0x150ADA20
    // 0x150D4DB0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150D4DB0: nop

    after_0:
    // 0x150D4DB4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150D4DB8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D4DBC: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x150D4DC0: addiu       $t6, $zero, 0x2203
    ctx->r14 = ADD32(0, 0X2203);
    // 0x150D4DC4: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x150D4DC8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150D4DCC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150D4DD0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150D4DD4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150D4DD8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150D4DDC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150D4DE0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150D4DE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150D4DE8: sh          $t6, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r14;
    // 0x150D4DEC: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x150D4DF0: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x150D4DF4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150D4DF8: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150D4DFC: sb          $t8, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r24;
    // 0x150D4E00: sb          $t9, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r25;
    // 0x150D4E04: sb          $t0, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r8;
    // 0x150D4E08: sb          $t1, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r9;
    // 0x150D4E0C: sb          $t2, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r10;
    // 0x150D4E10: sb          $t3, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r11;
    // 0x150D4E14: sb          $t4, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r12;
    // 0x150D4E18: sb          $t5, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r13;
    // 0x150D4E1C: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x150D4E20: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x150D4E24: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150D4E28: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150D4E2C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x150D4E30: addiu       $t1, $t1, 0x5480
    ctx->r9 = ADD32(ctx->r9, 0X5480);
    // 0x150D4E34: addiu       $t0, $sp, 0xD4
    ctx->r8 = ADD32(ctx->r29, 0XD4);
    // 0x150D4E38: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150D4E3C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x150D4E40: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150D4E44: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x150D4E48: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150D4E4C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150D4E50: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150D4E54: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150D4E58: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150D4E5C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150D4E60: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x150D4E64: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150D4E68: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150D4E6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D4E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D4E74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D4E78: lwc1        $f6, 0xA18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XA18);
    // 0x150D4E7C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D4E80: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150D4E84: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x150D4E88: lui         $at, 0x4347
    ctx->r1 = S32(0X4347 << 16);
    // 0x150D4E8C: sh          $t5, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r13;
    // 0x150D4E90: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150D4E94: sh          $t8, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r24;
    // 0x150D4E98: lui         $at, 0x4369
    ctx->r1 = S32(0X4369 << 16);
    // 0x150D4E9C: sb          $t9, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r25;
    // 0x150D4EA0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D4EA4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150D4EA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D4EAC: mfhi        $s2
    ctx->r18 = hi;
    // 0x150D4EB0: mfc1        $s4, $f10
    ctx->r20 = (int32_t)ctx->f10.u32l;
    // 0x150D4EB4: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x150D4EB8: sb          $t3, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = ctx->r11;
    // 0x150D4EBC: sll         $t5, $s4, 16
    ctx->r13 = S32(ctx->r20 << 16);
    // 0x150D4EC0: sra         $t8, $t5, 16
    ctx->r24 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150D4EC4: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x150D4EC8: addiu       $s4, $t9, 0x40
    ctx->r20 = ADD32(ctx->r25, 0X40);
    // 0x150D4ECC: lwc1        $f24, 0xA1C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0XA1C);
    // 0x150D4ED0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150D4ED4: ori         $t6, $t6, 0xC207
    ctx->r14 = ctx->r14 | 0XC207;
    // 0x150D4ED8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150D4EDC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150D4EE0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150D4EE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D4EE8: sll         $t3, $s4, 16
    ctx->r11 = S32(ctx->r20 << 16);
    // 0x150D4EEC: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x150D4EF0: addiu       $s2, $s2, 0xA
    ctx->r18 = ADD32(ctx->r18, 0XA);
    // 0x150D4EF4: sh          $t7, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r15;
    // 0x150D4EF8: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
    // 0x150D4EFC: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x150D4F00: sb          $t2, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r10;
    // 0x150D4F04: sb          $t0, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r8;
    // 0x150D4F08: sb          $zero, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = 0;
    // 0x150D4F0C: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x150D4F10: sb          $t1, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r9;
    // 0x150D4F14: addiu       $s6, $s6, 0x9C0
    ctx->r22 = ADD32(ctx->r22, 0X9C0);
    // 0x150D4F18: sra         $s4, $t3, 16
    ctx->r20 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150D4F1C: lwc1        $f22, 0xA20($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XA20);
    // 0x150D4F20: lw          $s5, 0x118($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X118);
    // 0x150D4F24: addiu       $fp, $zero, 0x9C
    ctx->r30 = ADD32(0, 0X9C);
    // 0x150D4F28: addiu       $s7, $zero, 0x12
    ctx->r23 = ADD32(0, 0X12);
    // 0x150D4F2C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
L_150D4F30:
    // 0x150D4F30: jal         0x150ADA68
    // 0x150D4F34: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150D4F34: nop

    after_1:
    // 0x150D4F38: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150D4F3C: jal         0x150ADA20
    // 0x150D4F40: add.s       $f20, $f16, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f24.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150D4F40: add.s       $f20, $f16, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f24.fl;
    after_2:
    // 0x150D4F44: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x150D4F48: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x150D4F4C: addu        $t4, $s6, $t1
    ctx->r12 = ADD32(ctx->r22, ctx->r9);
    // 0x150D4F50: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x150D4F54: jal         0x150ADA20
    // 0x150D4F58: sb          $t5, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150D4F58: sb          $t5, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r13;
    after_3:
    // 0x150D4F5C: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x150D4F60: mfhi        $t8
    ctx->r24 = hi;
    // 0x150D4F64: addiu       $t7, $t8, 0x1B
    ctx->r15 = ADD32(ctx->r24, 0X1B);
    // 0x150D4F68: bne         $s7, $zero, L_150D4F74
    if (ctx->r23 != 0) {
        // 0x150D4F6C: nop
    
            goto L_150D4F74;
    }
    // 0x150D4F6C: nop

    // 0x150D4F70: break       7
    do_break(353193840);
L_150D4F74:
    // 0x150D4F74: sh          $t7, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r15;
    // 0x150D4F78: jal         0x150ADA20
    // 0x150D4F7C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150D4F7C: nop

    after_4:
    // 0x150D4F80: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x150D4F84: mfhi        $t6
    ctx->r14 = hi;
    // 0x150D4F88: addiu       $t9, $t6, 0x64
    ctx->r25 = ADD32(ctx->r14, 0X64);
    // 0x150D4F8C: bne         $fp, $zero, L_150D4F98
    if (ctx->r30 != 0) {
        // 0x150D4F90: nop
    
            goto L_150D4F98;
    }
    // 0x150D4F90: nop

    // 0x150D4F94: break       7
    do_break(353193876);
L_150D4F98:
    // 0x150D4F98: sb          $t9, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r25;
    // 0x150D4F9C: jal         0x150ADA68
    // 0x150D4FA0: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150D4FA0: nop

    after_5:
    // 0x150D4FA4: mul.s       $f18, $f0, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150D4FA8: add.s       $f2, $f18, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x150D4FAC: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x150D4FB0: jal         0x150ADA20
    // 0x150D4FB4: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150D4FB4: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x150D4FB8: jal         0x150ADA20
    // 0x150D4FBC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150D4FBC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x150D4FC0: jal         0x150ADA68
    // 0x150D4FC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150D4FC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x150D4FC8: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x150D4FCC: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150D4FD0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x150D4FD4: mfhi        $t3
    ctx->r11 = hi;
    // 0x150D4FD8: mul.s       $f4, $f0, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150D4FDC: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    // 0x150D4FE0: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150D4FE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150D4FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D4FEC: mfhi        $a1
    ctx->r5 = hi;
    // 0x150D4FF0: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x150D4FF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150D4FF8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x150D4FFC: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x150D5000: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150D5004: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150D5008: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150D500C: jal         0x15143794
    // 0x150D5010: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    func_15143794(rdram, ctx);
        goto after_9;
    // 0x150D5010: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    after_9:
    // 0x150D5014: lwc1        $f16, 0x0($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X0);
    // 0x150D5018: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x150D501C: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150D5020: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x150D5024: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x150D5028: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x150D502C: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150D5030: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150D5034: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x150D5038: jal         0x150ADA68
    // 0x150D503C: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150D503C: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x150D5040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D5044: lwc1        $f18, 0xA24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XA24);
    // 0x150D5048: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D504C: lwc1        $f8, 0xA28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA28);
    // 0x150D5050: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150D5054: lw          $t5, 0xF0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF0);
    // 0x150D5058: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x150D505C: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x150D5060: sw          $t8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r24;
    // 0x150D5064: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150D5068: jal         0x150ADA20
    // 0x150D506C: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150D506C: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x150D5070: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150D5074: beq         $t7, $zero, L_150D5084
    if (ctx->r15 == 0) {
        // 0x150D5078: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150D5084;
    }
    // 0x150D5078: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150D507C: b           L_150D5084
    // 0x150D5080: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_150D5084;
    // 0x150D5080: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_150D5084:
    // 0x150D5084: jal         0x150ADA20
    // 0x150D5088: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150D5088: nop

    after_12:
    // 0x150D508C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x150D5090: beq         $t6, $zero, L_150D50A0
    if (ctx->r14 == 0) {
        // 0x150D5094: lw          $t9, 0xF0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XF0);
            goto L_150D50A0;
    }
    // 0x150D5094: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x150D5098: b           L_150D50A4
    // 0x150D509C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_150D50A4;
    // 0x150D509C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_150D50A0:
    // 0x150D50A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_150D50A4:
    // 0x150D50A4: lbu         $t0, 0x117($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X117);
    // 0x150D50A8: or          $t3, $s0, $s1
    ctx->r11 = ctx->r16 | ctx->r17;
    // 0x150D50AC: or          $t2, $t9, $t3
    ctx->r10 = ctx->r25 | ctx->r11;
    // 0x150D50B0: sw          $t2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r10;
    // 0x150D50B4: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150D50B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150D50BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D50C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D50C4: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x150D50C8: jal         0x15130280
    // 0x150D50CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15130280(rdram, ctx);
        goto after_13;
    // 0x150D50CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_13:
    // 0x150D50D0: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150D50D4: bgtz        $s2, L_150D4F30
    if (SIGNED(ctx->r18) > 0) {
        // 0x150D50D8: nop
    
            goto L_150D4F30;
    }
    // 0x150D50D8: nop

    // 0x150D50DC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150D50E0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150D50E4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150D50E8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150D50EC: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150D50F0: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150D50F4: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150D50F8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150D50FC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150D5100: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150D5104: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150D5108: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150D510C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150D5110: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150D5114: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150D5118: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150D511C: jr          $ra
    // 0x150D5120: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x150D5120: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_150B3E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B3E74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150B3E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B3E7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150B3E80: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150B3E84: addiu       $t7, $zero, 0xFA0
    ctx->r15 = ADD32(0, 0XFA0);
    // 0x150B3E88: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    // 0x150B3E8C: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x150B3E90: lwc1        $f8, 0x14($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X14);
    // 0x150B3E94: lwc1        $f16, 0x18($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X18);
    // 0x150B3E98: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B3E9C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150B3EA0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B3EA4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150B3EA8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150B3EAC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150B3EB0: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150B3EB4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B3EB8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150B3EBC: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x150B3EC0: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150B3EC4: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x150B3EC8: jal         0x1000FC18
    // 0x150B3ECC: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    func_1000FC18(rdram, ctx);
        goto after_0;
    // 0x150B3ECC: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    after_0:
    // 0x150B3ED0: jal         0x151478F4
    // 0x150B3ED4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x150B3ED4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x150B3ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B3EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150B3EE0: jr          $ra
    // 0x150B3EE4: nop

    return;
    return;
    // 0x150B3EE4: nop

;}
RECOMP_FUNC void func_150843AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150843AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150843B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150843B4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150843B8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150843BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150843C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150843C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150843C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150843CC: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x150843D0: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x150843D4: lw          $t7, 0x28C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28C);
    // 0x150843D8: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x150843DC: addu        $s0, $a0, $t1
    ctx->r16 = ADD32(ctx->r4, ctx->r9);
    // 0x150843E0: bne         $t7, $zero, L_150843F4
    if (ctx->r15 != 0) {
        // 0x150843E4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150843F4;
    }
    // 0x150843E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150843E8: lw          $t8, 0x290($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X290);
    // 0x150843EC: beql        $t8, $zero, L_15084468
    if (ctx->r24 == 0) {
        // 0x150843F0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15084468;
    }
    goto skip_0;
    // 0x150843F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_150843F4:
    // 0x150843F4: lw          $t9, 0x2C4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2C4);
    // 0x150843F8: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x150843FC: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x15084400: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x15084404: lbu         $s2, 0x0($t0)
    ctx->r18 = MEM_BU(ctx->r8, 0X0);
    // 0x15084408: addiu       $s4, $s4, 0x19A0
    ctx->r20 = ADD32(ctx->r20, 0X19A0);
    // 0x1508440C: addiu       $s5, $s5, 0x1F80
    ctx->r21 = ADD32(ctx->r21, 0X1F80);
    // 0x15084410: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_15084414:
    // 0x15084414: lw          $a0, 0x28C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28C);
    // 0x15084418: sll         $t2, $s2, 2
    ctx->r10 = S32(ctx->r18 << 2);
    // 0x1508441C: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x15084420: beql        $a0, $zero, L_1508445C
    if (ctx->r4 == 0) {
        // 0x15084424: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_1508445C;
    }
    goto skip_1;
    // 0x15084424: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_1:
    // 0x15084428: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1508442C: addu        $v0, $s5, $s2
    ctx->r2 = ADD32(ctx->r21, ctx->r18);
    // 0x15084430: beql        $a0, $t4, L_1508444C
    if (ctx->r4 == ctx->r12) {
        // 0x15084434: lbu         $t5, 0x0($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X0);
            goto L_1508444C;
    }
    goto skip_2;
    // 0x15084434: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    skip_2:
    // 0x15084438: jal         0x100043B4
    // 0x1508443C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1508443C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x15084440: b           L_15084458
    // 0x15084444: sw          $zero, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = 0;
        goto L_15084458;
    // 0x15084444: sw          $zero, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = 0;
    // 0x15084448: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
L_1508444C:
    // 0x1508444C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x15084450: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x15084454: sw          $zero, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = 0;
L_15084458:
    // 0x15084458: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_1508445C:
    // 0x1508445C: bne         $s1, $s3, L_15084414
    if (ctx->r17 != ctx->r19) {
        // 0x15084460: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15084414;
    }
    // 0x15084460: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15084464: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15084468:
    // 0x15084468: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1508446C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15084470: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15084474: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15084478: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1508447C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15084480: jr          $ra
    // 0x15084484: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15084484: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15044DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15044DEC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15044DF0: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15044DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044DF8: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x15044DFC: bnel        $t6, $zero, L_15044E34
    if (ctx->r14 != 0) {
        // 0x15044E00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044E34;
    }
    goto skip_0;
    // 0x15044E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15044E04: lbu         $t7, 0x125($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X125);
    // 0x15044E08: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15044E0C: bnel        $t7, $zero, L_15044E34
    if (ctx->r15 != 0) {
        // 0x15044E10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044E34;
    }
    goto skip_1;
    // 0x15044E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15044E14: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x15044E18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15044E1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15044E20: beq         $t8, $at, L_15044E30
    if (ctx->r24 == ctx->r1) {
        // 0x15044E24: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_15044E30;
    }
    // 0x15044E24: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15044E28: jal         0x1505D024
    // 0x15044E2C: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x15044E2C: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    after_0:
L_15044E30:
    // 0x15044E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15044E34:
    // 0x15044E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15044E38: jr          $ra
    // 0x15044E3C: nop

    return;
    return;
    // 0x15044E3C: nop

;}
RECOMP_FUNC void func_15012780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15012780: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15012784: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15012788: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1501278C: sb          $zero, -0x2BE8($at)
    MEM_B(-0X2BE8, ctx->r1) = 0;
    // 0x15012790: addiu       $v0, $v0, -0x2BE8
    ctx->r2 = ADD32(ctx->r2, -0X2BE8);
    // 0x15012794: addiu       $v1, $v1, -0x2BF0
    ctx->r3 = ADD32(ctx->r3, -0X2BF0);
L_15012798:
    // 0x15012798: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1501279C: bne         $v1, $v0, L_15012798
    if (ctx->r3 != ctx->r2) {
        // 0x150127A0: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_15012798;
    }
    // 0x150127A0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x150127A4: jr          $ra
    // 0x150127A8: nop

    return;
    return;
    // 0x150127A8: nop

;}
RECOMP_FUNC void func_1514FEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514FEFC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1514FF00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514FF04: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1514FF08: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1514FF0C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1514FF10: jal         0x1514F640
    // 0x1514FF14: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_1514F640(rdram, ctx);
        goto after_0;
    // 0x1514FF14: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x1514FF18: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x1514FF1C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1514FF20: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1514FF24: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x1514FF28: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x1514FF2C: jal         0x1514FF44
    // 0x1514FF30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1514FF44(rdram, ctx);
        goto after_1;
    // 0x1514FF30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x1514FF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514FF38: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1514FF3C: jr          $ra
    // 0x1514FF40: nop

    return;
    return;
    // 0x1514FF40: nop

;}
RECOMP_FUNC void func_150FA1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FA1B8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150FA1BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150FA1C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FA1C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FA1C8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x150FA1CC: addiu       $t3, $s0, 0x28
    ctx->r11 = ADD32(ctx->r16, 0X28);
    // 0x150FA1D0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150FA1D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x150FA1D8: beq         $t6, $zero, L_150FA1F0
    if (ctx->r14 == 0) {
        // 0x150FA1DC: nop
    
            goto L_150FA1F0;
    }
    // 0x150FA1DC: nop

    // 0x150FA1E0: lbu         $t7, 0x4($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X4);
    // 0x150FA1E4: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x150FA1E8: beql        $t7, $t8, L_150FA1FC
    if (ctx->r15 == ctx->r24) {
        // 0x150FA1EC: lw          $t4, 0x1D4($v0)
        ctx->r12 = MEM_W(ctx->r2, 0X1D4);
            goto L_150FA1FC;
    }
    goto skip_0;
    // 0x150FA1EC: lw          $t4, 0x1D4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_150FA1F0:
    // 0x150FA1F0: b           L_150FA454
    // 0x150FA1F4: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
        goto L_150FA454;
    // 0x150FA1F4: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x150FA1F8: lw          $t4, 0x1D4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X1D4);
L_150FA1FC:
    // 0x150FA1FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FA200: addiu       $a3, $zero, -0x3
    ctx->r7 = ADD32(0, -0X3);
    // 0x150FA204: beq         $t4, $zero, L_150FA36C
    if (ctx->r12 == 0) {
        // 0x150FA208: addiu       $a2, $zero, -0x2
        ctx->r6 = ADD32(0, -0X2);
            goto L_150FA36C;
    }
    // 0x150FA208: addiu       $a2, $zero, -0x2
    ctx->r6 = ADD32(0, -0X2);
    // 0x150FA20C: addiu       $t0, $sp, 0x88
    ctx->r8 = ADD32(ctx->r29, 0X88);
    // 0x150FA210: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x150FA214: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FA218: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150FA21C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FA220: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150FA224: addiu       $t5, $t5, 0x1CCC
    ctx->r13 = ADD32(ctx->r13, 0X1CCC);
    // 0x150FA228: addiu       $t6, $t6, 0x1CD8
    ctx->r14 = ADD32(ctx->r14, 0X1CD8);
    // 0x150FA22C: addiu       $t7, $t7, 0x1CE4
    ctx->r15 = ADD32(ctx->r15, 0X1CE4);
    // 0x150FA230: addiu       $t8, $t8, 0x1CF0
    ctx->r24 = ADD32(ctx->r24, 0X1CF0);
    // 0x150FA234: addiu       $t9, $sp, 0x94
    ctx->r25 = ADD32(ctx->r29, 0X94);
    // 0x150FA238: addiu       $t4, $sp, 0x7C
    ctx->r12 = ADD32(ctx->r29, 0X7C);
    // 0x150FA23C: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x150FA240: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x150FA244: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x150FA248: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x150FA24C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x150FA250: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x150FA254: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x150FA258: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x150FA25C: lw          $a2, 0x1D4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D4);
    // 0x150FA260: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150FA264: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x150FA268: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x150FA26C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150FA270: jal         0x15145EA4
    // 0x150FA274: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150FA274: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    after_0:
    // 0x150FA278: addiu       $t0, $sp, 0x88
    ctx->r8 = ADD32(ctx->r29, 0X88);
    // 0x150FA27C: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x150FA280: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x150FA284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150FA288: addiu       $t2, $zero, -0x5
    ctx->r10 = ADD32(0, -0X5);
    // 0x150FA28C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_150FA290:
    // 0x150FA290: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x150FA294: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    // 0x150FA298: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x150FA29C: beql        $a2, $zero, L_150FA2F4
    if (ctx->r6 == 0) {
        // 0x150FA2A0: lw          $a2, 0x10($a1)
        ctx->r6 = MEM_W(ctx->r5, 0X10);
            goto L_150FA2F4;
    }
    goto skip_1;
    // 0x150FA2A0: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    skip_1:
    // 0x150FA2A4: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150FA2A8: lbu         $t6, 0x168($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X168);
    // 0x150FA2AC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x150FA2B0: sb          $t7, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r15;
    // 0x150FA2B4: mflo        $v1
    ctx->r3 = lo;
    // 0x150FA2B8: addu        $t8, $t0, $v1
    ctx->r24 = ADD32(ctx->r8, ctx->r3);
    // 0x150FA2BC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150FA2C0: addu        $t5, $t1, $v1
    ctx->r13 = ADD32(ctx->r9, ctx->r3);
    // 0x150FA2C4: sw          $at, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r1;
    // 0x150FA2C8: lw          $t4, 0x4($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X4);
    // 0x150FA2CC: sw          $t4, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r12;
    // 0x150FA2D0: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150FA2D4: sw          $at, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r1;
    // 0x150FA2D8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FA2DC: sw          $at, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r1;
    // 0x150FA2E0: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x150FA2E4: sw          $t7, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r15;
    // 0x150FA2E8: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FA2EC: sw          $at, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r1;
    // 0x150FA2F0: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
L_150FA2F4:
    // 0x150FA2F4: beql        $a2, $zero, L_150FA354
    if (ctx->r6 == 0) {
        // 0x150FA2F8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_150FA354;
    }
    goto skip_2;
    // 0x150FA2F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x150FA2FC: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150FA300: lw          $t9, 0x58($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X58);
    // 0x150FA304: ori         $t8, $t9, 0x2
    ctx->r24 = ctx->r25 | 0X2;
    // 0x150FA308: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x150FA30C: and         $t6, $t8, $t2
    ctx->r14 = ctx->r24 & ctx->r10;
    // 0x150FA310: sw          $t6, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r14;
    // 0x150FA314: mflo        $v1
    ctx->r3 = lo;
    // 0x150FA318: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x150FA31C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FA320: addu        $t8, $t1, $v1
    ctx->r24 = ADD32(ctx->r9, ctx->r3);
    // 0x150FA324: sw          $at, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r1;
    // 0x150FA328: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x150FA32C: sw          $t9, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r25;
    // 0x150FA330: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FA334: sw          $at, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r1;
    // 0x150FA338: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150FA33C: sw          $at, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r1;
    // 0x150FA340: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x150FA344: sw          $t6, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r14;
    // 0x150FA348: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150FA34C: sw          $at, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r1;
    // 0x150FA350: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150FA354:
    // 0x150FA354: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150FA358: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x150FA35C: bne         $at, $zero, L_150FA290
    if (ctx->r1 != 0) {
        // 0x150FA360: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_150FA290;
    }
    // 0x150FA360: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x150FA364: b           L_150FA3BC
    // 0x150FA368: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
        goto L_150FA3BC;
    // 0x150FA368: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
L_150FA36C:
    // 0x150FA36C: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x150FA370: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x150FA374: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x150FA378: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x150FA37C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x150FA380: beq         $a0, $zero, L_150FA398
    if (ctx->r4 == 0) {
        // 0x150FA384: slti        $at, $t7, 0x2
        ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
            goto L_150FA398;
    }
    // 0x150FA384: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x150FA388: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150FA38C: lbu         $t9, 0x58($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X58);
    // 0x150FA390: and         $t4, $t9, $a2
    ctx->r12 = ctx->r25 & ctx->r6;
    // 0x150FA394: sb          $t4, 0x58($v0)
    MEM_B(0X58, ctx->r2) = ctx->r12;
L_150FA398:
    // 0x150FA398: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x150FA39C: beq         $v0, $zero, L_150FA3B0
    if (ctx->r2 == 0) {
        // 0x150FA3A0: nop
    
            goto L_150FA3B0;
    }
    // 0x150FA3A0: nop

    // 0x150FA3A4: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x150FA3A8: and         $t6, $t8, $a3
    ctx->r14 = ctx->r24 & ctx->r7;
    // 0x150FA3AC: sw          $t6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r14;
L_150FA3B0:
    // 0x150FA3B0: bne         $at, $zero, L_150FA36C
    if (ctx->r1 != 0) {
        // 0x150FA3B4: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_150FA36C;
    }
    // 0x150FA3B4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150FA3B8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
L_150FA3BC:
    // 0x150FA3BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150FA3C0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150FA3C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150FA3C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA3CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150FA3D0: lwc1        $f2, 0x1D94($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1D94);
    // 0x150FA3D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150FA3D8:
    // 0x150FA3D8: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x150FA3DC: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    // 0x150FA3E0: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x150FA3E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150FA3E8: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150FA3EC: beql        $v1, $zero, L_150FA420
    if (ctx->r3 == 0) {
        // 0x150FA3F0: lw          $v1, 0x10($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X10);
            goto L_150FA420;
    }
    goto skip_3;
    // 0x150FA3F0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    skip_3:
    // 0x150FA3F4: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    // 0x150FA3F8: addiu       $v0, $v1, 0x110
    ctx->r2 = ADD32(ctx->r3, 0X110);
    // 0x150FA3FC: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x150FA400: beql        $at, $zero, L_150FA418
    if (ctx->r1 == 0) {
        // 0x150FA404: swc1        $f12, 0x48($v0)
        MEM_W(0X48, ctx->r2) = ctx->f12.u32l;
            goto L_150FA418;
    }
    goto skip_4;
    // 0x150FA404: swc1        $f12, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f12.u32l;
    skip_4:
    // 0x150FA408: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x150FA40C: b           L_150FA41C
    // 0x150FA410: swc1        $f0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f0.u32l;
        goto L_150FA41C;
    // 0x150FA410: swc1        $f0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f0.u32l;
    // 0x150FA414: swc1        $f12, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f12.u32l;
L_150FA418:
    // 0x150FA418: swc1        $f14, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f14.u32l;
L_150FA41C:
    // 0x150FA41C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
L_150FA420:
    // 0x150FA420: beql        $v1, $zero, L_150FA44C
    if (ctx->r3 == 0) {
        // 0x150FA424: slti        $at, $t8, 0x2
        ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
            goto L_150FA44C;
    }
    goto skip_5;
    // 0x150FA424: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    skip_5:
    // 0x150FA428: lh          $t4, 0xE($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE);
    // 0x150FA42C: addiu       $v0, $v1, 0x170
    ctx->r2 = ADD32(ctx->r3, 0X170);
    // 0x150FA430: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x150FA434: beql        $at, $zero, L_150FA448
    if (ctx->r1 == 0) {
        // 0x150FA438: swc1        $f2, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
            goto L_150FA448;
    }
    goto skip_6;
    // 0x150FA438: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    skip_6:
    // 0x150FA43C: b           L_150FA448
    // 0x150FA440: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_150FA448;
    // 0x150FA440: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x150FA444: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
L_150FA448:
    // 0x150FA448: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
L_150FA44C:
    // 0x150FA44C: bne         $at, $zero, L_150FA3D8
    if (ctx->r1 != 0) {
        // 0x150FA450: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_150FA3D8;
    }
    // 0x150FA450: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_150FA454:
    // 0x150FA454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FA458: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150FA45C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150FA460: jr          $ra
    // 0x150FA464: nop

    return;
    return;
    // 0x150FA464: nop

;}
RECOMP_FUNC void func_1500310C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500310C: jr          $ra
    // 0x15003110: nop

    return;
    return;
    // 0x15003110: nop

;}
RECOMP_FUNC void func_15125608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125608: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1512560C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15125610: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x15125614: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15125618: swc1        $f4, 0x24C($a0)
    MEM_W(0X24C, ctx->r4) = ctx->f4.u32l;
    // 0x1512561C: swc1        $f6, 0x250($a0)
    MEM_W(0X250, ctx->r4) = ctx->f6.u32l;
    // 0x15125620: jr          $ra
    // 0x15125624: nop

    return;
    return;
    // 0x15125624: nop

;}
RECOMP_FUNC void func_150C851C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C851C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150C8520: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150C8524: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150C8528: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150C852C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150C8530: addiu       $s4, $s4, -0x1B20
    ctx->r20 = ADD32(ctx->r20, -0X1B20);
    // 0x150C8534: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150C8538: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150C853C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150C8540: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150C8544: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150C8548: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x150C854C: beql        $t6, $zero, L_150C85E0
    if (ctx->r14 == 0) {
        // 0x150C8550: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150C85E0;
    }
    goto skip_0;
    // 0x150C8550: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150C8554: jal         0x150CDB6C
    // 0x150C8558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150CDB6C(rdram, ctx);
        goto after_0;
    // 0x150C8558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x150C855C: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x150C8560: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x150C8564: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x150C8568: sll         $s3, $s1, 2
    ctx->r19 = S32(ctx->r17 << 2);
    // 0x150C856C: subu        $s3, $s3, $s1
    ctx->r19 = SUB32(ctx->r19, ctx->r17);
    // 0x150C8570: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x150C8574: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x150C8578: sll         $s3, $s3, 3
    ctx->r19 = S32(ctx->r19 << 3);
    // 0x150C857C: addu        $s3, $s3, $s1
    ctx->r19 = ADD32(ctx->r19, ctx->r17);
    // 0x150C8580: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x150C8584: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x150C8588: sll         $s3, $s3, 1
    ctx->r19 = S32(ctx->r19 << 1);
    // 0x150C858C: sra         $t7, $s3, 8
    ctx->r15 = S32(SIGNED(ctx->r19) >> 8);
    // 0x150C8590: sra         $t8, $s2, 8
    ctx->r24 = S32(SIGNED(ctx->r18) >> 8);
    // 0x150C8594: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x150C8598: addiu       $s3, $t7, 0x32
    ctx->r19 = ADD32(ctx->r15, 0X32);
    // 0x150C859C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150C85A0: addiu       $s5, $zero, 0x64
    ctx->r21 = ADD32(0, 0X64);
L_150C85A4:
    // 0x150C85A4: jal         0x150ADA20
    // 0x150C85A8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150C85A8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    after_1:
    // 0x150C85AC: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x150C85B0: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x150C85B4: mfhi        $t9
    ctx->r25 = hi;
    // 0x150C85B8: addu        $s1, $s2, $t9
    ctx->r17 = ADD32(ctx->r18, ctx->r25);
    // 0x150C85BC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x150C85C0: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x150C85C4: bne         $s3, $zero, L_150C85D0
    if (ctx->r19 != 0) {
        // 0x150C85C8: nop
    
            goto L_150C85D0;
    }
    // 0x150C85C8: nop

    // 0x150C85CC: break       7
    do_break(353142220);
L_150C85D0:
    // 0x150C85D0: sh          $s1, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r17;
    // 0x150C85D4: bne         $s0, $s5, L_150C85A4
    if (ctx->r16 != ctx->r21) {
        // 0x150C85D8: nop
    
            goto L_150C85A4;
    }
    // 0x150C85D8: nop

    // 0x150C85DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150C85E0:
    // 0x150C85E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150C85E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150C85E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150C85EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150C85F0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150C85F4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150C85F8: jr          $ra
    // 0x150C85FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150C85FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1502C974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502C974: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1502C978: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1502C97C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1502C980: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1502C984: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1502C988: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1502C98C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502C990: lbu         $t7, 0x3638($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3638);
    // 0x1502C994: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1502C998: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502C99C: beq         $t7, $zero, L_1502C9F4
    if (ctx->r15 == 0) {
        // 0x1502C9A0: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_1502C9F4;
    }
    // 0x1502C9A0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1502C9A4: lbu         $t8, 0x3656($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3656);
    // 0x1502C9A8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1502C9AC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1502C9B0: bne         $t8, $zero, L_1502C9F4
    if (ctx->r24 != 0) {
        // 0x1502C9B4: sll         $t0, $t9, 2
        ctx->r8 = S32(ctx->r25 << 2);
            goto L_1502C9F4;
    }
    // 0x1502C9B4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1502C9B8: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1502C9BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1502C9C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1502C9C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1502C9C8: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1502C9CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1502C9D0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1502C9D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1502C9D8: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1502C9DC: jal         0x150229E4
    // 0x1502C9E0: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    func_150229E4(rdram, ctx);
        goto after_0;
    // 0x1502C9E0: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x1502C9E4: bnel        $v0, $zero, L_1502C9F8
    if (ctx->r2 != 0) {
        // 0x1502C9E8: lw          $t4, 0x5C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X5C);
            goto L_1502C9F8;
    }
    goto skip_0;
    // 0x1502C9E8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x1502C9EC: b           L_1502CC24
    // 0x1502C9F0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
        goto L_1502CC24;
    // 0x1502C9F0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_1502C9F4:
    // 0x1502C9F4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
L_1502C9F8:
    // 0x1502C9F8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1502C9FC: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x1502CA00: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1502CA04: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1502CA08: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502CA0C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1502CA10: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502CA14: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1502CA18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502CA1C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1502CA20: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502CA24: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x1502CA28: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
    // 0x1502CA2C: lbu         $t7, 0x74($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X74);
    // 0x1502CA30: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1502CA34: sllv        $v0, $t3, $t2
    ctx->r2 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x1502CA38: and         $t8, $t7, $v0
    ctx->r24 = ctx->r15 & ctx->r2;
    // 0x1502CA3C: bne         $v0, $t8, L_1502CA4C
    if (ctx->r2 != ctx->r24) {
        // 0x1502CA40: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_1502CA4C;
    }
    // 0x1502CA40: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1502CA44: b           L_1502CC24
    // 0x1502CA48: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
        goto L_1502CC24;
    // 0x1502CA48: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_1502CA4C:
    // 0x1502CA4C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1502CA50: jal         0x1506196C
    // 0x1502CA54: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1506196C(rdram, ctx);
        goto after_1;
    // 0x1502CA54: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x1502CA58: bne         $v0, $zero, L_1502CA68
    if (ctx->r2 != 0) {
        // 0x1502CA5C: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_1502CA68;
    }
    // 0x1502CA5C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1502CA60: b           L_1502CC24
    // 0x1502CA64: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
        goto L_1502CC24;
    // 0x1502CA64: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_1502CA68:
    // 0x1502CA68: lw          $t9, 0x1D4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X1D4);
    // 0x1502CA6C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1502CA70: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1502CA74: bne         $t9, $zero, L_1502CA84
    if (ctx->r25 != 0) {
        // 0x1502CA78: nop
    
            goto L_1502CA84;
    }
    // 0x1502CA78: nop

    // 0x1502CA7C: b           L_1502CC24
    // 0x1502CA80: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
        goto L_1502CC24;
    // 0x1502CA80: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_1502CA84:
    // 0x1502CA84: beq         $a2, $at, L_1502CABC
    if (ctx->r6 == ctx->r1) {
        // 0x1502CA88: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_1502CABC;
    }
    // 0x1502CA88: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1502CA8C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1502CA90: beq         $a2, $at, L_1502CABC
    if (ctx->r6 == ctx->r1) {
        // 0x1502CA94: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1502CABC;
    }
    // 0x1502CA94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502CA98: beq         $a2, $at, L_1502CABC
    if (ctx->r6 == ctx->r1) {
        // 0x1502CA9C: lh          $a1, 0x62($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X62);
            goto L_1502CABC;
    }
    // 0x1502CA9C: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x1502CAA0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x1502CAA4: jal         0x1502C6E8
    // 0x1502CAA8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1502C6E8(rdram, ctx);
        goto after_2;
    // 0x1502CAA8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x1502CAAC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1502CAB0: lbu         $t0, 0x1C8($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1C8);
    // 0x1502CAB4: b           L_1502CACC
    // 0x1502CAB8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
        goto L_1502CACC;
    // 0x1502CAB8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
L_1502CABC:
    // 0x1502CABC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x1502CAC0: jal         0x150849CC
    // 0x1502CAC4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_150849CC(rdram, ctx);
        goto after_3;
    // 0x1502CAC4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x1502CAC8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_1502CACC:
    // 0x1502CACC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x1502CAD0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1502CAD4: jal         0x1502D54C
    // 0x1502CAD8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1502D54C(rdram, ctx);
        goto after_4;
    // 0x1502CAD8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_4:
    // 0x1502CADC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1502CAE0: lw          $t1, 0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDF0);
    // 0x1502CAE4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1502CAE8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1502CAEC: lh          $t3, 0x3E($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X3E);
    // 0x1502CAF0: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x1502CAF4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1502CAF8: beq         $t3, $zero, L_1502CB10
    if (ctx->r11 == 0) {
        // 0x1502CAFC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_1502CB10;
    }
    // 0x1502CAFC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1502CB00: jal         0x1502D630
    // 0x1502CB04: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1502D630(rdram, ctx);
        goto after_5;
    // 0x1502CB04: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_5:
    // 0x1502CB08: b           L_1502CB14
    // 0x1502CB0C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_1502CB14;
    // 0x1502CB0C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_1502CB10:
    // 0x1502CB10: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_1502CB14:
    // 0x1502CB14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1502CB18: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1502CB1C: jal         0x1506196C
    // 0x1502CB20: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1506196C(rdram, ctx);
        goto after_6;
    // 0x1502CB20: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_6:
    // 0x1502CB24: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x1502CB28: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1502CB2C: beq         $at, $zero, L_1502CB64
    if (ctx->r1 == 0) {
        // 0x1502CB30: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1502CB64;
    }
    // 0x1502CB30: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1502CB34: lw          $v0, 0x318($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X318);
    // 0x1502CB38: beql        $v0, $zero, L_1502CB68
    if (ctx->r2 == 0) {
        // 0x1502CB3C: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_1502CB68;
    }
    goto skip_1;
    // 0x1502CB3C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    skip_1:
    // 0x1502CB40: lw          $t4, 0x2C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X2C);
    // 0x1502CB44: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x1502CB48: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x1502CB4C: bnel        $t4, $at, L_1502CB68
    if (ctx->r12 != ctx->r1) {
        // 0x1502CB50: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_1502CB68;
    }
    goto skip_2;
    // 0x1502CB50: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    skip_2:
    // 0x1502CB54: lbu         $t6, 0x127($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X127);
    // 0x1502CB58: beql        $t5, $t6, L_1502CB68
    if (ctx->r13 == ctx->r14) {
        // 0x1502CB5C: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_1502CB68;
    }
    goto skip_3;
    // 0x1502CB5C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    skip_3:
    // 0x1502CB60: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1502CB64:
    // 0x1502CB64: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
L_1502CB68:
    // 0x1502CB68: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1502CB6C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1502CB70: bne         $t7, $at, L_1502CB9C
    if (ctx->r15 != ctx->r1) {
        // 0x1502CB74: addiu       $t3, $sp, 0x40
        ctx->r11 = ADD32(ctx->r29, 0X40);
            goto L_1502CB9C;
    }
    // 0x1502CB74: addiu       $t3, $sp, 0x40
    ctx->r11 = ADD32(ctx->r29, 0X40);
    // 0x1502CB78: lbu         $t8, -0x83C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X83C);
    // 0x1502CB7C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x1502CB80: lw          $t0, -0x840($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X840);
    // 0x1502CB84: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502CB88: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1502CB8C: mflo        $v1
    ctx->r3 = lo;
    // 0x1502CB90: sra         $t9, $v1, 8
    ctx->r25 = S32(SIGNED(ctx->r3) >> 8);
    // 0x1502CB94: b           L_1502CBA4
    // 0x1502CB98: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_1502CBA4;
    // 0x1502CB98: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_1502CB9C:
    // 0x1502CB9C: lw          $t1, 0x1D4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X1D4);
    // 0x1502CBA0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
L_1502CBA4:
    // 0x1502CBA4: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x1502CBA8: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x1502CBAC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x1502CBB0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x1502CBB4: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x1502CBB8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x1502CBBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x1502CBC0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1502CBC4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1502CBC8: jal         0x1502CCFC
    // 0x1502CBCC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_1502CCFC(rdram, ctx);
        goto after_7;
    // 0x1502CBCC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_7:
    // 0x1502CBD0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502CBD4: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1502CBD8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502CBDC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1502CBE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502CBE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1502CBE8: lw          $t8, -0x1638($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1638);
    // 0x1502CBEC: lw          $t5, -0x145C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X145C);
    // 0x1502CBF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1502CBF4: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x1502CBF8: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x1502CBFC: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1502CC00: beq         $at, $zero, L_1502CC10
    if (ctx->r1 == 0) {
        // 0x1502CC04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1502CC10;
    }
    // 0x1502CC04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1502CC08: b           L_1502CC10
    // 0x1502CC0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1502CC10;
    // 0x1502CC0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502CC10:
    // 0x1502CC10: beql        $v0, $zero, L_1502CC24
    if (ctx->r2 == 0) {
        // 0x1502CC14: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1502CC24;
    }
    goto skip_4;
    // 0x1502CC14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_4:
    // 0x1502CC18: b           L_1502CC24
    // 0x1502CC1C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_1502CC24;
    // 0x1502CC1C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1502CC20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1502CC24:
    // 0x1502CC24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1502CC28: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1502CC2C: jr          $ra
    // 0x1502CC30: nop

    return;
    return;
    // 0x1502CC30: nop

;}

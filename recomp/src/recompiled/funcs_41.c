#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151028AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151028AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151028B0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151028B4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151028B8: lw          $v0, 0x170($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X170);
    // 0x151028BC: lbu         $t8, 0x132($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X132);
    // 0x151028C0: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151028C4: bnel        $a1, $t8, L_151028F4
    if (ctx->r5 != ctx->r24) {
        // 0x151028C8: lbu         $t1, 0x174($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X174);
            goto L_151028F4;
    }
    goto skip_0;
    // 0x151028C8: lbu         $t1, 0x174($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X174);
    skip_0:
    // 0x151028CC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151028D0: beq         $v1, $zero, L_151028E8
    if (ctx->r3 == 0) {
        // 0x151028D4: nop
    
            goto L_151028E8;
    }
    // 0x151028D4: nop

    // 0x151028D8: lw          $t9, 0x31C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X31C);
    // 0x151028DC: lbu         $t0, 0x197($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X197);
    // 0x151028E0: beql        $t0, $zero, L_151028F4
    if (ctx->r8 == 0) {
        // 0x151028E4: lbu         $t1, 0x174($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X174);
            goto L_151028F4;
    }
    goto skip_1;
    // 0x151028E4: lbu         $t1, 0x174($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X174);
    skip_1:
L_151028E8:
    // 0x151028E8: jr          $ra
    // 0x151028EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151028EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151028F0: lbu         $t1, 0x174($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X174);
L_151028F4:
    // 0x151028F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151028F8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x151028FC: bne         $t2, $zero, L_1510290C
    if (ctx->r10 != 0) {
        // 0x15102900: nop
    
            goto L_1510290C;
    }
    // 0x15102900: nop

    // 0x15102904: jr          $ra
    // 0x15102908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15102908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510290C:
    // 0x1510290C: jr          $ra
    // 0x15102910: nop

    return;
    return;
    // 0x15102910: nop

;}
RECOMP_FUNC void func_15043F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043F6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15043F70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15043F74: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15043F78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15043F7C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15043F80: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15043F84: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15043F88: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15043F8C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15043F90: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15043F94: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x15043F98: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15043F9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15043FA0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15043FA4: jal         0x150A9B0C
    // 0x15043FA8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_150A9B0C(rdram, ctx);
        goto after_0;
    // 0x15043FA8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15043FAC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15043FB0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15043FB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15043FB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15043FBC: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x15043FC0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15043FC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15043FC8: swc1        $f16, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f16.u32l;
    // 0x15043FCC: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15043FD0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x15043FD4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x15043FD8: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x15043FDC: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x15043FE0: swc1        $f18, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f18.u32l;
    // 0x15043FE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15043FE8: jr          $ra
    // 0x15043FEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15043FEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1513477C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513477C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15134780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15134784: lbu         $v0, 0x3D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3D);
    // 0x15134788: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513478C: bgezl       $v0, L_1513479C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15134790: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_1513479C;
    }
    goto skip_0;
    // 0x15134790: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    skip_0:
    // 0x15134794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15134798: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
L_1513479C:
    // 0x1513479C: bnel        $at, $zero, L_151347AC
    if (ctx->r1 != 0) {
        // 0x151347A0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151347AC;
    }
    goto skip_1;
    // 0x151347A0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_1:
    // 0x151347A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151347A8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_151347AC:
    // 0x151347AC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x151347B0: lw          $t9, -0x652C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X652C);
    // 0x151347B4: jalr        $t9
    // 0x151347B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151347B8: nop

    after_0:
    // 0x151347BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151347C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151347C4: jr          $ra
    // 0x151347C8: nop

    return;
    return;
    // 0x151347C8: nop

;}
RECOMP_FUNC void func_151906C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151906C4: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x151906C8: lw          $v0, 0x31C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X31C);
    // 0x151906CC: beq         $v0, $zero, L_151906D8
    if (ctx->r2 == 0) {
        // 0x151906D0: nop
    
            goto L_151906D8;
    }
    // 0x151906D0: nop

    // 0x151906D4: sb          $zero, 0x1AC($v0)
    MEM_B(0X1AC, ctx->r2) = 0;
L_151906D8:
    // 0x151906D8: jr          $ra
    // 0x151906DC: nop

    return;
    return;
    // 0x151906DC: nop

;}
RECOMP_FUNC void func_1504A620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504A620: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504A624: nop

    // 0x1504A628: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1504A62C: nop

    // 0x1504A630: bc1fl       L_1504A648
    if (!c1cs) {
        // 0x1504A634: c.eq.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
            goto L_1504A648;
    }
    goto skip_0;
    // 0x1504A634: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    skip_0:
    // 0x1504A638: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504A63C: jr          $ra
    // 0x1504A640: nop

    return;
    return;
    // 0x1504A640: nop

    // 0x1504A644: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
L_1504A648:
    // 0x1504A648: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1504A64C: bc1fl       L_1504A664
    if (!c1cs) {
        // 0x1504A650: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_1504A664;
    }
    goto skip_1;
    // 0x1504A650: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_1:
    // 0x1504A654: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504A658: jr          $ra
    // 0x1504A65C: nop

    return;
    return;
    // 0x1504A65C: nop

    // 0x1504A660: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_1504A664:
    // 0x1504A664: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1504A668: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504A66C: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x1504A670: nop

    // 0x1504A674: bc1f        L_1504A6A4
    if (!c1cs) {
        // 0x1504A678: nop
    
            goto L_1504A6A4;
    }
    // 0x1504A678: nop

    // 0x1504A67C: lwc1        $f16, -0x6F50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6F50);
    // 0x1504A680: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504A684: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1504A688: nop

L_1504A68C:
    // 0x1504A68C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1504A690: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x1504A694: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x1504A698: nop

    // 0x1504A69C: bc1t        L_1504A68C
    if (c1cs) {
        // 0x1504A6A0: nop
    
            goto L_1504A68C;
    }
    // 0x1504A6A0: nop

L_1504A6A4:
    // 0x1504A6A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504A6A8: lwc1        $f16, -0x6F4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6F4C);
    // 0x1504A6AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504A6B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1504A6B4: nop

    // 0x1504A6B8: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x1504A6BC: nop

    // 0x1504A6C0: bc1fl       L_1504A6E4
    if (!c1cs) {
        // 0x1504A6C4: sub.s       $f4, $f12, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_1504A6E4;
    }
    goto skip_2;
    // 0x1504A6C4: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    skip_2:
    // 0x1504A6C8: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
L_1504A6CC:
    // 0x1504A6CC: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1504A6D0: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x1504A6D4: nop

    // 0x1504A6D8: bc1tl       L_1504A6CC
    if (c1cs) {
        // 0x1504A6DC: add.s       $f12, $f12, $f12
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
            goto L_1504A6CC;
    }
    goto skip_3;
    // 0x1504A6DC: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    skip_3:
    // 0x1504A6E0: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
L_1504A6E4:
    // 0x1504A6E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1504A6E8: add.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x1504A6EC: div.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1504A6F0: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1504A6F4: add.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x1504A6F8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_1504A6FC:
    // 0x1504A6FC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x1504A700: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x1504A704: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1504A708: div.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1504A70C: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1504A710: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1504A714: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x1504A718: nop

    // 0x1504A71C: bc1fl       L_1504A6FC
    if (!c1cs) {
        // 0x1504A720: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_1504A6FC;
    }
    goto skip_4;
    // 0x1504A720: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_4:
    // 0x1504A724: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1504A728: jr          $ra
    // 0x1504A72C: nop

    return;
    return;
    // 0x1504A72C: nop

;}
RECOMP_FUNC void func_10010BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010BE8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x10010BEC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x10010BF0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x10010BF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x10010BF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x10010BFC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x10010C00: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x10010C04: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x10010C08: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x10010C0C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x10010C10: andi        $s1, $a0, 0xF
    ctx->r17 = ctx->r4 & 0XF;
    // 0x10010C14: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x10010C18: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x10010C1C: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10010C20: addiu       $t8, $t8, 0x25E0
    ctx->r24 = ADD32(ctx->r24, 0X25E0);
    // 0x10010C24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10010C28: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x10010C2C: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x10010C30: bnel        $a0, $t9, L_10010C70
    if (ctx->r4 != ctx->r25) {
        // 0x10010C34: lw          $t4, 0x8($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X8);
            goto L_10010C70;
    }
    goto skip_0;
    // 0x10010C34: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x10010C38: beql        $a0, $zero, L_10010C70
    if (ctx->r4 == 0) {
        // 0x10010C3C: lw          $t4, 0x8($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X8);
            goto L_10010C70;
    }
    goto skip_1;
    // 0x10010C3C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x10010C40: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x10010C44: beql        $t3, $zero, L_10010D20
    if (ctx->r11 == 0) {
        // 0x10010C48: lhu         $t8, 0x5A($sp)
        ctx->r24 = MEM_HU(ctx->r29, 0X5A);
            goto L_10010D20;
    }
    goto skip_2;
    // 0x10010C48: lhu         $t8, 0x5A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X5A);
    skip_2:
    // 0x10010C4C: jal         0x100173C4
    // 0x10010C50: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_100173C4(rdram, ctx);
        goto after_0;
    // 0x10010C50: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_0:
    // 0x10010C54: beql        $v0, $zero, L_10010D20
    if (ctx->r2 == 0) {
        // 0x10010C58: lhu         $t8, 0x5A($sp)
        ctx->r24 = MEM_HU(ctx->r29, 0X5A);
            goto L_10010D20;
    }
    goto skip_3;
    // 0x10010C58: lhu         $t8, 0x5A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X5A);
    skip_3:
    // 0x10010C5C: jal         0x10017594
    // 0x10010C60: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_10017594(rdram, ctx);
        goto after_1;
    // 0x10010C60: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x10010C64: b           L_10010D1C
    // 0x10010C68: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_10010D1C;
    // 0x10010C68: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x10010C6C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
L_10010C70:
    // 0x10010C70: beql        $t4, $zero, L_10010C8C
    if (ctx->r12 == 0) {
        // 0x10010C74: lhu         $t5, 0x4($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X4);
            goto L_10010C8C;
    }
    goto skip_4;
    // 0x10010C74: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
    skip_4:
    // 0x10010C78: jal         0x100173C4
    // 0x10010C7C: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_100173C4(rdram, ctx);
        goto after_2;
    // 0x10010C7C: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_2:
    // 0x10010C80: bne         $v0, $zero, L_10010C94
    if (ctx->r2 != 0) {
        // 0x10010C84: nop
    
            goto L_10010C94;
    }
    // 0x10010C84: nop

    // 0x10010C88: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
L_10010C8C:
    // 0x10010C8C: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x10010C90: beq         $t6, $zero, L_10010D1C
    if (ctx->r14 == 0) {
        // 0x10010C94: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_10010D1C;
    }
L_10010C94:
    // 0x10010C94: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10010C98: lw          $t7, 0x25E8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X25E8);
    // 0x10010C9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x10010CA0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10010CA4: beq         $t7, $zero, L_10010CB8
    if (ctx->r15 == 0) {
        // 0x10010CA8: nop
    
            goto L_10010CB8;
    }
    // 0x10010CA8: nop

    // 0x10010CAC: jal         0x100173C4
    // 0x10010CB0: addiu       $a0, $a0, 0x25E8
    ctx->r4 = ADD32(ctx->r4, 0X25E8);
    func_100173C4(rdram, ctx);
        goto after_3;
    // 0x10010CB0: addiu       $a0, $a0, 0x25E8
    ctx->r4 = ADD32(ctx->r4, 0X25E8);
    after_3:
    // 0x10010CB4: bne         $v0, $zero, L_10010CCC
    if (ctx->r2 != 0) {
        // 0x10010CB8: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_10010CCC;
    }
L_10010CB8:
    // 0x10010CB8: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10010CBC: lhu         $t8, 0x25E4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X25E4);
    // 0x10010CC0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x10010CC4: beql        $t9, $zero, L_10010D20
    if (ctx->r25 == 0) {
        // 0x10010CC8: lhu         $t8, 0x5A($sp)
        ctx->r24 = MEM_HU(ctx->r29, 0X5A);
            goto L_10010D20;
    }
    goto skip_5;
    // 0x10010CC8: lhu         $t8, 0x5A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X5A);
    skip_5:
L_10010CCC:
    // 0x10010CCC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_10010CD0:
    // 0x10010CD0: sltiu       $at, $s1, 0x10
    ctx->r1 = ctx->r17 < 0X10 ? 1 : 0;
    // 0x10010CD4: beq         $at, $zero, L_10010D1C
    if (ctx->r1 == 0) {
        // 0x10010CD8: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_10010D1C;
    }
    // 0x10010CD8: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x10010CDC: subu        $t3, $t3, $s1
    ctx->r11 = SUB32(ctx->r11, ctx->r17);
    // 0x10010CE0: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x10010CE4: addiu       $t4, $t4, 0x25E0
    ctx->r12 = ADD32(ctx->r12, 0X25E0);
    // 0x10010CE8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x10010CEC: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x10010CF0: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x10010CF4: beql        $t5, $zero, L_10010D10
    if (ctx->r13 == 0) {
        // 0x10010CF8: lhu         $t6, 0x4($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X4);
            goto L_10010D10;
    }
    goto skip_6;
    // 0x10010CF8: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
    skip_6:
    // 0x10010CFC: jal         0x100173C4
    // 0x10010D00: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_100173C4(rdram, ctx);
        goto after_4;
    // 0x10010D00: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_4:
    // 0x10010D04: bnel        $v0, $zero, L_10010CD0
    if (ctx->r2 != 0) {
        // 0x10010D08: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_10010CD0;
    }
    goto skip_7;
    // 0x10010D08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x10010D0C: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
L_10010D10:
    // 0x10010D10: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x10010D14: bnel        $t7, $zero, L_10010CD0
    if (ctx->r15 != 0) {
        // 0x10010D18: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_10010CD0;
    }
    goto skip_8;
    // 0x10010D18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
L_10010D1C:
    // 0x10010D1C: lhu         $t8, 0x5A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X5A);
L_10010D20:
    // 0x10010D20: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x10010D24: beql        $at, $zero, L_10010D38
    if (ctx->r1 == 0) {
        // 0x10010D28: sltiu       $at, $s1, 0x10
        ctx->r1 = ctx->r17 < 0X10 ? 1 : 0;
            goto L_10010D38;
    }
    goto skip_9;
    // 0x10010D28: sltiu       $at, $s1, 0x10
    ctx->r1 = ctx->r17 < 0X10 ? 1 : 0;
    skip_9:
    // 0x10010D2C: b           L_10010E64
    // 0x10010D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10010E64;
    // 0x10010D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x10010D34: sltiu       $at, $s1, 0x10
    ctx->r1 = ctx->r17 < 0X10 ? 1 : 0;
L_10010D38:
    // 0x10010D38: bne         $at, $zero, L_10010D48
    if (ctx->r1 != 0) {
        // 0x10010D3C: lw          $t9, 0x54($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X54);
            goto L_10010D48;
    }
    // 0x10010D3C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x10010D40: b           L_10010E60
    // 0x10010D44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_10010E60;
    // 0x10010D44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_10010D48:
    // 0x10010D48: bne         $t9, $zero, L_10010D58
    if (ctx->r25 != 0) {
        // 0x10010D4C: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_10010D58;
    }
    // 0x10010D4C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x10010D50: b           L_10010E64
    // 0x10010D54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10010E64;
    // 0x10010D54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10010D58:
    // 0x10010D58: andi        $t3, $t1, 0x7FFF
    ctx->r11 = ctx->r9 & 0X7FFF;
    // 0x10010D5C: slti        $at, $t3, 0x6E3
    ctx->r1 = SIGNED(ctx->r11) < 0X6E3 ? 1 : 0;
    // 0x10010D60: bne         $at, $zero, L_10010D70
    if (ctx->r1 != 0) {
        // 0x10010D64: or          $t1, $t3, $zero
        ctx->r9 = ctx->r11 | 0;
            goto L_10010D70;
    }
    // 0x10010D64: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x10010D68: b           L_10010E64
    // 0x10010D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10010E64;
    // 0x10010D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10010D70:
    // 0x10010D70: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x10010D74: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x10010D78: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x10010D7C: addiu       $t5, $t5, 0x25E0
    ctx->r13 = ADD32(ctx->r13, 0X25E0);
    // 0x10010D80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x10010D84: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x10010D88: lhu         $t0, 0x2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2);
    // 0x10010D8C: addiu       $t2, $s0, 0x8
    ctx->r10 = ADD32(ctx->r16, 0X8);
    // 0x10010D90: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x10010D94: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
    // 0x10010D98: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x10010D9C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x10010DA0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x10010DA4: beq         $at, $zero, L_10010DB8
    if (ctx->r1 == 0) {
        // 0x10010DA8: sh          $t0, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r8;
            goto L_10010DB8;
    }
    // 0x10010DA8: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
    // 0x10010DAC: addiu       $v1, $a0, 0x10
    ctx->r3 = ADD32(ctx->r4, 0X10);
    // 0x10010DB0: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x10010DB4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_10010DB8:
    // 0x10010DB8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x10010DBC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x10010DC0: sh          $v1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r3;
    // 0x10010DC4: beq         $v0, $zero, L_10010DD0
    if (ctx->r2 == 0) {
        // 0x10010DC8: sh          $t7, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r15;
            goto L_10010DD0;
    }
    // 0x10010DC8: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    // 0x10010DCC: sb          $t8, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r24;
L_10010DD0:
    // 0x10010DD0: lbu         $s0, 0x67($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X67);
    // 0x10010DD4: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x10010DD8: lbu         $v1, 0x1FD8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1FD8);
    // 0x10010DDC: andi        $t9, $s0, 0x7F
    ctx->r25 = ctx->r16 & 0X7F;
    // 0x10010DE0: lh          $a0, 0x62($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X62);
    // 0x10010DE4: addu        $t3, $t9, $v1
    ctx->r11 = ADD32(ctx->r25, ctx->r3);
    // 0x10010DE8: slti        $at, $t3, 0x80
    ctx->r1 = SIGNED(ctx->r11) < 0X80 ? 1 : 0;
    // 0x10010DEC: beq         $at, $zero, L_10010E04
    if (ctx->r1 == 0) {
        // 0x10010DF0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_10010E04;
    }
    // 0x10010DF0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x10010DF4: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x10010DF8: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x10010DFC: b           L_10010E10
    // 0x10010E00: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
        goto L_10010E10;
    // 0x10010E00: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_10010E04:
    // 0x10010E04: ori         $s0, $v0, 0x7F
    ctx->r16 = ctx->r2 | 0X7F;
    // 0x10010E08: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x10010E0C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_10010E10:
    // 0x10010E10: sh          $t0, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r8;
    // 0x10010E14: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x10010E18: jal         0x10019AB0
    // 0x10010E1C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    alCents2Ratio(rdram, ctx);
        goto after_5;
    // 0x10010E1C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_5:
    // 0x10010E20: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10010E24: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10010E28: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x10010E2C: sll         $a1, $t1, 16
    ctx->r5 = S32(ctx->r9 << 16);
    // 0x10010E30: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x10010E34: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10010E38: lw          $a0, -0x1C98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C98);
    // 0x10010E3C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x10010E40: lhu         $a2, 0x5A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X5A);
    // 0x10010E44: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x10010E48: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x10010E4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x10010E50: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x10010E54: jal         0x10017438
    // 0x10010E58: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_10017438(rdram, ctx);
        goto after_6;
    // 0x10010E58: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_6:
    // 0x10010E5C: lhu         $t0, 0x4E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4E);
L_10010E60:
    // 0x10010E60: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_10010E64:
    // 0x10010E64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x10010E68: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x10010E6C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x10010E70: jr          $ra
    // 0x10010E74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x10010E74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150701C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150701C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150701C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150701CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150701D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150701D4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150701D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150701DC: jal         0x151C5280
    // 0x150701E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151C5280(rdram, ctx);
        goto after_0;
    // 0x150701E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150701E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150701E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150701EC: jr          $ra
    // 0x150701F0: nop

    return;
    return;
    // 0x150701F0: nop

;}
RECOMP_FUNC void func_1515F008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F008: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x1515F00C: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x1515F010: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x1515F014: lhu         $t7, 0x20($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X20);
    // 0x1515F018: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1515F01C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x1515F020: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
    // 0x1515F024: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x1515F028: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515F02C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1515F030: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1515F034: nop

    // 0x1515F038: jr          $ra
    // 0x1515F03C: nop

    return;
    return;
    // 0x1515F03C: nop

;}
RECOMP_FUNC void func_1507B318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B31C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B320: jal         0x1507A3E8
    // 0x1507B324: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B324: nop

    after_0:
    // 0x1507B328: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B32C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B330: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B334: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B338: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B33C: jal         0x1506E46C
    // 0x1507B340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1507B344: beq         $v0, $zero, L_1507B354
    if (ctx->r2 == 0) {
        // 0x1507B348: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1507B354;
    }
    // 0x1507B348: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1507B34C: jal         0x1506BA4C
    // 0x1507B350: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1507B350: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    after_2:
L_1507B354:
    // 0x1507B354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B35C: jr          $ra
    // 0x1507B360: nop

    return;
    return;
    // 0x1507B360: nop

;}
RECOMP_FUNC void func_151239CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151239CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151239D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151239D4: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x151239D8: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x151239DC: lh          $t7, 0x20C($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X20C);
    // 0x151239E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151239E4: beq         $t7, $zero, L_15123A44
    if (ctx->r15 == 0) {
        // 0x151239E8: nop
    
            goto L_15123A44;
    }
    // 0x151239E8: nop

    // 0x151239EC: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x151239F0: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x151239F4: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x151239F8: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x151239FC: lw          $t0, 0x30($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X30);
    // 0x15123A00: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x15123A04: lw          $t1, 0xE0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XE0);
    // 0x15123A08: sw          $t1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r9;
    // 0x15123A0C: lw          $t2, 0x88($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X88);
    // 0x15123A10: sw          $t2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r10;
    // 0x15123A14: lw          $t3, 0x138($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X138);
    // 0x15123A18: sw          $t3, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r11;
    // 0x15123A1C: lh          $t4, 0x1B6($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X1B6);
    // 0x15123A20: sh          $t4, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r12;
    // 0x15123A24: lh          $t5, 0x1E2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X1E2);
    // 0x15123A28: sh          $t5, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r13;
    // 0x15123A2C: jal         0x15124B18
    // 0x15123A30: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15123A30: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15123A34: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15123A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15123A3C: b           L_15123A44
    // 0x15123A40: sh          $zero, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = 0;
        goto L_15123A44;
    // 0x15123A40: sh          $zero, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = 0;
L_15123A44:
    // 0x15123A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15123A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15123A4C: jr          $ra
    // 0x15123A50: nop

    return;
    return;
    // 0x15123A50: nop

;}
RECOMP_FUNC void __osGetId2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0BC4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151F0BC8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151F0BCC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x151F0BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F0BD4: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x151F0BD8: beq         $t7, $zero, L_151F0C04
    if (ctx->r15 == 0) {
        // 0x151F0BDC: nop
    
            goto L_151F0C04;
    }
    // 0x151F0BDC: nop

    // 0x151F0BE0: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x151F0BE4: jal         0x100285FC
    // 0x151F0BE8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x151F0BE8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_0:
    // 0x151F0BEC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0BF0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0BF4: beq         $t8, $zero, L_151F0C04
    if (ctx->r24 == 0) {
        // 0x151F0BF8: nop
    
            goto L_151F0C04;
    }
    // 0x151F0BF8: nop

    // 0x151F0BFC: b           L_151F0E10
    // 0x151F0C00: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_151F0E10;
    // 0x151F0C00: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_151F0C04:
    // 0x151F0C04: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x151F0C08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151F0C0C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x151F0C10: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x151F0C14: jal         0x10025C20
    // 0x151F0C18: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x151F0C18: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    after_1:
    // 0x151F0C1C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0C20: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0C24: beq         $t0, $zero, L_151F0C34
    if (ctx->r8 == 0) {
        // 0x151F0C28: nop
    
            goto L_151F0C34;
    }
    // 0x151F0C28: nop

    // 0x151F0C2C: b           L_151F0E10
    // 0x151F0C30: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_151F0E10;
    // 0x151F0C30: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_151F0C34:
    // 0x151F0C34: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151F0C38: addiu       $a1, $sp, 0x62
    ctx->r5 = ADD32(ctx->r29, 0X62);
    // 0x151F0C3C: jal         0x1002796C
    // 0x151F0C40: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    __osIdCheckSum(rdram, ctx);
        goto after_2;
    // 0x151F0C40: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x151F0C44: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x151F0C48: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151F0C4C: lhu         $t2, 0x1C($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X1C);
    // 0x151F0C50: lhu         $t3, 0x62($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X62);
    // 0x151F0C54: bne         $t2, $t3, L_151F0C6C
    if (ctx->r10 != ctx->r11) {
        // 0x151F0C58: nop
    
            goto L_151F0C6C;
    }
    // 0x151F0C58: nop

    // 0x151F0C5C: lhu         $t4, 0x1E($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0X1E);
    // 0x151F0C60: lhu         $t5, 0x60($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X60);
    // 0x151F0C64: beq         $t4, $t5, L_151F0CD4
    if (ctx->r12 == ctx->r13) {
        // 0x151F0C68: nop
    
            goto L_151F0CD4;
    }
    // 0x151F0C68: nop

L_151F0C6C:
    // 0x151F0C6C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x151F0C70: jal         0x10027DEC
    // 0x151F0C74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    __osCheckPackId_recomp(rdram, ctx);
        goto after_3;
    // 0x151F0C74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x151F0C78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0C7C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0C80: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151F0C84: bne         $t7, $at, L_151F0CC0
    if (ctx->r15 != ctx->r1) {
        // 0x151F0C88: nop
    
            goto L_151F0CC0;
    }
    // 0x151F0C88: nop

    // 0x151F0C8C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x151F0C90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151F0C94: jal         0x100279D4
    // 0x151F0C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    __osRepairPackId_recomp(rdram, ctx);
        goto after_4;
    // 0x151F0C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x151F0C9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0CA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0CA4: beq         $t6, $zero, L_151F0CB4
    if (ctx->r14 == 0) {
        // 0x151F0CA8: nop
    
            goto L_151F0CB4;
    }
    // 0x151F0CA8: nop

    // 0x151F0CAC: b           L_151F0E10
    // 0x151F0CB0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_151F0E10;
    // 0x151F0CB0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_151F0CB4:
    // 0x151F0CB4: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x151F0CB8: b           L_151F0CD4
    // 0x151F0CBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_151F0CD4;
    // 0x151F0CBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_151F0CC0:
    // 0x151F0CC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0CC4: beq         $t9, $zero, L_151F0CD4
    if (ctx->r25 == 0) {
        // 0x151F0CC8: nop
    
            goto L_151F0CD4;
    }
    // 0x151F0CC8: nop

    // 0x151F0CCC: b           L_151F0E10
    // 0x151F0CD0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_151F0E10;
    // 0x151F0CD0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_151F0CD4:
    // 0x151F0CD4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x151F0CD8: lhu         $t2, 0x18($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X18);
    // 0x151F0CDC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x151F0CE0: bne         $t3, $zero, L_151F0D30
    if (ctx->r11 != 0) {
        // 0x151F0CE4: nop
    
            goto L_151F0D30;
    }
    // 0x151F0CE4: nop

    // 0x151F0CE8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x151F0CEC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x151F0CF0: jal         0x100279D4
    // 0x151F0CF4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    __osRepairPackId_recomp(rdram, ctx);
        goto after_5;
    // 0x151F0CF4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x151F0CF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0CFC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0D00: beq         $t1, $zero, L_151F0D10
    if (ctx->r9 == 0) {
        // 0x151F0D04: nop
    
            goto L_151F0D10;
    }
    // 0x151F0D04: nop

    // 0x151F0D08: b           L_151F0E10
    // 0x151F0D0C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_151F0E10;
    // 0x151F0D0C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_151F0D10:
    // 0x151F0D10: addiu       $t4, $sp, 0x20
    ctx->r12 = ADD32(ctx->r29, 0X20);
    // 0x151F0D14: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151F0D18: lhu         $t5, 0x18($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X18);
    // 0x151F0D1C: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x151F0D20: bne         $t7, $zero, L_151F0D30
    if (ctx->r15 != 0) {
        // 0x151F0D24: nop
    
            goto L_151F0D30;
    }
    // 0x151F0D24: nop

    // 0x151F0D28: b           L_151F0E10
    // 0x151F0D2C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_151F0E10;
    // 0x151F0D2C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_151F0D30:
    // 0x151F0D30: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_151F0D34:
    // 0x151F0D34: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x151F0D38: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x151F0D3C: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x151F0D40: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151F0D44: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x151F0D48: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x151F0D4C: sb          $t2, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r10;
    // 0x151F0D50: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151F0D54: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x151F0D58: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x151F0D5C: bne         $at, $zero, L_151F0D34
    if (ctx->r1 != 0) {
        // 0x151F0D60: sw          $t4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r12;
            goto L_151F0D34;
    }
    // 0x151F0D60: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x151F0D64: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x151F0D68: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x151F0D6C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x151F0D70: lbu         $t7, 0x1B($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X1B);
    // 0x151F0D74: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x151F0D78: sw          $t7, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->r15;
    // 0x151F0D7C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x151F0D80: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x151F0D84: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151F0D88: lbu         $t3, 0x1A($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X1A);
    // 0x151F0D8C: sb          $t3, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r11;
    // 0x151F0D90: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x151F0D94: lbu         $t0, 0x64($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X64);
    // 0x151F0D98: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x151F0D9C: addiu       $t4, $t1, 0x3
    ctx->r12 = ADD32(ctx->r9, 0X3);
    // 0x151F0DA0: sw          $t4, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r12;
    // 0x151F0DA4: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x151F0DA8: sw          $t5, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r13;
    // 0x151F0DAC: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x151F0DB0: sw          $t6, 0x54($t9)
    MEM_W(0X54, ctx->r25) = ctx->r14;
    // 0x151F0DB4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x151F0DB8: lbu         $t8, 0x64($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X64);
    // 0x151F0DBC: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x151F0DC0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x151F0DC4: sw          $t1, 0x58($t3)
    MEM_W(0X58, ctx->r11) = ctx->r9;
    // 0x151F0DC8: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x151F0DCC: lbu         $t5, 0x64($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X64);
    // 0x151F0DD0: lw          $t2, 0x58($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X58);
    // 0x151F0DD4: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x151F0DD8: addu        $t6, $t2, $t7
    ctx->r14 = ADD32(ctx->r10, ctx->r15);
    // 0x151F0DDC: sw          $t6, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r14;
    // 0x151F0DE0: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x151F0DE4: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x151F0DE8: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x151F0DEC: jal         0x10025C20
    // 0x151F0DF0: addiu       $a3, $t9, 0x2C
    ctx->r7 = ADD32(ctx->r25, 0X2C);
    __osContRamRead_recomp(rdram, ctx);
        goto after_6;
    // 0x151F0DF0: addiu       $a3, $t9, 0x2C
    ctx->r7 = ADD32(ctx->r25, 0X2C);
    after_6:
    // 0x151F0DF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F0DF8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0DFC: beq         $t8, $zero, L_151F0E0C
    if (ctx->r24 == 0) {
        // 0x151F0E00: nop
    
            goto L_151F0E0C;
    }
    // 0x151F0E00: nop

    // 0x151F0E04: b           L_151F0E10
    // 0x151F0E08: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_151F0E10;
    // 0x151F0E08: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_151F0E0C:
    // 0x151F0E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F0E10:
    // 0x151F0E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F0E14: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151F0E18: jr          $ra
    // 0x151F0E1C: nop

    return;
    return;
    // 0x151F0E1C: nop

;}
RECOMP_FUNC void func_1510C4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510C4AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1510C4B0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510C4B4: addiu       $v1, $v1, -0x619C
    ctx->r3 = ADD32(ctx->r3, -0X619C);
    // 0x1510C4B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510C4BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1510C4C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1510C4C4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1510C4C8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1510C4CC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x1510C4D0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x1510C4D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510C4D8: blez        $t6, L_1510C4E8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1510C4DC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1510C4E8;
    }
    // 0x1510C4DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510C4E0: b           L_1510C898
    // 0x1510C4E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1510C898;
    // 0x1510C4E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510C4E8:
    // 0x1510C4E8: jal         0x10003C40
    // 0x1510C4EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1510C4EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1510C4F0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510C4F4: addiu       $v1, $v1, -0x619C
    ctx->r3 = ADD32(ctx->r3, -0X619C);
    // 0x1510C4F8: bne         $v0, $zero, L_1510C508
    if (ctx->r2 != 0) {
        // 0x1510C4FC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_1510C508;
    }
    // 0x1510C4FC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1510C500: b           L_1510C898
    // 0x1510C504: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1510C898;
    // 0x1510C504: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510C508:
    // 0x1510C508: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x1510C50C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510C510: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1510C514: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1510C518: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1510C51C: sw          $t0, -0x61A0($at)
    MEM_W(-0X61A0, ctx->r1) = ctx->r8;
    // 0x1510C520: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x1510C524: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x1510C528: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x1510C52C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x1510C530: sh          $zero, 0xE($t0)
    MEM_H(0XE, ctx->r8) = 0;
    // 0x1510C534: sb          $t9, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r25;
    // 0x1510C538: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x1510C53C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1510C540: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x1510C544: sh          $t3, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r11;
    // 0x1510C548: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x1510C54C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510C550: sh          $t4, 0x12($t0)
    MEM_H(0X12, ctx->r8) = ctx->r12;
    // 0x1510C554: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1510C558: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1510C55C: jal         0x1510BF60
    // 0x1510C560: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    func_1510BF60(rdram, ctx);
        goto after_1;
    // 0x1510C560: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    after_1:
    // 0x1510C564: beq         $v0, $zero, L_1510C6E8
    if (ctx->r2 == 0) {
        // 0x1510C568: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_1510C6E8;
    }
    // 0x1510C568: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1510C56C: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
    // 0x1510C570: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x1510C574: lw          $t6, 0xE10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE10);
    // 0x1510C578: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C57C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x1510C580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510C584: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x1510C588: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x1510C58C: sb          $t8, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r24;
    // 0x1510C590: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x1510C594: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1510C598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510C59C: jal         0x10003C40
    // 0x1510C5A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x1510C5A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1510C5A4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1510C5A8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1510C5AC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1510C5B0: blez        $t2, L_1510C6E8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1510C5B4: sw          $v0, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r2;
            goto L_1510C6E8;
    }
    // 0x1510C5B4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x1510C5B8: andi        $a1, $t2, 0x3
    ctx->r5 = ctx->r10 & 0X3;
    // 0x1510C5BC: beq         $a1, $zero, L_1510C610
    if (ctx->r5 == 0) {
        // 0x1510C5C0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_1510C610;
    }
    // 0x1510C5C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1510C5C4: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x1510C5C8: sll         $v0, $zero, 4
    ctx->r2 = S32(0 << 4);
L_1510C5CC:
    // 0x1510C5CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C5D0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x1510C5D4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1510C5D8: addu        $t3, $t9, $v0
    ctx->r11 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C5DC: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x1510C5E0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1510C5E4: sh          $t4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r12;
    // 0x1510C5E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C5EC: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x1510C5F0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x1510C5F4: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x1510C5F8: addu        $t5, $t3, $v1
    ctx->r13 = ADD32(ctx->r11, ctx->r3);
    // 0x1510C5FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1510C600: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1510C604: bne         $a0, $t1, L_1510C5CC
    if (ctx->r4 != ctx->r9) {
        // 0x1510C608: sh          $t9, 0x2($t5)
        MEM_H(0X2, ctx->r13) = ctx->r25;
            goto L_1510C5CC;
    }
    // 0x1510C608: sh          $t9, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r25;
    // 0x1510C60C: beq         $t1, $t2, L_1510C6E8
    if (ctx->r9 == ctx->r10) {
        // 0x1510C610: sll         $v1, $t1, 2
        ctx->r3 = S32(ctx->r9 << 2);
            goto L_1510C6E8;
    }
L_1510C610:
    // 0x1510C610: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x1510C614: sll         $v0, $t1, 4
    ctx->r2 = S32(ctx->r9 << 4);
    // 0x1510C618: sll         $a0, $t2, 4
    ctx->r4 = S32(ctx->r10 << 4);
L_1510C61C:
    // 0x1510C61C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C620: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1510C624: addu        $t6, $t4, $v0
    ctx->r14 = ADD32(ctx->r12, ctx->r2);
    // 0x1510C628: lh          $t7, 0x8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8);
    // 0x1510C62C: addu        $t3, $t8, $v1
    ctx->r11 = ADD32(ctx->r24, ctx->r3);
    // 0x1510C630: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
    // 0x1510C634: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C638: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1510C63C: addu        $t5, $t9, $v0
    ctx->r13 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C640: lh          $t4, 0xA($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XA);
    // 0x1510C644: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x1510C648: sh          $t4, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r12;
    // 0x1510C64C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C650: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x1510C654: addu        $t3, $t7, $v0
    ctx->r11 = ADD32(ctx->r15, ctx->r2);
    // 0x1510C658: lh          $t9, 0x18($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X18);
    // 0x1510C65C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1510C660: sh          $t9, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r25;
    // 0x1510C664: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C668: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x1510C66C: addu        $t8, $t4, $v0
    ctx->r24 = ADD32(ctx->r12, ctx->r2);
    // 0x1510C670: lh          $t7, 0x1A($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X1A);
    // 0x1510C674: addu        $t5, $t3, $v1
    ctx->r13 = ADD32(ctx->r11, ctx->r3);
    // 0x1510C678: sh          $t7, 0x6($t5)
    MEM_H(0X6, ctx->r13) = ctx->r15;
    // 0x1510C67C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C680: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1510C684: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C688: lh          $t4, 0x28($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X28);
    // 0x1510C68C: addu        $t3, $t8, $v1
    ctx->r11 = ADD32(ctx->r24, ctx->r3);
    // 0x1510C690: sh          $t4, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r12;
    // 0x1510C694: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C698: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1510C69C: addu        $t5, $t7, $v0
    ctx->r13 = ADD32(ctx->r15, ctx->r2);
    // 0x1510C6A0: lh          $t9, 0x2A($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X2A);
    // 0x1510C6A4: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x1510C6A8: sh          $t9, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r25;
    // 0x1510C6AC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C6B0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x1510C6B4: addu        $t3, $t4, $v0
    ctx->r11 = ADD32(ctx->r12, ctx->r2);
    // 0x1510C6B8: lh          $t7, 0x38($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X38);
    // 0x1510C6BC: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1510C6C0: sh          $t7, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r15;
    // 0x1510C6C4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C6C8: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x1510C6CC: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C6D0: lh          $t4, 0x3A($t8)
    ctx->r12 = MEM_H(ctx->r24, 0X3A);
    // 0x1510C6D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x1510C6D8: addu        $t5, $t3, $v1
    ctx->r13 = ADD32(ctx->r11, ctx->r3);
    // 0x1510C6DC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1510C6E0: bne         $v0, $a0, L_1510C61C
    if (ctx->r2 != ctx->r4) {
        // 0x1510C6E4: sh          $t4, 0xE($t5)
        MEM_H(0XE, ctx->r13) = ctx->r12;
            goto L_1510C61C;
    }
    // 0x1510C6E4: sh          $t4, 0xE($t5)
    MEM_H(0XE, ctx->r13) = ctx->r12;
L_1510C6E8:
    // 0x1510C6E8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1510C6EC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1510C6F0: lw          $a1, 0x17B8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X17B8);
    // 0x1510C6F4: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x1510C6F8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x1510C6FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510C700: jal         0x1510BF60
    // 0x1510C704: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_1510BF60(rdram, ctx);
        goto after_3;
    // 0x1510C704: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_3:
    // 0x1510C708: beq         $v0, $zero, L_1510C894
    if (ctx->r2 == 0) {
        // 0x1510C70C: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_1510C894;
    }
    // 0x1510C70C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1510C710: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
    // 0x1510C714: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x1510C718: lw          $t6, 0xE14($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE14);
    // 0x1510C71C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C720: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x1510C724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510C728: subu        $t9, $t7, $t6
    ctx->r25 = SUB32(ctx->r15, ctx->r14);
    // 0x1510C72C: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x1510C730: sb          $t8, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r24;
    // 0x1510C734: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x1510C738: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1510C73C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1510C740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510C744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510C748: jal         0x10003C40
    // 0x1510C74C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x1510C74C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    after_4:
    // 0x1510C750: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1510C754: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1510C758: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1510C75C: blez        $t2, L_1510C894
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1510C760: sw          $v0, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r2;
            goto L_1510C894;
    }
    // 0x1510C760: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x1510C764: andi        $a1, $t2, 0x3
    ctx->r5 = ctx->r10 & 0X3;
    // 0x1510C768: beq         $a1, $zero, L_1510C7BC
    if (ctx->r5 == 0) {
        // 0x1510C76C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_1510C7BC;
    }
    // 0x1510C76C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1510C770: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x1510C774: sll         $v0, $t1, 4
    ctx->r2 = S32(ctx->r9 << 4);
L_1510C778:
    // 0x1510C778: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C77C: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x1510C780: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1510C784: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x1510C788: lh          $t5, 0x8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8);
    // 0x1510C78C: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x1510C790: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x1510C794: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C798: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x1510C79C: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C7A0: lh          $t3, 0xA($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA);
    // 0x1510C7A4: addu        $t7, $t4, $v1
    ctx->r15 = ADD32(ctx->r12, ctx->r3);
    // 0x1510C7A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1510C7AC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1510C7B0: bne         $a0, $t1, L_1510C778
    if (ctx->r4 != ctx->r9) {
        // 0x1510C7B4: sh          $t3, 0x2($t7)
        MEM_H(0X2, ctx->r15) = ctx->r11;
            goto L_1510C778;
    }
    // 0x1510C7B4: sh          $t3, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r11;
    // 0x1510C7B8: beq         $t1, $t2, L_1510C894
    if (ctx->r9 == ctx->r10) {
        // 0x1510C7BC: sll         $v1, $t1, 2
        ctx->r3 = S32(ctx->r9 << 2);
            goto L_1510C894;
    }
L_1510C7BC:
    // 0x1510C7BC: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x1510C7C0: sll         $v0, $t1, 4
    ctx->r2 = S32(ctx->r9 << 4);
    // 0x1510C7C4: sll         $a0, $t2, 4
    ctx->r4 = S32(ctx->r10 << 4);
L_1510C7C8:
    // 0x1510C7C8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C7CC: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x1510C7D0: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x1510C7D4: lh          $t9, 0x8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X8);
    // 0x1510C7D8: addu        $t4, $t8, $v1
    ctx->r12 = ADD32(ctx->r24, ctx->r3);
    // 0x1510C7DC: sh          $t9, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r25;
    // 0x1510C7E0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C7E4: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x1510C7E8: addu        $t7, $t3, $v0
    ctx->r15 = ADD32(ctx->r11, ctx->r2);
    // 0x1510C7EC: lh          $t5, 0xA($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA);
    // 0x1510C7F0: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x1510C7F4: sh          $t5, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r13;
    // 0x1510C7F8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C7FC: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x1510C800: addu        $t4, $t9, $v0
    ctx->r12 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C804: lh          $t3, 0x18($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X18);
    // 0x1510C808: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x1510C80C: sh          $t3, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r11;
    // 0x1510C810: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C814: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x1510C818: addu        $t8, $t5, $v0
    ctx->r24 = ADD32(ctx->r13, ctx->r2);
    // 0x1510C81C: lh          $t9, 0x1A($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X1A);
    // 0x1510C820: addu        $t7, $t4, $v1
    ctx->r15 = ADD32(ctx->r12, ctx->r3);
    // 0x1510C824: sh          $t9, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r25;
    // 0x1510C828: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C82C: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x1510C830: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x1510C834: lh          $t5, 0x28($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X28);
    // 0x1510C838: addu        $t4, $t8, $v1
    ctx->r12 = ADD32(ctx->r24, ctx->r3);
    // 0x1510C83C: sh          $t5, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r13;
    // 0x1510C840: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C844: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x1510C848: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x1510C84C: lh          $t3, 0x2A($t7)
    ctx->r11 = MEM_H(ctx->r15, 0X2A);
    // 0x1510C850: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x1510C854: sh          $t3, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r11;
    // 0x1510C858: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C85C: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x1510C860: addu        $t4, $t5, $v0
    ctx->r12 = ADD32(ctx->r13, ctx->r2);
    // 0x1510C864: lh          $t9, 0x38($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X38);
    // 0x1510C868: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x1510C86C: sh          $t9, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r25;
    // 0x1510C870: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1510C874: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x1510C878: addu        $t8, $t3, $v0
    ctx->r24 = ADD32(ctx->r11, ctx->r2);
    // 0x1510C87C: lh          $t5, 0x3A($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X3A);
    // 0x1510C880: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x1510C884: addu        $t7, $t4, $v1
    ctx->r15 = ADD32(ctx->r12, ctx->r3);
    // 0x1510C888: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1510C88C: bne         $v0, $a0, L_1510C7C8
    if (ctx->r2 != ctx->r4) {
        // 0x1510C890: sh          $t5, 0xE($t7)
        MEM_H(0XE, ctx->r15) = ctx->r13;
            goto L_1510C7C8;
    }
    // 0x1510C890: sh          $t5, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r13;
L_1510C894:
    // 0x1510C894: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_1510C898:
    // 0x1510C898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510C89C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1510C8A0: jr          $ra
    // 0x1510C8A4: nop

    return;
    return;
    // 0x1510C8A4: nop

;}
RECOMP_FUNC void func_1514654C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514654C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x15146550: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15146554: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15146558: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1514655C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15146560: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15146564: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x15146568: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1514656C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15146570: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x15146574: beq         $s2, $zero, L_15146590
    if (ctx->r18 == 0) {
        // 0x15146578: nop
    
            goto L_15146590;
    }
    // 0x15146578: nop

    // 0x1514657C: beq         $s0, $zero, L_15146590
    if (ctx->r16 == 0) {
        // 0x15146580: nop
    
            goto L_15146590;
    }
    // 0x15146580: nop

    // 0x15146584: lw          $v1, 0x1D4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1D4);
    // 0x15146588: bnel        $v1, $zero, L_1514659C
    if (ctx->r3 != 0) {
        // 0x1514658C: lw          $v0, 0x48($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X48);
            goto L_1514659C;
    }
    goto skip_0;
    // 0x1514658C: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    skip_0:
L_15146590:
    // 0x15146590: b           L_1514670C
    // 0x15146594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514670C;
    // 0x15146594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15146598: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
L_1514659C:
    // 0x1514659C: beql        $v0, $zero, L_151465DC
    if (ctx->r2 == 0) {
        // 0x151465A0: lhu         $v0, 0x1E($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X1E);
            goto L_151465DC;
    }
    goto skip_1;
    // 0x151465A0: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    skip_1:
    // 0x151465A4: lbu         $t6, 0x3F6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3F6);
    // 0x151465A8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151465AC: bne         $t6, $zero, L_151465BC
    if (ctx->r14 != 0) {
        // 0x151465B0: nop
    
            goto L_151465BC;
    }
    // 0x151465B0: nop

    // 0x151465B4: b           L_1514670C
    // 0x151465B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514670C;
    // 0x151465B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151465BC:
    // 0x151465BC: lbu         $t7, -0x1640($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1640);
    // 0x151465C0: sll         $t1, $a2, 6
    ctx->r9 = S32(ctx->r6 << 6);
    // 0x151465C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151465C8: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x151465CC: lw          $t0, 0x3E8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3E8);
    // 0x151465D0: b           L_15146694
    // 0x151465D4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
        goto L_15146694;
    // 0x151465D4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x151465D8: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
L_151465DC:
    // 0x151465DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151465E0: beq         $v0, $zero, L_15146650
    if (ctx->r2 == 0) {
        // 0x151465E4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_15146650;
    }
    // 0x151465E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x151465E8: jal         0x1503195C
    // 0x151465EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x151465EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x151465F0: bne         $v0, $zero, L_15146600
    if (ctx->r2 != 0) {
        // 0x151465F4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15146600;
    }
    // 0x151465F4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151465F8: b           L_1514670C
    // 0x151465FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514670C;
    // 0x151465FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15146600:
    // 0x15146600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15146604: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15146608: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x1514660C: jal         0x15031070
    // 0x15146610: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    func_15031070(rdram, ctx);
        goto after_1;
    // 0x15146610: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    after_1:
    // 0x15146614: bnel        $v0, $zero, L_15146628
    if (ctx->r2 != 0) {
        // 0x15146618: lw          $t2, 0x48($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X48);
            goto L_15146628;
    }
    goto skip_2;
    // 0x15146618: lw          $t2, 0x48($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X48);
    skip_2:
    // 0x1514661C: b           L_1514670C
    // 0x15146620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514670C;
    // 0x15146620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15146624: lw          $t2, 0x48($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X48);
L_15146628:
    // 0x15146628: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x1514662C: beq         $t2, $zero, L_15146648
    if (ctx->r10 == 0) {
        // 0x15146630: nop
    
            goto L_15146648;
    }
    // 0x15146630: nop

    // 0x15146634: lhu         $t3, 0x20($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X20);
    // 0x15146638: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x1514663C: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15146640: b           L_15146694
    // 0x15146644: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
        goto L_15146694;
    // 0x15146644: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
L_15146648:
    // 0x15146648: b           L_15146694
    // 0x1514664C: nop

        goto L_15146694;
    // 0x1514664C: nop

L_15146650:
    // 0x15146650: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x15146654: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x15146658: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1514665C: beql        $v0, $zero, L_15146678
    if (ctx->r2 == 0) {
        // 0x15146660: lbu         $t8, 0x2($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X2);
            goto L_15146678;
    }
    goto skip_3;
    // 0x15146660: lbu         $t8, 0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2);
    skip_3:
    // 0x15146664: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x15146668: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1514666C: b           L_15146694
    // 0x15146670: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
        goto L_15146694;
    // 0x15146670: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x15146674: lbu         $t8, 0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2);
L_15146678:
    // 0x15146678: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x1514667C: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x15146680: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15146684: jal         0x15145EA4
    // 0x15146688: addu        $a2, $v1, $t9
    ctx->r6 = ADD32(ctx->r3, ctx->r25);
    func_15145EA4(rdram, ctx);
        goto after_2;
    // 0x15146688: addu        $a2, $v1, $t9
    ctx->r6 = ADD32(ctx->r3, ctx->r25);
    after_2:
    // 0x1514668C: b           L_1514670C
    // 0x15146690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1514670C;
    // 0x15146690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15146694:
    // 0x15146694: beq         $a1, $zero, L_15146700
    if (ctx->r5 == 0) {
        // 0x15146698: addiu       $s4, $sp, 0x4C
        ctx->r20 = ADD32(ctx->r29, 0X4C);
            goto L_15146700;
    }
    // 0x15146698: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x1514669C: jal         0x151EFEB8
    // 0x151466A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    guMtxL2F(rdram, ctx);
        goto after_3;
    // 0x151466A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x151466A4: lw          $s3, 0xB4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB4);
    // 0x151466A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151466AC: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x151466B0: blez        $s3, L_15146708
    if (SIGNED(ctx->r19) <= 0) {
        // 0x151466B4: lw          $s2, 0xB0($sp)
        ctx->r18 = MEM_W(ctx->r29, 0XB0);
            goto L_15146708;
    }
    // 0x151466B4: lw          $s2, 0xB0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB0);
L_151466B8:
    // 0x151466B8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x151466BC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x151466C0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x151466C4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x151466C8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x151466CC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x151466D0: addiu       $t0, $v1, 0x4
    ctx->r8 = ADD32(ctx->r3, 0X4);
    // 0x151466D4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x151466D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151466DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151466E0: jal         0x150A7960
    // 0x151466E4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_150A7960(rdram, ctx);
        goto after_4;
    // 0x151466E4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_4:
    // 0x151466E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151466EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x151466F0: bne         $s0, $s3, L_151466B8
    if (ctx->r16 != ctx->r19) {
        // 0x151466F4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_151466B8;
    }
    // 0x151466F4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x151466F8: b           L_1514670C
    // 0x151466FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1514670C;
    // 0x151466FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15146700:
    // 0x15146700: b           L_1514670C
    // 0x15146704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514670C;
    // 0x15146704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15146708:
    // 0x15146708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514670C:
    // 0x1514670C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15146710: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15146714: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x15146718: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1514671C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x15146720: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x15146724: jr          $ra
    // 0x15146728: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x15146728: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_151DE85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DE85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DE860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DE864: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151DE868: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151DE86C: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151DE870: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151DE874: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151DE878: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x151DE87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DE880: jal         0x1501C730
    // 0x151DE884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_0;
    // 0x151DE884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151DE888: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151DE88C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE890: sb          $t7, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r15;
    // 0x151DE894: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE898: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DE89C: sb          $t8, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r24;
    // 0x151DE8A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE8A4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151DE8A8: sb          $t9, -0x1D8($at)
    MEM_B(-0X1D8, ctx->r1) = ctx->r25;
    // 0x151DE8AC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151DE8B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE8B4: addiu       $v1, $v1, -0x22C
    ctx->r3 = ADD32(ctx->r3, -0X22C);
    // 0x151DE8B8: sb          $zero, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = 0;
    // 0x151DE8BC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x151DE8C0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x151DE8C4: sb          $zero, 0x3E($t0)
    MEM_B(0X3E, ctx->r8) = 0;
    // 0x151DE8C8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x151DE8CC: sb          $t1, 0x2B($t2)
    MEM_B(0X2B, ctx->r10) = ctx->r9;
    // 0x151DE8D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151DE8D4: lb          $t3, 0x2B($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X2B);
    // 0x151DE8D8: sb          $t3, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r11;
    // 0x151DE8DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DE8E0: jr          $ra
    // 0x151DE8E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151DE8E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150739A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150739A4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150739A8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150739AC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150739B0: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x150739B4: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x150739B8: jr          $ra
    // 0x150739BC: nop

    return;
    return;
    // 0x150739BC: nop

;}
RECOMP_FUNC void func_150408A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150408A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150408AC: jr          $ra
    // 0x150408B0: nop

    return;
    return;
    // 0x150408B0: nop

;}
RECOMP_FUNC void func_1001E2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001E2A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001E2A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001E2A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001E2AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001E2B0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001E2B4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001E2B8: beq         $t7, $zero, L_1001E338
    if (ctx->r15 == 0) {
        // 0x1001E2BC: nop
    
            goto L_1001E338;
    }
    // 0x1001E2BC: nop

    // 0x1001E2C0: jal         0x100196E4
    // 0x1001E2C4: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001E2C4: nop

    after_0:
    // 0x1001E2C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001E2CC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E2D0: bne         $t8, $zero, L_1001E2E0
    if (ctx->r24 != 0) {
        // 0x1001E2D4: nop
    
            goto L_1001E2E0;
    }
    // 0x1001E2D4: nop

    // 0x1001E2D8: b           L_1001E340
    // 0x1001E2DC: nop

        goto L_1001E340;
    // 0x1001E2DC: nop

L_1001E2E0:
    // 0x1001E2E0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001E2E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001E2E8: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001E2EC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001E2F0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E2F4: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x1001E2F8: lw          $t3, 0x90($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X90);
    // 0x1001E2FC: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x1001E300: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001E304: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E308: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x1001E30C: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001E310: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x1001E314: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E318: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x1001E31C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E320: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x1001E324: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001E328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001E32C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E330: jal         0x10020978
    // 0x1001E334: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_1;
    // 0x1001E334: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_1:
L_1001E338:
    // 0x1001E338: b           L_1001E340
    // 0x1001E33C: nop

        goto L_1001E340;
    // 0x1001E33C: nop

L_1001E340:
    // 0x1001E340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001E344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001E348: jr          $ra
    // 0x1001E34C: nop

    return;
    return;
    // 0x1001E34C: nop

;}
RECOMP_FUNC void func_1517EA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517EA4C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1517EA50: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1517EA54: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1517EA58: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1517EA5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517EA60: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1517EA64: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x1517EA68: lui         $t8, 0xFF65
    ctx->r24 = S32(0XFF65 << 16);
    // 0x1517EA6C: ori         $t8, $t8, 0xFEFF
    ctx->r24 = ctx->r24 | 0XFEFF;
    // 0x1517EA70: ori         $t7, $t7, 0xB3FF
    ctx->r15 = ctx->r15 | 0XB3FF;
    // 0x1517EA74: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x1517EA78: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x1517EA7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517EA80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1517EA84: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x1517EA88: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x1517EA8C: ori         $t0, $t0, 0x4344
    ctx->r8 = ctx->r8 | 0X4344;
    // 0x1517EA90: ori         $t9, $t9, 0x2C0F
    ctx->r25 = ctx->r25 | 0X2C0F;
    // 0x1517EA94: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x1517EA98: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x1517EA9C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517EAA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1517EAA4: jr          $ra
    // 0x1517EAA8: nop

    return;
    return;
    // 0x1517EAA8: nop

;}
RECOMP_FUNC void func_150B57E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B57E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B57EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B57F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150B57F4: jal         0x150B57C4
    // 0x150B57F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150B57C4(rdram, ctx);
        goto after_0;
    // 0x150B57F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150B57FC: jal         0x1514933C
    // 0x150B5800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150B5800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150B5804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B5808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B580C: jr          $ra
    // 0x150B5810: nop

    return;
    return;
    // 0x150B5810: nop

;}
RECOMP_FUNC void func_151AE3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE3A8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151AE3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AE3B0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x151AE3B4: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x151AE3B8: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x151AE3BC: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x151AE3C0: lw          $v1, 0x9C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X9C);
    // 0x151AE3C4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151AE3C8: jal         0x15143E08
    // 0x151AE3CC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_15143E08(rdram, ctx);
        goto after_0;
    // 0x151AE3CC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_0:
    // 0x151AE3D0: addiu       $a0, $v0, -0x80
    ctx->r4 = ADD32(ctx->r2, -0X80);
    // 0x151AE3D4: sb          $a0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r4;
    // 0x151AE3D8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151AE3DC: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x151AE3E0: jal         0x151423D8
    // 0x151AE3E4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151AE3E4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x151AE3E8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151AE3EC: jal         0x151423D8
    // 0x151AE3F0: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151AE3F0: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    after_2:
    // 0x151AE3F4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151AE3F8: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x151AE3FC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x151AE400: lw          $a2, 0x31C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X31C);
    // 0x151AE404: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x151AE408: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151AE40C: lwc1        $f16, 0x28($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X28);
    // 0x151AE410: lwc1        $f2, 0xA0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XA0);
    // 0x151AE414: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x151AE418: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x151AE41C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x151AE420: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AE424: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x151AE428: lwc1        $f10, 0x3C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x151AE42C: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151AE430: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151AE434: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151AE438: nop

    // 0x151AE43C: lbu         $t1, 0x42($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X42);
    // 0x151AE440: subu        $t2, $t1, $a3
    ctx->r10 = SUB32(ctx->r9, ctx->r7);
    // 0x151AE444: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x151AE448: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x151AE44C: nop

    // 0x151AE450: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151AE454: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151AE458: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151AE45C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x151AE460: nop

    // 0x151AE464: sb          $v0, 0xAE($a2)
    MEM_B(0XAE, ctx->r6) = ctx->r2;
    // 0x151AE468: lbu         $t5, 0x42($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X42);
    // 0x151AE46C: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x151AE470: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x151AE474: subu        $t6, $t5, $a3
    ctx->r14 = SUB32(ctx->r13, ctx->r7);
    // 0x151AE478: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x151AE47C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151AE480: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x151AE484: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x151AE488: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151AE48C: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x151AE490: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x151AE494: nop

    // 0x151AE498: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151AE49C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151AE4A0: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x151AE4A4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x151AE4A8: lw          $t0, 0x38($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X38);
    // 0x151AE4AC: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151AE4B0: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x151AE4B4: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151AE4B8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x151AE4BC: lw          $t2, 0x38($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X38);
    // 0x151AE4C0: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x151AE4C4: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x151AE4C8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151AE4CC: lw          $t4, 0x38($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X38);
    // 0x151AE4D0: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x151AE4D4: lwc1        $f8, 0x18($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X18);
    // 0x151AE4D8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x151AE4DC: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x151AE4E0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x151AE4E4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151AE4E8: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x151AE4EC: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x151AE4F0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x151AE4F4: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x151AE4F8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151AE4FC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151AE500: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x151AE504: lwc1        $f6, 0x20($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X20);
    // 0x151AE508: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x151AE50C: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151AE510: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151AE514: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AE518: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151AE51C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151AE520: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151AE524: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151AE528: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151AE52C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AE530: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x151AE534: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151AE538: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151AE53C: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151AE540: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151AE544: nop

    // 0x151AE548: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151AE54C: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151AE550: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x151AE554: sub.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x151AE558: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151AE55C: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x151AE560: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151AE564: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151AE568: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151AE56C: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151AE570: swc1        $f6, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f6.u32l;
    // 0x151AE574: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151AE578: sub.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x151AE57C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151AE580: swc1        $f4, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f4.u32l;
    // 0x151AE584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AE588: jr          $ra
    // 0x151AE58C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151AE58C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1514BE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514BE20: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1514BE24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514BE28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514BE2C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1514BE30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514BE34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514BE38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514BE3C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514BE40: lwc1        $f2, 0x34($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1514BE44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1514BE48: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x1514BE4C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514BE50: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x1514BE54: lwc1        $f12, 0x40($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1514BE58: lwc1        $f0, 0x15C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x1514BE5C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1514BE60: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x1514BE64: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514BE68: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x1514BE6C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x1514BE70: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1514BE74: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1514BE78: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1514BE7C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514BE80: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x1514BE84: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x1514BE88: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1514BE8C: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1514BE90: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1514BE94: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514BE98: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x1514BE9C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1514BEA0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x1514BEA4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1514BEA8: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514BEAC: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1514BEB0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1514BEB4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514BEB8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1514BEBC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x1514BEC0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x1514BEC4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1514BEC8: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514BECC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1514BED0: jal         0x15145128
    // 0x1514BED4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_15145128(rdram, ctx);
        goto after_0;
    // 0x1514BED4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1514BED8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514BEDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514BEE0: beq         $v0, $zero, L_1514BF24
    if (ctx->r2 == 0) {
        // 0x1514BEE4: lwc1        $f4, 0x38($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
            goto L_1514BF24;
    }
    // 0x1514BEE4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1514BEE8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514BEEC: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1514BEF0: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514BEF4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1514BEF8: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x1514BEFC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1514BF00: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514BF04: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514BF08: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1514BF0C: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x1514BF10: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1514BF14: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514BF18: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1514BF1C: b           L_1514BF3C
    // 0x1514BF20: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
        goto L_1514BF3C;
    // 0x1514BF20: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
L_1514BF24:
    // 0x1514BF24: lw          $at, 0x34($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X34);
    // 0x1514BF28: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x1514BF2C: sw          $at, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r1;
    // 0x1514BF30: lw          $at, 0x3C($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X3C);
    // 0x1514BF34: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x1514BF38: sw          $at, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r1;
L_1514BF3C:
    // 0x1514BF3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514BF40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514BF44: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1514BF48: jr          $ra
    // 0x1514BF4C: nop

    return;
    return;
    // 0x1514BF4C: nop

;}
RECOMP_FUNC void func_150AF1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AF1C0: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150AF1C4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x150AF1C8: sll         $t6, $v1, 5
    ctx->r14 = S32(ctx->r3 << 5);
    // 0x150AF1CC: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x150AF1D0: bne         $at, $zero, L_150AF1DC
    if (ctx->r1 != 0) {
        // 0x150AF1D4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_150AF1DC;
    }
    // 0x150AF1D4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x150AF1D8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_150AF1DC:
    // 0x150AF1DC: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x150AF1E0: bgez        $t7, L_150AF1F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150AF1E4: sb          $v1, 0x1B($v0)
        MEM_B(0X1B, ctx->r2) = ctx->r3;
            goto L_150AF1F0;
    }
    // 0x150AF1E4: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x150AF1E8: jr          $ra
    // 0x150AF1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150AF1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150AF1F0:
    // 0x150AF1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AF1F4: jr          $ra
    // 0x150AF1F8: nop

    return;
    return;
    // 0x150AF1F8: nop

;}
RECOMP_FUNC void func_15141A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141A7C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15141A80: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15141A84: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15141A88: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15141A8C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15141A90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15141A94: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15141A98: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15141A9C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15141AA0: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15141AA4: bnel        $t6, $zero, L_15141BF4
    if (ctx->r14 != 0) {
        // 0x15141AA8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15141BF4;
    }
    goto skip_0;
    // 0x15141AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15141AAC: jal         0x15141C0C
    // 0x15141AB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_15141C0C(rdram, ctx);
        goto after_0;
    // 0x15141AB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x15141AB4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15141AB8: addiu       $s1, $s1, -0x5F7C
    ctx->r17 = ADD32(ctx->r17, -0X5F7C);
    // 0x15141ABC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15141AC0: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x15141AC4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15141AC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15141ACC: beq         $t9, $zero, L_15141B60
    if (ctx->r25 == 0) {
        // 0x15141AD0: nop
    
            goto L_15141B60;
    }
    // 0x15141AD0: nop

    // 0x15141AD4: jal         0x1510F8CC
    // 0x15141AD8: lw          $a0, 0x184($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X184);
    func_1510F8CC(rdram, ctx);
        goto after_1;
    // 0x15141AD8: lw          $a0, 0x184($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X184);
    after_1:
    // 0x15141ADC: jal         0x15141CC0
    // 0x15141AE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15141CC0(rdram, ctx);
        goto after_2;
    // 0x15141AE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x15141AE4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15141AE8: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x15141AEC: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15141AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15141AF4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15141AF8: jalr        $t9
    // 0x15141AFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x15141AFC: nop

    after_3:
    // 0x15141B00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15141B04: beq         $v0, $at, L_15141B60
    if (ctx->r2 == ctx->r1) {
        // 0x15141B08: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_15141B60;
    }
    // 0x15141B08: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15141B0C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x15141B10: addiu       $s0, $s0, -0x5F4C
    ctx->r16 = ADD32(ctx->r16, -0X5F4C);
    // 0x15141B14: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x15141B18: addu        $v1, $s0, $t2
    ctx->r3 = ADD32(ctx->r16, ctx->r10);
    // 0x15141B1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15141B20: beq         $t3, $zero, L_15141B60
    if (ctx->r11 == 0) {
        // 0x15141B24: nop
    
            goto L_15141B60;
    }
    // 0x15141B24: nop

    // 0x15141B28: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x15141B2C: sll         $t5, $a3, 3
    ctx->r13 = S32(ctx->r7 << 3);
    // 0x15141B30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15141B34: blez        $t4, L_15141B4C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x15141B38: addu        $t6, $s0, $t5
        ctx->r14 = ADD32(ctx->r16, ctx->r13);
            goto L_15141B4C;
    }
    // 0x15141B38: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x15141B3C: jal         0x15141E38
    // 0x15141B40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_15141E38(rdram, ctx);
        goto after_4;
    // 0x15141B40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x15141B44: b           L_15141B60
    // 0x15141B48: nop

        goto L_15141B60;
    // 0x15141B48: nop

L_15141B4C:
    // 0x15141B4C: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x15141B50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15141B54: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15141B58: jalr        $t9
    // 0x15141B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x15141B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_15141B60:
    // 0x15141B60: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x15141B64: addiu       $s0, $s0, -0x5F4C
    ctx->r16 = ADD32(ctx->r16, -0X5F4C);
    // 0x15141B68: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x15141B6C: lw          $a0, 0x2F4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2F4);
    // 0x15141B70: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15141B74: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15141B78: jal         0x1514ECE0
    // 0x15141B7C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    func_1514ECE0(rdram, ctx);
        goto after_6;
    // 0x15141B7C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_6:
    // 0x15141B80: beql        $v0, $zero, L_15141BF4
    if (ctx->r2 == 0) {
        // 0x15141B84: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15141BF4;
    }
    goto skip_1;
    // 0x15141B84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x15141B88: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_15141B8C:
    // 0x15141B8C: lw          $v0, 0x10($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X10);
    // 0x15141B90: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x15141B94: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x15141B98: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x15141B9C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x15141BA0: beql        $t3, $zero, L_15141BD0
    if (ctx->r11 == 0) {
        // 0x15141BA4: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_15141BD0;
    }
    goto skip_2;
    // 0x15141BA4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x15141BA8: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
    // 0x15141BAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15141BB0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15141BB4: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x15141BB8: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x15141BBC: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x15141BC0: lh          $a2, 0xE($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XE);
    // 0x15141BC4: jalr        $t9
    // 0x15141BC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x15141BC8: nop

    after_7:
    // 0x15141BCC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_15141BD0:
    // 0x15141BD0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15141BD4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15141BD8: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x15141BDC: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x15141BE0: jal         0x1514ECE0
    // 0x15141BE4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_1514ECE0(rdram, ctx);
        goto after_8;
    // 0x15141BE4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_8:
    // 0x15141BE8: bnel        $v0, $zero, L_15141B8C
    if (ctx->r2 != 0) {
        // 0x15141BEC: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_15141B8C;
    }
    goto skip_3;
    // 0x15141BEC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x15141BF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15141BF4:
    // 0x15141BF4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15141BF8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15141BFC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15141C00: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15141C04: jr          $ra
    // 0x15141C08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15141C08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1507B040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B040: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B044: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507B048: lhu         $t6, 0x7A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X7A);
    // 0x1507B04C: sh          $t6, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r14;
    // 0x1507B050: jr          $ra
    // 0x1507B054: nop

    return;
    return;
    // 0x1507B054: nop

;}
RECOMP_FUNC void func_150B77A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B77A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150B77AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150B77B0: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150B77B4: addiu       $s0, $s0, -0x6768
    ctx->r16 = ADD32(ctx->r16, -0X6768);
    // 0x150B77B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B77BC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x150B77C0: beql        $a0, $zero, L_150B77D8
    if (ctx->r4 == 0) {
        // 0x150B77C4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_150B77D8;
    }
    goto skip_0;
    // 0x150B77C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_0:
    // 0x150B77C8: jal         0x1516972C
    // 0x150B77CC: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B77CC: nop

    after_0:
    // 0x150B77D0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x150B77D4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_150B77D8:
    // 0x150B77D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B77DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150B77E0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150B77E4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x150B77E8: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B77EC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x150B77F0: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x150B77F4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150B77F8: addiu       $t9, $t9, 0x18F4
    ctx->r25 = ADD32(ctx->r25, 0X18F4);
    // 0x150B77FC: addiu       $t0, $t0, 0x1900
    ctx->r8 = ADD32(ctx->r8, 0X1900);
    // 0x150B7800: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B7804: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x150B7808: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x150B780C: sb          $t8, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r24;
    // 0x150B7810: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150B7814: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150B7818: addiu       $t1, $zero, -0x800
    ctx->r9 = ADD32(0, -0X800);
    // 0x150B781C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x150B7820: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B7824: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B7828: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x150B782C: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x150B7830: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150B7834: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150B7838: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x150B783C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    // 0x150B7840: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x150B7844: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150B7848: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150B784C: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150B7850: sh          $t1, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r9;
    // 0x150B7854: sh          $t2, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r10;
    // 0x150B7858: sb          $t3, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r11;
    // 0x150B785C: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x150B7860: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x150B7864: sb          $t4, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r12;
    // 0x150B7868: sb          $t5, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r13;
    // 0x150B786C: sb          $t6, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r14;
    // 0x150B7870: sb          $t7, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r15;
    // 0x150B7874: sb          $t8, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r24;
    // 0x150B7878: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x150B787C: sh          $t0, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r8;
    // 0x150B7880: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150B7884: beq         $a0, $zero, L_150B7894
    if (ctx->r4 == 0) {
        // 0x150B7888: swc1        $f6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
            goto L_150B7894;
    }
    // 0x150B7888: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x150B788C: jal         0x1516972C
    // 0x150B7890: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150B7890: nop

    after_1:
L_150B7894:
    // 0x150B7894: jal         0x15169968
    // 0x150B7898: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_2;
    // 0x150B7898: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x150B789C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x150B78A0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150B78A4: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x150B78A8: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x150B78AC: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150B78B0: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x150B78B4: addiu       $t5, $t5, 0x18E8
    ctx->r13 = ADD32(ctx->r13, 0X18E8);
    // 0x150B78B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B78BC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x150B78C0: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150B78C4: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x150B78C8: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x150B78CC: sh          $t2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r10;
    // 0x150B78D0: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150B78D4: sb          $t3, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r11;
    // 0x150B78D8: sb          $t4, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r12;
    // 0x150B78DC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150B78E0: beq         $a0, $zero, L_150B78F0
    if (ctx->r4 == 0) {
        // 0x150B78E4: sb          $t6, 0x5C($sp)
        MEM_B(0X5C, ctx->r29) = ctx->r14;
            goto L_150B78F0;
    }
    // 0x150B78E4: sb          $t6, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r14;
    // 0x150B78E8: jal         0x1516972C
    // 0x150B78EC: nop

    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x150B78EC: nop

    after_3:
L_150B78F0:
    // 0x150B78F0: jal         0x15169968
    // 0x150B78F4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_15169968(rdram, ctx);
        goto after_4;
    // 0x150B78F4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x150B78F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x150B78FC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150B7900: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B7904: sb          $t7, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r15;
    // 0x150B7908: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B790C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150B7910: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150B7914: jr          $ra
    // 0x150B7918: nop

    return;
    return;
    // 0x150B7918: nop

;}
RECOMP_FUNC void func_1509C440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C440: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1509C444: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1509C448: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1509C44C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1509C450: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1509C454: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x1509C458: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x1509C45C: beq         $at, $zero, L_1509C7B4
    if (ctx->r1 == 0) {
        // 0x1509C460: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1509C7B4;
    }
    // 0x1509C460: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509C464: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509C468: addu        $at, $at, $t6
    gpr jr_addend_1509C470 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509C46C: lw          $t6, -0x1BC0($at)
    ctx->r14 = ADD32(ctx->r1, -0X1BC0);
    // 0x1509C470: jr          $t6
    // 0x1509C474: nop

    switch (jr_addend_1509C470 >> 2) {
        case 0: goto L_1509C478; break;
        case 1: goto L_1509C680; break;
        case 2: goto L_1509C5D0; break;
        case 3: goto L_1509C538; break;
        case 4: goto L_1509C73C; break;
        case 5: goto L_1509C7A8; break;
        default: switch_error(__func__, 0x1509C470, 0x8009E440);
    }
    // 0x1509C474: nop

L_1509C478:
    // 0x1509C478: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1509C47C: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x1509C480: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1509C484: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x1509C488: bne         $t7, $zero, L_1509C530
    if (ctx->r15 != 0) {
        // 0x1509C48C: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1509C530;
    }
    // 0x1509C48C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509C490: lw          $v0, 0x3840($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3840);
    // 0x1509C494: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1509C498: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1509C49C: bne         $v0, $at, L_1509C4DC
    if (ctx->r2 != ctx->r1) {
        // 0x1509C4A0: sw          $t8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r24;
            goto L_1509C4DC;
    }
    // 0x1509C4A0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x1509C4A4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x1509C4A8: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509C4AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1509C4B0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1509C4B4: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x1509C4B8: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x1509C4BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509C4C0: lh          $a2, 0x12($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X12);
    // 0x1509C4C4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1509C4C8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1509C4CC: jal         0x15022190
    // 0x1509C4D0: nop

    func_15022190(rdram, ctx);
        goto after_0;
    // 0x1509C4D0: nop

    after_0:
    // 0x1509C4D4: b           L_1509C514
    // 0x1509C4D8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
        goto L_1509C514;
    // 0x1509C4D8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
L_1509C4DC:
    // 0x1509C4DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1509C4E0: bnel        $v0, $at, L_1509C514
    if (ctx->r2 != ctx->r1) {
        // 0x1509C4E4: lw          $a0, 0x3C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X3C);
            goto L_1509C514;
    }
    goto skip_0;
    // 0x1509C4E4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1509C4E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509C4EC: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x1509C4F0: andi        $t1, $a0, 0xF000
    ctx->r9 = ctx->r4 & 0XF000;
    // 0x1509C4F4: bnel        $t1, $at, L_1509C510
    if (ctx->r9 != ctx->r1) {
        // 0x1509C4F8: sw          $a0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r4;
            goto L_1509C510;
    }
    goto skip_1;
    // 0x1509C4F8: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    skip_1:
    // 0x1509C4FC: jal         0x1509C8FC
    // 0x1509C500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1509C8FC(rdram, ctx);
        goto after_1;
    // 0x1509C500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x1509C504: b           L_1509C514
    // 0x1509C508: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
        goto L_1509C514;
    // 0x1509C508: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1509C50C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
L_1509C510:
    // 0x1509C510: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
L_1509C514:
    // 0x1509C514: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1509C518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509C51C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509C520: jal         0x1501D348
    // 0x1509C524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501D348(rdram, ctx);
        goto after_2;
    // 0x1509C524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x1509C528: b           L_1509C7B4
    // 0x1509C52C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509C7B4;
    // 0x1509C52C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509C530:
    // 0x1509C530: b           L_1509C7B4
    // 0x1509C534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509C7B4;
    // 0x1509C534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509C538:
    // 0x1509C538: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1509C53C: lbu         $t2, 0x35EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X35EA);
    // 0x1509C540: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1509C544: bne         $t2, $zero, L_1509C5C8
    if (ctx->r10 != 0) {
        // 0x1509C548: nop
    
            goto L_1509C5C8;
    }
    // 0x1509C548: nop

    // 0x1509C54C: lw          $t3, 0x3840($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3840);
    // 0x1509C550: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1509C554: bne         $t3, $at, L_1509C58C
    if (ctx->r11 != ctx->r1) {
        // 0x1509C558: nop
    
            goto L_1509C58C;
    }
    // 0x1509C558: nop

    // 0x1509C55C: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x1509C560: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509C564: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1509C568: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x1509C56C: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x1509C570: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x1509C574: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509C578: lh          $a2, 0x12($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X12);
    // 0x1509C57C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1509C580: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1509C584: jal         0x15022190
    // 0x1509C588: nop

    func_15022190(rdram, ctx);
        goto after_3;
    // 0x1509C588: nop

    after_3:
L_1509C58C:
    // 0x1509C58C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1509C590: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x1509C594: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x1509C598: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x1509C59C: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x1509C5A0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1509C5A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509C5A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509C5AC: jal         0x1501D348
    // 0x1509C5B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501D348(rdram, ctx);
        goto after_4;
    // 0x1509C5B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x1509C5B4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1509C5B8: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x1509C5BC: sw          $s0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r16;
    // 0x1509C5C0: b           L_1509C7B4
    // 0x1509C5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509C7B4;
    // 0x1509C5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509C5C8:
    // 0x1509C5C8: b           L_1509C7B4
    // 0x1509C5CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509C7B4;
    // 0x1509C5CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509C5D0:
    // 0x1509C5D0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1509C5D4: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1509C5D8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1509C5DC: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x1509C5E0: bne         $t6, $zero, L_1509C678
    if (ctx->r14 != 0) {
        // 0x1509C5E4: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1509C678;
    }
    // 0x1509C5E4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509C5E8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x1509C5EC: lw          $v0, 0x3840($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3840);
    // 0x1509C5F0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1509C5F4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1509C5F8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x1509C5FC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1509C600: bne         $v0, $at, L_1509C644
    if (ctx->r2 != ctx->r1) {
        // 0x1509C604: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_1509C644;
    }
    // 0x1509C604: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x1509C608: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x1509C60C: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509C610: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1509C614: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1509C618: lh          $a0, 0x12($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X12);
    // 0x1509C61C: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x1509C620: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509C624: lh          $a2, 0x1A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1A);
    // 0x1509C628: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x1509C62C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1509C630: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1509C634: jal         0x15022190
    // 0x1509C638: nop

    func_15022190(rdram, ctx);
        goto after_5;
    // 0x1509C638: nop

    after_5:
    // 0x1509C63C: b           L_1509C658
    // 0x1509C640: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
        goto L_1509C658;
    // 0x1509C640: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_1509C644:
    // 0x1509C644: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1509C648: bnel        $v0, $at, L_1509C65C
    if (ctx->r2 != ctx->r1) {
        // 0x1509C64C: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_1509C65C;
    }
    goto skip_2;
    // 0x1509C64C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x1509C650: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x1509C654: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_1509C658:
    // 0x1509C658: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_1509C65C:
    // 0x1509C65C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1509C660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509C664: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1509C668: jal         0x1501D348
    // 0x1509C66C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_1501D348(rdram, ctx);
        goto after_6;
    // 0x1509C66C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_6:
    // 0x1509C670: b           L_1509C7B4
    // 0x1509C674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509C7B4;
    // 0x1509C674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509C678:
    // 0x1509C678: b           L_1509C7B4
    // 0x1509C67C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509C7B4;
    // 0x1509C67C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509C680:
    // 0x1509C680: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1509C684: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1509C688: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x1509C68C: addiu       $a1, $a1, 0x35C3
    ctx->r5 = ADD32(ctx->r5, 0X35C3);
    // 0x1509C690: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1509C694: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x1509C698: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509C69C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1509C6A0: sb          $t3, 0x35C2($at)
    MEM_B(0X35C2, ctx->r1) = ctx->r11;
    // 0x1509C6A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509C6A8: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x1509C6AC: lw          $v0, 0x3840($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3840);
    // 0x1509C6B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509C6B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1509C6B8: sb          $t4, 0x3C99($at)
    MEM_B(0X3C99, ctx->r1) = ctx->r12;
    // 0x1509C6BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1509C6C0: bnel        $v0, $at, L_1509C704
    if (ctx->r2 != ctx->r1) {
        // 0x1509C6C4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1509C704;
    }
    goto skip_3;
    // 0x1509C6C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_3:
    // 0x1509C6C8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x1509C6CC: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509C6D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1509C6D4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1509C6D8: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x1509C6DC: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x1509C6E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509C6E4: lh          $a2, 0x12($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X12);
    // 0x1509C6E8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1509C6EC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1509C6F0: jal         0x150221E8
    // 0x1509C6F4: nop

    func_150221E8(rdram, ctx);
        goto after_7;
    // 0x1509C6F4: nop

    after_7:
    // 0x1509C6F8: b           L_1509C7B8
    // 0x1509C6FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1509C7B8;
    // 0x1509C6FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1509C700: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1509C704:
    // 0x1509C704: bnel        $v0, $at, L_1509C7B8
    if (ctx->r2 != ctx->r1) {
        // 0x1509C708: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1509C7B8;
    }
    goto skip_4;
    // 0x1509C708: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x1509C70C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509C710: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x1509C714: andi        $t6, $a0, 0xF000
    ctx->r14 = ctx->r4 & 0XF000;
    // 0x1509C718: bnel        $t6, $at, L_1509C734
    if (ctx->r14 != ctx->r1) {
        // 0x1509C71C: sb          $a0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r4;
            goto L_1509C734;
    }
    goto skip_5;
    // 0x1509C71C: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    skip_5:
    // 0x1509C720: jal         0x1509C8FC
    // 0x1509C724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1509C8FC(rdram, ctx);
        goto after_8;
    // 0x1509C724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x1509C728: b           L_1509C7B8
    // 0x1509C72C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1509C7B8;
    // 0x1509C72C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1509C730: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
L_1509C734:
    // 0x1509C734: b           L_1509C7B8
    // 0x1509C738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1509C7B8;
    // 0x1509C738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1509C73C:
    // 0x1509C73C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1509C740: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1509C744: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509C748: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1509C74C: addiu       $a1, $a1, 0x35C3
    ctx->r5 = ADD32(ctx->r5, 0X35C3);
    // 0x1509C750: sb          $t8, 0x35C2($at)
    MEM_B(0X35C2, ctx->r1) = ctx->r24;
    // 0x1509C754: addiu       $t9, $zero, 0x25
    ctx->r25 = ADD32(0, 0X25);
    // 0x1509C758: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x1509C75C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1509C760: lw          $t1, 0x3840($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3840);
    // 0x1509C764: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1509C768: bnel        $t1, $at, L_1509C7B8
    if (ctx->r9 != ctx->r1) {
        // 0x1509C76C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1509C7B8;
    }
    goto skip_6;
    // 0x1509C76C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x1509C770: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x1509C774: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509C778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1509C77C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x1509C780: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x1509C784: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x1509C788: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509C78C: lh          $a2, 0x12($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X12);
    // 0x1509C790: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1509C794: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1509C798: jal         0x150221E8
    // 0x1509C79C: nop

    func_150221E8(rdram, ctx);
        goto after_9;
    // 0x1509C79C: nop

    after_9:
    // 0x1509C7A0: b           L_1509C7B8
    // 0x1509C7A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1509C7B8;
    // 0x1509C7A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1509C7A8:
    // 0x1509C7A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1509C7AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509C7B0: sb          $t3, 0x3C9C($at)
    MEM_B(0X3C9C, ctx->r1) = ctx->r11;
L_1509C7B4:
    // 0x1509C7B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1509C7B8:
    // 0x1509C7B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1509C7BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1509C7C0: jr          $ra
    // 0x1509C7C4: nop

    return;
    return;
    // 0x1509C7C4: nop

;}
RECOMP_FUNC void func_1503CB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503CB98: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x1503CB9C: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x1503CBA0: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x1503CBA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503CBA8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1503CBAC: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1503CBB0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1503CBB4: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x1503CBB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503CBBC: addiu       $fp, $sp, 0x100
    ctx->r30 = ADD32(ctx->r29, 0X100);
    // 0x1503CBC0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1503CBC4: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1503CBC8: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1503CBCC: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1503CBD0: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1503CBD4: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1503CBD8: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1503CBDC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1503CBE0: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x1503CBE4: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1503CBE8: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1503CBEC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1503CBF0: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    // 0x1503CBF4: sw          $a3, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r7;
    // 0x1503CBF8: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x1503CBFC: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x1503CC00: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503CC04: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x1503CC08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503CC0C: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x1503CC10: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503CC14: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x1503CC18: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1503CC1C: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1503CC20: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503CC24: addu        $s3, $t3, $t4
    ctx->r19 = ADD32(ctx->r11, ctx->r12);
    // 0x1503CC28: lw          $a1, 0xB8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XB8);
    // 0x1503CC2C: lw          $a2, 0x40($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X40);
    // 0x1503CC30: lw          $a3, 0xC4($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC4);
    // 0x1503CC34: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x1503CC38: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x1503CC3C: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x1503CC40: jal         0x150A9B0C
    // 0x1503CC44: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    func_150A9B0C(rdram, ctx);
        goto after_0;
    // 0x1503CC44: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    after_0:
    // 0x1503CC48: lw          $s0, 0x184($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X184);
    // 0x1503CC4C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x1503CC50: addiu       $s1, $zero, 0x600
    ctx->r17 = ADD32(0, 0X600);
    // 0x1503CC54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1503CC58: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1503CC5C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x1503CC60: addiu       $s6, $s0, 0x30
    ctx->r22 = ADD32(ctx->r16, 0X30);
L_1503CC64:
    // 0x1503CC64: lw          $v1, 0x1D4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1D4);
    // 0x1503CC68: addiu       $t6, $sp, 0xC4
    ctx->r14 = ADD32(ctx->r29, 0XC4);
    // 0x1503CC6C: bne         $s2, $zero, L_1503CC7C
    if (ctx->r18 != 0) {
        // 0x1503CC70: addu        $s5, $v1, $s1
        ctx->r21 = ADD32(ctx->r3, ctx->r17);
            goto L_1503CC7C;
    }
    // 0x1503CC70: addu        $s5, $v1, $s1
    ctx->r21 = ADD32(ctx->r3, ctx->r17);
    // 0x1503CC74: b           L_1503CC84
    // 0x1503CC78: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
        goto L_1503CC84;
    // 0x1503CC78: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
L_1503CC7C:
    // 0x1503CC7C: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
    // 0x1503CC80: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_1503CC84:
    // 0x1503CC84: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1503CC88: swc1        $f8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f8.u32l;
    // 0x1503CC8C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1503CC90: lwc1        $f10, 0x168($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X168);
    // 0x1503CC94: swc1        $f4, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f4.u32l;
    // 0x1503CC98: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1503CC9C: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1503CCA0: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x1503CCA4: swc1        $f6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f6.u32l;
    // 0x1503CCA8: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x1503CCAC: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1503CCB0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1503CCB4: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x1503CCB8: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1503CCBC: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1503CCC0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1503CCC4: c.eq.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl == ctx->f30.fl;
    // 0x1503CCC8: nop

    // 0x1503CCCC: bc1tl       L_1503CCFC
    if (c1cs) {
        // 0x1503CCD0: lw          $t5, 0x17C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X17C);
            goto L_1503CCFC;
    }
    goto skip_0;
    // 0x1503CCD0: lw          $t5, 0x17C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X17C);
    skip_0:
    // 0x1503CCD4: div.s       $f2, $f28, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f28.fl, ctx->f0.fl);
    // 0x1503CCD8: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1503CCDC: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1503CCE0: swc1        $f8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f8.u32l;
    // 0x1503CCE4: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1503CCE8: nop

    // 0x1503CCEC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1503CCF0: swc1        $f10, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f10.u32l;
    // 0x1503CCF4: swc1        $f8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f8.u32l;
    // 0x1503CCF8: lw          $t5, 0x17C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X17C);
L_1503CCFC:
    // 0x1503CCFC: lwc1        $f20, 0x0($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1503CD00: lwc1        $f24, 0x4($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1503CD04: lwc1        $f22, 0x8($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1503CD08: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1503CD0C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1503CD10: bne         $t5, $s7, L_1503CE2C
    if (ctx->r13 != ctx->r23) {
        // 0x1503CD14: lwc1        $f2, 0x14($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
            goto L_1503CE2C;
    }
    // 0x1503CD14: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1503CD18: bne         $s2, $zero, L_1503CDCC
    if (ctx->r18 != 0) {
        // 0x1503CD1C: addu        $a0, $s4, $t6
        ctx->r4 = ADD32(ctx->r20, ctx->r14);
            goto L_1503CDCC;
    }
    // 0x1503CD1C: addu        $a0, $s4, $t6
    ctx->r4 = ADD32(ctx->r20, ctx->r14);
    // 0x1503CD20: addiu       $v0, $v1, 0x600
    ctx->r2 = ADD32(ctx->r3, 0X600);
    // 0x1503CD24: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503CD28: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1503CD2C: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503CD30: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x1503CD34: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503CD38: addiu       $v0, $v1, 0x640
    ctx->r2 = ADD32(ctx->r3, 0X640);
    // 0x1503CD3C: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x1503CD40: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503CD44: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x1503CD48: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503CD4C: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x1503CD50: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503CD54: addiu       $v0, $v1, 0x680
    ctx->r2 = ADD32(ctx->r3, 0X680);
    // 0x1503CD58: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x1503CD5C: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503CD60: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x1503CD64: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503CD68: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x1503CD6C: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503CD70: addiu       $v0, $v1, 0x6C0
    ctx->r2 = ADD32(ctx->r3, 0X6C0);
    // 0x1503CD74: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x1503CD78: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1503CD7C: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1503CD80: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x1503CD84: lwc1        $f14, 0xE8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1503CD88: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1503CD8C: sub.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x1503CD90: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x1503CD94: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1503CD98: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x1503CD9C: add.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x1503CDA0: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x1503CDA4: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1503CDA8: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1503CDAC: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x1503CDB0: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1503CDB4: sub.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x1503CDB8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1503CDBC: add.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1503CDC0: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1503CDC4: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    // 0x1503CDC8: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
L_1503CDCC:
    // 0x1503CDCC: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503CDD0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1503CDD4: sub.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x1503CDD8: sub.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x1503CDDC: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x1503CDE0: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x1503CDE4: mul.s       $f6, $f10, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x1503CDE8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1503CDEC: sub.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x1503CDF0: add.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f6.fl;
    // 0x1503CDF4: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x1503CDF8: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x1503CDFC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1503CE00: mul.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x1503CE04: add.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
    // 0x1503CE08: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x1503CE0C: sub.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x1503CE10: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1503CE14: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1503CE18: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x1503CE1C: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1503CE20: mul.s       $f6, $f10, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x1503CE24: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x1503CE28: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_1503CE2C:
    // 0x1503CE2C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x1503CE30: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x1503CE34: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x1503CE38: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1503CE3C: bc1fl       L_1503CE5C
    if (!c1cs) {
        // 0x1503CE40: lwc1        $f8, 0x168($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
            goto L_1503CE5C;
    }
    goto skip_1;
    // 0x1503CE40: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    skip_1:
    // 0x1503CE44: c.eq.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl == ctx->f2.fl;
    // 0x1503CE48: nop

    // 0x1503CE4C: bc1fl       L_1503CE5C
    if (!c1cs) {
        // 0x1503CE50: lwc1        $f8, 0x168($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
            goto L_1503CE5C;
    }
    goto skip_2;
    // 0x1503CE50: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    skip_2:
    // 0x1503CE54: add.s       $f20, $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f28.fl;
    // 0x1503CE58: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
L_1503CE5C:
    // 0x1503CE5C: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x1503CE60: lwc1        $f10, 0x170($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X170);
    // 0x1503CE64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x1503CE68: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1503CE6C: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x1503CE70: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x1503CE74: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x1503CE78: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x1503CE7C: jal         0x150440A0
    // 0x1503CE80: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_150440A0(rdram, ctx);
        goto after_1;
    // 0x1503CE80: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1503CE84: lwc1        $f0, 0x14C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X14C);
    // 0x1503CE88: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1503CE8C: lw          $a2, 0x150($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X150);
    // 0x1503CE90: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1503CE94: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1503CE98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x1503CE9C: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x1503CEA0: jal         0x15043EC8
    // 0x1503CEA4: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    func_15043EC8(rdram, ctx);
        goto after_2;
    // 0x1503CEA4: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    after_2:
    // 0x1503CEA8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x1503CEAC: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x1503CEB0: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x1503CEB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1503CEB8: bne         $at, $zero, L_1503CC64
    if (ctx->r1 != 0) {
        // 0x1503CEBC: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_1503CC64;
    }
    // 0x1503CEBC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x1503CEC0: lw          $t7, 0x17C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X17C);
    // 0x1503CEC4: lw          $t9, 0x184($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X184);
    // 0x1503CEC8: beq         $t7, $s7, L_1503CED4
    if (ctx->r15 == ctx->r23) {
        // 0x1503CECC: addiu       $t8, $zero, 0x1E
        ctx->r24 = ADD32(0, 0X1E);
            goto L_1503CED4;
    }
    // 0x1503CECC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x1503CED0: sb          $t8, 0x4E($t9)
    MEM_B(0X4E, ctx->r25) = ctx->r24;
L_1503CED4:
    // 0x1503CED4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x1503CED8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1503CEDC: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1503CEE0: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1503CEE4: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1503CEE8: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1503CEEC: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1503CEF0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1503CEF4: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1503CEF8: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1503CEFC: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1503CF00: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1503CF04: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1503CF08: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1503CF0C: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1503CF10: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1503CF14: jr          $ra
    // 0x1503CF18: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    return;
    // 0x1503CF18: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void func_1507E114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E114: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1507E118: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1507E11C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1507E120: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507E124: lbu         $t6, 0x18A8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X18A8);
    // 0x1507E128: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1507E12C: addiu       $v1, $v1, -0x160C
    ctx->r3 = ADD32(ctx->r3, -0X160C);
    // 0x1507E130: bnel        $t6, $zero, L_1507E144
    if (ctx->r14 != 0) {
        // 0x1507E134: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_1507E144;
    }
    goto skip_0;
    // 0x1507E134: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x1507E138: b           L_1507E1C0
    // 0x1507E13C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507E1C0;
    // 0x1507E13C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507E140: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_1507E144:
    // 0x1507E144: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x1507E148: beq         $v0, $at, L_1507E158
    if (ctx->r2 == ctx->r1) {
        // 0x1507E14C: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_1507E158;
    }
    // 0x1507E14C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1507E150: bne         $v0, $at, L_1507E160
    if (ctx->r2 != ctx->r1) {
        // 0x1507E154: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1507E160;
    }
    // 0x1507E154: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
L_1507E158:
    // 0x1507E158: b           L_1507E1C0
    // 0x1507E15C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507E1C0;
    // 0x1507E15C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507E160:
    // 0x1507E160: lb          $t7, -0x1C21($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C21);
    // 0x1507E164: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1507E168: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x1507E16C: addiu       $t9, $sp, 0x43
    ctx->r25 = ADD32(ctx->r29, 0X43);
    // 0x1507E170: addiu       $t0, $sp, 0x42
    ctx->r8 = ADD32(ctx->r29, 0X42);
    // 0x1507E174: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x1507E178: addiu       $t2, $sp, 0x3C
    ctx->r10 = ADD32(ctx->r29, 0X3C);
    // 0x1507E17C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1507E180: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x1507E184: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1507E188: lbu         $a1, -0x1C20($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1C20);
    // 0x1507E18C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1507E190: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1507E194: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1507E198: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1507E19C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1507E1A0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1507E1A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1507E1A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507E1AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507E1B0: jal         0x15084D70
    // 0x1507E1B4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_15084D70(rdram, ctx);
        goto after_0;
    // 0x1507E1B4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x1507E1B8: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x1507E1BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1507E1C0:
    // 0x1507E1C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1507E1C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1507E1C8: jr          $ra
    // 0x1507E1CC: nop

    return;
    return;
    // 0x1507E1CC: nop

;}
RECOMP_FUNC void func_1513A6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513A6E0: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x1513A6E4: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1513A6E8: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1513A6EC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x1513A6F0: andi        $s7, $a3, 0xFF
    ctx->r23 = ctx->r7 & 0XFF;
    // 0x1513A6F4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1513A6F8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1513A6FC: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1513A700: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1513A704: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1513A708: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1513A70C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1513A710: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1513A714: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x1513A718: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x1513A71C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x1513A720: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1513A724: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1513A728: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1513A72C: sw          $a1, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r5;
    // 0x1513A730: sw          $a2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r6;
    // 0x1513A734: sw          $a3, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r7;
    // 0x1513A738: jal         0x150ADA20
    // 0x1513A73C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1513A73C: nop

    after_0:
    // 0x1513A740: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513A744: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1513A748: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513A74C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1513A750: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1513A754: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513A758: mfhi        $a0
    ctx->r4 = hi;
    // 0x1513A75C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1513A760: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1513A764: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1513A768: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1513A76C: sb          $t7, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r15;
    // 0x1513A770: swc1        $f22, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f22.u32l;
    // 0x1513A774: swc1        $f22, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f22.u32l;
    // 0x1513A778: lwc1        $f6, 0x150($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X150);
    // 0x1513A77C: lwc1        $f4, 0x14C($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X14C);
    // 0x1513A780: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x1513A784: ori         $t8, $t8, 0x1900
    ctx->r24 = ctx->r24 | 0X1900;
    // 0x1513A788: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513A78C: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x1513A790: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x1513A794: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1513A798: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x1513A79C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1513A7A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1513A7A4: swc1        $f20, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7A8: swc1        $f20, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7AC: swc1        $f20, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7B0: swc1        $f22, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f22.u32l;
    // 0x1513A7B4: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x1513A7B8: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x1513A7BC: swc1        $f22, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f22.u32l;
    // 0x1513A7C0: swc1        $f22, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f22.u32l;
    // 0x1513A7C4: swc1        $f20, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7C8: swc1        $f20, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7CC: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7D0: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7D4: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7D8: swc1        $f20, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7DC: swc1        $f20, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7E0: swc1        $f20, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7E4: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7E8: swc1        $f20, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f20.u32l;
    // 0x1513A7EC: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x1513A7F0: sh          $t9, 0x198($sp)
    MEM_H(0X198, ctx->r29) = ctx->r25;
    // 0x1513A7F4: sb          $t0, 0x19C($sp)
    MEM_B(0X19C, ctx->r29) = ctx->r8;
    // 0x1513A7F8: sw          $zero, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = 0;
    // 0x1513A7FC: sb          $t1, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = ctx->r9;
    // 0x1513A800: sb          $zero, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = 0;
    // 0x1513A804: sb          $zero, 0x1A6($sp)
    MEM_B(0X1A6, ctx->r29) = 0;
    // 0x1513A808: sb          $zero, 0x1A7($sp)
    MEM_B(0X1A7, ctx->r29) = 0;
    // 0x1513A80C: sb          $zero, 0x1A8($sp)
    MEM_B(0X1A8, ctx->r29) = 0;
    // 0x1513A810: sb          $zero, 0x1A9($sp)
    MEM_B(0X1A9, ctx->r29) = 0;
    // 0x1513A814: sb          $zero, 0x1AA($sp)
    MEM_B(0X1AA, ctx->r29) = 0;
    // 0x1513A818: sb          $zero, 0x1AB($sp)
    MEM_B(0X1AB, ctx->r29) = 0;
    // 0x1513A81C: sb          $t2, 0x1AC($sp)
    MEM_B(0X1AC, ctx->r29) = ctx->r10;
    // 0x1513A820: sb          $t3, 0x1AE($sp)
    MEM_B(0X1AE, ctx->r29) = ctx->r11;
    // 0x1513A824: sw          $s5, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r21;
    // 0x1513A828: lbu         $t4, 0x3B($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X3B);
    // 0x1513A82C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1513A830: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x1513A834: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x1513A838: addiu       $t7, $t7, 0x4278
    ctx->r15 = ADD32(ctx->r15, 0X4278);
    // 0x1513A83C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x1513A840: sh          $t5, 0x1B6($sp)
    MEM_H(0X1B6, ctx->r29) = ctx->r13;
    // 0x1513A844: sh          $t6, 0x1B8($sp)
    MEM_H(0X1B8, ctx->r29) = ctx->r14;
    // 0x1513A848: addiu       $s2, $s2, 0x4280
    ctx->r18 = ADD32(ctx->r18, 0X4280);
    // 0x1513A84C: addu        $s6, $a0, $t7
    ctx->r22 = ADD32(ctx->r4, ctx->r15);
    // 0x1513A850: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513A854: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1513A858: lw          $fp, 0x1E0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1E0);
    // 0x1513A85C: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x1513A860: addiu       $s3, $sp, 0x144
    ctx->r19 = ADD32(ctx->r29, 0X144);
    // 0x1513A864: sb          $t4, 0x1B4($sp)
    MEM_B(0X1B4, ctx->r29) = ctx->r12;
L_1513A868:
    // 0x1513A868: lbu         $t8, 0x0($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X0);
    // 0x1513A86C: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x1513A870: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x1513A874: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x1513A878: beq         $t9, $zero, L_1513A8B8
    if (ctx->r25 == 0) {
        // 0x1513A87C: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_1513A8B8;
    }
    // 0x1513A87C: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x1513A880: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1513A884: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x1513A888: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x1513A88C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1513A890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513A894: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513A898: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513A89C: jal         0x15132A4C
    // 0x1513A8A0: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_1;
    // 0x1513A8A0: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    after_1:
    // 0x1513A8A4: beq         $v0, $zero, L_1513A8B8
    if (ctx->r2 == 0) {
        // 0x1513A8A8: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_1513A8B8;
    }
    // 0x1513A8A8: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x1513A8AC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1513A8B0: jal         0x10022EC0
    // 0x1513A8B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513A8B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_1513A8B8:
    // 0x1513A8B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513A8BC: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x1513A8C0: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x1513A8C4: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x1513A8C8: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x1513A8CC: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x1513A8D0: bne         $at, $zero, L_1513A868
    if (ctx->r1 != 0) {
        // 0x1513A8D4: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_1513A868;
    }
    // 0x1513A8D4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x1513A8D8: lw          $t5, 0x1D4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X1D4);
    // 0x1513A8DC: beql        $t5, $zero, L_1513AB74
    if (ctx->r13 == 0) {
        // 0x1513A8E0: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1513AB74;
    }
    goto skip_0;
    // 0x1513A8E0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x1513A8E4: lbu         $t6, 0x74($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X74);
    // 0x1513A8E8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1513A8EC: lw          $a0, 0x1D4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D4);
    // 0x1513A8F0: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x1513A8F4: beq         $t7, $at, L_1513AB70
    if (ctx->r15 == ctx->r1) {
        // 0x1513A8F8: andi        $a1, $s7, 0xFF
        ctx->r5 = ctx->r23 & 0XFF;
            goto L_1513AB70;
    }
    // 0x1513A8F8: andi        $a1, $s7, 0xFF
    ctx->r5 = ctx->r23 & 0XFF;
    // 0x1513A8FC: jal         0x1513A5E0
    // 0x1513A900: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_1513A5E0(rdram, ctx);
        goto after_3;
    // 0x1513A900: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_3:
    // 0x1513A904: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x1513A908: lw          $a0, 0x1D4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X1D4);
    // 0x1513A90C: addiu       $t8, $sp, 0x1C4
    ctx->r24 = ADD32(ctx->r29, 0X1C4);
    // 0x1513A910: addiu       $t9, $sp, 0x1C8
    ctx->r25 = ADD32(ctx->r29, 0X1C8);
    // 0x1513A914: addiu       $t0, $sp, 0x120
    ctx->r8 = ADD32(ctx->r29, 0X120);
    // 0x1513A918: addiu       $t1, $sp, 0x124
    ctx->r9 = ADD32(ctx->r29, 0X124);
    // 0x1513A91C: addiu       $t2, $sp, 0x128
    ctx->r10 = ADD32(ctx->r29, 0X128);
    // 0x1513A920: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1513A924: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1513A928: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1513A92C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1513A930: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1513A934: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x1513A938: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    // 0x1513A93C: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    // 0x1513A940: addiu       $a3, $sp, 0x134
    ctx->r7 = ADD32(ctx->r29, 0X134);
    // 0x1513A944: jal         0x1503F404
    // 0x1513A948: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    func_1503F404(rdram, ctx);
        goto after_4;
    // 0x1513A948: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    after_4:
    // 0x1513A94C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A950: lwc1        $f16, 0x4970($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4970);
    // 0x1513A954: swc1        $f22, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f22.u32l;
    // 0x1513A958: addiu       $t3, $sp, 0xB4
    ctx->r11 = ADD32(ctx->r29, 0XB4);
    // 0x1513A95C: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x1513A960: lwc1        $f4, 0x150($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X150);
    // 0x1513A964: lwc1        $f18, 0x14C($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X14C);
    // 0x1513A968: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1513A96C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1513A970: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1513A974: lui         $t2, 0x10
    ctx->r10 = S32(0X10 << 16);
    // 0x1513A978: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1513A97C: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x1513A980: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1513A984: ori         $t2, $t2, 0x39E9
    ctx->r10 = ctx->r10 | 0X39E9;
    // 0x1513A988: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x1513A98C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1513A990: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x1513A994: addiu       $s4, $s4, 0x4290
    ctx->r20 = ADD32(ctx->r20, 0X4290);
    // 0x1513A998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513A99C: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x1513A9A0: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1513A9A4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x1513A9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513A9AC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1513A9B0: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x1513A9B4: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x1513A9B8: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x1513A9BC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1513A9C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A9C4: lwc1        $f30, 0x4974($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X4974);
    // 0x1513A9C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A9CC: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x1513A9D0: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x1513A9D4: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x1513A9D8: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x1513A9DC: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x1513A9E0: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1513A9E4: sb          $t7, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r15;
    // 0x1513A9E8: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x1513A9EC: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x1513A9F0: sb          $zero, 0x109($sp)
    MEM_B(0X109, ctx->r29) = 0;
    // 0x1513A9F4: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x1513A9F8: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x1513A9FC: sb          $t8, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r24;
    // 0x1513AA00: sw          $s5, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r21;
    // 0x1513AA04: lwc1        $f28, 0x4978($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X4978);
    // 0x1513AA08: lbu         $t9, 0x3B($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X3B);
    // 0x1513AA0C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1513AA10: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1513AA14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AA18: lwc1        $f24, 0x497C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X497C);
    // 0x1513AA1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AA20: lwc1        $f22, 0x4980($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4980);
    // 0x1513AA24: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x1513AA28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AA2C: sh          $t0, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r8;
    // 0x1513AA30: sh          $t1, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r9;
    // 0x1513AA34: sw          $t2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r10;
    // 0x1513AA38: sb          $t5, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r13;
    // 0x1513AA3C: sb          $t4, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r12;
    // 0x1513AA40: sb          $t3, 0x107($sp)
    MEM_B(0X107, ctx->r29) = ctx->r11;
    // 0x1513AA44: lwc1        $f20, 0x4984($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4984);
    // 0x1513AA48: sb          $t9, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r25;
L_1513AA4C:
    // 0x1513AA4C: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x1513AA50: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x1513AA54: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1513AA58: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x1513AA5C: bne         $t7, $zero, L_1513AB50
    if (ctx->r15 != 0) {
        // 0x1513AA60: addu        $t9, $s4, $t8
        ctx->r25 = ADD32(ctx->r20, ctx->r24);
            goto L_1513AB50;
    }
    // 0x1513AA60: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x1513AA64: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1513AA68: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x1513AA6C: subu        $t1, $t1, $s0
    ctx->r9 = SUB32(ctx->r9, ctx->r16);
    // 0x1513AA70: sh          $t0, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r8;
    // 0x1513AA74: lw          $a2, 0x1D4($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X1D4);
    // 0x1513AA78: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x1513AA7C: addiu       $t2, $t2, 0x42A0
    ctx->r10 = ADD32(ctx->r10, 0X42A0);
    // 0x1513AA80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1513AA84: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x1513AA88: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1513AA8C: jal         0x15143134
    // 0x1513AA90: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_5;
    // 0x1513AA90: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_5:
    // 0x1513AA94: jal         0x150ADA20
    // 0x1513AA98: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1513AA98: nop

    after_6:
    // 0x1513AA9C: jal         0x150ADA20
    // 0x1513AAA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1513AAA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x1513AAA4: jal         0x150ADA68
    // 0x1513AAA8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1513AAA8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_8:
    // 0x1513AAAC: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1513AAB0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1513AAB4: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x1513AAB8: add.s       $f18, $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1513AABC: mfhi        $a1
    ctx->r5 = hi;
    // 0x1513AAC0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1513AAC4: addiu       $a1, $a1, -0x54
    ctx->r5 = ADD32(ctx->r5, -0X54);
    // 0x1513AAC8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1513AACC: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x1513AAD0: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x1513AAD4: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1513AAD8: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1513AADC: jal         0x15143794
    // 0x1513AAE0: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    func_15143794(rdram, ctx);
        goto after_9;
    // 0x1513AAE0: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    after_9:
    // 0x1513AAE4: jal         0x150ADA68
    // 0x1513AAE8: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1513AAE8: nop

    after_10:
    // 0x1513AAEC: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513AAF0: add.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x1513AAF4: jal         0x150ADA68
    // 0x1513AAF8: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1513AAF8: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x1513AAFC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513AB00: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1513AB04: jal         0x150ADA68
    // 0x1513AB08: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1513AB08: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x1513AB0C: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1513AB10: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1513AB14: jal         0x150ADA20
    // 0x1513AB18: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1513AB18: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x1513AB1C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1513AB20: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513AB24: mfhi        $t7
    ctx->r15 = hi;
    // 0x1513AB28: addiu       $t8, $t7, 0x3C
    ctx->r24 = ADD32(ctx->r15, 0X3C);
    // 0x1513AB2C: sh          $t8, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r24;
    // 0x1513AB30: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x1513AB34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513AB38: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513AB3C: lw          $a3, 0x1D8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1D8);
    // 0x1513AB40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513AB44: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x1513AB48: jal         0x1513264C
    // 0x1513AB4C: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    func_1513264C(rdram, ctx);
        goto after_14;
    // 0x1513AB4C: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    after_14:
L_1513AB50:
    // 0x1513AB50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513AB54: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x1513AB58: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x1513AB5C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x1513AB60: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x1513AB64: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1513AB68: bne         $at, $zero, L_1513AA4C
    if (ctx->r1 != 0) {
        // 0x1513AB6C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_1513AA4C;
    }
    // 0x1513AB6C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_1513AB70:
    // 0x1513AB70: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1513AB74:
    // 0x1513AB74: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1513AB78: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1513AB7C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1513AB80: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1513AB84: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1513AB88: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1513AB8C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1513AB90: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1513AB94: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1513AB98: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1513AB9C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1513ABA0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1513ABA4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1513ABA8: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1513ABAC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1513ABB0: jr          $ra
    // 0x1513ABB4: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    return;
    // 0x1513ABB4: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void func_151A4638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4638: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151A463C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A4640: swc1        $f12, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f12.u32l;
    // 0x151A4644: swc1        $f14, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f14.u32l;
    // 0x151A4648: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x151A464C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x151A4650: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151A4654: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x151A4658: addiu       $t7, $zero, 0x1401
    ctx->r15 = ADD32(0, 0X1401);
    // 0x151A465C: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151A4660: sb          $t6, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r14;
    // 0x151A4664: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x151A4668: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x151A466C: jal         0x150ADA20
    // 0x151A4670: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A4670: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x151A4674: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151A4678: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A467C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A4680: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A4684: mfhi        $t9
    ctx->r25 = hi;
    // 0x151A4688: addiu       $t0, $t9, 0xF
    ctx->r8 = ADD32(ctx->r25, 0XF);
    // 0x151A468C: addiu       $t1, $zero, 0x8A
    ctx->r9 = ADD32(0, 0X8A);
    // 0x151A4690: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151A4694: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151A4698: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A469C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151A46A0: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x151A46A4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151A46A8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151A46AC: sb          $t1, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r9;
    // 0x151A46B0: sb          $zero, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = 0;
    // 0x151A46B4: sb          $zero, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = 0;
    // 0x151A46B8: sb          $t2, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r10;
    // 0x151A46BC: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x151A46C0: sb          $zero, 0x51($sp)
    MEM_B(0X51, ctx->r29) = 0;
    // 0x151A46C4: sb          $zero, 0x52($sp)
    MEM_B(0X52, ctx->r29) = 0;
    // 0x151A46C8: sh          $t3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r11;
    // 0x151A46CC: sh          $t4, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r12;
    // 0x151A46D0: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x151A46D4: jal         0x150ADA68
    // 0x151A46D8: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A46D8: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x151A46DC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151A46E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A46E4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151A46E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A46EC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A46F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A46F4: lwc1        $f6, -0x72A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X72A0);
    // 0x151A46F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A46FC: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151A4700: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151A4704: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151A4708: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A470C: lwc1        $f8, -0x1658($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x151A4710: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151A4714: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x151A4718: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151A471C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x151A4720: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x151A4724: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x151A4728: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151A472C: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151A4730: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x151A4734: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151A4738: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151A473C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x151A4740: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151A4744: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A4748: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151A474C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A4750: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x151A4754: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151A4758: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x151A475C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x151A4760: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x151A4764: sb          $t7, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r15;
    // 0x151A4768: sb          $t8, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r24;
    // 0x151A476C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x151A4770: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151A4774: jal         0x150ADA20
    // 0x151A4778: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151A4778: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x151A477C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151A4780: beq         $t9, $zero, L_151A4790
    if (ctx->r25 == 0) {
        // 0x151A4784: lw          $t0, 0x90($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X90);
            goto L_151A4790;
    }
    // 0x151A4784: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x151A4788: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x151A478C: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
L_151A4790:
    // 0x151A4790: jal         0x150ADA20
    // 0x151A4794: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151A4794: nop

    after_3:
    // 0x151A4798: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151A479C: beq         $t2, $zero, L_151A47B0
    if (ctx->r10 == 0) {
        // 0x151A47A0: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_151A47B0;
    }
    // 0x151A47A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A47A4: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x151A47A8: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x151A47AC: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
L_151A47B0:
    // 0x151A47B0: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x151A47B4: sb          $t5, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r13;
    // 0x151A47B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151A47BC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151A47C0: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x151A47C4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x151A47C8: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x151A47CC: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x151A47D0: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x151A47D4: addiu       $t3, $zero, -0x18
    ctx->r11 = ADD32(0, -0X18);
    // 0x151A47D8: sb          $t6, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r14;
    // 0x151A47DC: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x151A47E0: sb          $t7, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r15;
    // 0x151A47E4: sh          $t8, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r24;
    // 0x151A47E8: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
    // 0x151A47EC: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x151A47F0: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x151A47F4: sh          $t2, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r10;
    // 0x151A47F8: sh          $t3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r11;
    // 0x151A47FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151A4800: lbu         $a3, 0xC($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0XC);
    // 0x151A4804: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151A4808: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x151A480C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A4810: jal         0x15130374
    // 0x151A4814: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_15130374(rdram, ctx);
        goto after_4;
    // 0x151A4814: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x151A4818: beq         $v0, $zero, L_151A482C
    if (ctx->r2 == 0) {
        // 0x151A481C: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_151A482C;
    }
    // 0x151A481C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151A4820: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151A4824: jal         0x10022EC0
    // 0x151A4828: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151A4828: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_5:
L_151A482C:
    // 0x151A482C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A4830: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151A4834: jr          $ra
    // 0x151A4838: nop

    return;
    return;
    // 0x151A4838: nop

;}
RECOMP_FUNC void func_151B3F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B3F28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151B3F2C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151B3F30: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151B3F34: beq         $a2, $zero, L_151B3FAC
    if (ctx->r6 == 0) {
        // 0x151B3F38: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_151B3FAC;
    }
    // 0x151B3F38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151B3F3C: lw          $t7, 0x150($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X150);
    // 0x151B3F40: addiu       $v0, $a0, 0x150
    ctx->r2 = ADD32(ctx->r4, 0X150);
    // 0x151B3F44: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x151B3F48: beql        $t8, $zero, L_151B3F98
    if (ctx->r24 == 0) {
        // 0x151B3F4C: lbu         $t5, 0x10($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X10);
            goto L_151B3F98;
    }
    goto skip_0;
    // 0x151B3F4C: lbu         $t5, 0x10($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X10);
    skip_0:
    // 0x151B3F50: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x151B3F54: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151B3F58: lbu         $t0, 0x3B($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X3B);
    // 0x151B3F5C: bnel        $t9, $t0, L_151B3F98
    if (ctx->r25 != ctx->r8) {
        // 0x151B3F60: lbu         $t5, 0x10($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X10);
            goto L_151B3F98;
    }
    goto skip_1;
    // 0x151B3F60: lbu         $t5, 0x10($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X10);
    skip_1:
    // 0x151B3F64: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    // 0x151B3F68: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x151B3F6C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151B3F70: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x151B3F74: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x151B3F78: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x151B3F7C: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x151B3F80: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x151B3F84: lbu         $t3, 0x10($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X10);
    // 0x151B3F88: andi        $t4, $t3, 0xFFFB
    ctx->r12 = ctx->r11 & 0XFFFB;
    // 0x151B3F8C: b           L_151B3FD0
    // 0x151B3F90: sb          $t4, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r12;
        goto L_151B3FD0;
    // 0x151B3F90: sb          $t4, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r12;
    // 0x151B3F94: lbu         $t5, 0x10($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X10);
L_151B3F98:
    // 0x151B3F98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151B3F9C: ori         $t6, $t5, 0xC
    ctx->r14 = ctx->r13 | 0XC;
    // 0x151B3FA0: sb          $t6, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r14;
    // 0x151B3FA4: b           L_151B3FD4
    // 0x151B3FA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151B3FD4;
    // 0x151B3FA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151B3FAC:
    // 0x151B3FAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B3FB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B3FB4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x151B3FB8: lwc1        $f10, -0x5C54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5C54);
    // 0x151B3FBC: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x151B3FC0: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x151B3FC4: lbu         $t7, 0x10($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X10);
    // 0x151B3FC8: andi        $t8, $t7, 0xFFF7
    ctx->r24 = ctx->r15 & 0XFFF7;
    // 0x151B3FCC: sb          $t8, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r24;
L_151B3FD0:
    // 0x151B3FD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151B3FD4:
    // 0x151B3FD4: jr          $ra
    // 0x151B3FD8: nop

    return;
    return;
    // 0x151B3FD8: nop

;}
RECOMP_FUNC void func_15001B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001B10: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15001B14: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x15001B18: addiu       $a1, $a1, 0xDCC
    ctx->r5 = ADD32(ctx->r5, 0XDCC);
    // 0x15001B1C: addiu       $a0, $a0, 0xDE0
    ctx->r4 = ADD32(ctx->r4, 0XDE0);
    // 0x15001B20: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x15001B24: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15001B28: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x15001B2C: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x15001B30: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
    // 0x15001B34: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x15001B38: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x15001B3C: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x15001B40: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x15001B44: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x15001B48: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x15001B4C: addiu       $t2, $t1, 0xE
    ctx->r10 = ADD32(ctx->r9, 0XE);
    // 0x15001B50: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x15001B54: jr          $ra
    // 0x15001B58: nop

    return;
    return;
    // 0x15001B58: nop

;}
RECOMP_FUNC void func_150A278C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A278C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150A2790: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150A2794: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150A2798: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150A279C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150A27A0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150A27A4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150A27A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150A27AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150A27B0: lbu         $t6, 0x65($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X65);
    // 0x150A27B4: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x150A27B8: addiu       $s4, $s4, 0x3094
    ctx->r20 = ADD32(ctx->r20, 0X3094);
    // 0x150A27BC: bnel        $t6, $zero, L_150A2844
    if (ctx->r14 != 0) {
        // 0x150A27C0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150A2844;
    }
    goto skip_0;
    // 0x150A27C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150A27C4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x150A27C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150A27CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150A27D0: beq         $t7, $zero, L_150A2840
    if (ctx->r15 == 0) {
        // 0x150A27D4: addiu       $s5, $zero, 0x8
        ctx->r21 = ADD32(0, 0X8);
            goto L_150A2840;
    }
    // 0x150A27D4: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
    // 0x150A27D8: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x150A27DC: addiu       $s3, $s3, 0x3098
    ctx->r19 = ADD32(ctx->r19, 0X3098);
    // 0x150A27E0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_150A27E4:
    // 0x150A27E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150A27E8: addu        $t8, $v0, $s0
    ctx->r24 = ADD32(ctx->r2, ctx->r16);
    // 0x150A27EC: lbu         $t9, 0x15($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X15);
    // 0x150A27F0: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x150A27F4: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x150A27F8: bnel        $s5, $t0, L_150A282C
    if (ctx->r21 != ctx->r8) {
        // 0x150A27FC: lw          $t2, 0x0($s4)
        ctx->r10 = MEM_W(ctx->r20, 0X0);
            goto L_150A282C;
    }
    goto skip_1;
    // 0x150A27FC: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    skip_1:
    // 0x150A2800: jal         0x150A1DA0
    // 0x150A2804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150A1DA0(rdram, ctx);
        goto after_0;
    // 0x150A2804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x150A2808: bnel        $v0, $zero, L_150A282C
    if (ctx->r2 != 0) {
        // 0x150A280C: lw          $t2, 0x0($s4)
        ctx->r10 = MEM_W(ctx->r20, 0X0);
            goto L_150A282C;
    }
    goto skip_2;
    // 0x150A280C: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    skip_2:
    // 0x150A2810: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x150A2814: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150A2818: addu        $v0, $t1, $s0
    ctx->r2 = ADD32(ctx->r9, ctx->r16);
    // 0x150A281C: lbu         $a1, 0x17($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X17);
    // 0x150A2820: jal         0x15172E7C
    // 0x150A2824: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    func_15172E7C(rdram, ctx);
        goto after_1;
    // 0x150A2824: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    after_1:
    // 0x150A2828: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
L_150A282C:
    // 0x150A282C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150A2830: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x150A2834: sltu        $at, $s1, $t2
    ctx->r1 = ctx->r17 < ctx->r10 ? 1 : 0;
    // 0x150A2838: bnel        $at, $zero, L_150A27E4
    if (ctx->r1 != 0) {
        // 0x150A283C: lw          $v0, 0x0($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X0);
            goto L_150A27E4;
    }
    goto skip_3;
    // 0x150A283C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    skip_3:
L_150A2840:
    // 0x150A2840: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150A2844:
    // 0x150A2844: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150A2848: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150A284C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150A2850: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150A2854: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150A2858: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150A285C: jr          $ra
    // 0x150A2860: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150A2860: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151E53E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E53E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E53EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E53F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151E53F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E53F8: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    // 0x151E53FC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151E5400: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151E5404: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E5408: sb          $zero, -0x1D4($at)
    MEM_B(-0X1D4, ctx->r1) = 0;
    // 0x151E540C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x151E5410: beq         $t6, $zero, L_151E5560
    if (ctx->r14 == 0) {
        // 0x151E5414: sb          $zero, 0x7270($at)
        MEM_B(0X7270, ctx->r1) = 0;
            goto L_151E5560;
    }
    // 0x151E5414: sb          $zero, 0x7270($at)
    MEM_B(0X7270, ctx->r1) = 0;
    // 0x151E5418: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151E541C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5420: sb          $t7, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r15;
    // 0x151E5424: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x151E5428: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E542C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151E5430: addiu       $a2, $a2, -0x22C
    ctx->r6 = ADD32(ctx->r6, -0X22C);
    // 0x151E5434: sb          $t8, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r24;
    // 0x151E5438: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x151E543C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x151E5440: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151E5444: lb          $t9, 0x42($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X42);
    // 0x151E5448: addiu       $t0, $t0, -0x4974
    ctx->r8 = ADD32(ctx->r8, -0X4974);
    // 0x151E544C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E5450: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E5454: lui         $t7, 0x151E
    ctx->r15 = S32(0X151E << 16);
    // 0x151E5458: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E545C: lui         $t9, 0x151E
    ctx->r25 = S32(0X151E << 16);
    // 0x151E5460: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E5464: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x151E5468: addiu       $t2, $t2, 0xA88
    ctx->r10 = ADD32(ctx->r10, 0XA88);
    // 0x151E546C: addiu       $t7, $t7, 0x4BD8
    ctx->r15 = ADD32(ctx->r15, 0X4BD8);
    // 0x151E5470: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151E5474: addiu       $a1, $a1, -0x270
    ctx->r5 = ADD32(ctx->r5, -0X270);
    // 0x151E5478: mflo        $t3
    ctx->r11 = lo;
    // 0x151E547C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x151E5480: lb          $t5, 0x7($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X7);
    // 0x151E5484: addiu       $t9, $t9, -0x2460
    ctx->r25 = ADD32(ctx->r25, -0X2460);
    // 0x151E5488: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E548C: beq         $t5, $at, L_151E54A8
    if (ctx->r13 == ctx->r1) {
        // 0x151E5490: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_151E54A8;
    }
    // 0x151E5490: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x151E5494: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E5498: addiu       $t2, $t2, 0xA88
    ctx->r10 = ADD32(ctx->r10, 0XA88);
    // 0x151E549C: sb          $t6, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r14;
    // 0x151E54A0: b           L_151E54B0
    // 0x151E54A4: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_151E54B0;
    // 0x151E54A4: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_151E54A8:
    // 0x151E54A8: sb          $t8, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r24;
    // 0x151E54AC: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
L_151E54B0:
    // 0x151E54B0: lb          $t3, 0x0($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X0);
    // 0x151E54B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151E54B8: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x151E54BC: blez        $t3, L_151E54F4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x151E54C0: nop
    
            goto L_151E54F4;
    }
    // 0x151E54C0: nop

    // 0x151E54C4: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
L_151E54C8:
    // 0x151E54C8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x151E54CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E54D0: lh          $t5, 0x1AA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X1AA);
    // 0x151E54D4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x151E54D8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x151E54DC: sh          $t5, 0x6C($t7)
    MEM_H(0X6C, ctx->r15) = ctx->r13;
    // 0x151E54E0: lb          $t8, 0x0($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X0);
    // 0x151E54E4: addiu       $a0, $a0, 0x32C
    ctx->r4 = ADD32(ctx->r4, 0X32C);
    // 0x151E54E8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151E54EC: bnel        $at, $zero, L_151E54C8
    if (ctx->r1 != 0) {
        // 0x151E54F0: lw          $t4, 0x31C($a0)
        ctx->r12 = MEM_W(ctx->r4, 0X31C);
            goto L_151E54C8;
    }
    goto skip_0;
    // 0x151E54F0: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
    skip_0:
L_151E54F4:
    // 0x151E54F4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E54F8: addiu       $v1, $v1, -0x240
    ctx->r3 = ADD32(ctx->r3, -0X240);
    // 0x151E54FC: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x151E5500: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5504: andi        $t3, $t9, 0xE35F
    ctx->r11 = ctx->r25 & 0XE35F;
    // 0x151E5508: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x151E550C: sb          $a3, 0xA86($at)
    MEM_B(0XA86, ctx->r1) = ctx->r7;
    // 0x151E5510: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x151E5514: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x151E5518: lb          $t4, 0x42($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X42);
    // 0x151E551C: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E5520: mflo        $t6
    ctx->r14 = lo;
    // 0x151E5524: addu        $t5, $t0, $t6
    ctx->r13 = ADD32(ctx->r8, ctx->r14);
    // 0x151E5528: lb          $t7, 0x7($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X7);
    // 0x151E552C: bnel        $t7, $at, L_151E5570
    if (ctx->r15 != ctx->r1) {
        // 0x151E5530: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151E5570;
    }
    goto skip_1;
    // 0x151E5530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151E5534: bne         $a3, $zero, L_151E554C
    if (ctx->r7 != 0) {
        // 0x151E5538: lui         $t8, 0x151E
        ctx->r24 = S32(0X151E << 16);
            goto L_151E554C;
    }
    // 0x151E5538: lui         $t8, 0x151E
    ctx->r24 = S32(0X151E << 16);
    // 0x151E553C: jal         0x151E4BD8
    // 0x151E5540: nop

    func_151E4BD8(rdram, ctx);
        goto after_0;
    // 0x151E5540: nop

    after_0:
    // 0x151E5544: b           L_151E5570
    // 0x151E5548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151E5570;
    // 0x151E5548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151E554C:
    // 0x151E554C: addiu       $t8, $t8, -0x2460
    ctx->r24 = ADD32(ctx->r24, -0X2460);
    // 0x151E5550: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x151E5554: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151E5558: b           L_151E556C
    // 0x151E555C: sb          $t9, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r25;
        goto L_151E556C;
    // 0x151E555C: sb          $t9, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = ctx->r25;
L_151E5560:
    // 0x151E5560: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x151E5564: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5568: sb          $t3, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r11;
L_151E556C:
    // 0x151E556C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151E5570:
    // 0x151E5570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E5574: jr          $ra
    // 0x151E5578: nop

    return;
    return;
    // 0x151E5578: nop

;}
RECOMP_FUNC void func_1509C8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C8FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509C900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509C904: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1509C908: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1509C90C: jal         0x1505EEF4
    // 0x1509C910: andi        $a0, $a2, 0xFFF
    ctx->r4 = ctx->r6 & 0XFFF;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x1509C910: andi        $a0, $a2, 0xFFF
    ctx->r4 = ctx->r6 & 0XFFF;
    after_0:
    // 0x1509C914: beq         $v0, $zero, L_1509C9F4
    if (ctx->r2 == 0) {
        // 0x1509C918: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1509C9F4;
    }
    // 0x1509C918: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1509C91C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1509C920: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x1509C924: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1509C928: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x1509C92C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x1509C930: beql        $t7, $zero, L_1509C944
    if (ctx->r15 == 0) {
        // 0x1509C934: lwc1        $f0, 0x37C($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X37C);
            goto L_1509C944;
    }
    goto skip_0;
    // 0x1509C934: lwc1        $f0, 0x37C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X37C);
    skip_0:
    // 0x1509C938: b           L_1509C944
    // 0x1509C93C: lwc1        $f0, 0x760($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X760);
        goto L_1509C944;
    // 0x1509C93C: lwc1        $f0, 0x760($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X760);
    // 0x1509C940: lwc1        $f0, 0x37C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X37C);
L_1509C944:
    // 0x1509C944: beql        $t8, $zero, L_1509C9A8
    if (ctx->r24 == 0) {
        // 0x1509C948: lwc1        $f8, 0x14($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
            goto L_1509C9A8;
    }
    goto skip_1;
    // 0x1509C948: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    skip_1:
    // 0x1509C94C: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1509C950: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1509C954: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1509C958: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509C95C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1509C960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1509C964: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509C968: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1509C96C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509C970: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1509C974: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x1509C978: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1509C97C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1509C980: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x1509C984: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1509C988: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1509C98C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1509C990: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1509C994: jal         0x150221E8
    // 0x1509C998: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    func_150221E8(rdram, ctx);
        goto after_1;
    // 0x1509C998: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    after_1:
    // 0x1509C99C: b           L_1509C9F8
    // 0x1509C9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509C9F8;
    // 0x1509C9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509C9A4: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
L_1509C9A8:
    // 0x1509C9A8: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1509C9AC: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1509C9B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509C9B4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1509C9B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1509C9BC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509C9C0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x1509C9C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509C9C8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x1509C9CC: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x1509C9D0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1509C9D4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1509C9D8: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x1509C9DC: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1509C9E0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1509C9E4: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x1509C9E8: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1509C9EC: jal         0x15022190
    // 0x1509C9F0: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    func_15022190(rdram, ctx);
        goto after_2;
    // 0x1509C9F0: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
L_1509C9F4:
    // 0x1509C9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509C9F8:
    // 0x1509C9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509C9FC: jr          $ra
    // 0x1509CA00: nop

    return;
    return;
    // 0x1509CA00: nop

;}
RECOMP_FUNC void func_151539B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151539B4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151539B8: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x151539BC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x151539C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151539C4: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x151539C8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151539CC: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x151539D0: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x151539D4: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x151539D8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x151539DC: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x151539E0: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x151539E4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x151539E8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x151539EC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151539F0: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151539F4: jal         0x150ADA20
    // 0x151539F8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151539F8: nop

    after_0:
    // 0x151539FC: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x15153A00: lw          $at, 0x4($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X4);
    // 0x15153A04: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x15153A08: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15153A0C: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x15153A10: addiu       $s5, $sp, 0x7C
    ctx->r21 = ADD32(ctx->r29, 0X7C);
    // 0x15153A14: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x15153A18: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x15153A1C: bne         $t7, $zero, L_15153A28
    if (ctx->r15 != 0) {
        // 0x15153A20: nop
    
            goto L_15153A28;
    }
    // 0x15153A20: nop

    // 0x15153A24: break       7
    do_break(353712676);
L_15153A28:
    // 0x15153A28: sw          $t2, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r10;
    // 0x15153A2C: lw          $at, 0xC($s0)
    ctx->r1 = MEM_W(ctx->r16, 0XC);
    // 0x15153A30: mfhi        $t8
    ctx->r24 = hi;
    // 0x15153A34: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x15153A38: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    // 0x15153A3C: lbu         $t3, 0x28($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X28);
    // 0x15153A40: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x15153A44: sb          $t3, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r11;
    // 0x15153A48: lbu         $t4, 0x29($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X29);
    // 0x15153A4C: sb          $t4, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r12;
    // 0x15153A50: lbu         $t5, 0x2A($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2A);
    // 0x15153A54: sb          $t5, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r13;
    // 0x15153A58: lbu         $t6, 0x2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2B);
    // 0x15153A5C: sb          $t6, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r14;
    // 0x15153A60: lbu         $t7, 0x2C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2C);
    // 0x15153A64: sb          $t7, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r15;
    // 0x15153A68: lbu         $t8, 0x2D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2D);
    // 0x15153A6C: sb          $t8, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r24;
    // 0x15153A70: lbu         $t9, 0x2E($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2E);
    // 0x15153A74: sb          $t9, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r25;
    // 0x15153A78: lbu         $t1, 0x2F($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2F);
    // 0x15153A7C: sb          $t1, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r9;
    // 0x15153A80: lbu         $t0, 0x30($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X30);
    // 0x15153A84: sb          $t0, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r8;
    // 0x15153A88: lhu         $t2, 0x36($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X36);
    // 0x15153A8C: sh          $t2, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r10;
    // 0x15153A90: lh          $t3, 0x42($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X42);
    // 0x15153A94: sh          $t3, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r11;
    // 0x15153A98: lh          $t4, 0x44($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X44);
    // 0x15153A9C: beq         $s3, $zero, L_15153C4C
    if (ctx->r19 == 0) {
        // 0x15153AA0: sh          $t4, 0xB4($sp)
        MEM_H(0XB4, ctx->r29) = ctx->r12;
            goto L_15153C4C;
    }
    // 0x15153AA0: sh          $t4, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r12;
    // 0x15153AA4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15153AA8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15153AAC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15153AB0: nop

L_15153AB4:
    // 0x15153AB4: jal         0x150ADA20
    // 0x15153AB8: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15153AB8: nop

    after_1:
    // 0x15153ABC: lh          $t5, 0x14($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X14);
    // 0x15153AC0: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15153AC4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15153AC8: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15153ACC: mfhi        $t7
    ctx->r15 = hi;
    // 0x15153AD0: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x15153AD4: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x15153AD8: bne         $t6, $zero, L_15153AE4
    if (ctx->r14 != 0) {
        // 0x15153ADC: nop
    
            goto L_15153AE4;
    }
    // 0x15153ADC: nop

    // 0x15153AE0: break       7
    do_break(353712864);
L_15153AE4:
    // 0x15153AE4: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15153AE8: jal         0x150ADA20
    // 0x15153AEC: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15153AEC: nop

    after_2:
    // 0x15153AF0: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x15153AF4: lh          $t4, 0x12($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X12);
    // 0x15153AF8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x15153AFC: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x15153B00: mfhi        $t3
    ctx->r11 = hi;
    // 0x15153B04: addu        $s2, $t3, $t4
    ctx->r18 = ADD32(ctx->r11, ctx->r12);
    // 0x15153B08: sll         $t5, $s2, 16
    ctx->r13 = S32(ctx->r18 << 16);
    // 0x15153B0C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15153B10: bne         $t2, $zero, L_15153B1C
    if (ctx->r10 != 0) {
        // 0x15153B14: nop
    
            goto L_15153B1C;
    }
    // 0x15153B14: nop

    // 0x15153B18: break       7
    do_break(353712920);
L_15153B1C:
    // 0x15153B1C: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x15153B20: jal         0x151423D8
    // 0x15153B24: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15153B24: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_3:
    // 0x15153B28: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15153B2C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15153B30: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15153B34: jal         0x151423D8
    // 0x15153B38: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x15153B38: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x15153B3C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15153B40: jal         0x151423D8
    // 0x15153B44: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x15153B44: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_5:
    // 0x15153B48: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x15153B4C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x15153B50: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x15153B54: jal         0x151423D8
    // 0x15153B58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x15153B58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_6:
    // 0x15153B5C: mul.s       $f2, $f26, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x15153B60: nop

    // 0x15153B64: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15153B68: nop

    // 0x15153B6C: mul.s       $f6, $f28, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f22.fl);
    // 0x15153B70: nop

    // 0x15153B74: mul.s       $f8, $f2, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x15153B78: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x15153B7C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x15153B80: jal         0x150ADA68
    // 0x15153B84: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15153B84: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x15153B88: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15153B8C: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15153B90: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15153B94: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15153B98: jal         0x150ADA68
    // 0x15153B9C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15153B9C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x15153BA0: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15153BA4: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15153BA8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15153BAC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15153BB0: jal         0x150ADA20
    // 0x15153BB4: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15153BB4: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x15153BB8: lh          $t9, 0x34($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X34);
    // 0x15153BBC: lh          $t2, 0x32($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X32);
    // 0x15153BC0: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x15153BC4: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x15153BC8: mfhi        $t0
    ctx->r8 = hi;
    // 0x15153BCC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x15153BD0: bne         $t1, $zero, L_15153BDC
    if (ctx->r9 != 0) {
        // 0x15153BD4: nop
    
            goto L_15153BDC;
    }
    // 0x15153BD4: nop

    // 0x15153BD8: break       7
    do_break(353713112);
L_15153BDC:
    // 0x15153BDC: sh          $t3, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r11;
    // 0x15153BE0: jal         0x150ADA68
    // 0x15153BE4: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x15153BE4: nop

    after_10:
    // 0x15153BE8: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15153BEC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15153BF0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15153BF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15153BF8: jal         0x150ADA20
    // 0x15153BFC: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15153BFC: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x15153C00: lbu         $t4, 0x41($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X41);
    // 0x15153C04: lbu         $t7, 0x40($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X40);
    // 0x15153C08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15153C0C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15153C10: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x15153C14: mfhi        $t6
    ctx->r14 = hi;
    // 0x15153C18: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15153C1C: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
    // 0x15153C20: bne         $t5, $zero, L_15153C2C
    if (ctx->r13 != 0) {
        // 0x15153C24: nop
    
            goto L_15153C2C;
    }
    // 0x15153C24: nop

    // 0x15153C28: break       7
    do_break(353713192);
L_15153C2C:
    // 0x15153C2C: lbu         $a1, 0x46($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X46);
    // 0x15153C30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15153C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15153C38: jal         0x15156190
    // 0x15153C3C: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    func_15156190(rdram, ctx);
        goto after_12;
    // 0x15153C3C: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    after_12:
    // 0x15153C40: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x15153C44: bne         $s3, $zero, L_15153AB4
    if (ctx->r19 != 0) {
        // 0x15153C48: nop
    
            goto L_15153AB4;
    }
    // 0x15153C48: nop

L_15153C4C:
    // 0x15153C4C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x15153C50: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15153C54: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15153C58: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15153C5C: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15153C60: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15153C64: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15153C68: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x15153C6C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x15153C70: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x15153C74: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x15153C78: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x15153C7C: jr          $ra
    // 0x15153C80: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15153C80: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_16000590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000590: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x16000594: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x16000598: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x1600059C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x160005A0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x160005A4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x160005A8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x160005AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x160005B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x160005B4: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x160005B8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x160005BC: lw          $s2, 0x12C($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X12C);
    // 0x160005C0: addiu       $a1, $a1, 0x47A4
    ctx->r5 = ADD32(ctx->r5, 0X47A4);
    // 0x160005C4: jal         0x160012B0
    // 0x160005C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_160012B0(rdram, ctx);
        goto after_0;
    // 0x160005C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x160005CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x160005D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x160005D4: jal         0x16001044
    // 0x160005D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_16001044(rdram, ctx);
        goto after_1;
    // 0x160005D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x160005DC: srl         $t6, $s2, 12
    ctx->r14 = S32(U32(ctx->r18) >> 12);
    // 0x160005E0: lui         $s3, 0x1600
    ctx->r19 = S32(0X1600 << 16);
    // 0x160005E4: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x160005E8: addiu       $s0, $zero, 0x2C
    ctx->r16 = ADD32(0, 0X2C);
    // 0x160005EC: addiu       $s3, $s3, 0x3B30
    ctx->r19 = ADD32(ctx->r19, 0X3B30);
    // 0x160005F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_160005F4:
    // 0x160005F4: andi        $t7, $s2, 0x1
    ctx->r15 = ctx->r18 & 0X1;
    // 0x160005F8: beq         $t7, $zero, L_16000614
    if (ctx->r15 == 0) {
        // 0x160005FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_16000614;
    }
    // 0x160005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x16000600: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x16000604: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x16000608: jal         0x160012B0
    // 0x1600060C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    func_160012B0(rdram, ctx);
        goto after_2;
    // 0x1600060C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    after_2:
    // 0x16000610: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_16000614:
    // 0x16000614: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x16000618: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x1600061C: srl         $t0, $s2, 1
    ctx->r8 = S32(U32(ctx->r18) >> 1);
    // 0x16000620: bne         $at, $zero, L_160005F4
    if (ctx->r1 != 0) {
        // 0x16000624: or          $s2, $t0, $zero
        ctx->r18 = ctx->r8 | 0;
            goto L_160005F4;
    }
    // 0x16000624: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x16000628: lui         $t1, 0x1600
    ctx->r9 = S32(0X1600 << 16);
    // 0x1600062C: lb          $t1, 0x3B28($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X3B28);
    // 0x16000630: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x16000634: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x16000638: bne         $t1, $at, L_16000648
    if (ctx->r9 != ctx->r1) {
        // 0x1600063C: addiu       $s0, $zero, 0xC3
        ctx->r16 = ADD32(0, 0XC3);
            goto L_16000648;
    }
    // 0x1600063C: addiu       $s0, $zero, 0xC3
    ctx->r16 = ADD32(0, 0XC3);
    // 0x16000640: b           L_16000650
    // 0x16000644: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
        goto L_16000650;
    // 0x16000644: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
L_16000648:
    // 0x16000648: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x1600064C: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
L_16000650:
    // 0x16000650: addu        $s2, $s1, $s4
    ctx->r18 = ADD32(ctx->r17, ctx->r20);
    // 0x16000654: lui         $s4, 0x1600
    ctx->r20 = S32(0X1600 << 16);
    // 0x16000658: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x1600065C: addu        $s3, $s5, $t2
    ctx->r19 = ADD32(ctx->r21, ctx->r10);
    // 0x16000660: addiu       $s4, $s4, 0x47AC
    ctx->r20 = ADD32(ctx->r20, 0X47AC);
L_16000664:
    // 0x16000664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x16000668: jal         0x160012B0
    // 0x1600066C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_160012B0(rdram, ctx);
        goto after_3;
    // 0x1600066C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x16000670: addiu       $a0, $s0, 0x2
    ctx->r4 = ADD32(ctx->r16, 0X2);
    // 0x16000674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x16000678: jal         0x16001044
    // 0x1600067C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_16001044(rdram, ctx);
        goto after_4;
    // 0x1600067C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x16000680: addiu       $a0, $s0, 0x5
    ctx->r4 = ADD32(ctx->r16, 0X5);
    // 0x16000684: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x16000688: jal         0x16001044
    // 0x1600068C: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    func_16001044(rdram, ctx);
        goto after_5;
    // 0x1600068C: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    after_5:
    // 0x16000690: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x16000694: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x16000698: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1600069C: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x160006A0: bne         $at, $zero, L_16000664
    if (ctx->r1 != 0) {
        // 0x160006A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_16000664;
    }
    // 0x160006A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x160006A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x160006AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x160006B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x160006B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x160006B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x160006BC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x160006C0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x160006C4: jr          $ra
    // 0x160006C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x160006C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15117518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15117518: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1511751C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15117520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15117524: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15117528: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1511752C: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x15117530: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15117534: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15117538: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1511753C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117540: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15117544: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x15117548: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x1511754C: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x15117550: sll         $t7, $v0, 22
    ctx->r15 = S32(ctx->r2 << 22);
    // 0x15117554: sra         $t8, $t7, 22
    ctx->r24 = S32(SIGNED(ctx->r15) >> 22);
    // 0x15117558: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1511755C: nop

    // 0x15117560: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117564: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x15117568: nop

    // 0x1511756C: bc1fl       L_15117590
    if (!c1cs) {
        // 0x15117570: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_15117590;
    }
    goto skip_0;
    // 0x15117570: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x15117574: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15117578: nop

    // 0x1511757C: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x15117580: nop

    // 0x15117584: bc1tl       L_15117760
    if (c1cs) {
        // 0x15117588: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_15117760;
    }
    goto skip_1;
    // 0x15117588: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_1:
    // 0x1511758C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_15117590:
    // 0x15117590: sra         $v1, $v0, 10
    ctx->r3 = S32(SIGNED(ctx->r2) >> 10);
    // 0x15117594: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x15117598: nop

    // 0x1511759C: bc1fl       L_15117600
    if (!c1cs) {
        // 0x151175A0: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_15117600;
    }
    goto skip_2;
    // 0x151175A0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    skip_2:
    // 0x151175A4: beq         $v1, $zero, L_151175FC
    if (ctx->r3 == 0) {
        // 0x151175A8: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_151175FC;
    }
    // 0x151175A8: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x151175AC: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x151175B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151175B4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151175B8: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x151175BC: lh          $a1, -0x6DA0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DA0);
    // 0x151175C0: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x151175C4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x151175C8: beq         $a1, $zero, L_151175FC
    if (ctx->r5 == 0) {
        // 0x151175CC: addiu       $t0, $zero, 0x9C4
        ctx->r8 = ADD32(0, 0X9C4);
            goto L_151175FC;
    }
    // 0x151175CC: addiu       $t0, $zero, 0x9C4
    ctx->r8 = ADD32(0, 0X9C4);
    // 0x151175D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151175D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151175D8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151175DC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x151175E0: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x151175E4: jal         0x15114D24
    // 0x151175E8: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    func_15114D24(rdram, ctx);
        goto after_0;
    // 0x151175E8: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x151175EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151175F0: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151175F4: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151175F8: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
L_151175FC:
    // 0x151175FC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
L_15117600:
    // 0x15117600: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x15117604: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x15117608: jal         0x15048A70
    // 0x1511760C: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    func_15048A70(rdram, ctx);
        goto after_1;
    // 0x1511760C: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x15117610: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15117614: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x15117618: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511761C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15117620: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15117624: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15117628: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x1511762C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15117630: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15117634: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15117638: jal         0x15048A70
    // 0x1511763C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    func_15048A70(rdram, ctx);
        goto after_2;
    // 0x1511763C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x15117640: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15117644: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x15117648: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511764C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x15117650: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15117654: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15117658: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1511765C: bc1f        L_15117674
    if (!c1cs) {
        // 0x15117660: swc1        $f0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
            goto L_15117674;
    }
    // 0x15117660: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15117664: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x15117668: nop

    // 0x1511766C: bc1tl       L_15117698
    if (c1cs) {
        // 0x15117670: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_15117698;
    }
    goto skip_3;
    // 0x15117670: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_3:
L_15117674:
    // 0x15117674: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x15117678: nop

    // 0x1511767C: bc1fl       L_151176B8
    if (!c1cs) {
        // 0x15117680: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_151176B8;
    }
    goto skip_4;
    // 0x15117680: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_4:
    // 0x15117684: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x15117688: nop

    // 0x1511768C: bc1fl       L_151176B8
    if (!c1cs) {
        // 0x15117690: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_151176B8;
    }
    goto skip_5;
    // 0x15117690: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_5:
    // 0x15117694: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
L_15117698:
    // 0x15117698: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1511769C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x151176A0: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x151176A4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x151176A8: mul.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151176AC: b           L_151176D8
    // 0x151176B0: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
        goto L_151176D8;
    // 0x151176B0: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151176B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_151176B8:
    // 0x151176B8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151176BC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151176C0: bc1fl       L_151176D4
    if (!c1cs) {
        // 0x151176C4: sub.s       $f2, $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
            goto L_151176D4;
    }
    goto skip_6;
    // 0x151176C4: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    skip_6:
    // 0x151176C8: b           L_151176D4
    // 0x151176CC: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
        goto L_151176D4;
    // 0x151176CC: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151176D0: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
L_151176D4:
    // 0x151176D4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
L_151176D8:
    // 0x151176D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151176DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151176E0: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151176E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151176E8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x151176EC: nop

    // 0x151176F0: bc1fl       L_15117720
    if (!c1cs) {
        // 0x151176F4: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_15117720;
    }
    goto skip_7;
    // 0x151176F4: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_7:
    // 0x151176F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151176FC: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15117700: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15117704: nop

    // 0x15117708: bc1fl       L_15117720
    if (!c1cs) {
        // 0x1511770C: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_15117720;
    }
    goto skip_8;
    // 0x1511770C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_8:
    // 0x15117710: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x15117714: b           L_15117758
    // 0x15117718: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_15117758;
    // 0x15117718: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x1511771C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
L_15117720:
    // 0x15117720: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15117724: bc1fl       L_15117740
    if (!c1cs) {
        // 0x15117728: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15117740;
    }
    goto skip_9;
    // 0x15117728: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_9:
    // 0x1511772C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15117730: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15117734: b           L_15117758
    // 0x15117738: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
        goto L_15117758;
    // 0x15117738: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1511773C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15117740:
    // 0x15117740: nop

    // 0x15117744: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x15117748: nop

    // 0x1511774C: bc1fl       L_1511775C
    if (!c1cs) {
        // 0x15117750: swc1        $f2, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->f2.u32l;
            goto L_1511775C;
    }
    goto skip_10;
    // 0x15117750: swc1        $f2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f2.u32l;
    skip_10:
    // 0x15117754: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_15117758:
    // 0x15117758: swc1        $f2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f2.u32l;
L_1511775C:
    // 0x1511775C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_15117760:
    // 0x15117760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15117764: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15117768: jr          $ra
    // 0x1511776C: nop

    return;
    return;
    // 0x1511776C: nop

;}
RECOMP_FUNC void func_150AD780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AD780: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD784: lwc1        $f10, -0x8F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8F0);
    // 0x150AD788: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
;}
RECOMP_FUNC void func_10017C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017C68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10017C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10017C70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10017C74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x10017C78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10017C7C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x10017C80: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x10017C84: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x10017C88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x10017C8C: ori         $t6, $a2, 0xB0
    ctx->r14 = ctx->r6 | 0XB0;
    // 0x10017C90: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x10017C94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10017C98: addiu       $a3, $zero, 0xFD
    ctx->r7 = ADD32(0, 0XFD);
    // 0x10017C9C: jal         0x1001E400
    // 0x10017CA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1001E400(rdram, ctx);
        goto after_0;
    // 0x10017CA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x10017CA4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x10017CA8: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x10017CAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x10017CB0: ori         $t8, $a2, 0xB0
    ctx->r24 = ctx->r6 | 0XB0;
    // 0x10017CB4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x10017CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10017CBC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x10017CC0: jal         0x1001E400
    // 0x10017CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1001E400(rdram, ctx);
        goto after_1;
    // 0x10017CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x10017CC8: b           L_10017CD0
    // 0x10017CCC: nop

        goto L_10017CD0;
    // 0x10017CCC: nop

L_10017CD0:
    // 0x10017CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10017CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10017CD8: jr          $ra
    // 0x10017CDC: nop

    return;
    return;
    // 0x10017CDC: nop

;}
RECOMP_FUNC void func_15197BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15197BBC: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15197BC0: lwc1        $f2, 0x164($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X164);
    // 0x15197BC4: lwc1        $f12, 0x2C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15197BC8: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15197BCC: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15197BD0: lh          $t6, 0x168($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X168);
    // 0x15197BD4: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x15197BD8: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15197BDC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x15197BE0: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x15197BE4: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x15197BE8: beq         $at, $zero, L_15197C04
    if (ctx->r1 == 0) {
        // 0x15197BEC: swc1        $f10, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
            goto L_15197C04;
    }
    // 0x15197BEC: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x15197BF0: lh          $t7, 0x16A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X16A);
    // 0x15197BF4: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15197BF8: mflo        $t8
    ctx->r24 = lo;
    // 0x15197BFC: sb          $t8, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r24;
    // 0x15197C00: nop

L_15197C04:
    // 0x15197C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15197C08: jr          $ra
    // 0x15197C0C: nop

    return;
    return;
    // 0x15197C0C: nop

;}
RECOMP_FUNC void func_151A5CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5CAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A5CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A5CB4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A5CB8: lhu         $t6, 0x6C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6C);
    // 0x151A5CBC: beq         $t6, $zero, L_151A5CD4
    if (ctx->r14 == 0) {
        // 0x151A5CC0: nop
    
            goto L_151A5CD4;
    }
    // 0x151A5CC0: nop

    // 0x151A5CC4: lhu         $a0, 0x6C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6C);
    // 0x151A5CC8: jal         0x151A5D2C
    // 0x151A5CCC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_151A5D2C(rdram, ctx);
        goto after_0;
    // 0x151A5CCC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x151A5CD0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_151A5CD4:
    // 0x151A5CD4: jal         0x1514933C
    // 0x151A5CD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151A5CD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151A5CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A5CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5CE4: jr          $ra
    // 0x151A5CE8: nop

    return;
    return;
    // 0x151A5CE8: nop

;}
RECOMP_FUNC void func_15162740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15162740: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15162744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15162748: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1516274C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15162750: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15162754: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x15162758: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x1516275C: lbu         $v0, 0x57($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X57);
    // 0x15162760: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x15162764: slti        $at, $t6, 0x18
    ctx->r1 = SIGNED(ctx->r14) < 0X18 ? 1 : 0;
    // 0x15162768: bne         $at, $zero, L_15162778
    if (ctx->r1 != 0) {
        // 0x1516276C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15162778;
    }
    // 0x1516276C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15162770: b           L_1516283C
    // 0x15162774: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1516283C;
    // 0x15162774: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15162778:
    // 0x15162778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516277C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15162780: lwc1        $f4, 0x67C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X67C0);
    // 0x15162784: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15162788: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1516278C: lwc1        $f6, 0x6760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6760);
    // 0x15162790: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15162794: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15162798: lwc1        $f8, 0x6820($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6820);
    // 0x1516279C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151627A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151627A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151627A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151627AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151627B0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151627B4: lwc1        $f4, 0x6AF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6AF8);
    // 0x151627B8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x151627BC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x151627C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151627C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151627C8: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x151627CC: lb          $t9, 0x67($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X67);
    // 0x151627D0: lh          $t0, 0x62($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X62);
    // 0x151627D4: lbu         $t1, 0x5B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5B);
    // 0x151627D8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x151627DC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151627E0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151627E4: lbu         $a3, 0x6B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6B);
    // 0x151627E8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x151627EC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x151627F0: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x151627F4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x151627F8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x151627FC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x15162800: sb          $t8, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r24;
    // 0x15162804: sb          $t9, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r25;
    // 0x15162808: sh          $t0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r8;
    // 0x1516280C: sb          $t1, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r9;
    // 0x15162810: jal         0x1516037C
    // 0x15162814: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x15162814: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x15162818: beq         $v0, $zero, L_15162838
    if (ctx->r2 == 0) {
        // 0x1516281C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15162838;
    }
    // 0x1516281C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15162820: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15162824: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x15162828: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1516282C: jal         0x10022EC0
    // 0x15162830: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15162830: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15162834: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_15162838:
    // 0x15162838: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1516283C:
    // 0x1516283C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15162840: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15162844: jr          $ra
    // 0x15162848: nop

    return;
    return;
    // 0x15162848: nop

;}
RECOMP_FUNC void func_151A0AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A0AF8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151A0AFC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151A0B00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A0B04: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x151A0B08: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151A0B0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151A0B10: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151A0B14: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x151A0B18: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151A0B1C: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151A0B20: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151A0B24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A0B28: lwc1        $f4, -0x72F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X72F0);
    // 0x151A0B2C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A0B30: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A0B34: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151A0B38: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151A0B3C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A0B40: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A0B44: swc1        $f16, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f16.u32l;
    // 0x151A0B48: lwc1        $f18, 0x38($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151A0B4C: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x151A0B50: nop

    // 0x151A0B54: bc1fl       L_151A0BEC
    if (!c1cs) {
        // 0x151A0B58: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_151A0BEC;
    }
    goto skip_0;
    // 0x151A0B58: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x151A0B5C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151A0B60: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151A0B64: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151A0B68: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x151A0B6C: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
L_151A0B70:
    // 0x151A0B70: jal         0x150ADA68
    // 0x151A0B74: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A0B74: nop

    after_0:
    // 0x151A0B78: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151A0B7C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A0B80: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A0B84: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x151A0B88: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151A0B8C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x151A0B90: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x151A0B94: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151A0B98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151A0B9C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151A0BA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A0BA4: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x151A0BA8: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x151A0BAC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151A0BB0: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x151A0BB4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151A0BB8: lbu         $t0, 0xC($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XC);
    // 0x151A0BBC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151A0BC0: jal         0x1514C678
    // 0x151A0BC4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1514C678(rdram, ctx);
        goto after_1;
    // 0x151A0BC4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x151A0BC8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A0BCC: sub.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x151A0BD0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x151A0BD4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A0BD8: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x151A0BDC: nop

    // 0x151A0BE0: bc1t        L_151A0B70
    if (c1cs) {
        // 0x151A0BE4: nop
    
            goto L_151A0B70;
    }
    // 0x151A0BE4: nop

    // 0x151A0BE8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_151A0BEC:
    // 0x151A0BEC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151A0BF0: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151A0BF4: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151A0BF8: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151A0BFC: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x151A0C00: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x151A0C04: jr          $ra
    // 0x151A0C08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x151A0C08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151643F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151643F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151643FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15164400: jal         0x1516441C
    // 0x15164404: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_1516441C(rdram, ctx);
        goto after_0;
    // 0x15164404: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x15164408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516440C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15164410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15164414: jr          $ra
    // 0x15164418: nop

    return;
    return;
    // 0x15164418: nop

;}
RECOMP_FUNC void func_151B9690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9690: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151B9694: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B9698: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x151B969C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151B96A0: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151B96A4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151B96A8: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151B96AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151B96B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B96B4: lh          $t6, 0x9E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9E);
    // 0x151B96B8: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x151B96BC: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x151B96C0: jal         0x150ADA20
    // 0x151B96C4: swc1        $f14, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f14.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151B96C4: swc1        $f14, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x151B96C8: lh          $v1, 0xAE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XAE);
    // 0x151B96CC: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151B96D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B96D4: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x151B96D8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151B96DC: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x151B96E0: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x151B96E4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x151B96E8: lwc1        $f10, -0x5A80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A80);
    // 0x151B96EC: bne         $v1, $zero, L_151B96F8
    if (ctx->r3 != 0) {
        // 0x151B96F0: nop
    
            goto L_151B96F8;
    }
    // 0x151B96F0: nop

    // 0x151B96F4: break       7
    do_break(354129652);
L_151B96F8:
    // 0x151B96F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151B96FC: add.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x151B9700: mul.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x151B9704: jal         0x15047D60
    // 0x151B9708: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151B9708: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x151B970C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151B9710: jal         0x15047C00
    // 0x151B9714: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x151B9714: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x151B9718: lh          $t2, 0xBA($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XBA);
    // 0x151B971C: lh          $v1, 0xBE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XBE);
    // 0x151B9720: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151B9724: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x151B9728: bne         $v1, $zero, L_151B9734
    if (ctx->r3 != 0) {
        // 0x151B972C: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_151B9734;
    }
    // 0x151B972C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151B9730: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151B9734:
    // 0x151B9734: sh          $v1, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r3;
    // 0x151B9738: jal         0x150ADA20
    // 0x151B973C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151B973C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x151B9740: lh          $v1, 0xBE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XBE);
    // 0x151B9744: lh          $t6, 0xC2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XC2);
    // 0x151B9748: lh          $t7, 0x9A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9A);
    // 0x151B974C: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x151B9750: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x151B9754: mfhi        $t3
    ctx->r11 = hi;
    // 0x151B9758: sra         $t4, $v1, 1
    ctx->r12 = S32(SIGNED(ctx->r3) >> 1);
    // 0x151B975C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151B9760: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x151B9764: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x151B9768: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B976C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151B9770: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151B9774: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151B9778: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151B977C: lh          $t2, 0xA2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XA2);
    // 0x151B9780: lh          $t5, 0x9E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X9E);
    // 0x151B9784: bne         $v1, $zero, L_151B9790
    if (ctx->r3 != 0) {
        // 0x151B9788: nop
    
            goto L_151B9790;
    }
    // 0x151B9788: nop

    // 0x151B978C: break       7
    do_break(354129804);
L_151B9790:
    // 0x151B9790: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151B9794: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x151B9798: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x151B979C: sh          $t6, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r14;
    // 0x151B97A0: add.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151B97A4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151B97A8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151B97AC: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x151B97B0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151B97B4: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151B97B8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B97BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151B97C0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B97C4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B97C8: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x151B97CC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151B97D0: jal         0x150ADA20
    // 0x151B97D4: sh          $t4, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151B97D4: sh          $t4, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r12;
    after_4:
    // 0x151B97D8: lh          $v1, 0xB6($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XB6);
    // 0x151B97DC: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x151B97E0: lh          $t2, 0xB2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XB2);
    // 0x151B97E4: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x151B97E8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151B97EC: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x151B97F0: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x151B97F4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151B97F8: bne         $v1, $zero, L_151B9804
    if (ctx->r3 != 0) {
        // 0x151B97FC: nop
    
            goto L_151B9804;
    }
    // 0x151B97FC: nop

    // 0x151B9800: break       7
    do_break(354129920);
L_151B9804:
    // 0x151B9804: lh          $v0, 0xCA($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XCA);
    // 0x151B9808: beq         $a0, $zero, L_151B9844
    if (ctx->r4 == 0) {
        // 0x151B980C: addu        $a1, $t2, $t9
        ctx->r5 = ADD32(ctx->r10, ctx->r25);
            goto L_151B9844;
    }
    // 0x151B980C: addu        $a1, $t2, $t9
    ctx->r5 = ADD32(ctx->r10, ctx->r25);
    // 0x151B9810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151B9814: beq         $a0, $at, L_151B9844
    if (ctx->r4 == ctx->r1) {
        // 0x151B9818: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151B9844;
    }
    // 0x151B9818: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151B981C: beq         $a0, $at, L_151B9838
    if (ctx->r4 == ctx->r1) {
        // 0x151B9820: addiu       $v1, $zero, 0x68
        ctx->r3 = ADD32(0, 0X68);
            goto L_151B9838;
    }
    // 0x151B9820: addiu       $v1, $zero, 0x68
    ctx->r3 = ADD32(0, 0X68);
    // 0x151B9824: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151B9828: beql        $a0, $at, L_151B9848
    if (ctx->r4 == ctx->r1) {
        // 0x151B982C: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_151B9848;
    }
    goto skip_0;
    // 0x151B982C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    skip_0:
    // 0x151B9830: b           L_151B9848
    // 0x151B9834: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
        goto L_151B9848;
    // 0x151B9834: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_151B9838:
    // 0x151B9838: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x151B983C: b           L_151B9850
    // 0x151B9840: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
        goto L_151B9850;
    // 0x151B9840: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
L_151B9844:
    // 0x151B9844: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_151B9848:
    // 0x151B9848: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B984C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151B9850:
    // 0x151B9850: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B9854: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151B9858: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x151B985C: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x151B9860: lh          $t6, 0xC6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XC6);
    // 0x151B9864: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x151B9868: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x151B986C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151B9870: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x151B9874: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x151B9878: lw          $t5, -0x35B4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X35B4);
    // 0x151B987C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x151B9880: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B9884: andi        $t2, $t8, 0xFFFF
    ctx->r10 = ctx->r24 & 0XFFFF;
    // 0x151B9888: lh          $t4, 0x9A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X9A);
    // 0x151B988C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B9890: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x151B9894: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x151B9898: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x151B989C: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
    // 0x151B98A0: lh          $t5, 0x9E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X9E);
    // 0x151B98A4: lh          $t6, 0xA2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA2);
    // 0x151B98A8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x151B98AC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B98B0: sh          $t3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r11;
    // 0x151B98B4: sh          $t4, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r12;
    // 0x151B98B8: addiu       $t3, $zero, -0xA0
    ctx->r11 = ADD32(0, -0XA0);
    // 0x151B98BC: addiu       $t4, $zero, 0x190
    ctx->r12 = ADD32(0, 0X190);
    // 0x151B98C0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x151B98C4: sh          $zero, 0x64($sp)
    MEM_H(0X64, ctx->r29) = 0;
    // 0x151B98C8: sh          $v0, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r2;
    // 0x151B98CC: sb          $zero, 0x77($sp)
    MEM_B(0X77, ctx->r29) = 0;
    // 0x151B98D0: sh          $a1, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r5;
    // 0x151B98D4: sh          $t3, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r11;
    // 0x151B98D8: sh          $v0, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r2;
    // 0x151B98DC: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    // 0x151B98E0: sh          $t4, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r12;
    // 0x151B98E4: sb          $zero, 0x82($sp)
    MEM_B(0X82, ctx->r29) = 0;
    // 0x151B98E8: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    // 0x151B98EC: sb          $t0, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r8;
    // 0x151B98F0: sb          $t1, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r9;
    // 0x151B98F4: sh          $t5, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r13;
    // 0x151B98F8: sh          $t6, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r14;
    // 0x151B98FC: sh          $t7, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r15;
    // 0x151B9900: jal         0x150ADA20
    // 0x151B9904: sh          $t9, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151B9904: sh          $t9, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r25;
    after_5:
    // 0x151B9908: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x151B990C: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x151B9910: lbu         $t1, 0x2D($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2D);
    // 0x151B9914: lbu         $t6, 0xCF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XCF);
    // 0x151B9918: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x151B991C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151B9920: sb          $v0, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r2;
    // 0x151B9924: sb          $t5, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r13;
    // 0x151B9928: sh          $zero, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = 0;
    // 0x151B992C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151B9930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151B9934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B9938: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151B993C: sb          $v1, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r3;
    // 0x151B9940: sb          $t0, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r8;
    // 0x151B9944: sb          $t1, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r9;
    // 0x151B9948: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151B994C: jal         0x15167D84
    // 0x151B9950: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_15167D84(rdram, ctx);
        goto after_6;
    // 0x151B9950: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_6:
    // 0x151B9954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B9958: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151B995C: jr          $ra
    // 0x151B9960: nop

    return;
    return;
    // 0x151B9960: nop

;}
RECOMP_FUNC void func_151A4A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4A38: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151A4A3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151A4A40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A4A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A4A48: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x151A4A4C: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x151A4A50: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x151A4A54: beql        $t7, $zero, L_151A4A84
    if (ctx->r15 == 0) {
        // 0x151A4A58: lbu         $t2, 0xD($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XD);
            goto L_151A4A84;
    }
    goto skip_0;
    // 0x151A4A58: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
    skip_0:
    // 0x151A4A5C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151A4A60: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151A4A64: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x151A4A68: beql        $t8, $at, L_151A4A84
    if (ctx->r24 == ctx->r1) {
        // 0x151A4A6C: lbu         $t2, 0xD($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XD);
            goto L_151A4A84;
    }
    goto skip_1;
    // 0x151A4A6C: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
    skip_1:
    // 0x151A4A70: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x151A4A74: lbu         $t0, 0x3B($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3B);
    // 0x151A4A78: beql        $t9, $t0, L_151A4A9C
    if (ctx->r25 == ctx->r8) {
        // 0x151A4A7C: lw          $t4, 0x1D4($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X1D4);
            goto L_151A4A9C;
    }
    goto skip_2;
    // 0x151A4A7C: lw          $t4, 0x1D4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1D4);
    skip_2:
    // 0x151A4A80: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
L_151A4A84:
    // 0x151A4A84: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151A4A88: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
    // 0x151A4A8C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x151A4A90: b           L_151A4CCC
    // 0x151A4A94: sb          $t3, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r11;
        goto L_151A4CCC;
    // 0x151A4A94: sb          $t3, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r11;
    // 0x151A4A98: lw          $t4, 0x1D4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1D4);
L_151A4A9C:
    // 0x151A4A9C: beql        $t4, $zero, L_151A4CD0
    if (ctx->r12 == 0) {
        // 0x151A4AA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151A4CD0;
    }
    goto skip_3;
    // 0x151A4AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x151A4AA4: lbu         $t5, 0x74($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X74);
    // 0x151A4AA8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151A4AAC: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x151A4AB0: beq         $t6, $at, L_151A4CCC
    if (ctx->r14 == ctx->r1) {
        // 0x151A4AB4: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_151A4CCC;
    }
    // 0x151A4AB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A4AB8: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A4ABC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151A4AC0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A4AC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A4AC8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A4ACC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A4AD0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A4AD4: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x151A4AD8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A4ADC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x151A4AE0: nop

    // 0x151A4AE4: bc1fl       L_151A4CD0
    if (!c1cs) {
        // 0x151A4AE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151A4CD0;
    }
    goto skip_4;
    // 0x151A4AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x151A4AEC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151A4AF0: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x151A4AF4: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x151A4AF8: lhu         $t7, 0x76($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X76);
    // 0x151A4AFC: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x151A4B00: addiu       $t9, $t8, -0x40
    ctx->r25 = ADD32(ctx->r24, -0X40);
    // 0x151A4B04: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
    // 0x151A4B08: lbu         $t1, 0x10($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X10);
    // 0x151A4B0C: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    // 0x151A4B10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x151A4B14: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x151A4B18: jal         0x15143134
    // 0x151A4B1C: addu        $a2, $t0, $t2
    ctx->r6 = ADD32(ctx->r8, ctx->r10);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151A4B1C: addu        $a2, $t0, $t2
    ctx->r6 = ADD32(ctx->r8, ctx->r10);
    after_0:
    // 0x151A4B20: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x151A4B24: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x151A4B28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A4B2C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A4B30: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x151A4B34: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151A4B38: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A4B3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A4B40: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x151A4B44: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151A4B48: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151A4B4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A4B50: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x151A4B54: sh          $t4, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r12;
    // 0x151A4B58: lh          $t5, 0x2C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2C);
    // 0x151A4B5C: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151A4B60: addiu       $t7, $zero, 0xC01
    ctx->r15 = ADD32(0, 0XC01);
    // 0x151A4B64: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x151A4B68: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151A4B6C: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x151A4B70: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151A4B74: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x151A4B78: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151A4B7C: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x151A4B80: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x151A4B84: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x151A4B88: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x151A4B8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151A4B90: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x151A4B94: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x151A4B98: sb          $t6, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r14;
    // 0x151A4B9C: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x151A4BA0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151A4BA4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151A4BA8: sh          $t9, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r25;
    // 0x151A4BAC: sh          $t1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r9;
    // 0x151A4BB0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151A4BB4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x151A4BB8: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    // 0x151A4BBC: sb          $zero, 0x49($sp)
    MEM_B(0X49, ctx->r29) = 0;
    // 0x151A4BC0: sb          $zero, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = 0;
    // 0x151A4BC4: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    // 0x151A4BC8: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x151A4BCC: sb          $zero, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = 0;
    // 0x151A4BD0: sb          $zero, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = 0;
    // 0x151A4BD4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x151A4BD8: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x151A4BDC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151A4BE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151A4BE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A4BE8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151A4BEC: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151A4BF0: addiu       $t0, $zero, -0x2C
    ctx->r8 = ADD32(0, -0X2C);
    // 0x151A4BF4: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x151A4BF8: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151A4BFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151A4C00: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151A4C04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A4C08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A4C0C: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x151A4C10: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151A4C14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A4C18: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x151A4C1C: addiu       $t1, $t9, -0x19
    ctx->r9 = ADD32(ctx->r25, -0X19);
    // 0x151A4C20: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x151A4C24: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x151A4C28: sh          $t8, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r24;
    // 0x151A4C2C: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x151A4C30: sh          $t1, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r9;
    // 0x151A4C34: sh          $t0, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r8;
    // 0x151A4C38: sh          $t5, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r13;
    // 0x151A4C3C: sh          $t4, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r12;
    // 0x151A4C40: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x151A4C44: sb          $t3, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r11;
    // 0x151A4C48: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x151A4C4C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151A4C50: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151A4C54: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151A4C58: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x151A4C5C: jal         0x150ADA20
    // 0x151A4C60: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A4C60: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151A4C64: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151A4C68: beq         $t6, $zero, L_151A4C78
    if (ctx->r14 == 0) {
        // 0x151A4C6C: lw          $t7, 0x88($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X88);
            goto L_151A4C78;
    }
    // 0x151A4C6C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x151A4C70: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x151A4C74: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
L_151A4C78:
    // 0x151A4C78: jal         0x150ADA20
    // 0x151A4C7C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151A4C7C: nop

    after_2:
    // 0x151A4C80: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151A4C84: beq         $t9, $zero, L_151A4C98
    if (ctx->r25 == 0) {
        // 0x151A4C88: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_151A4C98;
    }
    // 0x151A4C88: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A4C8C: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x151A4C90: ori         $t0, $t1, 0x80
    ctx->r8 = ctx->r9 | 0X80;
    // 0x151A4C94: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
L_151A4C98:
    // 0x151A4C98: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A4C9C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151A4CA0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151A4CA4: sb          $t5, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r13;
    // 0x151A4CA8: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x151A4CAC: sb          $t4, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r12;
    // 0x151A4CB0: sb          $t2, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r10;
    // 0x151A4CB4: sb          $t3, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r11;
    // 0x151A4CB8: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x151A4CBC: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x151A4CC0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151A4CC4: jal         0x15153634
    // 0x151A4CC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_15153634(rdram, ctx);
        goto after_3;
    // 0x151A4CC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_3:
L_151A4CCC:
    // 0x151A4CCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151A4CD0:
    // 0x151A4CD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151A4CD4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151A4CD8: jr          $ra
    // 0x151A4CDC: nop

    return;
    return;
    // 0x151A4CDC: nop

;}
RECOMP_FUNC void func_1510AA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510AA20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1510AA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510AA28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1510AA2C: jal         0x15179008
    // 0x1510AA30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15179008(rdram, ctx);
        goto after_0;
    // 0x1510AA30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1510AA34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510AA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1510AA3C: jr          $ra
    // 0x1510AA40: nop

    return;
    return;
    // 0x1510AA40: nop

;}
RECOMP_FUNC void func_1502C3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502C3BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1502C3C0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502C3C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502C3C8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1502C3CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502C3D0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502C3D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502C3D8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502C3DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502C3E0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1502C3E4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1502C3E8: lbu         $v1, -0x3BFA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BFA);
    // 0x1502C3EC: slti        $at, $v1, 0x46
    ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
    // 0x1502C3F0: bnel        $at, $zero, L_1502C400
    if (ctx->r1 != 0) {
        // 0x1502C3F4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1502C400;
    }
    goto skip_0;
    // 0x1502C3F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x1502C3F8: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x1502C3FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1502C400:
    // 0x1502C400: jr          $ra
    // 0x1502C404: nop

    return;
    return;
    // 0x1502C404: nop

;}
RECOMP_FUNC void alHeapInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012820: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x10012824: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x10012828: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1001282C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x10012830: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x10012834: jr          $ra
    // 0x10012838: nop

    return;
    return;
    // 0x10012838: nop

    // 0x1001283C: jr          $ra
    // 0x10012840: nop

    return;
    return;
    // 0x10012840: nop

;}
RECOMP_FUNC void func_151DDBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DDBA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DDBA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DDBA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151DDBAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151DDBB0: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151DDBB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151DDBB8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151DDBBC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x151DDBC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DDBC4: jal         0x1501C730
    // 0x151DDBC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_0;
    // 0x151DDBC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151DDBCC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151DDBD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DDBD4: sb          $t7, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r15;
    // 0x151DDBD8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DDBDC: sb          $zero, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = 0;
    // 0x151DDBE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151DDBE4: jal         0x151E557C
    // 0x151DDBE8: sb          $zero, -0x153F($at)
    MEM_B(-0X153F, ctx->r1) = 0;
    func_151E557C(rdram, ctx);
        goto after_1;
    // 0x151DDBE8: sb          $zero, -0x153F($at)
    MEM_B(-0X153F, ctx->r1) = 0;
    after_1:
    // 0x151DDBEC: jal         0x1000F1A8
    // 0x151DDBF0: nop

    func_1000F1A8(rdram, ctx);
        goto after_2;
    // 0x151DDBF0: nop

    after_2:
    // 0x151DDBF4: jal         0x1000E934
    // 0x151DDBF8: nop

    func_1000E934(rdram, ctx);
        goto after_3;
    // 0x151DDBF8: nop

    after_3:
    // 0x151DDBFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151DDC00: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DDC04: sb          $v0, -0x274($at)
    MEM_B(-0X274, ctx->r1) = ctx->r2;
    // 0x151DDC08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DDC0C: sb          $v0, -0x270($at)
    MEM_B(-0X270, ctx->r1) = ctx->r2;
    // 0x151DDC10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DDC14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151DDC18: jr          $ra
    // 0x151DDC1C: nop

    return;
    return;
    // 0x151DDC1C: nop

;}
RECOMP_FUNC void func_15100230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15100230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15100234: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15100238: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1510023C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15100240: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15100244: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x15100248: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1510024C: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x15100250: bne         $t6, $at, L_15100298
    if (ctx->r14 != ctx->r1) {
        // 0x15100254: addiu       $a2, $t3, 0x28
        ctx->r6 = ADD32(ctx->r11, 0X28);
            goto L_15100298;
    }
    // 0x15100254: addiu       $a2, $t3, 0x28
    ctx->r6 = ADD32(ctx->r11, 0X28);
    // 0x15100258: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x1510025C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x15100260: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x15100264: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x15100268: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1510026C: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x15100270: beq         $t7, $t9, L_15100288
    if (ctx->r15 == ctx->r25) {
        // 0x15100274: nop
    
            goto L_15100288;
    }
    // 0x15100274: nop

    // 0x15100278: lbu         $t0, 0x4($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X4);
    // 0x1510027C: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x15100280: bnel        $t0, $t2, L_151002B0
    if (ctx->r8 != ctx->r10) {
        // 0x15100284: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151002B0;
    }
    goto skip_0;
    // 0x15100284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_15100288:
    // 0x15100288: jal         0x1516972C
    // 0x1510028C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1510028C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x15100290: b           L_151002B0
    // 0x15100294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151002B0;
    // 0x15100294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15100298:
    // 0x15100298: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1510029C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151002A0: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x151002A4: jal         0x15149514
    // 0x151002A8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15149514(rdram, ctx);
        goto after_1;
    // 0x151002A8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x151002AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151002B0:
    // 0x151002B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151002B4: jr          $ra
    // 0x151002B8: nop

    return;
    return;
    // 0x151002B8: nop

;}
RECOMP_FUNC void func_15035808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15035808: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1503580C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x15035810: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15035814: addiu       $s5, $s5, 0x3F00
    ctx->r21 = ADD32(ctx->r21, 0X3F00);
    // 0x15035818: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x1503581C: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x15035820: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x15035824: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x15035828: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x1503582C: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x15035830: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x15035834: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x15035838: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x1503583C: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x15035840: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x15035844: lbu         $t6, 0x0($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X0);
    // 0x15035848: addiu       $s1, $zero, 0x578
    ctx->r17 = ADD32(0, 0X578);
    // 0x1503584C: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x15035850: beql        $v0, $t6, L_15035D48
    if (ctx->r2 == ctx->r14) {
        // 0x15035854: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15035D48;
    }
    goto skip_0;
    // 0x15035854: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x15035858: bne         $t7, $zero, L_15035894
    if (ctx->r15 != 0) {
        // 0x1503585C: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_15035894;
    }
    // 0x1503585C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x15035860: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x15035864: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15035868: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x1503586C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15035870: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x15035874: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15035878: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x1503587C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15035880: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15035884: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15035888: lw          $t9, -0x3D30($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3D30);
    // 0x1503588C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15035890: bne         $t9, $at, L_15035D44
    if (ctx->r25 != ctx->r1) {
        // 0x15035894: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_15035D44;
    }
L_15035894:
    // 0x15035894: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x15035898: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x1503589C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150358A0: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x150358A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150358A8: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x150358AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150358B0: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x150358B4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150358B8: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x150358BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150358C0: addu        $s4, $t3, $t4
    ctx->r20 = ADD32(ctx->r11, ctx->r12);
    // 0x150358C4: lw          $t5, 0x1D4($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X1D4);
    // 0x150358C8: beql        $t5, $zero, L_15035D48
    if (ctx->r13 == 0) {
        // 0x150358CC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15035D48;
    }
    goto skip_1;
    // 0x150358CC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x150358D0: lbu         $t6, 0x74($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X74);
    // 0x150358D4: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x150358D8: beql        $v0, $t7, L_15035D48
    if (ctx->r2 == ctx->r15) {
        // 0x150358DC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15035D48;
    }
    goto skip_2;
    // 0x150358DC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_2:
    // 0x150358E0: lbu         $s0, 0x7($s4)
    ctx->r16 = MEM_BU(ctx->r20, 0X7);
    // 0x150358E4: beql        $s0, $zero, L_15035D48
    if (ctx->r16 == 0) {
        // 0x150358E8: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15035D48;
    }
    goto skip_3;
    // 0x150358E8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_3:
    // 0x150358EC: lbu         $a0, 0x4($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X4);
    // 0x150358F0: jal         0x1502DB20
    // 0x150358F4: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    func_1502DB20(rdram, ctx);
        goto after_0;
    // 0x150358F4: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    after_0:
    // 0x150358F8: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x150358FC: addiu       $s3, $s3, 0x3E88
    ctx->r19 = ADD32(ctx->r19, 0X3E88);
    // 0x15035900: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x15035904: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15035908: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1503590C: lw          $t6, 0x3E8C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3E8C);
    // 0x15035910: lhu         $t8, 0x3E7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3E7C);
    // 0x15035914: sll         $t4, $v0, 6
    ctx->r12 = S32(ctx->r2 << 6);
    // 0x15035918: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1503591C: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x15035920: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15035924: sltu        $at, $t9, $t7
    ctx->r1 = ctx->r25 < ctx->r15 ? 1 : 0;
    // 0x15035928: bne         $at, $zero, L_15035D44
    if (ctx->r1 != 0) {
        // 0x1503592C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_15035D44;
    }
    // 0x1503592C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15035930: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15035934: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x15035938: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503593C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15035940: bne         $t8, $at, L_1503594C
    if (ctx->r24 != ctx->r1) {
        // 0x15035944: nop
    
            goto L_1503594C;
    }
    // 0x15035944: nop

    // 0x15035948: addiu       $s1, $zero, 0x2710
    ctx->r17 = ADD32(0, 0X2710);
L_1503594C:
    // 0x1503594C: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x15035950: lwc1        $f6, 0x14($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X14);
    // 0x15035954: lwc1        $f18, 0x18($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X18);
    // 0x15035958: lwc1        $f4, 0x2F8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1503595C: lwc1        $f16, 0x2FC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x15035960: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15035964: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15035968: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1503596C: lwc1        $f8, 0x300($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15035970: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15035974: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15035978: lwc1        $f10, 0x1C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x1503597C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15035980: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15035984: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15035988: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1503598C: jal         0x150AD9A0
    // 0x15035990: nop

    func_150AD9A0(rdram, ctx);
        goto after_1;
    // 0x15035990: nop

    after_1:
    // 0x15035994: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x15035998: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1503599C: addiu       $t6, $s1, -0xC8
    ctx->r14 = ADD32(ctx->r17, -0XC8);
    // 0x150359A0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150359A4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150359A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150359AC: nop

    // 0x150359B0: bc1tl       L_15035D48
    if (c1cs) {
        // 0x150359B4: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15035D48;
    }
    goto skip_4;
    // 0x150359B4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_4:
    // 0x150359B8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x150359BC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x150359C0: addiu       $s6, $zero, 0x100
    ctx->r22 = ADD32(0, 0X100);
    // 0x150359C4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150359C8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150359CC: nop

    // 0x150359D0: bc1f        L_150359FC
    if (!c1cs) {
        // 0x150359D4: nop
    
            goto L_150359FC;
    }
    // 0x150359D4: nop

    // 0x150359D8: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150359DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150359E0: nop

    // 0x150359E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150359E8: div.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x150359EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150359F0: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x150359F4: b           L_15035A00
    // 0x150359F8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
        goto L_15035A00;
    // 0x150359F8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_150359FC:
    // 0x150359FC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_15035A00:
    // 0x15035A00: beq         $s0, $at, L_15035A18
    if (ctx->r16 == ctx->r1) {
        // 0x15035A04: nop
    
            goto L_15035A18;
    }
    // 0x15035A04: nop

    // 0x15035A08: multu       $s6, $s0
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15035A0C: mflo        $s6
    ctx->r22 = lo;
    // 0x15035A10: sra         $t7, $s6, 8
    ctx->r15 = S32(SIGNED(ctx->r22) >> 8);
    // 0x15035A14: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
L_15035A18:
    // 0x15035A18: jal         0x150356C8
    // 0x15035A1C: nop

    func_150356C8(rdram, ctx);
        goto after_2;
    // 0x15035A1C: nop

    after_2:
    // 0x15035A20: beq         $v0, $zero, L_15035D44
    if (ctx->r2 == 0) {
        // 0x15035A24: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15035D44;
    }
    // 0x15035A24: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15035A28: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x15035A2C: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x15035A30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15035A34: jal         0x1502D54C
    // 0x15035A38: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    func_1502D54C(rdram, ctx);
        goto after_3;
    // 0x15035A38: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    after_3:
    // 0x15035A3C: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x15035A40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15035A44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15035A48: sb          $t3, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r11;
    // 0x15035A4C: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x15035A50: sb          $t4, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r12;
    // 0x15035A54: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x15035A58: sb          $t5, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r13;
    // 0x15035A5C: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x15035A60: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x15035A64: sb          $t6, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r14;
    // 0x15035A68: lbu         $t9, 0x3B($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X3B);
    // 0x15035A6C: sb          $t9, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r25;
    // 0x15035A70: lw          $a3, 0x1D4($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X1D4);
    // 0x15035A74: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x15035A78: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x15035A7C: sw          $a3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r7;
    // 0x15035A80: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x15035A84: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x15035A88: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x15035A8C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15035A90: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15035A94: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x15035A98: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x15035A9C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x15035AA0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x15035AA4: lwc1        $f8, 0x18($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X18);
    // 0x15035AA8: lwc1        $f10, 0x1C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x15035AAC: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15035AB0: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15035AB4: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x15035AB8: lwc1        $f6, 0x14($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X14);
    // 0x15035ABC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x15035AC0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x15035AC4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x15035AC8: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x15035ACC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15035AD0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15035AD4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x15035AD8: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x15035ADC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x15035AE0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x15035AE4: jal         0x15034F30
    // 0x15035AE8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_15034F30(rdram, ctx);
        goto after_4;
    // 0x15035AE8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x15035AEC: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    // 0x15035AF0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15035AF4: multu       $t8, $s6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15035AF8: mflo        $t3
    ctx->r11 = lo;
    // 0x15035AFC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x15035B00: sb          $t4, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r12;
    // 0x15035B04: lw          $a3, 0xE4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE4);
    // 0x15035B08: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x15035B0C: jal         0x15035714
    // 0x15035B10: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    func_15035714(rdram, ctx);
        goto after_5;
    // 0x15035B10: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    after_5:
    // 0x15035B14: beq         $v0, $zero, L_15035B2C
    if (ctx->r2 == 0) {
        // 0x15035B18: nop
    
            goto L_15035B2C;
    }
    // 0x15035B18: nop

    // 0x15035B1C: lbu         $t5, 0x0($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X0);
    // 0x15035B20: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x15035B24: b           L_15035D44
    // 0x15035B28: sb          $t6, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r14;
        goto L_15035D44;
    // 0x15035B28: sb          $t6, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r14;
L_15035B2C:
    // 0x15035B2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15035B30: addiu       $v0, $v0, 0x3E7A
    ctx->r2 = ADD32(ctx->r2, 0X3E7A);
    // 0x15035B34: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x15035B38: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x15035B3C: sll         $t8, $s2, 6
    ctx->r24 = S32(ctx->r18 << 6);
    // 0x15035B40: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x15035B44: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x15035B48: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x15035B4C: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x15035B50: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15035B54: lw          $s0, 0x3EE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3EE0);
    // 0x15035B58: beq         $s0, $zero, L_15035D44
    if (ctx->r16 == 0) {
        // 0x15035B5C: lui         $s5, 0x800C
        ctx->r21 = S32(0X800C << 16);
            goto L_15035D44;
    }
    // 0x15035B5C: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15035B60: addiu       $s5, $s5, -0x1640
    ctx->r21 = ADD32(ctx->r21, -0X1640);
    // 0x15035B64: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
L_15035B68:
    // 0x15035B68: lbu         $t7, 0x3B($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X3B);
    // 0x15035B6C: lw          $s3, 0x54($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X54);
    // 0x15035B70: bne         $t6, $t7, L_15035B84
    if (ctx->r14 != ctx->r15) {
        // 0x15035B74: nop
    
            goto L_15035B84;
    }
    // 0x15035B74: nop

    // 0x15035B78: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x15035B7C: bne         $t9, $zero, L_15035B8C
    if (ctx->r25 != 0) {
        // 0x15035B80: nop
    
            goto L_15035B8C;
    }
    // 0x15035B80: nop

L_15035B84:
    // 0x15035B84: b           L_15035D3C
    // 0x15035B88: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
        goto L_15035D3C;
    // 0x15035B88: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_15035B8C:
    // 0x15035B8C: jal         0x150356C8
    // 0x15035B90: nop

    func_150356C8(rdram, ctx);
        goto after_6;
    // 0x15035B90: nop

    after_6:
    // 0x15035B94: beq         $v0, $zero, L_15035D44
    if (ctx->r2 == 0) {
        // 0x15035B98: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15035D44;
    }
    // 0x15035B98: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15035B9C: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x15035BA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15035BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15035BA8: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x15035BAC: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x15035BB0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15035BB4: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x15035BB8: sb          $t3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r11;
    // 0x15035BBC: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x15035BC0: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x15035BC4: sb          $t4, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r12;
    // 0x15035BC8: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x15035BCC: sb          $t6, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r14;
    // 0x15035BD0: sb          $t5, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r13;
    // 0x15035BD4: lbu         $t7, 0x3B($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X3B);
    // 0x15035BD8: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
    // 0x15035BDC: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    // 0x15035BE0: jal         0x15031070
    // 0x15035BE4: sb          $t9, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r25;
    func_15031070(rdram, ctx);
        goto after_7;
    // 0x15035BE4: sb          $t9, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r25;
    after_7:
    // 0x15035BE8: bne         $v0, $zero, L_15035BF8
    if (ctx->r2 != 0) {
        // 0x15035BEC: lwc1        $f6, 0xFC($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
            goto L_15035BF8;
    }
    // 0x15035BEC: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x15035BF0: b           L_15035D3C
    // 0x15035BF4: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
        goto L_15035D3C;
    // 0x15035BF4: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_15035BF8:
    // 0x15035BF8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15035BFC: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x15035C00: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x15035C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15035C08: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x15035C0C: beq         $v0, $zero, L_15035C18
    if (ctx->r2 == 0) {
        // 0x15035C10: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_15035C18;
    }
    // 0x15035C10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15035C14: lbu         $s2, 0x3F4($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X3F4);
L_15035C18:
    // 0x15035C18: lbu         $t3, 0x0($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X0);
    // 0x15035C1C: sll         $a0, $s2, 6
    ctx->r4 = S32(ctx->r18 << 6);
    // 0x15035C20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15035C24: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15035C28: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x15035C2C: lw          $v1, 0x4C($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X4C);
    // 0x15035C30: bnel        $v1, $zero, L_15035C68
    if (ctx->r3 != 0) {
        // 0x15035C34: sw          $v1, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r3;
            goto L_15035C68;
    }
    goto skip_5;
    // 0x15035C34: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    skip_5:
    // 0x15035C38: jal         0x10003C40
    // 0x15035C3C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    allocate_memory(rdram, ctx);
        goto after_8;
    // 0x15035C3C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    after_8:
    // 0x15035C40: lbu         $t6, 0x0($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X0);
    // 0x15035C44: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x15035C48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15035C4C: addu        $t9, $s0, $t7
    ctx->r25 = ADD32(ctx->r16, ctx->r15);
    // 0x15035C50: sw          $v0, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r2;
    // 0x15035C54: lbu         $t8, 0x0($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X0);
    // 0x15035C58: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x15035C5C: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x15035C60: lw          $v1, 0x4C($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X4C);
    // 0x15035C64: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_15035C68:
    // 0x15035C68: lbu         $t5, 0x3($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3);
    // 0x15035C6C: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x15035C70: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x15035C74: multu       $t2, $t5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15035C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15035C7C: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x15035C80: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x15035C84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15035C88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15035C8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15035C90: mflo        $t0
    ctx->r8 = lo;
    // 0x15035C94: sra         $t6, $t0, 8
    ctx->r14 = S32(SIGNED(ctx->r8) >> 8);
    // 0x15035C98: bne         $t7, $zero, L_15035CB4
    if (ctx->r15 != 0) {
        // 0x15035C9C: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_15035CB4;
    }
    // 0x15035C9C: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x15035CA0: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x15035CA4: bne         $t9, $zero, L_15035CB4
    if (ctx->r25 != 0) {
        // 0x15035CA8: nop
    
            goto L_15035CB4;
    }
    // 0x15035CA8: nop

    // 0x15035CAC: b           L_15035CB4
    // 0x15035CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15035CB4;
    // 0x15035CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15035CB4:
    // 0x15035CB4: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x15035CB8: lwc1        $f8, 0x14($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14);
    // 0x15035CBC: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15035CC0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x15035CC4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15035CC8: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x15035CCC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x15035CD0: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x15035CD4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x15035CD8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15035CDC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x15035CE0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x15035CE4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x15035CE8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x15035CEC: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15035CF0: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15035CF4: lwc1        $f16, 0x1C($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x15035CF8: lwc1        $f10, 0x18($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X18);
    // 0x15035CFC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x15035D00: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15035D04: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x15035D08: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x15035D0C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x15035D10: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x15035D14: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x15035D18: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x15035D1C: jal         0x15034F30
    // 0x15035D20: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_15034F30(rdram, ctx);
        goto after_9;
    // 0x15035D20: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x15035D24: lbu         $t3, 0x4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X4);
    // 0x15035D28: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x15035D2C: multu       $t3, $s6
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15035D30: mflo        $t4
    ctx->r12 = lo;
    // 0x15035D34: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x15035D38: sb          $t5, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r13;
L_15035D3C:
    // 0x15035D3C: bnel        $s0, $zero, L_15035B68
    if (ctx->r16 != 0) {
        // 0x15035D40: lbu         $t6, 0x0($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X0);
            goto L_15035B68;
    }
    goto skip_6;
    // 0x15035D40: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    skip_6:
L_15035D44:
    // 0x15035D44: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_15035D48:
    // 0x15035D48: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x15035D4C: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x15035D50: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x15035D54: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x15035D58: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x15035D5C: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x15035D60: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x15035D64: jr          $ra
    // 0x15035D68: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x15035D68: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_151CE6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CE6D0: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x151CE6D4: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x151CE6D8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151CE6DC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x151CE6E0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x151CE6E4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x151CE6E8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x151CE6EC: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x151CE6F0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x151CE6F4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x151CE6F8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x151CE6FC: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x151CE700: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x151CE704: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x151CE708: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x151CE70C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x151CE710: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x151CE714: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x151CE718: jal         0x150ADA68
    // 0x151CE71C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151CE71C: nop

    after_0:
    // 0x151CE720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CE724: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151CE728: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE72C: lwc1        $f4, -0x5010($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5010);
    // 0x151CE730: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE734: lwc1        $f6, -0x500C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X500C);
    // 0x151CE738: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE73C: lwc1        $f16, -0x5008($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5008);
    // 0x151CE740: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151CE744: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151CE748: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151CE74C: addiu       $s0, $s2, 0x28
    ctx->r16 = ADD32(ctx->r18, 0X28);
    // 0x151CE750: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x151CE754: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151CE758: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151CE75C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151CE760: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151CE764: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x151CE768: nop

    // 0x151CE76C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x151CE770: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151CE774: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x151CE778: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151CE77C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x151CE780: nop

    // 0x151CE784: bc1f        L_151CE9D8
    if (!c1cs) {
        // 0x151CE788: nop
    
            goto L_151CE9D8;
    }
    // 0x151CE788: nop

    // 0x151CE78C: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
    // 0x151CE790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151CE794: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151CE798: bltz        $a0, L_151CE7C0
    if (SIGNED(ctx->r4) < 0) {
        // 0x151CE79C: addiu       $t3, $zero, 0x6A
        ctx->r11 = ADD32(0, 0X6A);
            goto L_151CE7C0;
    }
    // 0x151CE79C: addiu       $t3, $zero, 0x6A
    ctx->r11 = ADD32(0, 0X6A);
L_151CE7A0:
    // 0x151CE7A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CE7A4: sllv        $t7, $t6, $v0
    ctx->r15 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x151CE7A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151CE7AC: or          $v1, $v1, $t7
    ctx->r3 = ctx->r3 | ctx->r15;
    // 0x151CE7B0: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151CE7B4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x151CE7B8: beq         $at, $zero, L_151CE7A0
    if (ctx->r1 == 0) {
        // 0x151CE7BC: sra         $v1, $t8, 16
        ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
            goto L_151CE7A0;
    }
    // 0x151CE7BC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_151CE7C0:
    // 0x151CE7C0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x151CE7C4: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x151CE7C8: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x151CE7CC: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x151CE7D0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151CE7D4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CE7D8: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x151CE7DC: bne         $t2, $zero, L_151CE808
    if (ctx->r10 != 0) {
        // 0x151CE7E0: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_151CE808;
    }
    // 0x151CE7E0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CE7E4: sub.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f20.fl;
L_151CE7E8:
    // 0x151CE7E8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x151CE7EC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151CE7F0: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x151CE7F4: nop

    // 0x151CE7F8: bc1tl       L_151CE7E8
    if (c1cs) {
        // 0x151CE7FC: sub.s       $f6, $f2, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_151CE7E8;
    }
    goto skip_0;
    // 0x151CE7FC: sub.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f20.fl;
    skip_0:
    // 0x151CE800: b           L_151CE9DC
    // 0x151CE804: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
        goto L_151CE9DC;
    // 0x151CE804: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_151CE808:
    // 0x151CE808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151CE80C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151CE810: lui         $at, 0x42F2
    ctx->r1 = S32(0X42F2 << 16);
    // 0x151CE814: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151CE818: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE81C: lui         $t0, 0x1CC
    ctx->r8 = S32(0X1CC << 16);
    // 0x151CE820: lwc1        $f28, -0x5004($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X5004);
    // 0x151CE824: ori         $t0, $t0, 0x61
    ctx->r8 = ctx->r8 | 0X61;
    // 0x151CE828: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CE82C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x151CE830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE834: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x151CE838: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x151CE83C: sh          $t4, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r12;
    // 0x151CE840: sh          $t5, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r13;
    // 0x151CE844: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151CE848: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x151CE84C: sb          $t6, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r14;
    // 0x151CE850: sb          $t7, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r15;
    // 0x151CE854: sb          $t8, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r24;
    // 0x151CE858: sb          $t9, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r25;
    // 0x151CE85C: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x151CE860: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x151CE864: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x151CE868: swc1        $f20, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f20.u32l;
    // 0x151CE86C: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
    // 0x151CE870: sb          $t1, 0xE9($sp)
    MEM_B(0XE9, ctx->r29) = ctx->r9;
    // 0x151CE874: sb          $zero, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = 0;
    // 0x151CE878: sb          $t2, 0xEB($sp)
    MEM_B(0XEB, ctx->r29) = ctx->r10;
    // 0x151CE87C: lwc1        $f26, -0x5000($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X5000);
    // 0x151CE880: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x151CE884: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151CE888: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151CE88C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CE890: lwc1        $f22, -0x4FFC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4FFC);
    // 0x151CE894: addiu       $s3, $s0, 0x10
    ctx->r19 = ADD32(ctx->r16, 0X10);
    // 0x151CE898: addiu       $fp, $sp, 0xA4
    ctx->r30 = ADD32(ctx->r29, 0XA4);
    // 0x151CE89C: addiu       $s7, $zero, 0x65
    ctx->r23 = ADD32(0, 0X65);
    // 0x151CE8A0: addiu       $s6, $sp, 0xC4
    ctx->r22 = ADD32(ctx->r29, 0XC4);
    // 0x151CE8A4: addiu       $s5, $sp, 0xA0
    ctx->r21 = ADD32(ctx->r29, 0XA0);
    // 0x151CE8A8: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
    // 0x151CE8AC: addiu       $s1, $sp, 0xC0
    ctx->r17 = ADD32(ctx->r29, 0XC0);
    // 0x151CE8B0: sw          $t3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r11;
L_151CE8B4:
    // 0x151CE8B4: jal         0x150ADA68
    // 0x151CE8B8: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151CE8B8: nop

    after_1:
    // 0x151CE8BC: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x151CE8C0: add.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x151CE8C4: mul.s       $f16, $f8, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151CE8C8: jal         0x150ADA68
    // 0x151CE8CC: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151CE8CC: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151CE8D0: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151CE8D4: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x151CE8D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CE8DC: nop

    // 0x151CE8E0: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151CE8E4: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151CE8E8: jal         0x150ADA68
    // 0x151CE8EC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151CE8EC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x151CE8F0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151CE8F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CE8F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151CE8FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CE900: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151CE904: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151CE908: jal         0x150ADA68
    // 0x151CE90C: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151CE90C: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x151CE910: mul.s       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151CE914: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151CE918: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x151CE91C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x151CE920: add.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x151CE924: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x151CE928: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x151CE92C: jal         0x151432BC
    // 0x151CE930: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    func_151432BC(rdram, ctx);
        goto after_5;
    // 0x151CE930: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_5:
    // 0x151CE934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CE938: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x151CE93C: jal         0x1504530C
    // 0x151CE940: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1504530C(rdram, ctx);
        goto after_6;
    // 0x151CE940: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_6:
    // 0x151CE944: beql        $v0, $zero, L_151CE9BC
    if (ctx->r2 == 0) {
        // 0x151CE948: lwc1        $f16, 0x8($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
            goto L_151CE9BC;
    }
    goto skip_1;
    // 0x151CE948: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x151CE94C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151CE950: jal         0x150ADA20
    // 0x151CE954: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151CE954: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x151CE958: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x151CE95C: mfhi        $t4
    ctx->r12 = hi;
    // 0x151CE960: addiu       $t5, $t4, 0x9B
    ctx->r13 = ADD32(ctx->r12, 0X9B);
    // 0x151CE964: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x151CE968: sb          $t5, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = ctx->r13;
    // 0x151CE96C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151CE970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151CE974: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CE978: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151CE97C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151CE980: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151CE984: lbu         $t7, 0xC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XC);
    // 0x151CE988: bne         $s7, $zero, L_151CE994
    if (ctx->r23 != 0) {
        // 0x151CE98C: nop
    
            goto L_151CE994;
    }
    // 0x151CE98C: nop

    // 0x151CE990: break       7
    do_break(354216336);
L_151CE994:
    // 0x151CE994: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151CE998: lbu         $t8, 0x1($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X1);
    // 0x151CE99C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151CE9A0: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x151CE9A4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x151CE9A8: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151CE9AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CE9B0: jal         0x1513D2F0
    // 0x151CE9B4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_1513D2F0(rdram, ctx);
        goto after_8;
    // 0x151CE9B4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_8:
    // 0x151CE9B8: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
L_151CE9BC:
    // 0x151CE9BC: sub.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x151CE9C0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x151CE9C4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151CE9C8: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x151CE9CC: nop

    // 0x151CE9D0: bc1t        L_151CE8B4
    if (c1cs) {
        // 0x151CE9D4: nop
    
            goto L_151CE8B4;
    }
    // 0x151CE9D4: nop

L_151CE9D8:
    // 0x151CE9D8: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_151CE9DC:
    // 0x151CE9DC: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x151CE9E0: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x151CE9E4: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x151CE9E8: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x151CE9EC: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x151CE9F0: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x151CE9F4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x151CE9F8: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x151CE9FC: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x151CEA00: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x151CEA04: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x151CEA08: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x151CEA0C: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x151CEA10: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x151CEA14: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x151CEA18: jr          $ra
    // 0x151CEA1C: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x151CEA1C: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_151E0424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E0424: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151E0428: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151E042C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x151E0430: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151E0434: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151E0438: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151E043C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E0440: lw          $t0, -0x22C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X22C);
    // 0x151E0444: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E0448: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E044C: lb          $t6, 0x2C($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X2C);
    // 0x151E0450: lbu         $v1, 0xA94($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA94);
    // 0x151E0454: addiu       $t1, $t1, 0xA96
    ctx->r9 = ADD32(ctx->r9, 0XA96);
    // 0x151E0458: beq         $t6, $zero, L_151E09C0
    if (ctx->r14 == 0) {
        // 0x151E045C: lui         $s3, 0x8009
        ctx->r19 = S32(0X8009 << 16);
            goto L_151E09C0;
    }
    // 0x151E045C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x151E0460: lb          $t7, 0x0($t1)
    ctx->r15 = MEM_B(ctx->r9, 0X0);
    // 0x151E0464: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x151E0468: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x151E046C: beq         $s1, $t7, L_151E0518
    if (ctx->r17 == ctx->r15) {
        // 0x151E0470: nop
    
            goto L_151E0518;
    }
    // 0x151E0470: nop

    // 0x151E0474: lhu         $t8, 0x20($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X20);
    // 0x151E0478: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E047C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151E0480: andi        $t9, $t8, 0xFFDF
    ctx->r25 = ctx->r24 & 0XFFDF;
    // 0x151E0484: sh          $t9, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r25;
    // 0x151E0488: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x151E048C: addiu       $v0, $v0, 0xA95
    ctx->r2 = ADD32(ctx->r2, 0XA95);
    // 0x151E0490: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x151E0494: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x151E0498: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E049C: subu        $s2, $t2, $t4
    ctx->r18 = SUB32(ctx->r10, ctx->r12);
    // 0x151E04A0: bgtz        $s2, L_151E04F4
    if (SIGNED(ctx->r18) > 0) {
        // 0x151E04A4: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_151E04F4;
    }
    // 0x151E04A4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E04A8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E04AC: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E04B0: lb          $t5, 0x0($t1)
    ctx->r13 = MEM_B(ctx->r9, 0X0);
    // 0x151E04B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151E04B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E04BC: sb          $t5, 0x3F($t6)
    MEM_B(0X3F, ctx->r14) = ctx->r13;
    // 0x151E04C0: lb          $t7, 0x0($t1)
    ctx->r15 = MEM_B(ctx->r9, 0X0);
    // 0x151E04C4: bne         $t7, $at, L_151E04E0
    if (ctx->r15 != ctx->r1) {
        // 0x151E04C8: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_151E04E0;
    }
    // 0x151E04C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E04CC: sb          $zero, -0x220($at)
    MEM_B(-0X220, ctx->r1) = 0;
    // 0x151E04D0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E04D4: sb          $t8, -0x224($at)
    MEM_B(-0X224, ctx->r1) = ctx->r24;
    // 0x151E04D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E04DC: sb          $zero, -0x1CC($at)
    MEM_B(-0X1CC, ctx->r1) = 0;
L_151E04E0:
    // 0x151E04E0: jal         0x151E22BC
    // 0x151E04E4: nop

    func_151E22BC(rdram, ctx);
        goto after_0;
    // 0x151E04E4: nop

    after_0:
    // 0x151E04E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E04EC: b           L_151E09C0
    // 0x151E04F0: sb          $s1, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r17;
        goto L_151E09C0;
    // 0x151E04F0: sb          $s1, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r17;
L_151E04F4:
    // 0x151E04F4: lb          $t9, 0x0($t1)
    ctx->r25 = MEM_B(ctx->r9, 0X0);
    // 0x151E04F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151E04FC: sb          $s2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r18;
    // 0x151E0500: beq         $t9, $at, L_151E050C
    if (ctx->r25 == ctx->r1) {
        // 0x151E0504: andi        $v1, $s2, 0xFF
        ctx->r3 = ctx->r18 & 0XFF;
            goto L_151E050C;
    }
    // 0x151E0504: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x151E0508: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_151E050C:
    // 0x151E050C: lw          $t0, -0x22C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X22C);
    // 0x151E0510: b           L_151E0568
    // 0x151E0514: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
        goto L_151E0568;
    // 0x151E0514: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
L_151E0518:
    // 0x151E0518: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E051C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151E0520: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x151E0524: addiu       $v0, $v0, 0xA95
    ctx->r2 = ADD32(ctx->r2, 0XA95);
    // 0x151E0528: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x151E052C: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x151E0530: addu        $s2, $t3, $t4
    ctx->r18 = ADD32(ctx->r11, ctx->r12);
    // 0x151E0534: slti        $at, $s2, 0x100
    ctx->r1 = SIGNED(ctx->r18) < 0X100 ? 1 : 0;
    // 0x151E0538: bne         $at, $zero, L_151E0544
    if (ctx->r1 != 0) {
        // 0x151E053C: nop
    
            goto L_151E0544;
    }
    // 0x151E053C: nop

    // 0x151E0540: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_151E0544:
    // 0x151E0544: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E0548: sb          $s2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r18;
    // 0x151E054C: mflo        $v1
    ctx->r3 = lo;
    // 0x151E0550: sra         $t5, $v1, 8
    ctx->r13 = S32(SIGNED(ctx->r3) >> 8);
    // 0x151E0554: slti        $at, $t5, 0xFE
    ctx->r1 = SIGNED(ctx->r13) < 0XFE ? 1 : 0;
    // 0x151E0558: bne         $at, $zero, L_151E0568
    if (ctx->r1 != 0) {
        // 0x151E055C: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_151E0568;
    }
    // 0x151E055C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151E0560: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151E0564: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
L_151E0568:
    // 0x151E0568: lb          $t6, 0x2C($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X2C);
    // 0x151E056C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E0570: sb          $zero, -0x260($at)
    MEM_B(-0X260, ctx->r1) = 0;
    // 0x151E0574: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E0578: sb          $zero, -0x23C($at)
    MEM_B(-0X23C, ctx->r1) = 0;
    // 0x151E057C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0580: sb          $zero, 0xB8C($at)
    MEM_B(0XB8C, ctx->r1) = 0;
    // 0x151E0584: lhu         $t7, 0x20($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X20);
    // 0x151E0588: addu        $s3, $s3, $t6
    ctx->r19 = ADD32(ctx->r19, ctx->r14);
    // 0x151E058C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x151E0590: andi        $t8, $t7, 0xC
    ctx->r24 = ctx->r15 & 0XC;
    // 0x151E0594: beq         $t8, $zero, L_151E05D0
    if (ctx->r24 == 0) {
        // 0x151E0598: lb          $s3, -0x165($s3)
        ctx->r19 = MEM_B(ctx->r19, -0X165);
            goto L_151E05D0;
    }
    // 0x151E0598: lb          $s3, -0x165($s3)
    ctx->r19 = MEM_B(ctx->r19, -0X165);
    // 0x151E059C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E05A0: addiu       $v0, $v0, -0x1D4
    ctx->r2 = ADD32(ctx->r2, -0X1D4);
    // 0x151E05A4: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x151E05A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E05AC: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    // 0x151E05B0: subu        $t3, $t2, $t9
    ctx->r11 = SUB32(ctx->r10, ctx->r25);
    // 0x151E05B4: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x151E05B8: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E05BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E05C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E05C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151E05C8: jal         0x10010F30
    // 0x151E05CC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x151E05CC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_1:
L_151E05D0:
    // 0x151E05D0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E05D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E05D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E05DC: jal         0x1504332C
    // 0x151E05E0: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_2;
    // 0x151E05E0: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_2:
    // 0x151E05E4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E05E8: addiu       $t4, $zero, 0x1A
    ctx->r12 = ADD32(0, 0X1A);
    // 0x151E05EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151E05F0: addiu       $a3, $a3, -0x47BC
    ctx->r7 = ADD32(ctx->r7, -0X47BC);
    // 0x151E05F4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E05F8: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x151E05FC: jal         0x15042D94
    // 0x151E0600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x151E0600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x151E0604: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E0608: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E060C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E0610: jal         0x1504332C
    // 0x151E0614: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    func_1504332C(rdram, ctx);
        goto after_4;
    // 0x151E0614: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    after_4:
    // 0x151E0618: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E061C: lb          $t5, -0x1D4($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1D4);
    // 0x151E0620: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E0624: addiu       $a3, $a3, -0x47B8
    ctx->r7 = ADD32(ctx->r7, -0X47B8);
    // 0x151E0628: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x151E062C: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x151E0630: addiu       $t7, $t6, 0x1B
    ctx->r15 = ADD32(ctx->r14, 0X1B);
    // 0x151E0634: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151E0638: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x151E063C: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x151E0640: jal         0x15042D94
    // 0x151E0644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_5;
    // 0x151E0644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x151E0648: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x151E064C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E0650: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E0654: bne         $t8, $at, L_151E0724
    if (ctx->r24 != ctx->r1) {
        // 0x151E0658: nop
    
            goto L_151E0724;
    }
    // 0x151E0658: nop

    // 0x151E065C: lb          $t2, -0x1D4($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1D4);
    // 0x151E0660: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x151E0664: bne         $t2, $zero, L_151E0724
    if (ctx->r10 != 0) {
        // 0x151E0668: nop
    
            goto L_151E0724;
    }
    // 0x151E0668: nop

    // 0x151E066C: bne         $s3, $s1, L_151E0698
    if (ctx->r19 != ctx->r17) {
        // 0x151E0670: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_151E0698;
    }
    // 0x151E0670: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151E0674: bne         $s3, $s1, L_151E0724
    if (ctx->r19 != ctx->r17) {
        // 0x151E0678: lui         $s0, 0x8009
        ctx->r16 = S32(0X8009 << 16);
            goto L_151E0724;
    }
    // 0x151E0678: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E067C: addiu       $s0, $s0, -0x218
    ctx->r16 = ADD32(ctx->r16, -0X218);
    // 0x151E0680: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151E0684: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151E0688: nop

    // 0x151E068C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x151E0690: nop

    // 0x151E0694: bc1f        L_151E0724
    if (!c1cs) {
        // 0x151E0698: addiu       $t1, $t1, -0x22C
        ctx->r9 = ADD32(ctx->r9, -0X22C);
            goto L_151E0724;
    }
L_151E0698:
    // 0x151E0698: addiu       $t1, $t1, -0x22C
    ctx->r9 = ADD32(ctx->r9, -0X22C);
    // 0x151E069C: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E06A0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E06A4: addiu       $s0, $s0, -0x218
    ctx->r16 = ADD32(ctx->r16, -0X218);
    // 0x151E06A8: lhu         $v0, 0x20($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X20);
    // 0x151E06AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151E06B0: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151E06B4: beq         $t9, $zero, L_151E06F0
    if (ctx->r25 == 0) {
        // 0x151E06B8: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_151E06F0;
    }
    // 0x151E06B8: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x151E06BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151E06C0: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    // 0x151E06C4: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E06C8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x151E06CC: lb          $t3, 0x41($t0)
    ctx->r11 = MEM_B(ctx->r8, 0X41);
    // 0x151E06D0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E06D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E06D8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x151E06DC: sb          $t4, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r12;
    // 0x151E06E0: jal         0x10010F30
    // 0x151E06E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_6;
    // 0x151E06E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x151E06E8: b           L_151E0724
    // 0x151E06EC: nop

        goto L_151E0724;
    // 0x151E06EC: nop

L_151E06F0:
    // 0x151E06F0: beq         $t5, $zero, L_151E0724
    if (ctx->r13 == 0) {
        // 0x151E06F4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_151E0724;
    }
    // 0x151E06F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151E06F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151E06FC: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    // 0x151E0700: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E0704: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x151E0708: lb          $t6, 0x41($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X41);
    // 0x151E070C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E0710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E0714: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151E0718: sb          $t7, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r15;
    // 0x151E071C: jal         0x10010F30
    // 0x151E0720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_7;
    // 0x151E0720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_151E0724:
    // 0x151E0724: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151E0728: addiu       $t1, $t1, -0x22C
    ctx->r9 = ADD32(ctx->r9, -0X22C);
    // 0x151E072C: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E0730: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E0734: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151E0738: lb          $a1, 0x41($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X41);
    // 0x151E073C: addiu       $s0, $s0, -0x218
    ctx->r16 = ADD32(ctx->r16, -0X218);
    // 0x151E0740: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x151E0744: bgez        $a1, L_151E0758
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151E0748: addu        $t8, $a1, $s3
        ctx->r24 = ADD32(ctx->r5, ctx->r19);
            goto L_151E0758;
    }
    // 0x151E0748: addu        $t8, $a1, $s3
    ctx->r24 = ADD32(ctx->r5, ctx->r19);
    // 0x151E074C: sb          $t8, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r24;
    // 0x151E0750: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E0754: lb          $a1, 0x41($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X41);
L_151E0758:
    // 0x151E0758: slt         $at, $a1, $s3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x151E075C: bne         $at, $zero, L_151E0770
    if (ctx->r1 != 0) {
        // 0x151E0760: subu        $t2, $a1, $s3
        ctx->r10 = SUB32(ctx->r5, ctx->r19);
            goto L_151E0770;
    }
    // 0x151E0760: subu        $t2, $a1, $s3
    ctx->r10 = SUB32(ctx->r5, ctx->r19);
    // 0x151E0764: sb          $t2, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r10;
    // 0x151E0768: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E076C: lb          $a1, 0x41($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X41);
L_151E0770:
    // 0x151E0770: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x151E0774: lb          $a2, 0x2C($t0)
    ctx->r6 = MEM_B(ctx->r8, 0X2C);
    // 0x151E0778: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E077C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E0780: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151E0784: blez        $a2, L_151E07A4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x151E0788: addiu       $v0, $t9, -0x164
        ctx->r2 = ADD32(ctx->r25, -0X164);
            goto L_151E07A4;
    }
    // 0x151E0788: addiu       $v0, $t9, -0x164
    ctx->r2 = ADD32(ctx->r25, -0X164);
    // 0x151E078C: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
L_151E0790:
    // 0x151E0790: lb          $t3, 0x0($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X0);
    // 0x151E0794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E0798: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x151E079C: bne         $at, $zero, L_151E0790
    if (ctx->r1 != 0) {
        // 0x151E07A0: addu        $v1, $v1, $t3
        ctx->r3 = ADD32(ctx->r3, ctx->r11);
            goto L_151E0790;
    }
    // 0x151E07A0: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
L_151E07A4:
    // 0x151E07A4: addu        $t4, $a1, $v1
    ctx->r12 = ADD32(ctx->r5, ctx->r3);
    // 0x151E07A8: beq         $s3, $s1, L_151E0844
    if (ctx->r19 == ctx->r17) {
        // 0x151E07AC: sb          $t4, 0x42($t0)
        MEM_B(0X42, ctx->r8) = ctx->r12;
            goto L_151E0844;
    }
    // 0x151E07AC: sb          $t4, 0x42($t0)
    MEM_B(0X42, ctx->r8) = ctx->r12;
    // 0x151E07B0: sll         $t5, $s3, 3
    ctx->r13 = S32(ctx->r19 << 3);
    // 0x151E07B4: subu        $t5, $t5, $s3
    ctx->r13 = SUB32(ctx->r13, ctx->r19);
    // 0x151E07B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151E07BC: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x151E07C0: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x151E07C4: subu        $s0, $t7, $t6
    ctx->r16 = SUB32(ctx->r15, ctx->r14);
    // 0x151E07C8: blez        $s3, L_151E08F8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x151E07CC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_151E08F8;
    }
    // 0x151E07CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151E07D0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151E07D4: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x151E07D8: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151E07DC: addiu       $t2, $t2, -0x4974
    ctx->r10 = ADD32(ctx->r10, -0X4974);
    // 0x151E07E0: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151E07E4: addu        $s1, $t8, $t2
    ctx->r17 = ADD32(ctx->r24, ctx->r10);
L_151E07E8:
    // 0x151E07E8: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x151E07EC: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151E07F0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151E07F4: jal         0x150432FC
    // 0x151E07F8: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    func_150432FC(rdram, ctx);
        goto after_8;
    // 0x151E07F8: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    after_8:
    // 0x151E07FC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x151E0800: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x151E0804: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E0808: bne         $s2, $t3, L_151E0820
    if (ctx->r18 != ctx->r11) {
        // 0x151E080C: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_151E0820;
    }
    // 0x151E080C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151E0810: lb          $t4, -0x1D4($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X1D4);
    // 0x151E0814: bne         $t4, $zero, L_151E0820
    if (ctx->r12 != 0) {
        // 0x151E0818: nop
    
            goto L_151E0820;
    }
    // 0x151E0818: nop

    // 0x151E081C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_151E0820:
    // 0x151E0820: jal         0x15042E3C
    // 0x151E0824: addiu       $a0, $a0, -0x47B4
    ctx->r4 = ADD32(ctx->r4, -0X47B4);
    func_15042E3C(rdram, ctx);
        goto after_9;
    // 0x151E0824: addiu       $a0, $a0, -0x47B4
    ctx->r4 = ADD32(ctx->r4, -0X47B4);
    after_9:
    // 0x151E0828: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151E082C: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x151E0830: bne         $s2, $s3, L_151E07E8
    if (ctx->r18 != ctx->r19) {
        // 0x151E0834: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_151E07E8;
    }
    // 0x151E0834: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x151E0838: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151E083C: b           L_151E08F8
    // 0x151E0840: addiu       $t1, $t1, -0x22C
    ctx->r9 = ADD32(ctx->r9, -0X22C);
        goto L_151E08F8;
    // 0x151E0840: addiu       $t1, $t1, -0x22C
    ctx->r9 = ADD32(ctx->r9, -0X22C);
L_151E0844:
    // 0x151E0844: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151E0848: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x151E084C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151E0850: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E0854: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x151E0858: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151E085C: lwc1        $f18, -0x4670($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4670);
    // 0x151E0860: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151E0864: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E0868: mul.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151E086C: bc1fl       L_151E089C
    if (!c1cs) {
        // 0x151E0870: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_151E089C;
    }
    goto skip_0;
    // 0x151E0870: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_0:
    // 0x151E0874: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x151E0878: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x151E087C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151E0880: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x151E0884: nop

    // 0x151E0888: bc1f        L_151E08C8
    if (!c1cs) {
        // 0x151E088C: nop
    
            goto L_151E08C8;
    }
    // 0x151E088C: nop

    // 0x151E0890: b           L_151E08C8
    // 0x151E0894: swc1        $f12, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f12.u32l;
        goto L_151E08C8;
    // 0x151E0894: swc1        $f12, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f12.u32l;
    // 0x151E0898: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_151E089C:
    // 0x151E089C: nop

    // 0x151E08A0: bc1f        L_151E08C8
    if (!c1cs) {
        // 0x151E08A4: nop
    
            goto L_151E08C8;
    }
    // 0x151E08A4: nop

    // 0x151E08A8: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x151E08AC: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x151E08B0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151E08B4: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x151E08B8: nop

    // 0x151E08BC: bc1f        L_151E08C8
    if (!c1cs) {
        // 0x151E08C0: nop
    
            goto L_151E08C8;
    }
    // 0x151E08C0: nop

    // 0x151E08C4: swc1        $f12, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f12.u32l;
L_151E08C8:
    // 0x151E08C8: lb          $t7, -0x1D4($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1D4);
    // 0x151E08CC: bnel        $t7, $zero, L_151E08FC
    if (ctx->r15 != 0) {
        // 0x151E08D0: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_151E08FC;
    }
    goto skip_1;
    // 0x151E08D0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x151E08D4: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151E08D8: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x151E08DC: nop

    // 0x151E08E0: bc1tl       L_151E08FC
    if (c1cs) {
        // 0x151E08E4: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_151E08FC;
    }
    goto skip_2;
    // 0x151E08E4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x151E08E8: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E08EC: lhu         $t6, 0x20($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X20);
    // 0x151E08F0: andi        $t8, $t6, 0xFFEF
    ctx->r24 = ctx->r14 & 0XFFEF;
    // 0x151E08F4: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
L_151E08F8:
    // 0x151E08F8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_151E08FC:
    // 0x151E08FC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E0900: bnel        $t2, $at, L_151E09C4
    if (ctx->r10 != ctx->r1) {
        // 0x151E0904: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151E09C4;
    }
    goto skip_3;
    // 0x151E0904: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_3:
    // 0x151E0908: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E090C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E0910: lhu         $v0, 0x20($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X20);
    // 0x151E0914: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x151E0918: beq         $t9, $zero, L_151E09C0
    if (ctx->r25 == 0) {
        // 0x151E091C: andi        $t3, $v0, 0xFFDF
        ctx->r11 = ctx->r2 & 0XFFDF;
            goto L_151E09C0;
    }
    // 0x151E091C: andi        $t3, $v0, 0xFFDF
    ctx->r11 = ctx->r2 & 0XFFDF;
    // 0x151E0920: sh          $t3, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r11;
    // 0x151E0924: lb          $t4, -0x1D4($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X1D4);
    // 0x151E0928: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x151E092C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151E0930: bne         $t4, $zero, L_151E09AC
    if (ctx->r12 != 0) {
        // 0x151E0934: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_151E09AC;
    }
    // 0x151E0934: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0938: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E093C: sb          $t5, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r13;
    // 0x151E0940: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E0944: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0948: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x151E094C: lb          $t7, 0x41($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X41);
    // 0x151E0950: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151E0954: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E0958: sb          $t7, 0xBE0($at)
    MEM_B(0XBE0, ctx->r1) = ctx->r15;
    // 0x151E095C: lb          $t6, 0x42($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X42);
    // 0x151E0960: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0964: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151E0968: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x151E096C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x151E0970: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151E0974: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x151E0978: lb          $v0, -0x496F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X496F);
    // 0x151E097C: bgez        $v0, L_151E099C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151E0980: subu        $t9, $t2, $v0
        ctx->r25 = SUB32(ctx->r10, ctx->r2);
            goto L_151E099C;
    }
    // 0x151E0980: subu        $t9, $t2, $v0
    ctx->r25 = SUB32(ctx->r10, ctx->r2);
    // 0x151E0984: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x151E0988: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x151E098C: lb          $t4, -0x13C($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X13C);
    // 0x151E0990: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0994: b           L_151E09A0
    // 0x151E0998: sb          $t4, 0xB90($at)
    MEM_B(0XB90, ctx->r1) = ctx->r12;
        goto L_151E09A0;
    // 0x151E0998: sb          $t4, 0xB90($at)
    MEM_B(0XB90, ctx->r1) = ctx->r12;
L_151E099C:
    // 0x151E099C: sb          $zero, 0xB90($at)
    MEM_B(0XB90, ctx->r1) = 0;
L_151E09A0:
    // 0x151E09A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E09A4: b           L_151E09C0
    // 0x151E09A8: sb          $t5, -0x1C0($at)
    MEM_B(-0X1C0, ctx->r1) = ctx->r13;
        goto L_151E09C0;
    // 0x151E09A8: sb          $t5, -0x1C0($at)
    MEM_B(-0X1C0, ctx->r1) = ctx->r13;
L_151E09AC:
    // 0x151E09AC: sb          $t7, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r15;
    // 0x151E09B0: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151E09B4: lhu         $t6, 0x20($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X20);
    // 0x151E09B8: andi        $t8, $t6, 0xFFDF
    ctx->r24 = ctx->r14 & 0XFFDF;
    // 0x151E09BC: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
L_151E09C0:
    // 0x151E09C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151E09C4:
    // 0x151E09C4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151E09C8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151E09CC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x151E09D0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x151E09D4: jr          $ra
    // 0x151E09D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x151E09D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_10017944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017944: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10017948: bne         $a1, $zero, L_1001795C
    if (ctx->r5 != 0) {
        // 0x1001794C: nop
    
            goto L_1001795C;
    }
    // 0x1001794C: nop

    // 0x10017950: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10017954: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x10017958: lbu         $a1, 0x28C8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X28C8);
L_1001795C:
    // 0x1001795C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10017960: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017964: sb          $zero, 0x28C4($at)
    MEM_B(0X28C4, ctx->r1) = 0;
    // 0x10017968: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1001796C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017970: sb          $zero, 0x28C6($at)
    MEM_B(0X28C6, ctx->r1) = 0;
    // 0x10017974: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x10017978: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1001797C: beq         $a2, $at, L_100179B0
    if (ctx->r6 == ctx->r1) {
        // 0x10017980: nop
    
            goto L_100179B0;
    }
    // 0x10017980: nop

    // 0x10017984: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10017988: beq         $a2, $at, L_100179D8
    if (ctx->r6 == ctx->r1) {
        // 0x1001798C: nop
    
            goto L_100179D8;
    }
    // 0x1001798C: nop

    // 0x10017990: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x10017994: beq         $a2, $at, L_10017A00
    if (ctx->r6 == ctx->r1) {
        // 0x10017998: nop
    
            goto L_10017A00;
    }
    // 0x10017998: nop

    // 0x1001799C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x100179A0: beq         $a2, $at, L_10017A28
    if (ctx->r6 == ctx->r1) {
        // 0x100179A4: nop
    
            goto L_10017A28;
    }
    // 0x100179A4: nop

    // 0x100179A8: b           L_10017A60
    // 0x100179AC: nop

        goto L_10017A60;
    // 0x100179AC: nop

L_100179B0:
    // 0x100179B0: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x100179B4: lbu         $t6, 0x28C0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X28C0);
    // 0x100179B8: beq         $t6, $zero, L_100179D0
    if (ctx->r14 == 0) {
        // 0x100179BC: nop
    
            goto L_100179D0;
    }
    // 0x100179BC: nop

    // 0x100179C0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100179C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x100179C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x100179CC: sb          $t7, 0x28C6($at)
    MEM_B(0X28C6, ctx->r1) = ctx->r15;
L_100179D0:
    // 0x100179D0: b           L_10017A60
    // 0x100179D4: nop

        goto L_10017A60;
    // 0x100179D4: nop

L_100179D8:
    // 0x100179D8: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x100179DC: lbu         $t8, 0x28C0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X28C0);
    // 0x100179E0: beq         $t8, $zero, L_100179F8
    if (ctx->r24 == 0) {
        // 0x100179E4: nop
    
            goto L_100179F8;
    }
    // 0x100179E4: nop

    // 0x100179E8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100179EC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x100179F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x100179F4: sb          $t9, 0x28C4($at)
    MEM_B(0X28C4, ctx->r1) = ctx->r25;
L_100179F8:
    // 0x100179F8: b           L_10017A60
    // 0x100179FC: nop

        goto L_10017A60;
    // 0x100179FC: nop

L_10017A00:
    // 0x10017A00: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x10017A04: lbu         $t0, 0x28C1($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X28C1);
    // 0x10017A08: bne         $t0, $zero, L_10017A20
    if (ctx->r8 != 0) {
        // 0x10017A0C: nop
    
            goto L_10017A20;
    }
    // 0x10017A0C: nop

    // 0x10017A10: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10017A14: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017A18: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x10017A1C: sb          $t1, 0x28C4($at)
    MEM_B(0X28C4, ctx->r1) = ctx->r9;
L_10017A20:
    // 0x10017A20: b           L_10017A60
    // 0x10017A24: nop

        goto L_10017A60;
    // 0x10017A24: nop

L_10017A28:
    // 0x10017A28: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x10017A2C: lbu         $t2, 0x28C1($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X28C1);
    // 0x10017A30: bne         $t2, $zero, L_10017A58
    if (ctx->r10 != 0) {
        // 0x10017A34: nop
    
            goto L_10017A58;
    }
    // 0x10017A34: nop

    // 0x10017A38: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10017A3C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017A40: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10017A44: sb          $t3, 0x28C4($at)
    MEM_B(0X28C4, ctx->r1) = ctx->r11;
    // 0x10017A48: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10017A4C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017A50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x10017A54: sb          $t4, 0x28C6($at)
    MEM_B(0X28C6, ctx->r1) = ctx->r12;
L_10017A58:
    // 0x10017A58: b           L_10017A60
    // 0x10017A5C: nop

        goto L_10017A60;
    // 0x10017A5C: nop

L_10017A60:
    // 0x10017A60: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10017A64: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x10017A68: sb          $a1, 0x28C8($at)
    MEM_B(0X28C8, ctx->r1) = ctx->r5;
    // 0x10017A6C: b           L_10017A74
    // 0x10017A70: nop

        goto L_10017A74;
    // 0x10017A70: nop

L_10017A74:
    // 0x10017A74: jr          $ra
    // 0x10017A78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x10017A78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150C6D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C6D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C6D48: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x150C6D4C: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C6D50: jal         0x151346EC
    // 0x150C6D54: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    func_151346EC(rdram, ctx);
        goto after_0;
    // 0x150C6D54: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    after_0:
    // 0x150C6D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C6D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C6D60: jr          $ra
    // 0x150C6D64: nop

    return;
    return;
    // 0x150C6D64: nop

;}
RECOMP_FUNC void func_150791F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150791F0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150791F4: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x150791F8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150791FC: lbu         $v1, 0x1890($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1890);
    // 0x15079200: lbu         $t6, 0x2C9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C9);
    // 0x15079204: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15079208: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1507920C: beql        $at, $zero, L_15079220
    if (ctx->r1 == 0) {
        // 0x15079210: sb          $v1, 0x1C9($v0)
        MEM_B(0X1C9, ctx->r2) = ctx->r3;
            goto L_15079220;
    }
    goto skip_0;
    // 0x15079210: sb          $v1, 0x1C9($v0)
    MEM_B(0X1C9, ctx->r2) = ctx->r3;
    skip_0:
    // 0x15079214: jr          $ra
    // 0x15079218: sb          $t7, 0x1C9($v0)
    MEM_B(0X1C9, ctx->r2) = ctx->r15;
    return;
    return;
    // 0x15079218: sb          $t7, 0x1C9($v0)
    MEM_B(0X1C9, ctx->r2) = ctx->r15;
    // 0x1507921C: sb          $v1, 0x1C9($v0)
    MEM_B(0X1C9, ctx->r2) = ctx->r3;
L_15079220:
    // 0x15079220: jr          $ra
    // 0x15079224: nop

    return;
    return;
    // 0x15079224: nop

;}
RECOMP_FUNC void func_150130B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150130B4: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x150130B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150130BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150130C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150130C4: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x150130C8: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x150130CC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150130D0: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x150130D4: srl         $t2, $t8, 24
    ctx->r10 = S32(U32(ctx->r24) >> 24);
    // 0x150130D8: sb          $t2, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r10;
    // 0x150130DC: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x150130E0: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x150130E4: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x150130E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x150130EC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x150130F0: nop

    // 0x150130F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150130F8: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x150130FC: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x15013100: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15013104: nop

    // 0x15013108: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501310C: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x15013110: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x15013114: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x15013118: nop

    // 0x1501311C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15013120: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x15013124: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x15013128: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x1501312C: jal         0x150A8050
    // 0x15013130: sw          $t0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r8;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15013130: sw          $t0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r8;
    after_0:
    // 0x15013134: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15013138: addiu       $t6, $sp, 0x104
    ctx->r14 = ADD32(ctx->r29, 0X104);
    // 0x1501313C: addiu       $t7, $sp, 0x108
    ctx->r15 = ADD32(ctx->r29, 0X108);
    // 0x15013140: addiu       $t8, $sp, 0x10C
    ctx->r24 = ADD32(ctx->r29, 0X10C);
    // 0x15013144: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15013148: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1501314C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15013150: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15013154: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15013158: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x1501315C: jal         0x150A7960
    // 0x15013160: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15013160: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    after_1:
    // 0x15013164: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x15013168: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x1501316C: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x15013170: lwc1        $f16, 0xFC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x15013174: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15013178: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x1501317C: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x15013180: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15013184: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x15013188: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501318C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15013190: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15013194: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013198: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1501319C: lwc1        $f2, 0x65D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X65D4);
    // 0x150131A0: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x150131A4: swc1        $f18, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f18.u32l;
    // 0x150131A8: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x150131AC: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x150131B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150131B4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150131B8: nop

    // 0x150131BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150131C0: swc1        $f16, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f16.u32l;
    // 0x150131C4: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x150131C8: swc1        $f18, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f18.u32l;
    // 0x150131CC: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x150131D0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150131D4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150131D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150131DC: swc1        $f6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f6.u32l;
    // 0x150131E0: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x150131E4: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    // 0x150131E8: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x150131EC: srl         $t4, $t3, 8
    ctx->r12 = S32(U32(ctx->r11) >> 8);
    // 0x150131F0: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x150131F4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150131F8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x150131FC: bgez        $t5, L_15013210
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15013200: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15013210;
    }
    // 0x15013200: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013204: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15013208: nop

    // 0x1501320C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15013210:
    // 0x15013210: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15013214: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15013218: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
    // 0x1501321C: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x15013220: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15013224: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15013228: bgez        $t7, L_1501323C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1501322C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1501323C;
    }
    // 0x1501322C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15013230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15013234: nop

    // 0x15013238: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1501323C:
    // 0x1501323C: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15013240: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x15013244: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013248: lwc1        $f16, 0x65D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X65D8);
    // 0x1501324C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013250: lwc1        $f4, 0x65DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X65DC);
    // 0x15013254: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013258: swc1        $f18, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f18.u32l;
    // 0x1501325C: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x15013260: sh          $t5, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r13;
    // 0x15013264: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x15013268: srl         $t8, $v1, 24
    ctx->r24 = S32(U32(ctx->r3) >> 24);
    // 0x1501326C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x15013270: sll         $v0, $t9, 2
    ctx->r2 = S32(ctx->r25 << 2);
    // 0x15013274: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x15013278: lw          $t3, 0x65A0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X65A0);
    // 0x1501327C: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x15013280: lw          $t2, 0x658C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X658C);
    // 0x15013284: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x15013288: sh          $t4, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r12;
    // 0x1501328C: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x15013290: sb          $t2, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r10;
    // 0x15013294: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x15013298: lwc1        $f6, 0x65E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X65E0);
    // 0x1501329C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150132A0: sb          $t7, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r15;
    // 0x150132A4: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x150132A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150132AC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x150132B0: srl         $t2, $t8, 8
    ctx->r10 = S32(U32(ctx->r24) >> 8);
    // 0x150132B4: sb          $t2, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r10;
    // 0x150132B8: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x150132BC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150132C0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150132C4: srl         $t5, $t3, 16
    ctx->r13 = S32(U32(ctx->r11) >> 16);
    // 0x150132C8: lbu         $t3, 0xD3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XD3);
    // 0x150132CC: sb          $t5, 0xEE($sp)
    MEM_B(0XEE, ctx->r29) = ctx->r13;
    // 0x150132D0: sb          $t6, 0xEF($sp)
    MEM_B(0XEF, ctx->r29) = ctx->r14;
    // 0x150132D4: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    // 0x150132D8: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x150132DC: swc1        $f0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f0.u32l;
    // 0x150132E0: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x150132E4: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x150132E8: sb          $t7, 0x121($sp)
    MEM_B(0X121, ctx->r29) = ctx->r15;
    // 0x150132EC: sb          $t8, 0x120($sp)
    MEM_B(0X120, ctx->r29) = ctx->r24;
    // 0x150132F0: sb          $zero, 0x122($sp)
    MEM_B(0X122, ctx->r29) = 0;
    // 0x150132F4: sb          $t9, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r25;
    // 0x150132F8: sb          $t2, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r10;
    // 0x150132FC: sb          $zero, 0x188($sp)
    MEM_B(0X188, ctx->r29) = 0;
    // 0x15013300: sb          $zero, 0x189($sp)
    MEM_B(0X189, ctx->r29) = 0;
    // 0x15013304: sb          $zero, 0x18A($sp)
    MEM_B(0X18A, ctx->r29) = 0;
    // 0x15013308: sb          $zero, 0x18B($sp)
    MEM_B(0X18B, ctx->r29) = 0;
    // 0x1501330C: swc1        $f0, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f0.u32l;
    // 0x15013310: swc1        $f16, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f16.u32l;
    // 0x15013314: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
    // 0x15013318: beq         $t3, $zero, L_1501335C
    if (ctx->r11 == 0) {
        // 0x1501331C: swc1        $f6, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->f6.u32l;
            goto L_1501335C;
    }
    // 0x1501331C: swc1        $f6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f6.u32l;
    // 0x15013320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15013324: jal         0x1510F800
    // 0x15013328: sw          $t0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r8;
    func_1510F800(rdram, ctx);
        goto after_2;
    // 0x15013328: sw          $t0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r8;
    after_2:
    // 0x1501332C: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15013330: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
    // 0x15013334: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15013338: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1501333C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x15013340: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15013344: jal         0x1510FD20
    // 0x15013348: nop

    func_1510FD20(rdram, ctx);
        goto after_3;
    // 0x15013348: nop

    after_3:
    // 0x1501334C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15013350: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x15013354: b           L_15013364
    // 0x15013358: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
        goto L_15013364;
    // 0x15013358: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
L_1501335C:
    // 0x1501335C: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x15013360: sb          $zero, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = 0;
L_15013364:
    // 0x15013364: sb          $zero, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = 0;
    // 0x15013368: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x1501336C: lbu         $t9, 0xD3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XD3);
    // 0x15013370: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x15013374: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x15013378: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x1501337C: beq         $t8, $zero, L_1501338C
    if (ctx->r24 == 0) {
        // 0x15013380: addiu       $t7, $t0, -0x1
        ctx->r15 = ADD32(ctx->r8, -0X1);
            goto L_1501338C;
    }
    // 0x15013380: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x15013384: b           L_15013390
    // 0x15013388: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_15013390;
    // 0x15013388: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_1501338C:
    // 0x1501338C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15013390:
    // 0x15013390: beq         $t9, $zero, L_150133A0
    if (ctx->r25 == 0) {
        // 0x15013394: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150133A0;
    }
    // 0x15013394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15013398: b           L_150133A0
    // 0x1501339C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
        goto L_150133A0;
    // 0x1501339C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_150133A0:
    // 0x150133A0: ori         $t2, $v0, 0x2006
    ctx->r10 = ctx->r2 | 0X2006;
    // 0x150133A4: or          $t1, $t2, $v1
    ctx->r9 = ctx->r10 | ctx->r3;
    // 0x150133A8: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x150133AC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x150133B0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x150133B4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150133B8: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x150133BC: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x150133C0: or          $t1, $t5, $at
    ctx->r9 = ctx->r13 | ctx->r1;
    // 0x150133C4: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x150133C8: beq         $at, $zero, L_150136BC
    if (ctx->r1 == 0) {
        // 0x150133CC: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_150136BC;
    }
    // 0x150133CC: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x150133D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150133D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150133D8: addu        $at, $at, $t7
    gpr jr_addend_150133E0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x150133DC: lw          $t7, 0x65E4($at)
    ctx->r15 = ADD32(ctx->r1, 0X65E4);
    // 0x150133E0: jr          $t7
    // 0x150133E4: nop

    switch (jr_addend_150133E0 >> 2) {
        case 0: goto L_15013468; break;
        case 1: goto L_15013468; break;
        case 2: goto L_15013468; break;
        case 3: goto L_15013468; break;
        case 4: goto L_15013510; break;
        case 5: goto L_15013510; break;
        case 6: goto L_15013510; break;
        case 7: goto L_150133E8; break;
        case 8: goto L_150134BC; break;
        case 9: goto L_150134BC; break;
        case 10: goto L_150134BC; break;
        case 11: goto L_150134BC; break;
        case 12: goto L_15013584; break;
        case 13: goto L_15013584; break;
        case 14: goto L_15013584; break;
        case 15: goto L_15013584; break;
        case 16: goto L_15013584; break;
        case 17: goto L_15013584; break;
        case 18: goto L_15013668; break;
        default: switch_error(__func__, 0x150133E0, 0x800965E4);
    }
    // 0x150133E4: nop

L_150133E8:
    // 0x150133E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150133EC: lwc1        $f4, 0x6630($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6630);
    // 0x150133F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150133F4: lwc1        $f6, 0x6634($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6634);
    // 0x150133F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150133FC: lwc1        $f10, 0x6638($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6638);
    // 0x15013400: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x15013404: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15013408: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1501340C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15013410: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x15013414: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x15013418: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1501341C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15013420: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15013424: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x15013428: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x1501342C: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x15013430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15013434: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15013438: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1501343C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x15013440: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15013444: jal         0x151407D0
    // 0x15013448: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    func_151407D0(rdram, ctx);
        goto after_4;
    // 0x15013448: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x1501344C: beq         $v0, $zero, L_150136F4
    if (ctx->r2 == 0) {
        // 0x15013450: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_150136F4;
    }
    // 0x15013450: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15013454: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x15013458: jal         0x10022EC0
    // 0x1501345C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x1501345C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x15013460: b           L_150136F8
    // 0x15013464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x15013464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013468:
    // 0x15013468: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x1501346C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15013470: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15013474: lw          $t5, 0x65B0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X65B0);
    // 0x15013478: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1501347C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15013480: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15013484: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x15013488: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1501348C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15013490: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x15013494: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x15013498: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x1501349C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150134A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150134A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150134A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150134AC: jal         0x151407D0
    // 0x150134B0: sb          $t5, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r13;
    func_151407D0(rdram, ctx);
        goto after_6;
    // 0x150134B0: sb          $t5, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r13;
    after_6:
    // 0x150134B4: b           L_150136F8
    // 0x150134B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x150134B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150134BC:
    // 0x150134BC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x150134C0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150134C4: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x150134C8: lw          $t2, 0x65A0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X65A0);
    // 0x150134CC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150134D0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150134D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150134D8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150134DC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150134E0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150134E4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x150134E8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x150134EC: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x150134F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150134F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150134F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150134FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15013500: jal         0x151407D0
    // 0x15013504: sb          $t2, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r10;
    func_151407D0(rdram, ctx);
        goto after_7;
    // 0x15013504: sb          $t2, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r10;
    after_7:
    // 0x15013508: b           L_150136F8
    // 0x1501350C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x1501350C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013510:
    // 0x15013510: addiu       $v0, $sp, 0x68
    ctx->r2 = ADD32(ctx->r29, 0X68);
    // 0x15013514: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15013518: addiu       $t6, $t6, 0x6580
    ctx->r14 = ADD32(ctx->r14, 0X6580);
    // 0x1501351C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15013520: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x15013524: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x15013528: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1501352C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x15013530: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x15013534: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15013538: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1501353C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x15013540: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15013544: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x15013548: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x1501354C: lw          $t4, -0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, -0X14);
    // 0x15013550: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15013554: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15013558: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1501355C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15013560: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15013564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15013568: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x1501356C: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x15013570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15013574: jal         0x151407D0
    // 0x15013578: sb          $t4, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r12;
    func_151407D0(rdram, ctx);
        goto after_8;
    // 0x15013578: sb          $t4, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r12;
    after_8:
    // 0x1501357C: b           L_150136F8
    // 0x15013580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x15013580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013584:
    // 0x15013584: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x15013588: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1501358C: addiu       $t6, $t6, 0x2E98
    ctx->r14 = ADD32(ctx->r14, 0X2E98);
    // 0x15013590: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15013594: addu        $t4, $v0, $t0
    ctx->r12 = ADD32(ctx->r2, ctx->r8);
    // 0x15013598: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1501359C: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x150135A0: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x150135A4: jal         0x151149AC
    // 0x150135A8: lbu         $a0, -0xD($t4)
    ctx->r4 = MEM_BU(ctx->r12, -0XD);
    func_151149AC(rdram, ctx);
        goto after_9;
    // 0x150135A8: lbu         $a0, -0xD($t4)
    ctx->r4 = MEM_BU(ctx->r12, -0XD);
    after_9:
    // 0x150135AC: bne         $v0, $zero, L_150135BC
    if (ctx->r2 != 0) {
        // 0x150135B0: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_150135BC;
    }
    // 0x150135B0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x150135B4: b           L_150136F8
    // 0x150135B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x150135B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150135BC:
    // 0x150135BC: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x150135C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150135C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150135C8: lwc1        $f0, 0x663C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X663C);
    // 0x150135CC: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x150135D0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x150135D4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150135D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150135DC: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x150135E0: lh          $t8, 0x10($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X10);
    // 0x150135E4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150135E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150135EC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150135F0: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x150135F4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x150135F8: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150135FC: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x15013600: addiu       $a3, $zero, 0x25
    ctx->r7 = ADD32(0, 0X25);
    // 0x15013604: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x15013608: lh          $t7, 0x12($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X12);
    // 0x1501360C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15013610: nop

    // 0x15013614: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15013618: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x1501361C: lh          $t2, 0x14($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X14);
    // 0x15013620: sb          $zero, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = 0;
    // 0x15013624: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x15013628: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1501362C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15013630: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15013634: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1501363C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15013640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15013644: jal         0x151407D0
    // 0x15013648: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    func_151407D0(rdram, ctx);
        goto after_10;
    // 0x15013648: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x1501364C: beq         $v0, $zero, L_150136F4
    if (ctx->r2 == 0) {
        // 0x15013650: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_150136F4;
    }
    // 0x15013650: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15013654: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15013658: jal         0x10022EC0
    // 0x1501365C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x1501365C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_11:
    // 0x15013660: b           L_150136F8
    // 0x15013664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x15013664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013668:
    // 0x15013668: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x1501366C: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x15013670: and         $t8, $t1, $at
    ctx->r24 = ctx->r9 & ctx->r1;
    // 0x15013674: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15013678: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1501367C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15013680: sb          $t4, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r12;
    // 0x15013684: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15013688: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x1501368C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15013690: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x15013694: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x15013698: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x1501369C: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x150136A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150136A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150136A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150136AC: jal         0x151407D0
    // 0x150136B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_151407D0(rdram, ctx);
        goto after_12;
    // 0x150136B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_12:
    // 0x150136B4: b           L_150136F8
    // 0x150136B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150136F8;
    // 0x150136B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150136BC:
    // 0x150136BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150136C0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150136C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150136C8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150136CC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150136D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150136D4: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x150136D8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x150136DC: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x150136E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150136E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150136E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150136EC: jal         0x151407D0
    // 0x150136F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_151407D0(rdram, ctx);
        goto after_13;
    // 0x150136F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_13:
L_150136F4:
    // 0x150136F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150136F8:
    // 0x150136F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150136FC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15013700: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    // 0x15013704: jr          $ra
    // 0x15013708: nop

    return;
    return;
    // 0x15013708: nop

;}
RECOMP_FUNC void n_alSynFreeVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C810: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001C814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C818: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001C81C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001C820: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001C824: beq         $t7, $zero, L_1001C8CC
    if (ctx->r15 == 0) {
        // 0x1001C828: nop
    
            goto L_1001C8CC;
    }
    // 0x1001C828: nop

    // 0x1001C82C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001C830: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x1001C834: lw          $t0, 0x90($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X90);
    // 0x1001C838: beq         $t0, $zero, L_1001C8B8
    if (ctx->r8 == 0) {
        // 0x1001C83C: nop
    
            goto L_1001C8B8;
    }
    // 0x1001C83C: nop

    // 0x1001C840: jal         0x100196E4
    // 0x1001C844: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001C844: nop

    after_0:
    // 0x1001C848: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001C84C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C850: bne         $t1, $zero, L_1001C860
    if (ctx->r9 != 0) {
        // 0x1001C854: nop
    
            goto L_1001C860;
    }
    // 0x1001C854: nop

    // 0x1001C858: b           L_1001C900
    // 0x1001C85C: nop

        goto L_1001C900;
    // 0x1001C85C: nop

L_1001C860:
    // 0x1001C860: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001C864: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x1001C868: lw          $t2, -0x45BC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45BC);
    // 0x1001C86C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x1001C870: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C874: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x1001C878: lw          $t6, 0x90($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X90);
    // 0x1001C87C: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x1001C880: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x1001C884: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C888: sh          $zero, 0x8($t9)
    MEM_H(0X8, ctx->r25) = 0;
    // 0x1001C88C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001C890: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C894: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x1001C898: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
    // 0x1001C89C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001C8A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001C8A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C8A8: jal         0x10020978
    // 0x1001C8AC: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_1;
    // 0x1001C8AC: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_1:
    // 0x1001C8B0: b           L_1001C8C4
    // 0x1001C8B4: nop

        goto L_1001C8C4;
    // 0x1001C8B4: nop

L_1001C8B8:
    // 0x1001C8B8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001C8BC: jal         0x100198B0
    // 0x1001C8C0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    _n_freePVoice(rdram, ctx);
        goto after_2;
    // 0x1001C8C0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_2:
L_1001C8C4:
    // 0x1001C8C4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001C8C8: sw          $zero, 0x8($t3)
    MEM_W(0X8, ctx->r11) = 0;
L_1001C8CC:
    // 0x1001C8CC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001C8D0: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x1001C8D4: beq         $t7, $zero, L_1001C8F8
    if (ctx->r15 == 0) {
        // 0x1001C8D8: nop
    
            goto L_1001C8F8;
    }
    // 0x1001C8D8: nop

    // 0x1001C8DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001C8E0: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001C8E4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001C8E8: lw          $t9, 0x2C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2C);
    // 0x1001C8EC: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x1001C8F0: jalr        $t9
    // 0x1001C8F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x1001C8F4: nop

    after_3:
L_1001C8F8:
    // 0x1001C8F8: b           L_1001C900
    // 0x1001C8FC: nop

        goto L_1001C900;
    // 0x1001C8FC: nop

L_1001C900:
    // 0x1001C900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001C908: jr          $ra
    // 0x1001C90C: nop

    return;
    return;
    // 0x1001C90C: nop

;}
RECOMP_FUNC void func_150408FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150408FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040900: jr          $ra
    // 0x15040904: nop

    return;
    return;
    // 0x15040904: nop

;}
RECOMP_FUNC void func_1510D8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D8C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1510D8C4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510D8C8: lbu         $v1, -0x6130($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6130);
    // 0x1510D8CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1510D8D0: addiu       $a0, $a0, -0x6128
    ctx->r4 = ADD32(ctx->r4, -0X6128);
    // 0x1510D8D4: blez        $v1, L_1510D958
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1510D8D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1510D958;
    }
    // 0x1510D8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1510D8DC: lui         $a3, 0xDB06
    ctx->r7 = S32(0XDB06 << 16);
L_1510D8E0:
    // 0x1510D8E0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1510D8E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1510D8E8: bnel        $a1, $t6, L_1510D950
    if (ctx->r5 != ctx->r14) {
        // 0x1510D8EC: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1510D950;
    }
    goto skip_0;
    // 0x1510D8EC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_0:
    // 0x1510D8F0: lbu         $t7, 0xC($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XC);
    // 0x1510D8F4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x1510D8F8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1510D8FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1510D900: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1510D904: or          $t0, $t9, $a3
    ctx->r8 = ctx->r25 | ctx->r7;
    // 0x1510D908: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x1510D90C: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x1510D910: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x1510D914: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x1510D918: beq         $t2, $zero, L_1510D944
    if (ctx->r10 == 0) {
        // 0x1510D91C: nop
    
            goto L_1510D944;
    }
    // 0x1510D91C: nop

    // 0x1510D920: lbu         $t3, 0xD($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XD);
    // 0x1510D924: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x1510D928: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x1510D92C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1510D930: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1510D934: or          $t6, $t5, $a3
    ctx->r14 = ctx->r13 | ctx->r7;
    // 0x1510D938: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1510D93C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x1510D940: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_1510D944:
    // 0x1510D944: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510D948: lbu         $v1, -0x6130($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6130);
    // 0x1510D94C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_1510D950:
    // 0x1510D950: bne         $at, $zero, L_1510D8E0
    if (ctx->r1 != 0) {
        // 0x1510D954: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_1510D8E0;
    }
    // 0x1510D954: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
L_1510D958:
    // 0x1510D958: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1510D95C: jr          $ra
    // 0x1510D960: nop

    return;
    return;
    // 0x1510D960: nop

;}
RECOMP_FUNC void func_150C44A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C44A4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150C44A8: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x150C44AC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150C44B0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150C44B4: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x150C44B8: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x150C44BC: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x150C44C0: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x150C44C4: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150C44C8: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x150C44CC: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x150C44D0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x150C44D4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x150C44D8: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
    // 0x150C44DC: addiu       $s3, $s4, 0x28
    ctx->r19 = ADD32(ctx->r20, 0X28);
    // 0x150C44E0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150C44E4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150C44E8: beq         $t6, $zero, L_150C4500
    if (ctx->r14 == 0) {
        // 0x150C44EC: nop
    
            goto L_150C4500;
    }
    // 0x150C44EC: nop

    // 0x150C44F0: lbu         $t7, 0x4($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X4);
    // 0x150C44F4: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x150C44F8: beql        $t7, $t8, L_150C450C
    if (ctx->r15 == ctx->r24) {
        // 0x150C44FC: lw          $t0, 0x1D4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X1D4);
            goto L_150C450C;
    }
    goto skip_0;
    // 0x150C44FC: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
    skip_0:
L_150C4500:
    // 0x150C4500: b           L_150C4AA4
    // 0x150C4504: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
        goto L_150C4AA4;
    // 0x150C4504: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
    // 0x150C4508: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
L_150C450C:
    // 0x150C450C: beql        $t0, $zero, L_150C452C
    if (ctx->r8 == 0) {
        // 0x150C4510: lw          $v0, 0xC($s3)
        ctx->r2 = MEM_W(ctx->r19, 0XC);
            goto L_150C452C;
    }
    goto skip_1;
    // 0x150C4510: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    skip_1:
    // 0x150C4514: lbu         $t1, 0x16($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X16);
    // 0x150C4518: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x150C451C: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x150C4520: beq         $t2, $zero, L_150C4540
    if (ctx->r10 == 0) {
        // 0x150C4524: nop
    
            goto L_150C4540;
    }
    // 0x150C4524: nop

    // 0x150C4528: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
L_150C452C:
    // 0x150C452C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150C4530: beql        $v0, $zero, L_150C4AA8
    if (ctx->r2 == 0) {
        // 0x150C4534: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150C4AA8;
    }
    goto skip_2;
    // 0x150C4534: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_2:
    // 0x150C4538: b           L_150C4AA4
    // 0x150C453C: sb          $t3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r11;
        goto L_150C4AA4;
    // 0x150C453C: sb          $t3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r11;
L_150C4540:
    // 0x150C4540: jal         0x1504715C
    // 0x150C4544: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x150C4544: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x150C4548: lw          $t4, 0x18($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X18);
    // 0x150C454C: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x150C4550: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C4554: bne         $t4, $zero, L_150C4570
    if (ctx->r12 != 0) {
        // 0x150C4558: addiu       $a2, $zero, 0x36B0
        ctx->r6 = ADD32(0, 0X36B0);
            goto L_150C4570;
    }
    // 0x150C4558: addiu       $a2, $zero, 0x36B0
    ctx->r6 = ADD32(0, 0X36B0);
    // 0x150C455C: addiu       $t5, $zero, 0x4268
    ctx->r13 = ADD32(0, 0X4268);
    // 0x150C4560: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150C4564: jal         0x10010154
    // 0x150C4568: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    func_10010154(rdram, ctx);
        goto after_1;
    // 0x150C4568: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    after_1:
    // 0x150C456C: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_150C4570:
    // 0x150C4570: lbu         $t6, 0x16($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X16);
    // 0x150C4574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C4578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C457C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150C4580: beql        $t7, $zero, L_150C46BC
    if (ctx->r15 == 0) {
        // 0x150C4584: lw          $v0, 0x2E8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X2E8);
            goto L_150C46BC;
    }
    goto skip_3;
    // 0x150C4584: lw          $v0, 0x2E8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2E8);
    skip_3:
    // 0x150C4588: jal         0x1503195C
    // 0x150C458C: lh          $a1, 0x14($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X14);
    func_1503195C(rdram, ctx);
        goto after_2;
    // 0x150C458C: lh          $a1, 0x14($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X14);
    after_2:
    // 0x150C4590: beq         $v0, $zero, L_150C4AA4
    if (ctx->r2 == 0) {
        // 0x150C4594: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_150C4AA4;
    }
    // 0x150C4594: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150C4598: lw          $t8, 0x2EC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2EC);
    // 0x150C459C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150C45A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150C45A4: beql        $t8, $zero, L_150C45C4
    if (ctx->r24 == 0) {
        // 0x150C45A8: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_150C45C4;
    }
    goto skip_4;
    // 0x150C45A8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_4:
    // 0x150C45AC: lwc1        $f4, 0x2DC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2DC);
    // 0x150C45B0: lwc1        $f6, 0x2D8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2D8);
    // 0x150C45B4: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C45B8: b           L_150C45C8
    // 0x150C45BC: nop

        goto L_150C45C8;
    // 0x150C45BC: nop

    // 0x150C45C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_150C45C4:
    // 0x150C45C4: nop

L_150C45C8:
    // 0x150C45C8: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x150C45CC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C45D0: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x150C45D4: nop

    // 0x150C45D8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x150C45DC: bnel        $at, $zero, L_150C45EC
    if (ctx->r1 != 0) {
        // 0x150C45E0: mtc1        $v1, $f16
        ctx->f16.u32l = ctx->r3;
            goto L_150C45EC;
    }
    goto skip_5;
    // 0x150C45E0: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    skip_5:
    // 0x150C45E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x150C45E8: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
L_150C45EC:
    // 0x150C45EC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C45F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C45F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C45F8: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x150C45FC: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x150C4600: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150C4604: addiu       $t1, $t1, 0x378
    ctx->r9 = ADD32(ctx->r9, 0X378);
    // 0x150C4608: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150C460C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C4610: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x150C4614: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C4618: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150C461C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150C4620: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x150C4624: addiu       $t2, $sp, 0xF0
    ctx->r10 = ADD32(ctx->r29, 0XF0);
    // 0x150C4628: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x150C462C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150C4630: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x150C4634: addiu       $t3, $sp, 0xB8
    ctx->r11 = ADD32(ctx->r29, 0XB8);
    // 0x150C4638: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150C463C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150C4640: sw          $t2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r10;
    // 0x150C4644: sw          $s5, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r21;
    // 0x150C4648: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150C464C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150C4650: lbu         $a2, 0x3A8($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3A8);
    // 0x150C4654: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150C4658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C465C: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x150C4660: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150C4664: nop

    // 0x150C4668: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150C466C: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x150C4670: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x150C4674: jal         0x1514654C
    // 0x150C4678: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    func_1514654C(rdram, ctx);
        goto after_3;
    // 0x150C4678: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x150C467C: bnel        $v0, $zero, L_150C46AC
    if (ctx->r2 != 0) {
        // 0x150C4680: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150C46AC;
    }
    goto skip_6;
    // 0x150C4680: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_6:
    // 0x150C4684: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C4688: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150C468C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C4690: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x150C4694: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C4698: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C469C: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x150C46A0: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C46A4: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x150C46A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150C46AC:
    // 0x150C46AC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150C46B0: b           L_150C47B0
    // 0x150C46B4: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
        goto L_150C47B0;
    // 0x150C46B4: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x150C46B8: lw          $v0, 0x2E8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2E8);
L_150C46BC:
    // 0x150C46BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C46C0: beql        $v0, $zero, L_150C46F0
    if (ctx->r2 == 0) {
        // 0x150C46C4: mtc1        $at, $f24
        ctx->f24.u32l = ctx->r1;
            goto L_150C46F0;
    }
    goto skip_7;
    // 0x150C46C4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    skip_7:
    // 0x150C46C8: lw          $t5, 0x2E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2E4);
    // 0x150C46CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150C46D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C46D4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x150C46D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C46DC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150C46E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150C46E4: b           L_150C46F8
    // 0x150C46E8: div.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
        goto L_150C46F8;
    // 0x150C46E8: div.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150C46EC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
L_150C46F0:
    // 0x150C46F0: nop

    // 0x150C46F4: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_150C46F8:
    // 0x150C46F8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150C46FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150C4700: nop

    // 0x150C4704: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x150C4708: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C470C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x150C4710: nop

    // 0x150C4714: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x150C4718: bnel        $at, $zero, L_150C4728
    if (ctx->r1 != 0) {
        // 0x150C471C: mtc1        $v1, $f8
        ctx->f8.u32l = ctx->r3;
            goto L_150C4728;
    }
    goto skip_8;
    // 0x150C471C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    skip_8:
    // 0x150C4720: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x150C4724: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
L_150C4728:
    // 0x150C4728: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C472C: lwc1        $f10, 0x3B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3B8);
    // 0x150C4730: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150C4734: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x150C4738: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x150C473C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150C4740: addiu       $t8, $t8, 0x350
    ctx->r24 = ADD32(ctx->r24, 0X350);
    // 0x150C4744: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150C4748: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x150C474C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x150C4750: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C4754: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150C4758: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150C475C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x150C4760: lbu         $t9, 0x374($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X374);
    // 0x150C4764: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x150C4768: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150C476C: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x150C4770: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x150C4774: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150C4778: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x150C477C: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x150C4780: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150C4784: nop

    // 0x150C4788: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150C478C: nop

    // 0x150C4790: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150C4794: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x150C4798: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x150C479C: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x150C47A0: lw          $t1, 0x1D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1D4);
    // 0x150C47A4: jal         0x15143134
    // 0x150C47A8: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    func_15143134(rdram, ctx);
        goto after_4;
    // 0x150C47A8: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    after_4:
    // 0x150C47AC: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
L_150C47B0:
    // 0x150C47B0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150C47B4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150C47B8: beq         $v0, $zero, L_150C47E0
    if (ctx->r2 == 0) {
        // 0x150C47BC: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_150C47E0;
    }
    // 0x150C47BC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150C47C0: sb          $t2, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r10;
    // 0x150C47C4: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x150C47C8: lw          $t3, 0xC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0XC);
    // 0x150C47CC: sw          $at, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r1;
    // 0x150C47D0: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x150C47D4: sw          $t5, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->r13;
    // 0x150C47D8: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x150C47DC: sw          $at, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r1;
L_150C47E0:
    // 0x150C47E0: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x150C47E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150C47E8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150C47EC: bne         $t6, $at, L_150C481C
    if (ctx->r14 != ctx->r1) {
        // 0x150C47F0: addiu       $t7, $t7, -0x3D30
        ctx->r15 = ADD32(ctx->r15, -0X3D30);
            goto L_150C481C;
    }
    // 0x150C47F0: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150C47F4: subu        $a0, $s0, $t7
    ctx->r4 = SUB32(ctx->r16, ctx->r15);
    // 0x150C47F8: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150C47FC: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x150C4800: mflo        $a0
    ctx->r4 = lo;
    // 0x150C4804: addiu       $a1, $zero, 0x4065
    ctx->r5 = ADD32(0, 0X4065);
    // 0x150C4808: jal         0x150A29C8
    // 0x150C480C: nop

    func_150A29C8(rdram, ctx);
        goto after_5;
    // 0x150C480C: nop

    after_5:
    // 0x150C4810: bne         $v0, $zero, L_150C481C
    if (ctx->r2 != 0) {
        // 0x150C4814: nop
    
            goto L_150C481C;
    }
    // 0x150C4814: nop

    // 0x150C4818: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_150C481C:
    // 0x150C481C: beq         $s1, $zero, L_150C489C
    if (ctx->r17 == 0) {
        // 0x150C4820: nop
    
            goto L_150C489C;
    }
    // 0x150C4820: nop

    // 0x150C4824: jal         0x150ADA68
    // 0x150C4828: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150C4828: nop

    after_6:
    // 0x150C482C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4830: lwc1        $f6, 0x3BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3BC);
    // 0x150C4834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4838: lwc1        $f8, 0x3C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3C0);
    // 0x150C483C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150C4840: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150C4844: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150C4848: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150C484C: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150C4850: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150C4854: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150C4858: swc1        $f6, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f6.u32l;
    // 0x150C485C: lwc1        $f16, 0x8($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150C4860: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x150C4864: nop

    // 0x150C4868: bc1f        L_150C489C
    if (!c1cs) {
        // 0x150C486C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_150C489C;
    }
    // 0x150C486C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_150C4870:
    // 0x150C4870: lbu         $a1, 0xC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XC);
    // 0x150C4874: jal         0x151C36D8
    // 0x150C4878: lbu         $a2, 0x1($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0X1);
    func_151C36D8(rdram, ctx);
        goto after_7;
    // 0x150C4878: lbu         $a2, 0x1($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0X1);
    after_7:
    // 0x150C487C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150C4880: sub.s       $f18, $f10, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x150C4884: swc1        $f18, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f18.u32l;
    // 0x150C4888: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150C488C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x150C4890: nop

    // 0x150C4894: bc1tl       L_150C4870
    if (c1cs) {
        // 0x150C4898: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_150C4870;
    }
    goto skip_9;
    // 0x150C4898: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_9:
L_150C489C:
    // 0x150C489C: jal         0x150ADA68
    // 0x150C48A0: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150C48A0: nop

    after_8:
    // 0x150C48A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C48A8: lwc1        $f4, 0x3C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C4);
    // 0x150C48AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C48B0: lwc1        $f6, 0x3C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3C8);
    // 0x150C48B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150C48B8: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150C48BC: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150C48C0: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x150C48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C48C8: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150C48CC: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150C48D0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C48D4: swc1        $f4, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f4.u32l;
    // 0x150C48D8: lwc1        $f16, 0x10($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X10);
    // 0x150C48DC: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x150C48E0: nop

    // 0x150C48E4: bc1fl       L_150C4AA8
    if (!c1cs) {
        // 0x150C48E8: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150C4AA8;
    }
    goto skip_10;
    // 0x150C48E8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_10:
    // 0x150C48EC: jal         0x1515C0F8
    // 0x150C48F0: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_1515C0F8(rdram, ctx);
        goto after_9;
    // 0x150C48F0: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_9:
    // 0x150C48F4: bne         $v0, $zero, L_150C4908
    if (ctx->r2 != 0) {
        // 0x150C48F8: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150C4908;
    }
    // 0x150C48F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C48FC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150C4900: addiu       $t9, $t9, 0x5480
    ctx->r25 = ADD32(ctx->r25, 0X5480);
    // 0x150C4904: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
L_150C4908:
    // 0x150C4908: lwc1        $f26, 0x3CC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X3CC);
    // 0x150C490C: addiu       $s2, $sp, 0xA0
    ctx->r18 = ADD32(ctx->r29, 0XA0);
L_150C4910:
    // 0x150C4910: jal         0x150ADA20
    // 0x150C4914: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150C4914: nop

    after_10:
    // 0x150C4918: jal         0x150ADA20
    // 0x150C491C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150C491C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_11:
    // 0x150C4920: jal         0x150ADA68
    // 0x150C4924: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150C4924: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_12:
    // 0x150C4928: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x150C492C: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150C4930: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4934: lwc1        $f10, 0x3D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3D0);
    // 0x150C4938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C493C: lwc1        $f6, 0x3D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3D4);
    // 0x150C4940: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150C4944: mfhi        $a1
    ctx->r5 = hi;
    // 0x150C4948: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x150C494C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x150C4950: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x150C4954: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x150C4958: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150C495C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150C4960: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150C4964: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150C4968: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150C496C: jal         0x15143794
    // 0x150C4970: nop

    func_15143794(rdram, ctx);
        goto after_13;
    // 0x150C4970: nop

    after_13:
    // 0x150C4974: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x150C4978: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150C497C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150C4980: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x150C4984: mul.s       $f10, $f16, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x150C4988: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150C498C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x150C4990: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x150C4994: mul.s       $f16, $f8, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x150C4998: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x150C499C: jal         0x150ADA68
    // 0x150C49A0: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150C49A0: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x150C49A4: jal         0x150ADA20
    // 0x150C49A8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150C49A8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_15:
    // 0x150C49AC: jal         0x150ADA20
    // 0x150C49B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x150C49B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_16:
    // 0x150C49B4: jal         0x150ADA68
    // 0x150C49B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150C49B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x150C49BC: jal         0x150ADA68
    // 0x150C49C0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x150C49C0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_18:
    // 0x150C49C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C49C8: lwc1        $f10, 0x3D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3D8);
    // 0x150C49CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C49D0: lwc1        $f8, 0x3DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3DC);
    // 0x150C49D4: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x150C49D8: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150C49DC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150C49E0: mfhi        $t5
    ctx->r13 = hi;
    // 0x150C49E4: mul.s       $f18, $f20, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150C49E8: addiu       $t6, $t5, 0x3C
    ctx->r14 = ADD32(ctx->r13, 0X3C);
    // 0x150C49EC: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150C49F0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x150C49F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C49F8: lui         $at, 0x42F2
    ctx->r1 = S32(0X42F2 << 16);
    // 0x150C49FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C4A00: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x150C4A04: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x150C4A08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C4A0C: lwc1        $f8, 0x3E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E0);
    // 0x150C4A10: mfhi        $t7
    ctx->r15 = hi;
    // 0x150C4A14: addiu       $t8, $t7, 0xC8
    ctx->r24 = ADD32(ctx->r15, 0XC8);
    // 0x150C4A18: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150C4A1C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150C4A20: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150C4A24: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150C4A28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150C4A2C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150C4A30: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150C4A34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150C4A38: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150C4A3C: bc1f        L_150C4A48
    if (!c1cs) {
        // 0x150C4A40: or          $t9, $zero, $zero
        ctx->r25 = 0 | 0;
            goto L_150C4A48;
    }
    // 0x150C4A40: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x150C4A44: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_150C4A48:
    // 0x150C4A48: addiu       $t0, $sp, 0xC0
    ctx->r8 = ADD32(ctx->r29, 0XC0);
    // 0x150C4A4C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150C4A50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C4A54: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x150C4A58: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x150C4A5C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150C4A60: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150C4A64: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x150C4A68: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x150C4A6C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150C4A70: lbu         $t4, 0xC($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0XC);
    // 0x150C4A74: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x150C4A78: lbu         $t3, 0x1($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X1);
    // 0x150C4A7C: jal         0x151D9014
    // 0x150C4A80: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_151D9014(rdram, ctx);
        goto after_19;
    // 0x150C4A80: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_19:
    // 0x150C4A84: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x150C4A88: sub.s       $f16, $f6, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x150C4A8C: swc1        $f16, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f16.u32l;
    // 0x150C4A90: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x150C4A94: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x150C4A98: nop

    // 0x150C4A9C: bc1t        L_150C4910
    if (c1cs) {
        // 0x150C4AA0: nop
    
            goto L_150C4910;
    }
    // 0x150C4AA0: nop

L_150C4AA4:
    // 0x150C4AA4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_150C4AA8:
    // 0x150C4AA8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x150C4AAC: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x150C4AB0: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x150C4AB4: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x150C4AB8: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x150C4ABC: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x150C4AC0: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x150C4AC4: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x150C4AC8: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x150C4ACC: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x150C4AD0: jr          $ra
    // 0x150C4AD4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150C4AD4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_1506DDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DDB8: jr          $ra
    // 0x1506DDBC: nop

    return;
    return;
    // 0x1506DDBC: nop

;}
RECOMP_FUNC void func_1503DE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503DE70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503DE74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503DE78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1503DE7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1503DE80: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1503DE84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1503DE88: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1503DE8C: beq         $t6, $at, L_1503DEDC
    if (ctx->r14 == ctx->r1) {
        // 0x1503DE90: lui         $t4, 0x800D
        ctx->r12 = S32(0X800D << 16);
            goto L_1503DEDC;
    }
    // 0x1503DE90: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1503DE94: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1503DE98: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1503DE9C: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1503DEA0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1503DEA4: subu        $a0, $t7, $t8
    ctx->r4 = SUB32(ctx->r15, ctx->r24);
    // 0x1503DEA8: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1503DEAC: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x1503DEB0: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x1503DEB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1503DEB8: lw          $t1, 0x446C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X446C);
    // 0x1503DEBC: sll         $t2, $t6, 3
    ctx->r10 = S32(ctx->r14 << 3);
    // 0x1503DEC0: mflo        $a0
    ctx->r4 = lo;
    // 0x1503DEC4: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x1503DEC8: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x1503DECC: jal         0x1503DF0C
    // 0x1503DED0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    func_1503DF0C(rdram, ctx);
        goto after_0;
    // 0x1503DED0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x1503DED4: b           L_1503DF00
    // 0x1503DED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1503DF00;
    // 0x1503DED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1503DEDC:
    // 0x1503DEDC: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1503DEE0: subu        $a0, $t3, $t4
    ctx->r4 = SUB32(ctx->r11, ctx->r12);
    // 0x1503DEE4: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1503DEE8: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1503DEEC: mflo        $a0
    ctx->r4 = lo;
    // 0x1503DEF0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1503DEF4: jal         0x1503DF0C
    // 0x1503DEF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1503DF0C(rdram, ctx);
        goto after_1;
    // 0x1503DEF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
    // 0x1503DEFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1503DF00:
    // 0x1503DF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503DF04: jr          $ra
    // 0x1503DF08: nop

    return;
    return;
    // 0x1503DF08: nop

;}
RECOMP_FUNC void func_150969A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150969A0: blez        $a0, L_15096A5C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x150969A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15096A5C;
    }
    // 0x150969A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150969A8: andi        $a2, $a0, 0x3
    ctx->r6 = ctx->r4 & 0X3;
    // 0x150969AC: beq         $a2, $zero, L_150969E8
    if (ctx->r6 == 0) {
        // 0x150969B0: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_150969E8;
    }
    // 0x150969B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x150969B4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150969B8: addiu       $t7, $t7, 0x2DC0
    ctx->r15 = ADD32(ctx->r15, 0X2DC0);
    // 0x150969BC: sll         $t6, $zero, 5
    ctx->r14 = S32(0 << 5);
    // 0x150969C0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_150969C4:
    // 0x150969C4: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x150969C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150969CC: beq         $t8, $zero, L_150969DC
    if (ctx->r24 == 0) {
        // 0x150969D0: nop
    
            goto L_150969DC;
    }
    // 0x150969D0: nop

    // 0x150969D4: jr          $ra
    // 0x150969D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150969D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150969DC:
    // 0x150969DC: bne         $a1, $v0, L_150969C4
    if (ctx->r5 != ctx->r2) {
        // 0x150969E0: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_150969C4;
    }
    // 0x150969E0: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x150969E4: beq         $v0, $a0, L_15096A5C
    if (ctx->r2 == ctx->r4) {
        // 0x150969E8: sll         $t9, $v0, 3
        ctx->r25 = S32(ctx->r2 << 3);
            goto L_15096A5C;
    }
L_150969E8:
    // 0x150969E8: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x150969EC: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x150969F0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150969F4: addiu       $t0, $t0, 0x2DC0
    ctx->r8 = ADD32(ctx->r8, 0X2DC0);
    // 0x150969F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150969FC: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
L_15096A00:
    // 0x15096A00: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x15096A04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15096A08: beql        $t1, $zero, L_15096A1C
    if (ctx->r9 == 0) {
        // 0x15096A0C: lbu         $t2, 0x24($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X24);
            goto L_15096A1C;
    }
    goto skip_0;
    // 0x15096A0C: lbu         $t2, 0x24($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X24);
    skip_0:
    // 0x15096A10: jr          $ra
    // 0x15096A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15096A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15096A18: lbu         $t2, 0x24($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X24);
L_15096A1C:
    // 0x15096A1C: beql        $t2, $zero, L_15096A30
    if (ctx->r10 == 0) {
        // 0x15096A20: lbu         $t3, 0x48($v1)
        ctx->r11 = MEM_BU(ctx->r3, 0X48);
            goto L_15096A30;
    }
    goto skip_1;
    // 0x15096A20: lbu         $t3, 0x48($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X48);
    skip_1:
    // 0x15096A24: jr          $ra
    // 0x15096A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15096A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15096A2C: lbu         $t3, 0x48($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X48);
L_15096A30:
    // 0x15096A30: beql        $t3, $zero, L_15096A44
    if (ctx->r11 == 0) {
        // 0x15096A34: lbu         $t4, 0x6C($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X6C);
            goto L_15096A44;
    }
    goto skip_2;
    // 0x15096A34: lbu         $t4, 0x6C($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X6C);
    skip_2:
    // 0x15096A38: jr          $ra
    // 0x15096A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15096A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15096A40: lbu         $t4, 0x6C($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X6C);
L_15096A44:
    // 0x15096A44: beq         $t4, $zero, L_15096A54
    if (ctx->r12 == 0) {
        // 0x15096A48: nop
    
            goto L_15096A54;
    }
    // 0x15096A48: nop

    // 0x15096A4C: jr          $ra
    // 0x15096A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15096A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096A54:
    // 0x15096A54: bne         $v0, $a0, L_15096A00
    if (ctx->r2 != ctx->r4) {
        // 0x15096A58: addiu       $v1, $v1, 0x90
        ctx->r3 = ADD32(ctx->r3, 0X90);
            goto L_15096A00;
    }
    // 0x15096A58: addiu       $v1, $v1, 0x90
    ctx->r3 = ADD32(ctx->r3, 0X90);
L_15096A5C:
    // 0x15096A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15096A60: jr          $ra
    // 0x15096A64: nop

    return;
    return;
    // 0x15096A64: nop

;}
RECOMP_FUNC void func_151001B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151001B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151001B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151001BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151001C0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x151001C4: addiu       $t8, $zero, 0x3B
    ctx->r24 = ADD32(0, 0X3B);
    // 0x151001C8: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x151001CC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151001D0: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x151001D4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151001D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151001DC: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x151001E0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151001E4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151001E8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151001EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151001F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151001F4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151001F8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151001FC: addiu       $a2, $zero, 0x4E
    ctx->r6 = ADD32(0, 0X4E);
    // 0x15100200: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15100204: jal         0x15149130
    // 0x15100208: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15100208: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    after_0:
    // 0x1510020C: beq         $v0, $zero, L_15100220
    if (ctx->r2 == 0) {
        // 0x15100210: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15100220;
    }
    // 0x15100210: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15100214: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x15100218: jal         0x10022EC0
    // 0x1510021C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1510021C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_15100220:
    // 0x15100220: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15100224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15100228: jr          $ra
    // 0x1510022C: nop

    return;
    return;
    // 0x1510022C: nop

;}
RECOMP_FUNC void _n_collectPVoices(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10019774: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10019778: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001977C: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x10019780: beq         $t7, $zero, L_100198A0
    if (ctx->r15 == 0) {
        // 0x10019784: sw          $t7, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r15;
            goto L_100198A0;
    }
    // 0x10019784: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
L_10019788:
    // 0x10019788: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x1001978C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x10019790: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x10019794: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10019798: beq         $t0, $zero, L_100197B0
    if (ctx->r8 == 0) {
        // 0x1001979C: nop
    
            goto L_100197B0;
    }
    // 0x1001979C: nop

    // 0x100197A0: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x100197A4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x100197A8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x100197AC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
L_100197B0:
    // 0x100197B0: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x100197B4: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x100197B8: beq         $t5, $zero, L_100197D0
    if (ctx->r13 == 0) {
        // 0x100197BC: nop
    
            goto L_100197D0;
    }
    // 0x100197BC: nop

    // 0x100197C0: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x100197C4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x100197C8: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x100197CC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_100197D0:
    // 0x100197D0: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x100197D4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x100197D8: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100197DC: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x100197E0: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x100197E4: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x100197E8: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x100197EC: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x100197F0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x100197F4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x100197F8: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x100197FC: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x10019800: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x10019804: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x10019808: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001980C: beq         $t8, $zero, L_10019824
    if (ctx->r24 == 0) {
        // 0x10019810: nop
    
            goto L_10019824;
    }
    // 0x10019810: nop

    // 0x10019814: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x10019818: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x1001981C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10019820: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_10019824:
    // 0x10019824: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x10019828: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x1001982C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x10019830: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x10019834: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x10019838: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x1001983C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x10019840: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x10019844: beq         $t7, $zero, L_1001985C
    if (ctx->r15 == 0) {
        // 0x10019848: nop
    
            goto L_1001985C;
    }
    // 0x10019848: nop

    // 0x1001984C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x10019850: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x10019854: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x10019858: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
L_1001985C:
    // 0x1001985C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x10019860: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x10019864: beq         $t2, $zero, L_1001987C
    if (ctx->r10 == 0) {
        // 0x10019868: nop
    
            goto L_1001987C;
    }
    // 0x10019868: nop

    // 0x1001986C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x10019870: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x10019874: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x10019878: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_1001987C:
    // 0x1001987C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x10019880: sw          $zero, 0x8($t6)
    MEM_W(0X8, ctx->r14) = 0;
    // 0x10019884: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x10019888: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    // 0x1001988C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10019890: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10019894: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x10019898: bne         $t0, $zero, L_10019788
    if (ctx->r8 != 0) {
        // 0x1001989C: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_10019788;
    }
    // 0x1001989C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
L_100198A0:
    // 0x100198A0: b           L_100198A8
    // 0x100198A4: nop

        goto L_100198A8;
    // 0x100198A4: nop

L_100198A8:
    // 0x100198A8: jr          $ra
    // 0x100198AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x100198AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150AF2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AF2E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150AF2E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150AF2E8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150AF2EC: lh          $v0, 0x2($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X2);
    // 0x150AF2F0: lh          $t6, 0x8($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X8);
    // 0x150AF2F4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x150AF2F8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x150AF2FC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150AF300: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150AF304: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150AF308: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150AF30C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150AF310: jal         0x151CF898
    // 0x150AF314: nop

    func_151CF898(rdram, ctx);
        goto after_0;
    // 0x150AF314: nop

    after_0:
    // 0x150AF318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150AF31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150AF320: jr          $ra
    // 0x150AF324: nop

    return;
    return;
    // 0x150AF324: nop

;}
RECOMP_FUNC void func_15192308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15192308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1519230C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15192310: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15192314: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15192318: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1519231C: lw          $a2, 0xA8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XA8);
    // 0x15192320: addiu       $t6, $s0, 0x38
    ctx->r14 = ADD32(ctx->r16, 0X38);
    // 0x15192324: addiu       $t7, $s0, 0x3C
    ctx->r15 = ADD32(ctx->r16, 0X3C);
    // 0x15192328: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1519232C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15192330: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x15192334: addiu       $a1, $s0, 0xAE
    ctx->r5 = ADD32(ctx->r16, 0XAE);
    // 0x15192338: jal         0x15131C84
    // 0x1519233C: addiu       $a3, $s0, 0xB0
    ctx->r7 = ADD32(ctx->r16, 0XB0);
    func_15131C84(rdram, ctx);
        goto after_0;
    // 0x1519233C: addiu       $a3, $s0, 0xB0
    ctx->r7 = ADD32(ctx->r16, 0XB0);
    after_0:
    // 0x15192340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15192344: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15192348: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1519234C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15192350: jr          $ra
    // 0x15192354: nop

    return;
    return;
    // 0x15192354: nop

;}
RECOMP_FUNC void func_15077F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077F64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15077F68: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15077F6C: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15077F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15077F74: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15077F78: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15077F7C: lw          $t7, 0x2104($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2104);
    // 0x15077F80: lbu         $t8, 0x13F($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X13F);
    // 0x15077F84: lbu         $t3, 0x21E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X21E);
    // 0x15077F88: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15077F8C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15077F90: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x15077F94: lbu         $a3, 0x1890($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X1890);
    // 0x15077F98: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15077F9C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x15077FA0: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x15077FA4: addu        $v0, $t2, $t4
    ctx->r2 = ADD32(ctx->r10, ctx->r12);
    // 0x15077FA8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15077FAC: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x15077FB0: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x15077FB4: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15077FB8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15077FBC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15077FC0: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15077FC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15077FC8: sb          $a3, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r7;
    // 0x15077FCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15077FD0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15077FD4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15077FD8: jal         0x1505A630
    // 0x15077FDC: sub.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f18.fl;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15077FDC: sub.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f18.fl;
    after_0:
    // 0x15077FE0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15077FE4: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15077FE8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15077FEC: lbu         $a3, 0x1E($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1E);
    // 0x15077FF0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15077FF4: sh          $v0, 0x78($t8)
    MEM_H(0X78, ctx->r24) = ctx->r2;
    // 0x15077FF8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15077FFC: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x15078000: addu        $t5, $t5, $a3
    ctx->r13 = ADD32(ctx->r13, ctx->r7);
    // 0x15078004: lhu         $t7, 0x78($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X78);
    // 0x15078008: lhu         $t9, 0x76($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X76);
    // 0x1507800C: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x15078010: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15078014: subu        $a1, $t7, $t9
    ctx->r5 = SUB32(ctx->r15, ctx->r25);
    // 0x15078018: sra         $t1, $a1, 8
    ctx->r9 = S32(SIGNED(ctx->r5) >> 8);
    // 0x1507801C: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x15078020: andi        $t2, $t3, 0x80
    ctx->r10 = ctx->r11 & 0X80;
    // 0x15078024: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x15078028: beq         $t2, $zero, L_1507803C
    if (ctx->r10 == 0) {
        // 0x1507802C: or          $a0, $t3, $zero
        ctx->r4 = ctx->r11 | 0;
            goto L_1507803C;
    }
    // 0x1507802C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x15078030: negu        $a1, $t3
    ctx->r5 = SUB32(0, ctx->r11);
    // 0x15078034: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x15078038: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_1507803C:
    // 0x1507803C: lbu         $t6, -0x65C4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X65C4);
    // 0x15078040: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15078044: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15078048: beql        $at, $zero, L_15078068
    if (ctx->r1 == 0) {
        // 0x1507804C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15078068;
    }
    goto skip_0;
    // 0x1507804C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15078050: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15078054: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x15078058: sb          $t8, 0x250($v1)
    MEM_B(0X250, ctx->r3) = ctx->r24;
    // 0x1507805C: jal         0x15056A00
    // 0x15078060: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_15056A00(rdram, ctx);
        goto after_1;
    // 0x15078060: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x15078064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15078068:
    // 0x15078068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507806C: jr          $ra
    // 0x15078070: nop

    return;
    return;
    // 0x15078070: nop

;}
RECOMP_FUNC void func_15011B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011B94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15011B98: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15011B9C: addiu       $a0, $zero, 0x4E9
    ctx->r4 = ADD32(0, 0X4E9);
    // 0x15011BA0: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
    // 0x15011BA4: addiu       $a2, $zero, -0xBAC
    ctx->r6 = ADD32(0, -0XBAC);
    // 0x15011BA8: jal         0x15011B00
    // 0x15011BAC: addiu       $a3, $zero, -0x16F
    ctx->r7 = ADD32(0, -0X16F);
    func_15011B00(rdram, ctx);
        goto after_0;
    // 0x15011BAC: addiu       $a3, $zero, -0x16F
    ctx->r7 = ADD32(0, -0X16F);
    after_0:
    // 0x15011BB0: addiu       $a0, $zero, 0x76D
    ctx->r4 = ADD32(0, 0X76D);
    // 0x15011BB4: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
    // 0x15011BB8: addiu       $a2, $zero, -0xAC1
    ctx->r6 = ADD32(0, -0XAC1);
    // 0x15011BBC: jal         0x15011B00
    // 0x15011BC0: addiu       $a3, $zero, -0x16F
    ctx->r7 = ADD32(0, -0X16F);
    func_15011B00(rdram, ctx);
        goto after_1;
    // 0x15011BC0: addiu       $a3, $zero, -0x16F
    ctx->r7 = ADD32(0, -0X16F);
    after_1:
    // 0x15011BC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15011BC8: jal         0x1515F170
    // 0x15011BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1515F170(rdram, ctx);
        goto after_2;
    // 0x15011BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x15011BD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15011BD4: jal         0x1515F170
    // 0x15011BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1515F170(rdram, ctx);
        goto after_3;
    // 0x15011BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x15011BDC: lui         $t9, 0x1001
    ctx->r25 = S32(0X1001 << 16);
    // 0x15011BE0: addiu       $t9, $t9, -0x10C0
    ctx->r25 = ADD32(ctx->r25, -0X10C0);
    // 0x15011BE4: addiu       $t6, $zero, 0x2EE0
    ctx->r14 = ADD32(0, 0X2EE0);
    // 0x15011BE8: addiu       $t7, $zero, 0x258
    ctx->r15 = ADD32(0, 0X258);
    // 0x15011BEC: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x15011BF0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x15011BF4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x15011BF8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15011BFC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15011C00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15011C04: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15011C08: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x15011C0C: addiu       $a1, $zero, 0x2FD
    ctx->r5 = ADD32(0, 0X2FD);
    // 0x15011C10: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x15011C14: addiu       $a3, $zero, -0x59
    ctx->r7 = ADD32(0, -0X59);
    // 0x15011C18: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15011C1C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15011C20: jal         0x1000FA64
    // 0x15011C24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_4;
    // 0x15011C24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_4:
    // 0x15011C28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15011C2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15011C30: jr          $ra
    // 0x15011C34: nop

    return;
    return;
    // 0x15011C34: nop

;}
RECOMP_FUNC void func_151196D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151196D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151196D8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x151196DC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x151196E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151196E4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x151196E8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x151196EC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x151196F0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x151196F4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x151196F8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x151196FC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15119700: lhu         $v0, 0x54($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X54);
    // 0x15119704: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x15119708: lw          $s0, 0x28($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X28);
    // 0x1511970C: beq         $v0, $at, L_15119720
    if (ctx->r2 == ctx->r1) {
        // 0x15119710: addiu       $s3, $zero, 0x64
        ctx->r19 = ADD32(0, 0X64);
            goto L_15119720;
    }
    // 0x15119710: addiu       $s3, $zero, 0x64
    ctx->r19 = ADD32(0, 0X64);
    // 0x15119714: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x15119718: bnel        $v0, $at, L_15119728
    if (ctx->r2 != ctx->r1) {
        // 0x1511971C: lhu         $v1, 0x16($s4)
        ctx->r3 = MEM_HU(ctx->r20, 0X16);
            goto L_15119728;
    }
    goto skip_0;
    // 0x1511971C: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    skip_0:
L_15119720:
    // 0x15119720: addiu       $s3, $zero, 0x190
    ctx->r19 = ADD32(0, 0X190);
    // 0x15119724: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
L_15119728:
    // 0x15119728: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1511972C: sw          $t6, 0x84($s4)
    MEM_W(0X84, ctx->r20) = ctx->r14;
    // 0x15119730: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15119734: blez        $v1, L_151197A8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15119738: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151197A8;
    }
    // 0x15119738: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1511973C:
    // 0x1511973C: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x15119740: bnel        $t7, $zero, L_1511979C
    if (ctx->r15 != 0) {
        // 0x15119744: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1511979C;
    }
    goto skip_1;
    // 0x15119744: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x15119748: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x1511974C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x15119750: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15119754: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15119758: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1511975C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15119760: mflo        $t8
    ctx->r24 = lo;
    // 0x15119764: nop

    // 0x15119768: nop

    // 0x1511976C: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15119770: mflo        $t9
    ctx->r25 = lo;
    // 0x15119774: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15119778: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1511977C: beql        $at, $zero, L_1511979C
    if (ctx->r1 == 0) {
        // 0x15119780: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1511979C;
    }
    goto skip_2;
    // 0x15119780: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x15119784: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15119788: sh          $s2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r18;
    // 0x1511978C: jal         0x151194D4
    // 0x15119790: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_151194D4(rdram, ctx);
        goto after_0;
    // 0x15119790: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_0:
    // 0x15119794: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x15119798: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1511979C:
    // 0x1511979C: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151197A0: bne         $at, $zero, L_1511973C
    if (ctx->r1 != 0) {
        // 0x151197A4: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_1511973C;
    }
    // 0x151197A4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_151197A8:
    // 0x151197A8: beq         $s2, $zero, L_1511990C
    if (ctx->r18 == 0) {
        // 0x151197AC: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1511990C;
    }
    // 0x151197AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151197B0: lwc1        $f22, 0x315C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X315C);
    // 0x151197B4: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
L_151197B8:
    // 0x151197B8: lw          $a1, 0x28($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X28);
    // 0x151197BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151197C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151197C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151197C8: blez        $v1, L_151197FC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151197CC: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_151197FC;
    }
    // 0x151197CC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
L_151197D0:
    // 0x151197D0: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x151197D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151197D8: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151197DC: bne         $s2, $t0, L_151197F4
    if (ctx->r18 != ctx->r8) {
        // 0x151197E0: nop
    
            goto L_151197F4;
    }
    // 0x151197E0: nop

    // 0x151197E4: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x151197E8: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x151197EC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x151197F0: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
L_151197F4:
    // 0x151197F4: bne         $at, $zero, L_151197D0
    if (ctx->r1 != 0) {
        // 0x151197F8: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_151197D0;
    }
    // 0x151197F8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_151197FC:
    // 0x151197FC: bnel        $v0, $zero, L_15119810
    if (ctx->r2 != 0) {
        // 0x15119800: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_15119810;
    }
    goto skip_3;
    // 0x15119800: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_3:
    // 0x15119804: beql        $a0, $zero, L_15119904
    if (ctx->r4 == 0) {
        // 0x15119808: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_15119904;
    }
    goto skip_4;
    // 0x15119808: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_4:
    // 0x1511980C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_15119810:
    // 0x15119810: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x15119814: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15119818: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511981C: jal         0x150484A0
    // 0x15119820: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    func_150484A0(rdram, ctx);
        goto after_1;
    // 0x15119820: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x15119824: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15119828: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1511982C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15119830: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15119834: nop

    // 0x15119838: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x1511983C: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15119840: beq         $at, $zero, L_15119900
    if (ctx->r1 == 0) {
        // 0x15119844: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_15119900;
    }
    // 0x15119844: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x15119848: negu        $s5, $t4
    ctx->r21 = SUB32(0, ctx->r12);
    // 0x1511984C: andi        $t5, $s5, 0xFF
    ctx->r13 = ctx->r21 & 0XFF;
    // 0x15119850: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
    // 0x15119854: jal         0x15048A40
    // 0x15119858: andi        $a0, $t5, 0xFF
    ctx->r4 = ctx->r13 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x15119858: andi        $a0, $t5, 0xFF
    ctx->r4 = ctx->r13 & 0XFF;
    after_2:
    // 0x1511985C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15119860: jal         0x150489B0
    // 0x15119864: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_3;
    // 0x15119864: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_3:
    // 0x15119868: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x1511986C: blezl       $v1, L_15119904
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15119870: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_15119904;
    }
    goto skip_5;
    // 0x15119870: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_5:
L_15119874:
    // 0x15119874: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x15119878: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1511987C: bnel        $s2, $t6, L_151198F8
    if (ctx->r18 != ctx->r14) {
        // 0x15119880: slt         $at, $s1, $v1
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_151198F8;
    }
    goto skip_6;
    // 0x15119880: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    skip_6:
    // 0x15119884: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x15119888: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x1511988C: addiu       $t7, $s2, -0x1
    ctx->r15 = ADD32(ctx->r18, -0X1);
    // 0x15119890: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x15119894: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x15119898: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x1511989C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151198A0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x151198A4: or          $t0, $t9, $s3
    ctx->r8 = ctx->r25 | ctx->r19;
    // 0x151198A8: sh          $t0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r8;
    // 0x151198AC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151198B0: mul.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x151198B4: nop

    // 0x151198B8: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151198BC: nop

    // 0x151198C0: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151198C4: nop

    // 0x151198C8: mul.s       $f18, $f12, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x151198CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151198D0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151198D4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151198D8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151198DC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151198E0: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
    // 0x151198E4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151198E8: nop

    // 0x151198EC: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x151198F0: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x151198F4: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
L_151198F8:
    // 0x151198F8: bne         $at, $zero, L_15119874
    if (ctx->r1 != 0) {
        // 0x151198FC: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_15119874;
    }
    // 0x151198FC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_15119900:
    // 0x15119900: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_15119904:
    // 0x15119904: bnel        $s2, $zero, L_151197B8
    if (ctx->r18 != 0) {
        // 0x15119908: lhu         $v1, 0x16($s4)
        ctx->r3 = MEM_HU(ctx->r20, 0X16);
            goto L_151197B8;
    }
    goto skip_7;
    // 0x15119908: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    skip_7:
L_1511990C:
    // 0x1511990C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15119910: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15119914: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15119918: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x1511991C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15119920: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15119924: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15119928: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x1511992C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15119930: jr          $ra
    // 0x15119934: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15119934: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151DF1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DF1BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151DF1C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DF1C4: jal         0x15083E90
    // 0x151DF1C8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x151DF1C8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x151DF1CC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DF1D0: lb          $t6, 0xA96($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XA96);
    // 0x151DF1D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151DF1D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x151DF1DC: beq         $t6, $at, L_151DF308
    if (ctx->r14 == ctx->r1) {
        // 0x151DF1E0: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151DF308;
    }
    // 0x151DF1E0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151DF1E4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151DF1E8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151DF1EC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151DF1F0: lbu         $t7, 0xA95($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XA95);
    // 0x151DF1F4: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x151DF1F8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DF1FC: subu        $t0, $t7, $t9
    ctx->r8 = SUB32(ctx->r15, ctx->r25);
    // 0x151DF200: bgtz        $t0, L_151DF2F0
    if (SIGNED(ctx->r8) > 0) {
        // 0x151DF204: addiu       $v0, $v0, -0x108
        ctx->r2 = ADD32(ctx->r2, -0X108);
            goto L_151DF2F0;
    }
    // 0x151DF204: addiu       $v0, $v0, -0x108
    ctx->r2 = ADD32(ctx->r2, -0X108);
    // 0x151DF208: lb          $t1, 0x0($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X0);
    // 0x151DF20C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151DF210: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x151DF214: sltiu       $t2, $t1, 0x1
    ctx->r10 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x151DF218: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x151DF21C: lb          $t3, 0x0($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X0);
    // 0x151DF220: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151DF224: bnel        $t3, $zero, L_151DF258
    if (ctx->r11 != 0) {
        // 0x151DF228: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_151DF258;
    }
    goto skip_0;
    // 0x151DF228: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    skip_0:
    // 0x151DF22C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151DF230: jal         0x150ADA20
    // 0x151DF234: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DF234: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_1:
    // 0x151DF238: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x151DF23C: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    // 0x151DF240: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151DF244: jal         0x1001263C
    // 0x151DF248: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1001263C(rdram, ctx);
        goto after_2;
    // 0x151DF248: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_2:
    // 0x151DF24C: b           L_151DF280
    // 0x151DF250: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
        goto L_151DF280;
    // 0x151DF250: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151DF254: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_151DF258:
    // 0x151DF258: jal         0x150ADA20
    // 0x151DF25C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151DF25C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_3:
    // 0x151DF260: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151DF264: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DF268: mfhi        $a0
    ctx->r4 = hi;
    // 0x151DF26C: addiu       $a0, $a0, 0xBE
    ctx->r4 = ADD32(ctx->r4, 0XBE);
    // 0x151DF270: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151DF274: jal         0x1001263C
    // 0x151DF278: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1001263C(rdram, ctx);
        goto after_4;
    // 0x151DF278: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_4:
    // 0x151DF27C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_151DF280:
    // 0x151DF280: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151DF284: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x151DF288: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x151DF28C: beq         $v1, $zero, L_151DF2E4
    if (ctx->r3 == 0) {
        // 0x151DF290: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_151DF2E4;
    }
    // 0x151DF290: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x151DF294: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151DF298: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x151DF29C: subu        $t9, $v1, $t7
    ctx->r25 = SUB32(ctx->r3, ctx->r15);
    // 0x151DF2A0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151DF2A4: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x151DF2A8: sb          $t6, 0x232($v1)
    MEM_B(0X232, ctx->r3) = ctx->r14;
    // 0x151DF2AC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151DF2B0: mflo        $t1
    ctx->r9 = lo;
    // 0x151DF2B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151DF2B8: sb          $t1, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r9;
    // 0x151DF2BC: lbu         $a1, 0x232($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X232);
    // 0x151DF2C0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x151DF2C4: jal         0x1507BB28
    // 0x151DF2C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1507BB28(rdram, ctx);
        goto after_5;
    // 0x151DF2C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x151DF2CC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151DF2D0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151DF2D4: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x151DF2D8: sw          $v0, 0x218($v1)
    MEM_W(0X218, ctx->r3) = ctx->r2;
    // 0x151DF2DC: sh          $zero, 0x21C($v1)
    MEM_H(0X21C, ctx->r3) = 0;
    // 0x151DF2E0: sb          $t2, 0x201($v1)
    MEM_B(0X201, ctx->r3) = ctx->r10;
L_151DF2E4:
    // 0x151DF2E4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151DF2E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF2EC: sb          $t3, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r11;
L_151DF2F0:
    // 0x151DF2F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DF2F4: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151DF2F8: lhu         $t4, 0x20($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X20);
    // 0x151DF2FC: andi        $t5, $t4, 0xFFCF
    ctx->r13 = ctx->r12 & 0XFFCF;
    // 0x151DF300: b           L_151DF32C
    // 0x151DF304: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
        goto L_151DF32C;
    // 0x151DF304: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
L_151DF308:
    // 0x151DF308: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151DF30C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DF310: lbu         $t6, 0xA95($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XA95);
    // 0x151DF314: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x151DF318: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x151DF31C: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x151DF320: bne         $at, $zero, L_151DF32C
    if (ctx->r1 != 0) {
        // 0x151DF324: nop
    
            goto L_151DF32C;
    }
    // 0x151DF324: nop

    // 0x151DF328: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_151DF32C:
    // 0x151DF32C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151DF330: lbu         $t9, 0xA94($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XA94);
    // 0x151DF334: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF338: sb          $t0, 0xA95($at)
    MEM_B(0XA95, ctx->r1) = ctx->r8;
    // 0x151DF33C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DF340: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    // 0x151DF344: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DF348: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x151DF34C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DF350: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151DF354: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151DF358: mflo        $t0
    ctx->r8 = lo;
    // 0x151DF35C: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x151DF360: slti        $at, $t1, 0xFE
    ctx->r1 = SIGNED(ctx->r9) < 0XFE ? 1 : 0;
    // 0x151DF364: bne         $at, $zero, L_151DF370
    if (ctx->r1 != 0) {
        // 0x151DF368: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_151DF370;
    }
    // 0x151DF368: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x151DF36C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_151DF370:
    // 0x151DF370: lb          $t2, -0x108($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X108);
    // 0x151DF374: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    // 0x151DF378: bnel        $t2, $zero, L_151DF46C
    if (ctx->r10 != 0) {
        // 0x151DF37C: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_151DF46C;
    }
    goto skip_1;
    // 0x151DF37C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x151DF380: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151DF384: jal         0x151E3344
    // 0x151DF388: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151E3344(rdram, ctx);
        goto after_6;
    // 0x151DF388: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_6:
    // 0x151DF38C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151DF390: lbu         $t4, -0x1CC($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1CC);
    // 0x151DF394: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151DF398: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151DF39C: bne         $t4, $at, L_151DF3E8
    if (ctx->r12 != ctx->r1) {
        // 0x151DF3A0: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_151DF3E8;
    }
    // 0x151DF3A0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DF3A4: lw          $t5, -0x22C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X22C);
    // 0x151DF3A8: lhu         $t8, 0x20($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X20);
    // 0x151DF3AC: andi        $t6, $t8, 0xC
    ctx->r14 = ctx->r24 & 0XC;
    // 0x151DF3B0: beq         $t6, $zero, L_151DF3E8
    if (ctx->r14 == 0) {
        // 0x151DF3B4: nop
    
            goto L_151DF3E8;
    }
    // 0x151DF3B4: nop

    // 0x151DF3B8: jal         0x151E7E9C
    // 0x151DF3BC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151E7E9C(rdram, ctx);
        goto after_7;
    // 0x151DF3BC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_7:
    // 0x151DF3C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151DF3C4: lbu         $a0, 0xA97($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XA97);
    // 0x151DF3C8: jal         0x1000DE1C
    // 0x151DF3CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1000DE1C(rdram, ctx);
        goto after_8;
    // 0x151DF3CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x151DF3D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151DF3D4: jal         0x1000EA94
    // 0x151DF3D8: lb          $a0, 0xBE9($a0)
    ctx->r4 = MEM_B(ctx->r4, 0XBE9);
    func_1000EA94(rdram, ctx);
        goto after_9;
    // 0x151DF3D8: lb          $a0, 0xBE9($a0)
    ctx->r4 = MEM_B(ctx->r4, 0XBE9);
    after_9:
    // 0x151DF3DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF3E0: sb          $v0, 0xA97($at)
    MEM_B(0XA97, ctx->r1) = ctx->r2;
    // 0x151DF3E4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_151DF3E8:
    // 0x151DF3E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DF3EC: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151DF3F0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DF3F4: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x151DF3F8: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
    // 0x151DF3FC: beql        $t7, $zero, L_151DF454
    if (ctx->r15 == 0) {
        // 0x151DF400: andi        $t5, $v1, 0x20
        ctx->r13 = ctx->r3 & 0X20;
            goto L_151DF454;
    }
    goto skip_2;
    // 0x151DF400: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
    skip_2:
    // 0x151DF404: lbu         $t9, -0x1CC($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1CC);
    // 0x151DF408: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x151DF40C: bne         $t9, $at, L_151DF450
    if (ctx->r25 != ctx->r1) {
        // 0x151DF410: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_151DF450;
    }
    // 0x151DF410: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF414: lwc1        $f6, -0x218($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X218);
    // 0x151DF418: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151DF41C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF420: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151DF424: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x151DF428: nop

    // 0x151DF42C: bc1fl       L_151DF454
    if (!c1cs) {
        // 0x151DF430: andi        $t5, $v1, 0x20
        ctx->r13 = ctx->r3 & 0X20;
            goto L_151DF454;
    }
    goto skip_3;
    // 0x151DF430: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
    skip_3:
    // 0x151DF434: sb          $t1, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r9;
    // 0x151DF438: lhu         $t2, 0x20($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X20);
    // 0x151DF43C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151DF440: andi        $t3, $t2, 0xFFCF
    ctx->r11 = ctx->r10 & 0XFFCF;
    // 0x151DF444: sh          $t3, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r11;
    // 0x151DF448: lw          $t4, -0x22C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X22C);
    // 0x151DF44C: lhu         $v1, 0x20($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X20);
L_151DF450:
    // 0x151DF450: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
L_151DF454:
    // 0x151DF454: beql        $t5, $zero, L_151DF46C
    if (ctx->r13 == 0) {
        // 0x151DF458: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_151DF46C;
    }
    goto skip_4;
    // 0x151DF458: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x151DF45C: jal         0x15007668
    // 0x151DF460: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_15007668(rdram, ctx);
        goto after_10;
    // 0x151DF460: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_10:
    // 0x151DF464: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151DF468: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_151DF46C:
    // 0x151DF46C: beq         $t8, $zero, L_151DF4AC
    if (ctx->r24 == 0) {
        // 0x151DF470: nop
    
            goto L_151DF4AC;
    }
    // 0x151DF470: nop

    // 0x151DF474: jal         0x151F2CDC
    // 0x151DF478: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151F2CDC(rdram, ctx);
        goto after_11;
    // 0x151DF478: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_11:
    // 0x151DF47C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DF480: bne         $v0, $at, L_151DF4A4
    if (ctx->r2 != ctx->r1) {
        // 0x151DF484: lw          $t0, 0x28($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X28);
            goto L_151DF4A4;
    }
    // 0x151DF484: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151DF488: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151DF48C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DF490: lbu         $t7, 0x1FF($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1FF);
    // 0x151DF494: bne         $t7, $zero, L_151DF4AC
    if (ctx->r15 != 0) {
        // 0x151DF498: nop
    
            goto L_151DF4AC;
    }
    // 0x151DF498: nop

    // 0x151DF49C: b           L_151DF4AC
    // 0x151DF4A0: sb          $t9, 0x1FF($t6)
    MEM_B(0X1FF, ctx->r14) = ctx->r25;
        goto L_151DF4AC;
    // 0x151DF4A0: sb          $t9, 0x1FF($t6)
    MEM_B(0X1FF, ctx->r14) = ctx->r25;
L_151DF4A4:
    // 0x151DF4A4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151DF4A8: sb          $zero, 0x1FF($t1)
    MEM_B(0X1FF, ctx->r9) = 0;
L_151DF4AC:
    // 0x151DF4AC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DF4B0: lb          $t2, -0x108($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X108);
    // 0x151DF4B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DF4B8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DF4BC: beql        $t2, $zero, L_151DF568
    if (ctx->r10 == 0) {
        // 0x151DF4C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151DF568;
    }
    goto skip_5;
    // 0x151DF4C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x151DF4C4: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151DF4C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151DF4CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF4D0: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
    // 0x151DF4D4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DF4D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DF4DC: andi        $t3, $v1, 0x20
    ctx->r11 = ctx->r3 & 0X20;
    // 0x151DF4E0: beq         $t3, $zero, L_151DF4F0
    if (ctx->r11 == 0) {
        // 0x151DF4E4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151DF4F0;
    }
    // 0x151DF4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DF4E8: sb          $t4, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r12;
    // 0x151DF4EC: lhu         $v1, 0x20($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X20);
L_151DF4F0:
    // 0x151DF4F0: andi        $t5, $v1, 0xFFDF
    ctx->r13 = ctx->r3 & 0XFFDF;
    // 0x151DF4F4: sh          $t5, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r13;
    // 0x151DF4F8: lb          $t8, -0x108($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X108);
    // 0x151DF4FC: beq         $t8, $zero, L_151DF52C
    if (ctx->r24 == 0) {
        // 0x151DF500: nop
    
            goto L_151DF52C;
    }
    // 0x151DF500: nop

    // 0x151DF504: jal         0x1504332C
    // 0x151DF508: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_12;
    // 0x151DF508: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_12:
    // 0x151DF50C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DF510: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x151DF514: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151DF518: addiu       $a3, $a3, -0x4800
    ctx->r7 = ADD32(ctx->r7, -0X4800);
    // 0x151DF51C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DF520: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x151DF524: jal         0x15042D94
    // 0x151DF528: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_13;
    // 0x151DF528: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_13:
L_151DF52C:
    // 0x151DF52C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151DF530: addiu       $v1, $v1, -0x1614
    ctx->r3 = ADD32(ctx->r3, -0X1614);
    // 0x151DF534: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x151DF538: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x151DF53C: lw          $v0, -0x6300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6300);
    // 0x151DF540: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151DF544: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151DF548: sll         $t9, $v0, 9
    ctx->r25 = S32(ctx->r2 << 9);
    // 0x151DF54C: bgez        $t9, L_151DF558
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151DF550: sll         $t1, $v0, 8
        ctx->r9 = S32(ctx->r2 << 8);
            goto L_151DF558;
    }
    // 0x151DF550: sll         $t1, $v0, 8
    ctx->r9 = S32(ctx->r2 << 8);
    // 0x151DF554: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_151DF558:
    // 0x151DF558: bgezl       $t1, L_151DF568
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151DF55C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151DF568;
    }
    goto skip_6;
    // 0x151DF55C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x151DF560: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
    // 0x151DF564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF568:
    // 0x151DF568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151DF56C: jr          $ra
    // 0x151DF570: nop

    return;
    return;
    // 0x151DF570: nop

;}
RECOMP_FUNC void func_15131D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131D9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15131DA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15131DA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15131DA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15131DAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15131DB0: lw          $a2, 0xAC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XAC);
    // 0x15131DB4: addiu       $t6, $s0, 0x38
    ctx->r14 = ADD32(ctx->r16, 0X38);
    // 0x15131DB8: addiu       $t7, $s0, 0x3C
    ctx->r15 = ADD32(ctx->r16, 0X3C);
    // 0x15131DBC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15131DC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15131DC4: addiu       $a0, $s0, 0xA8
    ctx->r4 = ADD32(ctx->r16, 0XA8);
    // 0x15131DC8: addiu       $a1, $s0, 0xAA
    ctx->r5 = ADD32(ctx->r16, 0XAA);
    // 0x15131DCC: jal         0x15131C84
    // 0x15131DD0: addiu       $a3, $s0, 0xB0
    ctx->r7 = ADD32(ctx->r16, 0XB0);
    func_15131C84(rdram, ctx);
        goto after_0;
    // 0x15131DD0: addiu       $a3, $s0, 0xB0
    ctx->r7 = ADD32(ctx->r16, 0XB0);
    after_0:
    // 0x15131DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15131DD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15131DDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15131DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15131DE4: jr          $ra
    // 0x15131DE8: nop

    return;
    return;
    // 0x15131DE8: nop

;}
RECOMP_FUNC void func_150CFBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFBEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150CFBF0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150CFBF4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150CFBF8: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x150CFBFC: bne         $a2, $at, L_150CFC30
    if (ctx->r6 != ctx->r1) {
        // 0x150CFC00: addiu       $v0, $a0, 0x70
        ctx->r2 = ADD32(ctx->r4, 0X70);
            goto L_150CFC30;
    }
    // 0x150CFC00: addiu       $v0, $a0, 0x70
    ctx->r2 = ADD32(ctx->r4, 0X70);
    // 0x150CFC04: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x150CFC08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CFC0C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x150CFC10: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x150CFC14: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x150CFC18: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x150CFC1C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x150CFC20: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x150CFC24: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150CFC28: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150CFC2C: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
L_150CFC30:
    // 0x150CFC30: jr          $ra
    // 0x150CFC34: nop

    return;
    return;
    // 0x150CFC34: nop

;}
RECOMP_FUNC void func_15071230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071238: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1507123C: jal         0x15070F60
    // 0x15071240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15070F60(rdram, ctx);
        goto after_0;
    // 0x15071240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x15071244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507124C: jr          $ra
    // 0x15071250: nop

    return;
    return;
    // 0x15071250: nop

;}
RECOMP_FUNC void func_15040884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040884: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040888: jr          $ra
    // 0x1504088C: nop

    return;
    return;
    // 0x1504088C: nop

;}
RECOMP_FUNC void func_160012B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x160012B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x160012B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x160012B8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x160012BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x160012C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x160012C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x160012C8: beq         $s1, $zero, L_16001320
    if (ctx->r17 == 0) {
        // 0x160012CC: lui         $t6, 0x1600
        ctx->r14 = S32(0X1600 << 16);
            goto L_16001320;
    }
    // 0x160012CC: lui         $t6, 0x1600
    ctx->r14 = S32(0X1600 << 16);
    // 0x160012D0: lw          $t6, 0x38A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X38A0);
    // 0x160012D4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x160012D8: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x160012DC: bne         $at, $zero, L_16001320
    if (ctx->r1 != 0) {
        // 0x160012E0: slti        $at, $a0, 0x341
        ctx->r1 = SIGNED(ctx->r4) < 0X341 ? 1 : 0;
            goto L_16001320;
    }
    // 0x160012E0: slti        $at, $a0, 0x341
    ctx->r1 = SIGNED(ctx->r4) < 0X341 ? 1 : 0;
    // 0x160012E4: beql        $at, $zero, L_16001324
    if (ctx->r1 == 0) {
        // 0x160012E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_16001324;
    }
    goto skip_0;
    // 0x160012E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x160012EC: jal         0x1600160C
    // 0x160012F0: nop

    func_1600160C(rdram, ctx);
        goto after_0;
    // 0x160012F0: nop

    after_0:
    // 0x160012F4: lbu         $s0, 0x0($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X0);
    // 0x160012F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x160012FC: beq         $s0, $zero, L_16001320
    if (ctx->r16 == 0) {
        // 0x16001300: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_16001320;
    }
    // 0x16001300: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_16001304:
    // 0x16001304: jal         0x160014F0
    // 0x16001308: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_160014F0(rdram, ctx);
        goto after_1;
    // 0x16001308: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_1:
    // 0x1600130C: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x16001310: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x16001314: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x16001318: bnel        $s0, $zero, L_16001304
    if (ctx->r16 != 0) {
        // 0x1600131C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_16001304;
    }
    goto skip_1;
    // 0x1600131C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_16001320:
    // 0x16001320: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_16001324:
    // 0x16001324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x16001328: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1600132C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x16001330: jr          $ra
    // 0x16001334: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x16001334: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151DA6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DA6F8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x151DA6FC: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x151DA700: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151DA704: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x151DA708: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151DA70C: lbu         $a2, 0xFF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XFF);
    // 0x151DA710: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151DA714: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x151DA718: addiu       $t9, $sp, 0xB0
    ctx->r25 = ADD32(ctx->r29, 0XB0);
    // 0x151DA71C: addiu       $t5, $a3, 0x10
    ctx->r13 = ADD32(ctx->r7, 0X10);
    // 0x151DA720: sb          $t8, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r24;
    // 0x151DA724: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151DA728: addiu       $t6, $zero, 0x35
    ctx->r14 = ADD32(0, 0X35);
    // 0x151DA72C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DA730: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151DA734: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151DA738: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151DA73C: addiu       $t2, $sp, 0x94
    ctx->r10 = ADD32(ctx->r29, 0X94);
    // 0x151DA740: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x151DA744: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151DA748: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151DA74C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151DA750: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151DA754: lw          $t3, 0x10C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10C);
    // 0x151DA758: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151DA75C: sh          $t5, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r13;
    // 0x151DA760: sh          $t6, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r14;
    // 0x151DA764: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x151DA768: sb          $t8, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r24;
    // 0x151DA76C: sw          $t3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r11;
    // 0x151DA770: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x151DA774: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151DA778: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151DA77C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x151DA780: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151DA784: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x151DA788: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151DA78C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151DA790: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151DA794: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x151DA798: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x151DA79C: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x151DA7A0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151DA7A4: lbu         $t6, -0x4BFC($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X4BFC);
    // 0x151DA7A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DA7AC: lwc1        $f6, -0x4B68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4B68);
    // 0x151DA7B0: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    // 0x151DA7B4: beq         $t6, $zero, L_151DA7C4
    if (ctx->r14 == 0) {
        // 0x151DA7B8: swc1        $f6, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
            goto L_151DA7C4;
    }
    // 0x151DA7B8: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x151DA7BC: b           L_151DA7C4
    // 0x151DA7C0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
        goto L_151DA7C4;
    // 0x151DA7C0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
L_151DA7C4:
    // 0x151DA7C4: lbu         $t7, -0x4CD0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X4CD0);
    // 0x151DA7C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DA7CC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151DA7D0: beq         $t7, $zero, L_151DA7E0
    if (ctx->r15 == 0) {
        // 0x151DA7D4: addiu       $a1, $sp, 0x90
        ctx->r5 = ADD32(ctx->r29, 0X90);
            goto L_151DA7E0;
    }
    // 0x151DA7D4: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x151DA7D8: b           L_151DA7E0
    // 0x151DA7DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151DA7E0;
    // 0x151DA7DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151DA7E0:
    // 0x151DA7E0: ori         $t8, $v0, 0x8
    ctx->r24 = ctx->r2 | 0X8;
    // 0x151DA7E4: or          $a0, $t8, $v1
    ctx->r4 = ctx->r24 | ctx->r3;
    // 0x151DA7E8: lbu         $t8, 0xEF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XEF);
    // 0x151DA7EC: lbu         $t9, -0x4C0C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X4C0C);
    // 0x151DA7F0: lbu         $t5, 0xE3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE3);
    // 0x151DA7F4: lh          $t6, 0x106($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X106);
    // 0x151DA7F8: lh          $t7, 0x10A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X10A);
    // 0x151DA7FC: ori         $t3, $a0, 0x40
    ctx->r11 = ctx->r4 | 0X40;
    // 0x151DA800: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x151DA804: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151DA808: sb          $t2, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r10;
    // 0x151DA80C: sb          $t9, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r25;
    // 0x151DA810: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    // 0x151DA814: sh          $t6, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r14;
    // 0x151DA818: beq         $t8, $zero, L_151DA834
    if (ctx->r24 == 0) {
        // 0x151DA81C: sh          $t7, 0xAE($sp)
        MEM_H(0XAE, ctx->r29) = ctx->r15;
            goto L_151DA834;
    }
    // 0x151DA81C: sh          $t7, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r15;
    // 0x151DA820: ori         $t3, $t4, 0x3
    ctx->r11 = ctx->r12 | 0X3;
    // 0x151DA824: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x151DA828: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x151DA82C: b           L_151DA840
    // 0x151DA830: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
        goto L_151DA840;
    // 0x151DA830: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_151DA834:
    // 0x151DA834: sb          $a0, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r4;
    // 0x151DA838: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151DA83C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_151DA840:
    // 0x151DA840: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151DA844: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151DA848: sb          $a2, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r6;
    // 0x151DA84C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x151DA850: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x151DA854: lbu         $t4, 0xFB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XFB);
    // 0x151DA858: lui         $t9, 0x22
    ctx->r25 = S32(0X22 << 16);
    // 0x151DA85C: lui         $t2, 0x5
    ctx->r10 = S32(0X5 << 16);
    // 0x151DA860: ori         $t9, $t9, 0x5
    ctx->r25 = ctx->r25 | 0X5;
    // 0x151DA864: ori         $t2, $t2, 0x600
    ctx->r10 = ctx->r10 | 0X600;
    // 0x151DA868: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151DA86C: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x151DA870: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x151DA874: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x151DA878: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x151DA87C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151DA880: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x151DA884: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x151DA888: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x151DA88C: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x151DA890: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x151DA894: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x151DA898: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x151DA89C: beq         $t4, $zero, L_151DA8B0
    if (ctx->r12 == 0) {
        // 0x151DA8A0: sb          $t3, 0x71($sp)
        MEM_B(0X71, ctx->r29) = ctx->r11;
            goto L_151DA8B0;
    }
    // 0x151DA8A0: sb          $t3, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r11;
    // 0x151DA8A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151DA8A8: b           L_151DA8B8
    // 0x151DA8AC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_151DA8B8;
    // 0x151DA8AC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151DA8B0:
    // 0x151DA8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DA8B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DA8B8:
    // 0x151DA8B8: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x151DA8BC: lbu         $t5, 0x113($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X113);
    // 0x151DA8C0: lw          $t6, 0x114($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X114);
    // 0x151DA8C4: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x151DA8C8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x151DA8CC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x151DA8D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151DA8D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151DA8D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151DA8DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151DA8E0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151DA8E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151DA8E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x151DA8EC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x151DA8F0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x151DA8F4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151DA8F8: jal         0x15147DA0
    // 0x151DA8FC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    func_15147DA0(rdram, ctx);
        goto after_0;
    // 0x151DA8FC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    after_0:
    // 0x151DA900: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151DA904: beq         $v0, $zero, L_151DA924
    if (ctx->r2 == 0) {
        // 0x151DA908: addiu       $a1, $sp, 0x84
        ctx->r5 = ADD32(ctx->r29, 0X84);
            goto L_151DA924;
    }
    // 0x151DA908: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x151DA90C: lw          $a0, 0x98($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X98);
    // 0x151DA910: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x151DA914: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151DA918: jal         0x10022EC0
    // 0x151DA91C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151DA91C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_1:
    // 0x151DA920: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
L_151DA924:
    // 0x151DA924: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151DA928: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151DA92C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x151DA930: jr          $ra
    // 0x151DA934: nop

    return;
    return;
    // 0x151DA934: nop

;}
RECOMP_FUNC void func_15100464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15100464: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15100468: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1510046C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x15100470: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15100474: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15100478: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1510047C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x15100480: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15100484: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x15100488: addiu       $s3, $s3, 0x324
    ctx->r19 = ADD32(ctx->r19, 0X324);
    // 0x1510048C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15100490: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15100494: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15100498: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510049C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x151004A0: lbu         $s0, -0x2BFB($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X2BFB);
    // 0x151004A4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x151004A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151004AC: sra         $t6, $s0, 2
    ctx->r14 = S32(SIGNED(ctx->r16) >> 2);
    // 0x151004B0: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x151004B4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x151004B8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151004BC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151004C0: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x151004C4: bne         $s1, $zero, L_151004D0
    if (ctx->r17 != 0) {
        // 0x151004C8: nop
    
            goto L_151004D0;
    }
    // 0x151004C8: nop

    // 0x151004CC: break       7
    do_break(353371340);
L_151004D0:
    // 0x151004D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151004D4: bne         $s1, $at, L_151004E8
    if (ctx->r17 != ctx->r1) {
        // 0x151004D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151004E8;
    }
    // 0x151004D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151004DC: bne         $s0, $at, L_151004E8
    if (ctx->r16 != ctx->r1) {
        // 0x151004E0: nop
    
            goto L_151004E8;
    }
    // 0x151004E0: nop

    // 0x151004E4: break       6
    do_break(353371364);
L_151004E8:
    // 0x151004E8: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x151004EC: jal         0x1510D0EC
    // 0x151004F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x151004F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151004F4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151004F8: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x151004FC: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x15100500: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x15100504: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15100508: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x1510050C: addiu       $t1, $s0, 0x1
    ctx->r9 = ADD32(ctx->r16, 0X1);
    // 0x15100510: div         $zero, $t1, $s1
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r17)));
    // 0x15100514: mfhi        $t2
    ctx->r10 = hi;
    // 0x15100518: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1510051C: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x15100520: bne         $s1, $zero, L_1510052C
    if (ctx->r17 != 0) {
        // 0x15100524: nop
    
            goto L_1510052C;
    }
    // 0x15100524: nop

    // 0x15100528: break       7
    do_break(353371432);
L_1510052C:
    // 0x1510052C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15100530: bne         $s1, $at, L_15100544
    if (ctx->r17 != ctx->r1) {
        // 0x15100534: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15100544;
    }
    // 0x15100534: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15100538: bne         $t1, $at, L_15100544
    if (ctx->r9 != ctx->r1) {
        // 0x1510053C: nop
    
            goto L_15100544;
    }
    // 0x1510053C: nop

    // 0x15100540: break       6
    do_break(353371456);
L_15100544:
    // 0x15100544: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x15100548: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1510054C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15100550: jal         0x1510D0EC
    // 0x15100554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_1;
    // 0x15100554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15100558: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x1510055C: lui         $t5, 0xDB06
    ctx->r13 = S32(0XDB06 << 16);
    // 0x15100560: ori         $t5, $t5, 0xC
    ctx->r13 = ctx->r13 | 0XC;
    // 0x15100564: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x15100568: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x1510056C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15100570: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x15100574: addiu       $s1, $s1, -0x1B00
    ctx->r17 = ADD32(ctx->r17, -0X1B00);
    // 0x15100578: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x1510057C: addiu       $s6, $zero, 0x24
    ctx->r22 = ADD32(0, 0X24);
    // 0x15100580: lui         $s5, 0xDB06
    ctx->r21 = S32(0XDB06 << 16);
L_15100584:
    // 0x15100584: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x15100588: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1510058C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15100590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15100594: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x15100598: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x1510059C: jal         0x1510D0EC
    // 0x151005A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_2;
    // 0x151005A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x151005A4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x151005A8: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x151005AC: or          $t0, $t9, $s5
    ctx->r8 = ctx->r25 | ctx->r21;
    // 0x151005B0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x151005B4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x151005B8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x151005BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x151005C0: bne         $s0, $s6, L_15100584
    if (ctx->r16 != ctx->r22) {
        // 0x151005C4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15100584;
    }
    // 0x151005C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151005C8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x151005CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151005D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151005D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151005D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151005DC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151005E0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151005E4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x151005E8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x151005EC: jr          $ra
    // 0x151005F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x151005F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_15178750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15178750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15178754: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15178758: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1517875C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15178760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15178764: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x15178768: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1517876C: sllv        $t0, $t9, $a2
    ctx->r8 = S32(ctx->r25 << (ctx->r6 & 31));
    // 0x15178770: lbu         $t8, 0x36($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X36);
    // 0x15178774: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15178778: and         $t1, $t8, $t0
    ctx->r9 = ctx->r24 & ctx->r8;
    // 0x1517877C: beq         $t1, $zero, L_15178794
    if (ctx->r9 == 0) {
        // 0x15178780: nop
    
            goto L_15178794;
    }
    // 0x15178780: nop

    // 0x15178784: jal         0x15168118
    // 0x15178788: nop

    func_15168118(rdram, ctx);
        goto after_0;
    // 0x15178788: nop

    after_0:
    // 0x1517878C: b           L_15178798
    // 0x15178790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15178798;
    // 0x15178790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15178794:
    // 0x15178794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15178798:
    // 0x15178798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1517879C: jr          $ra
    // 0x151787A0: nop

    return;
    return;
    // 0x151787A0: nop

    // 0x151787A4: jr          $ra
    // 0x151787A8: nop

    return;
    return;
    // 0x151787A8: nop

;}
RECOMP_FUNC void func_1507A3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A3CC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A3D0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A3D4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507A3D8: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507A3DC: sb          $t6, 0x229($t7)
    MEM_B(0X229, ctx->r15) = ctx->r14;
    // 0x1507A3E0: jr          $ra
    // 0x1507A3E4: nop

    return;
    return;
    // 0x1507A3E4: nop

;}
RECOMP_FUNC void func_150DA4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DA4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DA4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DA4E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150DA4EC: jal         0x150DA484
    // 0x150DA4F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150DA484(rdram, ctx);
        goto after_0;
    // 0x150DA4F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150DA4F4: jal         0x15147928
    // 0x150DA4F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x150DA4F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150DA4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150DA500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DA504: jr          $ra
    // 0x150DA508: nop

    return;
    return;
    // 0x150DA508: nop

;}
RECOMP_FUNC void func_15022024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022024: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x15022028: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x1502202C: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x15022030: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x15022034: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x15022038: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1502203C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x15022040: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022044: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x15022048: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1502204C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15022050: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15022054: beq         $t6, $at, L_15022064
    if (ctx->r14 == ctx->r1) {
        // 0x15022058: addu        $v1, $v1, $a3
        ctx->r3 = ADD32(ctx->r3, ctx->r7);
            goto L_15022064;
    }
    // 0x15022058: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x1502205C: b           L_1502217C
    // 0x15022060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1502217C;
    // 0x15022060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15022064:
    // 0x15022064: lbu         $v1, 0x363A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X363A);
    // 0x15022068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1502206C: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    // 0x15022070: blez        $v1, L_15022178
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15022074: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_15022178;
    }
    // 0x15022074: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15022078: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x1502207C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15022080: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15022084: addiu       $t0, $t0, 0x35F0
    ctx->r8 = ADD32(ctx->r8, 0X35F0);
    // 0x15022088: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1502208C: lw          $a1, 0x35C8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X35C8);
    // 0x15022090: addiu       $t2, $zero, 0x32C
    ctx->r10 = ADD32(0, 0X32C);
    // 0x15022094: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_15022098:
    // 0x15022098: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x1502209C: addu        $t8, $t0, $a0
    ctx->r24 = ADD32(ctx->r8, ctx->r4);
    // 0x150220A0: beql        $t7, $zero, L_1502216C
    if (ctx->r15 == 0) {
        // 0x150220A4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1502216C;
    }
    goto skip_0;
    // 0x150220A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x150220A8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x150220AC: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x150220B0: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    // 0x150220B4: lhu         $t4, 0x0($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X0);
    // 0x150220B8: bnel        $a3, $t4, L_1502216C
    if (ctx->r7 != ctx->r12) {
        // 0x150220BC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1502216C;
    }
    goto skip_1;
    // 0x150220BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x150220C0: multu       $s0, $t2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150220C4: lbu         $t8, 0x2($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X2);
    // 0x150220C8: mflo        $t5
    ctx->r13 = lo;
    // 0x150220CC: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x150220D0: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x150220D4: bnel        $t7, $t8, L_1502216C
    if (ctx->r15 != ctx->r24) {
        // 0x150220D8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1502216C;
    }
    goto skip_2;
    // 0x150220D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x150220DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150220E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150220E4: lwc1        $f12, 0x6A14($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6A14);
    // 0x150220E8: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x150220EC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150220F0: swc1        $f2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f2.u32l;
    // 0x150220F4: addiu       $t9, $t9, 0x3958
    ctx->r25 = ADD32(ctx->r25, 0X3958);
    // 0x150220F8: swc1        $f2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f2.u32l;
    // 0x150220FC: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x15022100: swc1        $f2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f2.u32l;
    // 0x15022104: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15022108: sll         $a1, $v0, 4
    ctx->r5 = S32(ctx->r2 << 4);
    // 0x1502210C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x15022110: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x15022114: addu        $a2, $t3, $a1
    ctx->r6 = ADD32(ctx->r11, ctx->r5);
    // 0x15022118: lwc1        $f0, 0x3C($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x1502211C: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x15022120: nop

    // 0x15022124: bc1tl       L_15022144
    if (c1cs) {
        // 0x15022128: lwc1        $f0, 0x40($a2)
        ctx->f0.u32l = MEM_W(ctx->r6, 0X40);
            goto L_15022144;
    }
    goto skip_3;
    // 0x15022128: lwc1        $f0, 0x40($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X40);
    skip_3:
    // 0x1502212C: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x15022130: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x15022134: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x15022138: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1502213C: addu        $a2, $t4, $a1
    ctx->r6 = ADD32(ctx->r12, ctx->r5);
    // 0x15022140: lwc1        $f0, 0x40($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X40);
L_15022144:
    // 0x15022144: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x15022148: nop

    // 0x1502214C: bc1t        L_15022160
    if (c1cs) {
        // 0x15022150: nop
    
            goto L_15022160;
    }
    // 0x15022150: nop

    // 0x15022154: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x15022158: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1502215C: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
L_15022160:
    // 0x15022160: b           L_1502217C
    // 0x15022164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1502217C;
    // 0x15022164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15022168: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1502216C:
    // 0x1502216C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15022170: bne         $at, $zero, L_15022098
    if (ctx->r1 != 0) {
        // 0x15022174: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_15022098;
    }
    // 0x15022174: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_15022178:
    // 0x15022178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502217C:
    // 0x1502217C: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x15022180: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x15022184: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x15022188: jr          $ra
    // 0x1502218C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1502218C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_1515BF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BF50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515BF54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515BF58: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x1515BF5C: jal         0x1514EDF0
    // 0x1515BF60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1515BF60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1515BF64: jal         0x15169804
    // 0x1515BF68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x1515BF68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1515BF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515BF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515BF74: jr          $ra
    // 0x1515BF78: nop

    return;
    return;
    // 0x1515BF78: nop

;}
RECOMP_FUNC void func_1516D378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D378: beq         $a0, $zero, L_1516D3BC
    if (ctx->r4 == 0) {
        // 0x1516D37C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1516D3BC;
    }
    // 0x1516D37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516D380: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x1516D384: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x1516D388: bne         $t6, $at, L_1516D3BC
    if (ctx->r14 != ctx->r1) {
        // 0x1516D38C: nop
    
            goto L_1516D3BC;
    }
    // 0x1516D38C: nop

    // 0x1516D390: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x1516D394: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x1516D398: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1516D39C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1516D3A0: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x1516D3A4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1516D3A8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x1516D3AC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1516D3B0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x1516D3B4: jr          $ra
    // 0x1516D3B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    return;
    return;
    // 0x1516D3B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_1516D3BC:
    // 0x1516D3BC: jr          $ra
    // 0x1516D3C0: nop

    return;
    return;
    // 0x1516D3C0: nop

;}
RECOMP_FUNC void func_150BF21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BF21C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x150BF220: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x150BF224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF228: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BF22C: lwc1        $f0, 0x110($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X110);
    // 0x150BF230: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150BF234: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150BF238: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x150BF23C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150BF240: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150BF244: lwc1        $f4, 0x7C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x150BF248: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x150BF24C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x150BF250: bne         $t6, $zero, L_150BF260
    if (ctx->r14 != 0) {
        // 0x150BF254: swc1        $f4, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
            goto L_150BF260;
    }
    // 0x150BF254: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x150BF258: b           L_150BF280
    // 0x150BF25C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150BF280;
    // 0x150BF25C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150BF260:
    // 0x150BF260: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150BF264: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x150BF268: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150BF26C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BF270: bne         $t7, $at, L_150BF280
    if (ctx->r15 != ctx->r1) {
        // 0x150BF274: nop
    
            goto L_150BF280;
    }
    // 0x150BF274: nop

    // 0x150BF278: b           L_150BF280
    // 0x150BF27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150BF280;
    // 0x150BF27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150BF280:
    // 0x150BF280: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150BF284: lbu         $t8, -0x164C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X164C);
    // 0x150BF288: beq         $t8, $zero, L_150BF2AC
    if (ctx->r24 == 0) {
        // 0x150BF28C: nop
    
            goto L_150BF2AC;
    }
    // 0x150BF28C: nop

    // 0x150BF290: lw          $t9, 0x3C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X3C);
    // 0x150BF294: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x150BF298: nop

    // 0x150BF29C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BF2A0: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x150BF2A4: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF2A8: swc1        $f10, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f10.u32l;
L_150BF2AC:
    // 0x150BF2AC: bnel        $v0, $zero, L_150BF5DC
    if (ctx->r2 != 0) {
        // 0x150BF2B0: swc1        $f16, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
            goto L_150BF5DC;
    }
    goto skip_0;
    // 0x150BF2B0: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    skip_0:
    // 0x150BF2B4: lw          $t0, 0x3C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X3C);
    // 0x150BF2B8: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF2BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BF2C0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150BF2C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150BF2C8: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150BF2CC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150BF2D0: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x150BF2D4: addiu       $t1, $zero, 0x7D0
    ctx->r9 = ADD32(0, 0X7D0);
    // 0x150BF2D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF2DC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150BF2E0: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x150BF2E4: nop

    // 0x150BF2E8: bc1fl       L_150BF354
    if (!c1cs) {
        // 0x150BF2EC: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_150BF354;
    }
    goto skip_1;
    // 0x150BF2EC: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_1:
    // 0x150BF2F0: lwc1        $f8, 0x80($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X80);
    // 0x150BF2F4: swc1        $f16, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f16.u32l;
    // 0x150BF2F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF2FC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x150BF300: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
    // 0x150BF304: lwc1        $f4, 0x114($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X114);
    // 0x150BF308: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF30C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BF310: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BF314: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150BF318: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150BF31C: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150BF320: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BF324: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150BF328: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x150BF32C: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x150BF330: bc1fl       L_150BF340
    if (!c1cs) {
        // 0x150BF334: sw          $t1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r9;
            goto L_150BF340;
    }
    goto skip_2;
    // 0x150BF334: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    skip_2:
    // 0x150BF338: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x150BF33C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
L_150BF340:
    // 0x150BF340: jal         0x15114D24
    // 0x150BF344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15114D24(rdram, ctx);
        goto after_0;
    // 0x150BF344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x150BF348: b           L_150BF52C
    // 0x150BF34C: nop

        goto L_150BF52C;
    // 0x150BF34C: nop

    // 0x150BF350: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_150BF354:
    // 0x150BF354: lwc1        $f6, 0x118($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X118);
    // 0x150BF358: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150BF35C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BF360: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x150BF364: swc1        $f16, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f16.u32l;
    // 0x150BF368: bc1f        L_150BF398
    if (!c1cs) {
        // 0x150BF36C: lwc1        $f2, 0x84($s1)
        ctx->f2.u32l = MEM_W(ctx->r17, 0X84);
            goto L_150BF398;
    }
    // 0x150BF36C: lwc1        $f2, 0x84($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X84);
    // 0x150BF370: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x150BF374: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BF378: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150BF37C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x150BF380: nop

    // 0x150BF384: bc1fl       L_150BF3EC
    if (!c1cs) {
        // 0x150BF388: abs.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = fabsf(ctx->f2.fl);
            goto L_150BF3EC;
    }
    goto skip_3;
    // 0x150BF388: abs.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = fabsf(ctx->f2.fl);
    skip_3:
    // 0x150BF38C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BF390: b           L_150BF3E8
    // 0x150BF394: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
        goto L_150BF3E8;
    // 0x150BF394: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
L_150BF398:
    // 0x150BF398: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BF39C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BF3A0: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x150BF3A4: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x150BF3A8: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150BF3AC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x150BF3B0: addiu       $t2, $zero, 0x7D0
    ctx->r10 = ADD32(0, 0X7D0);
    // 0x150BF3B4: bc1f        L_150BF3C8
    if (!c1cs) {
        // 0x150BF3B8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_150BF3C8;
    }
    // 0x150BF3B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150BF3BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BF3C0: nop

    // 0x150BF3C4: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_150BF3C8:
    // 0x150BF3C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150BF3CC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150BF3D0: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x150BF3D4: jal         0x15114D24
    // 0x150BF3D8: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    func_15114D24(rdram, ctx);
        goto after_1;
    // 0x150BF3D8: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x150BF3DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BF3E0: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x150BF3E4: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
L_150BF3E8:
    // 0x150BF3E8: abs.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = fabsf(ctx->f2.fl);
L_150BF3EC:
    // 0x150BF3EC: abs.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = fabsf(ctx->f14.fl);
    // 0x150BF3F0: swc1        $f2, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f2.u32l;
    // 0x150BF3F4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150BF3F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150BF3FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BF400: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150BF404: bc1f        L_150BF4CC
    if (!c1cs) {
        // 0x150BF408: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150BF4CC;
    }
    // 0x150BF408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150BF40C: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150BF410: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x150BF414: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BF418: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150BF41C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF420: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x150BF424: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF428: addiu       $t4, $zero, 0x7D00
    ctx->r12 = ADD32(0, 0X7D00);
    // 0x150BF42C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BF430: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x150BF434: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150BF438: addiu       $a2, $zero, 0x3E80
    ctx->r6 = ADD32(0, 0X3E80);
    // 0x150BF43C: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    // 0x150BF440: bc1f        L_150BF458
    if (!c1cs) {
        // 0x150BF444: swc1        $f18, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
            goto L_150BF458;
    }
    // 0x150BF444: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x150BF448: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x150BF44C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BF450: b           L_150BF464
    // 0x150BF454: swc1        $f8, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f8.u32l;
        goto L_150BF464;
    // 0x150BF454: swc1        $f8, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f8.u32l;
L_150BF458:
    // 0x150BF458: lwc1        $f6, 0x11C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X11C);
    // 0x150BF45C: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x150BF460: swc1        $f10, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f10.u32l;
L_150BF464:
    // 0x150BF464: lbu         $t5, 0x73($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X73);
    // 0x150BF468: lhu         $t9, 0x74($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X74);
    // 0x150BF46C: sw          $t4, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r12;
    // 0x150BF470: andi        $t7, $t5, 0xFFFC
    ctx->r15 = ctx->r13 & 0XFFFC;
    // 0x150BF474: sb          $t7, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r15;
    // 0x150BF478: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x150BF47C: bne         $t9, $zero, L_150BF49C
    if (ctx->r25 != 0) {
        // 0x150BF480: sb          $t8, 0x73($s1)
        MEM_B(0X73, ctx->r17) = ctx->r24;
            goto L_150BF49C;
    }
    // 0x150BF480: sb          $t8, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r24;
    // 0x150BF484: addiu       $t0, $zero, 0xFA0
    ctx->r8 = ADD32(0, 0XFA0);
    // 0x150BF488: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150BF48C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BF490: jal         0x15114D24
    // 0x150BF494: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x150BF494: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x150BF498: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
L_150BF49C:
    // 0x150BF49C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150BF4A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BF4A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BF4A8: addiu       $a1, $zero, 0x3E80
    ctx->r5 = ADD32(0, 0X3E80);
    // 0x150BF4AC: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x150BF4B0: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x150BF4B4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BF4B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150BF4BC: jal         0x15114F04
    // 0x150BF4C0: nop

    func_15114F04(rdram, ctx);
        goto after_3;
    // 0x150BF4C0: nop

    after_3:
    // 0x150BF4C4: b           L_150BF520
    // 0x150BF4C8: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
        goto L_150BF520;
    // 0x150BF4C8: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
L_150BF4CC:
    // 0x150BF4CC: lw          $t2, 0x3C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X3C);
    // 0x150BF4D0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x150BF4D4: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x150BF4D8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x150BF4DC: nop

    // 0x150BF4E0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BF4E4: bc1f        L_150BF4F0
    if (!c1cs) {
        // 0x150BF4E8: swc1        $f10, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
            goto L_150BF4F0;
    }
    // 0x150BF4E8: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x150BF4EC: sw          $t3, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r11;
L_150BF4F0:
    // 0x150BF4F0: lbu         $t4, 0x73($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X73);
    // 0x150BF4F4: swc1        $f16, 0x124($s1)
    MEM_W(0X124, ctx->r17) = ctx->f16.u32l;
    // 0x150BF4F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150BF4FC: andi        $t6, $t4, 0xFFFC
    ctx->r14 = ctx->r12 & 0XFFFC;
    // 0x150BF500: sb          $t6, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r14;
    // 0x150BF504: ori         $t7, $t6, 0x3
    ctx->r15 = ctx->r14 | 0X3;
    // 0x150BF508: sb          $t7, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r15;
    // 0x150BF50C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x150BF510: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BF514: jal         0x15114D24
    // 0x150BF518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15114D24(rdram, ctx);
        goto after_4;
    // 0x150BF518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x150BF51C: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
L_150BF520:
    // 0x150BF520: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF524: swc1        $f2, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f2.u32l;
    // 0x150BF528: swc1        $f18, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f18.u32l;
L_150BF52C:
    // 0x150BF52C: jal         0x15047D60
    // 0x150BF530: lwc1        $f12, 0x80($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X80);
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x150BF530: lwc1        $f12, 0x80($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X80);
    after_5:
    // 0x150BF534: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150BF538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BF53C: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150BF540: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150BF544: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150BF548: mul.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150BF54C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BF550: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x150BF554: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x150BF558: lwc1        $f6, 0x80($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X80);
    // 0x150BF55C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150BF560: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150BF564: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x150BF568: lwc1        $f10, 0x120($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X120);
    // 0x150BF56C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x150BF570: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150BF574: jal         0x15047D60
    // 0x150BF578: nop

    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x150BF578: nop

    after_6:
    // 0x150BF57C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150BF580: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BF584: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150BF588: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150BF58C: lwc1        $f12, 0x80($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X80);
    // 0x150BF590: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150BF594: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150BF598: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150BF59C: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x150BF5A0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150BF5A4: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150BF5A8: jal         0x15047C00
    // 0x150BF5AC: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x150BF5AC: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x150BF5B0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150BF5B4: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150BF5B8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150BF5BC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150BF5C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BF5C4: sub.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x150BF5C8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150BF5CC: add.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x150BF5D0: b           L_150BF5DC
    // 0x150BF5D4: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
        goto L_150BF5DC;
    // 0x150BF5D4: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x150BF5D8: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
L_150BF5DC:
    // 0x150BF5DC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150BF5E0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150BF5E4: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x150BF5E8: jal         0x150A7DA0
    // 0x150BF5EC: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    func_150A7DA0(rdram, ctx);
        goto after_8;
    // 0x150BF5EC: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    after_8:
    // 0x150BF5F0: lwc1        $f10, 0x2C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x150BF5F4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x150BF5F8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x150BF5FC: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x150BF600: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150BF604: lwc1        $f18, 0x30($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X30);
    // 0x150BF608: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x150BF60C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BF610: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x150BF614: lwc1        $f4, 0x34($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150BF618: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150BF61C: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x150BF620: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150BF624: nop

    // 0x150BF628: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BF62C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150BF630: lh          $t9, 0x12($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X12);
    // 0x150BF634: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150BF638: nop

    // 0x150BF63C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150BF640: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x150BF644: lh          $t0, 0x14($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X14);
    // 0x150BF648: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x150BF64C: nop

    // 0x150BF650: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BF654: jal         0x15043F6C
    // 0x150BF658: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_15043F6C(rdram, ctx);
        goto after_9;
    // 0x150BF658: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x150BF65C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x150BF660: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150BF664: jal         0x150A7A48
    // 0x150BF668: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_10;
    // 0x150BF668: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x150BF66C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150BF670: lbu         $t1, -0x1640($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1640);
    // 0x150BF674: lhu         $t4, 0x16($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X16);
    // 0x150BF678: lw          $s0, 0x28($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X28);
    // 0x150BF67C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x150BF680: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x150BF684: lw          $v0, 0x20($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X20);
    // 0x150BF688: blez        $t4, L_150BF74C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x150BF68C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150BF74C;
    }
    // 0x150BF68C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150BF690: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
L_150BF694:
    // 0x150BF694: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x150BF698: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x150BF69C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x150BF6A0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150BF6A4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150BF6A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BF6AC: addiu       $t8, $sp, 0xE8
    ctx->r24 = ADD32(ctx->r29, 0XE8);
    // 0x150BF6B0: addiu       $t9, $sp, 0xE4
    ctx->r25 = ADD32(ctx->r29, 0XE4);
    // 0x150BF6B4: addiu       $t0, $sp, 0xE0
    ctx->r8 = ADD32(ctx->r29, 0XE0);
    // 0x150BF6B8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150BF6BC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150BF6C0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150BF6C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150BF6C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150BF6CC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x150BF6D0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150BF6D4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150BF6D8: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x150BF6DC: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x150BF6E0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150BF6E4: jal         0x150A7960
    // 0x150BF6E8: nop

    func_150A7960(rdram, ctx);
        goto after_11;
    // 0x150BF6E8: nop

    after_11:
    // 0x150BF6EC: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150BF6F0: lw          $v0, 0xF4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF4);
    // 0x150BF6F4: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x150BF6F8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BF6FC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x150BF700: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150BF704: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x150BF708: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150BF70C: nop

    // 0x150BF710: sh          $t2, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r10;
    // 0x150BF714: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150BF718: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150BF71C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150BF720: nop

    // 0x150BF724: sh          $t4, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = ctx->r12;
    // 0x150BF728: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x150BF72C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150BF730: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150BF734: nop

    // 0x150BF738: sh          $t6, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r14;
    // 0x150BF73C: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    // 0x150BF740: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150BF744: bnel        $at, $zero, L_150BF694
    if (ctx->r1 != 0) {
        // 0x150BF748: lh          $t5, 0x0($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X0);
            goto L_150BF694;
    }
    goto skip_4;
    // 0x150BF748: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
    skip_4:
L_150BF74C:
    // 0x150BF74C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150BF750: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x150BF754: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x150BF758: jr          $ra
    // 0x150BF75C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x150BF75C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_15062800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062800: addiu       $sp, $sp, -0x378
    ctx->r29 = ADD32(ctx->r29, -0X378);
    // 0x15062804: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15062808: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1506280C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15062810: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15062814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15062818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1506281C: jal         0x15146508
    // 0x15062820: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_15146508(rdram, ctx);
        goto after_0;
    // 0x15062820: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x15062824: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15062828: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x1506282C: jal         0x10023A10
    // 0x15062830: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x15062830: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    after_1:
    // 0x15062834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15062838: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1506283C: jal         0x10023A10
    // 0x15062840: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    bcopy_recomp(rdram, ctx);
        goto after_2;
    // 0x15062840: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    after_2:
    // 0x15062844: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x15062848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1506284C: jal         0x10023A10
    // 0x15062850: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x15062850: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    after_3:
    // 0x15062854: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15062858: addiu       $t3, $t3, -0x3D30
    ctx->r11 = ADD32(ctx->r11, -0X3D30);
    // 0x1506285C: addiu       $t4, $zero, 0x32C
    ctx->r12 = ADD32(0, 0X32C);
    // 0x15062860: subu        $t6, $s1, $t3
    ctx->r14 = SUB32(ctx->r17, ctx->r11);
    // 0x15062864: div         $zero, $t6, $t4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r12)));
    // 0x15062868: mflo        $a3
    ctx->r7 = lo;
    // 0x1506286C: subu        $t9, $s0, $t3
    ctx->r25 = SUB32(ctx->r16, ctx->r11);
    // 0x15062870: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x15062874: div         $zero, $t9, $t4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r12)));
    // 0x15062878: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x1506287C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15062880: addiu       $t1, $a3, 0x1
    ctx->r9 = ADD32(ctx->r7, 0X1);
    // 0x15062884: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x15062888: addiu       $t0, $t0, -0x4010
    ctx->r8 = ADD32(ctx->r8, -0X4010);
    // 0x1506288C: sb          $a3, 0x127($s1)
    MEM_B(0X127, ctx->r17) = ctx->r7;
    // 0x15062890: sb          $t1, 0x3B($s1)
    MEM_B(0X3B, ctx->r17) = ctx->r9;
    // 0x15062894: sb          $a3, 0x13F($s1)
    MEM_B(0X13F, ctx->r17) = ctx->r7;
    // 0x15062898: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x1506289C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x150628A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x150628A4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x150628A8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x150628AC: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x150628B0: sw          $t8, 0x318($s1)
    MEM_W(0X318, ctx->r17) = ctx->r24;
    // 0x150628B4: mflo        $a2
    ctx->r6 = lo;
    // 0x150628B8: addiu       $t2, $a2, 0x1
    ctx->r10 = ADD32(ctx->r6, 0X1);
    // 0x150628BC: sb          $a2, 0x127($s0)
    MEM_B(0X127, ctx->r16) = ctx->r6;
    // 0x150628C0: sb          $t2, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r10;
    // 0x150628C4: sb          $a2, 0x13F($s0)
    MEM_B(0X13F, ctx->r16) = ctx->r6;
    // 0x150628C8: sw          $zero, 0x318($s0)
    MEM_W(0X318, ctx->r16) = 0;
    // 0x150628CC: lw          $t5, 0x144($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X144);
    // 0x150628D0: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x150628D4: bne         $t4, $zero, L_150628E0
    if (ctx->r12 != 0) {
        // 0x150628D8: nop
    
            goto L_150628E0;
    }
    // 0x150628D8: nop

    // 0x150628DC: break       7
    do_break(352725212);
L_150628E0:
    // 0x150628E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150628E4: bne         $t4, $at, L_150628F8
    if (ctx->r12 != ctx->r1) {
        // 0x150628E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150628F8;
    }
    // 0x150628E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150628EC: bne         $t6, $at, L_150628F8
    if (ctx->r14 != ctx->r1) {
        // 0x150628F0: nop
    
            goto L_150628F8;
    }
    // 0x150628F0: nop

    // 0x150628F4: break       6
    do_break(352725236);
L_150628F8:
    // 0x150628F8: sw          $t5, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r13;
    // 0x150628FC: sw          $v0, 0x144($s1)
    MEM_W(0X144, ctx->r17) = ctx->r2;
    // 0x15062900: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x15062904: lw          $t6, 0x31C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X31C);
    // 0x15062908: bne         $t4, $zero, L_15062914
    if (ctx->r12 != 0) {
        // 0x1506290C: nop
    
            goto L_15062914;
    }
    // 0x1506290C: nop

    // 0x15062910: break       7
    do_break(352725264);
L_15062914:
    // 0x15062914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15062918: bne         $t4, $at, L_1506292C
    if (ctx->r12 != ctx->r1) {
        // 0x1506291C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1506292C;
    }
    // 0x1506291C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15062920: bne         $t9, $at, L_1506292C
    if (ctx->r25 != ctx->r1) {
        // 0x15062924: nop
    
            goto L_1506292C;
    }
    // 0x15062924: nop

    // 0x15062928: break       6
    do_break(352725288);
L_1506292C:
    // 0x1506292C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15062930: sw          $t6, 0x3D4($t8)
    MEM_W(0X3D4, ctx->r24) = ctx->r14;
    // 0x15062934: lw          $t9, 0x31C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X31C);
    // 0x15062938: sb          $zero, 0x197($t9)
    MEM_B(0X197, ctx->r25) = 0;
    // 0x1506293C: lbu         $a1, 0x3B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3B);
    // 0x15062940: lbu         $a0, 0x3B($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3B);
    // 0x15062944: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15062948: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1506294C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15062950: jal         0x15033EC4
    // 0x15062954: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_15033EC4(rdram, ctx);
        goto after_4;
    // 0x15062954: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_4:
    // 0x15062958: lw          $a0, 0x2D4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2D4);
    // 0x1506295C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15062960: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x15062964: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x15062968: beq         $a0, $zero, L_15062998
    if (ctx->r4 == 0) {
        // 0x1506296C: lw          $t2, 0x20($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X20);
            goto L_15062998;
    }
    // 0x1506296C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x15062970: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15062974: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15062978: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1506297C: jal         0x1516972C
    // 0x15062980: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x15062980: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_5:
    // 0x15062984: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15062988: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1506298C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x15062990: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x15062994: sw          $zero, 0x2D4($s1)
    MEM_W(0X2D4, ctx->r17) = 0;
L_15062998:
    // 0x15062998: lw          $a0, 0x2D4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2D4);
    // 0x1506299C: beql        $a0, $zero, L_150629D0
    if (ctx->r4 == 0) {
        // 0x150629A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150629D0;
    }
    goto skip_0;
    // 0x150629A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x150629A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x150629A8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x150629AC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150629B0: jal         0x1516972C
    // 0x150629B4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x150629B4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_6:
    // 0x150629B8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x150629BC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x150629C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x150629C4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x150629C8: sw          $zero, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = 0;
    // 0x150629CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_150629D0:
    // 0x150629D0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x150629D4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x150629D8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150629DC: jal         0x150615DC
    // 0x150629E0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_150615DC(rdram, ctx);
        goto after_7;
    // 0x150629E0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_7:
    // 0x150629E4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150629E8: addiu       $t3, $t3, -0x3D30
    ctx->r11 = ADD32(ctx->r11, -0X3D30);
    // 0x150629EC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x150629F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x150629F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x150629F8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x150629FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15062A00: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x15062A04: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
L_15062A08:
    // 0x15062A08: beql        $a0, $a3, L_15062A5C
    if (ctx->r4 == ctx->r7) {
        // 0x15062A0C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15062A5C;
    }
    goto skip_1;
    // 0x15062A0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x15062A10: beql        $a0, $a2, L_15062A5C
    if (ctx->r4 == ctx->r6) {
        // 0x15062A14: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15062A5C;
    }
    goto skip_2;
    // 0x15062A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x15062A18: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15062A1C: mflo        $t5
    ctx->r13 = lo;
    // 0x15062A20: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x15062A24: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15062A28: beql        $t7, $zero, L_15062A5C
    if (ctx->r15 == 0) {
        // 0x15062A2C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15062A5C;
    }
    goto skip_3;
    // 0x15062A2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x15062A30: lbu         $v0, 0x65($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X65);
    // 0x15062A34: beq         $v0, $zero, L_15062A58
    if (ctx->r2 == 0) {
        // 0x15062A38: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_15062A58;
    }
    // 0x15062A38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15062A3C: bne         $v0, $a3, L_15062A4C
    if (ctx->r2 != ctx->r7) {
        // 0x15062A40: nop
    
            goto L_15062A4C;
    }
    // 0x15062A40: nop

    // 0x15062A44: b           L_15062A58
    // 0x15062A48: sb          $t2, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r10;
        goto L_15062A58;
    // 0x15062A48: sb          $t2, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r10;
L_15062A4C:
    // 0x15062A4C: bnel        $v0, $a2, L_15062A5C
    if (ctx->r2 != ctx->r6) {
        // 0x15062A50: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15062A5C;
    }
    goto skip_4;
    // 0x15062A50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x15062A54: sb          $t1, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r9;
L_15062A58:
    // 0x15062A58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15062A5C:
    // 0x15062A5C: bne         $a0, $a1, L_15062A08
    if (ctx->r4 != ctx->r5) {
        // 0x15062A60: nop
    
            goto L_15062A08;
    }
    // 0x15062A60: nop

    // 0x15062A64: lbu         $v1, 0x13C($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X13C);
    // 0x15062A68: addiu       $t8, $a3, 0x64
    ctx->r24 = ADD32(ctx->r7, 0X64);
    // 0x15062A6C: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x15062A70: bne         $at, $zero, L_15062AA8
    if (ctx->r1 != 0) {
        // 0x15062A74: addiu       $v0, $v1, -0x64
        ctx->r2 = ADD32(ctx->r3, -0X64);
            goto L_15062AA8;
    }
    // 0x15062A74: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x15062A78: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x15062A7C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x15062A80: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15062A84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15062A88: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15062A8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15062A90: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15062A94: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15062A98: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15062A9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15062AA0: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x15062AA4: sb          $t8, 0x13D($t5)
    MEM_B(0X13D, ctx->r13) = ctx->r24;
L_15062AA8:
    // 0x15062AA8: jal         0x150627D4
    // 0x15062AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150627D4(rdram, ctx);
        goto after_8;
    // 0x15062AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x15062AB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15062AB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15062AB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15062ABC: jr          $ra
    // 0x15062AC0: addiu       $sp, $sp, 0x378
    ctx->r29 = ADD32(ctx->r29, 0X378);
    return;
    return;
    // 0x15062AC0: addiu       $sp, $sp, 0x378
    ctx->r29 = ADD32(ctx->r29, 0X378);
;}
RECOMP_FUNC void func_151B8DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8DB0: addiu       $sp, $sp, -0x1C0
    ctx->r29 = ADD32(ctx->r29, -0X1C0);
    // 0x151B8DB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B8DB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151B8DBC: lwc1        $f0, -0x5AC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AC0);
    // 0x151B8DC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151B8DC4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151B8DC8: sw          $a0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r4;
    // 0x151B8DCC: sw          $a1, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r5;
    // 0x151B8DD0: sw          $a2, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r6;
    // 0x151B8DD4: sw          $a3, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r7;
    // 0x151B8DD8: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    // 0x151B8DDC: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    // 0x151B8DE0: jal         0x150ADA68
    // 0x151B8DE4: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151B8DE4: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x151B8DE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B8DEC: lwc1        $f12, -0x5ABC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5ABC);
    // 0x151B8DF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B8DF4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151B8DF8: lbu         $v1, 0x1C7($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1C7);
    // 0x151B8DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B8E00: lwc1        $f4, -0x5AB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5AB8);
    // 0x151B8E04: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151B8E08: addiu       $t7, $t7, -0x5AD8
    ctx->r15 = ADD32(ctx->r15, -0X5AD8);
    // 0x151B8E0C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x151B8E10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151B8E14: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x151B8E18: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B8E1C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151B8E20: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x151B8E24: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151B8E28: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x151B8E2C: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x151B8E30: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x151B8E34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151B8E38: addiu       $t0, $t0, -0x5B20
    ctx->r8 = ADD32(ctx->r8, -0X5B20);
    // 0x151B8E3C: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x151B8E40: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x151B8E44: swc1        $f12, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f12.u32l;
    // 0x151B8E48: swc1        $f12, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f12.u32l;
    // 0x151B8E4C: swc1        $f20, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f20.u32l;
    // 0x151B8E50: swc1        $f20, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f20.u32l;
    // 0x151B8E54: swc1        $f20, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f20.u32l;
    // 0x151B8E58: swc1        $f20, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f20.u32l;
    // 0x151B8E5C: swc1        $f20, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f20.u32l;
    // 0x151B8E60: swc1        $f2, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E64: swc1        $f2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E68: swc1        $f2, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E6C: swc1        $f2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E70: swc1        $f2, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E74: swc1        $f2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f2.u32l;
    // 0x151B8E78: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    // 0x151B8E7C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151B8E80: addiu       $t8, $sp, 0x168
    ctx->r24 = ADD32(ctx->r29, 0X168);
    // 0x151B8E84: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x151B8E88: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151B8E8C: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x151B8E90: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x151B8E94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151B8E98: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x151B8E9C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151B8EA0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151B8EA4: sh          $t5, 0x194($sp)
    MEM_H(0X194, ctx->r29) = ctx->r13;
    // 0x151B8EA8: sh          $t6, 0x196($sp)
    MEM_H(0X196, ctx->r29) = ctx->r14;
    // 0x151B8EAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x151B8EB0: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EB4: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EB8: swc1        $f2, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EBC: swc1        $f2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EC0: swc1        $f2, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EC4: swc1        $f2, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f2.u32l;
    // 0x151B8EC8: jal         0x1510F800
    // 0x151B8ECC: swc1        $f2, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f2.u32l;
    func_1510F800(rdram, ctx);
        goto after_1;
    // 0x151B8ECC: swc1        $f2, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x151B8ED0: lwc1        $f16, 0x168($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X168);
    // 0x151B8ED4: lwc1        $f4, 0x170($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X170);
    // 0x151B8ED8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151B8EDC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B8EE0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x151B8EE4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x151B8EE8: jal         0x1510FD20
    // 0x151B8EEC: nop

    func_1510FD20(rdram, ctx);
        goto after_2;
    // 0x151B8EEC: nop

    after_2:
    // 0x151B8EF0: beq         $v0, $zero, L_151B8F00
    if (ctx->r2 == 0) {
        // 0x151B8EF4: sw          $v0, 0x19C($sp)
        MEM_W(0X19C, ctx->r29) = ctx->r2;
            goto L_151B8F00;
    }
    // 0x151B8EF4: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x151B8EF8: b           L_151B8F04
    // 0x151B8EFC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_151B8F04;
    // 0x151B8EFC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_151B8F00:
    // 0x151B8F00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B8F04:
    // 0x151B8F04: lbu         $t7, 0x1CB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1CB);
    // 0x151B8F08: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x151B8F0C: ori         $t3, $v0, 0x900
    ctx->r11 = ctx->r2 | 0X900;
    // 0x151B8F10: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B8F14: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x151B8F18: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x151B8F1C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151B8F20: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151B8F24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B8F28: sw          $t3, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r11;
    // 0x151B8F2C: sb          $zero, 0x198($sp)
    MEM_B(0X198, ctx->r29) = 0;
    // 0x151B8F30: sb          $t2, 0x1A0($sp)
    MEM_B(0X1A0, ctx->r29) = ctx->r10;
    // 0x151B8F34: sb          $t8, 0x1A1($sp)
    MEM_B(0X1A1, ctx->r29) = ctx->r24;
    // 0x151B8F38: sb          $zero, 0x1A2($sp)
    MEM_B(0X1A2, ctx->r29) = 0;
    // 0x151B8F3C: sb          $zero, 0x1A3($sp)
    MEM_B(0X1A3, ctx->r29) = 0;
    // 0x151B8F40: sb          $zero, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = 0;
    // 0x151B8F44: sb          $zero, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = 0;
    // 0x151B8F48: sb          $zero, 0x1A6($sp)
    MEM_B(0X1A6, ctx->r29) = 0;
    // 0x151B8F4C: sb          $zero, 0x1A7($sp)
    MEM_B(0X1A7, ctx->r29) = 0;
    // 0x151B8F50: sb          $t1, 0x1A8($sp)
    MEM_B(0X1A8, ctx->r29) = ctx->r9;
    // 0x151B8F54: sb          $t4, 0x1AA($sp)
    MEM_B(0X1AA, ctx->r29) = ctx->r12;
    // 0x151B8F58: sw          $zero, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = 0;
    // 0x151B8F5C: sb          $zero, 0x1B0($sp)
    MEM_B(0X1B0, ctx->r29) = 0;
    // 0x151B8F60: sh          $t5, 0x1B2($sp)
    MEM_H(0X1B2, ctx->r29) = ctx->r13;
    // 0x151B8F64: sh          $t6, 0x1B4($sp)
    MEM_H(0X1B4, ctx->r29) = ctx->r14;
    // 0x151B8F68: addiu       $a0, $sp, 0x140
    ctx->r4 = ADD32(ctx->r29, 0X140);
    // 0x151B8F6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151B8F70: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151B8F74: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    // 0x151B8F78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B8F7C: jal         0x15132A4C
    // 0x151B8F80: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15132A4C(rdram, ctx);
        goto after_3;
    // 0x151B8F80: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_3:
    // 0x151B8F84: beq         $v0, $zero, L_151B9200
    if (ctx->r2 == 0) {
        // 0x151B8F88: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_151B9200;
    }
    // 0x151B8F88: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x151B8F8C: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x151B8F90: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x151B8F94: jal         0x10022EC0
    // 0x151B8F98: sw          $v0, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151B8F98: sw          $v0, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r2;
    after_4:
    // 0x151B8F9C: lw          $v1, 0x1BC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1BC);
    // 0x151B8FA0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x151B8FA4: sw          $v1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r3;
    // 0x151B8FA8: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x151B8FAC: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151B8FB0: lw          $t1, 0x1CC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1CC);
    // 0x151B8FB4: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151B8FB8: div.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x151B8FBC: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x151B8FC0: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x151B8FC4: sb          $zero, 0x114($sp)
    MEM_B(0X114, ctx->r29) = 0;
    // 0x151B8FC8: sb          $t3, 0x115($sp)
    MEM_B(0X115, ctx->r29) = ctx->r11;
    // 0x151B8FCC: sh          $t2, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r10;
    // 0x151B8FD0: sb          $t8, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r24;
    // 0x151B8FD4: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    // 0x151B8FD8: lw          $a1, 0x1C0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C0);
    // 0x151B8FDC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151B8FE0: lbu         $a3, 0x1CB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1CB);
    // 0x151B8FE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151B8FE8: jal         0x1516037C
    // 0x151B8FEC: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    func_1516037C(rdram, ctx);
        goto after_5;
    // 0x151B8FEC: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x151B8FF0: beq         $v0, $zero, L_151B9200
    if (ctx->r2 == 0) {
        // 0x151B8FF4: addiu       $a0, $v0, 0x18
        ctx->r4 = ADD32(ctx->r2, 0X18);
            goto L_151B9200;
    }
    // 0x151B8FF4: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151B8FF8: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x151B8FFC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151B9000: jal         0x10022EC0
    // 0x151B9004: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x151B9004: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_6:
    // 0x151B9008: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151B900C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151B9010: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x151B9014: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x151B9018: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B901C: lwc1        $f16, -0x5AB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5AB4);
    // 0x151B9020: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9024: lwc1        $f18, -0x5AB0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5AB0);
    // 0x151B9028: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B902C: lwc1        $f4, -0x5AAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5AAC);
    // 0x151B9030: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151B9034: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151B9038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B903C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9040: mul.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151B9044: lwc1        $f8, -0x5AA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5AA8);
    // 0x151B9048: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B904C: lwc1        $f10, -0x5AA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5AA4);
    // 0x151B9050: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9054: lwc1        $f16, -0x5AA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5AA0);
    // 0x151B9058: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151B905C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151B9060: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151B9064: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151B9068: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151B906C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151B9070: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151B9074: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
    // 0x151B9078: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x151B907C: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x151B9080: sw          $t9, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r25;
    // 0x151B9084: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x151B9088: sw          $t3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r11;
    // 0x151B908C: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
    // 0x151B9090: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151B9094: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151B9098: sb          $t1, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r9;
    // 0x151B909C: addiu       $t4, $zero, 0x69
    ctx->r12 = ADD32(0, 0X69);
    // 0x151B90A0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151B90A4: addiu       $t6, $zero, 0x3403
    ctx->r14 = ADD32(0, 0X3403);
    // 0x151B90A8: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151B90AC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151B90B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B90B4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151B90B8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B90BC: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x151B90C0: swc1        $f12, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f12.u32l;
    // 0x151B90C4: sw          $t8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r24;
    // 0x151B90C8: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x151B90CC: swc1        $f20, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f20.u32l;
    // 0x151B90D0: sh          $zero, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = 0;
    // 0x151B90D4: sh          $zero, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = 0;
    // 0x151B90D8: sh          $zero, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = 0;
    // 0x151B90DC: sh          $zero, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = 0;
    // 0x151B90E0: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x151B90E4: sb          $zero, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = 0;
    // 0x151B90E8: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x151B90EC: sb          $zero, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = 0;
    // 0x151B90F0: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x151B90F4: sb          $t4, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r12;
    // 0x151B90F8: sb          $t5, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r13;
    // 0x151B90FC: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x151B9100: sh          $t7, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r15;
    // 0x151B9104: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151B9108: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x151B910C: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x151B9110: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x151B9114: sb          $t3, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r11;
    // 0x151B9118: sb          $t2, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r10;
    // 0x151B911C: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    // 0x151B9120: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x151B9124: addiu       $t1, $sp, 0x168
    ctx->r9 = ADD32(ctx->r29, 0X168);
    // 0x151B9128: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x151B912C: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x151B9130: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x151B9134: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x151B9138: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
    // 0x151B913C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151B9140: addiu       $t8, $sp, 0x68
    ctx->r24 = ADD32(ctx->r29, 0X68);
    // 0x151B9144: lui         $t7, 0x1CD
    ctx->r15 = S32(0X1CD << 16);
    // 0x151B9148: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151B914C: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x151B9150: ori         $t7, $t7, 0x2006
    ctx->r15 = ctx->r15 | 0X2006;
    // 0x151B9154: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x151B9158: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x151B915C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151B9160: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151B9164: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151B9168: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151B916C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151B9170: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B9174: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x151B9178: lwc1        $f18, 0x168($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X168);
    // 0x151B917C: lwc1        $f10, 0x170($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X170);
    // 0x151B9180: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B9184: lw          $t2, 0x19C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X19C);
    // 0x151B9188: lw          $t1, 0x1CC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1CC);
    // 0x151B918C: lbu         $t8, 0x1CB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1CB);
    // 0x151B9190: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151B9194: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
    // 0x151B9198: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x151B919C: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x151B91A0: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x151B91A4: sb          $t9, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r25;
    // 0x151B91A8: sb          $t0, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r8;
    // 0x151B91AC: sb          $zero, 0x92($sp)
    MEM_B(0X92, ctx->r29) = 0;
    // 0x151B91B0: sb          $t3, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r11;
    // 0x151B91B4: sb          $t5, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r13;
    // 0x151B91B8: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x151B91BC: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x151B91C0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151B91C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151B91C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151B91CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B91D0: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x151B91D4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x151B91D8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x151B91DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B91E0: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x151B91E4: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x151B91E8: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x151B91EC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151B91F0: jal         0x151407D0
    // 0x151B91F4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_151407D0(rdram, ctx);
        goto after_7;
    // 0x151B91F4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_7:
    // 0x151B91F8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x151B91FC: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
L_151B9200:
    // 0x151B9200: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151B9204: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151B9208: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
    // 0x151B920C: jr          $ra
    // 0x151B9210: nop

    return;
    return;
    // 0x151B9210: nop

;}
RECOMP_FUNC void _n_freePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100198B0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x100198B4: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x100198B8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x100198BC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x100198C0: beq         $t7, $zero, L_100198D8
    if (ctx->r15 == 0) {
        // 0x100198C4: nop
    
            goto L_100198D8;
    }
    // 0x100198C4: nop

    // 0x100198C8: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x100198CC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x100198D0: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x100198D4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_100198D8:
    // 0x100198D8: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x100198DC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x100198E0: beq         $t2, $zero, L_100198F8
    if (ctx->r10 == 0) {
        // 0x100198E4: nop
    
            goto L_100198F8;
    }
    // 0x100198E4: nop

    // 0x100198E8: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x100198EC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x100198F0: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x100198F4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_100198F8:
    // 0x100198F8: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x100198FC: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10019900: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x10019904: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x10019908: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x1001990C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x10019910: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x10019914: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x10019918: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1001991C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x10019920: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x10019924: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x10019928: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x1001992C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x10019930: beq         $t4, $zero, L_10019948
    if (ctx->r12 == 0) {
        // 0x10019934: nop
    
            goto L_10019948;
    }
    // 0x10019934: nop

    // 0x10019938: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x1001993C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x10019940: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x10019944: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_10019948:
    // 0x10019948: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x1001994C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x10019950: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x10019954: b           L_1001995C
    // 0x10019958: nop

        goto L_1001995C;
    // 0x10019958: nop

L_1001995C:
    // 0x1001995C: jr          $ra
    // 0x10019960: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x10019960: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_1503D5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503D5F0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1503D5F4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1503D5F8: addiu       $a1, $a1, -0x7778
    ctx->r5 = ADD32(ctx->r5, -0X7778);
    // 0x1503D5FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1503D600: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_1503D604:
    // 0x1503D604: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x1503D608: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1503D60C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1503D610: blez        $a0, L_1503D648
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1503D614: lui         $a3, 0x8008
        ctx->r7 = S32(0X8008 << 16);
            goto L_1503D648;
    }
    // 0x1503D614: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x1503D618: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x1503D61C: lw          $a3, 0x4410($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4410);
    // 0x1503D620: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_1503D624:
    // 0x1503D624: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x1503D628: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1503D62C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1503D630: bne         $a2, $t7, L_1503D640
    if (ctx->r6 != ctx->r15) {
        // 0x1503D634: nop
    
            goto L_1503D640;
    }
    // 0x1503D634: nop

    // 0x1503D638: jr          $ra
    // 0x1503D63C: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    return;
    return;
    // 0x1503D63C: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
L_1503D640:
    // 0x1503D640: bne         $at, $zero, L_1503D624
    if (ctx->r1 != 0) {
        // 0x1503D644: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1503D624;
    }
    // 0x1503D644: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1503D648:
    // 0x1503D648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1503D64C: bne         $v0, $t1, L_1503D604
    if (ctx->r2 != ctx->r9) {
        // 0x1503D650: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1503D604;
    }
    // 0x1503D650: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1503D654: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1503D658: jr          $ra
    // 0x1503D65C: nop

    return;
    return;
    // 0x1503D65C: nop

;}
RECOMP_FUNC void func_1509C228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C228: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1509C22C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509C230: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1509C234: lbu         $t6, 0x2E68($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E68);
    // 0x1509C238: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1509C23C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1509C240: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x1509C244: bne         $t7, $zero, L_1509C268
    if (ctx->r15 != 0) {
        // 0x1509C248: addiu       $a1, $zero, 0x2000
        ctx->r5 = ADD32(0, 0X2000);
            goto L_1509C268;
    }
    // 0x1509C248: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x1509C24C: lw          $t8, 0x2E4C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2E4C);
    // 0x1509C250: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x1509C254: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1509C258: lbu         $t9, 0xF($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XF);
    // 0x1509C25C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1509C260: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x1509C264: beq         $t0, $zero, L_1509C284
    if (ctx->r8 == 0) {
        // 0x1509C268: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_1509C284;
    }
L_1509C268:
    // 0x1509C268: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1509C26C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1509C270: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x1509C274: jal         0x1509BFB0
    // 0x1509C278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x1509C278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1509C27C: b           L_1509C298
    // 0x1509C280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509C298;
    // 0x1509C280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509C284:
    // 0x1509C284: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1509C288: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x1509C28C: jal         0x1509BFB0
    // 0x1509C290: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1509BFB0(rdram, ctx);
        goto after_1;
    // 0x1509C290: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x1509C294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509C298:
    // 0x1509C298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1509C29C: jr          $ra
    // 0x1509C2A0: nop

    return;
    return;
    // 0x1509C2A0: nop

;}
RECOMP_FUNC void func_150319CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150319CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150319D0: beq         $a1, $zero, L_15031A14
    if (ctx->r5 == 0) {
        // 0x150319D4: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_15031A14;
    }
    // 0x150319D4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150319D8: lw          $v1, 0x3EE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3EE0);
    // 0x150319DC: beq         $v1, $zero, L_15031A14
    if (ctx->r3 == 0) {
        // 0x150319E0: nop
    
            goto L_15031A14;
    }
    // 0x150319E0: nop

    // 0x150319E4: lbu         $a0, 0x3B($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3B);
L_150319E8:
    // 0x150319E8: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x150319EC: lw          $v0, 0x54($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54);
    // 0x150319F0: bne         $a0, $t6, L_15031A0C
    if (ctx->r4 != ctx->r14) {
        // 0x150319F4: nop
    
            goto L_15031A0C;
    }
    // 0x150319F4: nop

    // 0x150319F8: lbu         $t7, 0x6($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X6);
    // 0x150319FC: bne         $a2, $t7, L_15031A0C
    if (ctx->r6 != ctx->r15) {
        // 0x15031A00: nop
    
            goto L_15031A0C;
    }
    // 0x15031A00: nop

    // 0x15031A04: jr          $ra
    // 0x15031A08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15031A08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15031A0C:
    // 0x15031A0C: bne         $v0, $zero, L_150319E8
    if (ctx->r2 != 0) {
        // 0x15031A10: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150319E8;
    }
    // 0x15031A10: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15031A14:
    // 0x15031A14: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15031A18: lw          $v1, 0x3EE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3EE0);
    // 0x15031A1C: beql        $v1, $zero, L_15031A48
    if (ctx->r3 == 0) {
        // 0x15031A20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15031A48;
    }
    goto skip_0;
    // 0x15031A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_15031A24:
    // 0x15031A24: lbu         $t8, 0x6($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X6);
    // 0x15031A28: lw          $v0, 0x54($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X54);
    // 0x15031A2C: bne         $a2, $t8, L_15031A3C
    if (ctx->r6 != ctx->r24) {
        // 0x15031A30: nop
    
            goto L_15031A3C;
    }
    // 0x15031A30: nop

    // 0x15031A34: jr          $ra
    // 0x15031A38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15031A38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15031A3C:
    // 0x15031A3C: bne         $v0, $zero, L_15031A24
    if (ctx->r2 != 0) {
        // 0x15031A40: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15031A24;
    }
    // 0x15031A40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15031A44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15031A48:
    // 0x15031A48: jr          $ra
    // 0x15031A4C: nop

    return;
    return;
    // 0x15031A4C: nop

;}
RECOMP_FUNC void func_1511617C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511617C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15116180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15116184: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x15116188: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x1511618C: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x15116190: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x15116194: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15116198: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1511619C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x151161A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151161A4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151161A8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151161AC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151161B0: jal         0x1510F648
    // 0x151161B4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_1510F648(rdram, ctx);
        goto after_0;
    // 0x151161B4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x151161B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151161BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151161C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151161C4: lh          $t8, 0x12($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X12);
    // 0x151161C8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x151161CC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x151161D0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x151161D4: nop

    // 0x151161D8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151161DC: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x151161E0: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151161E4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x151161E8: nop

    // 0x151161EC: bc1fl       L_151161FC
    if (!c1cs) {
        // 0x151161F0: lbu         $t9, 0x4F($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X4F);
            goto L_151161FC;
    }
    goto skip_0;
    // 0x151161F0: lbu         $t9, 0x4F($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4F);
    skip_0:
    // 0x151161F4: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x151161F8: lbu         $t9, 0x4F($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4F);
L_151161FC:
    // 0x151161FC: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x15116200: bne         $t0, $zero, L_15116240
    if (ctx->r8 != 0) {
        // 0x15116204: nop
    
            goto L_15116240;
    }
    // 0x15116204: nop

    // 0x15116208: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x1511620C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15116210: lwc1        $f10, 0x2FA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FA8);
    // 0x15116214: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
    // 0x15116218: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1511621C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15116220: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15116224: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15116228: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1511622C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15116230: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15116234: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15116238: b           L_15116290
    // 0x1511623C: sw          $t3, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r11;
        goto L_15116290;
    // 0x1511623C: sw          $t3, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r11;
L_15116240:
    // 0x15116240: lhu         $t4, -0x3CAC($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X3CAC);
    // 0x15116244: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x15116248: addiu       $v1, $zero, -0x14
    ctx->r3 = ADD32(0, -0X14);
    // 0x1511624C: bnel        $t4, $at, L_1511625C
    if (ctx->r12 != ctx->r1) {
        // 0x15116250: lw          $v0, 0x3C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X3C);
            goto L_1511625C;
    }
    goto skip_1;
    // 0x15116250: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    skip_1:
    // 0x15116254: addiu       $v1, $zero, -0x28
    ctx->r3 = ADD32(0, -0X28);
    // 0x15116258: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
L_1511625C:
    // 0x1511625C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15116260: lwc1        $f16, 0x2FAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2FAC);
    // 0x15116264: subu        $t5, $v1, $v0
    ctx->r13 = SUB32(ctx->r3, ctx->r2);
    // 0x15116268: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1511626C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x15116270: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15116274: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15116278: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1511627C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15116280: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15116284: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15116288: nop

    // 0x1511628C: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
L_15116290:
    // 0x15116290: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x15116294: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x15116298: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x1511629C: nop

    // 0x151162A0: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151162A4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151162A8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151162AC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x151162B0: nop

    // 0x151162B4: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x151162B8: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x151162BC: lh          $t1, 0x12($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X12);
    // 0x151162C0: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x151162C4: sh          $t3, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r11;
    // 0x151162C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151162CC: jr          $ra
    // 0x151162D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151162D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_10010630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010630: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x10010634: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x10010638: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x1001063C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x10010640: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x10010644: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x10010648: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1001064C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x10010650: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x10010654: beql        $t6, $zero, L_10010710
    if (ctx->r14 == 0) {
        // 0x10010658: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_10010710;
    }
    goto skip_0;
    // 0x10010658: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1001065C: lw          $t7, 0x318($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X318);
    // 0x10010660: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x10010664: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x10010668: beq         $t7, $zero, L_10010698
    if (ctx->r15 == 0) {
        // 0x1001066C: lhu         $a0, 0x42($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X42);
            goto L_10010698;
    }
    // 0x1001066C: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x10010670: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x10010674: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x10010678: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1001067C: srl         $t8, $v0, 3
    ctx->r24 = S32(U32(ctx->r2) >> 3);
    // 0x10010680: andi        $t9, $t8, 0x30
    ctx->r25 = ctx->r24 & 0X30;
    // 0x10010684: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x10010688: jal         0x10010F30
    // 0x1001068C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x1001068C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x10010690: b           L_10010710
    // 0x10010694: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_10010710;
    // 0x10010694: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_10010698:
    // 0x10010698: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1001069C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x100106A0: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x100106A4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x100106A8: lhu         $t0, 0x52($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X52);
    // 0x100106AC: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x100106B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x100106B4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x100106B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x100106BC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x100106C0: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x100106C4: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x100106C8: lui         $t2, 0x1001
    ctx->r10 = S32(0X1001 << 16);
    // 0x100106CC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x100106D0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x100106D4: addiu       $t2, $t2, -0x1190
    ctx->r10 = ADD32(ctx->r10, -0X1190);
    // 0x100106D8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x100106DC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x100106E0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x100106E4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x100106E8: lbu         $t3, 0x3B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3B);
    // 0x100106EC: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x100106F0: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x100106F4: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x100106F8: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x100106FC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x10010700: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x10010704: jal         0x1000FA64
    // 0x10010708: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_1000FA64(rdram, ctx);
        goto after_1;
    // 0x10010708: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_1:
    // 0x1001070C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_10010710:
    // 0x10010710: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x10010714: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x10010718: jr          $ra
    // 0x1001071C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1001071C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15172C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15172C50: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15172C54: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15172C58: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15172C5C: addiu       $a2, $a2, -0x2D30
    ctx->r6 = ADD32(ctx->r6, -0X2D30);
    // 0x15172C60: addiu       $a1, $a1, -0x2D40
    ctx->r5 = ADD32(ctx->r5, -0X2D40);
    // 0x15172C64: addiu       $v1, $v1, -0x2D50
    ctx->r3 = ADD32(ctx->r3, -0X2D50);
    // 0x15172C68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15172C6C:
    // 0x15172C6C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15172C70: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    // 0x15172C74: sb          $zero, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = 0;
    // 0x15172C78: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x15172C7C: sb          $zero, -0x2($a1)
    MEM_B(-0X2, ctx->r5) = 0;
    // 0x15172C80: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x15172C84: sb          $zero, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = 0;
    // 0x15172C88: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15172C8C: sb          $v0, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r2;
    // 0x15172C90: bne         $a1, $a2, L_15172C6C
    if (ctx->r5 != ctx->r6) {
        // 0x15172C94: sb          $zero, -0x4($a1)
        MEM_B(-0X4, ctx->r5) = 0;
            goto L_15172C6C;
    }
    // 0x15172C94: sb          $zero, -0x4($a1)
    MEM_B(-0X4, ctx->r5) = 0;
    // 0x15172C98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172C9C: sb          $a0, -0x2D40($at)
    MEM_B(-0X2D40, ctx->r1) = ctx->r4;
    // 0x15172CA0: jr          $ra
    // 0x15172CA4: nop

    return;
    return;
    // 0x15172CA4: nop

;}
RECOMP_FUNC void func_1516ECAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516ECAC: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
    // 0x1516ECB0: lbu         $v1, 0x1F($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1F);
    // 0x1516ECB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1516ECB8: beq         $v0, $zero, L_1516ECF0
    if (ctx->r2 == 0) {
        // 0x1516ECBC: nop
    
            goto L_1516ECF0;
    }
    // 0x1516ECBC: nop

    // 0x1516ECC0: beq         $v1, $at, L_1516ED20
    if (ctx->r3 == ctx->r1) {
        // 0x1516ECC4: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_1516ED20;
    }
    // 0x1516ECC4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1516ECC8: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1516ECCC: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x1516ECD0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x1516ECD4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x1516ECD8: bnel        $at, $zero, L_1516ECE8
    if (ctx->r1 != 0) {
        // 0x1516ECDC: sb          $v1, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r3;
            goto L_1516ECE8;
    }
    goto skip_0;
    // 0x1516ECDC: sb          $v1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r3;
    skip_0:
    // 0x1516ECE0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x1516ECE4: sb          $v1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r3;
L_1516ECE8:
    // 0x1516ECE8: b           L_1516ED20
    // 0x1516ECEC: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
        goto L_1516ED20;
    // 0x1516ECEC: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
L_1516ECF0:
    // 0x1516ECF0: beq         $v1, $zero, L_1516ED20
    if (ctx->r3 == 0) {
        // 0x1516ECF4: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1516ED20;
    }
    // 0x1516ECF4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1516ECF8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1516ECFC: lbu         $t9, 0x26($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X26);
    // 0x1516ED00: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516ED04: mflo        $t0
    ctx->r8 = lo;
    // 0x1516ED08: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x1516ED0C: bgezl       $v1, L_1516ED1C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1516ED10: sb          $v1, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r3;
            goto L_1516ED1C;
    }
    goto skip_1;
    // 0x1516ED10: sb          $v1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r3;
    skip_1:
    // 0x1516ED14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1516ED18: sb          $v1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r3;
L_1516ED1C:
    // 0x1516ED1C: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
L_1516ED20:
    // 0x1516ED20: bnel        $v0, $zero, L_1516ED3C
    if (ctx->r2 != 0) {
        // 0x1516ED24: lbu         $t1, 0x2C($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X2C);
            goto L_1516ED3C;
    }
    goto skip_2;
    // 0x1516ED24: lbu         $t1, 0x2C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X2C);
    skip_2:
    // 0x1516ED28: bnel        $v1, $zero, L_1516ED3C
    if (ctx->r3 != 0) {
        // 0x1516ED2C: lbu         $t1, 0x2C($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X2C);
            goto L_1516ED3C;
    }
    goto skip_3;
    // 0x1516ED2C: lbu         $t1, 0x2C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X2C);
    skip_3:
    // 0x1516ED30: jr          $ra
    // 0x1516ED34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1516ED34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516ED38: lbu         $t1, 0x2C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X2C);
L_1516ED3C:
    // 0x1516ED3C: lbu         $t3, 0x2D($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X2D);
    // 0x1516ED40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516ED44: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x1516ED48: or          $a1, $t2, $t3
    ctx->r5 = ctx->r10 | ctx->r11;
    // 0x1516ED4C: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516ED50: mflo        $a2
    ctx->r6 = lo;
    // 0x1516ED54: sra         $t4, $a2, 7
    ctx->r12 = S32(SIGNED(ctx->r6) >> 7);
    // 0x1516ED58: sh          $t4, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r12;
    // 0x1516ED5C: sh          $t4, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r12;
    // 0x1516ED60: jr          $ra
    // 0x1516ED64: nop

    return;
    return;
    // 0x1516ED64: nop

;}
RECOMP_FUNC void func_150D6C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D6C98: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150D6C9C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150D6CA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D6CA4: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x150D6CA8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x150D6CAC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D6CB0: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x150D6CB4: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150D6CB8: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x150D6CBC: jr          $ra
    // 0x150D6CC0: nop

    return;
    return;
    // 0x150D6CC0: nop

;}
RECOMP_FUNC void func_1518F058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F058: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1518F05C: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x1518F060: lwc1        $f0, 0x150($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X150);
    // 0x1518F064: lwc1        $f4, 0x140($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X140);
    // 0x1518F068: lwc1        $f8, 0x14C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x1518F06C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518F070: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1518F074: lwc1        $f4, 0x144($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X144);
    // 0x1518F078: swc1        $f6, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->f6.u32l;
    // 0x1518F07C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1518F080: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518F084: lwc1        $f8, 0x148($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X148);
    // 0x1518F088: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1518F08C: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1518F090: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1518F094: lwc1        $f4, 0x140($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X140);
    // 0x1518F098: swc1        $f10, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f10.u32l;
    // 0x1518F09C: swc1        $f6, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->f6.u32l;
    // 0x1518F0A0: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1518F0A4: lwc1        $f18, 0x144($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X144);
    // 0x1518F0A8: lwc1        $f6, 0x148($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X148);
    // 0x1518F0AC: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1518F0B0: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1518F0B4: mul.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1518F0B8: nop

    // 0x1518F0BC: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1518F0C0: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1518F0C4: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1518F0C8: add.s       $f18, $f4, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1518F0CC: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
    // 0x1518F0D0: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1518F0D4: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1518F0D8: swc1        $f18, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f18.u32l;
    // 0x1518F0DC: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1518F0E0: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x1518F0E4: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x1518F0E8: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1518F0EC: add.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x1518F0F0: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x1518F0F4: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1518F0F8: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    // 0x1518F0FC: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
    // 0x1518F100: jr          $ra
    // 0x1518F104: nop

    return;
    return;
    // 0x1518F104: nop

;}

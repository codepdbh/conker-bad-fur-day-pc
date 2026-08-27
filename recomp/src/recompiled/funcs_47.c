#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1507C324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507C324: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x1507C328: lw          $v1, 0x2D0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2D0);
    // 0x1507C32C: beq         $v0, $zero, L_1507C368
    if (ctx->r2 == 0) {
        // 0x1507C330: nop
    
            goto L_1507C368;
    }
    // 0x1507C330: nop

    // 0x1507C334: beq         $v1, $zero, L_1507C368
    if (ctx->r3 == 0) {
        // 0x1507C338: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1507C368;
    }
    // 0x1507C338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1507C33C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1507C340: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1507C344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1507C348: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x1507C34C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1507C350: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1507C354: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x1507C358: nop

    // 0x1507C35C: bc1f        L_1507C368
    if (!c1cs) {
        // 0x1507C360: nop
    
            goto L_1507C368;
    }
    // 0x1507C360: nop

    // 0x1507C364: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
L_1507C368:
    // 0x1507C368: jr          $ra
    // 0x1507C36C: nop

    return;
    return;
    // 0x1507C36C: nop

;}
RECOMP_FUNC void func_150BE2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BE2E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150BE2EC: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x150BE2F0: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x150BE2F4: lh          $t8, 0x80($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X80);
    // 0x150BE2F8: lh          $t7, 0x7E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X7E);
    // 0x150BE2FC: lh          $t6, 0x7C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X7C);
    // 0x150BE300: lh          $t9, 0x82($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X82);
    // 0x150BE304: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150BE308: lh          $t2, 0x3C($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X3C);
    // 0x150BE30C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150BE310: lh          $t1, 0x86($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X86);
    // 0x150BE314: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150BE318: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BE31C: lh          $t0, 0x84($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X84);
    // 0x150BE320: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150BE324: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x150BE328: lh          $t3, 0x3E($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X3E);
    // 0x150BE32C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BE330: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x150BE334: lui         $at, 0x3880
    ctx->r1 = S32(0X3880 << 16);
    // 0x150BE338: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150BE33C: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x150BE340: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BE344: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x150BE348: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150BE34C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BE350: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BE354: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150BE358: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BE35C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BE360: nop

    // 0x150BE364: mul.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150BE368: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BE36C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE370: lwc1        $f4, 0x68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68);
    // 0x150BE374: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BE378: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150BE37C: mul.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150BE380: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x150BE384: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x150BE388: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BE38C: sub.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x150BE390: sub.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x150BE394: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150BE398: add.s       $f22, $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f4.fl;
    // 0x150BE39C: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150BE3A0: sub.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x150BE3A4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x150BE3A8: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150BE3AC: sub.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x150BE3B0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150BE3B4: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x150BE3B8: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150BE3BC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150BE3C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BE3C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BE3C8: sh          $t6, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r14;
    // 0x150BE3CC: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x150BE3D0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150BE3D4: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x150BE3D8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x150BE3DC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150BE3E0: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x150BE3E4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150BE3E8: bc1f        L_150BE3F8
    if (!c1cs) {
        // 0x150BE3EC: sh          $t0, 0x14($a0)
        MEM_H(0X14, ctx->r4) = ctx->r8;
            goto L_150BE3F8;
    }
    // 0x150BE3EC: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x150BE3F0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150BE3F4: nop

L_150BE3F8:
    // 0x150BE3F8: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x150BE3FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150BE400: nop

    // 0x150BE404: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x150BE408: nop

    // 0x150BE40C: mul.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x150BE410: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BE414: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BE418: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150BE41C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x150BE420: sh          $t2, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r10;
    // 0x150BE424: sh          $t4, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r12;
    // 0x150BE428: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x150BE42C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x150BE430: jr          $ra
    // 0x150BE434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150BE434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150F0354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F0358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F035C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F0360: jal         0x150F0380
    // 0x150F0364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F0380(rdram, ctx);
        goto after_0;
    // 0x150F0364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F0368: jal         0x151411C4
    // 0x150F036C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151411C4(rdram, ctx);
        goto after_1;
    // 0x150F036C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F0370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F0374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0378: jr          $ra
    // 0x150F037C: nop

    return;
    return;
    // 0x150F037C: nop

;}
RECOMP_FUNC void func_15009D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009D28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009D2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009D30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009D34: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15009D38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15009D3C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15009D40: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15009D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009D48: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15009D4C: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x15009D50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15009D54: jal         0x15163604
    // 0x15009D58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x15009D58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x15009D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009D64: jr          $ra
    // 0x15009D68: nop

    return;
    return;
    // 0x15009D68: nop

;}
RECOMP_FUNC void func_150C5370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5370: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150C5374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C5378: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150C537C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150C5380: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x150C5384: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150C5388: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C538C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150C5390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150C5394: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x150C5398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C539C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150C53A0: jal         0x15167A68
    // 0x150C53A4: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x150C53A4: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    after_0:
    // 0x150C53A8: bne         $v0, $zero, L_150C53B8
    if (ctx->r2 != 0) {
        // 0x150C53AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150C53B8;
    }
    // 0x150C53AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150C53B0: b           L_150C5420
    // 0x150C53B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C5420;
    // 0x150C53B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C53B8:
    // 0x150C53B8: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x150C53BC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x150C53C0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x150C53C4: jal         0x10022EC0
    // 0x150C53C8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150C53C8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x150C53CC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x150C53D0: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x150C53D4: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x150C53D8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150C53DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C53E0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x150C53E4: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x150C53E8: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150C53EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150C53F0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x150C53F4: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x150C53F8: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x150C53FC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C5400: jal         0x15143E64
    // 0x150C5404: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_2;
    // 0x150C5404: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x150C5408: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x150C540C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150C5410: swc1        $f0, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = ctx->f0.u32l;
    // 0x150C5414: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x150C5418: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x150C541C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150C5420:
    // 0x150C5420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150C5424: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150C5428: jr          $ra
    // 0x150C542C: nop

    return;
    return;
    // 0x150C542C: nop

;}
RECOMP_FUNC void func_150CEF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CEF60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150CEF64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CEF68: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150CEF6C: jal         0x151149AC
    // 0x150CEF70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150CEF70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x150CEF74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CEF78: lwc1        $f6, 0x830($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X830);
    // 0x150CEF7C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150CEF80: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CEF84: jal         0x150AD78C
    // 0x150CEF88: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_150AD78C(rdram, ctx);
        goto after_1;
    // 0x150CEF88: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x150CEF8C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150CEF90: jal         0x150AD780
    // 0x150CEF94: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_150AD780(rdram, ctx);
        goto after_2;
    // 0x150CEF94: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150CEF98: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150CEF9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CEFA0: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x150CEFA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150CEFA8: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x150CEFAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CEFB0: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x150CEFB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CEFB8: sub.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x150CEFBC: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150CEFC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CEFC4: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x150CEFC8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150CEFCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150CEFD0: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CEFD4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150CEFD8: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x150CEFDC: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150CEFE0: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150CEFE4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150CEFE8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CEFEC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150CEFF0: lwc1        $f8, 0x834($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X834);
    // 0x150CEFF4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150CEFF8: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150CEFFC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150CF000: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150CF004: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150CF008: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150CF00C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150CF010: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150CF014: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150CF018: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150CF01C: jal         0x150A3444
    // 0x150CF020: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    func_150A3444(rdram, ctx);
        goto after_3;
    // 0x150CF020: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    after_3:
    // 0x150CF024: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150CF028: jal         0x151749A0
    // 0x150CF02C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151749A0(rdram, ctx);
        goto after_4;
    // 0x150CF02C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x150CF030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CF034: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150CF038: jr          $ra
    // 0x150CF03C: nop

    return;
    return;
    // 0x150CF03C: nop

;}
RECOMP_FUNC void func_15116888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116888: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1511688C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15116890: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15116894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15116898: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1511689C: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x151168A0: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x151168A4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x151168A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151168AC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151168B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151168B4: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x151168B8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x151168BC: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x151168C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x151168C4: subu        $t9, $v1, $a1
    ctx->r25 = SUB32(ctx->r3, ctx->r5);
    // 0x151168C8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151168CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151168D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151168D4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x151168D8: jal         0x150490A8
    // 0x151168DC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_150490A8(rdram, ctx);
        goto after_0;
    // 0x151168DC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151168E0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x151168E4: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x151168E8: lhu         $v1, 0x76($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X76);
    // 0x151168EC: sra         $t1, $v1, 8
    ctx->r9 = S32(SIGNED(ctx->r3) >> 8);
    // 0x151168F0: subu        $v1, $t2, $t1
    ctx->r3 = SUB32(ctx->r10, ctx->r9);
    // 0x151168F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x151168F8: jal         0x15048A40
    // 0x151168FC: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_1;
    // 0x151168FC: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    after_1:
    // 0x15116900: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15116904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15116908: lwc1        $f8, 0x3C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x1511690C: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15116910: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15116914: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15116918: nop

    // 0x1511691C: jr          $ra
    // 0x15116920: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15116920: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150025FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150025FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15002600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15002604: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15002608: lh          $v0, -0x41D6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X41D6);
    // 0x1500260C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15002610: lw          $a3, -0x1610($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1610);
    // 0x15002614: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x15002618: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1500261C: lh          $t6, -0x41D4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X41D4);
    // 0x15002620: sll         $t1, $a3, 1
    ctx->r9 = S32(ctx->r7 << 1);
    // 0x15002624: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x15002628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500262C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15002630: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15002634: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15002638: bgez        $t7, L_15002648
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500263C: sra         $t8, $t7, 3
        ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
            goto L_15002648;
    }
    // 0x1500263C: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x15002640: addiu       $at, $t7, 0x7
    ctx->r1 = ADD32(ctx->r15, 0X7);
    // 0x15002644: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_15002648:
    // 0x15002648: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x1500264C: andi        $t0, $t9, 0xFFF0
    ctx->r8 = ctx->r25 & 0XFFF0;
    // 0x15002650: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15002654: jal         0x1502B5C8
    // 0x15002658: sh          $t0, -0x41D8($at)
    MEM_H(-0X41D8, ctx->r1) = ctx->r8;
    func_1502B5C8(rdram, ctx);
        goto after_0;
    // 0x15002658: sh          $t0, -0x41D8($at)
    MEM_H(-0X41D8, ctx->r1) = ctx->r8;
    after_0:
    // 0x1500265C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15002660: lw          $a3, -0x1610($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1610);
    // 0x15002664: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x15002668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500266C: sll         $t2, $a3, 1
    ctx->r10 = S32(ctx->r7 << 1);
    // 0x15002670: addiu       $a3, $t2, 0x1
    ctx->r7 = ADD32(ctx->r10, 0X1);
    // 0x15002674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15002678: jal         0x1502B5C8
    // 0x1500267C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_1502B5C8(rdram, ctx);
        goto after_1;
    // 0x1500267C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x15002680: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x15002684: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15002688: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500268C: bne         $a2, $zero, L_150026A0
    if (ctx->r6 != 0) {
        // 0x15002690: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_150026A0;
    }
    // 0x15002690: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x15002694: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15002698: b           L_150026B4
    // 0x1500269C: sw          $zero, -0x1A30($at)
    MEM_W(-0X1A30, ctx->r1) = 0;
        goto L_150026B4;
    // 0x1500269C: sw          $zero, -0x1A30($at)
    MEM_W(-0X1A30, ctx->r1) = 0;
L_150026A0:
    // 0x150026A0: lh          $a0, -0x41D8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X41D8);
    // 0x150026A4: jal         0x150183D0
    // 0x150026A8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_150183D0(rdram, ctx);
        goto after_2;
    // 0x150026A8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x150026AC: jal         0x10004074
    // 0x150026B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x150026B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
L_150026B4:
    // 0x150026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150026B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150026BC: jr          $ra
    // 0x150026C0: nop

    return;
    return;
    // 0x150026C0: nop

;}
RECOMP_FUNC void func_15143E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143E94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15143E98: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15143E9C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15143EA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15143EA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15143EA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15143EAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15143EB0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15143EB4: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    // 0x15143EB8: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x15143EBC: lw          $s2, 0x2FA0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X2FA0);
    // 0x15143EC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15143EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15143EC8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15143ECC: sll         $t6, $s2, 24
    ctx->r14 = S32(ctx->r18 << 24);
    // 0x15143ED0: sra         $s2, $t6, 24
    ctx->r18 = S32(SIGNED(ctx->r14) >> 24);
    // 0x15143ED4: blez        $s2, L_15143F20
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15143ED8: addiu       $a0, $zero, 0x32C
        ctx->r4 = ADD32(0, 0X32C);
            goto L_15143F20;
    }
    // 0x15143ED8: addiu       $a0, $zero, 0x32C
    ctx->r4 = ADD32(0, 0X32C);
    // 0x15143EDC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15143EE0: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
L_15143EE4:
    // 0x15143EE4: multu       $s0, $a0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15143EE8: mflo        $t8
    ctx->r24 = lo;
    // 0x15143EEC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x15143EF0: lbu         $t0, 0x1CA($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1CA);
    // 0x15143EF4: beql        $t0, $zero, L_15143F08
    if (ctx->r8 == 0) {
        // 0x15143EF8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15143F08;
    }
    goto skip_0;
    // 0x15143EF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x15143EFC: b           L_15143F10
    // 0x15143F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15143F10;
    // 0x15143F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15143F04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15143F08:
    // 0x15143F08: sll         $t1, $s0, 24
    ctx->r9 = S32(ctx->r16 << 24);
    // 0x15143F0C: sra         $s0, $t1, 24
    ctx->r16 = S32(SIGNED(ctx->r9) >> 24);
L_15143F10:
    // 0x15143F10: bne         $v0, $zero, L_15143F20
    if (ctx->r2 != 0) {
        // 0x15143F14: slt         $at, $s0, $s2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_15143F20;
    }
    // 0x15143F14: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x15143F18: bne         $at, $zero, L_15143EE4
    if (ctx->r1 != 0) {
        // 0x15143F1C: nop
    
            goto L_15143EE4;
    }
    // 0x15143F1C: nop

L_15143F20:
    // 0x15143F20: beq         $v0, $zero, L_15143FFC
    if (ctx->r2 == 0) {
        // 0x15143F24: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15143FFC;
    }
    // 0x15143F24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15143F28: blez        $s2, L_15143F68
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15143F2C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15143F68;
    }
    // 0x15143F2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15143F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15143F34:
    // 0x15143F34: jal         0x150A29C8
    // 0x15143F38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_150A29C8(rdram, ctx);
        goto after_0;
    // 0x15143F38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x15143F3C: bnel        $v0, $zero, L_15143F50
    if (ctx->r2 != 0) {
        // 0x15143F40: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15143F50;
    }
    goto skip_1;
    // 0x15143F40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x15143F44: b           L_15143F58
    // 0x15143F48: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_15143F58;
    // 0x15143F48: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x15143F4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15143F50:
    // 0x15143F50: sll         $t3, $s0, 24
    ctx->r11 = S32(ctx->r16 << 24);
    // 0x15143F54: sra         $s0, $t3, 24
    ctx->r16 = S32(SIGNED(ctx->r11) >> 24);
L_15143F58:
    // 0x15143F58: bne         $s1, $zero, L_15143F68
    if (ctx->r17 != 0) {
        // 0x15143F5C: slt         $at, $s0, $s2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_15143F68;
    }
    // 0x15143F5C: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x15143F60: bnel        $at, $zero, L_15143F34
    if (ctx->r1 != 0) {
        // 0x15143F64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15143F34;
    }
    goto skip_2;
    // 0x15143F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_15143F68:
    // 0x15143F68: beq         $s1, $zero, L_15143FFC
    if (ctx->r17 == 0) {
        // 0x15143F6C: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_15143FFC;
    }
    // 0x15143F6C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15143F70: lw          $t5, -0x1618($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1618);
    // 0x15143F74: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15143F78: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x15143F7C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15143F80: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15143F84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15143F88: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x15143F8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15143F90: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15143F94: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x15143F98: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x15143F9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15143FA0: jal         0x1512D748
    // 0x15143FA4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_1512D748(rdram, ctx);
        goto after_1;
    // 0x15143FA4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x15143FA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15143FAC: jal         0x150ADA20
    // 0x15143FB0: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15143FB0: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    after_2:
    // 0x15143FB4: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x15143FB8: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x15143FBC: jal         0x150ADA20
    // 0x15143FC0: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15143FC0: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    after_3:
    // 0x15143FC4: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x15143FC8: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x15143FCC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x15143FD0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15143FD4: sb          $t2, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r10;
    // 0x15143FD8: sb          $t3, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r11;
    // 0x15143FDC: sb          $t4, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r12;
    // 0x15143FE0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15143FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15143FE8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15143FEC: jal         0x151D8868
    // 0x15143FF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_4;
    // 0x15143FF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x15143FF4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15143FF8: sb          $t5, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r13;
L_15143FFC:
    // 0x15143FFC: lbu         $v0, 0x37($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X37);
    // 0x15144000: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15144004: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15144008: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1514400C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15144010: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15144014: jr          $ra
    // 0x15144018: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15144018: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_150B6450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B6454: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150B6458: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150B645C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150B6460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B6464: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150B6468: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x150B646C: bnel        $a2, $at, L_150B6480
    if (ctx->r6 != ctx->r1) {
        // 0x150B6470: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150B6480;
    }
    goto skip_0;
    // 0x150B6470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150B6474: jal         0x1516972C
    // 0x150B6478: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B6478: nop

    after_0:
    // 0x150B647C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150B6480:
    // 0x150B6480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B6484: jr          $ra
    // 0x150B6488: nop

    return;
    return;
    // 0x150B6488: nop

;}
RECOMP_FUNC void func_151873E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151873E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151873E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151873EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151873F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151873F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151873F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151873FC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15187400: lw          $t6, -0x4110($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4110);
    // 0x15187404: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15187408: bnel        $t6, $zero, L_1518741C
    if (ctx->r14 != 0) {
        // 0x1518740C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_1518741C;
    }
    goto skip_0;
    // 0x1518740C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    skip_0:
    // 0x15187410: b           L_151875CC
    // 0x15187414: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_151875CC;
    // 0x15187414: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x15187418: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
L_1518741C:
    // 0x1518741C: jal         0x1510F800
    // 0x15187420: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15187420: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x15187424: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x15187428: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1518742C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x15187430: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x15187434: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x15187438: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1518743C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15187440: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15187444: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15187448: addiu       $t2, $t2, -0xF18
    ctx->r10 = ADD32(ctx->r10, -0XF18);
    // 0x1518744C: subu        $t6, $s1, $a2
    ctx->r14 = SUB32(ctx->r17, ctx->r6);
    // 0x15187450: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x15187454: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15187458: addu        $t7, $s1, $a2
    ctx->r15 = ADD32(ctx->r17, ctx->r6);
    // 0x1518745C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15187460: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15187464: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x15187468: sw          $t7, -0xF14($at)
    MEM_W(-0XF14, ctx->r1) = ctx->r15;
    // 0x1518746C: addiu       $t4, $t4, -0xF0C
    ctx->r12 = ADD32(ctx->r12, -0XF0C);
    // 0x15187470: addiu       $t3, $t3, -0xF10
    ctx->r11 = ADD32(ctx->r11, -0XF10);
    // 0x15187474: subu        $t8, $a1, $a2
    ctx->r24 = SUB32(ctx->r5, ctx->r6);
    // 0x15187478: addu        $t9, $a1, $a2
    ctx->r25 = ADD32(ctx->r5, ctx->r6);
    // 0x1518747C: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x15187480: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x15187484: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15187488: lw          $t1, -0x4110($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4110);
    // 0x1518748C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15187490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15187494: blez        $t1, L_1518755C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x15187498: lui         $t0, 0x800E
        ctx->r8 = S32(0X800E << 16);
            goto L_1518755C;
    }
    // 0x15187498: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x1518749C: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x151874A0: addiu       $s1, $s1, 0x37E0
    ctx->r17 = ADD32(ctx->r17, 0X37E0);
    // 0x151874A4: lw          $t0, -0x410C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X410C);
L_151874A8:
    // 0x151874A8: lbu         $t6, 0x6E($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X6E);
    // 0x151874AC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x151874B0: bnel        $t6, $zero, L_15187550
    if (ctx->r14 != 0) {
        // 0x151874B4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15187550;
    }
    goto skip_1;
    // 0x151874B4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x151874B8: lbu         $t7, 0x4F($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4F);
    // 0x151874BC: andi        $t8, $t7, 0x60
    ctx->r24 = ctx->r15 & 0X60;
    // 0x151874C0: bnel        $t8, $zero, L_15187550
    if (ctx->r24 != 0) {
        // 0x151874C4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15187550;
    }
    goto skip_2;
    // 0x151874C4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x151874C8: lhu         $a0, 0x52($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X52);
    // 0x151874CC: lhu         $a1, 0x50($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X50);
    // 0x151874D0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151874D4: lw          $a2, -0xF14($a2)
    ctx->r6 = MEM_W(ctx->r6, -0XF14);
    // 0x151874D8: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151874DC: beq         $at, $zero, L_151874EC
    if (ctx->r1 == 0) {
        // 0x151874E0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_151874EC;
    }
    // 0x151874E0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151874E4: b           L_151874EC
    // 0x151874E8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_151874EC;
    // 0x151874E8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_151874EC:
    // 0x151874EC: lh          $a0, 0x10($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X10);
    // 0x151874F0: subu        $t9, $a0, $v1
    ctx->r25 = SUB32(ctx->r4, ctx->r3);
    // 0x151874F4: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151874F8: bnel        $at, $zero, L_15187550
    if (ctx->r1 != 0) {
        // 0x151874FC: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15187550;
    }
    goto skip_3;
    // 0x151874FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_3:
    // 0x15187500: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x15187504: addu        $t6, $a0, $v1
    ctx->r14 = ADD32(ctx->r4, ctx->r3);
    // 0x15187508: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1518750C: bnel        $at, $zero, L_15187550
    if (ctx->r1 != 0) {
        // 0x15187510: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15187550;
    }
    goto skip_4;
    // 0x15187510: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_4:
    // 0x15187514: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x15187518: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x1518751C: subu        $t9, $a0, $v1
    ctx->r25 = SUB32(ctx->r4, ctx->r3);
    // 0x15187520: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15187524: bnel        $at, $zero, L_15187550
    if (ctx->r1 != 0) {
        // 0x15187528: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15187550;
    }
    goto skip_5;
    // 0x15187528: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_5:
    // 0x1518752C: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x15187530: addu        $t6, $a0, $v1
    ctx->r14 = ADD32(ctx->r4, ctx->r3);
    // 0x15187534: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x15187538: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1518753C: bne         $at, $zero, L_1518754C
    if (ctx->r1 != 0) {
        // 0x15187540: addu        $t9, $s1, $t8
        ctx->r25 = ADD32(ctx->r17, ctx->r24);
            goto L_1518754C;
    }
    // 0x15187540: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x15187544: sh          $a3, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r7;
    // 0x15187548: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1518754C:
    // 0x1518754C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_15187550:
    // 0x15187550: slt         $at, $a3, $t1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15187554: bne         $at, $zero, L_151874A8
    if (ctx->r1 != 0) {
        // 0x15187558: addiu       $t0, $t0, 0xA0
        ctx->r8 = ADD32(ctx->r8, 0XA0);
            goto L_151874A8;
    }
    // 0x15187558: addiu       $t0, $t0, 0xA0
    ctx->r8 = ADD32(ctx->r8, 0XA0);
L_1518755C:
    // 0x1518755C: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x15187560: beq         $s0, $zero, L_151875C8
    if (ctx->r16 == 0) {
        // 0x15187564: addiu       $s1, $s1, 0x37E0
        ctx->r17 = ADD32(ctx->r17, 0X37E0);
            goto L_151875C8;
    }
    // 0x15187564: addiu       $s1, $s1, 0x37E0
    ctx->r17 = ADD32(ctx->r17, 0X37E0);
    // 0x15187568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1518756C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15187570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15187574: jal         0x150A44F0
    // 0x15187578: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    func_150A44F0(rdram, ctx);
        goto after_1;
    // 0x15187578: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    after_1:
    // 0x1518757C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15187580: lw          $t6, -0x41C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41C4);
    // 0x15187584: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15187588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1518758C: sw          $t6, 0x3690($at)
    MEM_W(0X3690, ctx->r1) = ctx->r14;
    // 0x15187590: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15187594: sw          $s0, -0xF1C($at)
    MEM_W(-0XF1C, ctx->r1) = ctx->r16;
    // 0x15187598: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1518759C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x151875A0: jal         0x150A5E44
    // 0x151875A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_150A5E44(rdram, ctx);
        goto after_2;
    // 0x151875A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x151875A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x151875AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x151875B0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x151875B4: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x151875B8: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x151875BC: mflo        $t9
    ctx->r25 = lo;
    // 0x151875C0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x151875C4: nop

L_151875C8:
    // 0x151875C8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_151875CC:
    // 0x151875CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151875D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151875D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151875D8: jr          $ra
    // 0x151875DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151875DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1503A60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503A60C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1503A610: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1503A614: addiu       $a1, $a1, 0x3E78
    ctx->r5 = ADD32(ctx->r5, 0X3E78);
    // 0x1503A618: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x1503A61C: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x1503A620: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x1503A624: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1503A628: mflo        $t7
    ctx->r15 = lo;
    // 0x1503A62C: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x1503A630: lw          $v0, 0x1D4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1D4);
    // 0x1503A634: lwc1        $f4, 0x174($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X174);
    // 0x1503A638: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x1503A63C: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    // 0x1503A640: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x1503A644: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1503A648: mflo        $t9
    ctx->r25 = lo;
    // 0x1503A64C: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x1503A650: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1503A654: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x1503A658: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x1503A65C: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1503A660: mflo        $t2
    ctx->r10 = lo;
    // 0x1503A664: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x1503A668: lwc1        $f8, 0x178($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X178);
    // 0x1503A66C: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x1503A670: jr          $ra
    // 0x1503A674: nop

    return;
    return;
    // 0x1503A674: nop

;}
RECOMP_FUNC void func_150CAA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CAA04: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CAA08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CAA0C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CAA10: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CAA14: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x150CAA18: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x150CAA1C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150CAA20: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x150CAA24: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x150CAA28: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150CAA2C: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x150CAA30: sh          $t7, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r15;
    // 0x150CAA34: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150CAA38: jal         0x150ADA20
    // 0x150CAA3C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CAA3C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_0:
    // 0x150CAA40: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150CAA44: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CAA48: mfhi        $t9
    ctx->r25 = hi;
    // 0x150CAA4C: addiu       $t0, $t9, 0x19
    ctx->r8 = ADD32(ctx->r25, 0X19);
    // 0x150CAA50: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x150CAA54: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x150CAA58: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x150CAA5C: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x150CAA60: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x150CAA64: addiu       $t6, $zero, 0x6A
    ctx->r14 = ADD32(0, 0X6A);
    // 0x150CAA68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CAA6C: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x150CAA70: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150CAA74: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150CAA78: sb          $t1, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r9;
    // 0x150CAA7C: sb          $t2, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r10;
    // 0x150CAA80: sb          $t3, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r11;
    // 0x150CAA84: sb          $t4, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r12;
    // 0x150CAA88: sb          $t5, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r13;
    // 0x150CAA8C: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x150CAA90: jal         0x150ADA20
    // 0x150CAA94: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150CAA94: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    after_1:
    // 0x150CAA98: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x150CAA9C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CAAA0: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CAAA4: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x150CAAA8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150CAAAC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150CAAB0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150CAAB4: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
    // 0x150CAAB8: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    // 0x150CAABC: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x150CAAC0: jal         0x150ADA68
    // 0x150CAAC4: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150CAAC4: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    after_2:
    // 0x150CAAC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAACC: lwc1        $f4, 0x5AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5AC);
    // 0x150CAAD0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150CAAD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAAD8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CAADC: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150CAAE0: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150CAAE4: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CAAE8: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150CAAEC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150CAAF0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x150CAAF4: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CAAF8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x150CAAFC: jal         0x150ADA20
    // 0x150CAB00: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150CAB00: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x150CAB04: jal         0x150ADA68
    // 0x150CAB08: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CAB08: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x150CAB0C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150CAB10: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x150CAB14: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CAB18: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x150CAB1C: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CAB20: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CAB24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CAB28: lui         $at, 0x43F9
    ctx->r1 = S32(0X43F9 << 16);
    // 0x150CAB2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAB30: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CAB34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAB38: lwc1        $f16, 0x5B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5B0);
    // 0x150CAB3C: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CAB40: addiu       $a1, $t3, -0x15
    ctx->r5 = ADD32(ctx->r11, -0X15);
    // 0x150CAB44: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150CAB48: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150CAB4C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CAB50: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CAB54: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150CAB58: jal         0x15143794
    // 0x150CAB5C: nop

    func_15143794(rdram, ctx);
        goto after_5;
    // 0x150CAB5C: nop

    after_5:
    // 0x150CAB60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CAB64: addiu       $t6, $zero, 0xE05
    ctx->r14 = ADD32(0, 0XE05);
    // 0x150CAB68: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150CAB6C: jal         0x150ADA20
    // 0x150CAB70: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150CAB70: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x150CAB74: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150CAB78: beq         $t7, $zero, L_150CAB88
    if (ctx->r15 == 0) {
        // 0x150CAB7C: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_150CAB88;
    }
    // 0x150CAB7C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x150CAB80: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x150CAB84: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_150CAB88:
    // 0x150CAB88: jal         0x150ADA20
    // 0x150CAB8C: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150CAB8C: nop

    after_7:
    // 0x150CAB90: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150CAB94: beq         $t0, $zero, L_150CABA8
    if (ctx->r8 == 0) {
        // 0x150CAB98: addiu       $t3, $zero, 0x9
        ctx->r11 = ADD32(0, 0X9);
            goto L_150CABA8;
    }
    // 0x150CAB98: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x150CAB9C: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x150CABA0: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x150CABA4: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
L_150CABA8:
    // 0x150CABA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CABAC: lwc1        $f6, 0x5B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5B4);
    // 0x150CABB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CABB4: lwc1        $f8, 0x5B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5B8);
    // 0x150CABB8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150CABBC: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150CABC0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150CABC4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CABC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CABCC: sb          $t3, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r11;
    // 0x150CABD0: sb          $t4, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r12;
    // 0x150CABD4: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x150CABD8: sh          $t6, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r14;
    // 0x150CABDC: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x150CABE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150CABE4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150CABE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150CABEC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150CABF0: lbu         $a3, 0xE3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CABF4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x150CABF8: jal         0x15130374
    // 0x150CABFC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_15130374(rdram, ctx);
        goto after_8;
    // 0x150CABFC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x150CAC00: beq         $v0, $zero, L_150CAC14
    if (ctx->r2 == 0) {
        // 0x150CAC04: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150CAC14;
    }
    // 0x150CAC04: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150CAC08: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x150CAC0C: jal         0x10022EC0
    // 0x150CAC10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x150CAC10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_9:
L_150CAC14:
    // 0x150CAC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CAC18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CAC1C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CAC20: jr          $ra
    // 0x150CAC24: nop

    return;
    return;
    // 0x150CAC24: nop

;}
RECOMP_FUNC void func_16003650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16003650: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x16003654: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x16003658: addiu       $a0, $a0, 0x38AC
    ctx->r4 = ADD32(ctx->r4, 0X38AC);
    // 0x1600365C: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16003660: addiu       $a1, $a1, 0x392C
    ctx->r5 = ADD32(ctx->r5, 0X392C);
    // 0x16003664: lui         $a2, 0x1600
    ctx->r6 = S32(0X1600 << 16);
    // 0x16003668: addiu       $a2, $a2, 0x39AC
    ctx->r6 = ADD32(ctx->r6, 0X39AC);
    // 0x1600366C: lui         $a3, 0x1600
    ctx->r7 = S32(0X1600 << 16);
    // 0x16003670: addiu       $a3, $a3, 0x3A2C
    ctx->r7 = ADD32(ctx->r7, 0X3A2C);
L_16003674:
    // 0x16003674: mtc0        $t0, Index
    // mtc0 cop0 reg 0
    // 0x16003678: nop

    // 0x1600367C: nop

    // 0x16003680: tlbr

    // 0x16003684: nop

    // 0x16003688: nop

    // 0x1600368C: nop

    // 0x16003690: nop

    // 0x16003694: mfc0        $t1, EntryLo0
    ctx->r9 = 0; // mfc0 cop0 reg 2
    // 0x16003698: nop

    // 0x1600369C: mfc0        $t2, EntryLo1
    ctx->r10 = 0; // mfc0 cop0 reg 3
    // 0x160036A0: nop

    // 0x160036A4: mfc0        $t3, EntryHi
    ctx->r11 = 0; // mfc0 cop0 reg 10
    // 0x160036A8: nop

    // 0x160036AC: mfc0        $t4, PageMask
    ctx->r12 = 0; // mfc0 cop0 reg 5
    // 0x160036B0: nop

    // 0x160036B4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x160036B8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x160036BC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x160036C0: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x160036C4: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x160036C8: addi        $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x160036CC: addi        $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x160036D0: addi        $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x160036D4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x160036D8: bne         $t0, $at, L_16003674
    if (ctx->r8 != ctx->r1) {
        // 0x160036DC: addi        $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_16003674;
    }
    // 0x160036DC: addi        $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x160036E0: jr          $ra
    // 0x160036E4: nop

    return;
    return;
    // 0x160036E4: nop

    // 0x160036E8: nop

    // 0x160036EC: nop

;}
RECOMP_FUNC void func_151D2DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D2DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2DD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D2DD8: jal         0x151D2DAC
    // 0x151D2DDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D2DAC(rdram, ctx);
        goto after_0;
    // 0x151D2DDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D2DE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151D2DE4: lw          $v0, 0x2C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2C);
    // 0x151D2DE8: beq         $v0, $zero, L_151D2DFC
    if (ctx->r2 == 0) {
        // 0x151D2DEC: nop
    
            goto L_151D2DFC;
    }
    // 0x151D2DEC: nop

    // 0x151D2DF0: jal         0x1516972C
    // 0x151D2DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151D2DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x151D2DF8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_151D2DFC:
    // 0x151D2DFC: jal         0x15169804
    // 0x151D2E00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15169804(rdram, ctx);
        goto after_2;
    // 0x151D2E00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x151D2E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D2E0C: jr          $ra
    // 0x151D2E10: nop

    return;
    return;
    // 0x151D2E10: nop

;}
RECOMP_FUNC void func_151BB0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BB0E0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151BB0E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151BB0E8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151BB0EC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x151BB0F0: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x151BB0F4: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x151BB0F8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x151BB0FC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x151BB100: lw          $s0, 0x18($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X18);
    // 0x151BB104: beql        $s0, $zero, L_151BB608
    if (ctx->r16 == 0) {
        // 0x151BB108: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151BB608;
    }
    goto skip_0;
    // 0x151BB108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151BB10C: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
    // 0x151BB110: beql        $t7, $zero, L_151BB608
    if (ctx->r15 == 0) {
        // 0x151BB114: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151BB608;
    }
    goto skip_1;
    // 0x151BB114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151BB118: lw          $v0, 0x1C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1C);
    // 0x151BB11C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BB120: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151BB124: srl         $t3, $v0, 7
    ctx->r11 = S32(U32(ctx->r2) >> 7);
    // 0x151BB128: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x151BB12C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x151BB130: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BB134: srl         $t2, $v0, 16
    ctx->r10 = S32(U32(ctx->r2) >> 16);
    // 0x151BB138: andi        $t9, $t2, 0xFFF
    ctx->r25 = ctx->r10 & 0XFFF;
    // 0x151BB13C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151BB140: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x151BB144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BB148: srl         $t1, $v0, 8
    ctx->r9 = S32(U32(ctx->r2) >> 8);
    // 0x151BB14C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151BB150: andi        $t8, $t1, 0xFF
    ctx->r24 = ctx->r9 & 0XFF;
    // 0x151BB154: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151BB158: sh          $t7, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r15;
    // 0x151BB15C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BB160: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x151BB164: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151BB168: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151BB16C: andi        $a0, $v0, 0x7F
    ctx->r4 = ctx->r2 & 0X7F;
    // 0x151BB170: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151BB174: nop

    // 0x151BB178: sh          $t9, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r25;
    // 0x151BB17C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BB180: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151BB184: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x151BB188: nop

    // 0x151BB18C: sh          $t4, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r12;
    // 0x151BB190: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151BB194: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x151BB198: nop

    // 0x151BB19C: bc1fl       L_151BB1C0
    if (!c1cs) {
        // 0x151BB1A0: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_151BB1C0;
    }
    goto skip_2;
    // 0x151BB1A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_2:
    // 0x151BB1A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151BB1A8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151BB1AC: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x151BB1B0: nop

    // 0x151BB1B4: bc1t        L_151BB1EC
    if (c1cs) {
        // 0x151BB1B8: nop
    
            goto L_151BB1EC;
    }
    // 0x151BB1B8: nop

    // 0x151BB1BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_151BB1C0:
    // 0x151BB1C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151BB1C4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151BB1C8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x151BB1CC: nop

    // 0x151BB1D0: bc1fl       L_151BB1F8
    if (!c1cs) {
        // 0x151BB1D4: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_151BB1F8;
    }
    goto skip_3;
    // 0x151BB1D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_3:
    // 0x151BB1D8: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151BB1DC: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x151BB1E0: nop

    // 0x151BB1E4: bc1fl       L_151BB1F8
    if (!c1cs) {
        // 0x151BB1E8: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_151BB1F8;
    }
    goto skip_4;
    // 0x151BB1E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_4:
L_151BB1EC:
    // 0x151BB1EC: b           L_151BB250
    // 0x151BB1F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151BB250;
    // 0x151BB1F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151BB1F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_151BB1F8:
    // 0x151BB1F8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x151BB1FC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x151BB200: nop

    // 0x151BB204: bc1fl       L_151BB224
    if (!c1cs) {
        // 0x151BB208: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_151BB224;
    }
    goto skip_5;
    // 0x151BB208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_5:
    // 0x151BB20C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151BB210: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x151BB214: nop

    // 0x151BB218: bc1tl       L_151BB250
    if (c1cs) {
        // 0x151BB21C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_151BB250;
    }
    goto skip_6;
    // 0x151BB21C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    skip_6:
    // 0x151BB220: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_151BB224:
    // 0x151BB224: nop

    // 0x151BB228: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151BB22C: nop

    // 0x151BB230: bc1fl       L_151BB254
    if (!c1cs) {
        // 0x151BB234: xor         $v0, $v1, $a0
        ctx->r2 = ctx->r3 ^ ctx->r4;
            goto L_151BB254;
    }
    goto skip_7;
    // 0x151BB234: xor         $v0, $v1, $a0
    ctx->r2 = ctx->r3 ^ ctx->r4;
    skip_7:
    // 0x151BB238: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151BB23C: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x151BB240: nop

    // 0x151BB244: bc1fl       L_151BB254
    if (!c1cs) {
        // 0x151BB248: xor         $v0, $v1, $a0
        ctx->r2 = ctx->r3 ^ ctx->r4;
            goto L_151BB254;
    }
    goto skip_8;
    // 0x151BB248: xor         $v0, $v1, $a0
    ctx->r2 = ctx->r3 ^ ctx->r4;
    skip_8:
    // 0x151BB24C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151BB250:
    // 0x151BB250: xor         $v0, $v1, $a0
    ctx->r2 = ctx->r3 ^ ctx->r4;
L_151BB254:
    // 0x151BB254: andi        $t5, $v0, 0x7F
    ctx->r13 = ctx->r2 & 0X7F;
    // 0x151BB258: beq         $t5, $zero, L_151BB304
    if (ctx->r13 == 0) {
        // 0x151BB25C: andi        $t7, $t5, 0x2
        ctx->r15 = ctx->r13 & 0X2;
            goto L_151BB304;
    }
    // 0x151BB25C: andi        $t7, $t5, 0x2
    ctx->r15 = ctx->r13 & 0X2;
    // 0x151BB260: beq         $t7, $zero, L_151BB278
    if (ctx->r15 == 0) {
        // 0x151BB264: andi        $t8, $v1, 0x2
        ctx->r24 = ctx->r3 & 0X2;
            goto L_151BB278;
    }
    // 0x151BB264: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x151BB268: beql        $t8, $zero, L_151BB27C
    if (ctx->r24 == 0) {
        // 0x151BB26C: addiu       $a0, $zero, 0x4A3
        ctx->r4 = ADD32(0, 0X4A3);
            goto L_151BB27C;
    }
    goto skip_9;
    // 0x151BB26C: addiu       $a0, $zero, 0x4A3
    ctx->r4 = ADD32(0, 0X4A3);
    skip_9:
    // 0x151BB270: b           L_151BB2A0
    // 0x151BB274: addiu       $t0, $zero, 0x4A5
    ctx->r8 = ADD32(0, 0X4A5);
        goto L_151BB2A0;
    // 0x151BB274: addiu       $t0, $zero, 0x4A5
    ctx->r8 = ADD32(0, 0X4A5);
L_151BB278:
    // 0x151BB278: addiu       $a0, $zero, 0x4A3
    ctx->r4 = ADD32(0, 0X4A3);
L_151BB27C:
    // 0x151BB27C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x151BB280: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x151BB284: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151BB288: jal         0x1000F568
    // 0x151BB28C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    func_1000F568(rdram, ctx);
        goto after_0;
    // 0x151BB28C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    after_0:
    // 0x151BB290: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151BB294: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x151BB298: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x151BB29C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_151BB2A0:
    // 0x151BB2A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BB2A4: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x151BB2A8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x151BB2AC: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151BB2B0: jal         0x10010894
    // 0x151BB2B4: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    func_10010894(rdram, ctx);
        goto after_1;
    // 0x151BB2B4: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    after_1:
    // 0x151BB2B8: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151BB2BC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x151BB2C0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x151BB2C4: bne         $v0, $zero, L_151BB300
    if (ctx->r2 != 0) {
        // 0x151BB2C8: lw          $t2, 0x44($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X44);
            goto L_151BB300;
    }
    // 0x151BB2C8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x151BB2CC: addiu       $t9, $zero, 0x708
    ctx->r25 = ADD32(0, 0X708);
    // 0x151BB2D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151BB2D4: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x151BB2D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151BB2DC: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x151BB2E0: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x151BB2E4: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x151BB2E8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151BB2EC: jal         0x10010154
    // 0x151BB2F0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    func_10010154(rdram, ctx);
        goto after_2;
    // 0x151BB2F0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    after_2:
    // 0x151BB2F4: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151BB2F8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x151BB2FC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_151BB300:
    // 0x151BB300: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151BB304:
    // 0x151BB304: beq         $v1, $zero, L_151BB32C
    if (ctx->r3 == 0) {
        // 0x151BB308: lw          $t3, 0x78($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X78);
            goto L_151BB32C;
    }
    // 0x151BB308: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x151BB30C: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x151BB310: addiu       $at, $zero, 0x4A7
    ctx->r1 = ADD32(0, 0X4A7);
    // 0x151BB314: addiu       $t6, $zero, 0x2EE0
    ctx->r14 = ADD32(0, 0X2EE0);
    // 0x151BB318: bne         $t4, $at, L_151BB32C
    if (ctx->r12 != ctx->r1) {
        // 0x151BB31C: nop
    
            goto L_151BB32C;
    }
    // 0x151BB31C: nop

    // 0x151BB320: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x151BB324: b           L_151BB368
    // 0x151BB328: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
        goto L_151BB368;
    // 0x151BB328: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
L_151BB32C:
    // 0x151BB32C: bne         $v1, $zero, L_151BB368
    if (ctx->r3 != 0) {
        // 0x151BB330: lw          $t5, 0x78($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X78);
            goto L_151BB368;
    }
    // 0x151BB330: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x151BB334: lhu         $v0, 0x0($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X0);
    // 0x151BB338: addiu       $a0, $zero, 0x4A9
    ctx->r4 = ADD32(0, 0X4A9);
    // 0x151BB33C: addiu       $at, $zero, 0x4A8
    ctx->r1 = ADD32(0, 0X4A8);
    // 0x151BB340: beq         $a0, $v0, L_151BB350
    if (ctx->r4 == ctx->r2) {
        // 0x151BB344: nop
    
            goto L_151BB350;
    }
    // 0x151BB344: nop

    // 0x151BB348: bne         $v0, $at, L_151BB368
    if (ctx->r2 != ctx->r1) {
        // 0x151BB34C: nop
    
            goto L_151BB368;
    }
    // 0x151BB34C: nop

L_151BB350:
    // 0x151BB350: bne         $a0, $v0, L_151BB360
    if (ctx->r4 != ctx->r2) {
        // 0x151BB354: addiu       $t0, $zero, 0x4A7
        ctx->r8 = ADD32(0, 0X4A7);
            goto L_151BB360;
    }
    // 0x151BB354: addiu       $t0, $zero, 0x4A7
    ctx->r8 = ADD32(0, 0X4A7);
    // 0x151BB358: b           L_151BB608
    // 0x151BB35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151BB608;
    // 0x151BB35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BB360:
    // 0x151BB360: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x151BB364: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
L_151BB368:
    // 0x151BB368: beq         $t0, $zero, L_151BB400
    if (ctx->r8 == 0) {
        // 0x151BB36C: lw          $t9, 0x78($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X78);
            goto L_151BB400;
    }
    // 0x151BB36C: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x151BB370: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BB374: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BB378: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BB37C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151BB380: lui         $at, 0x12C
    ctx->r1 = S32(0X12C << 16);
    // 0x151BB384: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151BB388: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151BB38C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151BB390: ori         $at, $at, 0xFF00
    ctx->r1 = ctx->r1 | 0XFF00;
    // 0x151BB394: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151BB398: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151BB39C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x151BB3A0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151BB3A4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151BB3A8: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x151BB3AC: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151BB3B0: lui         $t5, 0x151C
    ctx->r13 = S32(0X151C << 16);
    // 0x151BB3B4: addiu       $t5, $t5, -0x4F20
    ctx->r13 = ADD32(ctx->r13, -0X4F20);
    // 0x151BB3B8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151BB3BC: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x151BB3C0: or          $t7, $v1, $at
    ctx->r15 = ctx->r3 | ctx->r1;
    // 0x151BB3C4: addiu       $t4, $zero, 0x320
    ctx->r12 = ADD32(0, 0X320);
    // 0x151BB3C8: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x151BB3CC: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151BB3D0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151BB3D4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151BB3D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151BB3DC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151BB3E0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151BB3E4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151BB3E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151BB3EC: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x151BB3F0: jal         0x1000FA64
    // 0x151BB3F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_1000FA64(rdram, ctx);
        goto after_3;
    // 0x151BB3F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x151BB3F8: b           L_151BB608
    // 0x151BB3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151BB608;
    // 0x151BB3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BB400:
    // 0x151BB400: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x151BB404: addiu       $at, $zero, 0x4A7
    ctx->r1 = ADD32(0, 0X4A7);
    // 0x151BB408: beql        $v0, $at, L_151BB578
    if (ctx->r2 == ctx->r1) {
        // 0x151BB40C: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_151BB578;
    }
    goto skip_10;
    // 0x151BB40C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_10:
    // 0x151BB410: bne         $t2, $zero, L_151BB488
    if (ctx->r10 != 0) {
        // 0x151BB414: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151BB488;
    }
    // 0x151BB414: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151BB418: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x151BB41C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x151BB420: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151BB424: mflo        $t6
    ctx->r14 = lo;
    // 0x151BB428: srl         $t5, $t6, 8
    ctx->r13 = S32(U32(ctx->r14) >> 8);
    // 0x151BB42C: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x151BB430: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x151BB434: beql        $t7, $zero, L_151BB478
    if (ctx->r15 == 0) {
        // 0x151BB438: addiu       $t1, $t1, -0x8
        ctx->r9 = ADD32(ctx->r9, -0X8);
            goto L_151BB478;
    }
    goto skip_11;
    // 0x151BB438: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    skip_11:
    // 0x151BB43C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x151BB440: slti        $at, $t1, 0x100
    ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
    // 0x151BB444: bnel        $at, $zero, L_151BB548
    if (ctx->r1 != 0) {
        // 0x151BB448: lwc1        $f0, 0x3C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_151BB548;
    }
    goto skip_12;
    // 0x151BB448: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    skip_12:
    // 0x151BB44C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BB450: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151BB454: jal         0x150ADA20
    // 0x151BB458: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151BB458: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_4:
    // 0x151BB45C: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x151BB460: addiu       $t2, $t2, 0x12C
    ctx->r10 = ADD32(ctx->r10, 0X12C);
    // 0x151BB464: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151BB468: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x151BB46C: b           L_151BB544
    // 0x151BB470: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
        goto L_151BB544;
    // 0x151BB470: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151BB474: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
L_151BB478:
    // 0x151BB478: bgtzl       $t1, L_151BB548
    if (SIGNED(ctx->r9) > 0) {
        // 0x151BB47C: lwc1        $f0, 0x3C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_151BB548;
    }
    goto skip_13;
    // 0x151BB47C: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    skip_13:
    // 0x151BB480: b           L_151BB608
    // 0x151BB484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151BB608;
    // 0x151BB484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BB488:
    // 0x151BB488: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151BB48C: addiu       $at, $zero, 0x4A8
    ctx->r1 = ADD32(0, 0X4A8);
    // 0x151BB490: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x151BB494: bgtzl       $t2, L_151BB548
    if (SIGNED(ctx->r10) > 0) {
        // 0x151BB498: lwc1        $f0, 0x3C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_151BB548;
    }
    goto skip_14;
    // 0x151BB498: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    skip_14:
    // 0x151BB49C: bne         $v0, $at, L_151BB544
    if (ctx->r2 != ctx->r1) {
        // 0x151BB4A0: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_151BB544;
    }
    // 0x151BB4A0: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x151BB4A4: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BB4A8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BB4AC: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BB4B0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151BB4B4: lui         $t7, 0x151C
    ctx->r15 = S32(0X151C << 16);
    // 0x151BB4B8: addiu       $t7, $t7, -0x4F20
    ctx->r15 = ADD32(ctx->r15, -0X4F20);
    // 0x151BB4BC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151BB4C0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151BB4C4: addiu       $t6, $zero, 0x2EE0
    ctx->r14 = ADD32(0, 0X2EE0);
    // 0x151BB4C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151BB4CC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151BB4D0: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x151BB4D4: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151BB4D8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151BB4DC: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x151BB4E0: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151BB4E4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x151BB4E8: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x151BB4EC: addiu       $t5, $zero, 0x320
    ctx->r13 = ADD32(0, 0X320);
    // 0x151BB4F0: ori         $t8, $v1, 0x880
    ctx->r24 = ctx->r3 | 0X880;
    // 0x151BB4F4: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x151BB4F8: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151BB4FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151BB500: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151BB504: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151BB508: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151BB50C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151BB510: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151BB514: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151BB518: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x151BB51C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151BB520: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151BB524: jal         0x1000FA64
    // 0x151BB528: addiu       $a0, $zero, 0x4A9
    ctx->r4 = ADD32(0, 0X4A9);
    func_1000FA64(rdram, ctx);
        goto after_5;
    // 0x151BB528: addiu       $a0, $zero, 0x4A9
    ctx->r4 = ADD32(0, 0X4A9);
    after_5:
    // 0x151BB52C: jal         0x150ADA20
    // 0x151BB530: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151BB530: nop

    after_6:
    // 0x151BB534: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x151BB538: addiu       $t2, $t2, 0x384
    ctx->r10 = ADD32(ctx->r10, 0X384);
    // 0x151BB53C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151BB540: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
L_151BB544:
    // 0x151BB544: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
L_151BB548:
    // 0x151BB548: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x151BB54C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151BB550: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151BB554: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BB558: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151BB55C: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x151BB560: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151BB564: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151BB568: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151BB56C: nop

    // 0x151BB570: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x151BB574: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_151BB578:
    // 0x151BB578: sll         $t9, $t1, 8
    ctx->r25 = S32(ctx->r9 << 8);
    // 0x151BB57C: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x151BB580: sll         $t7, $t3, 7
    ctx->r15 = S32(ctx->r11 << 7);
    // 0x151BB584: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x151BB588: or          $t8, $t7, $v1
    ctx->r24 = ctx->r15 | ctx->r3;
    // 0x151BB58C: or          $t4, $t8, $t9
    ctx->r12 = ctx->r24 | ctx->r25;
    // 0x151BB590: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x151BB594: sw          $t5, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r13;
    // 0x151BB598: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x151BB59C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x151BB5A0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x151BB5A4: beql        $t8, $zero, L_151BB5C0
    if (ctx->r24 == 0) {
        // 0x151BB5A8: lhu         $a0, 0x24($t6)
        ctx->r4 = MEM_HU(ctx->r14, 0X24);
            goto L_151BB5C0;
    }
    goto skip_15;
    // 0x151BB5A8: lhu         $a0, 0x24($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X24);
    skip_15:
    // 0x151BB5AC: lw          $t9, 0x10($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X10);
    // 0x151BB5B0: andi        $t4, $t9, 0x80
    ctx->r12 = ctx->r25 & 0X80;
    // 0x151BB5B4: beq         $t4, $zero, L_151BB5FC
    if (ctx->r12 == 0) {
        // 0x151BB5B8: nop
    
            goto L_151BB5FC;
    }
    // 0x151BB5B8: nop

    // 0x151BB5BC: lhu         $a0, 0x24($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X24);
L_151BB5C0:
    // 0x151BB5C0: beql        $a0, $zero, L_151BB5DC
    if (ctx->r4 == 0) {
        // 0x151BB5C4: lw          $t7, 0x78($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X78);
            goto L_151BB5DC;
    }
    goto skip_16;
    // 0x151BB5C4: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    skip_16:
    // 0x151BB5C8: jal         0x100111C8
    // 0x151BB5CC: nop

    func_100111C8(rdram, ctx);
        goto after_7;
    // 0x151BB5CC: nop

    after_7:
    // 0x151BB5D0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x151BB5D4: sh          $zero, 0x24($t5)
    MEM_H(0X24, ctx->r13) = 0;
    // 0x151BB5D8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
L_151BB5DC:
    // 0x151BB5DC: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x151BB5E0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x151BB5E4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x151BB5E8: lw          $t3, 0x10($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X10);
    // 0x151BB5EC: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x151BB5F0: sw          $t9, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r25;
    // 0x151BB5F4: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x151BB5F8: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
L_151BB5FC:
    // 0x151BB5FC: b           L_151BB608
    // 0x151BB600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151BB608;
    // 0x151BB600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BB604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BB608:
    // 0x151BB608: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151BB60C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151BB610: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151BB614: jr          $ra
    // 0x151BB618: nop

    return;
    return;
    // 0x151BB618: nop

;}
RECOMP_FUNC void func_15101210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15101210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15101214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15101218: lw          $v0, 0x124($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X124);
    // 0x1510121C: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x15101220: jal         0x1513CAA0
    // 0x15101224: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    func_1513CAA0(rdram, ctx);
        goto after_0;
    // 0x15101224: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    after_0:
    // 0x15101228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510122C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15101230: jr          $ra
    // 0x15101234: nop

    return;
    return;
    // 0x15101234: nop

;}
RECOMP_FUNC void func_151A85D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A85D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A85D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A85DC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x151A85E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151A85E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151A85E8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x151A85EC: lw          $v0, -0x6A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6A8);
    // 0x151A85F0: beq         $v0, $zero, L_151A8604
    if (ctx->r2 == 0) {
        // 0x151A85F4: nop
    
            goto L_151A8604;
    }
    // 0x151A85F4: nop

    // 0x151A85F8: jalr        $v0
    // 0x151A85FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151A85FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151A8600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_151A8604:
    // 0x151A8604: jal         0x151A8560
    // 0x151A8608: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151A8560(rdram, ctx);
        goto after_1;
    // 0x151A8608: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x151A860C: jal         0x15169824
    // 0x151A8610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_2;
    // 0x151A8610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x151A8614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A8618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A861C: jr          $ra
    // 0x151A8620: nop

    return;
    return;
    // 0x151A8620: nop

;}
RECOMP_FUNC void func_151C110C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C110C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151C1110: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151C1114: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x151C1118: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x151C111C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C1120: beql        $v1, $zero, L_151C1178
    if (ctx->r3 == 0) {
        // 0x151C1124: sh          $zero, 0x0($t3)
        MEM_H(0X0, ctx->r11) = 0;
            goto L_151C1178;
    }
    goto skip_0;
    // 0x151C1124: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    skip_0:
    // 0x151C1128: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x151C112C: beql        $t6, $zero, L_151C1178
    if (ctx->r14 == 0) {
        // 0x151C1130: sh          $zero, 0x0($t3)
        MEM_H(0X0, ctx->r11) = 0;
            goto L_151C1178;
    }
    goto skip_1;
    // 0x151C1130: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    skip_1:
    // 0x151C1134: lwc1        $f4, 0x38($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151C1138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C113C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C1140: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151C1144: nop

    // 0x151C1148: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x151C114C: lwc1        $f8, 0x3C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x151C1150: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C1154: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x151C1158: nop

    // 0x151C115C: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x151C1160: lwc1        $f16, 0x40($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X40);
    // 0x151C1164: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C1168: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x151C116C: jr          $ra
    // 0x151C1170: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    return;
    return;
    // 0x151C1170: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    // 0x151C1174: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
L_151C1178:
    // 0x151C1178: jr          $ra
    // 0x151C117C: nop

    return;
    return;
    // 0x151C117C: nop

;}
RECOMP_FUNC void func_151572D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151572D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151572D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151572D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151572DC: lbu         $t6, 0x10($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X10);
    // 0x151572E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151572E4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151572E8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151572EC: beq         $t7, $zero, L_15157314
    if (ctx->r15 == 0) {
        // 0x151572F0: nop
    
            goto L_15157314;
    }
    // 0x151572F0: nop

    // 0x151572F4: lh          $t8, 0x16($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X16);
    // 0x151572F8: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151572FC: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x15157300: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x15157304: lh          $t1, 0x16($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X16);
    // 0x15157308: bgez        $t1, L_15157314
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1515730C: nop
    
            goto L_15157314;
    }
    // 0x1515730C: nop

    // 0x15157310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15157314:
    // 0x15157314: bne         $a2, $zero, L_15157394
    if (ctx->r6 != 0) {
        // 0x15157318: nop
    
            goto L_15157394;
    }
    // 0x15157318: nop

    // 0x1515731C: lb          $v0, 0x11($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X11);
    // 0x15157320: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15157324: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15157328: beq         $v0, $at, L_15157358
    if (ctx->r2 == ctx->r1) {
        // 0x1515732C: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_15157358;
    }
    // 0x1515732C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15157330: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x15157334: lw          $t9, -0x5270($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5270);
    // 0x15157338: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1515733C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x15157340: jalr        $t9
    // 0x15157344: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15157344: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_0:
    // 0x15157348: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1515734C: bne         $v0, $zero, L_15157358
    if (ctx->r2 != 0) {
        // 0x15157350: lbu         $a2, 0x1B($sp)
        ctx->r6 = MEM_BU(ctx->r29, 0X1B);
            goto L_15157358;
    }
    // 0x15157350: lbu         $a2, 0x1B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1B);
    // 0x15157354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15157358:
    // 0x15157358: lb          $v0, 0x12($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X12);
    // 0x1515735C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15157360: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15157364: beq         $v0, $at, L_15157394
    if (ctx->r2 == ctx->r1) {
        // 0x15157368: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_15157394;
    }
    // 0x15157368: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x1515736C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x15157370: lw          $t9, -0x5260($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5260);
    // 0x15157374: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15157378: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1515737C: jalr        $t9
    // 0x15157380: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15157380: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_1:
    // 0x15157384: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x15157388: bne         $v0, $zero, L_15157394
    if (ctx->r2 != 0) {
        // 0x1515738C: lbu         $a2, 0x1B($sp)
        ctx->r6 = MEM_BU(ctx->r29, 0X1B);
            goto L_15157394;
    }
    // 0x1515738C: lbu         $a2, 0x1B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1B);
    // 0x15157390: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15157394:
    // 0x15157394: bne         $a2, $zero, L_151573B4
    if (ctx->r6 != 0) {
        // 0x15157398: nop
    
            goto L_151573B4;
    }
    // 0x15157398: nop

    // 0x1515739C: lw          $a0, 0x68($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X68);
    // 0x151573A0: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    // 0x151573A4: jal         0x1503F4B0
    // 0x151573A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_1503F4B0(rdram, ctx);
        goto after_2;
    // 0x151573A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x151573AC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x151573B0: lbu         $a2, 0x1B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1B);
L_151573B4:
    // 0x151573B4: bne         $a2, $zero, L_15157400
    if (ctx->r6 != 0) {
        // 0x151573B8: nop
    
            goto L_15157400;
    }
    // 0x151573B8: nop

    // 0x151573BC: lbu         $t4, 0x10($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X10);
    // 0x151573C0: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x151573C4: beq         $t5, $zero, L_15157400
    if (ctx->r13 == 0) {
        // 0x151573C8: nop
    
            goto L_15157400;
    }
    // 0x151573C8: nop

    // 0x151573CC: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x151573D0: lh          $t6, 0x64($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X64);
    // 0x151573D4: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151573D8: beq         $at, $zero, L_15157400
    if (ctx->r1 == 0) {
        // 0x151573DC: nop
    
            goto L_15157400;
    }
    // 0x151573DC: nop

    // 0x151573E0: lh          $t7, 0x66($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X66);
    // 0x151573E4: lbu         $t8, 0x43($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X43);
    // 0x151573E8: multu       $v1, $t7
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151573EC: mflo        $v0
    ctx->r2 = lo;
    // 0x151573F0: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151573F4: beq         $at, $zero, L_15157400
    if (ctx->r1 == 0) {
        // 0x151573F8: nop
    
            goto L_15157400;
    }
    // 0x151573F8: nop

    // 0x151573FC: sb          $v0, 0x43($a1)
    MEM_B(0X43, ctx->r5) = ctx->r2;
L_15157400:
    // 0x15157400: beql        $a2, $zero, L_15157414
    if (ctx->r6 == 0) {
        // 0x15157404: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15157414;
    }
    goto skip_0;
    // 0x15157404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15157408: jal         0x1516972C
    // 0x1515740C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x1515740C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x15157410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15157414:
    // 0x15157414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15157418: jr          $ra
    // 0x1515741C: nop

    return;
    return;
    // 0x1515741C: nop

;}
RECOMP_FUNC void func_1502F01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502F01C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1502F020: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1502F024: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x1502F028: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1502F02C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1502F030: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1502F034: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1502F038: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1502F03C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1502F040: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502F044: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1502F048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502F04C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1502F050: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1502F054: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502F058: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x1502F05C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502F060: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1502F064: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502F068: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1502F06C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1502F070: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1502F074: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502F078: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x1502F07C: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x1502F080: lbu         $s5, 0x4($s4)
    ctx->r21 = MEM_BU(ctx->r20, 0X4);
    // 0x1502F084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502F088: addiu       $fp, $fp, 0x1C90
    ctx->r30 = ADD32(ctx->r30, 0X1C90);
    // 0x1502F08C: or          $s3, $s4, $zero
    ctx->r19 = ctx->r20 | 0;
    // 0x1502F090: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502F094: addiu       $s1, $sp, 0x80
    ctx->r17 = ADD32(ctx->r29, 0X80);
    // 0x1502F098: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_1502F09C:
    // 0x1502F09C: lbu         $v0, 0x6C($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X6C);
    // 0x1502F0A0: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x1502F0A4: addu        $s2, $fp, $t9
    ctx->r18 = ADD32(ctx->r30, ctx->r25);
    // 0x1502F0A8: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x1502F0AC: bne         $at, $zero, L_1502F0C0
    if (ctx->r1 != 0) {
        // 0x1502F0B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1502F0C0;
    }
    // 0x1502F0B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1502F0B4: addiu       $t8, $v1, -0xA
    ctx->r24 = ADD32(ctx->r3, -0XA);
    // 0x1502F0B8: b           L_1502F154
    // 0x1502F0BC: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
        goto L_1502F154;
    // 0x1502F0BC: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
L_1502F0C0:
    // 0x1502F0C0: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1502F0C4: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x1502F0C8: subu        $t1, $t1, $s0
    ctx->r9 = SUB32(ctx->r9, ctx->r16);
    // 0x1502F0CC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1502F0D0: lbu         $v1, 0x6F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X6F);
    // 0x1502F0D4: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x1502F0D8: lbu         $t4, 0x8($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8);
    // 0x1502F0DC: beq         $v1, $zero, L_1502F0F8
    if (ctx->r3 == 0) {
        // 0x1502F0E0: sb          $t4, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r12;
            goto L_1502F0F8;
    }
    // 0x1502F0E0: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
    // 0x1502F0E4: bne         $a2, $zero, L_1502F0F8
    if (ctx->r6 != 0) {
        // 0x1502F0E8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_1502F0F8;
    }
    // 0x1502F0E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1502F0EC: jal         0x1507E908
    // 0x1502F0F0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    func_1507E908(rdram, ctx);
        goto after_0;
    // 0x1502F0F0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_0:
    // 0x1502F0F4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_1502F0F8:
    // 0x1502F0F8: beql        $a2, $zero, L_1502F158
    if (ctx->r6 == 0) {
        // 0x1502F0FC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1502F158;
    }
    goto skip_0;
    // 0x1502F0FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1502F100: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x1502F104: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1502F108: addu        $v0, $sp, $t7
    ctx->r2 = ADD32(ctx->r29, ctx->r15);
    // 0x1502F10C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x1502F110: lbu         $t6, 0x1($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1);
    // 0x1502F114: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x1502F118: beq         $a2, $zero, L_1502F154
    if (ctx->r6 == 0) {
        // 0x1502F11C: sw          $t6, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r14;
            goto L_1502F154;
    }
    // 0x1502F11C: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x1502F120: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x1502F124: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x1502F128: lw          $v0, 0x68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X68);
    // 0x1502F12C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1502F130: lbu         $t1, 0xA($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XA);
    // 0x1502F134: beql        $v0, $t1, L_1502F154
    if (ctx->r2 == ctx->r9) {
        // 0x1502F138: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_1502F154;
    }
    goto skip_1;
    // 0x1502F138: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    skip_1:
    // 0x1502F13C: lbu         $t2, 0x6C($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X6C);
    // 0x1502F140: bnel        $t2, $zero, L_1502F158
    if (ctx->r10 != 0) {
        // 0x1502F144: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1502F158;
    }
    goto skip_2;
    // 0x1502F144: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x1502F148: b           L_1502F154
    // 0x1502F14C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_1502F154;
    // 0x1502F14C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x1502F150: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_1502F154:
    // 0x1502F154: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1502F158:
    // 0x1502F158: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1502F15C: bne         $s0, $s7, L_1502F09C
    if (ctx->r16 != ctx->r23) {
        // 0x1502F160: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1502F09C;
    }
    // 0x1502F160: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1502F164: lbu         $v1, 0x4($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X4);
    // 0x1502F168: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1502F16C: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x1502F170: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x1502F174: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x1502F178: lw          $v0, 0x5338($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5338);
    // 0x1502F17C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x1502F180: or          $v1, $s6, $zero
    ctx->r3 = ctx->r22 | 0;
    // 0x1502F184: beq         $v0, $zero, L_1502F230
    if (ctx->r2 == 0) {
        // 0x1502F188: ori         $t4, $t4, 0x18
        ctx->r12 = ctx->r12 | 0X18;
            goto L_1502F230;
    }
    // 0x1502F188: ori         $t4, $t4, 0x18
    ctx->r12 = ctx->r12 | 0X18;
    // 0x1502F18C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x1502F190: lbu         $t5, 0x80($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X80);
    // 0x1502F194: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
    // 0x1502F198: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x1502F19C: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F1A0: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x1502F1A4: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x1502F1A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x1502F1AC: ori         $t4, $t4, 0x28
    ctx->r12 = ctx->r12 | 0X28;
    // 0x1502F1B0: mflo        $t6
    ctx->r14 = lo;
    // 0x1502F1B4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1502F1B8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1502F1BC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x1502F1C0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x1502F1C4: lbu         $t0, 0x81($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X81);
    // 0x1502F1C8: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
    // 0x1502F1CC: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x1502F1D0: multu       $t0, $a3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F1D4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1502F1D8: ori         $t9, $t9, 0x2C
    ctx->r25 = ctx->r25 | 0X2C;
    // 0x1502F1DC: mflo        $t1
    ctx->r9 = lo;
    // 0x1502F1E0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x1502F1E4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1502F1E8: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x1502F1EC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x1502F1F0: lbu         $t5, 0x68($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X68);
    // 0x1502F1F4: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
    // 0x1502F1F8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x1502F1FC: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F200: mflo        $t6
    ctx->r14 = lo;
    // 0x1502F204: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1502F208: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1502F20C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x1502F210: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x1502F214: lbu         $t0, 0x69($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X69);
    // 0x1502F218: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
    // 0x1502F21C: multu       $t0, $a3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F220: mflo        $t1
    ctx->r9 = lo;
    // 0x1502F224: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x1502F228: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1502F22C: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
L_1502F230:
    // 0x1502F230: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x1502F234: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1502F238: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502F23C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1502F240: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1502F244: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1502F248: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1502F24C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1502F250: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1502F254: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1502F258: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1502F25C: jr          $ra
    // 0x1502F260: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1502F260: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_15040950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040950: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040954: jr          $ra
    // 0x15040958: nop

    return;
    return;
    // 0x15040958: nop

;}
RECOMP_FUNC void func_1506F8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F8F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506F8F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1506F8F8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1506F8FC: jal         0x150ADA68
    // 0x1506F900: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1506F900: nop

    after_0:
    // 0x1506F904: lui         $at, 0x43F1
    ctx->r1 = S32(0X43F1 << 16);
    // 0x1506F908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506F90C: lui         $at, 0xC2FE
    ctx->r1 = S32(0XC2FE << 16);
    // 0x1506F910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506F914: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x1506F918: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506F91C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F920: lwc1        $f10, -0x6168($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6168);
    // 0x1506F924: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F928: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F92C: lui         $at, 0xC353
    ctx->r1 = S32(0XC353 << 16);
    // 0x1506F930: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506F934: lui         $at, 0xC2E4
    ctx->r1 = S32(0XC2E4 << 16);
    // 0x1506F938: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506F93C: lbu         $a1, 0x3B($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3B);
    // 0x1506F940: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1506F944: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1506F948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506F94C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1506F950: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1506F954: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506F958: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1506F95C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1506F960: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1506F964: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1506F968: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506F96C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x1506F970: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x1506F974: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1506F978: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1506F97C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506F980: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1506F984: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1506F988: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1506F98C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1506F990: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1506F994: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1506F998: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1506F99C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1506F9A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1506F9A4: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x1506F9A8: jal         0x150E2EA4
    // 0x1506F9AC: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_150E2EA4(rdram, ctx);
        goto after_1;
    // 0x1506F9AC: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x1506F9B0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1506F9B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1506F9B8: jr          $ra
    // 0x1506F9BC: nop

    return;
    return;
    // 0x1506F9BC: nop

;}
RECOMP_FUNC void func_1513D6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513D6FC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x1513D700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1513D704: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1513D708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1513D70C: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x1513D710: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x1513D714: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x1513D718: lbu         $t6, 0xDB($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XDB);
    // 0x1513D71C: lh          $a0, 0xC6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XC6);
    // 0x1513D720: beq         $t6, $zero, L_1513D98C
    if (ctx->r14 == 0) {
        // 0x1513D724: addiu       $a0, $a0, -0x40
        ctx->r4 = ADD32(ctx->r4, -0X40);
            goto L_1513D98C;
    }
    // 0x1513D724: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1513D728: lh          $a0, 0xC6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XC6);
    // 0x1513D72C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1513D730: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1513D734: jal         0x151423D8
    // 0x1513D738: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1513D738: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x1513D73C: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x1513D740: jal         0x151423D8
    // 0x1513D744: lbu         $a0, 0xC7($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XC7);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1513D744: lbu         $a0, 0xC7($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XC7);
    after_1:
    // 0x1513D748: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1513D74C: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1513D750: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x1513D754: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513D758: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x1513D75C: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    // 0x1513D760: mul.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1513D764: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    // 0x1513D768: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x1513D76C: jal         0x1510E388
    // 0x1513D770: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    func_1510E388(rdram, ctx);
        goto after_2;
    // 0x1513D770: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x1513D774: bne         $v0, $zero, L_1513D784
    if (ctx->r2 != 0) {
        // 0x1513D778: lwc1        $f14, 0xA4($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
            goto L_1513D784;
    }
    // 0x1513D778: lwc1        $f14, 0xA4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1513D77C: b           L_1513DAEC
    // 0x1513D780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513DAEC;
    // 0x1513D780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513D784:
    // 0x1513D784: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1513D788: abs.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = fabsf(ctx->f14.fl);
    // 0x1513D78C: mul.s       $f18, $f14, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1513D790: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x1513D794: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1513D798: nop

    // 0x1513D79C: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1513D7A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513D7A4: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1513D7A8: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1513D7AC: sqrt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = sqrtf(ctx->f10.fl);
    // 0x1513D7B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1513D7B4: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1513D7B8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1513D7BC: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1513D7C0: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x1513D7C4: nop

    // 0x1513D7C8: bc1t        L_1513D7FC
    if (c1cs) {
        // 0x1513D7CC: nop
    
            goto L_1513D7FC;
    }
    // 0x1513D7CC: nop

    // 0x1513D7D0: mul.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1513D7D4: abs.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = fabsf(ctx->f16.fl);
    // 0x1513D7D8: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1513D7DC: nop

    // 0x1513D7E0: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1513D7E4: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x1513D7E8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513D7EC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1513D7F0: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1513D7F4: b           L_1513D80C
    // 0x1513D7F8: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
        goto L_1513D80C;
    // 0x1513D7F8: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
L_1513D7FC:
    // 0x1513D7FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1513D800: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1513D804: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x1513D808: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
L_1513D80C:
    // 0x1513D80C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1513D810: nop

    // 0x1513D814: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x1513D818: nop

    // 0x1513D81C: bc1tl       L_1513D83C
    if (c1cs) {
        // 0x1513D820: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_1513D83C;
    }
    goto skip_0;
    // 0x1513D820: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_0:
    // 0x1513D824: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1513D828: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513D82C: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x1513D830: b           L_1513D844
    // 0x1513D834: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
        goto L_1513D844;
    // 0x1513D834: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1513D838: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_1513D83C:
    // 0x1513D83C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1513D840: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
L_1513D844:
    // 0x1513D844: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1513D848: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513D84C: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1513D850: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x1513D854: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1513D858: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1513D85C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1513D860: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1513D864: nop

    // 0x1513D868: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1513D86C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513D870: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1513D874: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x1513D878: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513D87C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x1513D880: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x1513D884: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1513D888: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1513D88C: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1513D890: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1513D894: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x1513D898: mul.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x1513D89C: abs.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = fabsf(ctx->f18.fl);
    // 0x1513D8A0: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1513D8A4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1513D8A8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1513D8AC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x1513D8B0: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513D8B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1513D8B8: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1513D8BC: sqrt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = sqrtf(ctx->f4.fl);
    // 0x1513D8C0: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1513D8C4: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x1513D8C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1513D8CC: bc1t        L_1513D900
    if (c1cs) {
        // 0x1513D8D0: nop
    
            goto L_1513D900;
    }
    // 0x1513D8D0: nop

    // 0x1513D8D4: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1513D8D8: abs.s       $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = fabsf(ctx->f10.fl);
    // 0x1513D8DC: mov.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = ctx->f10.fl;
    // 0x1513D8E0: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1513D8E4: nop

    // 0x1513D8E8: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1513D8EC: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x1513D8F0: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1513D8F4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1513D8F8: b           L_1513D914
    // 0x1513D8FC: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
        goto L_1513D914;
    // 0x1513D8FC: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_1513D900:
    // 0x1513D900: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1513D904: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1513D908: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1513D90C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x1513D910: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
L_1513D914:
    // 0x1513D914: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1513D918: mul.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1513D91C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1513D920: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x1513D924: nop

    // 0x1513D928: bc1tl       L_1513D948
    if (c1cs) {
        // 0x1513D92C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_1513D948;
    }
    goto skip_1;
    // 0x1513D92C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_1:
    // 0x1513D930: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513D934: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1513D938: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1513D93C: b           L_1513D950
    // 0x1513D940: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
        goto L_1513D950;
    // 0x1513D940: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1513D944: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_1513D948:
    // 0x1513D948: nop

    // 0x1513D94C: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
L_1513D950:
    // 0x1513D950: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x1513D954: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1513D958: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1513D95C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513D960: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1513D964: nop

    // 0x1513D968: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1513D96C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513D970: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513D974: mul.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x1513D978: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513D97C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x1513D980: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x1513D984: b           L_1513DAEC
    // 0x1513D988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1513DAEC;
    // 0x1513D988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1513D98C:
    // 0x1513D98C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x1513D990: jal         0x151423D8
    // 0x1513D994: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x1513D994: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x1513D998: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x1513D99C: jal         0x151423D8
    // 0x1513D9A0: lbu         $a0, 0xC7($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XC7);
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x1513D9A0: lbu         $a0, 0xC7($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XC7);
    after_4:
    // 0x1513D9A4: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x1513D9A8: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x1513D9AC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x1513D9B0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x1513D9B4: jal         0x15144E80
    // 0x1513D9B8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_15144E80(rdram, ctx);
        goto after_5;
    // 0x1513D9B8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_5:
    // 0x1513D9BC: bne         $v0, $zero, L_1513D9CC
    if (ctx->r2 != 0) {
        // 0x1513D9C0: addiu       $a0, $sp, 0x6C
        ctx->r4 = ADD32(ctx->r29, 0X6C);
            goto L_1513D9CC;
    }
    // 0x1513D9C0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1513D9C4: b           L_1513DAEC
    // 0x1513D9C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513DAEC;
    // 0x1513D9C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513D9CC:
    // 0x1513D9CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513D9D0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x1513D9D4: jal         0x15145128
    // 0x1513D9D8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_15145128(rdram, ctx);
        goto after_6;
    // 0x1513D9D8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x1513D9DC: bne         $v0, $zero, L_1513D9EC
    if (ctx->r2 != 0) {
        // 0x1513D9E0: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_1513D9EC;
    }
    // 0x1513D9E0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x1513D9E4: b           L_1513DAEC
    // 0x1513D9E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513DAEC;
    // 0x1513D9E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513D9EC:
    // 0x1513D9EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513D9F0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x1513D9F4: jal         0x15145128
    // 0x1513D9F8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_15145128(rdram, ctx);
        goto after_7;
    // 0x1513D9F8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_7:
    // 0x1513D9FC: bne         $v0, $zero, L_1513DA0C
    if (ctx->r2 != 0) {
        // 0x1513DA00: lwc1        $f16, 0x7C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_1513DA0C;
    }
    // 0x1513DA00: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1513DA04: b           L_1513DAEC
    // 0x1513DA08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513DAEC;
    // 0x1513DA08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513DA0C:
    // 0x1513DA0C: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1513DA10: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1513DA14: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1513DA18: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513DA1C: mul.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1513DA20: nop

    // 0x1513DA24: mul.s       $f2, $f4, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1513DA28: nop

    // 0x1513DA2C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1513DA30: nop

    // 0x1513DA34: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1513DA38: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1513DA3C: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x1513DA40: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1513DA44: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513DA48: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1513DA4C: nop

    // 0x1513DA50: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1513DA54: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1513DA58: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x1513DA5C: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1513DA60: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1513DA64: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1513DA68: nop

    // 0x1513DA6C: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1513DA70: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513DA74: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x1513DA78: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1513DA7C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1513DA80: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x1513DA84: mul.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1513DA88: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513DA8C: mul.s       $f14, $f6, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1513DA90: nop

    // 0x1513DA94: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x1513DA98: nop

    // 0x1513DA9C: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1513DAA0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513DAA4: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x1513DAA8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1513DAAC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513DAB0: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x1513DAB4: nop

    // 0x1513DAB8: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x1513DABC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1513DAC0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x1513DAC4: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1513DAC8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1513DACC: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1513DAD0: nop

    // 0x1513DAD4: mul.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x1513DAD8: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1513DADC: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x1513DAE0: b           L_1513DAEC
    // 0x1513DAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1513DAEC;
    // 0x1513DAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513DAE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1513DAEC:
    // 0x1513DAEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1513DAF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1513DAF4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x1513DAF8: jr          $ra
    // 0x1513DAFC: nop

    return;
    return;
    // 0x1513DAFC: nop

;}
RECOMP_FUNC void func_151C7E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C7E98: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x151C7E9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151C7EA0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x151C7EA4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151C7EA8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151C7EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C7EB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151C7EB4: lbu         $t8, 0x196($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X196);
    // 0x151C7EB8: addiu       $t0, $s0, 0x110
    ctx->r8 = ADD32(ctx->r16, 0X110);
    // 0x151C7EBC: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x151C7EC0: bnel        $t9, $zero, L_151C7ED4
    if (ctx->r25 != 0) {
        // 0x151C7EC4: lbu         $t1, 0x86($t0)
        ctx->r9 = MEM_BU(ctx->r8, 0X86);
            goto L_151C7ED4;
    }
    goto skip_0;
    // 0x151C7EC4: lbu         $t1, 0x86($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X86);
    skip_0:
    // 0x151C7EC8: b           L_151C82BC
    // 0x151C7ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C82BC;
    // 0x151C7ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C7ED0: lbu         $t1, 0x86($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X86);
L_151C7ED4:
    // 0x151C7ED4: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x151C7ED8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151C7EDC: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x151C7EE0: beq         $t2, $zero, L_151C7F20
    if (ctx->r10 == 0) {
        // 0x151C7EE4: addiu       $a3, $sp, 0x84
        ctx->r7 = ADD32(ctx->r29, 0X84);
            goto L_151C7F20;
    }
    // 0x151C7EE4: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x151C7EE8: lw          $t4, 0x8C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X8C);
    // 0x151C7EEC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C7EF0: sllv        $v0, $t3, $a1
    ctx->r2 = S32(ctx->r11 << (ctx->r5 & 31));
    // 0x151C7EF4: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x151C7EF8: and         $t6, $t5, $v0
    ctx->r14 = ctx->r13 & ctx->r2;
    // 0x151C7EFC: bnel        $t6, $zero, L_151C7F24
    if (ctx->r14 != 0) {
        // 0x151C7F00: addiu       $t1, $sp, 0x43
        ctx->r9 = ADD32(ctx->r29, 0X43);
            goto L_151C7F24;
    }
    goto skip_1;
    // 0x151C7F00: addiu       $t1, $sp, 0x43
    ctx->r9 = ADD32(ctx->r29, 0X43);
    skip_1:
    // 0x151C7F04: lw          $t7, 0x90($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X90);
    // 0x151C7F08: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x151C7F0C: and         $t9, $t8, $v0
    ctx->r25 = ctx->r24 & ctx->r2;
    // 0x151C7F10: bnel        $t9, $zero, L_151C7F24
    if (ctx->r25 != 0) {
        // 0x151C7F14: addiu       $t1, $sp, 0x43
        ctx->r9 = ADD32(ctx->r29, 0X43);
            goto L_151C7F24;
    }
    goto skip_2;
    // 0x151C7F14: addiu       $t1, $sp, 0x43
    ctx->r9 = ADD32(ctx->r29, 0X43);
    skip_2:
    // 0x151C7F18: b           L_151C82BC
    // 0x151C7F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C82BC;
    // 0x151C7F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C7F20:
    // 0x151C7F20: addiu       $t1, $sp, 0x43
    ctx->r9 = ADD32(ctx->r29, 0X43);
L_151C7F24:
    // 0x151C7F24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151C7F28: sh          $a1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r5;
    // 0x151C7F2C: jal         0x151D5D60
    // 0x151C7F30: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151C7F30: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x151C7F34: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x151C7F38: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151C7F3C: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x151C7F40: beq         $v0, $zero, L_151C7F94
    if (ctx->r2 == 0) {
        // 0x151C7F44: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_151C7F94;
    }
    // 0x151C7F44: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x151C7F48: beq         $t2, $zero, L_151C7F9C
    if (ctx->r10 == 0) {
        // 0x151C7F4C: lh          $t3, 0x8E($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X8E);
            goto L_151C7F9C;
    }
    // 0x151C7F4C: lh          $t3, 0x8E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X8E);
    // 0x151C7F50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x151C7F54: addu        $v1, $s0, $t4
    ctx->r3 = ADD32(ctx->r16, ctx->r12);
    // 0x151C7F58: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x151C7F5C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x151C7F60: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x151C7F64: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x151C7F68: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x151C7F6C: jal         0x10022EC0
    // 0x151C7F70: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151C7F70: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x151C7F74: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x151C7F78: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151C7F7C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151C7F80: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x151C7F84: jal         0x10022EC0
    // 0x151C7F88: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151C7F88: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x151C7F8C: b           L_151C7F9C
    // 0x151C7F90: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
        goto L_151C7F9C;
    // 0x151C7F90: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_151C7F94:
    // 0x151C7F94: b           L_151C82BC
    // 0x151C7F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C82BC;
    // 0x151C7F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C7F9C:
    // 0x151C7F9C: lh          $a0, 0x8E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X8E);
    // 0x151C7FA0: jal         0x15144B34
    // 0x151C7FA4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_15144B34(rdram, ctx);
        goto after_3;
    // 0x151C7FA4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_3:
    // 0x151C7FA8: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C7FAC: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C7FB0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x151C7FB4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x151C7FB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C7FBC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x151C7FC0: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x151C7FC4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x151C7FC8: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C7FCC: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C7FD0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C7FD4: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x151C7FD8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C7FDC: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C7FE0: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x151C7FE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151C7FE8: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151C7FEC: jal         0x15145548
    // 0x151C7FF0: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    func_15145548(rdram, ctx);
        goto after_4;
    // 0x151C7FF0: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x151C7FF4: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x151C7FF8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151C7FFC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151C8000: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151C8004: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151C8008: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151C800C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151C8010: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151C8014: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151C8018: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151C801C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151C8020: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151C8024: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151C8028: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151C802C: nop

    // 0x151C8030: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151C8034: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151C8038: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151C803C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151C8040: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x151C8044: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C8048: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151C804C: nop

    // 0x151C8050: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151C8054: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151C8058: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151C805C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x151C8060: nop

    // 0x151C8064: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151C8068: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x151C806C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151C8070: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x151C8074: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151C8078: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151C807C: c.eq.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl == ctx->f14.fl;
    // 0x151C8080: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x151C8084: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151C8088: bc1f        L_151C80A4
    if (!c1cs) {
        // 0x151C808C: nop
    
            goto L_151C80A4;
    }
    // 0x151C808C: nop

    // 0x151C8090: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151C8094: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151C8098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C809C: b           L_151C80D4
    // 0x151C80A0: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
        goto L_151C80D4;
    // 0x151C80A0: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
L_151C80A4:
    // 0x151C80A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151C80A8: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151C80AC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151C80B0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151C80B4: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151C80B8: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151C80BC: nop

    // 0x151C80C0: mul.s       $f14, $f4, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151C80C4: nop

    // 0x151C80C8: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151C80CC: nop

    // 0x151C80D0: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
L_151C80D4:
    // 0x151C80D4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x151C80D8: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x151C80DC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C80E0: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151C80E4: nop

    // 0x151C80E8: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x151C80EC: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C80F0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x151C80F4: sub.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x151C80F8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C80FC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151C8100: nop

    // 0x151C8104: sh          $t9, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r25;
    // 0x151C8108: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C810C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x151C8110: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x151C8114: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C8118: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151C811C: nop

    // 0x151C8120: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x151C8124: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151C8128: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x151C812C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8130: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151C8134: nop

    // 0x151C8138: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x151C813C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x151C8140: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151C8144: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x151C8148: addiu       $t1, $t9, 0x10
    ctx->r9 = ADD32(ctx->r25, 0X10);
    // 0x151C814C: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x151C8150: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C8154: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x151C8158: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C815C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151C8160: nop

    // 0x151C8164: sh          $t3, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r11;
    // 0x151C8168: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C816C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x151C8170: sub.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x151C8174: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C8178: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151C817C: nop

    // 0x151C8180: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x151C8184: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C8188: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x151C818C: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151C8190: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C8194: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151C8198: nop

    // 0x151C819C: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x151C81A0: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151C81A4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x151C81A8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C81AC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151C81B0: nop

    // 0x151C81B4: sh          $t3, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r11;
    // 0x151C81B8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x151C81BC: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x151C81C0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x151C81C4: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x151C81C8: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x151C81CC: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C81D0: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151C81D4: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C81D8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151C81DC: nop

    // 0x151C81E0: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x151C81E4: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C81E8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x151C81EC: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151C81F0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C81F4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151C81F8: nop

    // 0x151C81FC: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
    // 0x151C8200: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C8204: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x151C8208: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151C820C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8210: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x151C8214: nop

    // 0x151C8218: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x151C821C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151C8220: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x151C8224: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C8228: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151C822C: nop

    // 0x151C8230: sh          $t8, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r24;
    // 0x151C8234: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x151C8238: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x151C823C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x151C8240: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x151C8244: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
    // 0x151C8248: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C824C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x151C8250: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C8254: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151C8258: nop

    // 0x151C825C: sh          $t4, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r12;
    // 0x151C8260: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C8264: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x151C8268: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x151C826C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8270: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151C8274: nop

    // 0x151C8278: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151C827C: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C8280: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x151C8284: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151C8288: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C828C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151C8290: nop

    // 0x151C8294: sh          $t9, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r25;
    // 0x151C8298: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151C829C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x151C82A0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C82A4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151C82A8: nop

    // 0x151C82AC: sh          $t4, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r12;
    // 0x151C82B0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x151C82B4: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x151C82B8: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
L_151C82BC:
    // 0x151C82BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151C82C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151C82C4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x151C82C8: jr          $ra
    // 0x151C82CC: nop

    return;
    return;
    // 0x151C82CC: nop

;}
RECOMP_FUNC void func_15071690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15071694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071698: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1507169C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150716A0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150716A4: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x150716A8: beql        $t6, $zero, L_150716E0
    if (ctx->r14 == 0) {
        // 0x150716AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150716E0;
    }
    goto skip_0;
    // 0x150716AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150716B0: lbu         $t7, 0x74($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X74);
    // 0x150716B4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150716B8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x150716BC: beql        $t8, $at, L_150716E0
    if (ctx->r24 == ctx->r1) {
        // 0x150716C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150716E0;
    }
    goto skip_1;
    // 0x150716C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150716C4: jal         0x150B60E0
    // 0x150716C8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_150B60E0(rdram, ctx);
        goto after_0;
    // 0x150716C8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x150716CC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150716D0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150716D4: jal         0x150B5C38
    // 0x150716D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150B5C38(rdram, ctx);
        goto after_1;
    // 0x150716D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x150716DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150716E0:
    // 0x150716E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150716E4: jr          $ra
    // 0x150716E8: nop

    return;
    return;
    // 0x150716E8: nop

;}
RECOMP_FUNC void func_151452C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151452C4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151452C8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x151452CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151452D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151452D4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x151452D8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151452DC: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x151452E0: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151452E4: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x151452E8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151452EC: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x151452F0: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x151452F4: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x151452F8: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x151452FC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15145300: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x15145304: addiu       $t0, $sp, 0x4C
    ctx->r8 = ADD32(ctx->r29, 0X4C);
    // 0x15145308: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1514530C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x15145310: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x15145314: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15145318: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1514531C: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x15145320: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15145324: lw          $t3, 0x4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X4);
    // 0x15145328: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1514532C: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x15145330: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15145334: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15145338: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1514533C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15145340: nop

    // 0x15145344: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x15145348: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1514534C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15145350: mul.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x15145354: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15145358: mul.s       $f18, $f6, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1514535C: nop

    // 0x15145360: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15145364: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15145368: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1514536C: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x15145370: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15145374: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15145378: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1514537C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15145380: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15145384: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x15145388: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1514538C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15145390: bc1f        L_151453A0
    if (!c1cs) {
        // 0x15145394: nop
    
            goto L_151453A0;
    }
    // 0x15145394: nop

    // 0x15145398: b           L_151454AC
    // 0x1514539C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151454AC;
    // 0x1514539C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151453A0:
    // 0x151453A0: sub.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x151453A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151453A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x151453AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x151453B0: bc1fl       L_151453C0
    if (!c1cs) {
        // 0x151453B4: sub.s       $f0, $f16, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_151453C0;
    }
    goto skip_0;
    // 0x151453B4: sub.s       $f0, $f16, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f12.fl;
    skip_0:
    // 0x151453B8: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x151453BC: sub.s       $f0, $f16, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f12.fl;
L_151453C0:
    // 0x151453C0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151453C4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151453C8: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x151453CC: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151453D0: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x151453D4: add.s       $f2, $f16, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x151453D8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151453DC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x151453E0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151453E4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151453E8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151453EC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151453F0: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x151453F4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151453F8: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151453FC: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15145400: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15145404: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x15145408: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x1514540C: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x15145410: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15145414: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15145418: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1514541C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15145420: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x15145424: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15145428: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1514542C: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15145430: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15145434: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x15145438: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1514543C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15145440: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15145444: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15145448: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x1514544C: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x15145450: swc1        $f2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f2.u32l;
    // 0x15145454: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15145458: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x1514545C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15145460: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15145464: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x15145468: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x1514546C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15145470: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15145474: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x15145478: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x1514547C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15145480: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15145484: jal         0x15144A74
    // 0x15145488: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_15144A74(rdram, ctx);
        goto after_0;
    // 0x15145488: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514548C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15145490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15145494: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15145498: nop

    // 0x1514549C: bc1f        L_151454AC
    if (!c1cs) {
        // 0x151454A0: nop
    
            goto L_151454AC;
    }
    // 0x151454A0: nop

    // 0x151454A4: b           L_151454AC
    // 0x151454A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151454AC;
    // 0x151454A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151454AC:
    // 0x151454AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151454B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151454B4: jr          $ra
    // 0x151454B8: nop

    return;
    return;
    // 0x151454B8: nop

;}
RECOMP_FUNC void func_15104C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104C44: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x15104C48: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15104C4C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15104C50: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15104C54: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x15104C58: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15104C5C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x15104C60: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15104C64: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15104C68: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x15104C6C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x15104C70: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15104C74: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15104C78: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15104C7C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15104C80: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15104C84: lh          $t6, 0x30($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X30);
    // 0x15104C88: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x15104C8C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15104C90: bltzl       $t6, L_15104FBC
    if (SIGNED(ctx->r14) < 0) {
        // 0x15104C94: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15104FBC;
    }
    goto skip_0;
    // 0x15104C94: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x15104C98: lh          $t7, 0x8($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X8);
    // 0x15104C9C: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15104CA0: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x15104CA4: addiu       $a0, $a0, -0x10C0
    ctx->r4 = ADD32(ctx->r4, -0X10C0);
    // 0x15104CA8: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x15104CAC: sh          $t9, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r25;
    // 0x15104CB0: lh          $t0, 0x8($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X8);
    // 0x15104CB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15104CB8: bgez        $t0, L_15104CC8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15104CBC: nop
    
            goto L_15104CC8;
    }
    // 0x15104CBC: nop

    // 0x15104CC0: jal         0x1000FD38
    // 0x15104CC4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_1000FD38(rdram, ctx);
        goto after_0;
    // 0x15104CC4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_0:
L_15104CC8:
    // 0x15104CC8: jal         0x151464B8
    // 0x15104CCC: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    func_151464B8(rdram, ctx);
        goto after_1;
    // 0x15104CCC: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    after_1:
    // 0x15104CD0: bnel        $v0, $zero, L_15104FBC
    if (ctx->r2 != 0) {
        // 0x15104CD4: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15104FBC;
    }
    goto skip_1;
    // 0x15104CD4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_1:
    // 0x15104CD8: jal         0x150ADA68
    // 0x15104CDC: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15104CDC: nop

    after_2:
    // 0x15104CE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15104CE4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15104CE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15104CEC: lwc1        $f4, 0x23AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X23AC);
    // 0x15104CF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15104CF4: lwc1        $f6, 0x23B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X23B0);
    // 0x15104CF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15104CFC: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15104D00: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15104D04: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15104D08: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15104D0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15104D10: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15104D14: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15104D18: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x15104D1C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15104D20: addiu       $t5, $zero, 0x61
    ctx->r13 = ADD32(0, 0X61);
    // 0x15104D24: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15104D28: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15104D2C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x15104D30: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15104D34: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x15104D38: nop

    // 0x15104D3C: bc1fl       L_15104FBC
    if (!c1cs) {
        // 0x15104D40: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15104FBC;
    }
    goto skip_2;
    // 0x15104D40: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x15104D44: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15104D48: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x15104D4C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15104D50: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x15104D54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15104D58: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x15104D5C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15104D60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15104D64: sb          $t1, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r9;
    // 0x15104D68: sb          $t2, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r10;
    // 0x15104D6C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15104D70: sh          $t3, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r11;
    // 0x15104D74: sh          $t4, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r12;
    // 0x15104D78: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x15104D7C: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x15104D80: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x15104D84: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15104D88: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x15104D8C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15104D90: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x15104D94: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x15104D98: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15104D9C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15104DA0: addiu       $t6, $zero, 0xF2
    ctx->r14 = ADD32(0, 0XF2);
    // 0x15104DA4: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15104DA8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15104DAC: addiu       $t8, $s1, 0x20
    ctx->r24 = ADD32(ctx->r17, 0X20);
    // 0x15104DB0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15104DB4: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15104DB8: lwc1        $f18, 0x14($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X14);
    // 0x15104DBC: addiu       $fp, $sp, 0x74
    ctx->r30 = ADD32(ctx->r29, 0X74);
    // 0x15104DC0: addiu       $s7, $sp, 0x70
    ctx->r23 = ADD32(ctx->r29, 0X70);
    // 0x15104DC4: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x15104DC8: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x15104DCC: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15104DD0: sb          $t5, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r13;
    // 0x15104DD4: sb          $t6, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r14;
    // 0x15104DD8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15104DDC: sb          $t7, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r15;
    // 0x15104DE0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x15104DE4: addiu       $s6, $sp, 0x7C
    ctx->r22 = ADD32(ctx->r29, 0X7C);
    // 0x15104DE8: sub.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f26.fl;
    // 0x15104DEC: addiu       $s5, $sp, 0x78
    ctx->r21 = ADD32(ctx->r29, 0X78);
    // 0x15104DF0: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x15104DF4: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x15104DF8: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
L_15104DFC:
    // 0x15104DFC: jal         0x150ADA20
    // 0x15104E00: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15104E00: nop

    after_3:
    // 0x15104E04: jal         0x150ADA68
    // 0x15104E08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15104E08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_4:
    // 0x15104E0C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15104E10: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x15104E14: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x15104E18: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x15104E1C: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15104E20: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15104E24: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x15104E28: add.s       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x15104E2C: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15104E30: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15104E34: jal         0x15143874
    // 0x15104E38: nop

    func_15143874(rdram, ctx);
        goto after_5;
    // 0x15104E38: nop

    after_5:
    // 0x15104E3C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15104E40: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15104E44: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15104E48: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15104E4C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15104E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15104E54: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x15104E58: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x15104E5C: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x15104E60: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15104E64: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x15104E68: jal         0x15046C80
    // 0x15104E6C: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    func_15046C80(rdram, ctx);
        goto after_6;
    // 0x15104E6C: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    after_6:
    // 0x15104E70: beql        $v0, $zero, L_15104F9C
    if (ctx->r2 == 0) {
        // 0x15104E74: lwc1        $f10, 0x4($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
            goto L_15104F9C;
    }
    goto skip_3;
    // 0x15104E74: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    skip_3:
    // 0x15104E78: jal         0x150ADA20
    // 0x15104E7C: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15104E7C: nop

    after_7:
    // 0x15104E80: jal         0x150ADA68
    // 0x15104E84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15104E84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x15104E88: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15104E8C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x15104E90: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x15104E94: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15104E98: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x15104E9C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x15104EA0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15104EA4: jal         0x15143874
    // 0x15104EA8: nop

    func_15143874(rdram, ctx);
        goto after_9;
    // 0x15104EA8: nop

    after_9:
    // 0x15104EAC: jal         0x150ADA20
    // 0x15104EB0: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15104EB0: nop

    after_10:
    // 0x15104EB4: jal         0x150ADA68
    // 0x15104EB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x15104EB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x15104EBC: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15104EC0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x15104EC4: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x15104EC8: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15104ECC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x15104ED0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x15104ED4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15104ED8: jal         0x15143874
    // 0x15104EDC: nop

    func_15143874(rdram, ctx);
        goto after_12;
    // 0x15104EDC: nop

    after_12:
    // 0x15104EE0: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15104EE4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15104EE8: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15104EEC: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15104EF0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15104EF4: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15104EF8: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x15104EFC: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x15104F00: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15104F04: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15104F08: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15104F0C: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x15104F10: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x15104F14: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15104F18: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15104F1C: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x15104F20: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15104F24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15104F28: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x15104F2C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x15104F30: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x15104F34: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x15104F38: jal         0x150ADA20
    // 0x15104F3C: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x15104F3C: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x15104F40: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x15104F44: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15104F48: mfhi        $t5
    ctx->r13 = hi;
    // 0x15104F4C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x15104F50: jal         0x150ADA20
    // 0x15104F54: sh          $t6, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x15104F54: sh          $t6, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r14;
    after_14:
    // 0x15104F58: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x15104F5C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15104F60: mfhi        $t7
    ctx->r15 = hi;
    // 0x15104F64: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x15104F68: jal         0x150ADA20
    // 0x15104F6C: sb          $t8, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x15104F6C: sb          $t8, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r24;
    after_15:
    // 0x15104F70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15104F74: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15104F78: mfhi        $t9
    ctx->r25 = hi;
    // 0x15104F7C: addiu       $t0, $t9, 0x5
    ctx->r8 = ADD32(ctx->r25, 0X5);
    // 0x15104F80: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    // 0x15104F84: lbu         $a3, 0x1($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X1);
    // 0x15104F88: lbu         $a2, 0xC($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XC);
    // 0x15104F8C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x15104F90: jal         0x15105CE0
    // 0x15104F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15105CE0(rdram, ctx);
        goto after_16;
    // 0x15104F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x15104F98: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
L_15104F9C:
    // 0x15104F9C: sub.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x15104FA0: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x15104FA4: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15104FA8: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x15104FAC: nop

    // 0x15104FB0: bc1t        L_15104DFC
    if (c1cs) {
        // 0x15104FB4: nop
    
            goto L_15104DFC;
    }
    // 0x15104FB4: nop

    // 0x15104FB8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_15104FBC:
    // 0x15104FBC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15104FC0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15104FC4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15104FC8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15104FCC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15104FD0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x15104FD4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15104FD8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x15104FDC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x15104FE0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x15104FE4: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x15104FE8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x15104FEC: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x15104FF0: jr          $ra
    // 0x15104FF4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x15104FF4: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_15174BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15174BF0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x15174BF4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x15174BF8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x15174BFC: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x15174C00: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x15174C04: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x15174C08: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x15174C0C: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x15174C10: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x15174C14: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x15174C18: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x15174C1C: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x15174C20: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x15174C24: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x15174C28: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x15174C2C: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x15174C30: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x15174C34: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x15174C38: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x15174C3C: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x15174C40: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x15174C44: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x15174C48: mtc1        $s7, $f4
    ctx->f4.u32l = ctx->r23;
    // 0x15174C4C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15174C50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15174C54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15174C58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15174C5C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15174C60: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x15174C64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15174C68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15174C6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15174C70: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x15174C74: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15174C78: lwc1        $f8, 0x2F8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x15174C7C: mtc1        $s6, $f16
    ctx->f16.u32l = ctx->r22;
    // 0x15174C80: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x15174C84: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15174C88: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x15174C8C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15174C90: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15174C94: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x15174C98: lwc1        $f18, 0x2FC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x15174C9C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15174CA0: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x15174CA4: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x15174CA8: lwc1        $f10, 0x300($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15174CAC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15174CB0: jal         0x15048FC8
    // 0x15174CB4: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    func_15048FC8(rdram, ctx);
        goto after_0;
    // 0x15174CB4: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15174CB8: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15174CBC: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x15174CC0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15174CC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15174CC8: mfc1        $fp, $f18
    ctx->r30 = (int32_t)ctx->f18.u32l;
    // 0x15174CCC: blez        $t1, L_15174F5C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x15174CD0: lwc1        $f26, 0xF0($sp)
        ctx->f26.u32l = MEM_W(ctx->r29, 0XF0);
            goto L_15174F5C;
    }
    // 0x15174CD0: lwc1        $f26, 0xF0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x15174CD4: lwc1        $f30, 0x7174($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X7174);
    // 0x15174CD8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15174CDC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15174CE0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15174CE4: lwc1        $f24, 0xF4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15174CE8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
L_15174CEC:
    // 0x15174CEC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15174CF0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15174CF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15174CF8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x15174CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15174D00: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x15174D04: jal         0x15167A68
    // 0x15174D08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_1;
    // 0x15174D08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x15174D0C: beq         $v0, $zero, L_15174F5C
    if (ctx->r2 == 0) {
        // 0x15174D10: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15174F5C;
    }
    // 0x15174D10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15174D14: lw          $s5, 0xF8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF8);
    // 0x15174D18: andi        $t4, $s5, 0x1
    ctx->r12 = ctx->r21 & 0X1;
    // 0x15174D1C: jal         0x150ADA20
    // 0x15174D20: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15174D20: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    after_2:
    // 0x15174D24: andi        $t5, $v0, 0x7F
    ctx->r13 = ctx->r2 & 0X7F;
    // 0x15174D28: addu        $s2, $t5, $s7
    ctx->r18 = ADD32(ctx->r13, ctx->r23);
    // 0x15174D2C: jal         0x150ADA20
    // 0x15174D30: addiu       $s2, $s2, -0x3F
    ctx->r18 = ADD32(ctx->r18, -0X3F);
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15174D30: addiu       $s2, $s2, -0x3F
    ctx->r18 = ADD32(ctx->r18, -0X3F);
    after_3:
    // 0x15174D34: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x15174D38: andi        $t7, $v0, 0x7F
    ctx->r15 = ctx->r2 & 0X7F;
    // 0x15174D3C: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x15174D40: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x15174D44: addiu       $s3, $v1, -0x3F
    ctx->r19 = ADD32(ctx->r3, -0X3F);
    // 0x15174D48: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x15174D4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15174D50: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x15174D54: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x15174D58: sh          $t9, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r25;
    // 0x15174D5C: swc1        $f22, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f22.u32l;
    // 0x15174D60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15174D64: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
    // 0x15174D68: sb          $t8, 0x90($s0)
    MEM_B(0X90, ctx->r16) = ctx->r24;
    // 0x15174D6C: jal         0x150ADA20
    // 0x15174D70: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15174D70: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x15174D74: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15174D78: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15174D7C: mfhi        $t0
    ctx->r8 = hi;
    // 0x15174D80: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x15174D84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15174D88: sh          $t1, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r9;
    // 0x15174D8C: jal         0x150ADA20
    // 0x15174D90: sh          $t2, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15174D90: sh          $t2, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r10;
    after_5:
    // 0x15174D94: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x15174D98: addu        $v1, $t3, $fp
    ctx->r3 = ADD32(ctx->r11, ctx->r30);
    // 0x15174D9C: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x15174DA0: bgez        $v1, L_15174DB0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15174DA4: or          $s1, $v1, $zero
        ctx->r17 = ctx->r3 | 0;
            goto L_15174DB0;
    }
    // 0x15174DA4: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x15174DA8: b           L_15174DC0
    // 0x15174DAC: addiu       $s1, $v1, 0x168
    ctx->r17 = ADD32(ctx->r3, 0X168);
        goto L_15174DC0;
    // 0x15174DAC: addiu       $s1, $v1, 0x168
    ctx->r17 = ADD32(ctx->r3, 0X168);
L_15174DB0:
    // 0x15174DB0: slti        $at, $v1, 0x168
    ctx->r1 = SIGNED(ctx->r3) < 0X168 ? 1 : 0;
    // 0x15174DB4: bne         $at, $zero, L_15174DC0
    if (ctx->r1 != 0) {
        // 0x15174DB8: nop
    
            goto L_15174DC0;
    }
    // 0x15174DB8: nop

    // 0x15174DBC: addiu       $s1, $v1, -0x168
    ctx->r17 = ADD32(ctx->r3, -0X168);
L_15174DC0:
    // 0x15174DC0: jal         0x150ADA20
    // 0x15174DC4: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15174DC4: nop

    after_6:
    // 0x15174DC8: andi        $t4, $v0, 0x1F
    ctx->r12 = ctx->r2 & 0X1F;
    // 0x15174DCC: addiu       $t5, $t4, -0xF
    ctx->r13 = ADD32(ctx->r12, -0XF);
    // 0x15174DD0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x15174DD4: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x15174DD8: swc1        $f20, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f20.u32l;
    // 0x15174DDC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15174DE0: swc1        $f28, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f28.u32l;
    // 0x15174DE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15174DE8: swc1        $f18, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f18.u32l;
    // 0x15174DEC: jal         0x150ADA20
    // 0x15174DF0: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15174DF0: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    after_7:
    // 0x15174DF4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x15174DF8: addiu       $t6, $t7, -0x80
    ctx->r14 = ADD32(ctx->r15, -0X80);
    // 0x15174DFC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15174E00: swc1        $f20, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f20.u32l;
    // 0x15174E04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15174E08: mul.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x15174E0C: jal         0x150ADA20
    // 0x15174E10: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15174E10: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    after_8:
    // 0x15174E14: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x15174E18: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15174E1C: lui         $at, 0x3800
    ctx->r1 = S32(0X3800 << 16);
    // 0x15174E20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15174E24: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15174E28: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15174E2C: nop

    // 0x15174E30: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x15174E34: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x15174E38: jal         0x150ADA20
    // 0x15174E3C: swc1        $f16, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15174E3C: swc1        $f16, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f16.u32l;
    after_9:
    // 0x15174E40: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x15174E44: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15174E48: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x15174E4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15174E50: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15174E54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15174E58: lw          $t0, -0x2178($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2178);
    // 0x15174E5C: sb          $v1, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r3;
    // 0x15174E60: bne         $s4, $zero, L_15174EA8
    if (ctx->r20 != 0) {
        // 0x15174E64: sw          $t0, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r8;
            goto L_15174EA8;
    }
    // 0x15174E64: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
    // 0x15174E68: addiu       $t1, $zero, 0x3E8
    ctx->r9 = ADD32(0, 0X3E8);
    // 0x15174E6C: addiu       $t2, $zero, 0xFA0
    ctx->r10 = ADD32(0, 0XFA0);
    // 0x15174E70: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x15174E74: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x15174E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15174E7C: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x15174E80: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x15174E84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15174E88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15174E8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15174E90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x15174E94: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x15174E98: jal         0x10010E78
    // 0x15174E9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    func_10010E78(rdram, ctx);
        goto after_10;
    // 0x15174E9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_10:
    // 0x15174EA0: b           L_15174EAC
    // 0x15174EA4: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
        goto L_15174EAC;
    // 0x15174EA4: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
L_15174EA8:
    // 0x15174EA8: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
L_15174EAC:
    // 0x15174EAC: beq         $s5, $zero, L_15174F40
    if (ctx->r21 == 0) {
        // 0x15174EB0: sw          $zero, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = 0;
            goto L_15174F40;
    }
    // 0x15174EB0: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x15174EB4: lh          $t3, 0x92($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X92);
    // 0x15174EB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15174EBC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15174EC0: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x15174EC4: sh          $t4, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r12;
    // 0x15174EC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15174ECC: jal         0x1510F8D8
    // 0x15174ED0: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    func_1510F8D8(rdram, ctx);
        goto after_11;
    // 0x15174ED0: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    after_11:
    // 0x15174ED4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x15174ED8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15174EDC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15174EE0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15174EE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15174EE8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x15174EEC: swc1        $f4, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f4.u32l;
    // 0x15174EF0: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x15174EF4: beq         $t5, $zero, L_15174F24
    if (ctx->r13 == 0) {
        // 0x15174EF8: nop
    
            goto L_15174F24;
    }
    // 0x15174EF8: nop

    // 0x15174EFC: lw          $t7, -0x41C4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X41C4);
    // 0x15174F00: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15174F04: lw          $t8, -0x41A4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41A4);
    // 0x15174F08: subu        $v0, $t5, $t7
    ctx->r2 = SUB32(ctx->r13, ctx->r15);
    // 0x15174F0C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15174F10: mflo        $t6
    ctx->r14 = lo;
    // 0x15174F14: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x15174F18: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15174F1C: b           L_15174F24
    // 0x15174F20: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
        goto L_15174F24;
    // 0x15174F20: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_15174F24:
    // 0x15174F24: srl         $t1, $v1, 5
    ctx->r9 = S32(U32(ctx->r3) >> 5);
    // 0x15174F28: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x15174F2C: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x15174F30: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15174F34: lbu         $t3, 0x7170($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X7170);
    // 0x15174F38: b           L_15174F44
    // 0x15174F3C: sb          $t3, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r11;
        goto L_15174F44;
    // 0x15174F3C: sb          $t3, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r11;
L_15174F40:
    // 0x15174F40: sb          $zero, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = 0;
L_15174F44:
    // 0x15174F44: sb          $zero, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = 0;
    // 0x15174F48: sb          $zero, 0xF1($s0)
    MEM_B(0XF1, ctx->r16) = 0;
    // 0x15174F4C: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x15174F50: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15174F54: bnel        $s4, $t4, L_15174CEC
    if (ctx->r20 != ctx->r12) {
        // 0x15174F58: addiu       $t2, $zero, 0xFF
        ctx->r10 = ADD32(0, 0XFF);
            goto L_15174CEC;
    }
    goto skip_0;
    // 0x15174F58: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    skip_0:
L_15174F5C:
    // 0x15174F5C: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x15174F60: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x15174F64: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x15174F68: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x15174F6C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x15174F70: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x15174F74: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x15174F78: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x15174F7C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x15174F80: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x15174F84: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x15174F88: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x15174F8C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x15174F90: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x15174F94: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x15174F98: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x15174F9C: jr          $ra
    // 0x15174FA0: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x15174FA0: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_151454BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151454BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151454C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151454C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151454C8: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x151454CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151454D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x151454D4: jal         0x15144B34
    // 0x151454D8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x151454D8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x151454DC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x151454E0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151454E4: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151454E8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151454EC: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151454F0: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x151454F4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151454F8: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151454FC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15145500: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15145504: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15145508: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x1514550C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15145510: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15145514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15145518: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1514551C: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15145520: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15145524: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15145528: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x1514552C: nop

    // 0x15145530: bc1f        L_15145540
    if (!c1cs) {
        // 0x15145534: nop
    
            goto L_15145540;
    }
    // 0x15145534: nop

    // 0x15145538: b           L_15145540
    // 0x1514553C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15145540;
    // 0x1514553C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15145540:
    // 0x15145540: jr          $ra
    // 0x15145544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15145544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15079570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15079574: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15079578: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1507957C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079580: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15079584: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079588: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1507958C: lbu         $t6, 0x222($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X222);
    // 0x15079590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15079594: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15079598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507959C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150795A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150795A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150795A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150795AC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150795B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150795B4: jal         0x1505A6F8
    // 0x150795B8: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    func_1505A6F8(rdram, ctx);
        goto after_0;
    // 0x150795B8: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x150795BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150795C0: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x150795C4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150795C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150795CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150795D0: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150795D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150795D8: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x150795DC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150795E0: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150795E4: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150795E8: div.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150795EC: add.s       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x150795F0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150795F4: nop

    // 0x150795F8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150795FC: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x15079600: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15079604: lbu         $t9, 0x222($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X222);
    // 0x15079608: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1507960C: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15079610: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15079614: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15079618: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1507961C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15079620: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15079624: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15079628: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1507962C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15079630: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15079634: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x15079638: lwc1        $f4, -0x3D18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x1507963C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15079640: div.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15079644: add.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x15079648: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1507964C: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x15079650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15079654: jr          $ra
    // 0x15079658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15079658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151E84B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E84B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E84B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E84B8: lui         $t6, 0x900
    ctx->r14 = S32(0X900 << 16);
    // 0x151E84BC: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x151E84C0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E84C4: sw          $t6, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r14;
    // 0x151E84C8: jal         0x151ED1E0
    // 0x151E84CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151ED1E0(rdram, ctx);
        goto after_0;
    // 0x151E84CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x151E84D0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E84D4: lbu         $t7, 0xB94($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XB94);
    // 0x151E84D8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E84DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151E84E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151E84E4: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x151E84E8: lw          $v1, -0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC);
    // 0x151E84EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x151E84F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151E84F4: beq         $v1, $zero, L_151E850C
    if (ctx->r3 == 0) {
        // 0x151E84F8: nop
    
            goto L_151E850C;
    }
    // 0x151E84F8: nop

    // 0x151E84FC: jalr        $v1
    // 0x151E8500: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x151E8500: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x151E8504: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151E8508: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_151E850C:
    // 0x151E850C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x151E8510: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x151E8514: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151E8518: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E851C: beq         $t9, $zero, L_151E85C8
    if (ctx->r25 == 0) {
        // 0x151E8520: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_151E85C8;
    }
    // 0x151E8520: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E8524: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x151E8528: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E852C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151E8530: beq         $t1, $zero, L_151E858C
    if (ctx->r9 == 0) {
        // 0x151E8534: nop
    
            goto L_151E858C;
    }
    // 0x151E8534: nop

    // 0x151E8538: lb          $t2, -0x270($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X270);
    // 0x151E853C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151E8540: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x151E8544: bne         $at, $zero, L_151E858C
    if (ctx->r1 != 0) {
        // 0x151E8548: nop
    
            goto L_151E858C;
    }
    // 0x151E8548: nop

    // 0x151E854C: lbu         $t3, -0x18C0($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X18C0);
    // 0x151E8550: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E8554: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x151E8558: bne         $t4, $zero, L_151E85C8
    if (ctx->r12 != 0) {
        // 0x151E855C: nop
    
            goto L_151E85C8;
    }
    // 0x151E855C: nop

    // 0x151E8560: lb          $v0, 0xBD3($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBD3);
    // 0x151E8564: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E8568: bnel        $v0, $at, L_151E857C
    if (ctx->r2 != ctx->r1) {
        // 0x151E856C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151E857C;
    }
    goto skip_0;
    // 0x151E856C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x151E8570: b           L_151E85C8
    // 0x151E8574: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
        goto L_151E85C8;
    // 0x151E8574: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x151E8578: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_151E857C:
    // 0x151E857C: bne         $v0, $at, L_151E85C8
    if (ctx->r2 != ctx->r1) {
        // 0x151E8580: nop
    
            goto L_151E85C8;
    }
    // 0x151E8580: nop

    // 0x151E8584: b           L_151E85C8
    // 0x151E8588: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
        goto L_151E85C8;
    // 0x151E8588: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
L_151E858C:
    // 0x151E858C: lbu         $t5, -0x18C0($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X18C0);
    // 0x151E8590: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E8594: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x151E8598: bne         $t6, $zero, L_151E85C8
    if (ctx->r14 != 0) {
        // 0x151E859C: nop
    
            goto L_151E85C8;
    }
    // 0x151E859C: nop

    // 0x151E85A0: lb          $v0, 0xBD3($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBD3);
    // 0x151E85A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E85A8: bnel        $v0, $at, L_151E85BC
    if (ctx->r2 != ctx->r1) {
        // 0x151E85AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151E85BC;
    }
    goto skip_1;
    // 0x151E85AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x151E85B0: b           L_151E85C8
    // 0x151E85B4: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
        goto L_151E85C8;
    // 0x151E85B4: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x151E85B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_151E85BC:
    // 0x151E85BC: bne         $v0, $at, L_151E85C8
    if (ctx->r2 != ctx->r1) {
        // 0x151E85C0: nop
    
            goto L_151E85C8;
    }
    // 0x151E85C0: nop

    // 0x151E85C4: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
L_151E85C8:
    // 0x151E85C8: beq         $t0, $zero, L_151E8604
    if (ctx->r8 == 0) {
        // 0x151E85CC: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_151E8604;
    }
    // 0x151E85CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E85D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151E85D4: jal         0x1504332C
    // 0x151E85D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_1504332C(rdram, ctx);
        goto after_2;
    // 0x151E85D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_2:
    // 0x151E85DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151E85E0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E85E4: lw          $t7, 0xBD8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XBD8);
    // 0x151E85E8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x151E85EC: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E85F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151E85F4: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x151E85F8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x151E85FC: jal         0x15042D94
    // 0x151E8600: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x151E8600: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_3:
L_151E8604:
    // 0x151E8604: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E8608: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x151E860C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x151E8610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E8614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151E8618: jr          $ra
    // 0x151E861C: nop

    return;
    return;
    // 0x151E861C: nop

;}
RECOMP_FUNC void func_15074644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074644: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15074648: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507464C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15074650: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15074654: lw          $t8, 0x31C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X31C);
    // 0x15074658: sb          $t6, 0x11A($t8)
    MEM_B(0X11A, ctx->r24) = ctx->r14;
    // 0x1507465C: jr          $ra
    // 0x15074660: nop

    return;
    return;
    // 0x15074660: nop

;}
RECOMP_FUNC void func_151C61A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C61A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151C61A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C61A8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151C61AC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151C61B0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151C61B4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151C61B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C61BC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151C61C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C61C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C61C8: lwc1        $f8, -0x550C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X550C);
    // 0x151C61CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C61D0: lwc1        $f10, -0x5508($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5508);
    // 0x151C61D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C61D8: lwc1        $f16, -0x5504($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5504);
    // 0x151C61DC: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x151C61E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C61E4: lui         $at, 0x42DA
    ctx->r1 = S32(0X42DA << 16);
    // 0x151C61E8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151C61EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C61F0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151C61F4: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x151C61F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C61FC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x151C6200: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x151C6204: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C6208: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151C620C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151C6210: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C6214: addiu       $t0, $zero, -0x18
    ctx->r8 = ADD32(0, -0X18);
    // 0x151C6218: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x151C621C: addiu       $t2, $zero, 0xBE
    ctx->r10 = ADD32(0, 0XBE);
    // 0x151C6220: addiu       $t3, $zero, 0x41
    ctx->r11 = ADD32(0, 0X41);
    // 0x151C6224: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x151C6228: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x151C622C: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x151C6230: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x151C6234: sh          $t9, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r25;
    // 0x151C6238: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
    // 0x151C623C: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x151C6240: sb          $t2, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r10;
    // 0x151C6244: sb          $t3, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r11;
    // 0x151C6248: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x151C624C: sh          $t5, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r13;
    // 0x151C6250: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151C6254: lbu         $a1, 0x63($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X63);
    // 0x151C6258: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x151C625C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x151C6260: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x151C6264: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x151C6268: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x151C626C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151C6270: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x151C6274: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x151C6278: jal         0x15154684
    // 0x151C627C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    func_15154684(rdram, ctx);
        goto after_0;
    // 0x151C627C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    after_0:
    // 0x151C6280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C6284: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151C6288: jr          $ra
    // 0x151C628C: nop

    return;
    return;
    // 0x151C628C: nop

;}
RECOMP_FUNC void func_1514B034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514B034: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1514B038: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x1514B03C: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x1514B040: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x1514B044: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1514B048: andi        $s6, $a1, 0xFF
    ctx->r22 = ctx->r5 & 0XFF;
    // 0x1514B04C: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x1514B050: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1514B054: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x1514B058: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x1514B05C: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x1514B060: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x1514B064: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x1514B068: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x1514B06C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x1514B070: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x1514B074: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x1514B078: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1514B07C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1514B080: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x1514B084: jal         0x150ADA68
    // 0x1514B088: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1514B088: nop

    after_0:
    // 0x1514B08C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514B090: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1514B094: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1514B098: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514B09C: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x1514B0A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514B0A4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1514B0A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B0AC: lwc1        $f16, 0x5808($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5808);
    // 0x1514B0B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B0B4: lwc1        $f4, 0x580C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X580C);
    // 0x1514B0B8: addiu       $t6, $zero, 0x6231
    ctx->r14 = ADD32(0, 0X6231);
    // 0x1514B0BC: addiu       $t7, $zero, 0x1A4D
    ctx->r15 = ADD32(0, 0X1A4D);
    // 0x1514B0C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1514B0C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514B0C8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514B0CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1514B0D0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1514B0D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1514B0D8: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x1514B0DC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1514B0E0: addiu       $s5, $zero, 0x9C
    ctx->r21 = ADD32(0, 0X9C);
    // 0x1514B0E4: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x1514B0E8: addiu       $s3, $sp, 0x8C
    ctx->r19 = ADD32(ctx->r29, 0X8C);
    // 0x1514B0EC: mul.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514B0F0: addiu       $s1, $sp, 0x84
    ctx->r17 = ADD32(ctx->r29, 0X84);
    // 0x1514B0F4: c.lt.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl < ctx->f24.fl;
    // 0x1514B0F8: nop

    // 0x1514B0FC: bc1fl       L_1514B324
    if (!c1cs) {
        // 0x1514B100: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_1514B324;
    }
    goto skip_0;
    // 0x1514B100: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x1514B104: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x1514B108: sh          $t7, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r15;
    // 0x1514B10C: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x1514B110: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1514B114: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1514B118: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x1514B11C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1514B120: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B124: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x1514B128: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
    // 0x1514B12C: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x1514B130: sb          $t8, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r24;
    // 0x1514B134: sb          $t9, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r25;
    // 0x1514B138: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x1514B13C: sb          $t0, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r8;
    // 0x1514B140: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x1514B144: sh          $t1, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r9;
    // 0x1514B148: sb          $t2, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r10;
    // 0x1514B14C: lwc1        $f22, 0x5810($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5810);
    // 0x1514B150: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x1514B154: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
L_1514B158:
    // 0x1514B158: jal         0x150ADA20
    // 0x1514B15C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1514B15C: nop

    after_1:
    // 0x1514B160: jal         0x150ADA68
    // 0x1514B164: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1514B164: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x1514B168: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1514B16C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1514B170: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x1514B174: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1514B178: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x1514B17C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x1514B180: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1514B184: jal         0x15143874
    // 0x1514B188: nop

    func_15143874(rdram, ctx);
        goto after_3;
    // 0x1514B188: nop

    after_3:
    // 0x1514B18C: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1514B190: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1514B194: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1514B198: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514B19C: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x1514B1A0: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x1514B1A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1514B1A8: jal         0x150ADA68
    // 0x1514B1AC: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1514B1AC: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x1514B1B0: mul.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1514B1B4: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x1514B1B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1514B1BC: nop

    // 0x1514B1C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514B1C4: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1514B1C8: jal         0x150ADA68
    // 0x1514B1CC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1514B1CC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x1514B1D0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1514B1D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514B1D8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x1514B1DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514B1E0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1514B1E4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1514B1E8: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1514B1EC: jal         0x150ADA68
    // 0x1514B1F0: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1514B1F0: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x1514B1F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B1F8: lwc1        $f6, 0x5814($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5814);
    // 0x1514B1FC: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x1514B200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514B204: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1514B208: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1514B20C: mul.s       $f20, $f16, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1514B210: jal         0x150ADA68
    // 0x1514B214: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1514B214: nop

    after_7:
    // 0x1514B218: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B21C: lwc1        $f18, 0x5818($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5818);
    // 0x1514B220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B224: lwc1        $f6, 0x581C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X581C);
    // 0x1514B228: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1514B22C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B230: lwc1        $f10, 0x5820($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5820);
    // 0x1514B234: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1514B238: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x1514B23C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1514B240: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1514B244: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x1514B248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B24C: lwc1        $f6, 0x5824($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5824);
    // 0x1514B250: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1514B254: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B258: lwc1        $f10, 0x5828($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5828);
    // 0x1514B25C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514B260: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B264: lwc1        $f18, 0x582C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X582C);
    // 0x1514B268: mul.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1514B26C: nop

    // 0x1514B270: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1514B274: nop

    // 0x1514B278: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1514B27C: nop

    // 0x1514B280: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1514B284: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x1514B288: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x1514B28C: jal         0x150ADA20
    // 0x1514B290: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1514B290: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x1514B294: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x1514B298: mfhi        $t5
    ctx->r13 = hi;
    // 0x1514B29C: addiu       $t6, $t5, 0x14
    ctx->r14 = ADD32(ctx->r13, 0X14);
    // 0x1514B2A0: bne         $s4, $zero, L_1514B2AC
    if (ctx->r20 != 0) {
        // 0x1514B2A4: nop
    
            goto L_1514B2AC;
    }
    // 0x1514B2A4: nop

    // 0x1514B2A8: break       7
    do_break(353677992);
L_1514B2AC:
    // 0x1514B2AC: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x1514B2B0: jal         0x150ADA68
    // 0x1514B2B4: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x1514B2B4: nop

    after_9:
    // 0x1514B2B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B2BC: lwc1        $f6, 0x5830($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5830);
    // 0x1514B2C0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1514B2C4: nop

    // 0x1514B2C8: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1514B2CC: jal         0x150ADA20
    // 0x1514B2D0: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1514B2D0: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x1514B2D4: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x1514B2D8: mfhi        $t7
    ctx->r15 = hi;
    // 0x1514B2DC: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x1514B2E0: bne         $s5, $zero, L_1514B2EC
    if (ctx->r21 != 0) {
        // 0x1514B2E4: nop
    
            goto L_1514B2EC;
    }
    // 0x1514B2E4: nop

    // 0x1514B2E8: break       7
    do_break(353678056);
L_1514B2EC:
    // 0x1514B2EC: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
    // 0x1514B2F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1514B2F4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1514B2F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514B2FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1514B300: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x1514B304: jal         0x15149550
    // 0x1514B308: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    func_15149550(rdram, ctx);
        goto after_11;
    // 0x1514B308: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    after_11:
    // 0x1514B30C: sub.s       $f24, $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f24.fl - ctx->f26.fl;
    // 0x1514B310: c.lt.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl < ctx->f24.fl;
    // 0x1514B314: nop

    // 0x1514B318: bc1t        L_1514B158
    if (c1cs) {
        // 0x1514B31C: nop
    
            goto L_1514B158;
    }
    // 0x1514B31C: nop

    // 0x1514B320: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_1514B324:
    // 0x1514B324: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1514B328: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1514B32C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x1514B330: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x1514B334: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x1514B338: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x1514B33C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x1514B340: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x1514B344: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x1514B348: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x1514B34C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x1514B350: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x1514B354: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x1514B358: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x1514B35C: jr          $ra
    // 0x1514B360: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x1514B360: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_15143E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143E08: lhu         $v0, 0x7A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7A);
    // 0x15143E0C: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15143E10: addiu       $v0, $t6, 0x40
    ctx->r2 = ADD32(ctx->r14, 0X40);
    // 0x15143E14: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x15143E18: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x15143E1C: jr          $ra
    // 0x15143E20: nop

    return;
    return;
    // 0x15143E20: nop

;}
RECOMP_FUNC void func_1502C6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502C6E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1502C6EC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1502C6F0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1502C6F4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1502C6F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1502C6FC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1502C700: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1502C704: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x1502C708: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1502C70C: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x1502C710: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1502C714: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x1502C718: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1502C71C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1502C720: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1502C724: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x1502C728: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1502C72C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1502C730: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x1502C734: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502C738: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1502C73C: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x1502C740: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x1502C744: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x1502C748: lbu         $t3, 0x1C9($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1C9);
    // 0x1502C74C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502C750: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1502C754: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x1502C758: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x1502C75C: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x1502C760: bne         $t3, $zero, L_1502C964
    if (ctx->r11 != 0) {
        // 0x1502C764: addu        $v1, $t8, $t9
        ctx->r3 = ADD32(ctx->r24, ctx->r25);
            goto L_1502C964;
    }
    // 0x1502C764: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1502C768: lbu         $t4, 0x5($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X5);
    // 0x1502C76C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1502C770: beq         $t4, $at, L_1502C964
    if (ctx->r12 == ctx->r1) {
        // 0x1502C774: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_1502C964;
    }
    // 0x1502C774: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x1502C778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502C77C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502C780: lwc1        $f6, 0x6DE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6DE0);
    // 0x1502C784: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502C788: lwc1        $f8, 0x6DE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6DE4);
    // 0x1502C78C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x1502C790: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1502C794: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1502C798: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x1502C79C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x1502C7A0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x1502C7A4: lbu         $a1, 0x2C8($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X2C8);
    // 0x1502C7A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1502C7AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1502C7B0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1502C7B4: beql        $a1, $at, L_1502C968
    if (ctx->r5 == ctx->r1) {
        // 0x1502C7B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1502C968;
    }
    goto skip_0;
    // 0x1502C7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1502C7BC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x1502C7C0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1502C7C4: jal         0x150849A0
    // 0x1502C7C8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_150849A0(rdram, ctx);
        goto after_0;
    // 0x1502C7C8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x1502C7CC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x1502C7D0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x1502C7D4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1502C7D8: lwc1        $f16, 0x2F8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X2F8);
    // 0x1502C7DC: lwc1        $f18, 0x14($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1502C7E0: lwc1        $f4, 0x2FC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2FC);
    // 0x1502C7E4: lwc1        $f6, 0x18($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1502C7E8: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1502C7EC: lwc1        $f8, 0x300($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X300);
    // 0x1502C7F0: lwc1        $f10, 0x1C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1502C7F4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1502C7F8: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C7FC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1502C800: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1502C804: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502C808: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C80C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x1502C810: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1502C814: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C818: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x1502C81C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1502C820: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1502C824: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x1502C828: nop

    // 0x1502C82C: bc1f        L_1502C83C
    if (!c1cs) {
        // 0x1502C830: nop
    
            goto L_1502C83C;
    }
    // 0x1502C830: nop

    // 0x1502C834: b           L_1502C89C
    // 0x1502C838: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_1502C89C;
    // 0x1502C838: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1502C83C:
    // 0x1502C83C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C840: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1502C844: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x1502C848: nop

    // 0x1502C84C: bc1f        L_1502C85C
    if (!c1cs) {
        // 0x1502C850: nop
    
            goto L_1502C85C;
    }
    // 0x1502C850: nop

    // 0x1502C854: b           L_1502C89C
    // 0x1502C858: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1502C89C;
    // 0x1502C858: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1502C85C:
    // 0x1502C85C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C860: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1502C864: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x1502C868: nop

    // 0x1502C86C: bc1f        L_1502C87C
    if (!c1cs) {
        // 0x1502C870: nop
    
            goto L_1502C87C;
    }
    // 0x1502C870: nop

    // 0x1502C874: b           L_1502C89C
    // 0x1502C878: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_1502C89C;
    // 0x1502C878: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_1502C87C:
    // 0x1502C87C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1502C880: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x1502C884: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x1502C888: nop

    // 0x1502C88C: bc1f        L_1502C89C
    if (!c1cs) {
        // 0x1502C890: nop
    
            goto L_1502C89C;
    }
    // 0x1502C890: nop

    // 0x1502C894: b           L_1502C89C
    // 0x1502C898: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_1502C89C;
    // 0x1502C898: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_1502C89C:
    // 0x1502C89C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x1502C8A0: bne         $at, $zero, L_1502C8C4
    if (ctx->r1 != 0) {
        // 0x1502C8A4: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_1502C8C4;
    }
    // 0x1502C8A4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1502C8A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1502C8AC: lwc1        $f10, 0x3C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x1502C8B0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x1502C8B4: nop

    // 0x1502C8B8: bc1f        L_1502C8C4
    if (!c1cs) {
        // 0x1502C8BC: nop
    
            goto L_1502C8C4;
    }
    // 0x1502C8BC: nop

    // 0x1502C8C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_1502C8C4:
    // 0x1502C8C4: beq         $v0, $zero, L_1502C8E4
    if (ctx->r2 == 0) {
        // 0x1502C8C8: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_1502C8E4;
    }
    // 0x1502C8C8: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x1502C8CC: bne         $v0, $at, L_1502C8F4
    if (ctx->r2 != ctx->r1) {
        // 0x1502C8D0: nop
    
            goto L_1502C8F4;
    }
    // 0x1502C8D0: nop

    // 0x1502C8D4: bne         $v1, $zero, L_1502C8F4
    if (ctx->r3 != 0) {
        // 0x1502C8D8: nop
    
            goto L_1502C8F4;
    }
    // 0x1502C8D8: nop

    // 0x1502C8DC: b           L_1502C8F4
    // 0x1502C8E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1502C8F4;
    // 0x1502C8E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1502C8E4:
    // 0x1502C8E4: lbu         $t5, -0x19EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X19EA);
    // 0x1502C8E8: beq         $t5, $zero, L_1502C8F4
    if (ctx->r13 == 0) {
        // 0x1502C8EC: nop
    
            goto L_1502C8F4;
    }
    // 0x1502C8EC: nop

    // 0x1502C8F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1502C8F4:
    // 0x1502C8F4: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1502C8F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502C8FC: bnel        $t6, $at, L_1502C90C
    if (ctx->r14 != ctx->r1) {
        // 0x1502C900: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1502C90C;
    }
    goto skip_1;
    // 0x1502C900: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x1502C904: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502C908: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_1502C90C:
    // 0x1502C90C: beql        $at, $zero, L_1502C924
    if (ctx->r1 == 0) {
        // 0x1502C910: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_1502C924;
    }
    goto skip_2;
    // 0x1502C910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_2:
    // 0x1502C914: bgez        $a1, L_1502C920
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1502C918: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_1502C920;
    }
    // 0x1502C918: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x1502C91C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1502C920:
    // 0x1502C920: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1502C924:
    // 0x1502C924: beql        $v1, $at, L_1502C968
    if (ctx->r3 == ctx->r1) {
        // 0x1502C928: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1502C968;
    }
    goto skip_3;
    // 0x1502C928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x1502C92C: lbu         $t7, 0x1C8($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X1C8);
    // 0x1502C930: beql        $v1, $t7, L_1502C968
    if (ctx->r3 == ctx->r15) {
        // 0x1502C934: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1502C968;
    }
    goto skip_4;
    // 0x1502C934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x1502C938: lw          $t8, 0x2C4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X2C4);
    // 0x1502C93C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1502C940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502C944: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1502C948: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x1502C94C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x1502C950: jal         0x150837D4
    // 0x1502C954: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_150837D4(rdram, ctx);
        goto after_1;
    // 0x1502C954: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_1:
    // 0x1502C958: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x1502C95C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x1502C960: sb          $v1, 0x1C8($a3)
    MEM_B(0X1C8, ctx->r7) = ctx->r3;
L_1502C964:
    // 0x1502C964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1502C968:
    // 0x1502C968: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1502C96C: jr          $ra
    // 0x1502C970: nop

    return;
    return;
    // 0x1502C970: nop

;}
RECOMP_FUNC void func_15044ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044ED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15044ED4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15044ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15044EDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15044EE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15044EE4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x15044EE8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15044EEC: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15044EF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15044EF4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15044EF8: nop

    // 0x15044EFC: bc1f        L_15044F18
    if (!c1cs) {
        // 0x15044F00: nop
    
            goto L_15044F18;
    }
    // 0x15044F00: nop

    // 0x15044F04: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x15044F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15044F0C: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x15044F10: b           L_150450B8
    // 0x15044F14: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
        goto L_150450B8;
    // 0x15044F14: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_15044F18:
    // 0x15044F18: lwc1        $f8, -0x72C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X72C0);
    // 0x15044F1C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15044F20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15044F24: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x15044F28: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x15044F2C: jal         0x1510F800
    // 0x15044F30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15044F30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x15044F34: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15044F38: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15044F3C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15044F40: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15044F44: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x15044F48: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15044F4C: jal         0x150A3A70
    // 0x15044F50: nop

    func_150A3A70(rdram, ctx);
        goto after_1;
    // 0x15044F50: nop

    after_1:
    // 0x15044F54: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15044F58: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x15044F5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15044F60: blez        $v0, L_15044FCC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15044F64: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15044FCC;
    }
    // 0x15044F64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15044F68: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15044F6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15044F70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15044F74: addiu       $v0, $v0, 0x3300
    ctx->r2 = ADD32(ctx->r2, 0X3300);
L_15044F78:
    // 0x15044F78: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15044F7C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15044F80: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15044F84: nop

    // 0x15044F88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15044F8C: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15044F90: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x15044F94: nop

    // 0x15044F98: bc1fl       L_15044FC0
    if (!c1cs) {
        // 0x15044F9C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15044FC0;
    }
    goto skip_0;
    // 0x15044F9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x15044FA0: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15044FA4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15044FA8: nop

    // 0x15044FAC: bc1fl       L_15044FC0
    if (!c1cs) {
        // 0x15044FB0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15044FC0;
    }
    goto skip_1;
    // 0x15044FB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15044FB4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x15044FB8: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x15044FBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15044FC0:
    // 0x15044FC0: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15044FC4: bne         $at, $zero, L_15044F78
    if (ctx->r1 != 0) {
        // 0x15044FC8: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15044F78;
    }
    // 0x15044FC8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15044FCC:
    // 0x15044FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15044FD0: beq         $a2, $at, L_150450A8
    if (ctx->r6 == ctx->r1) {
        // 0x15044FD4: sll         $t4, $a2, 4
        ctx->r12 = S32(ctx->r6 << 4);
            goto L_150450A8;
    }
    // 0x15044FD4: sll         $t4, $a2, 4
    ctx->r12 = S32(ctx->r6 << 4);
    // 0x15044FD8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15044FDC: addiu       $t5, $t5, 0x3300
    ctx->r13 = ADD32(ctx->r13, 0X3300);
    // 0x15044FE0: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x15044FE4: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x15044FE8: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    // 0x15044FEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15044FF0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x15044FF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15044FF8: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
L_15044FFC:
    // 0x15044FFC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15045000: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15045004: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15045008: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x1504500C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15045010: sh          $t7, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r15;
    // 0x15045014: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x15045018: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x1504501C: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x15045020: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
    // 0x15045024: bne         $a0, $a2, L_15044FFC
    if (ctx->r4 != ctx->r6) {
        // 0x15045028: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_15044FFC;
    }
    // 0x15045028: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x1504502C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15045030: lw          $t4, -0x41C4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X41C4);
    // 0x15045034: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x15045038: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1504503C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15045040: subu        $v0, $t3, $t4
    ctx->r2 = SUB32(ctx->r11, ctx->r12);
    // 0x15045044: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15045048: lw          $t6, -0x41A4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41A4);
    // 0x1504504C: mflo        $t5
    ctx->r13 = lo;
    // 0x15045050: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x15045054: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15045058: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1504505C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15045060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15045064: sw          $t9, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r25;
    // 0x15045068: lbu         $t3, 0x1C($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1C);
    // 0x1504506C: sb          $t5, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r13;
    // 0x15045070: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x15045074: ori         $t4, $t3, 0x5
    ctx->r12 = ctx->r11 | 0X5;
    // 0x15045078: sb          $t4, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r12;
    // 0x1504507C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15045080: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15045084: ori         $t7, $t4, 0x2
    ctx->r15 = ctx->r12 | 0X2;
    // 0x15045088: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x1504508C: nop

    // 0x15045090: bc1f        L_150450A0
    if (!c1cs) {
        // 0x15045094: nop
    
            goto L_150450A0;
    }
    // 0x15045094: nop

    // 0x15045098: b           L_150450B8
    // 0x1504509C: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
        goto L_150450B8;
    // 0x1504509C: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
L_150450A0:
    // 0x150450A0: b           L_150450B8
    // 0x150450A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150450B8;
    // 0x150450A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150450A8:
    // 0x150450A8: lbu         $t8, 0x1C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1C);
    // 0x150450AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150450B0: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x150450B4: sb          $t9, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r25;
L_150450B8:
    // 0x150450B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150450BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150450C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150450C4: jr          $ra
    // 0x150450C8: nop

    return;
    return;
    // 0x150450C8: nop

;}
RECOMP_FUNC void func_1506AA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AA08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506AA0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506AA10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506AA14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1506AA18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1506AA1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1506AA20: jal         0x151B7144
    // 0x1506AA24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151B7144(rdram, ctx);
        goto after_0;
    // 0x1506AA24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506AA28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1506AA2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1506AA30: jal         0x151B6320
    // 0x1506AA34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151B6320(rdram, ctx);
        goto after_1;
    // 0x1506AA34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1506AA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506AA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506AA40: jr          $ra
    // 0x1506AA44: nop

    return;
    return;
    // 0x1506AA44: nop

;}
RECOMP_FUNC void func_15084D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15084D70: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15084D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15084D78: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x15084D7C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x15084D80: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x15084D84: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x15084D88: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15084D8C: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x15084D90: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15084D94: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15084D98: bne         $t7, $at, L_15084DAC
    if (ctx->r15 != ctx->r1) {
        // 0x15084D9C: sw          $t6, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r14;
            goto L_15084DAC;
    }
    // 0x15084D9C: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x15084DA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15084DA4: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x15084DA8: sb          $zero, 0x18A8($at)
    MEM_B(0X18A8, ctx->r1) = 0;
L_15084DAC:
    // 0x15084DAC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15084DB0: addiu       $t1, $t1, -0x19EA
    ctx->r9 = ADD32(ctx->r9, -0X19EA);
    // 0x15084DB4: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x15084DB8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15084DBC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15084DC0: beq         $t8, $zero, L_15084DF0
    if (ctx->r24 == 0) {
        // 0x15084DC4: addiu       $t0, $t0, 0x212C
        ctx->r8 = ADD32(ctx->r8, 0X212C);
            goto L_15084DF0;
    }
    // 0x15084DC4: addiu       $t0, $t0, 0x212C
    ctx->r8 = ADD32(ctx->r8, 0X212C);
    // 0x15084DC8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15084DCC: lw          $t9, -0x22C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22C);
    // 0x15084DD0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15084DD4: lb          $t6, 0x42($t9)
    ctx->r14 = MEM_B(ctx->r25, 0X42);
    // 0x15084DD8: bnel        $t6, $zero, L_15084DF4
    if (ctx->r14 != 0) {
        // 0x15084DDC: lw          $t8, 0x98($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X98);
            goto L_15084DF4;
    }
    goto skip_0;
    // 0x15084DDC: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    skip_0:
    // 0x15084DE0: lb          $t7, 0xBE3($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XBE3);
    // 0x15084DE4: beql        $t7, $zero, L_15084DF4
    if (ctx->r15 == 0) {
        // 0x15084DE8: lw          $t8, 0x98($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X98);
            goto L_15084DF4;
    }
    goto skip_1;
    // 0x15084DE8: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    skip_1:
    // 0x15084DEC: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_15084DF0:
    // 0x15084DF0: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
L_15084DF4:
    // 0x15084DF4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15084DF8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x15084DFC: beq         $t8, $at, L_15084E84
    if (ctx->r24 == ctx->r1) {
        // 0x15084E00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15084E84;
    }
    // 0x15084E00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15084E04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15084E08: bne         $t9, $at, L_15084E44
    if (ctx->r25 != ctx->r1) {
        // 0x15084E0C: sll         $t6, $t8, 2
        ctx->r14 = S32(ctx->r24 << 2);
            goto L_15084E44;
    }
    // 0x15084E0C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15084E10: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084E14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084E18: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x15084E1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084E20: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084E24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084E28: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084E2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084E30: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15084E34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15084E38: lw          $t7, -0x3A14($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A14);
    // 0x15084E3C: lbu         $t9, 0x11B($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X11B);
    // 0x15084E40: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
L_15084E44:
    // 0x15084E44: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x15084E48: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x15084E4C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15084E50: beq         $t8, $zero, L_15084E84
    if (ctx->r24 == 0) {
        // 0x15084E54: sll         $t7, $t6, 2
        ctx->r15 = S32(ctx->r14 << 2);
            goto L_15084E84;
    }
    // 0x15084E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15084E58: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15084E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15084E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15084E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15084E68: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15084E6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15084E70: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15084E74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15084E78: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15084E7C: lw          $t9, -0x3A14($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A14);
    // 0x15084E80: sb          $zero, 0x11B($t9)
    MEM_B(0X11B, ctx->r25) = 0;
L_15084E84:
    // 0x15084E84: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x15084E88: lw          $a0, 0x2128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2128);
    // 0x15084E8C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x15084E90: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15084E94: beq         $at, $zero, L_15084EA4
    if (ctx->r1 == 0) {
        // 0x15084E98: sw          $t6, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r14;
            goto L_15084EA4;
    }
    // 0x15084E98: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x15084E9C: bgezl       $t6, L_15084EAC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15084EA0: lw          $a1, 0x0($t0)
        ctx->r5 = MEM_W(ctx->r8, 0X0);
            goto L_15084EAC;
    }
    goto skip_2;
    // 0x15084EA0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    skip_2:
L_15084EA4:
    // 0x15084EA4: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x15084EA8: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
L_15084EAC:
    // 0x15084EAC: beq         $a1, $zero, L_15085400
    if (ctx->r5 == 0) {
        // 0x15084EB0: nop
    
            goto L_15085400;
    }
    // 0x15084EB0: nop

    // 0x15084EB4: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x15084EB8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15084EBC: beql        $t7, $zero, L_15085128
    if (ctx->r15 == 0) {
        // 0x15084EC0: lw          $t7, 0xA0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA0);
            goto L_15085128;
    }
    goto skip_3;
    // 0x15084EC0: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    skip_3:
    // 0x15084EC4: lbu         $t9, 0x18A8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X18A8);
    // 0x15084EC8: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x15084ECC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15084ED0: beq         $t9, $zero, L_15085124
    if (ctx->r25 == 0) {
        // 0x15084ED4: sll         $t6, $t8, 2
        ctx->r14 = S32(ctx->r24 << 2);
            goto L_15085124;
    }
    // 0x15084ED4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15084ED8: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084EDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084EE0: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x15084EE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084EE8: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084EEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084EF0: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15084EF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15084EF8: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15084EFC: addu        $t2, $t6, $t7
    ctx->r10 = ADD32(ctx->r14, ctx->r15);
    // 0x15084F00: lbu         $a3, 0x128($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X128);
    // 0x15084F04: lw          $a2, 0x31C($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X31C);
    // 0x15084F08: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x15084F0C: bne         $a3, $zero, L_15084F20
    if (ctx->r7 != 0) {
        // 0x15084F10: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_15084F20;
    }
    // 0x15084F10: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15084F14: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15084F18: b           L_15084F28
    // 0x15084F1C: lw          $v0, 0x2120($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2120);
        goto L_15084F28;
    // 0x15084F1C: lw          $v0, 0x2120($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2120);
L_15084F20:
    // 0x15084F20: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15084F24: lw          $v0, 0x2124($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2124);
L_15084F28:
    // 0x15084F28: blez        $a0, L_15084F60
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15084F2C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15084F60;
    }
    // 0x15084F2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15084F30: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15084F34: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_15084F38:
    // 0x15084F38: sllv        $t8, $t9, $v1
    ctx->r24 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x15084F3C: and         $t6, $t8, $v0
    ctx->r14 = ctx->r24 & ctx->r2;
    // 0x15084F40: beq         $t6, $zero, L_15084F50
    if (ctx->r14 == 0) {
        // 0x15084F44: addu        $t7, $a1, $t3
        ctx->r15 = ADD32(ctx->r5, ctx->r11);
            goto L_15084F50;
    }
    // 0x15084F44: addu        $t7, $a1, $t3
    ctx->r15 = ADD32(ctx->r5, ctx->r11);
    // 0x15084F48: sb          $v1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r3;
    // 0x15084F4C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_15084F50:
    // 0x15084F50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15084F54: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15084F58: bnel        $at, $zero, L_15084F38
    if (ctx->r1 != 0) {
        // 0x15084F5C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_15084F38;
    }
    goto skip_4;
    // 0x15084F5C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_4:
L_15084F60:
    // 0x15084F60: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15084F64: lb          $t4, 0x1B0($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X1B0);
    // 0x15084F68: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x15084F6C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x15084F70: blez        $t3, L_150850DC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x15084F74: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_150850DC;
    }
    // 0x15084F74: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15084F78: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x15084F7C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_15084F80:
    // 0x15084F80: lbu         $a1, 0x0($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X0);
    // 0x15084F84: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15084F88: beql        $t4, $a1, L_150850C8
    if (ctx->r12 == ctx->r5) {
        // 0x15084F8C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_150850C8;
    }
    goto skip_5;
    // 0x15084F8C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_5:
    // 0x15084F90: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x15084F94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15084F98: lwc1        $f12, -0x26A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X26A0);
    // 0x15084F9C: blez        $v1, L_15085048
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15084FA0: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_15085048;
    }
    // 0x15084FA0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15084FA4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15084FA8: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x15084FAC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15084FB0: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x15084FB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15084FB8: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x15084FBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15084FC0: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x15084FC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15084FC8: addiu       $v0, $t9, -0x3D30
    ctx->r2 = ADD32(ctx->r25, -0X3D30);
    // 0x15084FCC: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    // 0x15084FD0: lbu         $t6, 0x128($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X128);
L_15084FD4:
    // 0x15084FD4: beql        $a3, $t6, L_1508503C
    if (ctx->r7 == ctx->r14) {
        // 0x15084FD8: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_1508503C;
    }
    goto skip_6;
    // 0x15084FD8: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    skip_6:
    // 0x15084FDC: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15084FE0: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x15084FE4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15084FE8: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15084FEC: mflo        $t8
    ctx->r24 = lo;
    // 0x15084FF0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x15084FF4: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x15084FF8: lh          $t6, 0x4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4);
    // 0x15084FFC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15085000: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15085004: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15085008: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1508500C: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15085010: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x15085014: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15085018: nop

    // 0x1508501C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15085020: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15085024: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15085028: nop

    // 0x1508502C: bc1f        L_15085038
    if (!c1cs) {
        // 0x15085030: nop
    
            goto L_15085038;
    }
    // 0x15085030: nop

    // 0x15085034: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15085038:
    // 0x15085038: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
L_1508503C:
    // 0x1508503C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x15085040: bnel        $at, $zero, L_15084FD4
    if (ctx->r1 != 0) {
        // 0x15085044: lbu         $t6, 0x128($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X128);
            goto L_15084FD4;
    }
    goto skip_7;
    // 0x15085044: lbu         $t6, 0x128($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X128);
    skip_7:
L_15085048:
    // 0x15085048: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x1508504C: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x15085050: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x15085054: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x15085058: sw          $t4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r12;
    // 0x1508505C: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x15085060: swc1        $f12, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f12.u32l;
    // 0x15085064: jal         0x150ADA68
    // 0x15085068: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15085068: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x1508506C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15085070: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15085074: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15085078: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1508507C: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15085080: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15085084: addiu       $t0, $t0, 0x212C
    ctx->r8 = ADD32(ctx->r8, 0X212C);
    // 0x15085088: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x1508508C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x15085090: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x15085094: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x15085098: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508509C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x150850A0: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x150850A4: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x150850A8: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x150850AC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x150850B0: nop

    // 0x150850B4: bc1fl       L_150850C8
    if (!c1cs) {
        // 0x150850B8: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_150850C8;
    }
    goto skip_8;
    // 0x150850B8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_8:
    // 0x150850BC: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x150850C0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x150850C4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_150850C8:
    // 0x150850C8: bne         $t1, $t3, L_15084F80
    if (ctx->r9 != ctx->r11) {
        // 0x150850CC: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_15084F80;
    }
    // 0x150850CC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x150850D0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x150850D4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150850D8: lw          $a2, 0x31C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X31C);
L_150850DC:
    // 0x150850DC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150850E0: lw          $t8, -0x22C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X22C);
    // 0x150850E4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150850E8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150850EC: lb          $t9, 0x42($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X42);
    // 0x150850F0: addu        $t7, $a1, $t5
    ctx->r15 = ADD32(ctx->r5, ctx->r13);
    // 0x150850F4: addiu       $t1, $t1, -0x19EA
    ctx->r9 = ADD32(ctx->r9, -0X19EA);
    // 0x150850F8: bnel        $t9, $zero, L_15085110
    if (ctx->r25 != 0) {
        // 0x150850FC: lbu         $t8, 0x0($t7)
        ctx->r24 = MEM_BU(ctx->r15, 0X0);
            goto L_15085110;
    }
    goto skip_9;
    // 0x150850FC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    skip_9:
    // 0x15085100: lb          $t6, 0xBE3($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBE3);
    // 0x15085104: bnel        $t6, $zero, L_15085118
    if (ctx->r14 != 0) {
        // 0x15085108: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_15085118;
    }
    goto skip_10;
    // 0x15085108: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    skip_10:
    // 0x1508510C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
L_15085110:
    // 0x15085110: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x15085114: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_15085118:
    // 0x15085118: sb          $t9, 0x1B0($a2)
    MEM_B(0X1B0, ctx->r6) = ctx->r25;
    // 0x1508511C: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x15085120: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
L_15085124:
    // 0x15085124: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
L_15085128:
    // 0x15085128: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x1508512C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x15085130: beq         $t7, $zero, L_150851C8
    if (ctx->r15 == 0) {
        // 0x15085134: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_150851C8;
    }
    // 0x15085134: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15085138: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508513C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15085140: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x15085144: mflo        $t8
    ctx->r24 = lo;
    // 0x15085148: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x1508514C: lb          $v0, 0x16($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X16);
    // 0x15085150: beql        $v0, $zero, L_150851CC
    if (ctx->r2 == 0) {
        // 0x15085154: lw          $t7, 0xA0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA0);
            goto L_150851CC;
    }
    goto skip_11;
    // 0x15085154: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    skip_11:
    // 0x15085158: beq         $v0, $at, L_15085174
    if (ctx->r2 == ctx->r1) {
        // 0x1508515C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15085174;
    }
    // 0x1508515C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15085160: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15085164: lw          $t7, 0x2128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2128);
    // 0x15085168: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1508516C: bne         $at, $zero, L_15085178
    if (ctx->r1 != 0) {
        // 0x15085170: nop
    
            goto L_15085178;
    }
    // 0x15085170: nop

L_15085174:
    // 0x15085174: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
L_15085178:
    // 0x15085178: beq         $a0, $zero, L_15085200
    if (ctx->r4 == 0) {
        // 0x1508517C: nop
    
            goto L_15085200;
    }
    // 0x1508517C: nop

    // 0x15085180: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15085184: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15085188: mflo        $t6
    ctx->r14 = lo;
    // 0x1508518C: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x15085190: lb          $v0, 0x15($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X15);
    // 0x15085194: bltz        $v0, L_150851A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x15085198: nop
    
            goto L_150851A8;
    }
    // 0x15085198: nop

    // 0x1508519C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x150851A0: b           L_15085200
    // 0x150851A4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
        goto L_15085200;
    // 0x150851A4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
L_150851A8:
    // 0x150851A8: bne         $v0, $at, L_150851BC
    if (ctx->r2 != ctx->r1) {
        // 0x150851AC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150851BC;
    }
    // 0x150851AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150851B0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x150851B4: b           L_15085200
    // 0x150851B8: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
        goto L_15085200;
    // 0x150851B8: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
L_150851BC:
    // 0x150851BC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x150851C0: b           L_15085200
    // 0x150851C4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
        goto L_15085200;
    // 0x150851C4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
L_150851C8:
    // 0x150851C8: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
L_150851CC:
    // 0x150851CC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x150851D0: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x150851D4: beq         $t7, $zero, L_15085200
    if (ctx->r15 == 0) {
        // 0x150851D8: nop
    
            goto L_15085200;
    }
    // 0x150851D8: nop

    // 0x150851DC: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150851E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150851E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150851E8: mflo        $t8
    ctx->r24 = lo;
    // 0x150851EC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x150851F0: lb          $t7, 0x16($t9)
    ctx->r15 = MEM_B(ctx->r25, 0X16);
    // 0x150851F4: bne         $t7, $zero, L_15085200
    if (ctx->r15 != 0) {
        // 0x150851F8: nop
    
            goto L_15085200;
    }
    // 0x150851F8: nop

    // 0x150851FC: sb          $t6, -0x21C8($at)
    MEM_B(-0X21C8, ctx->r1) = ctx->r14;
L_15085200:
    // 0x15085200: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15085204: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x15085208: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x1508520C: mflo        $v0
    ctx->r2 = lo;
    // 0x15085210: addu        $t8, $a1, $v0
    ctx->r24 = ADD32(ctx->r5, ctx->r2);
    // 0x15085214: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x15085218: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x1508521C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085220: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x15085224: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x15085228: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x1508522C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15085230: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x15085234: lwc1        $f6, 0x10($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X10);
    // 0x15085238: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x1508523C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085240: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x15085244: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x15085248: lh          $t6, 0x0($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X0);
    // 0x1508524C: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x15085250: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085254: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x15085258: lh          $t6, 0x2($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X2);
    // 0x1508525C: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
    // 0x15085260: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085264: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x15085268: lh          $t6, 0x4($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X4);
    // 0x1508526C: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x15085270: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085274: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x15085278: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x1508527C: lbu         $t6, 0x6($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X6);
    // 0x15085280: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x15085284: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15085288: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x1508528C: lbu         $t6, 0x7($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X7);
    // 0x15085290: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x15085294: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15085298: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x1508529C: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x150852A0: lbu         $t7, 0x14($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X14);
    // 0x150852A4: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x150852A8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x150852AC: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x150852B0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x150852B4: lb          $t7, 0x15($t9)
    ctx->r15 = MEM_B(ctx->r25, 0X15);
    // 0x150852B8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150852BC: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x150852C0: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x150852C4: beql        $t8, $zero, L_150853AC
    if (ctx->r24 == 0) {
        // 0x150852C8: lw          $t6, 0x98($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X98);
            goto L_150853AC;
    }
    goto skip_12;
    // 0x150852C8: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    skip_12:
    // 0x150852CC: lbu         $t9, 0x18A8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X18A8);
    // 0x150852D0: bnel        $t9, $zero, L_150853AC
    if (ctx->r25 != 0) {
        // 0x150852D4: lw          $t6, 0x98($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X98);
            goto L_150853AC;
    }
    goto skip_13;
    // 0x150852D4: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    skip_13:
    // 0x150852D8: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x150852DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150852E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150852E4: bgez        $t7, L_150852F8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150852E8: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150852F8;
    }
    // 0x150852E8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150852EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150852F0: nop

    // 0x150852F4: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_150852F8:
    // 0x150852F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150852FC: lwc1        $f10, -0x269C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X269C);
    // 0x15085300: lui         $at, 0x3C00
    ctx->r1 = S32(0X3C00 << 16);
    // 0x15085304: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15085308: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1508530C: nop

    // 0x15085310: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15085314: jal         0x150ADA68
    // 0x15085318: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15085318: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x1508531C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15085320: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15085324: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15085328: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508532C: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15085330: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15085334: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15085338: jal         0x15047D60
    // 0x1508533C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1508533C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x15085340: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x15085344: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15085348: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x1508534C: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15085350: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15085354: nop

    // 0x15085358: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508535C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15085360: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15085364: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x15085368: nop

    // 0x1508536C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x15085370: jal         0x15047C00
    // 0x15085374: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x15085374: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x15085378: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x1508537C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15085380: lh          $t6, 0x4($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X4);
    // 0x15085384: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15085388: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1508538C: nop

    // 0x15085390: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15085394: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x15085398: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508539C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x150853A0: nop

    // 0x150853A4: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x150853A8: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
L_150853AC:
    // 0x150853AC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150853B0: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x150853B4: beq         $t6, $at, L_150853F8
    if (ctx->r14 == ctx->r1) {
        // 0x150853B8: nop
    
            goto L_150853F8;
    }
    // 0x150853B8: nop

    // 0x150853BC: beq         $t8, $zero, L_150853F8
    if (ctx->r24 == 0) {
        // 0x150853C0: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_150853F8;
    }
    // 0x150853C0: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x150853C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150853C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150853CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150853D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150853D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150853D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150853DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150853E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150853E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150853E8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150853EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150853F0: lw          $t8, -0x3A14($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A14);
    // 0x150853F4: sb          $t9, 0x11B($t8)
    MEM_B(0X11B, ctx->r24) = ctx->r25;
L_150853F8:
    // 0x150853F8: b           L_15085400
    // 0x150853FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15085400;
    // 0x150853FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15085400:
    // 0x15085400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15085404: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x15085408: jr          $ra
    // 0x1508540C: nop

    return;
    return;
    // 0x1508540C: nop

;}
RECOMP_FUNC void func_150FE604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE604: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150FE608: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150FE60C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FE610: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150FE614: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150FE618: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x150FE61C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x150FE620: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FE624: beql        $t6, $zero, L_150FE784
    if (ctx->r14 == 0) {
        // 0x150FE628: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_150FE784;
    }
    goto skip_0;
    // 0x150FE628: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x150FE62C: lbu         $t7, 0x74($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X74);
    // 0x150FE630: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150FE634: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x150FE638: beql        $t8, $at, L_150FE784
    if (ctx->r24 == ctx->r1) {
        // 0x150FE63C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_150FE784;
    }
    goto skip_1;
    // 0x150FE63C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x150FE640: jal         0x150ADA68
    // 0x150FE644: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150FE644: nop

    after_0:
    // 0x150FE648: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150FE64C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FE650: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE654: lwc1        $f8, 0x1FF0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1FF0);
    // 0x150FE658: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FE65C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FE660: jal         0x150ADA68
    // 0x150FE664: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150FE664: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x150FE668: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150FE66C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150FE670: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150FE674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FE678: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150FE67C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FE680: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150FE684: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150FE688: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150FE68C: beql        $v0, $zero, L_150FE6C8
    if (ctx->r2 == 0) {
        // 0x150FE690: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE6C8;
    }
    goto skip_2;
    // 0x150FE690: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_2:
    // 0x150FE694: lbu         $t9, 0x197($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X197);
    // 0x150FE698: beql        $t9, $zero, L_150FE6C8
    if (ctx->r25 == 0) {
        // 0x150FE69C: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE6C8;
    }
    goto skip_3;
    // 0x150FE69C: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_3:
    // 0x150FE6A0: lw          $v0, 0x318($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X318);
    // 0x150FE6A4: beql        $v0, $zero, L_150FE6C8
    if (ctx->r2 == 0) {
        // 0x150FE6A8: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE6C8;
    }
    goto skip_4;
    // 0x150FE6A8: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_4:
    // 0x150FE6AC: lbu         $t0, 0x23D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X23D);
    // 0x150FE6B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FE6B4: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x150FE6B8: nor         $t4, $t2, $zero
    ctx->r12 = ~(ctx->r10 | 0);
    // 0x150FE6BC: b           L_150FE6C8
    // 0x150FE6C0: sb          $t4, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r12;
        goto L_150FE6C8;
    // 0x150FE6C0: sb          $t4, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r12;
    // 0x150FE6C4: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
L_150FE6C8:
    // 0x150FE6C8: jal         0x150ADA20
    // 0x150FE6CC: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150FE6CC: nop

    after_2:
    // 0x150FE6D0: jal         0x150ADA20
    // 0x150FE6D4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FE6D4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x150FE6D8: jal         0x150ADA68
    // 0x150FE6DC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FE6DC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x150FE6E0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x150FE6E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150FE6E8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x150FE6EC: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x150FE6F0: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150FE6F4: mfhi        $t8
    ctx->r24 = hi;
    // 0x150FE6F8: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x150FE6FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FE700: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x150FE704: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE708: lwc1        $f8, 0x1FF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1FF4);
    // 0x150FE70C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150FE710: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150FE714: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150FE718: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x150FE71C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x150FE720: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x150FE724: lbu         $t4, 0x5F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5F);
    // 0x150FE728: mfhi        $t0
    ctx->r8 = hi;
    // 0x150FE72C: addiu       $t2, $t0, 0xC8
    ctx->r10 = ADD32(ctx->r8, 0XC8);
    // 0x150FE730: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150FE734: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x150FE738: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150FE73C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FE740: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150FE744: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150FE748: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x150FE74C: addiu       $a3, $a3, 0x1FE0
    ctx->r7 = ADD32(ctx->r7, 0X1FE0);
    // 0x150FE750: addiu       $a2, $a2, 0x1FC8
    ctx->r6 = ADD32(ctx->r6, 0X1FC8);
    // 0x150FE754: lbu         $a1, -0x746C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X746C);
    // 0x150FE758: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150FE75C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x150FE760: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150FE764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FE768: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FE76C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150FE770: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x150FE774: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150FE778: jal         0x15102B38
    // 0x150FE77C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_15102B38(rdram, ctx);
        goto after_5;
    // 0x150FE77C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_5:
    // 0x150FE780: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_150FE784:
    // 0x150FE784: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150FE788: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x150FE78C: jr          $ra
    // 0x150FE790: nop

    return;
    return;
    // 0x150FE790: nop

;}
RECOMP_FUNC void func_151AA1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA1F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151AA1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AA1F8: jal         0x1519F400
    // 0x151AA1FC: nop

    func_1519F400(rdram, ctx);
        goto after_0;
    // 0x151AA1FC: nop

    after_0:
    // 0x151AA200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AA204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151AA208: jr          $ra
    // 0x151AA20C: nop

    return;
    return;
    // 0x151AA20C: nop

;}
RECOMP_FUNC void func_1506B634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B63C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506B640: jal         0x150ADA20
    // 0x1506B644: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1506B644: nop

    after_0:
    // 0x1506B648: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x1506B64C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506B650: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x1506B654: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x1506B658: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1506B65C: mfhi        $v1
    ctx->r3 = hi;
    // 0x1506B660: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x1506B664: lw          $a1, 0x31C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X31C);
    // 0x1506B668: bne         $t6, $zero, L_1506B674
    if (ctx->r14 != 0) {
        // 0x1506B66C: nop
    
            goto L_1506B674;
    }
    // 0x1506B66C: nop

    // 0x1506B670: break       7
    do_break(352761456);
L_1506B674:
    // 0x1506B674: lbu         $t8, 0x16($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X16);
    // 0x1506B678: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1506B67C: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x1506B680: beq         $t8, $zero, L_1506B6BC
    if (ctx->r24 == 0) {
        // 0x1506B684: lui         $t3, 0x800A
        ctx->r11 = S32(0X800A << 16);
            goto L_1506B6BC;
    }
    // 0x1506B684: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x1506B688: lw          $t9, -0x1610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1610);
    // 0x1506B68C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x1506B690: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x1506B694: bne         $t9, $at, L_1506B6AC
    if (ctx->r25 != ctx->r1) {
        // 0x1506B698: lui         $t1, 0x800A
        ctx->r9 = S32(0X800A << 16);
            goto L_1506B6AC;
    }
    // 0x1506B698: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x1506B69C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1506B6A0: bnel        $t0, $at, L_1506B6B0
    if (ctx->r8 != ctx->r1) {
        // 0x1506B6A4: addu        $t1, $t1, $a0
        ctx->r9 = ADD32(ctx->r9, ctx->r4);
            goto L_1506B6B0;
    }
    goto skip_0;
    // 0x1506B6A4: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    skip_0:
    // 0x1506B6A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1506B6AC:
    // 0x1506B6AC: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
L_1506B6B0:
    // 0x1506B6B0: lbu         $t1, -0x6544($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X6544);
    // 0x1506B6B4: b           L_1506B6C8
    // 0x1506B6B8: sh          $t1, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r9;
        goto L_1506B6C8;
    // 0x1506B6B8: sh          $t1, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r9;
L_1506B6BC:
    // 0x1506B6BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1506B6C0: lbu         $t3, -0x654C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X654C);
    // 0x1506B6C4: sh          $t3, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r11;
L_1506B6C8:
    // 0x1506B6C8: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x1506B6CC: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x1506B6D0: lui         $t7, 0xFF02
    ctx->r15 = S32(0XFF02 << 16);
    // 0x1506B6D4: lw          $t5, 0x31C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X31C);
    // 0x1506B6D8: ori         $t7, $t7, 0x144
    ctx->r15 = ctx->r15 | 0X144;
    // 0x1506B6DC: lhu         $t6, 0xE($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XE);
    // 0x1506B6E0: bne         $t6, $at, L_1506B730
    if (ctx->r14 != ctx->r1) {
        // 0x1506B6E4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_1506B730;
    }
    // 0x1506B6E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506B6E8: jal         0x150ADA20
    // 0x1506B6EC: sw          $t7, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1506B6EC: sw          $t7, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r15;
    after_1:
    // 0x1506B6F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1506B6F4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1506B6F8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1506B6FC: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x1506B700: mfhi        $t8
    ctx->r24 = hi;
    // 0x1506B704: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x1506B708: lw          $t1, 0x31C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X31C);
    // 0x1506B70C: jal         0x1506E8D8
    // 0x1506B710: sb          $t9, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r25;
    func_1506E8D8(rdram, ctx);
        goto after_2;
    // 0x1506B710: sb          $t9, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r25;
    after_2:
    // 0x1506B714: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B718: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506B71C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506B720: lwc1        $f6, -0x63C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X63C8);
    // 0x1506B724: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x1506B728: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1506B72C: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
L_1506B730:
    // 0x1506B730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B738: jr          $ra
    // 0x1506B73C: nop

    return;
    return;
    // 0x1506B73C: nop

;}
RECOMP_FUNC void __osSetHWIntrRoutine(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10026AC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10026AC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10026AC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10026ACC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10026AD0: jal         0x10022DC0
    // 0x10026AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x10026AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x10026AD8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10026ADC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10026AE0: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10026AE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x10026AE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10026AEC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x10026AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x10026AF4: jal         0x10022DE0
    // 0x10026AF8: sw          $t6, -0x5390($at)
    MEM_W(-0X5390, ctx->r1) = ctx->r14;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x10026AF8: sw          $t6, -0x5390($at)
    MEM_W(-0X5390, ctx->r1) = ctx->r14;
    after_1:
    // 0x10026AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10026B00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10026B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10026B08: jr          $ra
    // 0x10026B0C: nop

    return;
    return;
    // 0x10026B0C: nop

;}
RECOMP_FUNC void func_15033EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033EC4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x15033EC8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15033ECC: lw          $v0, 0x3EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3EE0);
    // 0x15033ED0: beq         $v0, $zero, L_15033F04
    if (ctx->r2 == 0) {
        // 0x15033ED4: nop
    
            goto L_15033F04;
    }
    // 0x15033ED4: nop

L_15033ED8:
    // 0x15033ED8: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x15033EDC: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x15033EE0: bne         $a0, $a1, L_15033EF0
    if (ctx->r4 != ctx->r5) {
        // 0x15033EE4: nop
    
            goto L_15033EF0;
    }
    // 0x15033EE4: nop

    // 0x15033EE8: b           L_15033EFC
    // 0x15033EEC: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
        goto L_15033EFC;
    // 0x15033EEC: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
L_15033EF0:
    // 0x15033EF0: bne         $a2, $a1, L_15033EFC
    if (ctx->r6 != ctx->r5) {
        // 0x15033EF4: nop
    
            goto L_15033EFC;
    }
    // 0x15033EF4: nop

    // 0x15033EF8: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
L_15033EFC:
    // 0x15033EFC: bne         $v1, $zero, L_15033ED8
    if (ctx->r3 != 0) {
        // 0x15033F00: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15033ED8;
    }
    // 0x15033F00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15033F04:
    // 0x15033F04: jr          $ra
    // 0x15033F08: nop

    return;
    return;
    // 0x15033F08: nop

;}
RECOMP_FUNC void func_15070794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507079C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150707A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150707A4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150707A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150707AC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150707B0: jal         0x150EBEC0
    // 0x150707B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150EBEC0(rdram, ctx);
        goto after_0;
    // 0x150707B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150707B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150707BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150707C0: jr          $ra
    // 0x150707C4: nop

    return;
    return;
    // 0x150707C4: nop

;}
RECOMP_FUNC void func_15194DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194DC8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15194DCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15194DD0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15194DD4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15194DD8: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15194DDC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x15194DE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15194DE4: beq         $t6, $zero, L_15194DFC
    if (ctx->r14 == 0) {
        // 0x15194DE8: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_15194DFC;
    }
    // 0x15194DE8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15194DEC: jal         0x15194DA4
    // 0x15194DF0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_15194DA4(rdram, ctx);
        goto after_0;
    // 0x15194DF0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_0:
    // 0x15194DF4: b           L_15194E24
    // 0x15194DF8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
        goto L_15194E24;
    // 0x15194DF8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_15194DFC:
    // 0x15194DFC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x15194E00: addiu       $t9, $t9, -0x7DBC
    ctx->r25 = ADD32(ctx->r25, -0X7DBC);
    // 0x15194E04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15194E08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15194E0C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15194E10: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x15194E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15194E18: jal         0x1518D1C0
    // 0x15194E1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1518D1C0(rdram, ctx);
        goto after_1;
    // 0x15194E1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x15194E20: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_15194E24:
    // 0x15194E24: jal         0x1504715C
    // 0x15194E28: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x15194E28: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_2:
    // 0x15194E2C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x15194E30: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x15194E34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15194E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15194E3C: jal         0x1514B364
    // 0x15194E40: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_1514B364(rdram, ctx);
        goto after_3;
    // 0x15194E40: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x15194E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15194E48: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15194E4C: jr          $ra
    // 0x15194E50: nop

    return;
    return;
    // 0x15194E50: nop

;}
RECOMP_FUNC void func_1515C1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C1A0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x1515C1A4: slti        $at, $v0, 0xBB
    ctx->r1 = SIGNED(ctx->r2) < 0XBB ? 1 : 0;
    // 0x1515C1A8: beq         $at, $zero, L_1515C210
    if (ctx->r1 == 0) {
        // 0x1515C1AC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1515C210;
    }
    // 0x1515C1AC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1515C1B0: beql        $v0, $at, L_1515C214
    if (ctx->r2 == ctx->r1) {
        // 0x1515C1B4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1515C214;
    }
    goto skip_0;
    // 0x1515C1B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x1515C1B8: lh          $t6, 0xD2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD2);
    // 0x1515C1BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1515C1C0: nop

    // 0x1515C1C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1515C1C8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x1515C1CC: lh          $t7, 0xD4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD4);
    // 0x1515C1D0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1515C1D4: nop

    // 0x1515C1D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1515C1DC: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x1515C1E0: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1515C1E4: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C1E8: lh          $t8, 0xD6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD6);
    // 0x1515C1EC: lwc1        $f18, 0x18($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1515C1F0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1515C1F4: nop

    // 0x1515C1F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1515C1FC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1515C200: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x1515C204: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1515C208: jr          $ra
    // 0x1515C20C: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    return;
    return;
    // 0x1515C20C: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
L_1515C210:
    // 0x1515C210: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1515C214:
    // 0x1515C214: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1515C218: nop

    // 0x1515C21C: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x1515C220: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x1515C224: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1515C228: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x1515C22C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1515C230: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x1515C234: lwc1        $f18, 0x1C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1515C238: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x1515C23C: jr          $ra
    // 0x1515C240: nop

    return;
    return;
    // 0x1515C240: nop

;}
RECOMP_FUNC void func_151DC034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DC034: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x151DC038: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x151DC03C: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x151DC040: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151DC044: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x151DC048: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x151DC04C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151DC050: addiu       $v0, $v0, 0x5480
    ctx->r2 = ADD32(ctx->r2, 0X5480);
    // 0x151DC054: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151DC058: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151DC05C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DC060: lbu         $t9, 0xB3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XB3);
    // 0x151DC064: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151DC068: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x151DC06C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x151DC070: lbu         $t1, -0x4CE0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X4CE0);
    // 0x151DC074: addiu       $t2, $zero, 0x4403
    ctx->r10 = ADD32(0, 0X4403);
    // 0x151DC078: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x151DC07C: sh          $t2, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r10;
    // 0x151DC080: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x151DC084: lui         $t4, 0x9F
    ctx->r12 = S32(0X9F << 16);
    // 0x151DC088: sb          $t1, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r9;
    // 0x151DC08C: ori         $t4, $t4, 0x600
    ctx->r12 = ctx->r12 | 0X600;
    // 0x151DC090: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151DC094: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151DC098: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151DC09C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151DC0A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151DC0A4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151DC0A8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151DC0AC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151DC0B0: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x151DC0B4: sh          $a3, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r7;
    // 0x151DC0B8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151DC0BC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151DC0C0: sb          $t5, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r13;
    // 0x151DC0C4: sb          $t6, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r14;
    // 0x151DC0C8: sb          $t7, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r15;
    // 0x151DC0CC: sb          $t8, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r24;
    // 0x151DC0D0: sb          $t9, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r25;
    // 0x151DC0D4: sb          $t1, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r9;
    // 0x151DC0D8: sb          $t2, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r10;
    // 0x151DC0DC: sb          $a2, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r6;
    // 0x151DC0E0: sb          $t3, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r11;
    // 0x151DC0E4: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x151DC0E8: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x151DC0EC: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151DC0F0: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x151DC0F4: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x151DC0F8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x151DC0FC: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x151DC100: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x151DC104: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151DC108: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x151DC10C: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151DC110: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151DC114: addiu       $t1, $zero, 0x3F
    ctx->r9 = ADD32(0, 0X3F);
    // 0x151DC118: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x151DC11C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151DC120: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DC124: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151DC128: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x151DC12C: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x151DC130: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151DC134: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151DC138: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151DC13C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151DC140: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x151DC144: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x151DC148: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151DC14C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151DC150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DC154: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DC158: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x151DC15C: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x151DC160: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x151DC164: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x151DC168: jal         0x150ADA20
    // 0x151DC16C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DC16C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151DC170: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x151DC174: beq         $t8, $zero, L_151DC184
    if (ctx->r24 == 0) {
        // 0x151DC178: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_151DC184;
    }
    // 0x151DC178: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151DC17C: b           L_151DC184
    // 0x151DC180: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
        goto L_151DC184;
    // 0x151DC180: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
L_151DC184:
    // 0x151DC184: jal         0x150ADA20
    // 0x151DC188: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DC188: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x151DC18C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151DC190: beq         $t2, $zero, L_151DC1A0
    if (ctx->r10 == 0) {
        // 0x151DC194: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_151DC1A0;
    }
    // 0x151DC194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x151DC198: b           L_151DC1A4
    // 0x151DC19C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151DC1A4;
    // 0x151DC19C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151DC1A0:
    // 0x151DC1A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DC1A4:
    // 0x151DC1A4: lbu         $t5, 0xB3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XB3);
    // 0x151DC1A8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151DC1AC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151DC1B0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x151DC1B4: lbu         $t6, -0x4CD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X4CD0);
    // 0x151DC1B8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x151DC1BC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151DC1C0: beq         $t6, $zero, L_151DC1D0
    if (ctx->r14 == 0) {
        // 0x151DC1C4: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_151DC1D0;
    }
    // 0x151DC1C4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151DC1C8: b           L_151DC1D4
    // 0x151DC1CC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_151DC1D4;
    // 0x151DC1CC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_151DC1D0:
    // 0x151DC1D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DC1D4:
    // 0x151DC1D4: ori         $t3, $v0, 0x1
    ctx->r11 = ctx->r2 | 0X1;
    // 0x151DC1D8: or          $t4, $t3, $v1
    ctx->r12 = ctx->r11 | ctx->r3;
    // 0x151DC1DC: or          $t9, $t4, $t0
    ctx->r25 = ctx->r12 | ctx->r8;
    // 0x151DC1E0: ori         $t8, $t9, 0xC200
    ctx->r24 = ctx->r25 | 0XC200;
    // 0x151DC1E4: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x151DC1E8: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x151DC1EC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x151DC1F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151DC1F4: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x151DC1F8: lbu         $t8, 0xB7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XB7);
    // 0x151DC1FC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151DC200: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151DC204: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151DC208: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x151DC20C: sb          $t5, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r13;
    // 0x151DC210: sb          $t6, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r14;
    // 0x151DC214: sb          $t3, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r11;
    // 0x151DC218: sb          $t4, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r12;
    // 0x151DC21C: sb          $t7, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r15;
    // 0x151DC220: sb          $zero, 0x95($sp)
    MEM_B(0X95, ctx->r29) = 0;
    // 0x151DC224: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x151DC228: sb          $t1, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r9;
    // 0x151DC22C: sh          $t9, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r25;
    // 0x151DC230: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151DC234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151DC238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DC23C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151DC240: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x151DC244: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151DC248: jal         0x15130280
    // 0x151DC24C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15130280(rdram, ctx);
        goto after_2;
    // 0x151DC24C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x151DC250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DC254: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x151DC258: jr          $ra
    // 0x151DC25C: nop

    return;
    return;
    // 0x151DC25C: nop

;}
RECOMP_FUNC void func_15114B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114B94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15114B98: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15114B9C: addiu       $t0, $t0, -0x4110
    ctx->r8 = ADD32(ctx->r8, -0X4110);
    // 0x15114BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15114BA4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15114BA8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15114BAC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15114BB0: addiu       $t1, $t1, -0x410C
    ctx->r9 = ADD32(ctx->r9, -0X410C);
    // 0x15114BB4: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x15114BB8: beq         $at, $zero, L_15114C2C
    if (ctx->r1 == 0) {
        // 0x15114BBC: sll         $v1, $a2, 2
        ctx->r3 = S32(ctx->r6 << 2);
            goto L_15114C2C;
    }
    // 0x15114BBC: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x15114BC0: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x15114BC4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x15114BC8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x15114BCC: addu        $a1, $t6, $v1
    ctx->r5 = ADD32(ctx->r14, ctx->r3);
    // 0x15114BD0: lw          $a0, 0x94($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X94);
    // 0x15114BD4: beql        $a0, $zero, L_15114C10
    if (ctx->r4 == 0) {
        // 0x15114BD8: lbu         $t2, 0x70($a1)
        ctx->r10 = MEM_BU(ctx->r5, 0X70);
            goto L_15114C10;
    }
    goto skip_0;
    // 0x15114BD8: lbu         $t2, 0x70($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X70);
    skip_0:
    // 0x15114BDC: jal         0x1516972C
    // 0x15114BE0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15114BE0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15114BE4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15114BE8: addiu       $t1, $t1, -0x410C
    ctx->r9 = ADD32(ctx->r9, -0X410C);
    // 0x15114BEC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15114BF0: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x15114BF4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15114BF8: addiu       $t0, $t0, -0x4110
    ctx->r8 = ADD32(ctx->r8, -0X4110);
    // 0x15114BFC: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15114C00: sw          $zero, 0x94($t8)
    MEM_W(0X94, ctx->r24) = 0;
    // 0x15114C04: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15114C08: addu        $a1, $t9, $v1
    ctx->r5 = ADD32(ctx->r25, ctx->r3);
    // 0x15114C0C: lbu         $t2, 0x70($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X70);
L_15114C10:
    // 0x15114C10: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15114C14: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x15114C18: sb          $t3, 0x70($a1)
    MEM_B(0X70, ctx->r5) = ctx->r11;
    // 0x15114C1C: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x15114C20: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x15114C24: sb          $t4, 0x6E($t6)
    MEM_B(0X6E, ctx->r14) = ctx->r12;
    // 0x15114C28: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
L_15114C2C:
    // 0x15114C2C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x15114C30: addiu       $a3, $a3, -0x4068
    ctx->r7 = ADD32(ctx->r7, -0X4068);
    // 0x15114C34: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x15114C38: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15114C3C: addiu       $t1, $t1, -0x410C
    ctx->r9 = ADD32(ctx->r9, -0X410C);
    // 0x15114C40: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x15114C44: beq         $v0, $zero, L_15114CB4
    if (ctx->r2 == 0) {
        // 0x15114C48: subu        $v1, $v0, $t7
        ctx->r3 = SUB32(ctx->r2, ctx->r15);
            goto L_15114CB4;
    }
    // 0x15114C48: subu        $v1, $v0, $t7
    ctx->r3 = SUB32(ctx->r2, ctx->r15);
    // 0x15114C4C: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x15114C50: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x15114C54: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x15114C58: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x15114C5C: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x15114C60: lbu         $t2, 0x70($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X70);
    // 0x15114C64: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x15114C68: beq         $t3, $zero, L_15114CB4
    if (ctx->r11 == 0) {
        // 0x15114C6C: sltu        $at, $a2, $v1
        ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
            goto L_15114CB4;
    }
    // 0x15114C6C: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
L_15114C70:
    // 0x15114C70: bne         $at, $zero, L_15114C8C
    if (ctx->r1 != 0) {
        // 0x15114C74: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_15114C8C;
    }
    // 0x15114C74: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x15114C78: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x15114C7C: beq         $v0, $zero, L_15114C8C
    if (ctx->r2 == 0) {
        // 0x15114C80: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_15114C8C;
    }
    // 0x15114C80: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x15114C84: b           L_15114C90
    // 0x15114C88: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
        goto L_15114C90;
    // 0x15114C88: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
L_15114C8C:
    // 0x15114C8C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_15114C90:
    // 0x15114C90: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x15114C94: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x15114C98: addiu       $a1, $a1, -0xA0
    ctx->r5 = ADD32(ctx->r5, -0XA0);
    // 0x15114C9C: beq         $a0, $zero, L_15114CB4
    if (ctx->r4 == 0) {
        // 0x15114CA0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15114CB4;
    }
    // 0x15114CA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15114CA4: lbu         $t4, 0x70($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X70);
    // 0x15114CA8: andi        $t6, $t4, 0x8
    ctx->r14 = ctx->r12 & 0X8;
    // 0x15114CAC: bnel        $t6, $zero, L_15114C70
    if (ctx->r14 != 0) {
        // 0x15114CB0: sltu        $at, $a2, $v1
        ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
            goto L_15114C70;
    }
    goto skip_1;
    // 0x15114CB0: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    skip_1:
L_15114CB4:
    // 0x15114CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15114CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15114CBC: jr          $ra
    // 0x15114CC0: nop

    return;
    return;
    // 0x15114CC0: nop

;}
RECOMP_FUNC void func_15014B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014B60: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x15014B64: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15014B68: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15014B6C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15014B70: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x15014B74: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15014B78: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x15014B7C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15014B80: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15014B84: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x15014B88: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x15014B8C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15014B90: lbu         $t6, 0x16($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X16);
    // 0x15014B94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15014B98: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15014B9C: sb          $t7, 0x16($s3)
    MEM_B(0X16, ctx->r19) = ctx->r15;
    // 0x15014BA0: sb          $t8, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r24;
    // 0x15014BA4: sw          $s3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r19;
    // 0x15014BA8: lh          $t9, 0x0($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X0);
    // 0x15014BAC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15014BB0: nop

    // 0x15014BB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014BB8: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x15014BBC: lh          $t0, 0x2($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X2);
    // 0x15014BC0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15014BC4: nop

    // 0x15014BC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014BCC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x15014BD0: lh          $t1, 0x4($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X4);
    // 0x15014BD4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x15014BD8: nop

    // 0x15014BDC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15014BE0: jal         0x10024770
    // 0x15014BE4: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x15014BE4: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x15014BE8: jal         0x150ADA20
    // 0x15014BEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15014BEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_1:
    // 0x15014BF0: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014BF4: mflo        $t2
    ctx->r10 = lo;
    // 0x15014BF8: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x15014BFC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15014C00: bgez        $t3, L_15014C18
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15014C04: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15014C18;
    }
    // 0x15014C04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014C08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014C0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15014C10: nop

    // 0x15014C14: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15014C18:
    // 0x15014C18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014C1C: lwc1        $f10, 0x6698($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x15014C20: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15014C24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15014C28: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15014C2C: nop

    // 0x15014C30: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15014C34: jal         0x10024770
    // 0x15014C38: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x15014C38: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x15014C3C: jal         0x150ADA20
    // 0x15014C40: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15014C40: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_3:
    // 0x15014C44: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014C48: mflo        $t4
    ctx->r12 = lo;
    // 0x15014C4C: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x15014C50: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x15014C54: bgez        $t5, L_15014C6C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15014C58: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15014C6C;
    }
    // 0x15014C58: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014C5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014C60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15014C64: nop

    // 0x15014C68: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_15014C6C:
    // 0x15014C6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014C70: lwc1        $f16, 0x669C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X669C);
    // 0x15014C74: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15014C78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15014C7C: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15014C80: nop

    // 0x15014C84: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15014C88: jal         0x10024770
    // 0x15014C8C: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x15014C8C: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x15014C90: jal         0x150ADA20
    // 0x15014C94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15014C94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_5:
    // 0x15014C98: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014C9C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014CA0: lwc1        $f0, 0x66A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66A0);
    // 0x15014CA4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014CA8: lwc1        $f2, 0x66A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X66A4);
    // 0x15014CAC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014CB0: mflo        $t6
    ctx->r14 = lo;
    // 0x15014CB4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x15014CB8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15014CBC: bgez        $t7, L_15014CD0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15014CC0: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15014CD0;
    }
    // 0x15014CC0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15014CC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15014CC8: nop

    // 0x15014CCC: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_15014CD0:
    // 0x15014CD0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014CD4: lwc1        $f18, 0x66A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X66A8);
    // 0x15014CD8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15014CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15014CE0: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15014CE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014CE8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15014CEC: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x15014CF0: lw          $t8, 0x18($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X18);
    // 0x15014CF4: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x15014CF8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15014CFC: bgez        $t9, L_15014D10
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15014D00: cvt.s.w     $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
            goto L_15014D10;
    }
    // 0x15014D00: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15014D04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15014D08: nop

    // 0x15014D0C: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
L_15014D10:
    // 0x15014D10: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15014D14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014D18: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15014D1C: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x15014D20: lw          $t0, 0x18($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X18);
    // 0x15014D24: srl         $t1, $t0, 16
    ctx->r9 = S32(U32(ctx->r8) >> 16);
    // 0x15014D28: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x15014D2C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15014D30: bgez        $t2, L_15014D44
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15014D34: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15014D44;
    }
    // 0x15014D34: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15014D38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15014D3C: nop

    // 0x15014D40: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15014D44:
    // 0x15014D44: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15014D48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014D4C: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15014D50: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x15014D54: lw          $t3, 0x1C($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X1C);
    // 0x15014D58: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x15014D5C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15014D60: bgez        $t4, L_15014D74
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15014D64: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15014D74;
    }
    // 0x15014D64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014D68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15014D6C: nop

    // 0x15014D70: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_15014D74:
    // 0x15014D74: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15014D78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014D7C: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15014D80: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x15014D84: lw          $t5, 0x1C($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X1C);
    // 0x15014D88: srl         $t6, $t5, 16
    ctx->r14 = S32(U32(ctx->r13) >> 16);
    // 0x15014D8C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x15014D90: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15014D94: bgez        $t7, L_15014DA8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15014D98: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15014DA8;
    }
    // 0x15014D98: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014D9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15014DA0: nop

    // 0x15014DA4: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_15014DA8:
    // 0x15014DA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014DAC: lwc1        $f10, 0x66AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X66AC);
    // 0x15014DB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014DB4: lwc1        $f6, 0x66B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X66B0);
    // 0x15014DB8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15014DBC: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x15014DC0: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x15014DC4: addiu       $s4, $s4, 0x938
    ctx->r20 = ADD32(ctx->r20, 0X938);
    // 0x15014DC8: addiu       $s6, $s6, -0x1610
    ctx->r22 = ADD32(ctx->r22, -0X1610);
    // 0x15014DCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15014DD0: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
    // 0x15014DD4: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x15014DD8: addiu       $fp, $sp, 0x7C
    ctx->r30 = ADD32(ctx->r29, 0X7C);
    // 0x15014DDC: addiu       $s7, $sp, 0x74
    ctx->r23 = ADD32(ctx->r29, 0X74);
    // 0x15014DE0: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x15014DE4: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x15014DE8: lh          $t8, 0x0($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X0);
    // 0x15014DEC: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x15014DF0: lh          $t9, 0x2($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X2);
    // 0x15014DF4: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    // 0x15014DF8: lh          $t0, 0x4($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X4);
    // 0x15014DFC: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x15014E00: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
L_15014E04:
    // 0x15014E04: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x15014E08: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15014E0C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15014E10: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x15014E14: sb          $t1, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r9;
    // 0x15014E18: sb          $t2, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r10;
    // 0x15014E1C: sh          $t3, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r11;
    // 0x15014E20: bne         $s3, $v0, L_15014E30
    if (ctx->r19 != ctx->r2) {
        // 0x15014E24: sb          $zero, 0x78($sp)
        MEM_B(0X78, ctx->r29) = 0;
            goto L_15014E30;
    }
    // 0x15014E24: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x15014E28: b           L_15014E40
    // 0x15014E2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
        goto L_15014E40;
    // 0x15014E2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_15014E30:
    // 0x15014E30: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014E34: mflo        $t4
    ctx->r12 = lo;
    // 0x15014E38: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x15014E3C: lbu         $a3, 0x0($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X0);
L_15014E40:
    // 0x15014E40: bne         $s3, $v0, L_15014E50
    if (ctx->r19 != ctx->r2) {
        // 0x15014E44: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_15014E50;
    }
    // 0x15014E44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15014E48: b           L_15014E60
    // 0x15014E4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15014E60;
    // 0x15014E4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15014E50:
    // 0x15014E50: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014E54: mflo        $t6
    ctx->r14 = lo;
    // 0x15014E58: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x15014E5C: lbu         $v1, 0x1($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X1);
L_15014E60:
    // 0x15014E60: bne         $s3, $v0, L_15014E70
    if (ctx->r19 != ctx->r2) {
        // 0x15014E64: or          $a1, $fp, $zero
        ctx->r5 = ctx->r30 | 0;
            goto L_15014E70;
    }
    // 0x15014E64: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x15014E68: b           L_15014E80
    // 0x15014E6C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_15014E80;
    // 0x15014E6C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_15014E70:
    // 0x15014E70: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15014E74: mflo        $t8
    ctx->r24 = lo;
    // 0x15014E78: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x15014E7C: lbu         $s2, 0x2($t9)
    ctx->r18 = MEM_BU(ctx->r25, 0X2);
L_15014E80:
    // 0x15014E80: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15014E84: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15014E88: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x15014E8C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15014E90: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15014E94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x15014E98: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x15014E9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15014EA0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15014EA4: jal         0x151602C0
    // 0x15014EA8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_151602C0(rdram, ctx);
        goto after_6;
    // 0x15014EA8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_6:
    // 0x15014EAC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x15014EB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15014EB4: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x15014EB8: bne         $at, $zero, L_15014E04
    if (ctx->r1 != 0) {
        // 0x15014EBC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_15014E04;
    }
    // 0x15014EBC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15014EC0: addiu       $t2, $zero, 0x29
    ctx->r10 = ADD32(0, 0X29);
    // 0x15014EC4: addiu       $t3, $zero, 0x48
    ctx->r11 = ADD32(0, 0X48);
    // 0x15014EC8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15014ECC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15014ED0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15014ED4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15014ED8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15014EDC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15014EE0: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x15014EE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15014EE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15014EEC: jal         0x15149130
    // 0x15014EF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_7;
    // 0x15014EF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_7:
    // 0x15014EF4: beq         $v0, $zero, L_15014F14
    if (ctx->r2 == 0) {
        // 0x15014EF8: addiu       $s1, $sp, 0x90
        ctx->r17 = ADD32(ctx->r29, 0X90);
            goto L_15014F14;
    }
    // 0x15014EF8: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
    // 0x15014EFC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15014F00: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x15014F04: jal         0x10022EC0
    // 0x15014F08: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x15014F08: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_8:
    // 0x15014F0C: b           L_15014F3C
    // 0x15014F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15014F3C;
    // 0x15014F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014F14:
    // 0x15014F14: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x15014F18: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
L_15014F1C:
    // 0x15014F1C: beql        $a0, $zero, L_15014F30
    if (ctx->r4 == 0) {
        // 0x15014F20: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_15014F30;
    }
    goto skip_0;
    // 0x15014F20: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x15014F24: jal         0x1516972C
    // 0x15014F28: nop

    func_1516972C(rdram, ctx);
        goto after_9;
    // 0x15014F28: nop

    after_9:
    // 0x15014F2C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_15014F30:
    // 0x15014F30: bnel        $s1, $s0, L_15014F1C
    if (ctx->r17 != ctx->r16) {
        // 0x15014F34: lw          $a0, 0x24($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X24);
            goto L_15014F1C;
    }
    goto skip_1;
    // 0x15014F34: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    skip_1:
    // 0x15014F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15014F3C:
    // 0x15014F3C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x15014F40: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15014F44: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x15014F48: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15014F4C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x15014F50: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x15014F54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x15014F58: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x15014F5C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x15014F60: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x15014F64: jr          $ra
    // 0x15014F68: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x15014F68: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_150D8A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8A20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150D8A24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150D8A28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x150D8A2C: jr          $ra
    // 0x150D8A30: nop

    return;
    return;
    // 0x150D8A30: nop

;}
RECOMP_FUNC void func_15161798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516179C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151617A0: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x151617A4: jal         0x1514EDF0
    // 0x151617A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x151617A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151617AC: jal         0x151617E4
    // 0x151617B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151617E4(rdram, ctx);
        goto after_1;
    // 0x151617B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151617B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151617B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151617BC: jr          $ra
    // 0x151617C0: nop

    return;
    return;
    // 0x151617C0: nop

;}
RECOMP_FUNC void func_15040A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A14: jr          $ra
    // 0x15040A18: nop

    return;
    return;
    // 0x15040A18: nop

;}
RECOMP_FUNC void func_1503E1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503E1F4: slti        $at, $a0, 0x20
    ctx->r1 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x1503E1F8: beq         $at, $zero, L_1503E22C
    if (ctx->r1 == 0) {
        // 0x1503E1FC: sll         $t1, $a1, 4
        ctx->r9 = S32(ctx->r5 << 4);
            goto L_1503E22C;
    }
    // 0x1503E1FC: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x1503E200: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x1503E204: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503E208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503E20C: lw          $t7, 0x6664($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6664);
    // 0x1503E210: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1503E214: sllv        $t9, $t8, $a0
    ctx->r25 = S32(ctx->r24 << (ctx->r4 & 31));
    // 0x1503E218: and         $t0, $t7, $t9
    ctx->r8 = ctx->r15 & ctx->r25;
    // 0x1503E21C: beql        $t0, $zero, L_1503E258
    if (ctx->r8 == 0) {
        // 0x1503E220: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1503E258;
    }
    goto skip_0;
    // 0x1503E220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1503E224: jr          $ra
    // 0x1503E228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1503E228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503E22C:
    // 0x1503E22C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1503E230: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1503E234: lw          $t2, 0x6668($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6668);
    // 0x1503E238: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1503E23C: sllv        $t4, $t3, $a0
    ctx->r12 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x1503E240: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x1503E244: beql        $t5, $zero, L_1503E258
    if (ctx->r13 == 0) {
        // 0x1503E248: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1503E258;
    }
    goto skip_1;
    // 0x1503E248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1503E24C: jr          $ra
    // 0x1503E250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1503E250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503E254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503E258:
    // 0x1503E258: jr          $ra
    // 0x1503E25C: nop

    return;
    return;
    // 0x1503E25C: nop

;}
RECOMP_FUNC void func_150958B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150958B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150958B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150958B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150958BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150958C0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150958C4: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x150958C8: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x150958CC: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x150958D0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150958D4: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x150958D8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x150958DC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150958E0: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x150958E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150958E8: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x150958EC: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x150958F0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150958F4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150958F8: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x150958FC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x15095900: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15095904: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15095908: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1509590C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15095910: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x15095914: jal         0x1509563C
    // 0x15095918: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_1509563C(rdram, ctx);
        goto after_0;
    // 0x15095918: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1509591C: bne         $v0, $zero, L_15095934
    if (ctx->r2 != 0) {
        // 0x15095920: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_15095934;
    }
    // 0x15095920: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x15095924: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x15095928: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1509592C: b           L_15095A34
    // 0x15095930: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
        goto L_15095A34;
    // 0x15095930: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_15095934:
    // 0x15095934: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15095938: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1509593C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15095940: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15095944: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15095948: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x1509594C: jal         0x15095B08
    // 0x15095950: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15095B08(rdram, ctx);
        goto after_1;
    // 0x15095950: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x15095954: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x15095958: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509595C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15095960: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15095964: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x15095968: lui         $t8, 0xEE00
    ctx->r24 = S32(0XEE00 << 16);
    // 0x1509596C: beql        $t6, $zero, L_15095A34
    if (ctx->r14 == 0) {
        // 0x15095970: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15095A34;
    }
    goto skip_0;
    // 0x15095970: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x15095974: lwc1        $f0, -0x2140($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2140);
    // 0x15095978: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509597C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15095980: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15095984: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15095988: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1509598C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15095990: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15095994: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15095998: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509599C: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150959A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150959A4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150959A8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x150959AC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150959B0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150959B4: nop

    // 0x150959B8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150959BC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150959C0: nop

    // 0x150959C4: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150959C8: beql        $t0, $zero, L_15095A18
    if (ctx->r8 == 0) {
        // 0x150959CC: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_15095A18;
    }
    goto skip_1;
    // 0x150959CC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x150959D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150959D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150959D8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150959DC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150959E0: nop

    // 0x150959E4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150959E8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150959EC: nop

    // 0x150959F0: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150959F4: bne         $t0, $zero, L_15095A0C
    if (ctx->r8 != 0) {
        // 0x150959F8: nop
    
            goto L_15095A0C;
    }
    // 0x150959F8: nop

    // 0x150959FC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15095A00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15095A04: b           L_15095A24
    // 0x15095A08: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_15095A24;
    // 0x15095A08: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_15095A0C:
    // 0x15095A0C: b           L_15095A24
    // 0x15095A10: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_15095A24;
    // 0x15095A10: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15095A14: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_15095A18:
    // 0x15095A18: nop

    // 0x15095A1C: bltz        $t0, L_15095A0C
    if (SIGNED(ctx->r8) < 0) {
        // 0x15095A20: nop
    
            goto L_15095A0C;
    }
    // 0x15095A20: nop

L_15095A24:
    // 0x15095A24: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15095A28: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x15095A2C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x15095A30: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15095A34:
    // 0x15095A34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15095A38: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15095A3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15095A40: jr          $ra
    // 0x15095A44: nop

    return;
    return;
    // 0x15095A44: nop

;}
RECOMP_FUNC void func_1000E134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E134: slti        $at, $a0, 0x96
    ctx->r1 = SIGNED(ctx->r4) < 0X96 ? 1 : 0;
    // 0x1000E138: beq         $at, $zero, L_1000E170
    if (ctx->r1 == 0) {
        // 0x1000E13C: sll         $t6, $a0, 4
        ctx->r14 = S32(ctx->r4 << 4);
            goto L_1000E170;
    }
    // 0x1000E13C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x1000E140: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x1000E144: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1000E148: lw          $v0, -0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F88);
    // 0x1000E14C: addiu       $at, $zero, -0xF1
    ctx->r1 = ADD32(0, -0XF1);
    // 0x1000E150: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x1000E154: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000E158: beq         $t7, $at, L_1000E168
    if (ctx->r15 == ctx->r1) {
        // 0x1000E15C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1000E168;
    }
    // 0x1000E15C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000E160: bnel        $t7, $at, L_1000E174
    if (ctx->r15 != ctx->r1) {
        // 0x1000E164: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000E174;
    }
    goto skip_0;
    // 0x1000E164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_1000E168:
    // 0x1000E168: jr          $ra
    // 0x1000E16C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1000E16C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E170:
    // 0x1000E170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000E174:
    // 0x1000E174: jr          $ra
    // 0x1000E178: nop

    return;
    return;
    // 0x1000E178: nop

;}
RECOMP_FUNC void func_1509629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509629C: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x150962A0: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150962A4: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x150962A8: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x150962AC: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x150962B0: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x150962B4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150962B8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150962BC: lw          $s1, 0x178($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X178);
    // 0x150962C0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150962C4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x150962C8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x150962CC: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x150962D0: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x150962D4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x150962D8: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x150962DC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x150962E0: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150962E4: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150962E8: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150962EC: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150962F0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150962F4: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x150962F8: lhu         $a2, 0x8($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X8);
    // 0x150962FC: andi        $t2, $s1, 0x1
    ctx->r10 = ctx->r17 & 0X1;
    // 0x15096300: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15096304: beq         $t2, $zero, L_15096314
    if (ctx->r10 == 0) {
        // 0x15096308: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_15096314;
    }
    // 0x15096308: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x1509630C: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x15096310: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_15096314:
    // 0x15096314: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
    // 0x15096318: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    // 0x1509631C: beq         $t6, $zero, L_15096354
    if (ctx->r14 == 0) {
        // 0x15096320: or          $ra, $v1, $zero
        ctx->r31 = ctx->r3 | 0;
            goto L_15096354;
    }
    // 0x15096320: or          $ra, $v1, $zero
    ctx->r31 = ctx->r3 | 0;
    // 0x15096324: lui         $at, 0xCA80
    ctx->r1 = S32(0XCA80 << 16);
    // 0x15096328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1509632C: addiu       $t9, $v0, 0xFF
    ctx->r25 = ADD32(ctx->r2, 0XFF);
    // 0x15096330: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x15096334: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15096338: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x1509633C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15096340: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x15096344: nop

    // 0x15096348: andi        $t8, $t5, 0xFFFF
    ctx->r24 = ctx->r13 & 0XFFFF;
    // 0x1509634C: b           L_15096374
    // 0x15096350: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
        goto L_15096374;
    // 0x15096350: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
L_15096354:
    // 0x15096354: lui         $at, 0x4A80
    ctx->r1 = S32(0X4A80 << 16);
    // 0x15096358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1509635C: addiu       $t8, $zero, 0x2000
    ctx->r24 = ADD32(0, 0X2000);
    // 0x15096360: sw          $t8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r24;
    // 0x15096364: div.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15096368: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509636C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x15096370: nop

L_15096374:
    // 0x15096374: andi        $t9, $s1, 0x4
    ctx->r25 = ctx->r17 & 0X4;
    // 0x15096378: beq         $t9, $zero, L_150963B0
    if (ctx->r25 == 0) {
        // 0x1509637C: lw          $t1, 0x170($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X170);
            goto L_150963B0;
    }
    // 0x1509637C: lw          $t1, 0x170($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X170);
    // 0x15096380: lui         $at, 0xCA80
    ctx->r1 = S32(0XCA80 << 16);
    // 0x15096384: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15096388: addiu       $s6, $a2, 0xFF
    ctx->r22 = ADD32(ctx->r6, 0XFF);
    // 0x1509638C: sll         $t8, $s6, 5
    ctx->r24 = S32(ctx->r22 << 5);
    // 0x15096390: div.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f28.fl);
    // 0x15096394: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x15096398: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1509639C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x150963A0: nop

    // 0x150963A4: andi        $t7, $t4, 0xFFFF
    ctx->r15 = ctx->r12 & 0XFFFF;
    // 0x150963A8: b           L_150963CC
    // 0x150963AC: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
        goto L_150963CC;
    // 0x150963AC: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
L_150963B0:
    // 0x150963B0: lui         $at, 0x4A80
    ctx->r1 = S32(0X4A80 << 16);
    // 0x150963B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150963B8: addiu       $s6, $zero, 0x2000
    ctx->r22 = ADD32(0, 0X2000);
    // 0x150963BC: div.s       $f16, $f10, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f28.fl);
    // 0x150963C0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150963C4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x150963C8: nop

L_150963CC:
    // 0x150963CC: addu        $t6, $t1, $a3
    ctx->r14 = ADD32(ctx->r9, ctx->r7);
    // 0x150963D0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x150963D4: div         $zero, $t7, $a3
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r7)));
    // 0x150963D8: lw          $a2, 0x174($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X174);
    // 0x150963DC: mflo        $a1
    ctx->r5 = lo;
    // 0x150963E0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x150963E4: addu        $t8, $a2, $v1
    ctx->r24 = ADD32(ctx->r6, ctx->r3);
    // 0x150963E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x150963EC: div         $zero, $t9, $v1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r3)));
    // 0x150963F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150963F4: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x150963F8: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x150963FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15096400: mflo        $v0
    ctx->r2 = lo;
    // 0x15096404: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15096408: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1509640C: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x15096410: lwc1        $f0, 0x168($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X168);
    // 0x15096414: bne         $a3, $zero, L_15096420
    if (ctx->r7 != 0) {
        // 0x15096418: nop
    
            goto L_15096420;
    }
    // 0x15096418: nop

    // 0x1509641C: break       7
    do_break(352936988);
L_15096420:
    // 0x15096420: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15096424: bne         $a3, $at, L_15096438
    if (ctx->r7 != ctx->r1) {
        // 0x15096428: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15096438;
    }
    // 0x15096428: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1509642C: bne         $t7, $at, L_15096438
    if (ctx->r15 != ctx->r1) {
        // 0x15096430: nop
    
            goto L_15096438;
    }
    // 0x15096430: nop

    // 0x15096434: break       6
    do_break(352937012);
L_15096438:
    // 0x15096438: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x1509643C: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15096440: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096444: lwc1        $f16, 0x16C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x15096448: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x1509644C: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x15096450: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15096454: bne         $v1, $zero, L_15096460
    if (ctx->r3 != 0) {
        // 0x15096458: nop
    
            goto L_15096460;
    }
    // 0x15096458: nop

    // 0x1509645C: break       7
    do_break(352937052);
L_15096460:
    // 0x15096460: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15096464: bne         $v1, $at, L_15096478
    if (ctx->r3 != ctx->r1) {
        // 0x15096468: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15096478;
    }
    // 0x15096468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1509646C: bne         $t9, $at, L_15096478
    if (ctx->r25 != ctx->r1) {
        // 0x15096470: nop
    
            goto L_15096478;
    }
    // 0x15096470: nop

    // 0x15096474: break       6
    do_break(352937076);
L_15096478:
    // 0x15096478: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1509647C: mflo        $t9
    ctx->r25 = lo;
    // 0x15096480: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
    // 0x15096484: nop

    // 0x15096488: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509648C: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x15096490: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15096494: mflo        $t6
    ctx->r14 = lo;
    // 0x15096498: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x1509649C: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x150964A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150964A4: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x150964A8: swc1        $f10, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f10.u32l;
    // 0x150964AC: lhu         $t9, 0x6($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X6);
    // 0x150964B0: sh          $t9, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r25;
    // 0x150964B4: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x150964B8: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150964BC: lbu         $t7, 0xA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA);
    // 0x150964C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150964C4: sb          $t7, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = ctx->r15;
    // 0x150964C8: lbu         $t6, 0xB($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XB);
    // 0x150964CC: sb          $t8, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r24;
    // 0x150964D0: sb          $t6, 0xEB($sp)
    MEM_B(0XEB, ctx->r29) = ctx->r14;
    // 0x150964D4: mflo        $t7
    ctx->r15 = lo;
    // 0x150964D8: subu        $t0, $a2, $t7
    ctx->r8 = SUB32(ctx->r6, ctx->r15);
    // 0x150964DC: blezl       $a1, L_150968EC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x150964E0: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_150968EC;
    }
    goto skip_0;
    // 0x150964E0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    skip_0:
    // 0x150964E4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150964E8: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x150964EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150964F0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150964F4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x150964F8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150964FC: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x15096500: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15096504: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x15096508: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x1509650C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15096510: sw          $a3, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r7;
    // 0x15096514: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    // 0x15096518: swc1        $f12, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f12.u32l;
    // 0x1509651C: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15096520: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
L_15096524:
    // 0x15096524: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x15096528: lwc1        $f24, 0xAC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1509652C: sh          $t0, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r8;
    // 0x15096530: lwc1        $f0, 0x16C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x15096534: bne         $a0, $a1, L_15096568
    if (ctx->r4 != ctx->r5) {
        // 0x15096538: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_15096568;
    }
    // 0x15096538: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1509653C: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x15096540: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x15096544: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096548: mflo        $t9
    ctx->r25 = lo;
    // 0x1509654C: subu        $v0, $t1, $t9
    ctx->r2 = SUB32(ctx->r9, ctx->r25);
    // 0x15096550: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x15096554: sw          $v0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r2;
    // 0x15096558: beq         $t2, $zero, L_15096568
    if (ctx->r10 == 0) {
        // 0x1509655C: sh          $v1, 0xE6($sp)
        MEM_H(0XE6, ctx->r29) = ctx->r3;
            goto L_15096568;
    }
    // 0x1509655C: sh          $v1, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r3;
    // 0x15096560: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x15096564: sh          $t7, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r15;
L_15096568:
    // 0x15096568: lw          $t6, 0x154($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X154);
    // 0x1509656C: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x15096570: lw          $v0, 0x108($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X108);
    // 0x15096574: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15096578: lw          $t8, 0x17C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X17C);
    // 0x1509657C: addiu       $t7, $t0, 0x2
    ctx->r15 = ADD32(ctx->r8, 0X2);
    // 0x15096580: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15096584: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x15096588: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1509658C: div.s       $f16, $f6, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x15096590: add.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x15096594: beq         $t2, $zero, L_150965D8
    if (ctx->r10 == 0) {
        // 0x15096598: swc1        $f12, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
            goto L_150965D8;
    }
    // 0x15096598: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    // 0x1509659C: trunc.w.s   $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150965A0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x150965A4: div.s       $f8, $f26, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f26.fl, ctx->f4.fl);
    // 0x150965A8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150965AC: nop

    // 0x150965B0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150965B4: sub.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x150965B8: mul.s       $f16, $f6, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150965BC: nop

    // 0x150965C0: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x150965C4: sub.s       $f18, $f30, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f30.fl - ctx->f10.fl;
    // 0x150965C8: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150965CC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x150965D0: nop

    // 0x150965D4: addu        $s7, $v0, $t6
    ctx->r23 = ADD32(ctx->r2, ctx->r14);
L_150965D8:
    // 0x150965D8: beq         $t2, $zero, L_150965E4
    if (ctx->r10 == 0) {
        // 0x150965DC: addu        $s7, $s7, $t8
        ctx->r23 = ADD32(ctx->r23, ctx->r24);
            goto L_150965E4;
    }
    // 0x150965DC: addu        $s7, $s7, $t8
    ctx->r23 = ADD32(ctx->r23, ctx->r24);
    // 0x150965E0: sh          $t7, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r15;
L_150965E4:
    // 0x150965E4: blez        $t3, L_150968DC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x150965E8: sll         $t8, $t5, 16
        ctx->r24 = S32(ctx->r13 << 16);
            goto L_150968DC;
    }
    // 0x150965E8: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x150965EC: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150965F0: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x150965F4: or          $fp, $t8, $t9
    ctx->r30 = ctx->r24 | ctx->r25;
    // 0x150965F8: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x150965FC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x15096600: sw          $t0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r8;
    // 0x15096604: trunc.w.s   $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15096608: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x1509660C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x15096610: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15096614: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15096618: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1509661C: lw          $t8, 0x180($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X180);
    // 0x15096620: subu        $t7, $t6, $t9
    ctx->r15 = SUB32(ctx->r14, ctx->r25);
    // 0x15096624: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15096628: sw          $a1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r5;
    // 0x1509662C: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x15096630: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x15096634: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x15096638: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x1509663C: sra         $s5, $t7, 16
    ctx->r21 = S32(SIGNED(ctx->r15) >> 16);
L_15096640:
    // 0x15096640: add.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x15096644: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    // 0x15096648: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1509664C: beq         $t2, $zero, L_15096694
    if (ctx->r10 == 0) {
        // 0x15096650: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_15096694;
    }
    // 0x15096650: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x15096654: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15096658: div.s       $f10, $f26, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = DIV_S(ctx->f26.fl, ctx->f28.fl);
    // 0x1509665C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15096660: nop

    // 0x15096664: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15096668: nop

    // 0x1509666C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15096670: sub.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x15096674: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x15096678: nop

    // 0x1509667C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15096680: sub.s       $f6, $f30, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f30.fl - ctx->f18.fl;
    // 0x15096684: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15096688: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x1509668C: nop

    // 0x15096690: addu        $s4, $s6, $t9
    ctx->r20 = ADD32(ctx->r22, ctx->r25);
L_15096694:
    // 0x15096694: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15096698: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1509669C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150966A0: sw          $ra, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r31;
    // 0x150966A4: mfc1        $s0, $f16
    ctx->r16 = (int32_t)ctx->f16.u32l;
    // 0x150966A8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150966AC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150966B0: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x150966B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150966B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150966BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150966C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150966C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150966C8: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x150966CC: sw          $t3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r11;
    // 0x150966D0: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x150966D4: jal         0x15094F70
    // 0x150966D8: sw          $t5, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r13;
    func_15094F70(rdram, ctx);
        goto after_0;
    // 0x150966D8: sw          $t5, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r13;
    after_0:
    // 0x150966DC: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x150966E0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x150966E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150966E8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x150966EC: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x150966F0: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x150966F4: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x150966F8: lw          $t5, 0x120($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X120);
    // 0x150966FC: lw          $ra, 0x144($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X144);
    // 0x15096700: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x15096704: blez        $s5, L_15096714
    if (SIGNED(ctx->r21) <= 0) {
        // 0x15096708: trunc.w.s   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
            goto L_15096714;
    }
    // 0x15096708: trunc.w.s   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x1509670C: b           L_15096718
    // 0x15096710: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
        goto L_15096718;
    // 0x15096710: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
L_15096714:
    // 0x15096714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_15096718:
    // 0x15096718: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1509671C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x15096720: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15096724: subu        $t9, $t7, $s0
    ctx->r25 = SUB32(ctx->r15, ctx->r16);
    // 0x15096728: addu        $t8, $s0, $t9
    ctx->r24 = ADD32(ctx->r16, ctx->r25);
    // 0x1509672C: sll         $t6, $t8, 18
    ctx->r14 = S32(ctx->r24 << 18);
    // 0x15096730: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15096734: blez        $t7, L_15096744
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15096738: andi        $t6, $a1, 0xFFF
        ctx->r14 = ctx->r5 & 0XFFF;
            goto L_15096744;
    }
    // 0x15096738: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x1509673C: b           L_15096748
    // 0x15096740: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_15096748;
    // 0x15096740: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_15096744:
    // 0x15096744: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15096748:
    // 0x15096748: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x1509674C: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x15096750: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x15096754: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x15096758: blez        $s1, L_15096768
    if (SIGNED(ctx->r17) <= 0) {
        // 0x1509675C: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_15096768;
    }
    // 0x1509675C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15096760: b           L_1509676C
    // 0x15096764: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
        goto L_1509676C;
    // 0x15096764: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
L_15096768:
    // 0x15096768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1509676C:
    // 0x1509676C: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x15096770: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15096774: blez        $t6, L_15096784
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15096778: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_15096784;
    }
    // 0x15096778: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1509677C: b           L_15096788
    // 0x15096780: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_15096788;
    // 0x15096780: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_15096784:
    // 0x15096784: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15096788:
    // 0x15096788: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x1509678C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x15096790: andi        $t8, $a0, 0xFFF
    ctx->r24 = ctx->r4 & 0XFFF;
    // 0x15096794: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x15096798: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1509679C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x150967A0: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x150967A4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x150967A8: bgez        $s1, L_15096800
    if (SIGNED(ctx->r17) >= 0) {
        // 0x150967AC: addiu       $s2, $t1, 0x8
        ctx->r18 = ADD32(ctx->r9, 0X8);
            goto L_15096800;
    }
    // 0x150967AC: addiu       $s2, $t1, 0x8
    ctx->r18 = ADD32(ctx->r9, 0X8);
    // 0x150967B0: sll         $v0, $t5, 16
    ctx->r2 = S32(ctx->r13 << 16);
    // 0x150967B4: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x150967B8: multu       $s1, $t8
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150967BC: mflo        $v1
    ctx->r3 = lo;
    // 0x150967C0: sra         $t9, $v1, 7
    ctx->r25 = S32(SIGNED(ctx->r3) >> 7);
    // 0x150967C4: bgez        $t8, L_150967E4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150967C8: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_150967E4;
    }
    // 0x150967C8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x150967CC: blez        $t9, L_150967DC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x150967D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150967DC;
    }
    // 0x150967D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150967D4: b           L_15096804
    // 0x150967D8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_15096804;
    // 0x150967D8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_150967DC:
    // 0x150967DC: b           L_15096804
    // 0x150967E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_15096804;
    // 0x150967E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_150967E4:
    // 0x150967E4: bgez        $v1, L_150967F4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150967E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150967F4;
    }
    // 0x150967E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150967EC: b           L_150967F4
    // 0x150967F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_150967F4;
    // 0x150967F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150967F4:
    // 0x150967F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150967F8: b           L_15096804
    // 0x150967FC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_15096804;
    // 0x150967FC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_15096800:
    // 0x15096800: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_15096804:
    // 0x15096804: bgez        $t0, L_15096870
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15096808: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15096870;
    }
    // 0x15096808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509680C: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x15096810: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15096814: bgez        $t6, L_15096844
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15096818: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15096844;
    }
    // 0x15096818: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x1509681C: multu       $a2, $t6
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096820: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15096824: mflo        $v0
    ctx->r2 = lo;
    // 0x15096828: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x1509682C: blez        $t7, L_1509683C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15096830: nop
    
            goto L_1509683C;
    }
    // 0x15096830: nop

    // 0x15096834: b           L_15096870
    // 0x15096838: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_15096870;
    // 0x15096838: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_1509683C:
    // 0x1509683C: b           L_15096870
    // 0x15096840: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_15096870;
    // 0x15096840: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_15096844:
    // 0x15096844: multu       $a2, $v1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096848: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1509684C: mflo        $v0
    ctx->r2 = lo;
    // 0x15096850: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x15096854: bgez        $t8, L_15096864
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15096858: nop
    
            goto L_15096864;
    }
    // 0x15096858: nop

    // 0x1509685C: b           L_15096864
    // 0x15096860: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_15096864;
    // 0x15096860: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_15096864:
    // 0x15096864: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x15096868: b           L_15096870
    // 0x1509686C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_15096870;
    // 0x1509686C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_15096870:
    // 0x15096870: subu        $t9, $s4, $a0
    ctx->r25 = SUB32(ctx->r20, ctx->r4);
    // 0x15096874: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x15096878: subu        $t8, $s7, $a3
    ctx->r24 = SUB32(ctx->r23, ctx->r7);
    // 0x1509687C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x15096880: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x15096884: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x15096888: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1509688C: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x15096890: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15096894: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x15096898: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x1509689C: bnel        $s3, $zero, L_150968C4
    if (ctx->r19 != 0) {
        // 0x150968A0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_150968C4;
    }
    goto skip_1;
    // 0x150968A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x150968A4: mtc1        $ra, $f10
    ctx->f10.u32l = ctx->r31;
    // 0x150968A8: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x150968AC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150968B0: lhu         $t9, 0x8($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X8);
    // 0x150968B4: sh          $t9, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r25;
    // 0x150968B8: mul.s       $f6, $f18, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x150968BC: div.s       $f24, $f6, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x150968C0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_150968C4:
    // 0x150968C4: bne         $s3, $t3, L_15096640
    if (ctx->r19 != ctx->r11) {
        // 0x150968C8: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_15096640;
    }
    // 0x150968C8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x150968CC: lw          $t1, 0x170($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X170);
    // 0x150968D0: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x150968D4: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x150968D8: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
L_150968DC:
    // 0x150968DC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x150968E0: bne         $a1, $a0, L_15096524
    if (ctx->r5 != ctx->r4) {
        // 0x150968E4: lwc1        $f2, 0xF8($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_15096524;
    }
    // 0x150968E4: lwc1        $f2, 0xF8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x150968E8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150968EC:
    // 0x150968EC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x150968F0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150968F4: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150968F8: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150968FC: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x15096900: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x15096904: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x15096908: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1509690C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x15096910: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x15096914: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x15096918: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1509691C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x15096920: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x15096924: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x15096928: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1509692C: jr          $ra
    // 0x15096930: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    return;
    // 0x15096930: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_151AB7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB7D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151AB7DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB7E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AB7E4: lhu         $t6, 0x5E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X5E);
    // 0x151AB7E8: lw          $v0, 0x58($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X58);
    // 0x151AB7EC: beq         $t6, $zero, L_151AB80C
    if (ctx->r14 == 0) {
        // 0x151AB7F0: addiu       $v0, $v0, 0x58
        ctx->r2 = ADD32(ctx->r2, 0X58);
            goto L_151AB80C;
    }
    // 0x151AB7F0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x151AB7F4: lhu         $a0, 0x5E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X5E);
    // 0x151AB7F8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x151AB7FC: jal         0x100111C8
    // 0x151AB800: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151AB800: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x151AB804: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151AB808: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_151AB80C:
    // 0x151AB80C: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x151AB810: jal         0x1513470C
    // 0x151AB814: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1513470C(rdram, ctx);
        goto after_1;
    // 0x151AB814: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151AB818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AB81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151AB820: jr          $ra
    // 0x151AB824: nop

    return;
    return;
    // 0x151AB824: nop

;}
RECOMP_FUNC void func_151D7264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7264: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151D7268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D726C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D7270: lw          $at, 0x30($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X30);
    // 0x151D7274: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x151D7278: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x151D727C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D7280: lw          $t9, 0x34($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X34);
    // 0x151D7284: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151D7288: lw          $at, 0x38($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X38);
    // 0x151D728C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D7290: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151D7294: lbu         $t0, 0x2D($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X2D);
    // 0x151D7298: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x151D729C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x151D72A0: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x151D72A4: lbu         $t2, 0x2C($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X2C);
    // 0x151D72A8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151D72AC: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x151D72B0: lw          $t9, -0x360($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X360);
    // 0x151D72B4: jalr        $t9
    // 0x151D72B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151D72B8: nop

    after_0:
    // 0x151D72BC: bne         $v0, $zero, L_151D72DC
    if (ctx->r2 != 0) {
        // 0x151D72C0: lw          $a1, 0x40($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X40);
            goto L_151D72DC;
    }
    // 0x151D72C0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x151D72C4: lbu         $t5, 0xD($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0XD);
    // 0x151D72C8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151D72CC: sh          $t4, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r12;
    // 0x151D72D0: ori         $t8, $t5, 0x1
    ctx->r24 = ctx->r13 | 0X1;
    // 0x151D72D4: b           L_151D7398
    // 0x151D72D8: sb          $t8, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r24;
        goto L_151D7398;
    // 0x151D72D8: sb          $t8, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r24;
L_151D72DC:
    // 0x151D72DC: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x151D72E0: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x151D72E4: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x151D72E8: andi        $t6, $t7, 0x1
    ctx->r14 = ctx->r15 & 0X1;
    // 0x151D72EC: beq         $t6, $zero, L_151D7390
    if (ctx->r14 == 0) {
        // 0x151D72F0: nop
    
            goto L_151D7390;
    }
    // 0x151D72F0: nop

    // 0x151D72F4: beq         $t0, $zero, L_151D7380
    if (ctx->r8 == 0) {
        // 0x151D72F8: lwc1        $f6, 0x30($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
            goto L_151D7380;
    }
    // 0x151D72F8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151D72FC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D7300: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151D7304: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x151D7308: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D730C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151D7310: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x151D7314: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151D7318: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151D731C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x151D7320: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151D7324: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x151D7328: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151D732C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D7330: jal         0x15143E64
    // 0x151D7334: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x151D7334: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x151D7338: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151D733C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x151D7340: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151D7344: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x151D7348: nop

    // 0x151D734C: bc1f        L_151D7370
    if (!c1cs) {
        // 0x151D7350: nop
    
            goto L_151D7370;
    }
    // 0x151D7350: nop

    // 0x151D7354: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151D7358: bne         $t1, $zero, L_151D7398
    if (ctx->r9 != 0) {
        // 0x151D735C: nop
    
            goto L_151D7398;
    }
    // 0x151D735C: nop

    // 0x151D7360: jal         0x151D7830
    // 0x151D7364: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151D7830(rdram, ctx);
        goto after_2;
    // 0x151D7364: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x151D7368: b           L_151D739C
    // 0x151D736C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D739C;
    // 0x151D736C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D7370:
    // 0x151D7370: jal         0x151D77C8
    // 0x151D7374: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151D77C8(rdram, ctx);
        goto after_3;
    // 0x151D7374: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x151D7378: b           L_151D739C
    // 0x151D737C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D739C;
    // 0x151D737C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D7380:
    // 0x151D7380: jal         0x151D77C8
    // 0x151D7384: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151D77C8(rdram, ctx);
        goto after_4;
    // 0x151D7384: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x151D7388: b           L_151D739C
    // 0x151D738C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D739C;
    // 0x151D738C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D7390:
    // 0x151D7390: jal         0x151D77C8
    // 0x151D7394: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151D77C8(rdram, ctx);
        goto after_5;
    // 0x151D7394: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
L_151D7398:
    // 0x151D7398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D739C:
    // 0x151D739C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151D73A0: jr          $ra
    // 0x151D73A4: nop

    return;
    return;
    // 0x151D73A4: nop

;}
RECOMP_FUNC void func_1500D8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500D8C8: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x1500D8CC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1500D8D0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1500D8D4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x1500D8D8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x1500D8DC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1500D8E0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1500D8E4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1500D8E8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1500D8EC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1500D8F0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1500D8F4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1500D8F8: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1500D8FC: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1500D900: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1500D904: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1500D908: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1500D90C: jal         0x1514462C
    // 0x1500D910: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_1514462C(rdram, ctx);
        goto after_0;
    // 0x1500D910: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x1500D914: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1500D918: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500D91C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1500D920: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D924: lwc1        $f6, 0x6188($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6188);
    // 0x1500D928: addiu       $t6, $zero, 0x4D40
    ctx->r14 = ADD32(0, 0X4D40);
    // 0x1500D92C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1500D930: mul.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1500D934: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500D938: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x1500D93C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1500D940: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1500D944: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1500D948: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1500D94C: c.lt.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl < ctx->f28.fl;
    // 0x1500D950: addiu       $s5, $zero, 0x39
    ctx->r21 = ADD32(0, 0X39);
    // 0x1500D954: addiu       $s4, $zero, 0xE
    ctx->r20 = ADD32(0, 0XE);
    // 0x1500D958: addiu       $s3, $sp, 0xAC
    ctx->r19 = ADD32(ctx->r29, 0XAC);
    // 0x1500D95C: bc1f        L_1500DE48
    if (!c1cs) {
        // 0x1500D960: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_1500DE48;
    }
    // 0x1500D960: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x1500D964: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1500D968: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1500D96C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500D970: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1500D974: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500D978: swc1        $f30, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f30.u32l;
    // 0x1500D97C: swc1        $f30, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f30.u32l;
    // 0x1500D980: swc1        $f30, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f30.u32l;
    // 0x1500D984: swc1        $f30, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f30.u32l;
    // 0x1500D988: swc1        $f30, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f30.u32l;
    // 0x1500D98C: sw          $t6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r14;
    // 0x1500D990: sh          $t7, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r15;
    // 0x1500D994: sb          $zero, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = 0;
    // 0x1500D998: sb          $t8, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r24;
    // 0x1500D99C: sb          $t9, 0x115($sp)
    MEM_B(0X115, ctx->r29) = ctx->r25;
    // 0x1500D9A0: sb          $zero, 0x116($sp)
    MEM_B(0X116, ctx->r29) = 0;
    // 0x1500D9A4: sb          $zero, 0x117($sp)
    MEM_B(0X117, ctx->r29) = 0;
    // 0x1500D9A8: sb          $zero, 0x118($sp)
    MEM_B(0X118, ctx->r29) = 0;
    // 0x1500D9AC: sb          $zero, 0x119($sp)
    MEM_B(0X119, ctx->r29) = 0;
    // 0x1500D9B0: sb          $zero, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = 0;
    // 0x1500D9B4: sb          $zero, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = 0;
    // 0x1500D9B8: sb          $t0, 0x11C($sp)
    MEM_B(0X11C, ctx->r29) = ctx->r8;
    // 0x1500D9BC: sb          $zero, 0x11E($sp)
    MEM_B(0X11E, ctx->r29) = 0;
    // 0x1500D9C0: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x1500D9C4: sb          $zero, 0x124($sp)
    MEM_B(0X124, ctx->r29) = 0;
    // 0x1500D9C8: sh          $t1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r9;
    // 0x1500D9CC: sh          $t2, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r10;
    // 0x1500D9D0: lwc1        $f22, 0x618C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X618C);
    // 0x1500D9D4: addiu       $s2, $s2, 0x6104
    ctx->r18 = ADD32(ctx->r18, 0X6104);
    // 0x1500D9D8: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
    // 0x1500D9DC: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x1500D9E0: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
L_1500D9E4:
    // 0x1500D9E4: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x1500D9E8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x1500D9EC: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x1500D9F0: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x1500D9F4: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    // 0x1500D9F8: lw          $t5, 0xC($s2)
    ctx->r13 = MEM_W(ctx->r18, 0XC);
    // 0x1500D9FC: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    // 0x1500DA00: lw          $at, 0x10($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X10);
    // 0x1500DA04: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
    // 0x1500DA08: lw          $t5, 0x14($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X14);
    // 0x1500DA0C: sw          $at, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r1;
    // 0x1500DA10: lw          $at, 0x18($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X18);
    // 0x1500DA14: sw          $t5, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r13;
    // 0x1500DA18: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x1500DA1C: sw          $at, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r1;
    // 0x1500DA20: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1500DA24: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x1500DA28: jal         0x15008340
    // 0x1500DA2C: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    func_15008340(rdram, ctx);
        goto after_1;
    // 0x1500DA2C: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    after_1:
    // 0x1500DA30: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1500DA34: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1500DA38: jal         0x10024770
    // 0x1500DA3C: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x1500DA3C: sub.s       $f20, $f10, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f14.fl;
    after_2:
    // 0x1500DA40: jal         0x150ADA20
    // 0x1500DA44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1500DA44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_3:
    // 0x1500DA48: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DA4C: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1500DA50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DA54: mflo        $t6
    ctx->r14 = lo;
    // 0x1500DA58: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500DA5C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1500DA60: bgez        $t7, L_1500DA74
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500DA64: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500DA74;
    }
    // 0x1500DA64: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500DA68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500DA6C: nop

    // 0x1500DA70: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500DA74:
    // 0x1500DA74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500DA78: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500DA7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500DA80: nop

    // 0x1500DA84: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x1500DA88: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1500DA8C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1500DA90: nop

    // 0x1500DA94: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1500DA98: add.s       $f18, $f14, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1500DA9C: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1500DAA0: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x1500DAA4: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1500DAA8: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x1500DAAC: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1500DAB0: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x1500DAB4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500DAB8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1500DABC: nop

    // 0x1500DAC0: bc1fl       L_1500DAD4
    if (!c1cs) {
        // 0x1500DAC4: mov.s       $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
            goto L_1500DAD4;
    }
    goto skip_0;
    // 0x1500DAC4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    skip_0:
    // 0x1500DAC8: b           L_1500DAD4
    // 0x1500DACC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_1500DAD4;
    // 0x1500DACC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1500DAD0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_1500DAD4:
    // 0x1500DAD4: jal         0x10024770
    // 0x1500DAD8: nop

    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x1500DAD8: nop

    after_4:
    // 0x1500DADC: jal         0x150ADA20
    // 0x1500DAE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500DAE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x1500DAE4: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DAE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DAEC: mflo        $t8
    ctx->r24 = lo;
    // 0x1500DAF0: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500DAF4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500DAF8: bgez        $t9, L_1500DB0C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500DAFC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500DB0C;
    }
    // 0x1500DAFC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500DB00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500DB04: nop

    // 0x1500DB08: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1500DB0C:
    // 0x1500DB0C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500DB10: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1500DB14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500DB18: nop

    // 0x1500DB1C: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500DB20: add.s       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x1500DB24: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1500DB28: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x1500DB2C: jal         0x10024770
    // 0x1500DB30: nop

    osGetCount_recomp(rdram, ctx);
        goto after_6;
    // 0x1500DB30: nop

    after_6:
    // 0x1500DB34: jal         0x150ADA20
    // 0x1500DB38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1500DB38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x1500DB3C: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DB40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DB44: mflo        $t0
    ctx->r8 = lo;
    // 0x1500DB48: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500DB4C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500DB50: bgez        $t1, L_1500DB64
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500DB54: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500DB64;
    }
    // 0x1500DB54: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500DB58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500DB5C: nop

    // 0x1500DB60: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_1500DB64:
    // 0x1500DB64: mul.s       $f0, $f16, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500DB68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DB6C: lwc1        $f6, 0x6190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6190);
    // 0x1500DB70: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500DB74: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500DB78: jal         0x10024770
    // 0x1500DB7C: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x1500DB7C: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x1500DB80: jal         0x150ADA20
    // 0x1500DB84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1500DB84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_9:
    // 0x1500DB88: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DB8C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DB90: mflo        $t2
    ctx->r10 = lo;
    // 0x1500DB94: andi        $t4, $t2, 0xFFFF
    ctx->r12 = ctx->r10 & 0XFFFF;
    // 0x1500DB98: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1500DB9C: bgez        $t4, L_1500DBB0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1500DBA0: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500DBB0;
    }
    // 0x1500DBA0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500DBA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500DBA8: nop

    // 0x1500DBAC: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_1500DBB0:
    // 0x1500DBB0: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500DBB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DBB8: lwc1        $f6, 0x6194($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6194);
    // 0x1500DBBC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DBC0: lwc1        $f10, 0x6198($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6198);
    // 0x1500DBC4: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1500DBC8: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1500DBCC: jal         0x10024770
    // 0x1500DBD0: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_10;
    // 0x1500DBD0: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x1500DBD4: jal         0x150ADA20
    // 0x1500DBD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1500DBD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x1500DBDC: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DBE0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DBE4: mflo        $t3
    ctx->r11 = lo;
    // 0x1500DBE8: andi        $t5, $t3, 0xFFFF
    ctx->r13 = ctx->r11 & 0XFFFF;
    // 0x1500DBEC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1500DBF0: bgez        $t5, L_1500DC04
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500DBF4: cvt.s.w     $f8, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500DC04;
    }
    // 0x1500DBF4: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500DBF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500DBFC: nop

    // 0x1500DC00: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1500DC04:
    // 0x1500DC04: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1500DC08: nop

    // 0x1500DC0C: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x1500DC10: jal         0x10024770
    // 0x1500DC14: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_12;
    // 0x1500DC14: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x1500DC18: jal         0x150ADA20
    // 0x1500DC1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1500DC1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x1500DC20: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DC24: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DC28: mflo        $t6
    ctx->r14 = lo;
    // 0x1500DC2C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1500DC30: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1500DC34: bgez        $t7, L_1500DC48
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500DC38: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500DC48;
    }
    // 0x1500DC38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500DC3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500DC40: nop

    // 0x1500DC44: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_1500DC48:
    // 0x1500DC48: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500DC4C: nop

    // 0x1500DC50: mul.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x1500DC54: jal         0x10024770
    // 0x1500DC58: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_14;
    // 0x1500DC58: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x1500DC5C: jal         0x150ADA20
    // 0x1500DC60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1500DC60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_15:
    // 0x1500DC64: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DC68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DC6C: mflo        $t8
    ctx->r24 = lo;
    // 0x1500DC70: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1500DC74: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500DC78: bgez        $t9, L_1500DC8C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500DC7C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500DC8C;
    }
    // 0x1500DC7C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500DC80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500DC84: nop

    // 0x1500DC88: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_1500DC8C:
    // 0x1500DC8C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500DC90: nop

    // 0x1500DC94: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x1500DC98: jal         0x10024770
    // 0x1500DC9C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_16;
    // 0x1500DC9C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x1500DCA0: jal         0x150ADA20
    // 0x1500DCA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1500DCA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x1500DCA8: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DCAC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DCB0: mflo        $t0
    ctx->r8 = lo;
    // 0x1500DCB4: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1500DCB8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1500DCBC: bgez        $t1, L_1500DCD0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500DCC0: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500DCD0;
    }
    // 0x1500DCC0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500DCC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500DCC8: nop

    // 0x1500DCCC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500DCD0:
    // 0x1500DCD0: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500DCD4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DCD8: lwc1        $f18, 0x619C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X619C);
    // 0x1500DCDC: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500DCE0: jal         0x10024770
    // 0x1500DCE4: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_18;
    // 0x1500DCE4: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x1500DCE8: jal         0x150ADA20
    // 0x1500DCEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x1500DCEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_19:
    // 0x1500DCF0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DCF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DCF8: mflo        $t2
    ctx->r10 = lo;
    // 0x1500DCFC: andi        $t4, $t2, 0xFFFF
    ctx->r12 = ctx->r10 & 0XFFFF;
    // 0x1500DD00: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500DD04: bgez        $t4, L_1500DD18
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1500DD08: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500DD18;
    }
    // 0x1500DD08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500DD0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500DD10: nop

    // 0x1500DD14: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_1500DD18:
    // 0x1500DD18: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500DD1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DD20: lwc1        $f18, 0x61A0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X61A0);
    // 0x1500DD24: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1500DD28: jal         0x10024770
    // 0x1500DD2C: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_20;
    // 0x1500DD2C: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x1500DD30: jal         0x150ADA20
    // 0x1500DD34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x1500DD34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_21:
    // 0x1500DD38: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DD3C: mflo        $t3
    ctx->r11 = lo;
    // 0x1500DD40: nop

    // 0x1500DD44: nop

    // 0x1500DD48: divu        $zero, $t3, $s4
    lo = S32(U32(ctx->r11) / U32(ctx->r20)); hi = S32(U32(ctx->r11) % U32(ctx->r20));
    // 0x1500DD4C: mfhi        $t5
    ctx->r13 = hi;
    // 0x1500DD50: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x1500DD54: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x1500DD58: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x1500DD5C: bne         $s4, $zero, L_1500DD68
    if (ctx->r20 != 0) {
        // 0x1500DD60: nop
    
            goto L_1500DD68;
    }
    // 0x1500DD60: nop

    // 0x1500DD64: break       7
    do_break(352378212);
L_1500DD68:
    // 0x1500DD68: sh          $t8, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r24;
    // 0x1500DD6C: jal         0x10024770
    // 0x1500DD70: nop

    osGetCount_recomp(rdram, ctx);
        goto after_22;
    // 0x1500DD70: nop

    after_22:
    // 0x1500DD74: jal         0x150ADA20
    // 0x1500DD78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x1500DD78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_23:
    // 0x1500DD7C: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500DD80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500DD84: mflo        $t9
    ctx->r25 = lo;
    // 0x1500DD88: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x1500DD8C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1500DD90: bgez        $t0, L_1500DDA4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1500DD94: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500DDA4;
    }
    // 0x1500DD94: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500DD98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500DD9C: nop

    // 0x1500DDA0: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_1500DDA4:
    // 0x1500DDA4: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500DDA8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500DDAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500DDB0: lhu         $t1, 0x10A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X10A);
    // 0x1500DDB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500DDB8: mul.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1500DDBC: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1500DDC0: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x1500DDC4: bne         $s5, $t1, L_1500DDE4
    if (ctx->r21 != ctx->r9) {
        // 0x1500DDC8: swc1        $f0, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
            goto L_1500DDE4;
    }
    // 0x1500DDC8: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x1500DDCC: lwc1        $f12, 0x61A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X61A4);
    // 0x1500DDD0: mul.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1500DDD4: nop

    // 0x1500DDD8: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1500DDDC: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x1500DDE0: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
L_1500DDE4:
    // 0x1500DDE4: jal         0x1510F800
    // 0x1500DDE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_24;
    // 0x1500DDE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x1500DDEC: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1500DDF0: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1500DDF4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500DDF8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1500DDFC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1500DE00: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x1500DE04: jal         0x1510FD20
    // 0x1500DE08: nop

    func_1510FD20(rdram, ctx);
        goto after_25;
    // 0x1500DE08: nop

    after_25:
    // 0x1500DE0C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1500DE10: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1500DE14: sw          $v0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r2;
    // 0x1500DE18: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1500DE1C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1500DE20: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x1500DE24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1500DE28: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1500DE2C: jal         0x15132A4C
    // 0x1500DE30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15132A4C(rdram, ctx);
        goto after_26;
    // 0x1500DE30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x1500DE34: sub.s       $f28, $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f28.fl = ctx->f28.fl - ctx->f30.fl;
    // 0x1500DE38: c.lt.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl < ctx->f28.fl;
    // 0x1500DE3C: nop

    // 0x1500DE40: bc1tl       L_1500D9E4
    if (c1cs) {
        // 0x1500DE44: lw          $at, 0x0($s2)
        ctx->r1 = MEM_W(ctx->r18, 0X0);
            goto L_1500D9E4;
    }
    goto skip_1;
    // 0x1500DE44: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    skip_1:
L_1500DE48:
    // 0x1500DE48: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1500DE4C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1500DE50: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1500DE54: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1500DE58: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1500DE5C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1500DE60: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1500DE64: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1500DE68: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1500DE6C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1500DE70: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1500DE74: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1500DE78: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1500DE7C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1500DE80: jr          $ra
    // 0x1500DE84: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x1500DE84: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_15145A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15145A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15145A58: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15145A5C: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x15145A60: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15145A64: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x15145A68: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x15145A6C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15145A70: beql        $t7, $at, L_15145ACC
    if (ctx->r15 == ctx->r1) {
        // 0x15145A74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15145ACC;
    }
    goto skip_0;
    // 0x15145A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15145A78: lbu         $t8, -0x19EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X19EA);
    // 0x15145A7C: bnel        $t8, $zero, L_15145AA8
    if (ctx->r24 != 0) {
        // 0x15145A80: lw          $v0, 0x31C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X31C);
            goto L_15145AA8;
    }
    goto skip_1;
    // 0x15145A80: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    skip_1:
    // 0x15145A84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x15145A88: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15145A8C: beq         $v0, $at, L_15145AA4
    if (ctx->r2 == ctx->r1) {
        // 0x15145A90: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15145AA4;
    }
    // 0x15145A90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15145A94: beq         $v0, $at, L_15145AA4
    if (ctx->r2 == ctx->r1) {
        // 0x15145A98: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_15145AA4;
    }
    // 0x15145A98: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x15145A9C: bne         $v0, $at, L_15145AC0
    if (ctx->r2 != ctx->r1) {
        // 0x15145AA0: nop
    
            goto L_15145AC0;
    }
    // 0x15145AA0: nop

L_15145AA4:
    // 0x15145AA4: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
L_15145AA8:
    // 0x15145AA8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x15145AAC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15145AB0: beql        $v0, $zero, L_15145ACC
    if (ctx->r2 == 0) {
        // 0x15145AB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15145ACC;
    }
    goto skip_2;
    // 0x15145AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15145AB8: b           L_15145AC8
    // 0x15145ABC: sb          $zero, 0x78($v0)
    MEM_B(0X78, ctx->r2) = 0;
        goto L_15145AC8;
    // 0x15145ABC: sb          $zero, 0x78($v0)
    MEM_B(0X78, ctx->r2) = 0;
L_15145AC0:
    // 0x15145AC0: jal         0x15053694
    // 0x15145AC4: nop

    func_15053694(rdram, ctx);
        goto after_0;
    // 0x15145AC4: nop

    after_0:
L_15145AC8:
    // 0x15145AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15145ACC:
    // 0x15145ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15145AD0: jr          $ra
    // 0x15145AD4: nop

    return;
    return;
    // 0x15145AD4: nop

;}
RECOMP_FUNC void func_1506B5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B5AC: jr          $ra
    // 0x1506B5B0: nop

    return;
    return;
    // 0x1506B5B0: nop

;}
RECOMP_FUNC void func_150748F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150748F4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150748F8: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x150748FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074900: sb          $t6, -0x3C29($at)
    MEM_B(-0X3C29, ctx->r1) = ctx->r14;
    // 0x15074904: jr          $ra
    // 0x15074908: nop

    return;
    return;
    // 0x15074908: nop

;}
RECOMP_FUNC void func_150162B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150162B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150162B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150162B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150162BC: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x150162C0: jal         0x100226F0
    // 0x150162C4: addiu       $a1, $zero, 0x4F4C
    ctx->r5 = ADD32(0, 0X4F4C);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x150162C4: addiu       $a1, $zero, 0x4F4C
    ctx->r5 = ADD32(0, 0X4F4C);
    after_0:
    // 0x150162C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150162CC: lw          $v0, 0x2138($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2138);
    // 0x150162D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150162D4: sw          $zero, 0x6000($at)
    MEM_W(0X6000, ctx->r1) = 0;
    // 0x150162D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150162DC: bne         $v0, $at, L_150162F4
    if (ctx->r2 != ctx->r1) {
        // 0x150162E0: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_150162F4;
    }
    // 0x150162E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150162E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150162E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150162EC: b           L_1501632C
    // 0x150162F0: sb          $t6, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r14;
        goto L_1501632C;
    // 0x150162F0: sb          $t6, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r14;
L_150162F4:
    // 0x150162F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150162F8: bne         $v0, $at, L_1501630C
    if (ctx->r2 != ctx->r1) {
        // 0x150162FC: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_1501630C;
    }
    // 0x150162FC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15016300: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016304: b           L_1501632C
    // 0x15016308: sb          $t7, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r15;
        goto L_1501632C;
    // 0x15016308: sb          $t7, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r15;
L_1501630C:
    // 0x1501630C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15016310: bne         $v0, $at, L_15016324
    if (ctx->r2 != ctx->r1) {
        // 0x15016314: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_15016324;
    }
    // 0x15016314: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15016318: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1501631C: b           L_1501632C
    // 0x15016320: sb          $t8, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r24;
        goto L_1501632C;
    // 0x15016320: sb          $t8, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = ctx->r24;
L_15016324:
    // 0x15016324: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016328: sb          $zero, -0x3D92($at)
    MEM_B(-0X3D92, ctx->r1) = 0;
L_1501632C:
    // 0x1501632C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016330: sb          $zero, -0x3D50($at)
    MEM_B(-0X3D50, ctx->r1) = 0;
    // 0x15016334: addiu       $a0, $a0, -0x3D68
    ctx->r4 = ADD32(ctx->r4, -0X3D68);
    // 0x15016338: jal         0x100226F0
    // 0x1501633C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1501633C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x15016340: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15016344: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016348: sb          $t9, -0x3D5E($at)
    MEM_B(-0X3D5E, ctx->r1) = ctx->r25;
    // 0x1501634C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016350: sb          $zero, 0x18D0($at)
    MEM_B(0X18D0, ctx->r1) = 0;
    // 0x15016354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15016358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1501635C: jr          $ra
    // 0x15016360: nop

    return;
    return;
    // 0x15016360: nop

;}
RECOMP_FUNC void func_150B9D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B9D8C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150B9D90: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150B9D94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B9D98: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150B9D9C: lh          $t6, 0x98($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X98);
    // 0x150B9DA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B9DA4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x150B9DA8: bne         $t6, $at, L_150B9EB0
    if (ctx->r14 != ctx->r1) {
        // 0x150B9DAC: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_150B9EB0;
    }
    // 0x150B9DAC: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x150B9DB0: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x150B9DB4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B9DB8: sb          $t7, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r15;
    // 0x150B9DBC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150B9DC0: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150B9DC4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x150B9DC8: sh          $t9, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r25;
    // 0x150B9DCC: sb          $t0, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r8;
    // 0x150B9DD0: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x150B9DD4: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x150B9DD8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B9DDC: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x150B9DE0: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x150B9DE4: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x150B9DE8: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x150B9DEC: sb          $t2, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r10;
    // 0x150B9DF0: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x150B9DF4: jal         0x150ADA20
    // 0x150B9DF8: sb          $t1, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B9DF8: sb          $t1, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r9;
    after_0:
    // 0x150B9DFC: jal         0x150ADA20
    // 0x150B9E00: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150B9E00: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x150B9E04: jal         0x150ADA20
    // 0x150B9E08: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150B9E08: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_2:
    // 0x150B9E0C: lh          $t4, 0x9C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X9C);
    // 0x150B9E10: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x150B9E14: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x150B9E18: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x150B9E1C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150B9E20: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x150B9E24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B9E28: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x150B9E2C: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x150B9E30: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x150B9E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B9E38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150B9E3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150B9E40: lh          $t5, 0xA6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA6);
    // 0x150B9E44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B9E48: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x150B9E4C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x150B9E50: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B9E54: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x150B9E58: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B9E5C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150B9E60: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    // 0x150B9E64: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x150B9E68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B9E6C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B9E70: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150B9E74: lh          $t8, 0xA2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA2);
    // 0x150B9E78: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B9E7C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150B9E80: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150B9E84: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x150B9E88: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150B9E8C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B9E90: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150B9E94: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150B9E98: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150B9E9C: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x150B9EA0: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x150B9EA4: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x150B9EA8: jal         0x1513C4EC
    // 0x150B9EAC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    func_1513C4EC(rdram, ctx);
        goto after_3;
    // 0x150B9EAC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    after_3:
L_150B9EB0:
    // 0x150B9EB0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150B9EB4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150B9EB8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150B9EBC: jr          $ra
    // 0x150B9EC0: nop

    return;
    return;
    // 0x150B9EC0: nop

;}
RECOMP_FUNC void func_1506F0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F0F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F0FC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F100: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F104: jal         0x150C1260
    // 0x1506F108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150C1260(rdram, ctx);
        goto after_0;
    // 0x1506F108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x1506F10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F114: jr          $ra
    // 0x1506F118: nop

    return;
    return;
    // 0x1506F118: nop

;}
RECOMP_FUNC void func_1507E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507E9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507EA00: jal         0x150849A0
    // 0x1507EA04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_150849A0(rdram, ctx);
        goto after_0;
    // 0x1507EA04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1507EA08: bne         $v0, $zero, L_1507EA28
    if (ctx->r2 != 0) {
        // 0x1507EA0C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_1507EA28;
    }
    // 0x1507EA0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1507EA10: beq         $a1, $zero, L_1507EA20
    if (ctx->r5 == 0) {
        // 0x1507EA14: lui         $v0, 0x800A
        ctx->r2 = S32(0X800A << 16);
            goto L_1507EA20;
    }
    // 0x1507EA14: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1507EA18: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1507EA1C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_1507EA20:
    // 0x1507EA20: b           L_1507EA34
    // 0x1507EA24: addiu       $v0, $v0, -0x26F0
    ctx->r2 = ADD32(ctx->r2, -0X26F0);
        goto L_1507EA34;
    // 0x1507EA24: addiu       $v0, $v0, -0x26F0
    ctx->r2 = ADD32(ctx->r2, -0X26F0);
L_1507EA28:
    // 0x1507EA28: beq         $a1, $zero, L_1507EA34
    if (ctx->r5 == 0) {
        // 0x1507EA2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507EA34;
    }
    // 0x1507EA2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507EA30: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_1507EA34:
    // 0x1507EA34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507EA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507EA3C: jr          $ra
    // 0x1507EA40: nop

    return;
    return;
    // 0x1507EA40: nop

;}
RECOMP_FUNC void func_15075BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075BE8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075BEC: lbu         $t6, 0x1893($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1893);
    // 0x15075BF0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075BF4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15075BF8: beq         $t6, $zero, L_15075C10
    if (ctx->r14 == 0) {
        // 0x15075BFC: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_15075C10;
    }
    // 0x15075BFC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15075C00: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15075C04: lhu         $t7, 0x22C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22C);
    // 0x15075C08: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x15075C0C: sh          $t8, 0x22C($v0)
    MEM_H(0X22C, ctx->r2) = ctx->r24;
L_15075C10:
    // 0x15075C10: lbu         $t9, 0x1890($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1890);
    // 0x15075C14: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x15075C18: sb          $t9, 0x233($t0)
    MEM_B(0X233, ctx->r8) = ctx->r25;
    // 0x15075C1C: jr          $ra
    // 0x15075C20: nop

    return;
    return;
    // 0x15075C20: nop

;}
RECOMP_FUNC void func_1513FA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513FA70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513FA74: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x1513FA78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513FA7C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1513FA80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1513FA84: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1513FA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513FA8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1513FA90: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1513FA94: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1513FA98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1513FA9C: jal         0x1513FAB4
    // 0x1513FAA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_1513FAB4(rdram, ctx);
        goto after_0;
    // 0x1513FAA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x1513FAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513FAA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1513FAAC: jr          $ra
    // 0x1513FAB0: nop

    return;
    return;
    // 0x1513FAB0: nop

;}
RECOMP_FUNC void func_15198C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198C90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15198C94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15198C98: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15198C9C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15198CA0: lb          $t7, 0x2C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2C);
    // 0x15198CA4: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x15198CA8: lw          $v1, 0x94($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X94);
    // 0x15198CAC: beql        $t7, $zero, L_15198D34
    if (ctx->r15 == 0) {
        // 0x15198CB0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15198D34;
    }
    goto skip_0;
    // 0x15198CB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x15198CB4: lhu         $a0, 0x66($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X66);
    // 0x15198CB8: beql        $a0, $zero, L_15198D34
    if (ctx->r4 == 0) {
        // 0x15198CBC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15198D34;
    }
    goto skip_1;
    // 0x15198CBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x15198CC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15198CC4: lb          $t8, 0x2D($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X2D);
    // 0x15198CC8: addiu       $t6, $zero, 0x1388
    ctx->r14 = ADD32(0, 0X1388);
    // 0x15198CCC: addiu       $t7, $zero, 0x1F4
    ctx->r15 = ADD32(0, 0X1F4);
    // 0x15198CD0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x15198CD4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15198CD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15198CDC: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x15198CE0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15198CE4: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x15198CE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15198CEC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15198CF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15198CF4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15198CF8: nop

    // 0x15198CFC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15198D00: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15198D04: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15198D08: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15198D0C: nop

    // 0x15198D10: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15198D14: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15198D18: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15198D1C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x15198D20: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15198D24: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x15198D28: jal         0x1000F91C
    // 0x15198D2C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_1000F91C(rdram, ctx);
        goto after_0;
    // 0x15198D2C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_0:
    // 0x15198D30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15198D34:
    // 0x15198D34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15198D38: jr          $ra
    // 0x15198D3C: nop

    return;
    return;
    // 0x15198D3C: nop

;}
RECOMP_FUNC void func_15040D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040D6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040D70: jr          $ra
    // 0x15040D74: nop

    return;
    return;
    // 0x15040D74: nop

;}
RECOMP_FUNC void func_151A8B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8B20: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151A8B24: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x151A8B28: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A8B2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151A8B30: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x151A8B34: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x151A8B38: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x151A8B3C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151A8B40: jal         0x10022EC0
    // 0x151A8B44: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x151A8B44: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_0:
    // 0x151A8B48: lh          $a0, 0xAE($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XAE);
    // 0x151A8B4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A8B50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A8B54: lwc1        $f6, -0x70B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X70B0);
    // 0x151A8B58: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A8B5C: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x151A8B60: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x151A8B64: sb          $zero, 0x95($sp)
    MEM_B(0X95, ctx->r29) = 0;
    // 0x151A8B68: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151A8B6C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151A8B70: bne         $a0, $a1, L_151A8B80
    if (ctx->r4 != ctx->r5) {
        // 0x151A8B74: swc1        $f6, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
            goto L_151A8B80;
    }
    // 0x151A8B74: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x151A8B78: b           L_151A8B84
    // 0x151A8B7C: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
        goto L_151A8B84;
    // 0x151A8B7C: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
L_151A8B80:
    // 0x151A8B80: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_151A8B84:
    // 0x151A8B84: bne         $a0, $a1, L_151A8B94
    if (ctx->r4 != ctx->r5) {
        // 0x151A8B88: addiu       $a2, $zero, 0x25
        ctx->r6 = ADD32(0, 0X25);
            goto L_151A8B94;
    }
    // 0x151A8B88: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x151A8B8C: b           L_151A8B98
    // 0x151A8B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A8B98;
    // 0x151A8B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A8B94:
    // 0x151A8B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A8B98:
    // 0x151A8B98: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x151A8B9C: lbu         $t0, 0xB7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB7);
    // 0x151A8BA0: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x151A8BA4: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x151A8BA8: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151A8BAC: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x151A8BB0: addiu       $t9, $t8, 0x58
    ctx->r25 = ADD32(ctx->r24, 0X58);
    // 0x151A8BB4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151A8BB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151A8BBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151A8BC0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A8BC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A8BC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x151A8BCC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151A8BD0: jal         0x15149130
    // 0x151A8BD4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x151A8BD4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_1:
    // 0x151A8BD8: beq         $v0, $zero, L_151A8CD8
    if (ctx->r2 == 0) {
        // 0x151A8BDC: sw          $v0, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r2;
            goto L_151A8CD8;
    }
    // 0x151A8BDC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x151A8BE0: addiu       $a3, $v0, 0x28
    ctx->r7 = ADD32(ctx->r2, 0X28);
    // 0x151A8BE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x151A8BE8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151A8BEC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x151A8BF0: jal         0x10022EC0
    // 0x151A8BF4: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151A8BF4: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_2:
    // 0x151A8BF8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x151A8BFC: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x151A8C00: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    // 0x151A8C04: beq         $t2, $zero, L_151A8C88
    if (ctx->r10 == 0) {
        // 0x151A8C08: andi        $t3, $v1, 0x2
        ctx->r11 = ctx->r3 & 0X2;
            goto L_151A8C88;
    }
    // 0x151A8C08: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x151A8C0C: beql        $t3, $zero, L_151A8C40
    if (ctx->r11 == 0) {
        // 0x151A8C10: lwc1        $f0, 0x10($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X10);
            goto L_151A8C40;
    }
    goto skip_0;
    // 0x151A8C10: lwc1        $f0, 0x10($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X10);
    skip_0:
    // 0x151A8C14: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x151A8C18: beql        $a0, $zero, L_151A8C40
    if (ctx->r4 == 0) {
        // 0x151A8C1C: lwc1        $f0, 0x10($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X10);
            goto L_151A8C40;
    }
    goto skip_1;
    // 0x151A8C1C: lwc1        $f0, 0x10($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X10);
    skip_1:
    // 0x151A8C20: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x151A8C24: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x151A8C28: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x151A8C2C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x151A8C30: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151A8C34: b           L_151A8C44
    // 0x151A8C38: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
        goto L_151A8C44;
    // 0x151A8C38: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A8C3C: lwc1        $f0, 0x10($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X10);
L_151A8C40:
    // 0x151A8C40: lwc1        $f2, 0x18($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X18);
L_151A8C44:
    // 0x151A8C44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151A8C48: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151A8C4C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151A8C50: jal         0x1510F800
    // 0x151A8C54: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_1510F800(rdram, ctx);
        goto after_3;
    // 0x151A8C54: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x151A8C58: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151A8C5C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151A8C60: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x151A8C64: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x151A8C68: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x151A8C6C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151A8C70: jal         0x1510FD20
    // 0x151A8C74: nop

    func_1510FD20(rdram, ctx);
        goto after_4;
    // 0x151A8C74: nop

    after_4:
    // 0x151A8C78: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x151A8C7C: sw          $v0, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->r2;
    // 0x151A8C80: b           L_151A8C90
    // 0x151A8C84: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
        goto L_151A8C90;
    // 0x151A8C84: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
L_151A8C88:
    // 0x151A8C88: sw          $zero, 0x50($a3)
    MEM_W(0X50, ctx->r7) = 0;
    // 0x151A8C8C: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
L_151A8C90:
    // 0x151A8C90: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x151A8C94: beql        $t9, $zero, L_151A8CC0
    if (ctx->r25 == 0) {
        // 0x151A8C98: lwc1        $f0, 0x20($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X20);
            goto L_151A8CC0;
    }
    goto skip_2;
    // 0x151A8C98: lwc1        $f0, 0x20($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X20);
    skip_2:
    // 0x151A8C9C: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x151A8CA0: beql        $a0, $zero, L_151A8CC0
    if (ctx->r4 == 0) {
        // 0x151A8CA4: lwc1        $f0, 0x20($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X20);
            goto L_151A8CC0;
    }
    goto skip_3;
    // 0x151A8CA4: lwc1        $f0, 0x20($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X20);
    skip_3:
    // 0x151A8CA8: jal         0x15144598
    // 0x151A8CAC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_15144598(rdram, ctx);
        goto after_5;
    // 0x151A8CAC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_5:
    // 0x151A8CB0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x151A8CB4: b           L_151A8CD8
    // 0x151A8CB8: swc1        $f0, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->f0.u32l;
        goto L_151A8CD8;
    // 0x151A8CB8: swc1        $f0, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->f0.u32l;
    // 0x151A8CBC: lwc1        $f0, 0x20($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X20);
L_151A8CC0:
    // 0x151A8CC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A8CC4: lwc1        $f6, -0x70AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X70AC);
    // 0x151A8CC8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x151A8CCC: nop

    // 0x151A8CD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A8CD4: swc1        $f8, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->f8.u32l;
L_151A8CD8:
    // 0x151A8CD8: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x151A8CDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151A8CE0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151A8CE4: jr          $ra
    // 0x151A8CE8: nop

    return;
    return;
    // 0x151A8CE8: nop

;}
RECOMP_FUNC void func_1501D348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501D348: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1501D34C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x1501D350: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1501D354: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1501D358: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1501D35C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1501D360: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x1501D364: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1501D368: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x1501D36C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x1501D370: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x1501D374: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x1501D378: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501D37C: addiu       $t6, $t6, 0x35EA
    ctx->r14 = ADD32(ctx->r14, 0X35EA);
    // 0x1501D380: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x1501D384: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x1501D388: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x1501D38C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501D390: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501D394: beq         $v0, $at, L_1501DA88
    if (ctx->r2 == ctx->r1) {
        // 0x1501D398: addiu       $t0, $t0, 0x35C4
        ctx->r8 = ADD32(ctx->r8, 0X35C4);
            goto L_1501DA88;
    }
    // 0x1501D398: addiu       $t0, $t0, 0x35C4
    ctx->r8 = ADD32(ctx->r8, 0X35C4);
    // 0x1501D39C: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x1501D3A0: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x1501D3A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D3A8: bne         $t9, $zero, L_1501DA88
    if (ctx->r25 != 0) {
        // 0x1501D3AC: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_1501DA88;
    }
    // 0x1501D3AC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501D3B0: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x1501D3B4: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x1501D3B8: sb          $t1, 0x3C90($at)
    MEM_B(0X3C90, ctx->r1) = ctx->r9;
    // 0x1501D3BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D3C0: beq         $s1, $v1, L_1501D414
    if (ctx->r17 == ctx->r3) {
        // 0x1501D3C4: sw          $t2, 0x3C94($at)
        MEM_W(0X3C94, ctx->r1) = ctx->r10;
            goto L_1501D414;
    }
    // 0x1501D3C4: sw          $t2, 0x3C94($at)
    MEM_W(0X3C94, ctx->r1) = ctx->r10;
    // 0x1501D3C8: addiu       $t3, $s0, 0x1
    ctx->r11 = ADD32(ctx->r16, 0X1);
    // 0x1501D3CC: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
    // 0x1501D3D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1501D3D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1501D3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D3DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D3E0: jal         0x1501C730
    // 0x1501D3E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501C730(rdram, ctx);
        goto after_0;
    // 0x1501D3E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1501D3E8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1501D3EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1501D3F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D3F4: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x1501D3F8: beq         $t5, $zero, L_1501D40C
    if (ctx->r13 == 0) {
        // 0x1501D3FC: nop
    
            goto L_1501D40C;
    }
    // 0x1501D3FC: nop

    // 0x1501D400: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D404: b           L_1501DA88
    // 0x1501D408: sb          $zero, 0x35C5($at)
    MEM_B(0X35C5, ctx->r1) = 0;
        goto L_1501DA88;
    // 0x1501D408: sb          $zero, 0x35C5($at)
    MEM_B(0X35C5, ctx->r1) = 0;
L_1501D40C:
    // 0x1501D40C: b           L_1501DA88
    // 0x1501D410: sb          $v0, 0x35C5($at)
    MEM_B(0X35C5, ctx->r1) = ctx->r2;
        goto L_1501DA88;
    // 0x1501D410: sb          $v0, 0x35C5($at)
    MEM_B(0X35C5, ctx->r1) = ctx->r2;
L_1501D414:
    // 0x1501D414: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D418: addu        $at, $at, $s5
    ctx->r1 = ADD32(ctx->r1, ctx->r21);
    // 0x1501D41C: sb          $s0, 0x35E8($at)
    MEM_B(0X35E8, ctx->r1) = ctx->r16;
    // 0x1501D420: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1501D424: beq         $v0, $at, L_1501D43C
    if (ctx->r2 == ctx->r1) {
        // 0x1501D428: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_1501D43C;
    }
    // 0x1501D428: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1501D42C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D430: sb          $v1, 0x35A8($at)
    MEM_B(0X35A8, ctx->r1) = ctx->r3;
    // 0x1501D434: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D438: sb          $s0, 0x3C98($at)
    MEM_B(0X3C98, ctx->r1) = ctx->r16;
L_1501D43C:
    // 0x1501D43C: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x1501D440: jal         0x1501D044
    // 0x1501D444: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    func_1501D044(rdram, ctx);
        goto after_1;
    // 0x1501D444: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    after_1:
    // 0x1501D448: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1501D44C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x1501D450: jal         0x1501D1D4
    // 0x1501D454: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_1501D1D4(rdram, ctx);
        goto after_2;
    // 0x1501D454: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_2:
    // 0x1501D458: beq         $v0, $zero, L_1501DA88
    if (ctx->r2 == 0) {
        // 0x1501D45C: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_1501DA88;
    }
    // 0x1501D45C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501D460: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x1501D464: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x1501D468: lw          $v1, 0x3668($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3668);
    // 0x1501D46C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D474: lw          $s2, 0x0($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X0);
    // 0x1501D478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D47C: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D480: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x1501D484: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x1501D488: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x1501D48C: jal         0x10003C40
    // 0x1501D490: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x1501D490: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_3:
    // 0x1501D494: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1501D498: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501D49C: addiu       $t8, $t8, 0x35C8
    ctx->r24 = ADD32(ctx->r24, 0X35C8);
    // 0x1501D4A0: addu        $s4, $t7, $t8
    ctx->r20 = ADD32(ctx->r15, ctx->r24);
    // 0x1501D4A4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x1501D4A8: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D4AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1501D4B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1501D4B4: blez        $t0, L_1501D500
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1501D4B8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1501D500;
    }
    // 0x1501D4B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D4BC: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x1501D4C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D4C4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1501D4C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D4CC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
L_1501D4D0:
    // 0x1501D4D0: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x1501D4D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D4D8: srl         $t1, $t9, 3
    ctx->r9 = S32(U32(ctx->r25) >> 3);
    // 0x1501D4DC: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1501D4E0: sh          $t1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r9;
    // 0x1501D4E4: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D4E8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D4EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D4F0: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1501D4F4: bnel        $at, $zero, L_1501D4D0
    if (ctx->r1 != 0) {
        // 0x1501D4F8: lw          $t9, 0x4($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X4);
            goto L_1501D4D0;
    }
    goto skip_0;
    // 0x1501D4F8: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x1501D4FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D500:
    // 0x1501D500: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x1501D504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D50C: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1501D510: beql        $at, $zero, L_1501D520
    if (ctx->r1 == 0) {
        // 0x1501D514: sll         $s1, $v0, 1
        ctx->r17 = S32(ctx->r2 << 1);
            goto L_1501D520;
    }
    goto skip_1;
    // 0x1501D514: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    skip_1:
    // 0x1501D518: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1501D51C: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
L_1501D520:
    // 0x1501D520: jal         0x10003C40
    // 0x1501D524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x1501D524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x1501D528: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1501D52C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501D530: addiu       $t5, $t5, 0x35D0
    ctx->r13 = ADD32(ctx->r13, 0X35D0);
    // 0x1501D534: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x1501D538: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1501D53C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x1501D540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501D544: jal         0x100226F0
    // 0x1501D548: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x1501D548: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x1501D54C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x1501D550: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D55C: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1501D560: beq         $at, $zero, L_1501D56C
    if (ctx->r1 == 0) {
        // 0x1501D564: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1501D56C;
    }
    // 0x1501D564: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D568: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_1501D56C:
    // 0x1501D56C: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x1501D570: jal         0x10003C40
    // 0x1501D574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    allocate_memory(rdram, ctx);
        goto after_6;
    // 0x1501D574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x1501D578: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1501D57C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501D580: addiu       $t7, $t7, 0x35D8
    ctx->r15 = ADD32(ctx->r15, 0X35D8);
    // 0x1501D584: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1501D588: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1501D58C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x1501D590: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501D594: jal         0x100226F0
    // 0x1501D598: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x1501D598: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x1501D59C: lhu         $a0, 0x6($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X6);
    // 0x1501D5A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D5A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D5A8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x1501D5AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1501D5B0: jal         0x10003C40
    // 0x1501D5B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_8;
    // 0x1501D5B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x1501D5B8: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1501D5BC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501D5C0: addiu       $t2, $t2, 0x35E0
    ctx->r10 = ADD32(ctx->r10, 0X35E0);
    // 0x1501D5C4: addu        $v1, $t9, $t2
    ctx->r3 = ADD32(ctx->r25, ctx->r10);
    // 0x1501D5C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1501D5CC: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D5D0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1501D5D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D5D8: sll         $t1, $a0, 6
    ctx->r9 = S32(ctx->r4 << 6);
    // 0x1501D5DC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1501D5E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D5E4: jal         0x10003C40
    // 0x1501D5E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_9;
    // 0x1501D5E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x1501D5EC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x1501D5F0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501D5F4: addiu       $t4, $t4, 0x3A50
    ctx->r12 = ADD32(ctx->r12, 0X3A50);
    // 0x1501D5F8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1501D5FC: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x1501D600: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x1501D604: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D608: blez        $t0, L_1501D68C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1501D60C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1501D68C;
    }
    // 0x1501D60C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1501D610:
    // 0x1501D610: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1501D614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D61C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1501D620: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x1501D624: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D628: sll         $s1, $s0, 6
    ctx->r17 = S32(ctx->r16 << 6);
    // 0x1501D62C: beq         $v0, $zero, L_1501D678
    if (ctx->r2 == 0) {
        // 0x1501D630: sll         $a0, $v0, 2
        ctx->r4 = S32(ctx->r2 << 2);
            goto L_1501D678;
    }
    // 0x1501D630: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x1501D634: jal         0x10003C40
    // 0x1501D638: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    allocate_memory(rdram, ctx);
        goto after_10;
    // 0x1501D638: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_10:
    // 0x1501D63C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x1501D640: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    // 0x1501D644: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D648: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1501D64C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D654: addu        $t2, $t9, $s1
    ctx->r10 = ADD32(ctx->r25, ctx->r17);
    // 0x1501D658: jal         0x10003C40
    // 0x1501D65C: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    allocate_memory(rdram, ctx);
        goto after_11;
    // 0x1501D65C: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    after_11:
    // 0x1501D660: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1501D664: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x1501D668: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x1501D66C: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x1501D670: sw          $v0, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r2;
    // 0x1501D674: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
L_1501D678:
    // 0x1501D678: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D67C: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1501D680: bne         $at, $zero, L_1501D610
    if (ctx->r1 != 0) {
        // 0x1501D684: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_1501D610;
    }
    // 0x1501D684: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D688: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D68C:
    // 0x1501D68C: sll         $a0, $t0, 4
    ctx->r4 = S32(ctx->r8 << 4);
    // 0x1501D690: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x1501D694: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x1501D698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D69C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D6A0: jal         0x10003C40
    // 0x1501D6A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_12;
    // 0x1501D6A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x1501D6A8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x1501D6AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D6B0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x1501D6B4: sw          $v0, 0x3958($at)
    MEM_W(0X3958, ctx->r1) = ctx->r2;
    // 0x1501D6B8: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D6BC: blez        $a0, L_1501D718
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1501D6C0: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_1501D718;
    }
    // 0x1501D6C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1501D6C4: sll         $t6, $s5, 4
    ctx->r14 = S32(ctx->r21 << 4);
    // 0x1501D6C8: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x1501D6CC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501D6D0: addiu       $t7, $t7, 0x3960
    ctx->r15 = ADD32(ctx->r15, 0X3960);
    // 0x1501D6D4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1501D6D8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_1501D6DC:
    // 0x1501D6DC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x1501D6E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D6E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D6E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1501D6EC: jal         0x10003C40
    // 0x1501D6F0: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    allocate_memory(rdram, ctx);
        goto after_13;
    // 0x1501D6F0: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_13:
    // 0x1501D6F4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x1501D6F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D6FC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1501D700: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D704: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1501D708: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1501D70C: bne         $at, $zero, L_1501D6DC
    if (ctx->r1 != 0) {
        // 0x1501D710: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_1501D6DC;
    }
    // 0x1501D710: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1501D714: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D718:
    // 0x1501D718: blez        $t0, L_1501D76C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1501D71C: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_1501D76C;
    }
    // 0x1501D71C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501D720: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D724: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1501D728: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1501D72C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
L_1501D730:
    // 0x1501D730: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D734: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1501D738: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x1501D73C: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x1501D740: addu        $t1, $t2, $v1
    ctx->r9 = ADD32(ctx->r10, ctx->r3);
    // 0x1501D744: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x1501D748: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x1501D74C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x1501D750: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    // 0x1501D754: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D758: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D75C: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1501D760: bnel        $at, $zero, L_1501D730
    if (ctx->r1 != 0) {
        // 0x1501D764: lw          $t8, 0x0($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X0);
            goto L_1501D730;
    }
    goto skip_2;
    // 0x1501D764: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    skip_2:
    // 0x1501D768: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D76C:
    // 0x1501D76C: addiu       $t5, $t5, 0x363A
    ctx->r13 = ADD32(ctx->r13, 0X363A);
    // 0x1501D770: addu        $s1, $s5, $t5
    ctx->r17 = ADD32(ctx->r21, ctx->r13);
    // 0x1501D774: sb          $a0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r4;
    // 0x1501D778: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D77C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1501D780: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1501D784: blezl       $t6, L_1501D7F8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1501D788: lw          $a3, 0x70($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X70);
            goto L_1501D7F8;
    }
    goto skip_3;
    // 0x1501D788: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    skip_3:
    // 0x1501D78C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x1501D790: sll         $t7, $s5, 4
    ctx->r15 = S32(ctx->r21 << 4);
    // 0x1501D794: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x1501D798: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501D79C: addiu       $t8, $t8, 0x3868
    ctx->r24 = ADD32(ctx->r24, 0X3868);
    // 0x1501D7A0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1501D7A4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1501D7A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D7AC: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x1501D7B0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
L_1501D7B4:
    // 0x1501D7B4: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x1501D7B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D7BC: srl         $t2, $t9, 3
    ctx->r10 = S32(U32(ctx->r25) >> 3);
    // 0x1501D7C0: addu        $t3, $t1, $v1
    ctx->r11 = ADD32(ctx->r9, ctx->r3);
    // 0x1501D7C4: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x1501D7C8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x1501D7CC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D7D0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501D7D4: sw          $t4, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r12;
    // 0x1501D7D8: lhu         $t5, 0x0($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D7DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1501D7E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D7E4: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1501D7E8: bnel        $at, $zero, L_1501D7B4
    if (ctx->r1 != 0) {
        // 0x1501D7EC: lw          $t9, 0x4($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X4);
            goto L_1501D7B4;
    }
    goto skip_4;
    // 0x1501D7EC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    skip_4:
    // 0x1501D7F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1501D7F4: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
L_1501D7F8:
    // 0x1501D7F8: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x1501D7FC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1501D800: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x1501D804: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501D808: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D80C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1501D810: sw          $t8, 0x35F0($at)
    MEM_W(0X35F0, ctx->r1) = ctx->r24;
    // 0x1501D814: lhu         $t2, 0x2($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X2);
    // 0x1501D818: lhu         $t1, 0x0($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X0);
    // 0x1501D81C: blez        $t2, L_1501D88C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1501D820: addu        $s3, $s3, $t1
        ctx->r19 = ADD32(ctx->r19, ctx->r9);
            goto L_1501D88C;
    }
    // 0x1501D820: addu        $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
    // 0x1501D824: sll         $t4, $s5, 4
    ctx->r12 = S32(ctx->r21 << 4);
    // 0x1501D828: subu        $t4, $t4, $s5
    ctx->r12 = SUB32(ctx->r12, ctx->r21);
    // 0x1501D82C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501D830: addiu       $t5, $t5, 0x3778
    ctx->r13 = ADD32(ctx->r13, 0X3778);
    // 0x1501D834: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x1501D838: sll         $t3, $s3, 3
    ctx->r11 = S32(ctx->r19 << 3);
    // 0x1501D83C: addu        $v0, $a3, $t3
    ctx->r2 = ADD32(ctx->r7, ctx->r11);
    // 0x1501D840: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x1501D844: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D848: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
L_1501D84C:
    // 0x1501D84C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1501D850: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D854: srl         $t7, $t6, 3
    ctx->r15 = S32(U32(ctx->r14) >> 3);
    // 0x1501D858: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1501D85C: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x1501D860: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1501D864: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D868: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501D86C: sw          $t1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r9;
    // 0x1501D870: lhu         $t2, 0x2($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X2);
    // 0x1501D874: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1501D878: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D87C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1501D880: bnel        $at, $zero, L_1501D84C
    if (ctx->r1 != 0) {
        // 0x1501D884: lw          $t6, 0x4($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X4);
            goto L_1501D84C;
    }
    goto skip_5;
    // 0x1501D884: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    skip_5:
    // 0x1501D888: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D88C:
    // 0x1501D88C: lhu         $t3, 0x4($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X4);
    // 0x1501D890: blez        $t3, L_1501D8FC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x1501D894: sll         $t5, $s5, 4
        ctx->r13 = S32(ctx->r21 << 4);
            goto L_1501D8FC;
    }
    // 0x1501D894: sll         $t5, $s5, 4
    ctx->r13 = S32(ctx->r21 << 4);
    // 0x1501D898: subu        $t5, $t5, $s5
    ctx->r13 = SUB32(ctx->r13, ctx->r21);
    // 0x1501D89C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501D8A0: addiu       $t6, $t6, 0x3688
    ctx->r14 = ADD32(ctx->r14, 0X3688);
    // 0x1501D8A4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1501D8A8: sll         $t4, $s3, 3
    ctx->r12 = S32(ctx->r19 << 3);
    // 0x1501D8AC: addu        $v0, $a3, $t4
    ctx->r2 = ADD32(ctx->r7, ctx->r12);
    // 0x1501D8B0: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x1501D8B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D8B8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
L_1501D8BC:
    // 0x1501D8BC: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x1501D8C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D8C4: srl         $t7, $t8, 3
    ctx->r15 = S32(U32(ctx->r24) >> 3);
    // 0x1501D8C8: addu        $t1, $t9, $v1
    ctx->r9 = ADD32(ctx->r25, ctx->r3);
    // 0x1501D8CC: sh          $t7, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r15;
    // 0x1501D8D0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x1501D8D4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1501D8D8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501D8DC: sw          $t2, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r10;
    // 0x1501D8E0: lhu         $t3, 0x4($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X4);
    // 0x1501D8E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1501D8E8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D8EC: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1501D8F0: bnel        $at, $zero, L_1501D8BC
    if (ctx->r1 != 0) {
        // 0x1501D8F4: lw          $t8, 0x4($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X4);
            goto L_1501D8BC;
    }
    goto skip_6;
    // 0x1501D8F4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    skip_6:
    // 0x1501D8F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D8FC:
    // 0x1501D8FC: lhu         $t4, 0x6($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X6);
    // 0x1501D900: blez        $t4, L_1501D944
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1501D904: sll         $t5, $s3, 3
        ctx->r13 = S32(ctx->r19 << 3);
            goto L_1501D944;
    }
    // 0x1501D904: sll         $t5, $s3, 3
    ctx->r13 = S32(ctx->r19 << 3);
    // 0x1501D908: addu        $v0, $a3, $t5
    ctx->r2 = ADD32(ctx->r7, ctx->r13);
    // 0x1501D90C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D910: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1501D914: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
L_1501D918:
    // 0x1501D918: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1501D91C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D920: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1501D924: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x1501D928: lhu         $t7, 0x6($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X6);
    // 0x1501D92C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1501D930: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501D934: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1501D938: bnel        $at, $zero, L_1501D918
    if (ctx->r1 != 0) {
        // 0x1501D93C: lw          $t8, 0x0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X0);
            goto L_1501D918;
    }
    goto skip_7;
    // 0x1501D93C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    skip_7:
    // 0x1501D940: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1501D944:
    // 0x1501D944: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x1501D948: beq         $v0, $zero, L_1501D970
    if (ctx->r2 == 0) {
        // 0x1501D94C: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_1501D970;
    }
    // 0x1501D94C: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x1501D950: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x1501D954: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x1501D958: lw          $t9, 0x40FC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X40FC);
    // 0x1501D95C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1501D960: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x1501D964: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1501D968: jalr        $t9
    // 0x1501D96C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x1501D96C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_14:
L_1501D970:
    // 0x1501D970: jal         0x1501CFF8
    // 0x1501D974: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1501CFF8(rdram, ctx);
        goto after_15;
    // 0x1501D974: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_15:
    // 0x1501D978: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1501D97C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501D980: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x1501D984: addiu       $v1, $v1, 0x3C9A
    ctx->r3 = ADD32(ctx->r3, 0X3C9A);
    // 0x1501D988: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x1501D98C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x1501D990: sll         $a0, $t2, 2
    ctx->r4 = S32(ctx->r10 << 2);
    // 0x1501D994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501D998: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501D99C: jal         0x10003C40
    // 0x1501D9A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_16;
    // 0x1501D9A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x1501D9A4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x1501D9A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D9AC: sw          $v0, 0x3D50($at)
    MEM_W(0X3D50, ctx->r1) = ctx->r2;
    // 0x1501D9B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D9B4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x1501D9B8: sw          $zero, 0x35B0($at)
    MEM_W(0X35B0, ctx->r1) = 0;
    // 0x1501D9BC: jal         0x1501CDC0
    // 0x1501D9C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1501CDC0(rdram, ctx);
        goto after_17;
    // 0x1501D9C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_17:
    // 0x1501D9C4: jal         0x1501CE54
    // 0x1501D9C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1501CE54(rdram, ctx);
        goto after_18;
    // 0x1501D9C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_18:
    // 0x1501D9CC: jal         0x15022BA4
    // 0x1501D9D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022BA4(rdram, ctx);
        goto after_19;
    // 0x1501D9D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_19:
    // 0x1501D9D4: lbu         $t4, 0x0($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X0);
    // 0x1501D9D8: blez        $t4, L_1501D9FC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1501D9DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501D9FC;
    }
    // 0x1501D9DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1501D9E0:
    // 0x1501D9E0: jal         0x15020388
    // 0x1501D9E4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_15020388(rdram, ctx);
        goto after_20;
    // 0x1501D9E4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_20:
    // 0x1501D9E8: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x1501D9EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501D9F0: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1501D9F4: bnel        $at, $zero, L_1501D9E0
    if (ctx->r1 != 0) {
        // 0x1501D9F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501D9E0;
    }
    goto skip_8;
    // 0x1501D9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
L_1501D9FC:
    // 0x1501D9FC: jal         0x150238D0
    // 0x1501DA00: nop

    func_150238D0(rdram, ctx);
        goto after_21;
    // 0x1501DA00: nop

    after_21:
    // 0x1501DA04: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1501DA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1501DA0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501DA10: sb          $v0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r2;
    // 0x1501DA14: sb          $v0, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r2;
    // 0x1501DA18: jal         0x15022234
    // 0x1501DA1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022234(rdram, ctx);
        goto after_22;
    // 0x1501DA1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_22:
    // 0x1501DA20: jal         0x15022248
    // 0x1501DA24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022248(rdram, ctx);
        goto after_23;
    // 0x1501DA24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_23:
    // 0x1501DA28: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x1501DA2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501DA30: bnel        $t6, $zero, L_1501DA44
    if (ctx->r14 != 0) {
        // 0x1501DA34: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_1501DA44;
    }
    goto skip_9;
    // 0x1501DA34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_9:
    // 0x1501DA38: jal         0x1501E81C
    // 0x1501DA3C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_1501E81C(rdram, ctx);
        goto after_24;
    // 0x1501DA3C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_24:
    // 0x1501DA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_1501DA44:
    // 0x1501DA44: jal         0x150242F8
    // 0x1501DA48: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_150242F8(rdram, ctx);
        goto after_25;
    // 0x1501DA48: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_25:
    // 0x1501DA4C: jal         0x1501EC38
    // 0x1501DA50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1501EC38(rdram, ctx);
        goto after_26;
    // 0x1501DA50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_26:
    // 0x1501DA54: jal         0x15022848
    // 0x1501DA58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022848(rdram, ctx);
        goto after_27;
    // 0x1501DA58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_27:
    // 0x1501DA5C: jal         0x15022754
    // 0x1501DA60: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022754(rdram, ctx);
        goto after_28;
    // 0x1501DA60: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_28:
    // 0x1501DA64: jal         0x15022528
    // 0x1501DA68: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15022528(rdram, ctx);
        goto after_29;
    // 0x1501DA68: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_29:
    // 0x1501DA6C: jal         0x15020EC4
    // 0x1501DA70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15020EC4(rdram, ctx);
        goto after_30;
    // 0x1501DA70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_30:
    // 0x1501DA74: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x1501DA78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501DA7C: sb          $t7, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r15;
    // 0x1501DA80: jal         0x1501DAAC
    // 0x1501DA84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_1501DAAC(rdram, ctx);
        goto after_31;
    // 0x1501DA84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_31:
L_1501DA88:
    // 0x1501DA88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1501DA8C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1501DA90: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1501DA94: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1501DA98: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x1501DA9C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x1501DAA0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x1501DAA4: jr          $ra
    // 0x1501DAA8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1501DAA8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1506AD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AD30: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506AD34: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1506AD38: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1506AD3C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1506AD40: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x1506AD44: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x1506AD48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1506AD4C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1506AD50: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1506AD54: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1506AD58: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1506AD5C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1506AD60: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1506AD64: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1506AD68: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1506AD6C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1506AD70: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1506AD74: lbu         $t6, 0x5($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X5);
    // 0x1506AD78: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1506AD7C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1506AD80: bne         $t6, $at, L_1506AD94
    if (ctx->r14 != ctx->r1) {
        // 0x1506AD84: addiu       $a3, $a3, 0x1880
        ctx->r7 = ADD32(ctx->r7, 0X1880);
            goto L_1506AD94;
    }
    // 0x1506AD84: addiu       $a3, $a3, 0x1880
    ctx->r7 = ADD32(ctx->r7, 0X1880);
    // 0x1506AD88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506AD8C: b           L_1506AF40
    // 0x1506AD90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_1506AF40;
    // 0x1506AD90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_1506AD94:
    // 0x1506AD94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506AD98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506AD9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1506ADA0: swc1        $f4, 0x1878($at)
    MEM_W(0X1878, ctx->r1) = ctx->f4.u32l;
    // 0x1506ADA4: lwc1        $f6, 0xB4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x1506ADA8: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x1506ADAC: nop

    // 0x1506ADB0: bc1fl       L_1506ADC0
    if (!c1cs) {
        // 0x1506ADB4: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_1506ADC0;
    }
    goto skip_0;
    // 0x1506ADB4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    skip_0:
    // 0x1506ADB8: sb          $zero, 0x138($s1)
    MEM_B(0X138, ctx->r17) = 0;
    // 0x1506ADBC: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_1506ADC0:
    // 0x1506ADC0: lw          $v0, 0x1C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C4);
    // 0x1506ADC4: beq         $v0, $zero, L_1506AF34
    if (ctx->r2 == 0) {
        // 0x1506ADC8: nop
    
            goto L_1506AF34;
    }
    // 0x1506ADC8: nop

    // 0x1506ADCC: lbu         $t8, 0x138($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X138);
    // 0x1506ADD0: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x1506ADD4: multu       $t8, $s4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1506ADD8: mflo        $t9
    ctx->r25 = lo;
    // 0x1506ADDC: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x1506ADE0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1506ADE4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x1506ADE8: nop

    // 0x1506ADEC: bc1f        L_1506AF34
    if (!c1cs) {
        // 0x1506ADF0: nop
    
            goto L_1506AF34;
    }
    // 0x1506ADF0: nop

    // 0x1506ADF4: beq         $t7, $zero, L_1506AF34
    if (ctx->r15 == 0) {
        // 0x1506ADF8: lui         $at, 0x4461
        ctx->r1 = S32(0X4461 << 16);
            goto L_1506AF34;
    }
    // 0x1506ADF8: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x1506ADFC: lui         $fp, 0x8008
    ctx->r30 = S32(0X8008 << 16);
    // 0x1506AE00: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x1506AE04: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x1506AE08: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x1506AE0C: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1506AE10: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1506AE14: addiu       $s3, $s3, 0x1580
    ctx->r19 = ADD32(ctx->r19, 0X1580);
    // 0x1506AE18: addiu       $s5, $s5, 0x1874
    ctx->r21 = ADD32(ctx->r21, 0X1874);
    // 0x1506AE1C: addiu       $s6, $s6, 0x35EA
    ctx->r22 = ADD32(ctx->r22, 0X35EA);
    // 0x1506AE20: addiu       $s7, $s7, 0x365E
    ctx->r23 = ADD32(ctx->r23, 0X365E);
    // 0x1506AE24: addiu       $fp, $fp, 0x63FC
    ctx->r30 = ADD32(ctx->r30, 0X63FC);
    // 0x1506AE28: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
L_1506AE2C:
    // 0x1506AE2C: nop

    // 0x1506AE30: bc1f        L_1506AEFC
    if (!c1cs) {
        // 0x1506AE34: nop
    
            goto L_1506AEFC;
    }
    // 0x1506AE34: nop

    // 0x1506AE38: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x1506AE3C: lbu         $t2, 0x0($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X0);
    // 0x1506AE40: sw          $t1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r9;
    // 0x1506AE44: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x1506AE48: swc1        $f8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f8.u32l;
    // 0x1506AE4C: lw          $a1, 0x2D0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2D0);
    // 0x1506AE50: lw          $a2, 0x28($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X28);
    // 0x1506AE54: beq         $t2, $zero, L_1506AE68
    if (ctx->r10 == 0) {
        // 0x1506AE58: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_1506AE68;
    }
    // 0x1506AE58: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x1506AE5C: lbu         $t3, 0x0($s7)
    ctx->r11 = MEM_BU(ctx->r23, 0X0);
    // 0x1506AE60: beq         $t3, $zero, L_1506AED8
    if (ctx->r11 == 0) {
        // 0x1506AE64: nop
    
            goto L_1506AED8;
    }
    // 0x1506AE64: nop

L_1506AE68:
    // 0x1506AE68: lbu         $t5, 0x138($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X138);
    // 0x1506AE6C: lw          $t4, 0x1C4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C4);
    // 0x1506AE70: multu       $t5, $s4
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1506AE74: mflo        $t6
    ctx->r14 = lo;
    // 0x1506AE78: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1506AE7C: beq         $s0, $zero, L_1506AEB0
    if (ctx->r16 == 0) {
        // 0x1506AE80: lbu         $a0, 0x7($t7)
        ctx->r4 = MEM_BU(ctx->r15, 0X7);
            goto L_1506AEB0;
    }
    // 0x1506AE80: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x1506AE84: beq         $s0, $zero, L_1506AEB0
    if (ctx->r16 == 0) {
        // 0x1506AE88: lui         $v0, 0x800A
        ctx->r2 = S32(0X800A << 16);
            goto L_1506AEB0;
    }
    // 0x1506AE88: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1506AE8C: addiu       $v0, $v0, -0x65D0
    ctx->r2 = ADD32(ctx->r2, -0X65D0);
L_1506AE90:
    // 0x1506AE90: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x1506AE94: bne         $v1, $zero, L_1506AEA0
    if (ctx->r3 != 0) {
        // 0x1506AE98: nop
    
            goto L_1506AEA0;
    }
    // 0x1506AE98: nop

    // 0x1506AE9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1506AEA0:
    // 0x1506AEA0: beq         $a0, $v1, L_1506AEB0
    if (ctx->r4 == ctx->r3) {
        // 0x1506AEA4: nop
    
            goto L_1506AEB0;
    }
    // 0x1506AEA4: nop

    // 0x1506AEA8: bne         $s0, $zero, L_1506AE90
    if (ctx->r16 != 0) {
        // 0x1506AEAC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1506AE90;
    }
    // 0x1506AEAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1506AEB0:
    // 0x1506AEB0: beq         $a0, $zero, L_1506AED8
    if (ctx->r4 == 0) {
        // 0x1506AEB4: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_1506AED8;
    }
    // 0x1506AEB4: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x1506AEB8: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x1506AEBC: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x1506AEC0: jalr        $t9
    // 0x1506AEC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1506AEC4: nop

    after_0:
    // 0x1506AEC8: lw          $a1, 0x2D0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2D0);
    // 0x1506AECC: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1506AED0: addiu       $a3, $a3, 0x1880
    ctx->r7 = ADD32(ctx->r7, 0X1880);
    // 0x1506AED4: lw          $a2, 0x28($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X28);
L_1506AED8:
    // 0x1506AED8: beql        $s2, $a2, L_1506AEF0
    if (ctx->r18 == ctx->r6) {
        // 0x1506AEDC: lbu         $t0, 0x138($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0X138);
            goto L_1506AEF0;
    }
    goto skip_1;
    // 0x1506AEDC: lbu         $t0, 0x138($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X138);
    skip_1:
    // 0x1506AEE0: lwc1        $f20, 0x8($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1506AEE4: b           L_1506AEFC
    // 0x1506AEE8: lw          $v0, 0x1C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C4);
        goto L_1506AEFC;
    // 0x1506AEE8: lw          $v0, 0x1C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C4);
    // 0x1506AEEC: lbu         $t0, 0x138($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X138);
L_1506AEF0:
    // 0x1506AEF0: lw          $v0, 0x1C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C4);
    // 0x1506AEF4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x1506AEF8: sb          $t1, 0x138($s1)
    MEM_B(0X138, ctx->r17) = ctx->r9;
L_1506AEFC:
    // 0x1506AEFC: beq         $v0, $zero, L_1506AF34
    if (ctx->r2 == 0) {
        // 0x1506AF00: nop
    
            goto L_1506AF34;
    }
    // 0x1506AF00: nop

    // 0x1506AF04: lbu         $t2, 0x138($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X138);
    // 0x1506AF08: multu       $t2, $s4
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1506AF0C: mflo        $t3
    ctx->r11 = lo;
    // 0x1506AF10: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x1506AF14: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1506AF18: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x1506AF1C: nop

    // 0x1506AF20: bc1f        L_1506AF34
    if (!c1cs) {
        // 0x1506AF24: nop
    
            goto L_1506AF34;
    }
    // 0x1506AF24: nop

    // 0x1506AF28: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x1506AF2C: bnel        $t5, $zero, L_1506AE2C
    if (ctx->r13 != 0) {
        // 0x1506AF30: c.lt.s      $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
            goto L_1506AE2C;
    }
    goto skip_2;
    // 0x1506AF30: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    skip_2:
L_1506AF34:
    // 0x1506AF34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506AF38: lwc1        $f0, 0x1878($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1878);
    // 0x1506AF3C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_1506AF40:
    // 0x1506AF40: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1506AF44: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1506AF48: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1506AF4C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1506AF50: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1506AF54: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1506AF58: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1506AF5C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1506AF60: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1506AF64: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1506AF68: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1506AF6C: jr          $ra
    // 0x1506AF70: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1506AF70: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1518CD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518CD20: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1518CD24: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x1518CD28: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x1518CD2C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x1518CD30: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x1518CD34: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1518CD38: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1518CD3C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1518CD40: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1518CD44: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1518CD48: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1518CD4C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1518CD50: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1518CD54: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1518CD58: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1518CD5C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1518CD60: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1518CD64: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1518CD68: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x1518CD6C: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x1518CD70: jal         0x150ADA20
    // 0x1518CD74: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518CD74: nop

    after_0:
    // 0x1518CD78: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x1518CD7C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518CD80: mfhi        $v1
    ctx->r3 = hi;
    // 0x1518CD84: addiu       $v1, $v1, 0x19
    ctx->r3 = ADD32(ctx->r3, 0X19);
    // 0x1518CD88: sll         $s4, $v1, 16
    ctx->r20 = S32(ctx->r3 << 16);
    // 0x1518CD8C: sll         $s3, $v1, 16
    ctx->r19 = S32(ctx->r3 << 16);
    // 0x1518CD90: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x1518CD94: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x1518CD98: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x1518CD9C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1518CDA0: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x1518CDA4: blez        $t9, L_1518D178
    if (SIGNED(ctx->r25) <= 0) {
        // 0x1518CDA8: or          $s3, $t7, $zero
        ctx->r19 = ctx->r15 | 0;
            goto L_1518D178;
    }
    // 0x1518CDA8: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x1518CDAC: addiu       $s6, $t7, 0x1
    ctx->r22 = ADD32(ctx->r15, 0X1);
    // 0x1518CDB0: sll         $s0, $s6, 2
    ctx->r16 = S32(ctx->r22 << 2);
    // 0x1518CDB4: subu        $s0, $s0, $s6
    ctx->r16 = SUB32(ctx->r16, ctx->r22);
    // 0x1518CDB8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x1518CDBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518CDC0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1518CDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1518CDC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518CDCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1518CDD0: jal         0x10003C6C
    // 0x1518CDD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10003C6C(rdram, ctx);
        goto after_1;
    // 0x1518CDD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1518CDD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518CDDC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x1518CDE0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1518CDE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1518CDE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518CDEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1518CDF0: jal         0x10003C6C
    // 0x1518CDF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10003C6C(rdram, ctx);
        goto after_2;
    // 0x1518CDF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1518CDF8: beq         $s2, $zero, L_1518D178
    if (ctx->r18 == 0) {
        // 0x1518CDFC: sw          $v0, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r2;
            goto L_1518D178;
    }
    // 0x1518CDFC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x1518CE00: beql        $v0, $zero, L_1518D17C
    if (ctx->r2 == 0) {
        // 0x1518CE04: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_1518D17C;
    }
    goto skip_0;
    // 0x1518CE04: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x1518CE08: blez        $s3, L_1518CE84
    if (SIGNED(ctx->r19) <= 0) {
        // 0x1518CE0C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1518CE84;
    }
    // 0x1518CE0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1518CE10: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x1518CE14: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1518CE18: lui         $at, 0x42DE
    ctx->r1 = S32(0X42DE << 16);
    // 0x1518CE1C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1518CE20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518CE24: lwc1        $f20, 0x7450($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7450);
    // 0x1518CE28: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
L_1518CE2C:
    // 0x1518CE2C: jal         0x150ADA68
    // 0x1518CE30: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1518CE30: nop

    after_3:
    // 0x1518CE34: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CE38: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1518CE3C: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x1518CE40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1518CE44: add.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x1518CE48: mflo        $s0
    ctx->r16 = lo;
    // 0x1518CE4C: addu        $a2, $s0, $s2
    ctx->r6 = ADD32(ctx->r16, ctx->r18);
    // 0x1518CE50: jal         0x1514373C
    // 0x1518CE54: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    func_1514373C(rdram, ctx);
        goto after_4;
    // 0x1518CE54: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    after_4:
    // 0x1518CE58: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x1518CE5C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518CE60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1518CE64: sll         $t2, $s1, 16
    ctx->r10 = S32(ctx->r17 << 16);
    // 0x1518CE68: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1518CE6C: sra         $s1, $t2, 16
    ctx->r17 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1518CE70: slt         $at, $s1, $s3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x1518CE74: swc1        $f24, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f24.u32l;
    // 0x1518CE78: bne         $at, $zero, L_1518CE2C
    if (ctx->r1 != 0) {
        // 0x1518CE7C: swc1        $f8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
            goto L_1518CE2C;
    }
    // 0x1518CE7C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x1518CE80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1518CE84:
    // 0x1518CE84: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x1518CE88: multu       $s3, $s5
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CE8C: lui         $at, 0x42DE
    ctx->r1 = S32(0X42DE << 16);
    // 0x1518CE90: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1518CE94: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x1518CE98: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1518CE9C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1518CEA0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x1518CEA4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1518CEA8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x1518CEAC: mflo        $s0
    ctx->r16 = lo;
    // 0x1518CEB0: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x1518CEB4: swc1        $f22, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f22.u32l;
    // 0x1518CEB8: swc1        $f24, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f24.u32l;
    // 0x1518CEBC: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
    // 0x1518CEC0: jal         0x15145DB4
    // 0x1518CEC4: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    func_15145DB4(rdram, ctx);
        goto after_5;
    // 0x1518CEC4: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    after_5:
    // 0x1518CEC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518CECC: lwc1        $f10, 0x7454($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7454);
    // 0x1518CED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518CED4: lwc1        $f16, 0x7458($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7458);
    // 0x1518CED8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x1518CEDC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1518CEE0: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x1518CEE4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1518CEE8: addiu       $t2, $zero, 0x62
    ctx->r10 = ADD32(0, 0X62);
    // 0x1518CEEC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x1518CEF0: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x1518CEF4: sb          $t2, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r10;
    // 0x1518CEF8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1518CEFC: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x1518CF00: addiu       $t4, $zero, 0x6C
    ctx->r12 = ADD32(0, 0X6C);
    // 0x1518CF04: addiu       $t5, $zero, 0x5103
    ctx->r13 = ADD32(0, 0X5103);
    // 0x1518CF08: ori         $t6, $t6, 0x5
    ctx->r14 = ctx->r14 | 0X5;
    // 0x1518CF0C: addiu       $t7, $zero, 0xE7
    ctx->r15 = ADD32(0, 0XE7);
    // 0x1518CF10: addiu       $t8, $zero, 0xE7
    ctx->r24 = ADD32(0, 0XE7);
    // 0x1518CF14: addiu       $t9, $zero, 0xB6
    ctx->r25 = ADD32(0, 0XB6);
    // 0x1518CF18: addiu       $t0, $zero, 0x9E
    ctx->r8 = ADD32(0, 0X9E);
    // 0x1518CF1C: addiu       $t1, $zero, 0x9E
    ctx->r9 = ADD32(0, 0X9E);
    // 0x1518CF20: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x1518CF24: sb          $t4, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r12;
    // 0x1518CF28: sh          $t5, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r13;
    // 0x1518CF2C: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x1518CF30: sb          $t7, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r15;
    // 0x1518CF34: sb          $t8, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r24;
    // 0x1518CF38: sb          $t9, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r25;
    // 0x1518CF3C: sb          $t0, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r8;
    // 0x1518CF40: sb          $t1, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r9;
    // 0x1518CF44: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x1518CF48: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1518CF4C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1518CF50: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1518CF54: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x1518CF58: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x1518CF5C: ori         $v1, $v1, 0xCE07
    ctx->r3 = ctx->r3 | 0XCE07;
    // 0x1518CF60: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x1518CF64: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x1518CF68: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x1518CF6C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1518CF70: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1518CF74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518CF78: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1518CF7C: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1518CF80: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x1518CF84: sb          $t3, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r11;
    // 0x1518CF88: sb          $t4, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r12;
    // 0x1518CF8C: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x1518CF90: swc1        $f20, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f20.u32l;
    // 0x1518CF94: swc1        $f20, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f20.u32l;
    // 0x1518CF98: sh          $t5, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r13;
    // 0x1518CF9C: sh          $t6, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r14;
    // 0x1518CFA0: sb          $t7, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r15;
    // 0x1518CFA4: sb          $t8, 0x10D($sp)
    MEM_B(0X10D, ctx->r29) = ctx->r24;
    // 0x1518CFA8: sb          $t9, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r25;
    // 0x1518CFAC: sb          $t0, 0x10F($sp)
    MEM_B(0X10F, ctx->r29) = ctx->r8;
    // 0x1518CFB0: sb          $t1, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r9;
    // 0x1518CFB4: sb          $zero, 0x111($sp)
    MEM_B(0X111, ctx->r29) = 0;
    // 0x1518CFB8: lwc1        $f22, 0x745C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X745C);
    // 0x1518CFBC: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    // 0x1518CFC0: addiu       $fp, $zero, 0xB0
    ctx->r30 = ADD32(0, 0XB0);
    // 0x1518CFC4: addiu       $s7, $sp, 0xDC
    ctx->r23 = ADD32(ctx->r29, 0XDC);
    // 0x1518CFC8: addiu       $s6, $zero, 0x1A
    ctx->r22 = ADD32(0, 0X1A);
    // 0x1518CFCC: addiu       $s3, $zero, -0xC1
    ctx->r19 = ADD32(0, -0XC1);
    // 0x1518CFD0: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x1518CFD4: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x1518CFD8: addu        $s2, $t2, $s0
    ctx->r18 = ADD32(ctx->r10, ctx->r16);
    // 0x1518CFDC: lw          $v1, 0x104($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X104);
L_1518CFE0:
    // 0x1518CFE0: and         $v1, $v1, $s3
    ctx->r3 = ctx->r3 & ctx->r19;
    // 0x1518CFE4: jal         0x150ADA20
    // 0x1518CFE8: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1518CFE8: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    after_6:
    // 0x1518CFEC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1518CFF0: beq         $t3, $zero, L_1518D000
    if (ctx->r11 == 0) {
        // 0x1518CFF4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1518D000;
    }
    // 0x1518CFF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1518CFF8: b           L_1518D000
    // 0x1518CFFC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_1518D000;
    // 0x1518CFFC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_1518D000:
    // 0x1518D000: jal         0x150ADA20
    // 0x1518D004: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1518D004: nop

    after_7:
    // 0x1518D008: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x1518D00C: beq         $t4, $zero, L_1518D01C
    if (ctx->r12 == 0) {
        // 0x1518D010: lw          $v1, 0x104($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X104);
            goto L_1518D01C;
    }
    // 0x1518D010: lw          $v1, 0x104($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X104);
    // 0x1518D014: b           L_1518D020
    // 0x1518D018: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_1518D020;
    // 0x1518D018: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_1518D01C:
    // 0x1518D01C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518D020:
    // 0x1518D020: or          $t5, $v0, $s0
    ctx->r13 = ctx->r2 | ctx->r16;
    // 0x1518D024: or          $v1, $v1, $t5
    ctx->r3 = ctx->r3 | ctx->r13;
    // 0x1518D028: jal         0x150ADA68
    // 0x1518D02C: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1518D02C: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    after_8:
    // 0x1518D030: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1518D034: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1518D038: mul.s       $f20, $f4, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1518D03C: jal         0x150ADA20
    // 0x1518D040: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1518D040: nop

    after_9:
    // 0x1518D044: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x1518D048: mfhi        $v1
    ctx->r3 = hi;
    // 0x1518D04C: addiu       $t7, $v1, 0x19
    ctx->r15 = ADD32(ctx->r3, 0X19);
    // 0x1518D050: bne         $s6, $zero, L_1518D05C
    if (ctx->r22 != 0) {
        // 0x1518D054: nop
    
            goto L_1518D05C;
    }
    // 0x1518D054: nop

    // 0x1518D058: break       7
    do_break(353947736);
L_1518D05C:
    // 0x1518D05C: sh          $t7, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r15;
    // 0x1518D060: jal         0x150ADA68
    // 0x1518D064: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1518D064: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    after_10:
    // 0x1518D068: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1518D06C: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x1518D070: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518D074: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x1518D078: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x1518D07C: mflo        $t9
    ctx->r25 = lo;
    // 0x1518D080: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x1518D084: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x1518D088: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1518D08C: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x1518D090: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x1518D094: sw          $t2, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r10;
    // 0x1518D098: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1518D09C: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    // 0x1518D0A0: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1518D0A4: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518D0A8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1518D0AC: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1518D0B0: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x1518D0B4: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x1518D0B8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1518D0BC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1518D0C0: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1518D0C4: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x1518D0C8: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x1518D0CC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1518D0D0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1518D0D4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1518D0D8: jal         0x150ADA68
    // 0x1518D0DC: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1518D0DC: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x1518D0E0: lui         $at, 0x445C
    ctx->r1 = S32(0X445C << 16);
    // 0x1518D0E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518D0E8: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x1518D0EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1518D0F0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518D0F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1518D0F8: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1518D0FC: jal         0x150ADA20
    // 0x1518D100: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x1518D100: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x1518D104: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x1518D108: lbu         $t5, 0x127($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X127);
    // 0x1518D10C: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x1518D110: mfhi        $t3
    ctx->r11 = hi;
    // 0x1518D114: addiu       $t4, $t3, 0x50
    ctx->r12 = ADD32(ctx->r11, 0X50);
    // 0x1518D118: bne         $fp, $zero, L_1518D124
    if (ctx->r30 != 0) {
        // 0x1518D11C: nop
    
            goto L_1518D124;
    }
    // 0x1518D11C: nop

    // 0x1518D120: break       7
    do_break(353947936);
L_1518D124:
    // 0x1518D124: sb          $t4, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r12;
    // 0x1518D128: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x1518D12C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1518D130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1518D134: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x1518D138: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1518D13C: jal         0x15130280
    // 0x1518D140: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15130280(rdram, ctx);
        goto after_13;
    // 0x1518D140: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_13:
    // 0x1518D144: beq         $v0, $zero, L_1518D158
    if (ctx->r2 == 0) {
        // 0x1518D148: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_1518D158;
    }
    // 0x1518D148: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x1518D14C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x1518D150: jal         0x10022EC0
    // 0x1518D154: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x1518D154: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_14:
L_1518D158:
    // 0x1518D158: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x1518D15C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1518D160: sll         $t7, $s4, 16
    ctx->r15 = S32(ctx->r20 << 16);
    // 0x1518D164: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x1518D168: sra         $s4, $t7, 16
    ctx->r20 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1518D16C: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1518D170: bgtzl       $s4, L_1518CFE0
    if (SIGNED(ctx->r20) > 0) {
        // 0x1518D174: lw          $v1, 0x104($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X104);
            goto L_1518CFE0;
    }
    goto skip_1;
    // 0x1518D174: lw          $v1, 0x104($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X104);
    skip_1:
L_1518D178:
    // 0x1518D178: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_1518D17C:
    // 0x1518D17C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518D180: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1518D184: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1518D188: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1518D18C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1518D190: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1518D194: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1518D198: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1518D19C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1518D1A0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1518D1A4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1518D1A8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1518D1AC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1518D1B0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x1518D1B4: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x1518D1B8: jr          $ra
    // 0x1518D1BC: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x1518D1BC: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_1516F2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F2F8: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1516F2FC: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x1516F300: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x1516F304: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x1516F308: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x1516F30C: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x1516F310: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x1516F314: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x1516F318: lbu         $v0, 0xDB($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XDB);
    // 0x1516F31C: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x1516F320: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x1516F324: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1516F328: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1516F32C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1516F330: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1516F334: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1516F338: lbu         $t1, 0xEB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XEB);
    // 0x1516F33C: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x1516F340: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x1516F344: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x1516F348: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1516F34C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1516F350: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1516F354: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1516F358: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x1516F35C: addiu       $t7, $zero, 0x81
    ctx->r15 = ADD32(0, 0X81);
    // 0x1516F360: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1516F364: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1516F368: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1516F36C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1516F370: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1516F374: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x1516F378: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x1516F37C: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x1516F380: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x1516F384: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x1516F388: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x1516F38C: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x1516F390: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x1516F394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516F398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1516F39C: addiu       $a3, $zero, 0x2B
    ctx->r7 = ADD32(0, 0X2B);
    // 0x1516F3A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516F3A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1516F3A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1516F3AC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1516F3B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1516F3B4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1516F3B8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1516F3BC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1516F3C0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1516F3C4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1516F3C8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1516F3CC: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1516F3D0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1516F3D4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1516F3D8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x1516F3DC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1516F3E0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1516F3E4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x1516F3E8: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x1516F3EC: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1516F3F0: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x1516F3F4: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x1516F3F8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1516F3FC: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x1516F400: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1516F404: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1516F408: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1516F40C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x1516F410: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    // 0x1516F414: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
    // 0x1516F418: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x1516F41C: jal         0x1516D99C
    // 0x1516F420: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    func_1516D99C(rdram, ctx);
        goto after_0;
    // 0x1516F420: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    after_0:
    // 0x1516F424: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1516F428: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x1516F42C: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x1516F430: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x1516F434: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x1516F438: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x1516F43C: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x1516F440: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1516F444: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1516F448: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1516F44C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1516F450: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1516F454: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
    // 0x1516F458: lw          $t3, 0xE0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE0);
    // 0x1516F45C: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x1516F460: lbu         $t9, 0xEB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XEB);
    // 0x1516F464: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x1516F468: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x1516F46C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x1516F470: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1516F474: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1516F478: addiu       $t4, $zero, 0x81
    ctx->r12 = ADD32(0, 0X81);
    // 0x1516F47C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1516F480: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1516F484: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1516F488: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x1516F48C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1516F490: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x1516F494: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x1516F498: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x1516F49C: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x1516F4A0: sw          $t5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r13;
    // 0x1516F4A4: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x1516F4A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x1516F4AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516F4B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1516F4B4: addiu       $a3, $zero, 0x2B
    ctx->r7 = ADD32(0, 0X2B);
    // 0x1516F4B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516F4BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1516F4C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1516F4C4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1516F4C8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1516F4CC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1516F4D0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1516F4D4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1516F4D8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1516F4DC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1516F4E0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1516F4E4: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1516F4E8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1516F4EC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1516F4F0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x1516F4F4: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1516F4F8: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1516F4FC: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x1516F500: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x1516F504: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1516F508: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x1516F50C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x1516F510: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1516F514: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x1516F518: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1516F51C: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1516F520: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x1516F524: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x1516F528: sw          $t8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r24;
    // 0x1516F52C: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x1516F530: jal         0x1516D99C
    // 0x1516F534: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    func_1516D99C(rdram, ctx);
        goto after_1;
    // 0x1516F534: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    after_1:
    // 0x1516F538: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x1516F53C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x1516F540: jr          $ra
    // 0x1516F544: nop

    return;
    return;
    // 0x1516F544: nop

;}
RECOMP_FUNC void func_150120B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150120B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150120B4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150120B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150120BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150120C0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150120C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150120C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150120CC: lwc1        $f6, 0x6540($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6540);
    // 0x150120D0: addiu       $t6, $zero, 0x41
    ctx->r14 = ADD32(0, 0X41);
    // 0x150120D4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150120D8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150120DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150120E0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150120E4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150120E8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150120EC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x150120F0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150120F4: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150120F8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150120FC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15012100: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15012104: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15012108: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1501210C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15012110: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x15012114: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15012118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501211C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15012120: jal         0x15149130
    // 0x15012124: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15012124: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15012128: beq         $v0, $zero, L_1501213C
    if (ctx->r2 == 0) {
        // 0x1501212C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1501213C;
    }
    // 0x1501212C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15012130: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15012134: jal         0x10022EC0
    // 0x15012138: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15012138: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
L_1501213C:
    // 0x1501213C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15012140: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15012144: jr          $ra
    // 0x15012148: nop

    return;
    return;
    // 0x15012148: nop

;}
RECOMP_FUNC void func_1513C650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C650: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1513C654: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1513C658: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1513C65C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1513C660: lbu         $a3, 0x53($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X53);
    // 0x1513C664: lbu         $a2, 0x4F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4F);
    // 0x1513C668: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513C66C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513C670: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513C674: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513C678: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x1513C67C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x1513C680: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x1513C684: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x1513C688: lbu         $t1, 0x83($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X83);
    // 0x1513C68C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x1513C690: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x1513C694: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1513C698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C69C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1513C6A0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1513C6A4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x1513C6A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513C6AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1513C6B0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1513C6B4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1513C6B8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1513C6BC: jal         0x1513C350
    // 0x1513C6C0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_1513C350(rdram, ctx);
        goto after_0;
    // 0x1513C6C0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_0:
    // 0x1513C6C4: bne         $v0, $zero, L_1513C6D4
    if (ctx->r2 != 0) {
        // 0x1513C6C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513C6D4;
    }
    // 0x1513C6C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513C6CC: b           L_1513C72C
    // 0x1513C6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C72C;
    // 0x1513C6D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C6D4:
    // 0x1513C6D4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513C6D8: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513C6DC: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513C6E0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1513C6E4: lbu         $t3, 0x6F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6F);
    // 0x1513C6E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C6EC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x1513C6F0: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x1513C6F4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x1513C6F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1513C6FC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1513C700: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1513C704: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1513C708: jal         0x1513E2AC
    // 0x1513C70C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_1513E2AC(rdram, ctx);
        goto after_1;
    // 0x1513C70C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_1:
    // 0x1513C710: bne         $v0, $zero, L_1513C728
    if (ctx->r2 != 0) {
        // 0x1513C714: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_1513C728;
    }
    // 0x1513C714: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x1513C718: jal         0x1516972C
    // 0x1513C71C: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1513C71C: nop

    after_2:
    // 0x1513C720: b           L_1513C72C
    // 0x1513C724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C72C;
    // 0x1513C724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C728:
    // 0x1513C728: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1513C72C:
    // 0x1513C72C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513C730: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1513C734: jr          $ra
    // 0x1513C738: nop

    return;
    return;
    // 0x1513C738: nop

;}
RECOMP_FUNC void func_15109064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15109064: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15109068: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1510906C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15109070: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x15109074: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x15109078: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x1510907C: beq         $a2, $at, L_15109098
    if (ctx->r6 == ctx->r1) {
        // 0x15109080: addiu       $v0, $v0, 0xF8
        ctx->r2 = ADD32(ctx->r2, 0XF8);
            goto L_15109098;
    }
    // 0x15109080: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x15109084: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x15109088: beql        $a2, $at, L_151090BC
    if (ctx->r6 == ctx->r1) {
        // 0x1510908C: lbu         $t1, 0x20($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X20);
            goto L_151090BC;
    }
    goto skip_0;
    // 0x1510908C: lbu         $t1, 0x20($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X20);
    skip_0:
    // 0x15109090: jr          $ra
    // 0x15109094: nop

    return;
    return;
    // 0x15109094: nop

L_15109098:
    // 0x15109098: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1510909C: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x151090A0: lbu         $t9, 0x8($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X8);
    // 0x151090A4: sb          $t9, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r25;
    // 0x151090A8: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151090AC: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x151090B0: jr          $ra
    // 0x151090B4: nop

    return;
    return;
    // 0x151090B4: nop

    // 0x151090B8: lbu         $t1, 0x20($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X20);
L_151090BC:
    // 0x151090BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151090C0: beql        $t1, $zero, L_151090D4
    if (ctx->r9 == 0) {
        // 0x151090C4: sb          $t2, 0x20($v0)
        MEM_B(0X20, ctx->r2) = ctx->r10;
            goto L_151090D4;
    }
    goto skip_1;
    // 0x151090C4: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
    skip_1:
    // 0x151090C8: jr          $ra
    // 0x151090CC: sb          $zero, 0x20($v0)
    MEM_B(0X20, ctx->r2) = 0;
    return;
    return;
    // 0x151090CC: sb          $zero, 0x20($v0)
    MEM_B(0X20, ctx->r2) = 0;
    // 0x151090D0: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
L_151090D4:
    // 0x151090D4: jr          $ra
    // 0x151090D8: nop

    return;
    return;
    // 0x151090D8: nop

;}
RECOMP_FUNC void func_1509E3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509E3DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509E3E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509E3E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1509E3E8: sltiu       $at, $a1, 0x16
    ctx->r1 = ctx->r5 < 0X16 ? 1 : 0;
    // 0x1509E3EC: beq         $at, $zero, L_1509E624
    if (ctx->r1 == 0) {
        // 0x1509E3F0: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_1509E624;
    }
    // 0x1509E3F0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1509E3F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509E3F8: addu        $at, $at, $t6
    gpr jr_addend_1509E400 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509E3FC: lw          $t6, -0xC90($at)
    ctx->r14 = ADD32(ctx->r1, -0XC90);
    // 0x1509E400: jr          $t6
    // 0x1509E404: nop

    switch (jr_addend_1509E400 >> 2) {
        case 0: goto L_1509E408; break;
        case 1: goto L_1509E424; break;
        case 2: goto L_1509E478; break;
        case 3: goto L_1509E488; break;
        case 4: goto L_1509E498; break;
        case 5: goto L_1509E4AC; break;
        case 6: goto L_1509E4B8; break;
        case 7: goto L_1509E4C8; break;
        case 8: goto L_1509E4D8; break;
        case 9: goto L_1509E4E0; break;
        case 10: goto L_1509E4F0; break;
        case 11: goto L_1509E500; break;
        case 12: goto L_1509E510; break;
        case 13: goto L_1509E520; break;
        case 14: goto L_1509E534; break;
        case 15: goto L_1509E544; break;
        case 16: goto L_1509E558; break;
        case 17: goto L_1509E56C; break;
        case 18: goto L_1509E5B0; break;
        case 19: goto L_1509E5F0; break;
        case 20: goto L_1509E57C; break;
        case 21: goto L_1509E57C; break;
        default: switch_error(__func__, 0x1509E400, 0x8009F370);
    }
    // 0x1509E404: nop

L_1509E408:
    // 0x1509E408: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509E40C: jal         0x150CF040
    // 0x1509E410: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_150CF040(rdram, ctx);
        goto after_0;
    // 0x1509E410: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_0:
    // 0x1509E414: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1509E418: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1509E41C: b           L_1509E62C
    // 0x1509E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E424:
    // 0x1509E424: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    // 0x1509E428: lw          $t9, 0x10($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X10);
    // 0x1509E42C: lw          $t0, 0xC($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XC);
    // 0x1509E430: lw          $t1, 0x14($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X14);
    // 0x1509E434: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x1509E438: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509E43C: subu        $a0, $t0, $t1
    ctx->r4 = SUB32(ctx->r8, ctx->r9);
    // 0x1509E440: mflo        $t2
    ctx->r10 = lo;
    // 0x1509E444: nop

    // 0x1509E448: nop

    // 0x1509E44C: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509E450: mflo        $t3
    ctx->r11 = lo;
    // 0x1509E454: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1509E458: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1509E45C: nop

    // 0x1509E460: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1509E464: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1509E468: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1509E46C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x1509E470: b           L_1509E62C
    // 0x1509E474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E478:
    // 0x1509E478: jal         0x1508CA88
    // 0x1509E47C: nop

    func_1508CA88(rdram, ctx);
        goto after_1;
    // 0x1509E47C: nop

    after_1:
    // 0x1509E480: b           L_1509E62C
    // 0x1509E484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E488:
    // 0x1509E488: jal         0x1508C9CC
    // 0x1509E48C: nop

    func_1508C9CC(rdram, ctx);
        goto after_2;
    // 0x1509E48C: nop

    after_2:
    // 0x1509E490: b           L_1509E62C
    // 0x1509E494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E498:
    // 0x1509E498: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509E49C: jal         0x1508C5B8
    // 0x1509E4A0: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_1508C5B8(rdram, ctx);
        goto after_3;
    // 0x1509E4A0: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_3:
    // 0x1509E4A4: b           L_1509E62C
    // 0x1509E4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E4AC:
    // 0x1509E4AC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1509E4B0: b           L_1509E628
    // 0x1509E4B4: lb          $v0, 0xBD0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBD0);
        goto L_1509E628;
    // 0x1509E4B4: lb          $v0, 0xBD0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBD0);
L_1509E4B8:
    // 0x1509E4B8: jal         0x15089F9C
    // 0x1509E4BC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_15089F9C(rdram, ctx);
        goto after_4;
    // 0x1509E4BC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_4:
    // 0x1509E4C0: b           L_1509E62C
    // 0x1509E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E4C8:
    // 0x1509E4C8: jal         0x1508E6D0
    // 0x1509E4CC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_1508E6D0(rdram, ctx);
        goto after_5;
    // 0x1509E4CC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_5:
    // 0x1509E4D0: b           L_1509E62C
    // 0x1509E4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E4D8:
    // 0x1509E4D8: b           L_1509E628
    // 0x1509E4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509E628;
    // 0x1509E4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509E4E0:
    // 0x1509E4E0: jal         0x150881CC
    // 0x1509E4E4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_150881CC(rdram, ctx);
        goto after_6;
    // 0x1509E4E4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_6:
    // 0x1509E4E8: b           L_1509E62C
    // 0x1509E4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E4F0:
    // 0x1509E4F0: jal         0x15088218
    // 0x1509E4F4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_15088218(rdram, ctx);
        goto after_7;
    // 0x1509E4F4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_7:
    // 0x1509E4F8: b           L_1509E62C
    // 0x1509E4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E500:
    // 0x1509E500: jal         0x15088270
    // 0x1509E504: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_15088270(rdram, ctx);
        goto after_8;
    // 0x1509E504: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_8:
    // 0x1509E508: b           L_1509E62C
    // 0x1509E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E510:
    // 0x1509E510: jal         0x150882B0
    // 0x1509E514: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_150882B0(rdram, ctx);
        goto after_9;
    // 0x1509E514: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_9:
    // 0x1509E518: b           L_1509E62C
    // 0x1509E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E520:
    // 0x1509E520: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509E524: jal         0x150882E4
    // 0x1509E528: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_150882E4(rdram, ctx);
        goto after_10;
    // 0x1509E528: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_10:
    // 0x1509E52C: b           L_1509E62C
    // 0x1509E530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E534:
    // 0x1509E534: jal         0x150887F8
    // 0x1509E538: nop

    func_150887F8(rdram, ctx);
        goto after_11;
    // 0x1509E538: nop

    after_11:
    // 0x1509E53C: b           L_1509E62C
    // 0x1509E540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E544:
    // 0x1509E544: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1509E548: lhu         $v0, -0x244($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X244);
    // 0x1509E54C: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x1509E550: b           L_1509E628
    // 0x1509E554: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_1509E628;
    // 0x1509E554: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_1509E558:
    // 0x1509E558: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x1509E55C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1509E560: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1509E564: b           L_1509E628
    // 0x1509E568: lb          $v0, 0xBE0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBE0);
        goto L_1509E628;
    // 0x1509E568: lb          $v0, 0xBE0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBE0);
L_1509E56C:
    // 0x1509E56C: jal         0x1508B194
    // 0x1509E570: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    func_1508B194(rdram, ctx);
        goto after_12;
    // 0x1509E570: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    after_12:
    // 0x1509E574: b           L_1509E62C
    // 0x1509E578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E57C:
    // 0x1509E57C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    // 0x1509E580: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509E584: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1509E588: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1509E58C: lwc1        $f10, 0x2FD8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2FD8);
    // 0x1509E590: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1509E594: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1509E598: nop

    // 0x1509E59C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1509E5A0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1509E5A4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1509E5A8: b           L_1509E62C
    // 0x1509E5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509E62C;
    // 0x1509E5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E5B0:
    // 0x1509E5B0: jal         0x15083E90
    // 0x1509E5B4: lbu         $a0, 0xB($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XB);
    func_15083E90(rdram, ctx);
        goto after_13;
    // 0x1509E5B4: lbu         $a0, 0xB($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XB);
    after_13:
    // 0x1509E5B8: beq         $v0, $zero, L_1509E5E8
    if (ctx->r2 == 0) {
        // 0x1509E5BC: nop
    
            goto L_1509E5E8;
    }
    // 0x1509E5BC: nop

    // 0x1509E5C0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1509E5C4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1509E5C8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1509E5CC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1509E5D0: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x1509E5D4: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x1509E5D8: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x1509E5DC: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x1509E5E0: b           L_1509E628
    // 0x1509E5E4: or          $v0, $t3, $t4
    ctx->r2 = ctx->r11 | ctx->r12;
        goto L_1509E628;
    // 0x1509E5E4: or          $v0, $t3, $t4
    ctx->r2 = ctx->r11 | ctx->r12;
L_1509E5E8:
    // 0x1509E5E8: b           L_1509E628
    // 0x1509E5EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509E628;
    // 0x1509E5EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509E5F0:
    // 0x1509E5F0: jal         0x15083E90
    // 0x1509E5F4: lbu         $a0, 0xB($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XB);
    func_15083E90(rdram, ctx);
        goto after_14;
    // 0x1509E5F4: lbu         $a0, 0xB($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XB);
    after_14:
    // 0x1509E5F8: beq         $v0, $zero, L_1509E61C
    if (ctx->r2 == 0) {
        // 0x1509E5FC: nop
    
            goto L_1509E61C;
    }
    // 0x1509E5FC: nop

    // 0x1509E600: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1509E604: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1509E608: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1509E60C: nop

    // 0x1509E610: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x1509E614: b           L_1509E628
    // 0x1509E618: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
        goto L_1509E628;
    // 0x1509E618: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_1509E61C:
    // 0x1509E61C: b           L_1509E628
    // 0x1509E620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509E628;
    // 0x1509E620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509E624:
    // 0x1509E624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509E628:
    // 0x1509E628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509E62C:
    // 0x1509E62C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509E630: jr          $ra
    // 0x1509E634: nop

    return;
    return;
    // 0x1509E634: nop

;}
RECOMP_FUNC void func_151C1628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C162C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C1630: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151C1634: jal         0x151C1570
    // 0x151C1638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151C1570(rdram, ctx);
        goto after_0;
    // 0x151C1638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151C163C: jal         0x1513259C
    // 0x151C1640: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513259C(rdram, ctx);
        goto after_1;
    // 0x151C1640: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151C1644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C1648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C164C: jr          $ra
    // 0x151C1650: nop

    return;
    return;
    // 0x151C1650: nop

;}
RECOMP_FUNC void func_150039E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150039E0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x150039E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150039E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150039EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150039F0: addiu       $v1, $v1, -0x1D5E
    ctx->r3 = ADD32(ctx->r3, -0X1D5E);
    // 0x150039F4: addiu       $v0, $v0, -0x1D5C
    ctx->r2 = ADD32(ctx->r2, -0X1D5C);
    // 0x150039F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150039FC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15003A00: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15003A04: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15003A08: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15003A0C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15003A10: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15003A14: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15003A18: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15003A1C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15003A20: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x15003A24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15003A28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003A2C: sb          $t6, -0x4078($at)
    MEM_B(-0X4078, ctx->r1) = ctx->r14;
    // 0x15003A30: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x15003A34: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x15003A38: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x15003A3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15003A40: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x15003A44: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x15003A48: sb          $zero, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = 0;
    // 0x15003A4C: sh          $t8, -0x1D60($at)
    MEM_H(-0X1D60, ctx->r1) = ctx->r24;
    // 0x15003A50: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x15003A54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15003A58: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x15003A5C: jal         0x1502B7F0
    // 0x15003A60: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_1502B7F0(rdram, ctx);
        goto after_0;
    // 0x15003A60: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x15003A64: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
    // 0x15003A68: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x15003A6C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15003A70: mflo        $t9
    ctx->r25 = lo;
    // 0x15003A74: addiu       $v1, $v1, -0x4100
    ctx->r3 = ADD32(ctx->r3, -0X4100);
    // 0x15003A78: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x15003A7C: bne         $s1, $zero, L_15003A88
    if (ctx->r17 != 0) {
        // 0x15003A80: nop
    
            goto L_15003A88;
    }
    // 0x15003A80: nop

    // 0x15003A84: break       7
    do_break(352336516);
L_15003A88:
    // 0x15003A88: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x15003A8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003A90: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15003A94: sw          $t2, -0x4110($at)
    MEM_W(-0X4110, ctx->r1) = ctx->r10;
    // 0x15003A98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15003A9C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x15003AA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15003AA4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x15003AA8: jal         0x1502B7F0
    // 0x15003AAC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_1502B7F0(rdram, ctx);
        goto after_1;
    // 0x15003AAC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_1:
    // 0x15003AB0: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x15003AB4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15003AB8: addiu       $v1, $v1, -0x4110
    ctx->r3 = ADD32(ctx->r3, -0X4110);
    // 0x15003ABC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15003AC0: mflo        $t4
    ctx->r12 = lo;
    // 0x15003AC4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15003AC8: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x15003ACC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15003AD0: addiu       $s0, $s0, -0x4068
    ctx->r16 = ADD32(ctx->r16, -0X4068);
    // 0x15003AD4: bne         $s1, $zero, L_15003AE0
    if (ctx->r17 != 0) {
        // 0x15003AD8: nop
    
            goto L_15003AE0;
    }
    // 0x15003AD8: nop

    // 0x15003ADC: break       7
    do_break(352336604);
L_15003AE0:
    // 0x15003AE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15003AE4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x15003AE8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15003AEC: sll         $a0, $t8, 5
    ctx->r4 = S32(ctx->r24 << 5);
    // 0x15003AF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15003AF4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15003AF8: jal         0x10003C40
    // 0x15003AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x15003AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15003B00: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15003B04: addiu       $s3, $s3, -0x410C
    ctx->r19 = ADD32(ctx->r19, -0X410C);
    // 0x15003B08: bne         $v0, $zero, L_15003B28
    if (ctx->r2 != 0) {
        // 0x15003B0C: sw          $v0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r2;
            goto L_15003B28;
    }
    // 0x15003B0C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x15003B10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003B14: sw          $zero, -0x4110($at)
    MEM_W(-0X4110, ctx->r1) = 0;
    // 0x15003B18: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x15003B1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003B20: b           L_15004544
    // 0x15003B24: sb          $zero, -0x4100($at)
    MEM_B(-0X4100, ctx->r1) = 0;
        goto L_15004544;
    // 0x15003B24: sb          $zero, -0x4100($at)
    MEM_B(-0X4100, ctx->r1) = 0;
L_15003B28:
    // 0x15003B28: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15003B2C: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x15003B30: lw          $s7, 0xA0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA0);
    // 0x15003B34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15003B38: blez        $t0, L_15004230
    if (SIGNED(ctx->r8) <= 0) {
        // 0x15003B3C: nop
    
            goto L_15004230;
    }
    // 0x15003B3C: nop

    // 0x15003B40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15003B44: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15003B48: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15003B4C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15003B50: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x15003B54: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x15003B58: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x15003B5C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15003B60: nop

    // 0x15003B64: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_15003B68:
    // 0x15003B68: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15003B6C: lbu         $t4, -0x4100($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X4100);
    // 0x15003B70: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x15003B74: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15003B78: bne         $s1, $t4, L_15003B98
    if (ctx->r17 != ctx->r12) {
        // 0x15003B7C: sw          $zero, 0x84($sp)
        MEM_W(0X84, ctx->r29) = 0;
            goto L_15003B98;
    }
    // 0x15003B7C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x15003B80: negu        $t5, $s1
    ctx->r13 = SUB32(0, ctx->r17);
    // 0x15003B84: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x15003B88: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x15003B8C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15003B90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15003B94: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
L_15003B98:
    // 0x15003B98: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x15003B9C: addu        $s0, $s5, $v0
    ctx->r16 = ADD32(ctx->r21, ctx->r2);
    // 0x15003BA0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x15003BA4: addu        $t0, $s7, $v1
    ctx->r8 = ADD32(ctx->r23, ctx->r3);
    // 0x15003BA8: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x15003BAC: addu        $t6, $v1, $s7
    ctx->r14 = ADD32(ctx->r3, ctx->r23);
    // 0x15003BB0: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x15003BB4: lh          $t9, 0x2($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X2);
    // 0x15003BB8: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x15003BBC: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x15003BC0: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x15003BC4: lh          $t3, 0x6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X6);
    // 0x15003BC8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15003BCC: nop

    // 0x15003BD0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15003BD4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x15003BD8: lh          $t4, 0x8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X8);
    // 0x15003BDC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x15003BE0: nop

    // 0x15003BE4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15003BE8: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x15003BEC: lh          $t5, 0xA($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA);
    // 0x15003BF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15003BF4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15003BF8: nop

    // 0x15003BFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15003C00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15003C04: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x15003C08: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x15003C0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15003C10: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x15003C14: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x15003C18: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x15003C1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15003C20: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x15003C24: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x15003C28: swc1        $f16, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f16.u32l;
    // 0x15003C2C: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x15003C30: sw          $t7, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r15;
    // 0x15003C34: lbu         $t8, 0x3C($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X3C);
    // 0x15003C38: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    // 0x15003C3C: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x15003C40: sb          $t9, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r25;
    // 0x15003C44: lbu         $t2, 0x34($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X34);
    // 0x15003C48: sb          $t2, 0x6E($s0)
    MEM_B(0X6E, ctx->r16) = ctx->r10;
    // 0x15003C4C: lw          $t3, 0x18($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X18);
    // 0x15003C50: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x15003C54: lw          $v1, 0x14($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X14);
    // 0x15003C58: sltu        $at, $v1, $at
    ctx->r1 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x15003C5C: beq         $at, $zero, L_15003CFC
    if (ctx->r1 == 0) {
        // 0x15003C60: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15003CFC;
    }
    // 0x15003C60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15003C64: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15003C68: beq         $v0, $at, L_15003C7C
    if (ctx->r2 == ctx->r1) {
        // 0x15003C6C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_15003C7C;
    }
    // 0x15003C6C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x15003C70: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15003C74: bne         $v0, $at, L_15003C94
    if (ctx->r2 != ctx->r1) {
        // 0x15003C78: nop
    
            goto L_15003C94;
    }
    // 0x15003C78: nop

L_15003C7C:
    // 0x15003C7C: lbu         $t4, 0x70($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X70);
    // 0x15003C80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15003C84: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x15003C88: sb          $t5, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r13;
    // 0x15003C8C: sb          $t6, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r14;
    // 0x15003C90: lw          $v0, 0x14($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X14);
L_15003C94:
    // 0x15003C94: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15003C98: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15003C9C: addiu       $v1, $v1, -0x7370
    ctx->r3 = ADD32(ctx->r3, -0X7370);
    // 0x15003CA0: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15003CA4: mflo        $t7
    ctx->r15 = lo;
    // 0x15003CA8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x15003CAC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15003CB0: sw          $t9, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r25;
    // 0x15003CB4: lw          $t2, 0x14($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X14);
    // 0x15003CB8: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15003CBC: mflo        $t3
    ctx->r11 = lo;
    // 0x15003CC0: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x15003CC4: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x15003CC8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15003CCC: sw          $t5, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r13;
    // 0x15003CD0: lw          $t6, 0x14($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X14);
    // 0x15003CD4: multu       $t6, $a0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15003CD8: mflo        $t7
    ctx->r15 = lo;
    // 0x15003CDC: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x15003CE0: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x15003CE4: sb          $t9, 0x92($s0)
    MEM_B(0X92, ctx->r16) = ctx->r25;
    // 0x15003CE8: lw          $t2, 0x14($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X14);
    // 0x15003CEC: bnel        $t2, $at, L_15003D08
    if (ctx->r10 != ctx->r1) {
        // 0x15003CF0: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_15003D08;
    }
    goto skip_0;
    // 0x15003CF0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x15003CF4: b           L_15003D04
    // 0x15003CF8: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
        goto L_15003D04;
    // 0x15003CF8: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
L_15003CFC:
    // 0x15003CFC: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x15003D00: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
L_15003D04:
    // 0x15003D04: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_15003D08:
    // 0x15003D08: lw          $t4, 0x38($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X38);
    // 0x15003D0C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x15003D10: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    // 0x15003D14: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    // 0x15003D18: sh          $v0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r2;
    // 0x15003D1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x15003D20: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x15003D24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15003D28: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x15003D2C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x15003D30: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x15003D34: sh          $zero, 0x74($s0)
    MEM_H(0X74, ctx->r16) = 0;
    // 0x15003D38: sb          $zero, 0x4E($s0)
    MEM_B(0X4E, ctx->r16) = 0;
    // 0x15003D3C: sh          $zero, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = 0;
    // 0x15003D40: sb          $t5, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r13;
    // 0x15003D44: swc1        $f6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f6.u32l;
    // 0x15003D48: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
    // 0x15003D4C: swc1        $f18, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f18.u32l;
    // 0x15003D50: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x15003D54: sb          $t6, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r14;
    // 0x15003D58: sb          $v0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r2;
    // 0x15003D5C: sb          $v0, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r2;
    // 0x15003D60: sb          $v0, 0x8C($s0)
    MEM_B(0X8C, ctx->r16) = ctx->r2;
    // 0x15003D64: sb          $v0, 0x8B($s0)
    MEM_B(0X8B, ctx->r16) = ctx->r2;
    // 0x15003D68: sb          $s1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r17;
    // 0x15003D6C: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x15003D70: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x15003D74: bne         $v1, $zero, L_15003FFC
    if (ctx->r3 != 0) {
        // 0x15003D78: sw          $t4, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r12;
            goto L_15003FFC;
    }
    // 0x15003D78: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x15003D7C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15003D80: lbu         $v1, -0x4100($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4100);
    // 0x15003D84: lw          $a1, 0x10($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X10);
    // 0x15003D88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15003D8C: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15003D90: beq         $at, $zero, L_15003DF8
    if (ctx->r1 == 0) {
        // 0x15003D94: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_15003DF8;
    }
    // 0x15003D94: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x15003D98: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x15003D9C: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x15003DA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15003DA4: addu        $v0, $s7, $t8
    ctx->r2 = ADD32(ctx->r23, ctx->r24);
    // 0x15003DA8: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
L_15003DAC:
    // 0x15003DAC: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x15003DB0: bnel        $t9, $a0, L_15003DEC
    if (ctx->r25 != ctx->r4) {
        // 0x15003DB4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15003DEC;
    }
    goto skip_1;
    // 0x15003DB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15003DB8: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x15003DBC: bnel        $t2, $a1, L_15003DEC
    if (ctx->r10 != ctx->r5) {
        // 0x15003DC0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15003DEC;
    }
    goto skip_2;
    // 0x15003DC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x15003DC4: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15003DC8: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x15003DCC: mflo        $t4
    ctx->r12 = lo;
    // 0x15003DD0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15003DD4: lw          $t6, 0x1C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1C);
    // 0x15003DD8: beql        $t6, $zero, L_15003DEC
    if (ctx->r14 == 0) {
        // 0x15003DDC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15003DEC;
    }
    goto skip_3;
    // 0x15003DDC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x15003DE0: b           L_15003DF8
    // 0x15003DE4: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
        goto L_15003DF8;
    // 0x15003DE4: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
    // 0x15003DE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15003DEC:
    // 0x15003DEC: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15003DF0: bne         $at, $zero, L_15003DAC
    if (ctx->r1 != 0) {
        // 0x15003DF4: addiu       $v0, $v0, 0x44
        ctx->r2 = ADD32(ctx->r2, 0X44);
            goto L_15003DAC;
    }
    // 0x15003DF4: addiu       $v0, $v0, 0x44
    ctx->r2 = ADD32(ctx->r2, 0X44);
L_15003DF8:
    // 0x15003DF8: bne         $s4, $zero, L_15003E30
    if (ctx->r20 != 0) {
        // 0x15003DFC: addiu       $a0, $sp, 0xA8
        ctx->r4 = ADD32(ctx->r29, 0XA8);
            goto L_15003E30;
    }
    // 0x15003DFC: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x15003E00: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15003E04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15003E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15003E0C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15003E10: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15003E14: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x15003E18: jal         0x1502B6BC
    // 0x15003E1C: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    func_1502B6BC(rdram, ctx);
        goto after_3;
    // 0x15003E1C: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    after_3:
    // 0x15003E20: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x15003E24: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x15003E28: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x15003E2C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_15003E30:
    // 0x15003E30: beq         $s4, $zero, L_15003E94
    if (ctx->r20 == 0) {
        // 0x15003E34: addiu       $v0, $s6, 0x28
        ctx->r2 = ADD32(ctx->r22, 0X28);
            goto L_15003E94;
    }
    // 0x15003E34: addiu       $v0, $s6, 0x28
    ctx->r2 = ADD32(ctx->r22, 0X28);
    // 0x15003E38: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15003E3C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x15003E40: mflo        $v0
    ctx->r2 = lo;
    // 0x15003E44: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x15003E48: lw          $t2, -0x78($t9)
    ctx->r10 = MEM_W(ctx->r25, -0X78);
    // 0x15003E4C: sw          $t2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r10;
    // 0x15003E50: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x15003E54: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15003E58: lw          $t5, -0x84($t4)
    ctx->r13 = MEM_W(ctx->r12, -0X84);
    // 0x15003E5C: sw          $t5, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r13;
    // 0x15003E60: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x15003E64: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15003E68: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x15003E6C: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x15003E70: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x15003E74: addu        $t2, $t9, $v0
    ctx->r10 = ADD32(ctx->r25, ctx->r2);
    // 0x15003E78: lhu         $t3, -0x8A($t2)
    ctx->r11 = MEM_HU(ctx->r10, -0X8A);
    // 0x15003E7C: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x15003E80: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x15003E84: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x15003E88: lw          $t6, -0x5C($t5)
    ctx->r14 = MEM_W(ctx->r13, -0X5C);
    // 0x15003E8C: b           L_15003EBC
    // 0x15003E90: sw          $t6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r14;
        goto L_15003EBC;
    // 0x15003E90: sw          $t6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r14;
L_15003E94:
    // 0x15003E94: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x15003E98: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x15003E9C: sw          $t7, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r15;
    // 0x15003EA0: lw          $t8, 0x8($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X8);
    // 0x15003EA4: subu        $t2, $t7, $v0
    ctx->r10 = SUB32(ctx->r15, ctx->r2);
    // 0x15003EA8: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x15003EAC: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x15003EB0: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x15003EB4: lw          $t4, 0x10($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X10);
    // 0x15003EB8: sw          $t4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r12;
L_15003EBC:
    // 0x15003EBC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x15003EC0: lbu         $t5, -0x4100($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X4100);
    // 0x15003EC4: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x15003EC8: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x15003ECC: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x15003ED0: bne         $at, $zero, L_15003F4C
    if (ctx->r1 != 0) {
        // 0x15003ED4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15003F4C;
    }
    // 0x15003ED4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15003ED8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15003EDC: addiu       $t7, $t7, 0x26C0
    ctx->r15 = ADD32(ctx->r15, 0X26C0);
    // 0x15003EE0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15003EE4: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x15003EE8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x15003EEC: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x15003EF0: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x15003EF4: sb          $t9, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r25;
    // 0x15003EF8: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x15003EFC: sh          $t2, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r10;
    // 0x15003F00: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x15003F04: sh          $t3, 0x52($s0)
    MEM_H(0X52, ctx->r16) = ctx->r11;
    // 0x15003F08: lbu         $t4, 0x8($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8);
    // 0x15003F0C: sb          $t4, 0x4F($s0)
    MEM_B(0X4F, ctx->r16) = ctx->r12;
    // 0x15003F10: lbu         $t5, 0x9($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X9);
    // 0x15003F14: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x15003F18: sb          $t6, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r14;
    // 0x15003F1C: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x15003F20: ori         $t2, $t6, 0x4
    ctx->r10 = ctx->r14 | 0X4;
    // 0x15003F24: sh          $t7, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = ctx->r15;
    // 0x15003F28: lb          $t8, 0x8B($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X8B);
    // 0x15003F2C: beql        $t8, $zero, L_15003F3C
    if (ctx->r24 == 0) {
        // 0x15003F30: lhu         $t3, 0x6($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X6);
            goto L_15003F3C;
    }
    goto skip_4;
    // 0x15003F30: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
    skip_4:
    // 0x15003F34: sb          $t2, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r10;
    // 0x15003F38: lhu         $t3, 0x6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X6);
L_15003F3C:
    // 0x15003F3C: sh          $t3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r11;
    // 0x15003F40: lbu         $t4, 0x33($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X33);
    // 0x15003F44: b           L_15003FA4
    // 0x15003F48: sb          $t4, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r12;
        goto L_15003FA4;
    // 0x15003F48: sb          $t4, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r12;
L_15003F4C:
    // 0x15003F4C: lhu         $t5, 0x2E($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X2E);
    // 0x15003F50: sh          $t5, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r13;
    // 0x15003F54: lhu         $t6, 0x30($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X30);
    // 0x15003F58: sh          $t6, 0x52($s0)
    MEM_H(0X52, ctx->r16) = ctx->r14;
    // 0x15003F5C: lbu         $t7, 0x32($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X32);
    // 0x15003F60: sb          $t7, 0x4F($s0)
    MEM_B(0X4F, ctx->r16) = ctx->r15;
    // 0x15003F64: lbu         $t8, 0x2C($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2C);
    // 0x15003F68: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x15003F6C: lbu         $t9, 0x2D($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X2D);
    // 0x15003F70: sb          $t9, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r25;
    // 0x15003F74: lhu         $t2, 0x40($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X40);
    // 0x15003F78: sh          $t2, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r10;
    // 0x15003F7C: lbu         $v0, 0x33($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X33);
    // 0x15003F80: beql        $v0, $zero, L_15003F94
    if (ctx->r2 == 0) {
        // 0x15003F84: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15003F94;
    }
    goto skip_5;
    // 0x15003F84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_5:
    // 0x15003F88: b           L_15003FA4
    // 0x15003F8C: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
        goto L_15003FA4;
    // 0x15003F8C: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
    // 0x15003F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15003F94:
    // 0x15003F94: jal         0x15004BF0
    // 0x15003F98: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    func_15004BF0(rdram, ctx);
        goto after_4;
    // 0x15003F98: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    after_4:
    // 0x15003F9C: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x15003FA0: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
L_15003FA4:
    // 0x15003FA4: addiu       $at, $zero, 0x71
    ctx->r1 = ADD32(0, 0X71);
    // 0x15003FA8: bne         $t1, $at, L_15003FB4
    if (ctx->r9 != ctx->r1) {
        // 0x15003FAC: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_15003FB4;
    }
    // 0x15003FAC: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x15003FB0: sw          $t3, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r11;
L_15003FB4:
    // 0x15003FB4: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x15003FB8: bnel        $t4, $zero, L_15003FD4
    if (ctx->r12 != 0) {
        // 0x15003FBC: lbu         $t6, 0x6E($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X6E);
            goto L_15003FD4;
    }
    goto skip_6;
    // 0x15003FBC: lbu         $t6, 0x6E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6E);
    skip_6:
    // 0x15003FC0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x15003FC4: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x15003FC8: beql        $t5, $zero, L_15003FF4
    if (ctx->r13 == 0) {
        // 0x15003FCC: sb          $t8, 0x6F($s0)
        MEM_B(0X6F, ctx->r16) = ctx->r24;
            goto L_15003FF4;
    }
    goto skip_7;
    // 0x15003FCC: sb          $t8, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r24;
    skip_7:
    // 0x15003FD0: lbu         $t6, 0x6E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6E);
L_15003FD4:
    // 0x15003FD4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15003FD8: bne         $t6, $zero, L_15003FE8
    if (ctx->r14 != 0) {
        // 0x15003FDC: nop
    
            goto L_15003FE8;
    }
    // 0x15003FDC: nop

    // 0x15003FE0: b           L_15003FF4
    // 0x15003FE4: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
        goto L_15003FF4;
    // 0x15003FE4: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
L_15003FE8:
    // 0x15003FE8: b           L_15003FF4
    // 0x15003FEC: sb          $zero, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = 0;
        goto L_15003FF4;
    // 0x15003FEC: sb          $zero, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = 0;
    // 0x15003FF0: sb          $t8, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r24;
L_15003FF4:
    // 0x15003FF4: b           L_150041B0
    // 0x15003FF8: sh          $t1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r9;
        goto L_150041B0;
    // 0x15003FF8: sh          $t1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r9;
L_15003FFC:
    // 0x15003FFC: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x15004000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15004004: ori         $t2, $t9, 0x8000
    ctx->r10 = ctx->r25 | 0X8000;
    // 0x15004008: beq         $v1, $at, L_1500401C
    if (ctx->r3 == ctx->r1) {
        // 0x1500400C: sh          $t2, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r10;
            goto L_1500401C;
    }
    // 0x1500400C: sh          $t2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r10;
    // 0x15004010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15004014: bnel        $v1, $at, L_15004164
    if (ctx->r3 != ctx->r1) {
        // 0x15004018: lhu         $t6, 0x2E($t0)
        ctx->r14 = MEM_HU(ctx->r8, 0X2E);
            goto L_15004164;
    }
    goto skip_8;
    // 0x15004018: lhu         $t6, 0x2E($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X2E);
    skip_8:
L_1500401C:
    // 0x1500401C: blez        $s1, L_15004078
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15004020: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15004078;
    }
    // 0x15004020: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15004024: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x15004028: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_1500402C:
    // 0x1500402C: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x15004030: bnel        $t3, $a0, L_15004070
    if (ctx->r11 != ctx->r4) {
        // 0x15004034: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15004070;
    }
    goto skip_9;
    // 0x15004034: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_9:
    // 0x15004038: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x1500403C: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x15004040: bnel        $t4, $t5, L_15004070
    if (ctx->r12 != ctx->r13) {
        // 0x15004044: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15004070;
    }
    goto skip_10;
    // 0x15004044: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_10:
    // 0x15004048: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500404C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x15004050: mflo        $t7
    ctx->r15 = lo;
    // 0x15004054: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15004058: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x1500405C: beql        $t9, $zero, L_15004070
    if (ctx->r25 == 0) {
        // 0x15004060: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15004070;
    }
    goto skip_11;
    // 0x15004060: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_11:
    // 0x15004064: b           L_15004078
    // 0x15004068: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
        goto L_15004078;
    // 0x15004068: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
    // 0x1500406C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15004070:
    // 0x15004070: bne         $v1, $s1, L_1500402C
    if (ctx->r3 != ctx->r17) {
        // 0x15004074: addiu       $v0, $v0, 0x44
        ctx->r2 = ADD32(ctx->r2, 0X44);
            goto L_1500402C;
    }
    // 0x15004074: addiu       $v0, $v0, 0x44
    ctx->r2 = ADD32(ctx->r2, 0X44);
L_15004078:
    // 0x15004078: bne         $s4, $zero, L_150040C0
    if (ctx->r20 != 0) {
        // 0x1500407C: lui         $t2, 0x800B
        ctx->r10 = S32(0X800B << 16);
            goto L_150040C0;
    }
    // 0x1500407C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x15004080: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x15004084: lw          $t2, 0xE50($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XE50);
    // 0x15004088: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x1500408C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15004090: lw          $fp, 0x0($t4)
    ctx->r30 = MEM_W(ctx->r12, 0X0);
    // 0x15004094: lw          $t5, 0x0($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X0);
    // 0x15004098: addiu       $v0, $fp, 0x28
    ctx->r2 = ADD32(ctx->r30, 0X28);
    // 0x1500409C: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x150040A0: subu        $t6, $t5, $v0
    ctx->r14 = SUB32(ctx->r13, ctx->r2);
    // 0x150040A4: srl         $t7, $t6, 4
    ctx->r15 = S32(U32(ctx->r14) >> 4);
    // 0x150040A8: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x150040AC: lw          $t8, 0x10($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X10);
    // 0x150040B0: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x150040B4: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x150040B8: b           L_15004108
    // 0x150040BC: sw          $t9, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r25;
        goto L_15004108;
    // 0x150040BC: sw          $t9, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r25;
L_150040C0:
    // 0x150040C0: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150040C4: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x150040C8: mflo        $v0
    ctx->r2 = lo;
    // 0x150040CC: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x150040D0: lhu         $t4, -0x8A($t3)
    ctx->r12 = MEM_HU(ctx->r11, -0X8A);
    // 0x150040D4: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x150040D8: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x150040DC: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x150040E0: lw          $t7, -0x78($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X78);
    // 0x150040E4: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
    // 0x150040E8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x150040EC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x150040F0: lw          $t2, -0x5C($t9)
    ctx->r10 = MEM_W(ctx->r25, -0X5C);
    // 0x150040F4: sw          $t2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r10;
    // 0x150040F8: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x150040FC: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15004100: lw          $t5, -0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, -0X4);
    // 0x15004104: sw          $t5, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r13;
L_15004108:
    // 0x15004108: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x1500410C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15004110: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x15004114: bnel        $t6, $at, L_15004128
    if (ctx->r14 != ctx->r1) {
        // 0x15004118: sb          $t7, 0x6F($s0)
        MEM_B(0X6F, ctx->r16) = ctx->r15;
            goto L_15004128;
    }
    goto skip_12;
    // 0x15004118: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
    skip_12:
    // 0x1500411C: b           L_15004128
    // 0x15004120: sb          $zero, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = 0;
        goto L_15004128;
    // 0x15004120: sb          $zero, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = 0;
    // 0x15004124: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
L_15004128:
    // 0x15004128: bne         $s4, $zero, L_1500413C
    if (ctx->r20 != 0) {
        // 0x1500412C: nop
    
            goto L_1500413C;
    }
    // 0x1500412C: nop

    // 0x15004130: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x15004134: b           L_15004154
    // 0x15004138: sw          $t8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r24;
        goto L_15004154;
    // 0x15004138: sw          $t8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r24;
L_1500413C:
    // 0x1500413C: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15004140: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x15004144: mflo        $t2
    ctx->r10 = lo;
    // 0x15004148: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x1500414C: lw          $t4, -0x84($t3)
    ctx->r12 = MEM_W(ctx->r11, -0X84);
    // 0x15004150: sw          $t4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r12;
L_15004154:
    // 0x15004154: lhu         $t5, 0x3E($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X3E);
    // 0x15004158: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x1500415C: sh          $t5, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = ctx->r13;
    // 0x15004160: lhu         $t6, 0x2E($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X2E);
L_15004164:
    // 0x15004164: sh          $t6, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r14;
    // 0x15004168: lhu         $t7, 0x30($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X30);
    // 0x1500416C: sh          $t7, 0x52($s0)
    MEM_H(0X52, ctx->r16) = ctx->r15;
    // 0x15004170: lbu         $t8, 0x32($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X32);
    // 0x15004174: sb          $t8, 0x4F($s0)
    MEM_B(0X4F, ctx->r16) = ctx->r24;
    // 0x15004178: lbu         $t9, 0x2C($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X2C);
    // 0x1500417C: sb          $t9, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r25;
    // 0x15004180: lbu         $t2, 0x2D($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X2D);
    // 0x15004184: sb          $t2, 0x4D($s0)
    MEM_B(0X4D, ctx->r16) = ctx->r10;
    // 0x15004188: lhu         $t3, 0x40($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X40);
    // 0x1500418C: sh          $t3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r11;
    // 0x15004190: lbu         $v0, 0x33($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X33);
    // 0x15004194: beq         $v0, $zero, L_150041A4
    if (ctx->r2 == 0) {
        // 0x15004198: nop
    
            goto L_150041A4;
    }
    // 0x15004198: nop

    // 0x1500419C: b           L_150041B0
    // 0x150041A0: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
        goto L_150041B0;
    // 0x150041A0: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
L_150041A4:
    // 0x150041A4: jal         0x15004BF0
    // 0x150041A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15004BF0(rdram, ctx);
        goto after_5;
    // 0x150041A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x150041AC: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
L_150041B0:
    // 0x150041B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150041B4: jal         0x15004AAC
    // 0x150041B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_15004AAC(rdram, ctx);
        goto after_6;
    // 0x150041B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_6:
    // 0x150041BC: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x150041C0: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x150041C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150041C8: bne         $t4, $zero, L_150041E4
    if (ctx->r12 != 0) {
        // 0x150041CC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_150041E4;
    }
    // 0x150041CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150041D0: bne         $t5, $zero, L_150041E4
    if (ctx->r13 != 0) {
        // 0x150041D4: nop
    
            goto L_150041E4;
    }
    // 0x150041D4: nop

    // 0x150041D8: lbu         $t6, 0x6F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6F);
    // 0x150041DC: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x150041E0: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
L_150041E4:
    // 0x150041E4: bne         $s4, $zero, L_15004204
    if (ctx->r20 != 0) {
        // 0x150041E8: addiu       $a3, $zero, 0x3F
        ctx->r7 = ADD32(0, 0X3F);
            goto L_15004204;
    }
    // 0x150041E8: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    // 0x150041EC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x150041F0: jal         0x1510CE60
    // 0x150041F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1510CE60(rdram, ctx);
        goto after_7;
    // 0x150041F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x150041F8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x150041FC: jal         0x15004CE0
    // 0x15004200: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_15004CE0(rdram, ctx);
        goto after_8;
    // 0x15004200: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_8:
L_15004204:
    // 0x15004204: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15004208: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x1500420C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15004210: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15004214: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x15004218: addiu       $t9, $t8, 0x44
    ctx->r25 = ADD32(ctx->r24, 0X44);
    // 0x1500421C: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x15004220: bne         $at, $zero, L_15003B68
    if (ctx->r1 != 0) {
        // 0x15004224: addiu       $s5, $s5, 0xA0
        ctx->r21 = ADD32(ctx->r21, 0XA0);
            goto L_15003B68;
    }
    // 0x15004224: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
    // 0x15004228: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1500422C: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
L_15004230:
    // 0x15004230: blez        $t0, L_150043B0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x15004234: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_150043B0;
    }
    // 0x15004234: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15004238: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x1500423C: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
L_15004240:
    // 0x15004240: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x15004244: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x15004248: addu        $s0, $s5, $t2
    ctx->r16 = ADD32(ctx->r21, ctx->r10);
    // 0x1500424C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x15004250: bnel        $v1, $zero, L_15004264
    if (ctx->r3 != 0) {
        // 0x15004254: lbu         $t3, 0x70($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X70);
            goto L_15004264;
    }
    goto skip_13;
    // 0x15004254: lbu         $t3, 0x70($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X70);
    skip_13:
    // 0x15004258: b           L_150043A0
    // 0x1500425C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
        goto L_150043A0;
    // 0x1500425C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x15004260: lbu         $t3, 0x70($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X70);
L_15004264:
    // 0x15004264: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15004268: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x1500426C: bnel        $s1, $t4, L_150042BC
    if (ctx->r17 != ctx->r12) {
        // 0x15004270: sw          $v1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r3;
            goto L_150042BC;
    }
    goto skip_14;
    // 0x15004270: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    skip_14:
    // 0x15004274: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x15004278: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1500427C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15004280: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x15004284: jal         0x10003C40
    // 0x15004288: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    allocate_memory(rdram, ctx);
        goto after_9;
    // 0x15004288: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_9:
    // 0x1500428C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x15004290: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x15004294: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15004298: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x1500429C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150042A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150042A4: jal         0x10003C40
    // 0x150042A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_10;
    // 0x150042A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x150042AC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x150042B0: b           L_150042C0
    // 0x150042B4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
        goto L_150042C0;
    // 0x150042B4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x150042B8: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_150042BC:
    // 0x150042BC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_150042C0:
    // 0x150042C0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x150042C4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150042C8: beq         $v1, $v0, L_15004390
    if (ctx->r3 == ctx->r2) {
        // 0x150042CC: nop
    
            goto L_15004390;
    }
    // 0x150042CC: nop

    // 0x150042D0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x150042D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150042D8: blezl       $a0, L_15004334
    if (SIGNED(ctx->r4) <= 0) {
        // 0x150042DC: lw          $t5, 0x24($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X24);
            goto L_15004334;
    }
    goto skip_15;
    // 0x150042DC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    skip_15:
    // 0x150042E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150042E4: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
L_150042E8:
    // 0x150042E8: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x150042EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150042F0: addu        $t2, $t9, $v0
    ctx->r10 = ADD32(ctx->r25, ctx->r2);
    // 0x150042F4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150042F8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x150042FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15004300: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15004304: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x15004308: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x1500430C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x15004310: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15004314: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x15004318: sw          $t4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r12;
    // 0x1500431C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x15004320: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15004324: bnel        $at, $zero, L_150042E8
    if (ctx->r1 != 0) {
        // 0x15004328: lw          $t9, 0x28($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X28);
            goto L_150042E8;
    }
    goto skip_16;
    // 0x15004328: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    skip_16:
    // 0x1500432C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x15004330: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
L_15004334:
    // 0x15004334: beq         $v0, $t5, L_15004390
    if (ctx->r2 == ctx->r13) {
        // 0x15004338: nop
    
            goto L_15004390;
    }
    // 0x15004338: nop

    // 0x1500433C: blez        $a0, L_15004390
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15004340: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15004390;
    }
    // 0x15004340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15004344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15004348: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
L_1500434C:
    // 0x1500434C: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x15004350: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15004354: addu        $t3, $t9, $v0
    ctx->r11 = ADD32(ctx->r25, ctx->r2);
    // 0x15004358: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1500435C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15004360: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15004364: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15004368: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x1500436C: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x15004370: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x15004374: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15004378: lw          $t2, 0xC($t3)
    ctx->r10 = MEM_W(ctx->r11, 0XC);
    // 0x1500437C: sw          $t2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r10;
    // 0x15004380: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x15004384: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15004388: bnel        $at, $zero, L_1500434C
    if (ctx->r1 != 0) {
        // 0x1500438C: lw          $t9, 0x28($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X28);
            goto L_1500434C;
    }
    goto skip_17;
    // 0x1500438C: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    skip_17:
L_15004390:
    // 0x15004390: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x15004394: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x15004398: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x1500439C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
L_150043A0:
    // 0x150043A0: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
    // 0x150043A4: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150043A8: bnel        $at, $zero, L_15004240
    if (ctx->r1 != 0) {
        // 0x150043AC: lw          $t2, 0x0($s3)
        ctx->r10 = MEM_W(ctx->r19, 0X0);
            goto L_15004240;
    }
    goto skip_18;
    // 0x150043AC: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    skip_18:
L_150043B0:
    // 0x150043B0: sll         $a0, $t0, 6
    ctx->r4 = S32(ctx->r8 << 6);
    // 0x150043B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150043B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150043BC: jal         0x10003C40
    // 0x150043C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_11;
    // 0x150043C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x150043C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150043C8: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x150043CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150043D0: sw          $v0, -0x4120($at)
    MEM_W(-0X4120, ctx->r1) = ctx->r2;
    // 0x150043D4: sll         $t5, $a0, 6
    ctx->r13 = S32(ctx->r4 << 6);
    // 0x150043D8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x150043DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150043E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150043E4: jal         0x10003C40
    // 0x150043E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_12;
    // 0x150043E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x150043EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150043F0: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x150043F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150043F8: sw          $v0, -0x411C($at)
    MEM_W(-0X411C, ctx->r1) = ctx->r2;
    // 0x150043FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15004400: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15004404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500440C: jal         0x10003C40
    // 0x15004410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_13;
    // 0x15004410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x15004414: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15004418: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500441C: sw          $v0, -0x4108($at)
    MEM_W(-0X4108, ctx->r1) = ctx->r2;
    // 0x15004420: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15004424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500442C: jal         0x10003C40
    // 0x15004430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_14;
    // 0x15004430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x15004434: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15004438: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1500443C: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15004440: sw          $v0, -0x4104($at)
    MEM_W(-0X4104, ctx->r1) = ctx->r2;
    // 0x15004444: addiu       $s1, $s1, -0x4120
    ctx->r17 = ADD32(ctx->r17, -0X4120);
    // 0x15004448: addiu       $s0, $s0, -0x4130
    ctx->r16 = ADD32(ctx->r16, -0X4130);
L_1500444C:
    // 0x1500444C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15004450: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15004454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500445C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x15004460: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15004464: jal         0x10003C40
    // 0x15004468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_15;
    // 0x15004468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x1500446C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15004470: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x15004474: bne         $at, $zero, L_1500444C
    if (ctx->r1 != 0) {
        // 0x15004478: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_1500444C;
    }
    // 0x15004478: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x1500447C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15004480: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15004484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500448C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x15004490: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15004494: jal         0x10003C40
    // 0x15004498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_16;
    // 0x15004498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x1500449C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150044A0: addiu       $v1, $v1, -0x406C
    ctx->r3 = ADD32(ctx->r3, -0X406C);
    // 0x150044A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x150044A8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150044AC: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x150044B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150044B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150044B8: blez        $t0, L_150044E8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x150044BC: nop
    
            goto L_150044E8;
    }
    // 0x150044BC: nop

    // 0x150044C0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_150044C4:
    // 0x150044C4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150044C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150044CC: addu        $t3, $t7, $v0
    ctx->r11 = ADD32(ctx->r15, ctx->r2);
    // 0x150044D0: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x150044D4: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x150044D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150044DC: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150044E0: bnel        $at, $zero, L_150044C4
    if (ctx->r1 != 0) {
        // 0x150044E4: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_150044C4;
    }
    goto skip_19;
    // 0x150044E4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_19:
L_150044E8:
    // 0x150044E8: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x150044EC: lbu         $s1, -0x4100($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X4100);
    // 0x150044F0: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150044F4: beq         $at, $zero, L_15004544
    if (ctx->r1 == 0) {
        // 0x150044F8: sll         $s5, $s1, 2
        ctx->r21 = S32(ctx->r17 << 2);
            goto L_15004544;
    }
    // 0x150044F8: sll         $s5, $s1, 2
    ctx->r21 = S32(ctx->r17 << 2);
    // 0x150044FC: addu        $s5, $s5, $s1
    ctx->r21 = ADD32(ctx->r21, ctx->r17);
    // 0x15004500: sll         $s5, $s5, 5
    ctx->r21 = S32(ctx->r21 << 5);
L_15004504:
    // 0x15004504: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x15004508: addu        $t4, $t2, $s5
    ctx->r12 = ADD32(ctx->r10, ctx->r21);
    // 0x1500450C: lbu         $t5, 0x72($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X72);
    // 0x15004510: bnel        $t5, $zero, L_15004538
    if (ctx->r13 != 0) {
        // 0x15004514: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15004538;
    }
    goto skip_20;
    // 0x15004514: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_20:
    // 0x15004518: jal         0x15004BF0
    // 0x1500451C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15004BF0(rdram, ctx);
        goto after_17;
    // 0x1500451C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x15004520: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x15004524: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15004528: addu        $t9, $t6, $s5
    ctx->r25 = ADD32(ctx->r14, ctx->r21);
    // 0x1500452C: sb          $v0, 0x72($t9)
    MEM_B(0X72, ctx->r25) = ctx->r2;
    // 0x15004530: lw          $t0, -0x4110($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4110);
    // 0x15004534: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15004538:
    // 0x15004538: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1500453C: bne         $at, $zero, L_15004504
    if (ctx->r1 != 0) {
        // 0x15004540: addiu       $s5, $s5, 0xA0
        ctx->r21 = ADD32(ctx->r21, 0XA0);
            goto L_15004504;
    }
    // 0x15004540: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
L_15004544:
    // 0x15004544: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15004548: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1500454C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15004550: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15004554: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15004558: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1500455C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15004560: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15004564: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15004568: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x1500456C: jr          $ra
    // 0x15004570: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15004570: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1513177C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513177C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15131780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15131784: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x15131788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513178C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15131790: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x15131794: beq         $t7, $zero, L_151317A4
    if (ctx->r15 == 0) {
        // 0x15131798: nop
    
            goto L_151317A4;
    }
    // 0x15131798: nop

    // 0x1513179C: b           L_151317A4
    // 0x151317A0: lbu         $v0, 0x75($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X75);
        goto L_151317A4;
    // 0x151317A0: lbu         $v0, 0x75($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X75);
L_151317A4:
    // 0x151317A4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151317A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151317AC: lw          $t9, -0x67EC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X67EC);
    // 0x151317B0: jalr        $t9
    // 0x151317B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151317B4: nop

    after_0:
    // 0x151317B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151317BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151317C0: jr          $ra
    // 0x151317C4: nop

    return;
    return;
    // 0x151317C4: nop

;}
RECOMP_FUNC void func_150C8730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C8730: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x150C8734: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150C8738: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150C873C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150C8740: lw          $v0, 0x2D0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X2D0);
    // 0x150C8744: bnel        $v0, $zero, L_150C8758
    if (ctx->r2 != 0) {
        // 0x150C8748: lhu         $v1, 0x84($a2)
        ctx->r3 = MEM_HU(ctx->r6, 0X84);
            goto L_150C8758;
    }
    goto skip_0;
    // 0x150C8748: lhu         $v1, 0x84($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X84);
    skip_0:
    // 0x150C874C: b           L_150C88C0
    // 0x150C8750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C88C0;
    // 0x150C8750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C8754: lhu         $v1, 0x84($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X84);
L_150C8758:
    // 0x150C8758: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x150C875C: bne         $v1, $at, L_150C8778
    if (ctx->r3 != ctx->r1) {
        // 0x150C8760: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_150C8778;
    }
    // 0x150C8760: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C8764: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C8768: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150C876C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150C8770: nop

    // 0x150C8774: bc1t        L_150C8784
    if (c1cs) {
        // 0x150C8778: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_150C8784;
    }
L_150C8778:
    // 0x150C8778: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x150C877C: bne         $v1, $at, L_150C88C0
    if (ctx->r3 != ctx->r1) {
        // 0x150C8780: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150C88C0;
    }
    // 0x150C8780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C8784:
    // 0x150C8784: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150C8788: lbu         $v0, -0x1640($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1640);
    // 0x150C878C: lw          $a1, 0x34($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X34);
    // 0x150C8790: sw          $a2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r6;
    // 0x150C8794: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x150C8798: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x150C879C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x150C87A0: jal         0x151EFEB8
    // 0x150C87A4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x150C87A4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    after_0:
    // 0x150C87A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C87AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C87B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C87B4: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x150C87B8: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x150C87BC: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x150C87C0: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x150C87C4: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x150C87C8: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x150C87CC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150C87D0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150C87D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150C87D8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150C87DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150C87E0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150C87E4: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x150C87E8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x150C87EC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x150C87F0: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x150C87F4: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150C87F8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150C87FC: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x150C8800: jal         0x1503E5F8
    // 0x150C8804: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    func_1503E5F8(rdram, ctx);
        goto after_1;
    // 0x150C8804: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150C8808: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C880C: lwc1        $f10, 0x4F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F0);
    // 0x150C8810: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C8814: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8818: lwc1        $f16, 0x4F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F4);
    // 0x150C881C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8820: lwc1        $f18, 0x4F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F8);
    // 0x150C8824: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x150C8828: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150C882C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150C8830: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x150C8834: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150C8838: addiu       $a2, $zero, 0x4E
    ctx->r6 = ADD32(0, 0X4E);
    // 0x150C883C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150C8840: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x150C8844: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x150C8848: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x150C884C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x150C8850: jal         0x15073118
    // 0x150C8854: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_15073118(rdram, ctx);
        goto after_2;
    // 0x150C8854: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x150C8858: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150C885C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x150C8860: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x150C8864: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150C8868: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x150C886C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150C8870: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C8874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8878: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x150C887C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150C8880: swc1        $f10, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f10.u32l;
    // 0x150C8884: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150C8888: swc1        $f16, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f16.u32l;
    // 0x150C888C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150C8890: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x150C8894: swc1        $f18, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->f18.u32l;
    // 0x150C8898: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C889C: lwc1        $f10, 0x4FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4FC);
    // 0x150C88A0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C88A4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C88A8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150C88AC: nop

    // 0x150C88B0: sh          $t7, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r15;
    // 0x150C88B4: sh          $t7, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r15;
    // 0x150C88B8: b           L_150C88C0
    // 0x150C88BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150C88C0;
    // 0x150C88BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150C88C0:
    // 0x150C88C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150C88C4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x150C88C8: jr          $ra
    // 0x150C88CC: nop

    return;
    return;
    // 0x150C88CC: nop

;}
RECOMP_FUNC void func_15040814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040814: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040818: jr          $ra
    // 0x1504081C: nop

    return;
    return;
    // 0x1504081C: nop

;}
RECOMP_FUNC void func_1519E570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E574: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1519E578: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1519E57C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1519E580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E584: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1519E588: bne         $a2, $zero, L_1519E5C4
    if (ctx->r6 != 0) {
        // 0x1519E58C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1519E5C4;
    }
    // 0x1519E58C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1519E590: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x1519E594: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1519E598: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1519E59C: beq         $t7, $t8, L_1519E5B4
    if (ctx->r15 == ctx->r24) {
        // 0x1519E5A0: nop
    
            goto L_1519E5B4;
    }
    // 0x1519E5A0: nop

    // 0x1519E5A4: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x1519E5A8: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x1519E5AC: bnel        $t9, $t0, L_1519E610
    if (ctx->r25 != ctx->r8) {
        // 0x1519E5B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1519E610;
    }
    goto skip_0;
    // 0x1519E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1519E5B4:
    // 0x1519E5B4: jal         0x1516972C
    // 0x1519E5B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1519E5B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x1519E5BC: b           L_1519E610
    // 0x1519E5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1519E610;
    // 0x1519E5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1519E5C4:
    // 0x1519E5C4: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1519E5C8: bne         $v0, $at, L_1519E60C
    if (ctx->r2 != ctx->r1) {
        // 0x1519E5CC: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_1519E60C;
    }
    // 0x1519E5CC: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x1519E5D0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1519E5D4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1519E5D8: bnel        $v1, $a0, L_1519E5F8
    if (ctx->r3 != ctx->r4) {
        // 0x1519E5DC: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_1519E5F8;
    }
    goto skip_1;
    // 0x1519E5DC: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x1519E5E0: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x1519E5E4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1519E5E8: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x1519E5EC: b           L_1519E60C
    // 0x1519E5F0: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
        goto L_1519E60C;
    // 0x1519E5F0: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
    // 0x1519E5F4: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_1519E5F8:
    // 0x1519E5F8: bnel        $t3, $a0, L_1519E610
    if (ctx->r11 != ctx->r4) {
        // 0x1519E5FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1519E610;
    }
    goto skip_2;
    // 0x1519E5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x1519E600: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x1519E604: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x1519E608: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
L_1519E60C:
    // 0x1519E60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1519E610:
    // 0x1519E610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E614: jr          $ra
    // 0x1519E618: nop

    return;
    return;
    // 0x1519E618: nop

;}
RECOMP_FUNC void func_151F8B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F8B4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151F8B50: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x151F8B54: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x151F8B58: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x151F8B5C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x151F8B60: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151F8B64: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x151F8B68: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x151F8B6C: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x151F8B70: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x151F8B74: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x151F8B78: sw          $gp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r28;
    // 0x151F8B7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151F8B80: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x151F8B84: sll         $s0, $a2, 2
    ctx->r16 = S32(ctx->r6 << 2);
    // 0x151F8B88: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151F8B8C: lw          $t1, 0xE20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XE20);
    // 0x151F8B90: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151F8B94: lw          $s5, 0xE24($s5)
    ctx->r21 = MEM_W(ctx->r21, 0XE24);
    // 0x151F8B98: add         $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x151F8B9C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x151F8BA0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x151F8BA4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x151F8BA8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x151F8BAC: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    // 0x151F8BB0: lw          $s4, 0x0($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X0);
    // 0x151F8BB4: srl         $t1, $t0, 3
    ctx->r9 = S32(U32(ctx->r8) >> 3);
    // 0x151F8BB8: add         $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x151F8BBC: sub         $t1, $s2, $t0
    ctx->r9 = SUB32(ctx->r18, ctx->r8);
    // 0x151F8BC0: blez        $t1, L_151F8CA0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151F8BC4: nop
    
            goto L_151F8CA0;
    }
    // 0x151F8BC4: nop

    // 0x151F8BC8: addi        $t1, $a3, -0x240
    ctx->r9 = ADD32(ctx->r7, -0X240);
    // 0x151F8BCC: bgez        $t1, L_151F8CA0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151F8BD0: nop
    
            goto L_151F8CA0;
    }
    // 0x151F8BD0: nop

L_151F8BD4:
    // 0x151F8BD4: jal         0x151F8870
    // 0x151F8BD8: nop

    func_151F8870(rdram, ctx);
        goto after_0;
    // 0x151F8BD8: nop

    after_0:
    // 0x151F8BDC: srl         $t3, $v0, 3
    ctx->r11 = S32(U32(ctx->r2) >> 3);
    // 0x151F8BE0: andi        $t3, $t3, 0x1
    ctx->r11 = ctx->r11 & 0X1;
    // 0x151F8BE4: srl         $t4, $v0, 2
    ctx->r12 = S32(U32(ctx->r2) >> 2);
    // 0x151F8BE8: andi        $t4, $t4, 0x1
    ctx->r12 = ctx->r12 & 0X1;
    // 0x151F8BEC: srl         $t5, $v0, 1
    ctx->r13 = S32(U32(ctx->r2) >> 1);
    // 0x151F8BF0: andi        $t5, $t5, 0x1
    ctx->r13 = ctx->r13 & 0X1;
    // 0x151F8BF4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151F8BF8: sh          $t3, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r11;
    // 0x151F8BFC: sh          $t4, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r12;
    // 0x151F8C00: sh          $t5, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r13;
    // 0x151F8C04: sh          $t6, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r14;
    // 0x151F8C08: jal         0x151F892C
    // 0x151F8C0C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    func_151F892C(rdram, ctx);
        goto after_1;
    // 0x151F8C0C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    after_1:
    // 0x151F8C10: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x151F8C14: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x151F8C18: beq         $t3, $zero, L_151F8C28
    if (ctx->r11 == 0) {
        // 0x151F8C1C: srlv        $t1, $v0, $s1
        ctx->r9 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
            goto L_151F8C28;
    }
    // 0x151F8C1C: srlv        $t1, $v0, $s1
    ctx->r9 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x151F8C20: and         $t3, $t3, $t1
    ctx->r11 = ctx->r11 & ctx->r9;
    // 0x151F8C24: addi        $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151F8C28:
    // 0x151F8C28: beq         $t4, $zero, L_151F8C3C
    if (ctx->r12 == 0) {
        // 0x151F8C2C: sb          $t3, 0x0($s4)
        MEM_B(0X0, ctx->r20) = ctx->r11;
            goto L_151F8C3C;
    }
    // 0x151F8C2C: sb          $t3, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r11;
    // 0x151F8C30: srlv        $t1, $v0, $s1
    ctx->r9 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x151F8C34: and         $t4, $t4, $t1
    ctx->r12 = ctx->r12 & ctx->r9;
    // 0x151F8C38: addi        $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151F8C3C:
    // 0x151F8C3C: beq         $t5, $zero, L_151F8C50
    if (ctx->r13 == 0) {
        // 0x151F8C40: sb          $t4, 0x1($s4)
        MEM_B(0X1, ctx->r20) = ctx->r12;
            goto L_151F8C50;
    }
    // 0x151F8C40: sb          $t4, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r12;
    // 0x151F8C44: srlv        $t1, $v0, $s1
    ctx->r9 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x151F8C48: and         $t5, $t5, $t1
    ctx->r13 = ctx->r13 & ctx->r9;
    // 0x151F8C4C: addi        $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151F8C50:
    // 0x151F8C50: beq         $t6, $zero, L_151F8C64
    if (ctx->r14 == 0) {
        // 0x151F8C54: sb          $t5, 0x2($s4)
        MEM_B(0X2, ctx->r20) = ctx->r13;
            goto L_151F8C64;
    }
    // 0x151F8C54: sb          $t5, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r13;
    // 0x151F8C58: srlv        $t1, $v0, $s1
    ctx->r9 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x151F8C5C: and         $t6, $t6, $t1
    ctx->r14 = ctx->r14 & ctx->r9;
    // 0x151F8C60: addi        $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_151F8C64:
    // 0x151F8C64: sb          $t6, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r14;
    // 0x151F8C68: addi        $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151F8C6C: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x151F8C70: sub         $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x151F8C74: bgez        $t1, L_151F8C80
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151F8C78: sub         $t0, $t0, $s1
        ctx->r8 = SUB32(ctx->r8, ctx->r17);
            goto L_151F8C80;
    }
    // 0x151F8C78: sub         $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x151F8C7C: addi        $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_151F8C80:
    // 0x151F8C80: addi        $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151F8C84: addi        $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x151F8C88: addi        $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x151F8C8C: addi        $t1, $a3, -0x240
    ctx->r9 = ADD32(ctx->r7, -0X240);
    // 0x151F8C90: bgez        $t1, L_151F8CA0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151F8C94: sub         $t1, $s2, $t0
        ctx->r9 = SUB32(ctx->r18, ctx->r8);
            goto L_151F8CA0;
    }
    // 0x151F8C94: sub         $t1, $s2, $t0
    ctx->r9 = SUB32(ctx->r18, ctx->r8);
    // 0x151F8C98: bgtz        $t1, L_151F8BD4
    if (SIGNED(ctx->r9) > 0) {
        // 0x151F8C9C: nop
    
            goto L_151F8BD4;
    }
    // 0x151F8C9C: nop

L_151F8CA0:
    // 0x151F8CA0: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x151F8CA4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x151F8CA8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x151F8CAC: sw          $s3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r19;
    // 0x151F8CB0: sw          $s4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r20;
    // 0x151F8CB4: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x151F8CB8: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x151F8CBC: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x151F8CC0: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x151F8CC4: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x151F8CC8: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x151F8CCC: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x151F8CD0: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8CD4: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x151F8CD8: lw          $fp, 0x24($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X24);
    // 0x151F8CDC: lw          $gp, 0x28($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X28);
    // 0x151F8CE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151F8CE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151F8CE8: jr          $ra
    // 0x151F8CEC: add         $v0, $zero, $a3
    ctx->r2 = ADD32(0, ctx->r7);
    return;
    return;
    // 0x151F8CEC: add         $v0, $zero, $a3
    ctx->r2 = ADD32(0, ctx->r7);
;}
RECOMP_FUNC void func_15047004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15047004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15047008: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1504700C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x15047010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15047014: lbu         $t6, 0x1C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1C);
    // 0x15047018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1504701C: addiu       $a3, $a1, 0x4
    ctx->r7 = ADD32(ctx->r5, 0X4);
    // 0x15047020: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x15047024: beq         $t7, $zero, L_1504709C
    if (ctx->r15 == 0) {
        // 0x15047028: addiu       $t8, $sp, 0x24
        ctx->r24 = ADD32(ctx->r29, 0X24);
            goto L_1504709C;
    }
    // 0x15047028: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x1504702C: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15047030: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15047034: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x15047038: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1504703C: jal         0x150A3FC4
    // 0x15047040: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_150A3FC4(rdram, ctx);
        goto after_0;
    // 0x15047040: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x15047044: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15047048: beq         $v0, $zero, L_1504709C
    if (ctx->r2 == 0) {
        // 0x1504704C: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_1504709C;
    }
    // 0x1504704C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15047050: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15047054: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15047058: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x1504705C: nop

    // 0x15047060: bc1f        L_15047094
    if (!c1cs) {
        // 0x15047064: nop
    
            goto L_15047094;
    }
    // 0x15047064: nop

    // 0x15047068: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1504706C: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x15047070: nop

    // 0x15047074: bc1f        L_15047094
    if (!c1cs) {
        // 0x15047078: nop
    
            goto L_15047094;
    }
    // 0x15047078: nop

    // 0x1504707C: lbu         $t9, 0x1C($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X1C);
    // 0x15047080: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x15047084: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x15047088: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x1504708C: b           L_150470A0
    // 0x15047090: sb          $t0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r8;
        goto L_150470A0;
    // 0x15047090: sb          $t0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r8;
L_15047094:
    // 0x15047094: b           L_150470A0
    // 0x15047098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150470A0;
    // 0x15047098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1504709C:
    // 0x1504709C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150470A0:
    // 0x150470A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150470A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150470A8: jr          $ra
    // 0x150470AC: nop

    return;
    return;
    // 0x150470AC: nop

;}
RECOMP_FUNC void func_15005EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005EA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15005EAC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15005EB0: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005EB4: sh          $t7, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r15;
    // 0x15005EB8: jal         0x15124B18
    // 0x15005EBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005EBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005EC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005EC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15005EC8: sw          $t8, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r24;
    // 0x15005ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005ED0: jr          $ra
    // 0x15005ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1512E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512E5F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1512E5F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1512E5F8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1512E5FC: addiu       $t1, $t1, -0x19E0
    ctx->r9 = ADD32(ctx->r9, -0X19E0);
    // 0x1512E600: lui         $ra, 0x700
    ctx->r31 = S32(0X700 << 16);
    // 0x1512E604: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1512E608: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x1512E60C: lui         $t5, 0xF510
    ctx->r13 = S32(0XF510 << 16);
    // 0x1512E610: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1512E614: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1512E618: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1512E61C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E620: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1512E624: lui         $t6, 0xEF20
    ctx->r14 = S32(0XEF20 << 16);
    // 0x1512E628: ori         $t6, $t6, 0x2CFF
    ctx->r14 = ctx->r14 | 0X2CFF;
    // 0x1512E62C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1512E630: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1512E634: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E638: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1512E63C: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x1512E640: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x1512E644: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1512E648: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x1512E64C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E650: lhu         $t9, 0x8BA($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8BA);
    // 0x1512E654: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1512E658: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E65C: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512E660: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1512E664: lw          $t9, -0x163C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X163C);
    // 0x1512E668: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1512E66C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E670: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1512E674: mflo        $t7
    ctx->r15 = lo;
    // 0x1512E678: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x1512E67C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x1512E680: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x1512E684: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x1512E688: sw          $ra, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r31;
    // 0x1512E68C: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x1512E690: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x1512E694: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x1512E698: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x1512E69C: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x1512E6A0: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x1512E6A4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E6A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x1512E6AC: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x1512E6B0: beql        $at, $zero, L_1512E6C4
    if (ctx->r1 == 0) {
        // 0x1512E6B4: addiu       $t0, $zero, 0x7FF
        ctx->r8 = ADD32(0, 0X7FF);
            goto L_1512E6C4;
    }
    goto skip_0;
    // 0x1512E6B4: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
    skip_0:
    // 0x1512E6B8: b           L_1512E6C4
    // 0x1512E6BC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_1512E6C4;
    // 0x1512E6BC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1512E6C0: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
L_1512E6C4:
    // 0x1512E6C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x1512E6C8: bgez        $v0, L_1512E6D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1512E6CC: sra         $t9, $v0, 3
        ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
            goto L_1512E6D8;
    }
    // 0x1512E6CC: sra         $t9, $v0, 3
    ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
    // 0x1512E6D0: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x1512E6D4: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_1512E6D8:
    // 0x1512E6D8: bgtz        $t9, L_1512E6E8
    if (SIGNED(ctx->r25) > 0) {
        // 0x1512E6DC: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1512E6E8;
    }
    // 0x1512E6DC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1512E6E0: b           L_1512E6EC
    // 0x1512E6E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_1512E6EC;
    // 0x1512E6E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_1512E6E8:
    // 0x1512E6E8: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_1512E6EC:
    // 0x1512E6EC: bgtz        $v0, L_1512E6FC
    if (SIGNED(ctx->r2) > 0) {
        // 0x1512E6F0: addiu       $t6, $t2, 0x7FF
        ctx->r14 = ADD32(ctx->r10, 0X7FF);
            goto L_1512E6FC;
    }
    // 0x1512E6F0: addiu       $t6, $t2, 0x7FF
    ctx->r14 = ADD32(ctx->r10, 0X7FF);
    // 0x1512E6F4: b           L_1512E700
    // 0x1512E6F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1512E700;
    // 0x1512E6F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1512E6FC:
    // 0x1512E6FC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1512E700:
    // 0x1512E700: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x1512E704: mflo        $t7
    ctx->r15 = lo;
    // 0x1512E708: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1512E70C: bne         $a3, $zero, L_1512E718
    if (ctx->r7 != 0) {
        // 0x1512E710: nop
    
            goto L_1512E718;
    }
    // 0x1512E710: nop

    // 0x1512E714: break       7
    do_break(353560340);
L_1512E718:
    // 0x1512E718: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1512E71C: bne         $a3, $at, L_1512E730
    if (ctx->r7 != ctx->r1) {
        // 0x1512E720: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1512E730;
    }
    // 0x1512E720: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1512E724: bne         $t6, $at, L_1512E730
    if (ctx->r14 != ctx->r1) {
        // 0x1512E728: nop
    
            goto L_1512E730;
    }
    // 0x1512E728: nop

    // 0x1512E72C: break       6
    do_break(353560364);
L_1512E730:
    // 0x1512E730: andi        $t6, $t0, 0xFFF
    ctx->r14 = ctx->r8 & 0XFFF;
    // 0x1512E734: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x1512E738: or          $t9, $t8, $ra
    ctx->r25 = ctx->r24 | ctx->r31;
    // 0x1512E73C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x1512E740: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x1512E744: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1512E748: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1512E74C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1512E750: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E754: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x1512E758: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1512E75C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1512E760: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x1512E764: addiu       $t7, $t9, 0x7
    ctx->r15 = ADD32(ctx->r25, 0X7);
    // 0x1512E768: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x1512E76C: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x1512E770: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x1512E774: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x1512E778: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1512E77C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E780: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1512E784: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x1512E788: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x1512E78C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x1512E790: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E794: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x1512E798: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x1512E79C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1512E7A0: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x1512E7A4: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x1512E7A8: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x1512E7AC: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x1512E7B0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1512E7B4: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x1512E7B8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1512E7BC: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x1512E7C0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x1512E7C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1512E7C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E7CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1512E7D0: lw          $t7, 0x8BC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X8BC);
    // 0x1512E7D4: lui         $t8, 0xED00
    ctx->r24 = S32(0XED00 << 16);
    // 0x1512E7D8: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x1512E7DC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1512E7E0: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x1512E7E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1512E7E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512E7EC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1512E7F0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E7F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1512E7F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512E7FC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E800: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1512E804: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E808: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1512E80C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E810: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1512E814: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1512E818: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1512E81C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1512E820: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1512E824: nop

    // 0x1512E828: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1512E82C: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x1512E830: ori         $t9, $t6, 0x4
    ctx->r25 = ctx->r14 | 0X4;
    // 0x1512E834: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1512E838: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x1512E83C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x1512E840: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1512E844: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1512E848: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x1512E84C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x1512E850: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x1512E854: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x1512E858: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1512E85C: lui         $t6, 0xE100
    ctx->r14 = S32(0XE100 << 16);
    // 0x1512E860: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x1512E864: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x1512E868: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x1512E86C: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x1512E870: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x1512E874: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x1512E878: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x1512E87C: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x1512E880: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x1512E884: jal         0x1501A680
    // 0x1512E888: nop

    func_1501A680(rdram, ctx);
        goto after_0;
    // 0x1512E888: nop

    after_0:
    // 0x1512E88C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x1512E890: lh          $a1, 0x2FA6($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X2FA6);
    // 0x1512E894: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1512E898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1512E89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1512E8A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1512E8A4: jal         0x1501A490
    // 0x1512E8A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_1;
    // 0x1512E8A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x1512E8AC: lui         $t8, 0xEF08
    ctx->r24 = S32(0XEF08 << 16);
    // 0x1512E8B0: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x1512E8B4: ori         $t6, $t6, 0x2230
    ctx->r14 = ctx->r14 | 0X2230;
    // 0x1512E8B8: ori         $t8, $t8, 0x2C3F
    ctx->r24 = ctx->r24 | 0X2C3F;
    // 0x1512E8BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1512E8C0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1512E8C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1512E8C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1512E8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1512E8D0: jr          $ra
    // 0x1512E8D4: nop

    return;
    return;
    // 0x1512E8D4: nop

;}
RECOMP_FUNC void func_15060F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060F28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15060F2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15060F30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15060F34: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15060F38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15060F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15060F40: jal         0x1514D310
    // 0x15060F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1514D310(rdram, ctx);
        goto after_0;
    // 0x15060F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x15060F48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15060F4C: jal         0x151695F0
    // 0x15060F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151695F0(rdram, ctx);
        goto after_1;
    // 0x15060F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x15060F54: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x15060F58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15060F5C: beq         $v0, $at, L_15060F80
    if (ctx->r2 == ctx->r1) {
        // 0x15060F60: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15060F80;
    }
    // 0x15060F60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15060F64: beql        $v0, $at, L_15060F84
    if (ctx->r2 == ctx->r1) {
        // 0x15060F68: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15060F84;
    }
    goto skip_0;
    // 0x15060F68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x15060F6C: jal         0x15084558
    // 0x15060F70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15084558(rdram, ctx);
        goto after_2;
    // 0x15060F70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x15060F74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15060F78: jal         0x150626EC
    // 0x15060F7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_150626EC(rdram, ctx);
        goto after_3;
    // 0x15060F7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_15060F80:
    // 0x15060F80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_15060F84:
    // 0x15060F84: bne         $s0, $at, L_15060FB8
    if (ctx->r16 != ctx->r1) {
        // 0x15060F88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15060FB8;
    }
    // 0x15060F88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15060F8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15060F90: jal         0x1504AF10
    // 0x15060F94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1504AF10(rdram, ctx);
        goto after_4;
    // 0x15060F94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x15060F98: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15060F9C: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x15060FA0: subu        $a0, $s1, $t6
    ctx->r4 = SUB32(ctx->r17, ctx->r14);
    // 0x15060FA4: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15060FA8: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x15060FAC: mflo        $a0
    ctx->r4 = lo;
    // 0x15060FB0: jal         0x1503E260
    // 0x15060FB4: nop

    func_1503E260(rdram, ctx);
        goto after_5;
    // 0x15060FB4: nop

    after_5:
L_15060FB8:
    // 0x15060FB8: lbu         $a0, 0x13F($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X13F);
    // 0x15060FBC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15060FC0: beq         $a0, $at, L_1506107C
    if (ctx->r4 == ctx->r1) {
        // 0x15060FC4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1506107C;
    }
    // 0x15060FC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15060FC8: beq         $s0, $at, L_15061070
    if (ctx->r16 == ctx->r1) {
        // 0x15060FCC: lui         $t4, 0x800D
        ctx->r12 = S32(0X800D << 16);
            goto L_15061070;
    }
    // 0x15060FCC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15060FD0: lw          $v0, 0x144($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X144);
    // 0x15060FD4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15060FD8: beq         $v0, $zero, L_15061058
    if (ctx->r2 == 0) {
        // 0x15060FDC: nop
    
            goto L_15061058;
    }
    // 0x15060FDC: nop

    // 0x15060FE0: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x15060FE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15060FE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15060FEC: andi        $t8, $a1, 0x20
    ctx->r24 = ctx->r5 & 0X20;
    // 0x15060FF0: beq         $t8, $zero, L_15061014
    if (ctx->r24 == 0) {
        // 0x15060FF4: andi        $t3, $a1, 0x1
        ctx->r11 = ctx->r5 & 0X1;
            goto L_15061014;
    }
    // 0x15060FF4: andi        $t3, $a1, 0x1
    ctx->r11 = ctx->r5 & 0X1;
    // 0x15060FF8: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x15060FFC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15061000: lw          $t0, 0x210C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X210C);
    // 0x15061004: lbu         $t1, 0x13F($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X13F);
    // 0x15061008: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1506100C: b           L_1506107C
    // 0x15061010: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
        goto L_1506107C;
    // 0x15061010: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
L_15061014:
    // 0x15061014: beq         $t3, $zero, L_15061030
    if (ctx->r11 == 0) {
        // 0x15061018: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_15061030;
    }
    // 0x15061018: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506101C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15061020: lw          $t4, 0x210C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X210C);
    // 0x15061024: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x15061028: b           L_1506107C
    // 0x1506102C: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
        goto L_1506107C;
    // 0x1506102C: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
L_15061030:
    // 0x15061030: sb          $t6, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r14;
    // 0x15061034: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15061038: lw          $t8, 0x210C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X210C);
    // 0x1506103C: lbu         $t7, 0x13F($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X13F);
    // 0x15061040: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15061044: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x15061048: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x1506104C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x15061050: b           L_15061080
    // 0x15061054: lw          $a0, 0x260($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X260);
        goto L_15061080;
    // 0x15061054: lw          $a0, 0x260($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X260);
L_15061058:
    // 0x15061058: lw          $t1, 0x210C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X210C);
    // 0x1506105C: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x15061060: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x15061064: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x15061068: b           L_1506107C
    // 0x1506106C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
        goto L_1506107C;
    // 0x1506106C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_15061070:
    // 0x15061070: lw          $t4, 0x210C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X210C);
    // 0x15061074: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x15061078: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
L_1506107C:
    // 0x1506107C: lw          $a0, 0x260($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X260);
L_15061080:
    // 0x15061080: beql        $a0, $zero, L_15061094
    if (ctx->r4 == 0) {
        // 0x15061084: lw          $v0, 0x264($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X264);
            goto L_15061094;
    }
    goto skip_1;
    // 0x15061084: lw          $v0, 0x264($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X264);
    skip_1:
    // 0x15061088: jal         0x10004074
    // 0x1506108C: nop

    func_10004074(rdram, ctx);
        goto after_6;
    // 0x1506108C: nop

    after_6:
    // 0x15061090: lw          $v0, 0x264($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X264);
L_15061094:
    // 0x15061094: beql        $v0, $zero, L_150610A8
    if (ctx->r2 == 0) {
        // 0x15061098: lw          $v0, 0x268($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X268);
            goto L_150610A8;
    }
    goto skip_2;
    // 0x15061098: lw          $v0, 0x268($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X268);
    skip_2:
    // 0x1506109C: jal         0x10004074
    // 0x150610A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x150610A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x150610A4: lw          $v0, 0x268($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X268);
L_150610A8:
    // 0x150610A8: beql        $v0, $zero, L_150610BC
    if (ctx->r2 == 0) {
        // 0x150610AC: lw          $v0, 0x26C($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X26C);
            goto L_150610BC;
    }
    goto skip_3;
    // 0x150610AC: lw          $v0, 0x26C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X26C);
    skip_3:
    // 0x150610B0: jal         0x10004074
    // 0x150610B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_8;
    // 0x150610B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x150610B8: lw          $v0, 0x26C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X26C);
L_150610BC:
    // 0x150610BC: beql        $v0, $zero, L_150610D0
    if (ctx->r2 == 0) {
        // 0x150610C0: lw          $a0, 0x1D8($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X1D8);
            goto L_150610D0;
    }
    goto skip_4;
    // 0x150610C0: lw          $a0, 0x1D8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1D8);
    skip_4:
    // 0x150610C4: jal         0x10004074
    // 0x150610C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_9;
    // 0x150610C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x150610CC: lw          $a0, 0x1D8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1D8);
L_150610D0:
    // 0x150610D0: beql        $a0, $zero, L_150610E4
    if (ctx->r4 == 0) {
        // 0x150610D4: lw          $a0, 0x2D4($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X2D4);
            goto L_150610E4;
    }
    goto skip_5;
    // 0x150610D4: lw          $a0, 0x2D4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2D4);
    skip_5:
    // 0x150610D8: jal         0x10004074
    // 0x150610DC: nop

    func_10004074(rdram, ctx);
        goto after_10;
    // 0x150610DC: nop

    after_10:
    // 0x150610E0: lw          $a0, 0x2D4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2D4);
L_150610E4:
    // 0x150610E4: beql        $a0, $zero, L_150610F8
    if (ctx->r4 == 0) {
        // 0x150610E8: lw          $t6, 0x304($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X304);
            goto L_150610F8;
    }
    goto skip_6;
    // 0x150610E8: lw          $t6, 0x304($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X304);
    skip_6:
    // 0x150610EC: jal         0x1516972C
    // 0x150610F0: nop

    func_1516972C(rdram, ctx);
        goto after_11;
    // 0x150610F0: nop

    after_11:
    // 0x150610F4: lw          $t6, 0x304($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X304);
L_150610F8:
    // 0x150610F8: beq         $t6, $zero, L_1506113C
    if (ctx->r14 == 0) {
        // 0x150610FC: lui         $t7, 0x8008
        ctx->r15 = S32(0X8008 << 16);
            goto L_1506113C;
    }
    // 0x150610FC: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15061100: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x15061104: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15061108: bltz        $t7, L_1506113C
    if (SIGNED(ctx->r15) < 0) {
        // 0x1506110C: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_1506113C;
    }
L_1506110C:
    // 0x1506110C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x15061110: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x15061114: lw          $a0, 0x304($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X304);
    // 0x15061118: jal         0x100043B4
    // 0x1506111C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_12;
    // 0x1506111C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x15061120: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15061124: lw          $t1, 0x2FA0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2FA0);
    // 0x15061128: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1506112C: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x15061130: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x15061134: beq         $at, $zero, L_1506110C
    if (ctx->r1 == 0) {
        // 0x15061138: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_1506110C;
    }
    // 0x15061138: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_1506113C:
    // 0x1506113C: lw          $v0, 0x314($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X314);
    // 0x15061140: beq         $v0, $zero, L_15061150
    if (ctx->r2 == 0) {
        // 0x15061144: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15061150;
    }
    // 0x15061144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15061148: jal         0x100043B4
    // 0x1506114C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_13;
    // 0x1506114C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
L_15061150:
    // 0x15061150: lw          $a0, 0x2D0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2D0);
    // 0x15061154: beql        $a0, $zero, L_15061168
    if (ctx->r4 == 0) {
        // 0x15061158: lw          $a0, 0x324($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X324);
            goto L_15061168;
    }
    goto skip_7;
    // 0x15061158: lw          $a0, 0x324($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X324);
    skip_7:
    // 0x1506115C: jal         0x10004074
    // 0x15061160: nop

    func_10004074(rdram, ctx);
        goto after_14;
    // 0x15061160: nop

    after_14:
    // 0x15061164: lw          $a0, 0x324($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X324);
L_15061168:
    // 0x15061168: beql        $a0, $zero, L_1506117C
    if (ctx->r4 == 0) {
        // 0x1506116C: lw          $v0, 0x31C($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X31C);
            goto L_1506117C;
    }
    goto skip_8;
    // 0x1506116C: lw          $v0, 0x31C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X31C);
    skip_8:
    // 0x15061170: jal         0x10004074
    // 0x15061174: nop

    func_10004074(rdram, ctx);
        goto after_15;
    // 0x15061174: nop

    after_15:
    // 0x15061178: lw          $v0, 0x31C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X31C);
L_1506117C:
    // 0x1506117C: beq         $v0, $zero, L_15061198
    if (ctx->r2 == 0) {
        // 0x15061180: nop
    
            goto L_15061198;
    }
    // 0x15061180: nop

    // 0x15061184: lw          $a0, 0x11C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X11C);
    // 0x15061188: beq         $a0, $zero, L_15061198
    if (ctx->r4 == 0) {
        // 0x1506118C: nop
    
            goto L_15061198;
    }
    // 0x1506118C: nop

    // 0x15061190: jal         0x10004074
    // 0x15061194: nop

    func_10004074(rdram, ctx);
        goto after_16;
    // 0x15061194: nop

    after_16:
L_15061198:
    // 0x15061198: jal         0x10010AA8
    // 0x1506119C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_10010AA8(rdram, ctx);
        goto after_17;
    // 0x1506119C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x150611A0: jal         0x150303E4
    // 0x150611A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150303E4(rdram, ctx);
        goto after_18;
    // 0x150611A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x150611A8: jal         0x15060D54
    // 0x150611AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15060D54(rdram, ctx);
        goto after_19;
    // 0x150611AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x150611B0: jal         0x15188AD0
    // 0x150611B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15188AD0(rdram, ctx);
        goto after_20;
    // 0x150611B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x150611B8: lw          $v0, 0x31C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X31C);
    // 0x150611BC: beq         $v0, $zero, L_150611CC
    if (ctx->r2 == 0) {
        // 0x150611C0: nop
    
            goto L_150611CC;
    }
    // 0x150611C0: nop

    // 0x150611C4: jal         0x10004074
    // 0x150611C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_21;
    // 0x150611C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
L_150611CC:
    // 0x150611CC: jal         0x1505F188
    // 0x150611D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1505F188(rdram, ctx);
        goto after_22;
    // 0x150611D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x150611D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150611D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150611DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150611E0: jr          $ra
    // 0x150611E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150611E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15169968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516996C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15169970: jal         0x15169900
    // 0x15169974: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_15169900(rdram, ctx);
        goto after_0;
    // 0x15169974: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_0:
    // 0x15169978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516997C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15169980: jr          $ra
    // 0x15169984: nop

    return;
    return;
    // 0x15169984: nop

;}
RECOMP_FUNC void func_15102D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15102D54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15102D58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15102D5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15102D60: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15102D64: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15102D68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15102D6C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x15102D70: addiu       $a2, $t6, 0x110
    ctx->r6 = ADD32(ctx->r14, 0X110);
    // 0x15102D74: addiu       $a3, $t6, 0x114
    ctx->r7 = ADD32(ctx->r14, 0X114);
    // 0x15102D78: jal         0x15169850
    // 0x15102D7C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x15102D7C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15102D80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15102D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15102D88: jr          $ra
    // 0x15102D8C: nop

    return;
    return;
    // 0x15102D8C: nop

;}
RECOMP_FUNC void func_150ED638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150ED638: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150ED63C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x150ED640: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x150ED644: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150ED648: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150ED64C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150ED650: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150ED654: slti        $at, $s1, -0x2D
    ctx->r1 = SIGNED(ctx->r17) < -0X2D ? 1 : 0;
    // 0x150ED658: beq         $at, $zero, L_150ED668
    if (ctx->r1 == 0) {
        // 0x150ED65C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_150ED668;
    }
    // 0x150ED65C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150ED660: b           L_150ED680
    // 0x150ED664: addiu       $s1, $zero, -0x2D
    ctx->r17 = ADD32(0, -0X2D);
        goto L_150ED680;
    // 0x150ED664: addiu       $s1, $zero, -0x2D
    ctx->r17 = ADD32(0, -0X2D);
L_150ED668:
    // 0x150ED668: slti        $at, $s1, 0x2E
    ctx->r1 = SIGNED(ctx->r17) < 0X2E ? 1 : 0;
    // 0x150ED66C: bne         $at, $zero, L_150ED67C
    if (ctx->r1 != 0) {
        // 0x150ED670: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_150ED67C;
    }
    // 0x150ED670: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150ED674: b           L_150ED67C
    // 0x150ED678: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
        goto L_150ED67C;
    // 0x150ED678: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_150ED67C:
    // 0x150ED67C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_150ED680:
    // 0x150ED680: slti        $at, $s2, -0x2D
    ctx->r1 = SIGNED(ctx->r18) < -0X2D ? 1 : 0;
    // 0x150ED684: beq         $at, $zero, L_150ED694
    if (ctx->r1 == 0) {
        // 0x150ED688: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150ED694;
    }
    // 0x150ED688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150ED68C: b           L_150ED6AC
    // 0x150ED690: addiu       $s2, $zero, -0x2D
    ctx->r18 = ADD32(0, -0X2D);
        goto L_150ED6AC;
    // 0x150ED690: addiu       $s2, $zero, -0x2D
    ctx->r18 = ADD32(0, -0X2D);
L_150ED694:
    // 0x150ED694: slti        $at, $s2, 0x2E
    ctx->r1 = SIGNED(ctx->r18) < 0X2E ? 1 : 0;
    // 0x150ED698: bne         $at, $zero, L_150ED6A8
    if (ctx->r1 != 0) {
        // 0x150ED69C: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_150ED6A8;
    }
    // 0x150ED69C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150ED6A0: b           L_150ED6A8
    // 0x150ED6A4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
        goto L_150ED6A8;
    // 0x150ED6A4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_150ED6A8:
    // 0x150ED6A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_150ED6AC:
    // 0x150ED6AC: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x150ED6B0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150ED6B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x150ED6B8: bne         $t6, $at, L_150ED6C8
    if (ctx->r14 != ctx->r1) {
        // 0x150ED6BC: addiu       $t7, $zero, 0x800
        ctx->r15 = ADD32(0, 0X800);
            goto L_150ED6C8;
    }
    // 0x150ED6BC: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x150ED6C0: b           L_150ED6D8
    // 0x150ED6C4: addiu       $s0, $zero, 0x7C
    ctx->r16 = ADD32(0, 0X7C);
        goto L_150ED6D8;
    // 0x150ED6C4: addiu       $s0, $zero, 0x7C
    ctx->r16 = ADD32(0, 0X7C);
L_150ED6C8:
    // 0x150ED6C8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150ED6CC: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x150ED6D0: addiu       $s0, $zero, 0x1C
    ctx->r16 = ADD32(0, 0X1C);
    // 0x150ED6D4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_150ED6D8:
    // 0x150ED6D8: negu        $t8, $s2
    ctx->r24 = SUB32(0, ctx->r18);
    // 0x150ED6DC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x150ED6E0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x150ED6E4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150ED6E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150ED6EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150ED6F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150ED6F4: jal         0x15062FC0
    // 0x150ED6F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_15062FC0(rdram, ctx);
        goto after_0;
    // 0x150ED6F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x150ED6FC: negu        $t1, $s1
    ctx->r9 = SUB32(0, ctx->r17);
    // 0x150ED700: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x150ED704: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x150ED708: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x150ED70C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x150ED710: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150ED714: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150ED718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150ED71C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150ED720: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x150ED724: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150ED728: jal         0x15062FC0
    // 0x150ED72C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_15062FC0(rdram, ctx);
        goto after_1;
    // 0x150ED72C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x150ED730: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150ED734: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150ED738: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150ED73C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150ED740: jr          $ra
    // 0x150ED744: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x150ED744: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15040808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040808: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1504080C: jr          $ra
    // 0x15040810: nop

    return;
    return;
    // 0x15040810: nop

;}
RECOMP_FUNC void func_15048F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048F58: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15048F5C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15048F60: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15048F64: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15048F68: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15048F6C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15048F70: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15048F74: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x15048F78: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15048F7C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15048F80: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15048F84: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x15048F88: jr          $ra
    // 0x15048F8C: nop

    return;
    return;
    // 0x15048F8C: nop

;}
RECOMP_FUNC void func_15121490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15121490: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15121494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15121498: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1512149C: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x151214A0: sb          $zero, 0x198($t6)
    MEM_B(0X198, ctx->r14) = 0;
    // 0x151214A4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x151214A8: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x151214AC: beql        $t8, $zero, L_151216E8
    if (ctx->r24 == 0) {
        // 0x151214B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151216E8;
    }
    goto skip_0;
    // 0x151214B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x151214B4: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x151214B8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151214BC: lbu         $v0, 0x78($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X78);
    // 0x151214C0: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214C4: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15121500;
    }
    // 0x151214C4: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151214C8: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214CC: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_15121500;
    }
    // 0x151214CC: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x151214D0: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214D4: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_15121500;
    }
    // 0x151214D4: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x151214D8: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214DC: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15121500;
    }
    // 0x151214DC: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x151214E0: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214E4: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_15121500;
    }
    // 0x151214E4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x151214E8: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214EC: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_15121500;
    }
    // 0x151214EC: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x151214F0: beq         $v0, $at, L_15121500
    if (ctx->r2 == ctx->r1) {
        // 0x151214F4: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_15121500;
    }
    // 0x151214F4: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x151214F8: bnel        $v0, $at, L_151216E8
    if (ctx->r2 != ctx->r1) {
        // 0x151214FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151216E8;
    }
    goto skip_1;
    // 0x151214FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_15121500:
    // 0x15121500: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15121504: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x15121508: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1512150C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15121510: lh          $t9, 0x114($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X114);
    // 0x15121514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121518: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512151C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15121520: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15121524: lwc1        $f10, 0x3408($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3408);
    // 0x15121528: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1512152C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15121530: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15121534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121538: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1512153C: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x15121540: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x15121544: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15121548: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x1512154C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15121550: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x15121554: lwc1        $f18, 0x1C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15121558: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x1512155C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15121560: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15121564: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x15121568: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x1512156C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x15121570: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15121574: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x15121578: jal         0x15047D60
    // 0x1512157C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1512157C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x15121580: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15121584: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15121588: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1512158C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15121590: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15121594: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15121598: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x1512159C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151215A0: jal         0x15047C00
    // 0x151215A4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x151215A4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x151215A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151215AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151215B0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151215B4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x151215B8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151215BC: addiu       $t5, $sp, 0x38
    ctx->r13 = ADD32(ctx->r29, 0X38);
    // 0x151215C0: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x151215C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151215C8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151215CC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151215D0: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x151215D4: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151215D8: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151215DC: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151215E0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x151215E4: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151215E8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151215EC: sw          $at, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->r1;
    // 0x151215F0: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x151215F4: sw          $t8, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->r24;
    // 0x151215F8: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151215FC: sw          $at, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r1;
    // 0x15121600: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15121604: sw          $at, 0x148($s0)
    MEM_W(0X148, ctx->r16) = ctx->r1;
    // 0x15121608: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x1512160C: sw          $t0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->r8;
    // 0x15121610: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x15121614: sb          $t1, 0x198($s0)
    MEM_B(0X198, ctx->r16) = ctx->r9;
    // 0x15121618: sw          $at, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->r1;
    // 0x1512161C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15121620: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15121624: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121628: lwc1        $f16, 0x340C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X340C);
    // 0x1512162C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x15121630: lwc1        $f8, 0x170($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X170);
    // 0x15121634: mul.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15121638: jal         0x15047C00
    // 0x1512163C: nop

    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x1512163C: nop

    after_2:
    // 0x15121640: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15121644: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121648: lwc1        $f10, 0x3410($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3410);
    // 0x1512164C: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15121650: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x15121654: lwc1        $f6, 0x170($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X170);
    // 0x15121658: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1512165C: jal         0x15047D60
    // 0x15121660: nop

    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x15121660: nop

    after_3:
    // 0x15121664: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15121668: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1512166C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121670: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15121674: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15121678: lwc1        $f6, 0x3414($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3414);
    // 0x1512167C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x15121680: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x15121684: mul.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15121688: jal         0x15047C00
    // 0x1512168C: nop

    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x1512168C: nop

    after_4:
    // 0x15121690: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15121694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15121698: lwc1        $f4, 0x3418($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3418);
    // 0x1512169C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151216A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x151216A4: lwc1        $f16, 0x16C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x151216A8: mul.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x151216AC: jal         0x15047D60
    // 0x151216B0: nop

    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x151216B0: nop

    after_5:
    // 0x151216B4: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151216B8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151216BC: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x151216C0: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151216C4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x151216C8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x151216CC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151216D0: sw          $at, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->r1;
    // 0x151216D4: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x151216D8: sw          $t5, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->r13;
    // 0x151216DC: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151216E0: sw          $at, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->r1;
    // 0x151216E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151216E8:
    // 0x151216E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151216EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151216F0: jr          $ra
    // 0x151216F4: nop

    return;
    return;
    // 0x151216F4: nop

;}
RECOMP_FUNC void func_10021C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10021C40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10021C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10021C48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10021C4C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10021C50: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10021C54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10021C58: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x10021C5C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x10021C60: beq         $s0, $at, L_10021DD4
    if (ctx->r16 == ctx->r1) {
        // 0x10021C64: nop
    
            goto L_10021DD4;
    }
    // 0x10021C64: nop

    // 0x10021C68: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x10021C6C: beq         $s0, $at, L_10021C7C
    if (ctx->r16 == ctx->r1) {
        // 0x10021C70: nop
    
            goto L_10021C7C;
    }
    // 0x10021C70: nop

    // 0x10021C74: b           L_10021E20
    // 0x10021C78: nop

        goto L_10021E20;
    // 0x10021C78: nop

L_10021C7C:
    // 0x10021C7C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10021C80: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10021C84: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x10021C88: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10021C8C: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x10021C90: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10021C94: sw          $t0, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r8;
    // 0x10021C98: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10021C9C: sw          $zero, 0x38($t1)
    MEM_W(0X38, ctx->r9) = 0;
    // 0x10021CA0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021CA4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x10021CA8: lw          $t3, 0x28($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X28);
    // 0x10021CAC: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x10021CB0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x10021CB4: mflo        $t5
    ctx->r13 = lo;
    // 0x10021CB8: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x10021CBC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x10021CC0: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x10021CC4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10021CC8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x10021CCC: ori         $at, $at, 0x3
    ctx->r1 = ctx->r1 | 0X3;
    // 0x10021CD0: lw          $t9, 0x28($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X28);
    // 0x10021CD4: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x10021CD8: and         $t8, $t0, $at
    ctx->r24 = ctx->r8 & ctx->r1;
    // 0x10021CDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x10021CE0: beq         $t8, $at, L_10021D14
    if (ctx->r24 == ctx->r1) {
        // 0x10021CE4: nop
    
            goto L_10021D14;
    }
    // 0x10021CE4: nop

    // 0x10021CE8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10021CEC: sw          $zero, 0x24($t1)
    MEM_W(0X24, ctx->r9) = 0;
    // 0x10021CF0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021CF4: lw          $s0, 0x24($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X24);
    // 0x10021CF8: sw          $s0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r16;
    // 0x10021CFC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10021D00: sw          $s0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->r16;
    // 0x10021D04: b           L_10021E28
    // 0x10021D08: nop

        goto L_10021E28;
    // 0x10021D08: nop

    // 0x10021D0C: b           L_10021D3C
    // 0x10021D10: nop

        goto L_10021D3C;
    // 0x10021D10: nop

L_10021D14:
    // 0x10021D14: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x10021D18: lw          $t6, 0x28($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X28);
    // 0x10021D1C: lw          $t3, 0x10($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X10);
    // 0x10021D20: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x10021D24: lw          $t0, 0x4($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X4);
    // 0x10021D28: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x10021D2C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10021D30: mflo        $t8
    ctx->r24 = lo;
    // 0x10021D34: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x10021D38: sw          $t1, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r9;
L_10021D3C:
    // 0x10021D3C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021D40: lw          $t4, 0x28($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X28);
    // 0x10021D44: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x10021D48: beq         $t6, $zero, L_10021DB0
    if (ctx->r14 == 0) {
        // 0x10021D4C: nop
    
            goto L_10021DB0;
    }
    // 0x10021D4C: nop

    // 0x10021D50: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10021D54: lw          $t3, 0x28($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X28);
    // 0x10021D58: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    // 0x10021D5C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10021D60: sw          $t0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r8;
    // 0x10021D64: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10021D68: lw          $t1, 0x28($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X28);
    // 0x10021D6C: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x10021D70: lw          $t2, 0x4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X4);
    // 0x10021D74: sw          $t2, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->r10;
    // 0x10021D78: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10021D7C: lw          $t6, 0x28($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X28);
    // 0x10021D80: lw          $t3, 0xC($t6)
    ctx->r11 = MEM_W(ctx->r14, 0XC);
    // 0x10021D84: lw          $t9, 0x8($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X8);
    // 0x10021D88: sw          $t9, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r25;
    // 0x10021D8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x10021D90: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x10021D94: lw          $t7, 0x28($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X28);
    // 0x10021D98: lw          $a1, 0x18($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18);
    // 0x10021D9C: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x10021DA0: jal         0x10023A10
    // 0x10021DA4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x10021DA4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x10021DA8: b           L_10021DCC
    // 0x10021DAC: nop

        goto L_10021DCC;
    // 0x10021DAC: nop

L_10021DB0:
    // 0x10021DB0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10021DB4: sw          $zero, 0x24($t1)
    MEM_W(0X24, ctx->r9) = 0;
    // 0x10021DB8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x10021DBC: lw          $s0, 0x24($t5)
    ctx->r16 = MEM_W(ctx->r13, 0X24);
    // 0x10021DC0: sw          $s0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r16;
    // 0x10021DC4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021DC8: sw          $s0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r16;
L_10021DCC:
    // 0x10021DCC: b           L_10021E28
    // 0x10021DD0: nop

        goto L_10021E28;
    // 0x10021DD0: nop

L_10021DD4:
    // 0x10021DD4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10021DD8: sw          $zero, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = 0;
    // 0x10021DDC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x10021DE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10021DE4: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    // 0x10021DE8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10021DEC: sw          $zero, 0x38($t9)
    MEM_W(0X38, ctx->r25) = 0;
    // 0x10021DF0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10021DF4: lw          $t7, 0x28($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X28);
    // 0x10021DF8: beq         $t7, $zero, L_10021E18
    if (ctx->r15 == 0) {
        // 0x10021DFC: nop
    
            goto L_10021E18;
    }
    // 0x10021DFC: nop

    // 0x10021E00: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x10021E04: lw          $t1, 0x28($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X28);
    // 0x10021E08: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x10021E0C: sw          $t5, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r13;
    // 0x10021E10: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10021E14: sw          $zero, 0x24($t2)
    MEM_W(0X24, ctx->r10) = 0;
L_10021E18:
    // 0x10021E18: b           L_10021E28
    // 0x10021E1C: nop

        goto L_10021E28;
    // 0x10021E1C: nop

L_10021E20:
    // 0x10021E20: b           L_10021E28
    // 0x10021E24: nop

        goto L_10021E28;
    // 0x10021E24: nop

L_10021E28:
    // 0x10021E28: b           L_10021E38
    // 0x10021E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10021E38;
    // 0x10021E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x10021E30: b           L_10021E38
    // 0x10021E34: nop

        goto L_10021E38;
    // 0x10021E34: nop

L_10021E38:
    // 0x10021E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10021E3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10021E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10021E44: jr          $ra
    // 0x10021E48: nop

    return;
    return;
    // 0x10021E48: nop

;}
RECOMP_FUNC void func_15105848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15105848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1510584C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15105850: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15105854: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15105858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510585C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15105860: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15105864: bne         $a2, $at, L_1510588C
    if (ctx->r6 != ctx->r1) {
        // 0x15105868: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1510588C;
    }
    // 0x15105868: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1510586C: jal         0x151058B4
    // 0x15105870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151058B4(rdram, ctx);
        goto after_0;
    // 0x15105870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15105874: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15105878: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x1510587C: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x15105880: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x15105884: b           L_151058A4
    // 0x15105888: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
        goto L_151058A4;
    // 0x15105888: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
L_1510588C:
    // 0x1510588C: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x15105890: bne         $v0, $at, L_151058A4
    if (ctx->r2 != ctx->r1) {
        // 0x15105894: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_151058A4;
    }
    // 0x15105894: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x15105898: lbu         $t9, 0xC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XC);
    // 0x1510589C: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x151058A0: sb          $t0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r8;
L_151058A4:
    // 0x151058A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151058A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151058AC: jr          $ra
    // 0x151058B0: nop

    return;
    return;
    // 0x151058B0: nop

;}

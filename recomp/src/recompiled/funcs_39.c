#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150D227C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D227C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D2280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D2284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D2288: jal         0x150D22D4
    // 0x150D228C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D22D4(rdram, ctx);
        goto after_0;
    // 0x150D228C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D2290: jal         0x1514933C
    // 0x150D2294: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150D2294: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D2298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D229C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D22A0: jr          $ra
    // 0x150D22A4: nop

    return;
    return;
    // 0x150D22A4: nop

;}
RECOMP_FUNC void func_1506EDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EDC8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506EDCC: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506EDD0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506EDD4: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x1506EDD8: lw          $t6, 0xF4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XF4);
    // 0x1506EDDC: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x1506EDE0: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1506EDE4: sw          $t9, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r25;
    // 0x1506EDE8: jr          $ra
    // 0x1506EDEC: nop

    return;
    return;
    // 0x1506EDEC: nop

;}
RECOMP_FUNC void func_150C6870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C6874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C6878: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C687C: lw          $t6, 0x70($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X70);
    // 0x150C6880: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x150C6884: beq         $t6, $zero, L_150C68A4
    if (ctx->r14 == 0) {
        // 0x150C6888: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_150C68A4;
    }
    // 0x150C6888: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150C688C: lw          $v0, 0x70($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X70);
    // 0x150C6890: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C6894: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C6898: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x150C689C: b           L_150C68B8
    // 0x150C68A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C68B8;
    // 0x150C68A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C68A4:
    // 0x150C68A4: jal         0x150C68C4
    // 0x150C68A8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_150C68C4(rdram, ctx);
        goto after_0;
    // 0x150C68A8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x150C68AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x150C68B0: sw          $v0, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->r2;
    // 0x150C68B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C68B8:
    // 0x150C68B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C68BC: jr          $ra
    // 0x150C68C0: nop

    return;
    return;
    // 0x150C68C0: nop

;}
RECOMP_FUNC void func_1518E66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E66C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1518E670: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1518E674: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518E678: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1518E67C: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x1518E680: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x1518E684: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1518E688: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518E68C: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x1518E690: addiu       $t8, $t8, 0x7460
    ctx->r24 = ADD32(ctx->r24, 0X7460);
    // 0x1518E694: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1518E698: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518E69C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1518E6A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1518E6A4: jal         0x1518D1C0
    // 0x1518E6A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1518D1C0(rdram, ctx);
        goto after_0;
    // 0x1518E6A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x1518E6AC: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x1518E6B0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1518E6B4: sh          $t9, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r25;
    // 0x1518E6B8: sb          $t0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r8;
    // 0x1518E6BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1518E6C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1518E6C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1518E6C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1518E6CC: jr          $ra
    // 0x1518E6D0: nop

    return;
    return;
    // 0x1518E6D0: nop

;}
RECOMP_FUNC void func_151AF6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF6D4: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x151AF6D8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151AF6DC: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x151AF6E0: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x151AF6E4: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x151AF6E8: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x151AF6EC: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x151AF6F0: beql        $t6, $zero, L_151AFBC8
    if (ctx->r14 == 0) {
        // 0x151AF6F4: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151AFBC8;
    }
    goto skip_0;
    // 0x151AF6F4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x151AF6F8: lw          $t8, 0x1D4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D4);
    // 0x151AF6FC: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x151AF700: lw          $a1, 0x130($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X130);
    // 0x151AF704: beq         $t8, $zero, L_151AFBC4
    if (ctx->r24 == 0) {
        // 0x151AF708: addiu       $a2, $sp, 0x100
        ctx->r6 = ADD32(ctx->r29, 0X100);
            goto L_151AFBC4;
    }
    // 0x151AF708: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x151AF70C: jal         0x151AF5C0
    // 0x151AF710: lbu         $a3, 0x137($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X137);
    func_151AF5C0(rdram, ctx);
        goto after_0;
    // 0x151AF710: lbu         $a3, 0x137($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X137);
    after_0:
    // 0x151AF714: beq         $v0, $zero, L_151AFBC4
    if (ctx->r2 == 0) {
        // 0x151AF718: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_151AFBC4;
    }
    // 0x151AF718: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151AF71C: lw          $t9, -0x1610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1610);
    // 0x151AF720: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x151AF724: bnel        $t9, $at, L_151AF900
    if (ctx->r25 != ctx->r1) {
        // 0x151AF728: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_151AF900;
    }
    goto skip_1;
    // 0x151AF728: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    skip_1:
    // 0x151AF72C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151AF730: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    // 0x151AF734: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    // 0x151AF738: jal         0x150CCD90
    // 0x151AF73C: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    func_150CCD90(rdram, ctx);
        goto after_1;
    // 0x151AF73C: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    after_1:
    // 0x151AF740: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x151AF744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151AF748: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x151AF74C: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x151AF750: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151AF754: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x151AF758: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x151AF75C: nop

    // 0x151AF760: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x151AF764: beql        $a1, $zero, L_151AF7B4
    if (ctx->r5 == 0) {
        // 0x151AF768: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_151AF7B4;
    }
    goto skip_2;
    // 0x151AF768: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x151AF76C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AF770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151AF774: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151AF778: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x151AF77C: nop

    // 0x151AF780: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151AF784: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x151AF788: nop

    // 0x151AF78C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x151AF790: bne         $a1, $zero, L_151AF7A8
    if (ctx->r5 != 0) {
        // 0x151AF794: nop
    
            goto L_151AF7A8;
    }
    // 0x151AF794: nop

    // 0x151AF798: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x151AF79C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151AF7A0: b           L_151AF7C0
    // 0x151AF7A4: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_151AF7C0;
    // 0x151AF7A4: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_151AF7A8:
    // 0x151AF7A8: b           L_151AF7C0
    // 0x151AF7AC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_151AF7C0;
    // 0x151AF7AC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151AF7B0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_151AF7B4:
    // 0x151AF7B4: nop

    // 0x151AF7B8: bltz        $a1, L_151AF7A8
    if (SIGNED(ctx->r5) < 0) {
        // 0x151AF7BC: nop
    
            goto L_151AF7A8;
    }
    // 0x151AF7BC: nop

L_151AF7C0:
    // 0x151AF7C0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x151AF7C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151AF7C8: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x151AF7CC: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x151AF7D0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x151AF7D4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x151AF7D8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x151AF7DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151AF7E0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151AF7E4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x151AF7E8: nop

    // 0x151AF7EC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x151AF7F0: beql        $a2, $zero, L_151AF840
    if (ctx->r6 == 0) {
        // 0x151AF7F4: mfc1        $a2, $f10
        ctx->r6 = (int32_t)ctx->f10.u32l;
            goto L_151AF840;
    }
    goto skip_3;
    // 0x151AF7F4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x151AF7F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AF7FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151AF800: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AF804: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x151AF808: nop

    // 0x151AF80C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151AF810: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x151AF814: nop

    // 0x151AF818: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x151AF81C: bne         $a2, $zero, L_151AF834
    if (ctx->r6 != 0) {
        // 0x151AF820: nop
    
            goto L_151AF834;
    }
    // 0x151AF820: nop

    // 0x151AF824: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151AF828: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151AF82C: b           L_151AF84C
    // 0x151AF830: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_151AF84C;
    // 0x151AF830: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_151AF834:
    // 0x151AF834: b           L_151AF84C
    // 0x151AF838: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_151AF84C;
    // 0x151AF838: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151AF83C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
L_151AF840:
    // 0x151AF840: nop

    // 0x151AF844: bltz        $a2, L_151AF834
    if (SIGNED(ctx->r6) < 0) {
        // 0x151AF848: nop
    
            goto L_151AF834;
    }
    // 0x151AF848: nop

L_151AF84C:
    // 0x151AF84C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x151AF850: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151AF854: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151AF858: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x151AF85C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x151AF860: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x151AF864: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x151AF868: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151AF86C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x151AF870: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x151AF874: nop

    // 0x151AF878: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x151AF87C: beql        $a3, $zero, L_151AF8E4
    if (ctx->r7 == 0) {
        // 0x151AF880: mfc1        $a3, $f18
        ctx->r7 = (int32_t)ctx->f18.u32l;
            goto L_151AF8E4;
    }
    goto skip_4;
    // 0x151AF880: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x151AF884: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151AF888: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151AF88C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151AF890: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x151AF894: nop

    // 0x151AF898: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151AF89C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x151AF8A0: nop

    // 0x151AF8A4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x151AF8A8: bnel        $a3, $zero, L_151AF8D0
    if (ctx->r7 != 0) {
        // 0x151AF8AC: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_151AF8D0;
    }
    goto skip_5;
    // 0x151AF8AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    skip_5:
    // 0x151AF8B0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151AF8B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151AF8B8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151AF8BC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
    // 0x151AF8C0: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x151AF8C4: b           L_151AF908
    // 0x151AF8C8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
        goto L_151AF908;
    // 0x151AF8C8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
L_151AF8CC:
    // 0x151AF8CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_151AF8D0:
    // 0x151AF8D0: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x151AF8D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151AF8D8: b           L_151AF908
    // 0x151AF8DC: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
        goto L_151AF908;
    // 0x151AF8DC: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x151AF8E0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
L_151AF8E4:
    // 0x151AF8E4: nop

    // 0x151AF8E8: bltz        $a3, L_151AF8CC
    if (SIGNED(ctx->r7) < 0) {
        // 0x151AF8EC: andi        $t5, $a3, 0xFF
        ctx->r13 = ctx->r7 & 0XFF;
            goto L_151AF8CC;
    }
    // 0x151AF8EC: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x151AF8F0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151AF8F4: b           L_151AF908
    // 0x151AF8F8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
        goto L_151AF908;
    // 0x151AF8F8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x151AF8FC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_151AF900:
    // 0x151AF900: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151AF904: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_151AF908:
    // 0x151AF908: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x151AF90C: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x151AF910: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x151AF914: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x151AF918: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x151AF91C: addiu       $t1, $zero, 0x2502
    ctx->r9 = ADD32(0, 0X2502);
    // 0x151AF920: sh          $a1, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r5;
    // 0x151AF924: sh          $a2, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r6;
    // 0x151AF928: sh          $a3, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r7;
    // 0x151AF92C: sh          $t6, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r14;
    // 0x151AF930: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    // 0x151AF934: sh          $a1, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r5;
    // 0x151AF938: sh          $a2, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r6;
    // 0x151AF93C: sh          $a3, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r7;
    // 0x151AF940: sh          $t7, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r15;
    // 0x151AF944: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x151AF948: sh          $a1, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r5;
    // 0x151AF94C: sh          $a2, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r6;
    // 0x151AF950: sh          $a3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r7;
    // 0x151AF954: sh          $t8, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r24;
    // 0x151AF958: sh          $zero, 0x80($sp)
    MEM_H(0X80, ctx->r29) = 0;
    // 0x151AF95C: sh          $a1, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r5;
    // 0x151AF960: sh          $a2, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r6;
    // 0x151AF964: sh          $a3, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r7;
    // 0x151AF968: sh          $t9, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r25;
    // 0x151AF96C: sh          $zero, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = 0;
    // 0x151AF970: sb          $t0, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r8;
    // 0x151AF974: jal         0x150ADA20
    // 0x151AF978: sh          $t1, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151AF978: sh          $t1, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r9;
    after_2:
    // 0x151AF97C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x151AF980: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AF984: mfhi        $t2
    ctx->r10 = hi;
    // 0x151AF988: addiu       $t3, $t2, 0x58
    ctx->r11 = ADD32(ctx->r10, 0X58);
    // 0x151AF98C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151AF990: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151AF994: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151AF998: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151AF99C: sh          $t3, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r11;
    // 0x151AF9A0: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151AF9A4: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x151AF9A8: sb          $t4, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r12;
    // 0x151AF9AC: sb          $t5, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r13;
    // 0x151AF9B0: sb          $t6, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r14;
    // 0x151AF9B4: jal         0x150ADA68
    // 0x151AF9B8: sb          $t7, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151AF9B8: sb          $t7, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r15;
    after_3:
    // 0x151AF9BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151AF9C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151AF9C4: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x151AF9C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AF9CC: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x151AF9D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AF9D4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AF9D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF9DC: lwc1        $f16, -0x5EF8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5EF8);
    // 0x151AF9E0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151AF9E4: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151AF9E8: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x151AF9EC: lui         $t8, 0x401C
    ctx->r24 = S32(0X401C << 16);
    // 0x151AF9F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AF9F4: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151AF9F8: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x151AF9FC: sw          $t8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r24;
    // 0x151AFA00: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AFA04: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x151AFA08: swc1        $f2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f2.u32l;
    // 0x151AFA0C: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x151AFA10: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x151AFA14: swc1        $f14, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f14.u32l;
    // 0x151AFA18: swc1        $f14, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f14.u32l;
    // 0x151AFA1C: swc1        $f12, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f12.u32l;
    // 0x151AFA20: swc1        $f12, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f12.u32l;
    // 0x151AFA24: swc1        $f14, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f14.u32l;
    // 0x151AFA28: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x151AFA2C: jal         0x150ADA20
    // 0x151AFA30: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151AFA30: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x151AFA34: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151AFA38: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AFA3C: mfhi        $t9
    ctx->r25 = hi;
    // 0x151AFA40: addiu       $t0, $t9, 0x50
    ctx->r8 = ADD32(ctx->r25, 0X50);
    // 0x151AFA44: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151AFA48: sb          $t0, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r8;
    // 0x151AFA4C: jal         0x150ADA20
    // 0x151AFA50: sb          $t1, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151AFA50: sb          $t1, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r9;
    after_5:
    // 0x151AFA54: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151AFA58: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AFA5C: lh          $t2, 0x94($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X94);
    // 0x151AFA60: mfhi        $t3
    ctx->r11 = hi;
    // 0x151AFA64: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x151AFA68: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x151AFA6C: jal         0x150ADA68
    // 0x151AFA70: sh          $t5, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151AFA70: sh          $t5, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r13;
    after_6:
    // 0x151AFA74: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151AFA78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AFA7C: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x151AFA80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151AFA84: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151AFA88: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151AFA8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AFA90: lwc1        $f8, -0x5EF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5EF4);
    // 0x151AFA94: lw          $t7, 0x134($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X134);
    // 0x151AFA98: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151AFA9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151AFAA0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151AFAA4: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    // 0x151AFAA8: sb          $t6, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r14;
    // 0x151AFAAC: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151AFAB0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151AFAB4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x151AFAB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151AFABC: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    // 0x151AFAC0: addiu       $t2, $sp, 0x104
    ctx->r10 = ADD32(ctx->r29, 0X104);
    // 0x151AFAC4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151AFAC8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x151AFACC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AFAD0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151AFAD4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x151AFAD8: bne         $t7, $at, L_151AFAE8
    if (ctx->r15 != ctx->r1) {
        // 0x151AFADC: swc1        $f10, 0xEC($sp)
        MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
            goto L_151AFAE8;
    }
    // 0x151AFADC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x151AFAE0: b           L_151AFAE8
    // 0x151AFAE4: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
        goto L_151AFAE8;
    // 0x151AFAE4: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
L_151AFAE8:
    // 0x151AFAE8: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x151AFAEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AFAF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151AFAF4: lhu         $t9, 0x7A($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X7A);
    // 0x151AFAF8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151AFAFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151AFB00: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x151AFB04: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x151AFB08: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151AFB0C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151AFB10: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151AFB14: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151AFB18: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151AFB1C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x151AFB20: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151AFB24: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151AFB28: jal         0x1513D668
    // 0x151AFB2C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_1513D668(rdram, ctx);
        goto after_7;
    // 0x151AFB2C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x151AFB30: beq         $v0, $zero, L_151AFB44
    if (ctx->r2 == 0) {
        // 0x151AFB34: addiu       $a0, $v0, 0x128
        ctx->r4 = ADD32(ctx->r2, 0X128);
            goto L_151AFB44;
    }
    // 0x151AFB34: addiu       $a0, $v0, 0x128
    ctx->r4 = ADD32(ctx->r2, 0X128);
    // 0x151AFB38: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x151AFB3C: jal         0x10022EC0
    // 0x151AFB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x151AFB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_151AFB44:
    // 0x151AFB44: jal         0x150ADA20
    // 0x151AFB48: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151AFB48: nop

    after_9:
    // 0x151AFB4C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151AFB50: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AFB54: mfhi        $t6
    ctx->r14 = hi;
    // 0x151AFB58: addiu       $t7, $t6, 0x5
    ctx->r15 = ADD32(ctx->r14, 0X5);
    // 0x151AFB5C: jal         0x150ADA68
    // 0x151AFB60: sh          $t7, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151AFB60: sh          $t7, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r15;
    after_10:
    // 0x151AFB64: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x151AFB68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151AFB6C: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x151AFB70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AFB74: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151AFB78: lh          $t9, 0x62($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X62);
    // 0x151AFB7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151AFB80: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151AFB84: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x151AFB88: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151AFB8C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x151AFB90: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151AFB94: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151AFB98: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151AFB9C: lwc1        $f12, 0x124($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151AFBA0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151AFBA4: lwc1        $f14, 0x128($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151AFBA8: lw          $a2, 0x12C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X12C);
    // 0x151AFBAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AFBB0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151AFBB4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151AFBB8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151AFBBC: jal         0x1514C678
    // 0x151AFBC0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_1514C678(rdram, ctx);
        goto after_11;
    // 0x151AFBC0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_11:
L_151AFBC4:
    // 0x151AFBC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151AFBC8:
    // 0x151AFBC8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x151AFBCC: jr          $ra
    // 0x151AFBD0: nop

    return;
    return;
    // 0x151AFBD0: nop

;}
RECOMP_FUNC void func_150599C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150599C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150599CC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150599D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150599D4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x150599D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x150599DC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150599E0: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x150599E4: lbu         $t9, 0x1E8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E8);
    // 0x150599E8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150599EC: lh          $v1, -0x3D9C($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3D9C);
    // 0x150599F0: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x150599F4: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x150599F8: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150599FC: lhu         $t0, 0x7A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X7A);
    // 0x15059A00: lhu         $t1, 0x1EA($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X1EA);
    // 0x15059A04: subu        $a3, $a2, $t0
    ctx->r7 = SUB32(ctx->r6, ctx->r8);
    // 0x15059A08: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x15059A0C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15059A10: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x15059A14: mflo        $t6
    ctx->r14 = lo;
    // 0x15059A18: nop

    // 0x15059A1C: nop

    // 0x15059A20: div         $zero, $t6, $t4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r12)));
    // 0x15059A24: mflo        $v0
    ctx->r2 = lo;
    // 0x15059A28: bne         $t4, $zero, L_15059A34
    if (ctx->r12 != 0) {
        // 0x15059A2C: nop
    
            goto L_15059A34;
    }
    // 0x15059A2C: nop

    // 0x15059A30: break       7
    do_break(352688688);
L_15059A34:
    // 0x15059A34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15059A38: bne         $t4, $at, L_15059A4C
    if (ctx->r12 != ctx->r1) {
        // 0x15059A3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15059A4C;
    }
    // 0x15059A3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15059A40: bne         $t6, $at, L_15059A4C
    if (ctx->r14 != ctx->r1) {
        // 0x15059A44: nop
    
            goto L_15059A4C;
    }
    // 0x15059A44: nop

    // 0x15059A48: break       6
    do_break(352688712);
L_15059A4C:
    // 0x15059A4C: beql        $t1, $zero, L_15059AE4
    if (ctx->r9 == 0) {
        // 0x15059A50: sll         $v1, $a3, 16
        ctx->r3 = S32(ctx->r7 << 16);
            goto L_15059AE4;
    }
    goto skip_0;
    // 0x15059A50: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    skip_0:
    // 0x15059A54: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15059A58: lhu         $t2, 0x1EC($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X1EC);
    // 0x15059A5C: mflo        $t9
    ctx->r25 = lo;
    // 0x15059A60: nop

    // 0x15059A64: nop

    // 0x15059A68: div         $zero, $t9, $t4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r12)));
    // 0x15059A6C: bne         $t4, $zero, L_15059A78
    if (ctx->r12 != 0) {
        // 0x15059A70: nop
    
            goto L_15059A78;
    }
    // 0x15059A70: nop

    // 0x15059A74: break       7
    do_break(352688756);
L_15059A78:
    // 0x15059A78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15059A7C: bne         $t4, $at, L_15059A90
    if (ctx->r12 != ctx->r1) {
        // 0x15059A80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15059A90;
    }
    // 0x15059A80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15059A84: bne         $t9, $at, L_15059A90
    if (ctx->r25 != ctx->r1) {
        // 0x15059A88: nop
    
            goto L_15059A90;
    }
    // 0x15059A88: nop

    // 0x15059A8C: break       6
    do_break(352688780);
L_15059A90:
    // 0x15059A90: mflo        $a1
    ctx->r5 = lo;
    // 0x15059A94: addu        $a2, $t2, $a1
    ctx->r6 = ADD32(ctx->r10, ctx->r5);
    // 0x15059A98: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x15059A9C: subu        $t3, $t2, $a1
    ctx->r11 = SUB32(ctx->r10, ctx->r5);
    // 0x15059AA0: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15059AA4: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x15059AA8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15059AAC: slt         $at, $t6, $a3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x15059AB0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15059AB4: beq         $at, $zero, L_15059AC8
    if (ctx->r1 == 0) {
        // 0x15059AB8: or          $t3, $t8, $zero
        ctx->r11 = ctx->r24 | 0;
            goto L_15059AC8;
    }
    // 0x15059AB8: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x15059ABC: sll         $a3, $t6, 16
    ctx->r7 = S32(ctx->r14 << 16);
    // 0x15059AC0: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x15059AC4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_15059AC8:
    // 0x15059AC8: slt         $at, $a3, $t3
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15059ACC: beql        $at, $zero, L_15059AE4
    if (ctx->r1 == 0) {
        // 0x15059AD0: sll         $v1, $a3, 16
        ctx->r3 = S32(ctx->r7 << 16);
            goto L_15059AE4;
    }
    goto skip_1;
    // 0x15059AD0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    skip_1:
    // 0x15059AD4: sll         $a3, $t3, 16
    ctx->r7 = S32(ctx->r11 << 16);
    // 0x15059AD8: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x15059ADC: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x15059AE0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
L_15059AE4:
    // 0x15059AE4: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15059AE8: bgez        $a3, L_15059AFC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x15059AEC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15059AFC;
    }
    // 0x15059AEC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15059AF0: xori        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 ^ 0XFFFF;
    // 0x15059AF4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15059AF8: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
L_15059AFC:
    // 0x15059AFC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15059B00: beql        $at, $zero, L_15059B10
    if (ctx->r1 == 0) {
        // 0x15059B04: lw          $t5, 0xF4($a0)
        ctx->r13 = MEM_W(ctx->r4, 0XF4);
            goto L_15059B10;
    }
    goto skip_2;
    // 0x15059B04: lw          $t5, 0xF4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XF4);
    skip_2:
    // 0x15059B08: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x15059B0C: lw          $t5, 0xF4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XF4);
L_15059B10:
    // 0x15059B10: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x15059B14: bnel        $t6, $zero, L_15059B44
    if (ctx->r14 != 0) {
        // 0x15059B18: sra         $v0, $a3, 8
        ctx->r2 = S32(SIGNED(ctx->r7) >> 8);
            goto L_15059B44;
    }
    goto skip_3;
    // 0x15059B18: sra         $v0, $a3, 8
    ctx->r2 = S32(SIGNED(ctx->r7) >> 8);
    skip_3:
    // 0x15059B1C: lbu         $t7, 0x80($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X80);
    // 0x15059B20: beql        $t7, $zero, L_15059B44
    if (ctx->r15 == 0) {
        // 0x15059B24: sra         $v0, $a3, 8
        ctx->r2 = S32(SIGNED(ctx->r7) >> 8);
            goto L_15059B44;
    }
    goto skip_4;
    // 0x15059B24: sra         $v0, $a3, 8
    ctx->r2 = S32(SIGNED(ctx->r7) >> 8);
    skip_4:
    // 0x15059B28: bgez        $v1, L_15059B3C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15059B2C: addu        $t9, $t0, $v0
        ctx->r25 = ADD32(ctx->r8, ctx->r2);
            goto L_15059B3C;
    }
    // 0x15059B2C: addu        $t9, $t0, $v0
    ctx->r25 = ADD32(ctx->r8, ctx->r2);
    // 0x15059B30: subu        $t8, $t0, $v0
    ctx->r24 = SUB32(ctx->r8, ctx->r2);
    // 0x15059B34: b           L_15059B40
    // 0x15059B38: sh          $t8, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r24;
        goto L_15059B40;
    // 0x15059B38: sh          $t8, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r24;
L_15059B3C:
    // 0x15059B3C: sh          $t9, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r25;
L_15059B40:
    // 0x15059B40: sra         $v0, $a3, 8
    ctx->r2 = S32(SIGNED(ctx->r7) >> 8);
L_15059B44:
    // 0x15059B44: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x15059B48: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x15059B4C: jr          $ra
    // 0x15059B50: nop

    return;
    return;
    // 0x15059B50: nop

;}
RECOMP_FUNC void func_1507A210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A214: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A218: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1507A21C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A220: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1507A224: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A228: sb          $zero, 0x223($t6)
    MEM_B(0X223, ctx->r14) = 0;
    // 0x1507A22C: lbu         $t7, 0x1890($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1890);
    // 0x1507A230: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1507A234: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1507A238: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507A23C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1507A240: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1507A244: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507A248: sh          $t8, 0x21C($t9)
    MEM_H(0X21C, ctx->r25) = ctx->r24;
    // 0x1507A24C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507A250: lhu         $t0, 0x22C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X22C);
    // 0x1507A254: andi        $t1, $t0, 0xFD
    ctx->r9 = ctx->r8 & 0XFD;
    // 0x1507A258: jal         0x15075498
    // 0x1507A25C: sh          $t1, 0x22C($v0)
    MEM_H(0X22C, ctx->r2) = ctx->r9;
    func_15075498(rdram, ctx);
        goto after_0;
    // 0x1507A25C: sh          $t1, 0x22C($v0)
    MEM_H(0X22C, ctx->r2) = ctx->r9;
    after_0:
    // 0x1507A260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A268: jr          $ra
    // 0x1507A26C: nop

    return;
    return;
    // 0x1507A26C: nop

;}
RECOMP_FUNC void func_15131B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131B7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15131B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15131B84: lwc1        $f6, 0x3848($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3848);
    // 0x15131B88: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15131B8C: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x15131B90: lwc1        $f18, 0x58($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X58);
    // 0x15131B94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15131B98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15131B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15131BA0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15131BA4: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x15131BA8: swc1        $f16, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f16.u32l;
    // 0x15131BAC: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x15131BB0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15131BB4: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x15131BB8: swc1        $f6, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f6.u32l;
    // 0x15131BBC: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    // 0x15131BC0: neg.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = -ctx->f8.fl;
    // 0x15131BC4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15131BC8: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x15131BCC: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x15131BD0: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x15131BD4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15131BD8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15131BDC: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    // 0x15131BE0: lwc1        $f10, 0x384C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X384C);
    // 0x15131BE4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15131BE8: nop

    // 0x15131BEC: bc1f        L_15131C24
    if (!c1cs) {
        // 0x15131BF0: nop
    
            goto L_15131C24;
    }
    // 0x15131BF0: nop

    // 0x15131BF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15131BF8: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x15131BFC: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x15131C00: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
    // 0x15131C04: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x15131C08: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x15131C0C: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x15131C10: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x15131C14: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x15131C18: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x15131C1C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x15131C20: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
L_15131C24:
    // 0x15131C24: jr          $ra
    // 0x15131C28: nop

    return;
    return;
    // 0x15131C28: nop

;}
RECOMP_FUNC void func_1500A410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A414: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A418: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A41C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A420: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A424: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1500A428: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500A42C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1500A430: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x1500A434: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x1500A438: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500A43C: jal         0x15163604
    // 0x1500A440: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x1500A440: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1500A444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A44C: jr          $ra
    // 0x1500A450: nop

    return;
    return;
    // 0x1500A450: nop

;}
RECOMP_FUNC void func_1513DB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513DB00: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1513DB04: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x1513DB08: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x1513DB0C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1513DB10: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1513DB14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1513DB18: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1513DB1C: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x1513DB20: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x1513DB24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1513DB28: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x1513DB2C: beql        $t9, $zero, L_1513DF88
    if (ctx->r25 == 0) {
        // 0x1513DB30: lw          $v0, 0x90($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X90);
            goto L_1513DF88;
    }
    goto skip_0;
    // 0x1513DB30: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    skip_0:
    // 0x1513DB34: sb          $t2, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r10;
    // 0x1513DB38: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x1513DB3C: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x1513DB40: beql        $t3, $zero, L_1513DB90
    if (ctx->r11 == 0) {
        // 0x1513DB44: lhu         $t9, 0x1A($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X1A);
            goto L_1513DB90;
    }
    goto skip_1;
    // 0x1513DB44: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    skip_1:
    // 0x1513DB48: lbu         $t4, 0x64($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X64);
    // 0x1513DB4C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1513DB50: sllv        $t6, $t5, $a2
    ctx->r14 = S32(ctx->r13 << (ctx->r6 & 31));
    // 0x1513DB54: and         $t7, $t4, $t6
    ctx->r15 = ctx->r12 & ctx->r14;
    // 0x1513DB58: bne         $t7, $zero, L_1513DB8C
    if (ctx->r15 != 0) {
        // 0x1513DB5C: sll         $t8, $a2, 2
        ctx->r24 = S32(ctx->r6 << 2);
            goto L_1513DB8C;
    }
    // 0x1513DB5C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x1513DB60: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x1513DB64: lw          $v1, 0x100($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X100);
    // 0x1513DB68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1513DB6C: beq         $v1, $zero, L_1513DB84
    if (ctx->r3 == 0) {
        // 0x1513DB70: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1513DB84;
    }
    // 0x1513DB70: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1513DB74: jal         0x100043B4
    // 0x1513DB78: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1513DB78: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_0:
    // 0x1513DB7C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1513DB80: sw          $zero, 0x100($v0)
    MEM_W(0X100, ctx->r2) = 0;
L_1513DB84:
    // 0x1513DB84: b           L_1513DF88
    // 0x1513DB88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
        goto L_1513DF88;
    // 0x1513DB88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_1513DB8C:
    // 0x1513DB8C: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
L_1513DB90:
    // 0x1513DB90: andi        $t5, $v1, 0xC000
    ctx->r13 = ctx->r3 & 0XC000;
    // 0x1513DB94: sll         $t4, $v1, 7
    ctx->r12 = S32(ctx->r3 << 7);
    // 0x1513DB98: andi        $t2, $t9, 0xFF00
    ctx->r10 = ctx->r25 & 0XFF00;
    // 0x1513DB9C: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x1513DBA0: sb          $t3, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r11;
    // 0x1513DBA4: sh          $t5, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r13;
    // 0x1513DBA8: bgez        $t4, L_1513DC00
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1513DBAC: sb          $t9, 0x79($sp)
        MEM_B(0X79, ctx->r29) = ctx->r25;
            goto L_1513DC00;
    }
    // 0x1513DBAC: sb          $t9, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r25;
    // 0x1513DBB0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x1513DBB4: beql        $v0, $zero, L_1513DC04
    if (ctx->r2 == 0) {
        // 0x1513DBB8: sh          $a2, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r6;
            goto L_1513DC04;
    }
    goto skip_2;
    // 0x1513DBB8: sh          $a2, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r6;
    skip_2:
    // 0x1513DBBC: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x1513DBC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1513DBC4: sllv        $t8, $t7, $a2
    ctx->r24 = S32(ctx->r15 << (ctx->r6 & 31));
    // 0x1513DBC8: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1513DBCC: bne         $t9, $zero, L_1513DC00
    if (ctx->r25 != 0) {
        // 0x1513DBD0: sll         $t2, $a2, 2
        ctx->r10 = S32(ctx->r6 << 2);
            goto L_1513DC00;
    }
    // 0x1513DBD0: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x1513DBD4: addu        $v0, $s0, $t2
    ctx->r2 = ADD32(ctx->r16, ctx->r10);
    // 0x1513DBD8: lw          $v1, 0x100($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X100);
    // 0x1513DBDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1513DBE0: beq         $v1, $zero, L_1513DBF8
    if (ctx->r3 == 0) {
        // 0x1513DBE4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1513DBF8;
    }
    // 0x1513DBE4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1513DBE8: jal         0x100043B4
    // 0x1513DBEC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x1513DBEC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_1:
    // 0x1513DBF0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1513DBF4: sw          $zero, 0x100($v0)
    MEM_W(0X100, ctx->r2) = 0;
L_1513DBF8:
    // 0x1513DBF8: b           L_1513DF88
    // 0x1513DBFC: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
        goto L_1513DF88;
    // 0x1513DBFC: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_1513DC00:
    // 0x1513DC00: sh          $a2, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r6;
L_1513DC04:
    // 0x1513DC04: lbu         $t5, 0x73($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X73);
    // 0x1513DC08: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513DC0C: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x1513DC10: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x1513DC14: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x1513DC18: lw          $t9, -0x61E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X61E4);
    // 0x1513DC1C: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1513DC20: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x1513DC24: jalr        $t9
    // 0x1513DC28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1513DC28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1513DC2C: lh          $t0, 0x9A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X9A);
    // 0x1513DC30: bne         $v0, $zero, L_1513DC68
    if (ctx->r2 != 0) {
        // 0x1513DC34: sw          $v0, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r2;
            goto L_1513DC68;
    }
    // 0x1513DC34: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x1513DC38: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1513DC3C: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x1513DC40: lw          $v1, 0x100($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X100);
    // 0x1513DC44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1513DC48: beq         $v1, $zero, L_1513DC60
    if (ctx->r3 == 0) {
        // 0x1513DC4C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1513DC60;
    }
    // 0x1513DC4C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1513DC50: jal         0x100043B4
    // 0x1513DC54: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_100043B4(rdram, ctx);
        goto after_3;
    // 0x1513DC54: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_3:
    // 0x1513DC58: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1513DC5C: sw          $zero, 0x100($v0)
    MEM_W(0X100, ctx->r2) = 0;
L_1513DC60:
    // 0x1513DC60: b           L_1513DF88
    // 0x1513DC64: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
        goto L_1513DF88;
    // 0x1513DC64: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_1513DC68:
    // 0x1513DC68: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x1513DC6C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x1513DC70: addiu       $a1, $s0, 0x9C
    ctx->r5 = ADD32(ctx->r16, 0X9C);
    // 0x1513DC74: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x1513DC78: bgez        $t8, L_1513DC88
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1513DC7C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1513DC88;
    }
    // 0x1513DC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513DC80: b           L_1513DC8C
    // 0x1513DC84: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
        goto L_1513DC8C;
    // 0x1513DC84: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_1513DC88:
    // 0x1513DC88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513DC8C:
    // 0x1513DC8C: addiu       $t2, $s0, 0x34
    ctx->r10 = ADD32(ctx->r16, 0X34);
    // 0x1513DC90: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1513DC94: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1513DC98: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1513DC9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1513DCA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513DCA4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1513DCA8: jal         0x151462C8
    // 0x1513DCAC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_151462C8(rdram, ctx);
        goto after_4;
    // 0x1513DCAC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x1513DCB0: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x1513DCB4: lw          $t5, 0x58($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X58);
    // 0x1513DCB8: sll         $t4, $t5, 13
    ctx->r12 = S32(ctx->r13 << 13);
    // 0x1513DCBC: bgezl       $t4, L_1513DCD0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1513DCC0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_1513DCD0;
    }
    goto skip_3;
    // 0x1513DCC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_3:
    // 0x1513DCC4: b           L_1513DCD0
    // 0x1513DCC8: lbu         $v0, 0x5E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5E);
        goto L_1513DCD0;
    // 0x1513DCC8: lbu         $v0, 0x5E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5E);
    // 0x1513DCCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_1513DCD0:
    // 0x1513DCD0: lbu         $t9, 0x28($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X28);
    // 0x1513DCD4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1513DCD8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1513DCDC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1513DCE0: lbu         $t7, 0x29($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X29);
    // 0x1513DCE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1513DCE8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1513DCEC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1513DCF0: lbu         $t6, 0x2A($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2A);
    // 0x1513DCF4: addiu       $a1, $sp, 0x86
    ctx->r5 = ADD32(ctx->r29, 0X86);
    // 0x1513DCF8: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x1513DCFC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1513DD00: lbu         $t8, 0x2B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513DD04: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1513DD08: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1513DD0C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1513DD10: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1513DD14: lbu         $t4, 0x5C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5C);
    // 0x1513DD18: addiu       $a3, $sp, 0x82
    ctx->r7 = ADD32(ctx->r29, 0X82);
    // 0x1513DD1C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1513DD20: lbu         $t9, 0x5D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5D);
    // 0x1513DD24: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1513DD28: jal         0x151441A4
    // 0x1513DD2C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    func_151441A4(rdram, ctx);
        goto after_5;
    // 0x1513DD2C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    after_5:
    // 0x1513DD30: lw          $t7, 0x58($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X58);
    // 0x1513DD34: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x1513DD38: bgezl       $t6, L_1513DD4C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1513DD3C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_1513DD4C;
    }
    goto skip_4;
    // 0x1513DD3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_4:
    // 0x1513DD40: b           L_1513DD4C
    // 0x1513DD44: lbu         $v0, 0x5F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5F);
        goto L_1513DD4C;
    // 0x1513DD44: lbu         $v0, 0x5F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5F);
    // 0x1513DD48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_1513DD4C:
    // 0x1513DD4C: lbu         $t8, 0x28($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X28);
    // 0x1513DD50: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1513DD54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1513DD58: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513DD5C: lbu         $t2, 0x29($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X29);
    // 0x1513DD60: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1513DD64: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x1513DD68: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1513DD6C: lbu         $t3, 0x2A($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A);
    // 0x1513DD70: addiu       $a1, $sp, 0x7E
    ctx->r5 = ADD32(ctx->r29, 0X7E);
    // 0x1513DD74: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x1513DD78: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1513DD7C: lbu         $t5, 0x2B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513DD80: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1513DD84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1513DD88: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x1513DD8C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1513DD90: lbu         $t6, 0x5C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5C);
    // 0x1513DD94: addiu       $a3, $sp, 0x7A
    ctx->r7 = ADD32(ctx->r29, 0X7A);
    // 0x1513DD98: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1513DD9C: lbu         $t8, 0x5D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5D);
    // 0x1513DDA0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1513DDA4: jal         0x151442FC
    // 0x1513DDA8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_151442FC(rdram, ctx);
        goto after_6;
    // 0x1513DDA8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_6:
    // 0x1513DDAC: lh          $v1, 0x76($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X76);
    // 0x1513DDB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513DDB4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x1513DDB8: andi        $t2, $v1, 0x4000
    ctx->r10 = ctx->r3 & 0X4000;
    // 0x1513DDBC: beq         $t2, $zero, L_1513DDC8
    if (ctx->r10 == 0) {
        // 0x1513DDC0: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_1513DDC8;
    }
    // 0x1513DDC0: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x1513DDC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_1513DDC8:
    // 0x1513DDC8: beq         $t3, $zero, L_1513DDD8
    if (ctx->r11 == 0) {
        // 0x1513DDCC: addiu       $a2, $zero, 0x600
        ctx->r6 = ADD32(0, 0X600);
            goto L_1513DDD8;
    }
    // 0x1513DDCC: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x1513DDD0: ori         $t5, $v0, 0x400
    ctx->r13 = ctx->r2 | 0X400;
    // 0x1513DDD4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_1513DDD8:
    // 0x1513DDD8: lw          $t4, 0x58($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X58);
    // 0x1513DDDC: sll         $t9, $t4, 11
    ctx->r25 = S32(ctx->r12 << 11);
    // 0x1513DDE0: bgez        $t9, L_1513DDF0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1513DDE4: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_1513DDF0;
    }
    // 0x1513DDE4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1513DDE8: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x1513DDEC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_1513DDF0:
    // 0x1513DDF0: jal         0x15142B7C
    // 0x1513DDF4: ori         $a1, $v0, 0x1
    ctx->r5 = ctx->r2 | 0X1;
    func_15142B7C(rdram, ctx);
        goto after_7;
    // 0x1513DDF4: ori         $a1, $v0, 0x1
    ctx->r5 = ctx->r2 | 0X1;
    after_7:
    // 0x1513DDF8: lbu         $t0, 0x18($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X18);
    // 0x1513DDFC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1513DE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513DE04: beq         $t0, $at, L_1513DE80
    if (ctx->r8 == ctx->r1) {
        // 0x1513DE08: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_1513DE80;
    }
    // 0x1513DE08: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x1513DE0C: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x1513DE10: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x1513DE14: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x1513DE18: sll         $t6, $v1, 10
    ctx->r14 = S32(ctx->r3 << 10);
    // 0x1513DE1C: bgez        $t6, L_1513DE2C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1513DE20: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_1513DE2C;
    }
    // 0x1513DE20: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x1513DE24: b           L_1513DE30
    // 0x1513DE28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_1513DE30;
    // 0x1513DE28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1513DE2C:
    // 0x1513DE2C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_1513DE30:
    // 0x1513DE30: bgez        $t8, L_1513DE40
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1513DE34: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_1513DE40;
    }
    // 0x1513DE34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1513DE38: b           L_1513DE44
    // 0x1513DE3C: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
        goto L_1513DE44;
    // 0x1513DE3C: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
L_1513DE40:
    // 0x1513DE40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1513DE44:
    // 0x1513DE44: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x1513DE48: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1513DE4C: addiu       $t3, $t3, 0xB60
    ctx->r11 = ADD32(ctx->r11, 0XB60);
    // 0x1513DE50: addiu       $t5, $sp, 0x8B
    ctx->r13 = ADD32(ctx->r29, 0X8B);
    // 0x1513DE54: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1513DE58: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x1513DE5C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1513DE60: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1513DE64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513DE68: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1513DE6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1513DE70: jal         0x15142E24
    // 0x1513DE74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_8;
    // 0x1513DE74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x1513DE78: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x1513DE7C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
L_1513DE80:
    // 0x1513DE80: lh          $t4, 0x7A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X7A);
    // 0x1513DE84: addiu       $t9, $sp, 0x8B
    ctx->r25 = ADD32(ctx->r29, 0X8B);
    // 0x1513DE88: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513DE8C: lh          $a1, 0x80($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X80);
    // 0x1513DE90: lh          $a2, 0x7E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X7E);
    // 0x1513DE94: lh          $a3, 0x7C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X7C);
    // 0x1513DE98: jal         0x15142C10
    // 0x1513DE9C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15142C10(rdram, ctx);
        goto after_9;
    // 0x1513DE9C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_9:
    // 0x1513DEA0: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x1513DEA4: lh          $t6, 0x84($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X84);
    // 0x1513DEA8: lh          $t8, 0x82($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X82);
    // 0x1513DEAC: addiu       $t2, $sp, 0x8B
    ctx->r10 = ADD32(ctx->r29, 0X8B);
    // 0x1513DEB0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1513DEB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513DEB8: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    // 0x1513DEBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513DEC0: lh          $a3, 0x88($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X88);
    // 0x1513DEC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1513DEC8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1513DECC: jal         0x15142CF0
    // 0x1513DED0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_15142CF0(rdram, ctx);
        goto after_10;
    // 0x1513DED0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_10:
    // 0x1513DED4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513DED8: lbu         $a1, 0x78($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X78);
    // 0x1513DEDC: jal         0x1513F4E4
    // 0x1513DEE0: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_11;
    // 0x1513DEE0: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_11:
    // 0x1513DEE4: lw          $t3, 0x58($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X58);
    // 0x1513DEE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513DEEC: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    // 0x1513DEF0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1513DEF4: bgez        $t5, L_1513DF04
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1513DEF8: lbu         $t3, 0x79($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X79);
            goto L_1513DF04;
    }
    // 0x1513DEF8: lbu         $t3, 0x79($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X79);
    // 0x1513DEFC: b           L_1513DF08
    // 0x1513DF00: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
        goto L_1513DF08;
    // 0x1513DF00: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
L_1513DF04:
    // 0x1513DF04: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1513DF08:
    // 0x1513DF08: lbu         $t4, 0x18($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X18);
    // 0x1513DF0C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1513DF10: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x1513DF14: bne         $t4, $at, L_1513DF24
    if (ctx->r12 != ctx->r1) {
        // 0x1513DF18: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1513DF24;
    }
    // 0x1513DF18: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1513DF1C: b           L_1513DF28
    // 0x1513DF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513DF28;
    // 0x1513DF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513DF24:
    // 0x1513DF24: lw          $v0, 0x2C9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C9C);
L_1513DF28:
    // 0x1513DF28: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x1513DF2C: addiu       $t4, $t4, 0x4AC8
    ctx->r12 = ADD32(ctx->r12, 0X4AC8);
    // 0x1513DF30: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1513DF34: or          $t9, $t0, $at
    ctx->r25 = ctx->r8 | ctx->r1;
    // 0x1513DF38: addu        $v1, $t5, $t4
    ctx->r3 = ADD32(ctx->r13, ctx->r12);
    // 0x1513DF3C: or          $t8, $v0, $t9
    ctx->r24 = ctx->r2 | ctx->r25;
    // 0x1513DF40: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x1513DF44: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1513DF48: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    // 0x1513DF4C: jal         0x15142FBC
    // 0x1513DF50: or          $a2, $t9, $t7
    ctx->r6 = ctx->r25 | ctx->r15;
    func_15142FBC(rdram, ctx);
        goto after_12;
    // 0x1513DF50: or          $a2, $t9, $t7
    ctx->r6 = ctx->r25 | ctx->r15;
    after_12:
    // 0x1513DF54: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x1513DF58: ori         $t6, $t6, 0x4008
    ctx->r14 = ctx->r14 | 0X4008;
    // 0x1513DF5C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1513DF60: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x1513DF64: addiu       $t2, $v0, 0x10
    ctx->r10 = ADD32(ctx->r2, 0X10);
    // 0x1513DF68: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x1513DF6C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1513DF70: sw          $t2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r10;
    // 0x1513DF74: ori         $t3, $t3, 0x204
    ctx->r11 = ctx->r11 | 0X204;
    // 0x1513DF78: addiu       $t5, $zero, 0x406
    ctx->r13 = ADD32(0, 0X406);
    // 0x1513DF7C: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
    // 0x1513DF80: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x1513DF84: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_1513DF88:
    // 0x1513DF88: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1513DF8C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1513DF90: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x1513DF94: jr          $ra
    // 0x1513DF98: nop

    return;
    return;
    // 0x1513DF98: nop

;}
RECOMP_FUNC void func_1505F0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505F0AC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1505F0B0: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x1505F0B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505F0B8: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x1505F0BC: beq         $t6, $zero, L_1505F0DC
    if (ctx->r14 == 0) {
        // 0x1505F0C0: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_1505F0DC;
    }
    // 0x1505F0C0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1505F0C4: lbu         $t7, -0x3D2C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3D2C);
    // 0x1505F0C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1505F0CC: bnel        $a0, $t7, L_1505F0E0
    if (ctx->r4 != ctx->r15) {
        // 0x1505F0D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1505F0E0;
    }
    goto skip_0;
    // 0x1505F0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1505F0D4: jr          $ra
    // 0x1505F0D8: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    return;
    return;
    // 0x1505F0D8: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
L_1505F0DC:
    // 0x1505F0DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1505F0E0:
    // 0x1505F0E0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
L_1505F0E4:
    // 0x1505F0E4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1505F0E8: beql        $t8, $zero, L_1505F108
    if (ctx->r24 == 0) {
        // 0x1505F0EC: lw          $t0, 0x32C($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F108;
    }
    goto skip_1;
    // 0x1505F0EC: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
    skip_1:
    // 0x1505F0F0: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x1505F0F4: bnel        $a0, $t9, L_1505F108
    if (ctx->r4 != ctx->r25) {
        // 0x1505F0F8: lw          $t0, 0x32C($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F108;
    }
    goto skip_2;
    // 0x1505F0F8: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
    skip_2:
    // 0x1505F0FC: jr          $ra
    // 0x1505F100: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F100: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F104: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
L_1505F108:
    // 0x1505F108: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F10C: beql        $t0, $zero, L_1505F12C
    if (ctx->r8 == 0) {
        // 0x1505F110: lw          $t2, 0x32C($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F12C;
    }
    goto skip_3;
    // 0x1505F110: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
    skip_3:
    // 0x1505F114: lbu         $t1, 0x4($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4);
    // 0x1505F118: bnel        $a0, $t1, L_1505F12C
    if (ctx->r4 != ctx->r9) {
        // 0x1505F11C: lw          $t2, 0x32C($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F12C;
    }
    goto skip_4;
    // 0x1505F11C: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
    skip_4:
    // 0x1505F120: jr          $ra
    // 0x1505F124: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F124: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F128: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
L_1505F12C:
    // 0x1505F12C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F130: beql        $t2, $zero, L_1505F150
    if (ctx->r10 == 0) {
        // 0x1505F134: lw          $t4, 0x32C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F150;
    }
    goto skip_5;
    // 0x1505F134: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
    skip_5:
    // 0x1505F138: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x1505F13C: bnel        $a0, $t3, L_1505F150
    if (ctx->r4 != ctx->r11) {
        // 0x1505F140: lw          $t4, 0x32C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F150;
    }
    goto skip_6;
    // 0x1505F140: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
    skip_6:
    // 0x1505F144: jr          $ra
    // 0x1505F148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F14C: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
L_1505F150:
    // 0x1505F150: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F154: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1505F158: beq         $t4, $zero, L_1505F174
    if (ctx->r12 == 0) {
        // 0x1505F15C: nop
    
            goto L_1505F174;
    }
    // 0x1505F15C: nop

    // 0x1505F160: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
    // 0x1505F164: bne         $a0, $t5, L_1505F174
    if (ctx->r4 != ctx->r13) {
        // 0x1505F168: nop
    
            goto L_1505F174;
    }
    // 0x1505F168: nop

    // 0x1505F16C: jr          $ra
    // 0x1505F170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1505F174:
    // 0x1505F174: bne         $v0, $a1, L_1505F0E4
    if (ctx->r2 != ctx->r5) {
        // 0x1505F178: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1505F0E4;
    }
    // 0x1505F178: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1505F180: jr          $ra
    // 0x1505F184: nop

    return;
    return;
    // 0x1505F184: nop

;}
RECOMP_FUNC void func_15185B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185B28: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15185B2C: lwc1        $f6, 0x368C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X368C);
    // 0x15185B30: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15185B34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15185B38: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15185B3C: nop

    // 0x15185B40: bc1f        L_15185B4C
    if (!c1cs) {
        // 0x15185B44: nop
    
            goto L_15185B4C;
    }
    // 0x15185B44: nop

    // 0x15185B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15185B4C:
    // 0x15185B4C: jr          $ra
    // 0x15185B50: nop

    return;
    return;
    // 0x15185B50: nop

;}
RECOMP_FUNC void __n_mapVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001AF28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001AF2C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x1001AF30: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x1001AF34: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x1001AF38: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x1001AF3C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x1001AF40: lbu         $t7, 0x8D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8D);
    // 0x1001AF44: lbu         $t8, 0x8C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X8C);
    // 0x1001AF48: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1001AF4C: beq         $at, $zero, L_1001AF5C
    if (ctx->r1 == 0) {
        // 0x1001AF50: nop
    
            goto L_1001AF5C;
    }
    // 0x1001AF50: nop

    // 0x1001AF54: b           L_1001AFE4
    // 0x1001AF58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001AFE4;
    // 0x1001AF58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001AF5C:
    // 0x1001AF5C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x1001AF60: beq         $t9, $zero, L_1001AFD4
    if (ctx->r25 == 0) {
        // 0x1001AF64: nop
    
            goto L_1001AFD4;
    }
    // 0x1001AF64: nop

    // 0x1001AF68: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x1001AF6C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001AF70: sw          $t1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r9;
    // 0x1001AF74: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x1001AF78: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x1001AF7C: lw          $t3, 0x64($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X64);
    // 0x1001AF80: bne         $t3, $zero, L_1001AF94
    if (ctx->r11 != 0) {
        // 0x1001AF84: nop
    
            goto L_1001AF94;
    }
    // 0x1001AF84: nop

    // 0x1001AF88: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x1001AF8C: b           L_1001AFA0
    // 0x1001AF90: sw          $t4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r12;
        goto L_1001AFA0;
    // 0x1001AF90: sw          $t4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r12;
L_1001AF94:
    // 0x1001AF94: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x1001AF98: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x1001AF9C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_1001AFA0:
    // 0x1001AFA0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFA4: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x1001AFA8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFAC: sb          $a3, 0x35($t8)
    MEM_B(0X35, ctx->r24) = ctx->r7;
    // 0x1001AFB0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFB4: sb          $a1, 0x36($t9)
    MEM_B(0X36, ctx->r25) = ctx->r5;
    // 0x1001AFB8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFBC: sb          $a2, 0x37($t0)
    MEM_B(0X37, ctx->r8) = ctx->r6;
    // 0x1001AFC0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFC4: sw          $t1, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r9;
    // 0x1001AFC8: lbu         $t2, 0x8D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X8D);
    // 0x1001AFCC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1001AFD0: sb          $t3, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r11;
L_1001AFD4:
    // 0x1001AFD4: b           L_1001AFE4
    // 0x1001AFD8: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
        goto L_1001AFE4;
    // 0x1001AFD8: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x1001AFDC: b           L_1001AFE4
    // 0x1001AFE0: nop

        goto L_1001AFE4;
    // 0x1001AFE0: nop

L_1001AFE4:
    // 0x1001AFE4: jr          $ra
    // 0x1001AFE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001AFE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150D10E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D10E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150D10E8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150D10EC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150D10F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150D10F4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150D10F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D10FC: lbu         $t7, 0x3B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3B);
    // 0x150D1100: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150D1104: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
    // 0x150D1108: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150D110C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150D1110: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150D1114: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150D1118: beq         $a1, $zero, L_150D1130
    if (ctx->r5 == 0) {
        // 0x150D111C: sb          $t7, 0x1C($sp)
        MEM_B(0X1C, ctx->r29) = ctx->r15;
            goto L_150D1130;
    }
    // 0x150D111C: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x150D1120: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x150D1124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D1128: b           L_150D1140
    // 0x150D112C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
        goto L_150D1140;
    // 0x150D112C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_150D1130:
    // 0x150D1130: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150D1134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D1138: nop

    // 0x150D113C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
L_150D1140:
    // 0x150D1140: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D1144: lwc1        $f8, 0x890($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X890);
    // 0x150D1148: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150D114C: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x150D1150: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150D1154: addiu       $t1, $zero, 0x7D0
    ctx->r9 = ADD32(0, 0X7D0);
    // 0x150D1158: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150D115C: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150D1160: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150D1164: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150D1168: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150D116C: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    // 0x150D1170: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    // 0x150D1174: sh          $t0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r8;
    // 0x150D1178: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x150D117C: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150D1180: sb          $t2, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r10;
    // 0x150D1184: sb          $t3, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r11;
    // 0x150D1188: sb          $t4, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r12;
    // 0x150D118C: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150D1190: sb          $t5, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r13;
    // 0x150D1194: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150D1198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150D119C: jal         0x15134DAC
    // 0x150D11A0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_15134DAC(rdram, ctx);
        goto after_0;
    // 0x150D11A0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150D11A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D11A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150D11AC: jr          $ra
    // 0x150D11B0: nop

    return;
    return;
    // 0x150D11B0: nop

;}
RECOMP_FUNC void func_151490C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151490C8: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x151490CC: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151490D0: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x151490D4: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x151490D8: bne         $at, $zero, L_151490E4
    if (ctx->r1 != 0) {
        // 0x151490DC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_151490E4;
    }
    // 0x151490DC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x151490E0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151490E4:
    // 0x151490E4: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x151490E8: bgez        $t7, L_151490F8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x151490EC: sb          $v1, 0x1B($v0)
        MEM_B(0X1B, ctx->r2) = ctx->r3;
            goto L_151490F8;
    }
    // 0x151490EC: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x151490F0: jr          $ra
    // 0x151490F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151490F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151490F8:
    // 0x151490F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151490FC: jr          $ra
    // 0x15149100: nop

    return;
    return;
    // 0x15149100: nop

;}
RECOMP_FUNC void func_151AA6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA6D8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151AA6DC: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151AA6E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151AA6E4: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x151AA6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AA6EC: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151AA6F0: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151AA6F4: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x151AA6F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AA6FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA700: lwc1        $f6, -0x7054($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7054);
    // 0x151AA704: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x151AA708: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x151AA70C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151AA710: addiu       $t7, $zero, 0xC01
    ctx->r15 = ADD32(0, 0XC01);
    // 0x151AA714: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151AA718: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151AA71C: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    // 0x151AA720: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x151AA724: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x151AA728: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x151AA72C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151AA730: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x151AA734: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151AA738: sh          $t7, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r15;
    // 0x151AA73C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x151AA740: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151AA744: sb          $zero, 0x62($sp)
    MEM_B(0X62, ctx->r29) = 0;
    // 0x151AA748: sb          $zero, 0x61($sp)
    MEM_B(0X61, ctx->r29) = 0;
    // 0x151AA74C: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x151AA750: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
    // 0x151AA754: sb          $zero, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = 0;
    // 0x151AA758: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x151AA75C: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x151AA760: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x151AA764: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151AA768: sb          $t9, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r25;
    // 0x151AA76C: sh          $zero, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = 0;
    // 0x151AA770: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151AA774: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x151AA778: sb          $t1, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r9;
    // 0x151AA77C: sb          $t2, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r10;
    // 0x151AA780: sb          $t3, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r11;
    // 0x151AA784: sb          $t4, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r12;
    // 0x151AA788: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151AA78C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151AA790: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151AA794: sh          $t5, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r13;
    // 0x151AA798: sh          $t6, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r14;
    // 0x151AA79C: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x151AA7A0: sb          $zero, 0x21($sp)
    MEM_B(0X21, ctx->r29) = 0;
    // 0x151AA7A4: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x151AA7A8: sb          $zero, 0x35($sp)
    MEM_B(0X35, ctx->r29) = 0;
    // 0x151AA7AC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151AA7B0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x151AA7B4: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151AA7B8: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151AA7BC: lwc1        $f18, 0x74($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X74);
    // 0x151AA7C0: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x151AA7C4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AA7C8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151AA7CC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x151AA7D0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151AA7D4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151AA7D8: lwc1        $f16, 0x74($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X74);
    // 0x151AA7DC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AA7E0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AA7E4: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x151AA7E8: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151AA7EC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151AA7F0: lwc1        $f10, 0x74($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X74);
    // 0x151AA7F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151AA7F8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151AA7FC: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    // 0x151AA800: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151AA804: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151AA808: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x151AA80C: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x151AA810: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151AA814: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151AA818: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151AA81C: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151AA820: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151AA824: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151AA828: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151AA82C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x151AA830: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151AA834: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151AA838: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151AA83C: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151AA840: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151AA844: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x151AA848: mul.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x151AA84C: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151AA850: jal         0x150ADA20
    // 0x151AA854: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AA854: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151AA858: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151AA85C: beq         $t1, $zero, L_151AA870
    if (ctx->r9 == 0) {
        // 0x151AA860: nop
    
            goto L_151AA870;
    }
    // 0x151AA860: nop

    // 0x151AA864: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x151AA868: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x151AA86C: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_151AA870:
    // 0x151AA870: jal         0x150ADA20
    // 0x151AA874: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151AA874: nop

    after_1:
    // 0x151AA878: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151AA87C: beq         $t4, $zero, L_151AA890
    if (ctx->r12 == 0) {
        // 0x151AA880: nop
    
            goto L_151AA890;
    }
    // 0x151AA880: nop

    // 0x151AA884: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x151AA888: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x151AA88C: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
L_151AA890:
    // 0x151AA890: jal         0x150ADA20
    // 0x151AA894: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151AA894: nop

    after_2:
    // 0x151AA898: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x151AA89C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA8A0: mfhi        $t9
    ctx->r25 = hi;
    // 0x151AA8A4: addiu       $t8, $t9, 0x32
    ctx->r24 = ADD32(ctx->r25, 0X32);
    // 0x151AA8A8: jal         0x150ADA20
    // 0x151AA8AC: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151AA8AC: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    after_3:
    // 0x151AA8B0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151AA8B4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA8B8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151AA8BC: addiu       $t0, $t7, 0x64
    ctx->r8 = ADD32(ctx->r15, 0X64);
    // 0x151AA8C0: jal         0x150ADA68
    // 0x151AA8C4: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151AA8C4: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    after_4:
    // 0x151AA8C8: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x151AA8CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AA8D0: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x151AA8D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AA8D8: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AA8DC: add.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x151AA8E0: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x151AA8E4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x151AA8E8: jal         0x150ADA20
    // 0x151AA8EC: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151AA8EC: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x151AA8F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151AA8F4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA8F8: mfhi        $t1
    ctx->r9 = hi;
    // 0x151AA8FC: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x151AA900: jal         0x150ADA20
    // 0x151AA904: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151AA904: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    after_6:
    // 0x151AA908: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151AA90C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA910: mfhi        $t3
    ctx->r11 = hi;
    // 0x151AA914: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x151AA918: jal         0x150ADA68
    // 0x151AA91C: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151AA91C: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    after_7:
    // 0x151AA920: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151AA924: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AA928: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA92C: lwc1        $f10, -0x7050($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7050);
    // 0x151AA930: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151AA934: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151AA938: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AA93C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151AA940: jal         0x150ADA68
    // 0x151AA944: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151AA944: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x151AA948: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151AA94C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AA950: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA954: lwc1        $f10, -0x704C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X704C);
    // 0x151AA958: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151AA95C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151AA960: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AA964: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151AA968: jal         0x150ADA20
    // 0x151AA96C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151AA96C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x151AA970: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151AA974: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA978: mfhi        $t5
    ctx->r13 = hi;
    // 0x151AA97C: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x151AA980: jal         0x150ADA20
    // 0x151AA984: sb          $t6, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151AA984: sb          $t6, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r14;
    after_10:
    // 0x151AA988: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151AA98C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AA990: mfhi        $t9
    ctx->r25 = hi;
    // 0x151AA994: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x151AA998: jal         0x150ADA68
    // 0x151AA99C: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x151AA99C: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    after_11:
    // 0x151AA9A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA9A4: lwc1        $f6, -0x7048($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7048);
    // 0x151AA9A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA9AC: lwc1        $f10, -0x7044($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7044);
    // 0x151AA9B0: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151AA9B4: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151AA9B8: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AA9BC: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151AA9C0: jal         0x150ADA68
    // 0x151AA9C4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151AA9C4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x151AA9C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA9CC: lwc1        $f6, -0x7040($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7040);
    // 0x151AA9D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA9D4: lwc1        $f10, -0x703C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X703C);
    // 0x151AA9D8: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151AA9DC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151AA9E0: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AA9E4: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151AA9E8: jal         0x150ADA68
    // 0x151AA9EC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x151AA9EC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x151AA9F0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x151AA9F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AA9F8: lui         $at, 0x4292
    ctx->r1 = S32(0X4292 << 16);
    // 0x151AA9FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AAA00: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151AAA04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAA08: lwc1        $f18, -0x7038($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7038);
    // 0x151AAA0C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151AAA10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151AAA14: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x151AAA18: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AAA1C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151AAA20: jal         0x151303BC
    // 0x151AAA24: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_151303BC(rdram, ctx);
        goto after_14;
    // 0x151AAA24: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x151AAA28: beq         $v0, $zero, L_151AAA3C
    if (ctx->r2 == 0) {
        // 0x151AAA2C: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_151AAA3C;
    }
    // 0x151AAA2C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151AAA30: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x151AAA34: jal         0x10022EC0
    // 0x151AAA38: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x151AAA38: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_15:
L_151AAA3C:
    // 0x151AAA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AAA40: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x151AAA44: jr          $ra
    // 0x151AAA48: nop

    return;
    return;
    // 0x151AAA48: nop

;}
RECOMP_FUNC void func_15134C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15134C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15134C9C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15134CA0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15134CA4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15134CA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15134CAC: lbu         $t7, 0x28($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X28);
    // 0x15134CB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15134CB4: bnel        $t7, $at, L_15134CC8
    if (ctx->r15 != ctx->r1) {
        // 0x15134CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15134CC8;
    }
    goto skip_0;
    // 0x15134CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15134CBC: jal         0x151BC5A4
    // 0x15134CC0: nop

    func_151BC5A4(rdram, ctx);
        goto after_0;
    // 0x15134CC0: nop

    after_0:
    // 0x15134CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15134CC8:
    // 0x15134CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15134CCC: jr          $ra
    // 0x15134CD0: nop

    return;
    return;
    // 0x15134CD0: nop

;}
RECOMP_FUNC void func_1513B0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B0F8: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x1513B0FC: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1513B100: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1513B104: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1513B108: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1513B10C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1513B110: andi        $s5, $a3, 0xFF
    ctx->r21 = ctx->r7 & 0XFF;
    // 0x1513B114: lw          $s7, 0x1E0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1E0);
    // 0x1513B118: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x1513B11C: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1513B120: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1513B124: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1513B128: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1513B12C: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1513B130: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1513B134: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x1513B138: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x1513B13C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x1513B140: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1513B144: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1513B148: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1513B14C: sw          $a2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r6;
    // 0x1513B150: sw          $a3, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r7;
    // 0x1513B154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513B158: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x1513B15C: jal         0x151036B4
    // 0x1513B160: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_151036B4(rdram, ctx);
        goto after_0;
    // 0x1513B160: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x1513B164: jal         0x150ADA20
    // 0x1513B168: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1513B168: nop

    after_1:
    // 0x1513B16C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513B170: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1513B174: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513B178: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1513B17C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1513B180: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513B184: mfhi        $a0
    ctx->r4 = hi;
    // 0x1513B188: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1513B18C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1513B190: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1513B194: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1513B198: sb          $t7, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r15;
    // 0x1513B19C: swc1        $f22, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f22.u32l;
    // 0x1513B1A0: swc1        $f22, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f22.u32l;
    // 0x1513B1A4: lwc1        $f6, 0x150($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X150);
    // 0x1513B1A8: lwc1        $f4, 0x14C($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X14C);
    // 0x1513B1AC: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x1513B1B0: ori         $t8, $t8, 0x1900
    ctx->r24 = ctx->r24 | 0X1900;
    // 0x1513B1B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513B1B8: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x1513B1BC: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x1513B1C0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1513B1C4: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x1513B1C8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1513B1CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1513B1D0: swc1        $f20, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1D4: swc1        $f20, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1D8: swc1        $f20, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1DC: swc1        $f22, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f22.u32l;
    // 0x1513B1E0: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x1513B1E4: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x1513B1E8: swc1        $f22, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f22.u32l;
    // 0x1513B1EC: swc1        $f22, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f22.u32l;
    // 0x1513B1F0: swc1        $f20, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1F4: swc1        $f20, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1F8: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x1513B1FC: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x1513B200: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    // 0x1513B204: swc1        $f20, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f20.u32l;
    // 0x1513B208: swc1        $f20, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f20.u32l;
    // 0x1513B20C: swc1        $f20, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f20.u32l;
    // 0x1513B210: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x1513B214: swc1        $f20, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f20.u32l;
    // 0x1513B218: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x1513B21C: sh          $t9, 0x198($sp)
    MEM_H(0X198, ctx->r29) = ctx->r25;
    // 0x1513B220: sb          $t0, 0x19C($sp)
    MEM_B(0X19C, ctx->r29) = ctx->r8;
    // 0x1513B224: sw          $zero, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = 0;
    // 0x1513B228: sb          $t1, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = ctx->r9;
    // 0x1513B22C: sb          $zero, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = 0;
    // 0x1513B230: sb          $zero, 0x1A6($sp)
    MEM_B(0X1A6, ctx->r29) = 0;
    // 0x1513B234: sb          $zero, 0x1A7($sp)
    MEM_B(0X1A7, ctx->r29) = 0;
    // 0x1513B238: sb          $zero, 0x1A8($sp)
    MEM_B(0X1A8, ctx->r29) = 0;
    // 0x1513B23C: sb          $zero, 0x1A9($sp)
    MEM_B(0X1A9, ctx->r29) = 0;
    // 0x1513B240: sb          $zero, 0x1AA($sp)
    MEM_B(0X1AA, ctx->r29) = 0;
    // 0x1513B244: sb          $zero, 0x1AB($sp)
    MEM_B(0X1AB, ctx->r29) = 0;
    // 0x1513B248: sb          $t2, 0x1AC($sp)
    MEM_B(0X1AC, ctx->r29) = ctx->r10;
    // 0x1513B24C: sb          $t3, 0x1AE($sp)
    MEM_B(0X1AE, ctx->r29) = ctx->r11;
    // 0x1513B250: sw          $fp, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r30;
    // 0x1513B254: lbu         $t4, 0x3B($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X3B);
    // 0x1513B258: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1513B25C: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x1513B260: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x1513B264: addiu       $t7, $t7, 0x4324
    ctx->r15 = ADD32(ctx->r15, 0X4324);
    // 0x1513B268: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x1513B26C: sh          $t5, 0x1B6($sp)
    MEM_H(0X1B6, ctx->r29) = ctx->r13;
    // 0x1513B270: sh          $t6, 0x1B8($sp)
    MEM_H(0X1B8, ctx->r29) = ctx->r14;
    // 0x1513B274: addiu       $s2, $s2, 0x4328
    ctx->r18 = ADD32(ctx->r18, 0X4328);
    // 0x1513B278: addu        $s6, $a0, $t7
    ctx->r22 = ADD32(ctx->r4, ctx->r15);
    // 0x1513B27C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513B280: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1513B284: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x1513B288: addiu       $s3, $sp, 0x144
    ctx->r19 = ADD32(ctx->r29, 0X144);
    // 0x1513B28C: sb          $t4, 0x1B4($sp)
    MEM_B(0X1B4, ctx->r29) = ctx->r12;
L_1513B290:
    // 0x1513B290: lbu         $t8, 0x0($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X0);
    // 0x1513B294: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x1513B298: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x1513B29C: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x1513B2A0: beq         $t9, $zero, L_1513B2E0
    if (ctx->r25 == 0) {
        // 0x1513B2A4: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_1513B2E0;
    }
    // 0x1513B2A4: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x1513B2A8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1513B2AC: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x1513B2B0: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x1513B2B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1513B2B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513B2BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513B2C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513B2C4: jal         0x15132A4C
    // 0x1513B2C8: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_2;
    // 0x1513B2C8: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    after_2:
    // 0x1513B2CC: beq         $v0, $zero, L_1513B2E0
    if (ctx->r2 == 0) {
        // 0x1513B2D0: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_1513B2E0;
    }
    // 0x1513B2D0: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x1513B2D4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1513B2D8: jal         0x10022EC0
    // 0x1513B2DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x1513B2DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_1513B2E0:
    // 0x1513B2E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513B2E4: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x1513B2E8: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x1513B2EC: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x1513B2F0: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x1513B2F4: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x1513B2F8: bne         $at, $zero, L_1513B290
    if (ctx->r1 != 0) {
        // 0x1513B2FC: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_1513B290;
    }
    // 0x1513B2FC: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x1513B300: lw          $v0, 0x1D4($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X1D4);
    // 0x1513B304: beql        $v0, $zero, L_1513B590
    if (ctx->r2 == 0) {
        // 0x1513B308: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1513B590;
    }
    goto skip_0;
    // 0x1513B308: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x1513B30C: lbu         $t5, 0x74($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X74);
    // 0x1513B310: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1513B314: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x1513B318: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x1513B31C: beq         $t6, $at, L_1513B58C
    if (ctx->r14 == ctx->r1) {
        // 0x1513B320: addiu       $a0, $v0, 0x300
        ctx->r4 = ADD32(ctx->r2, 0X300);
            goto L_1513B58C;
    }
    // 0x1513B320: addiu       $a0, $v0, 0x300
    ctx->r4 = ADD32(ctx->r2, 0X300);
    // 0x1513B324: addiu       $t7, $sp, 0x1C4
    ctx->r15 = ADD32(ctx->r29, 0X1C4);
    // 0x1513B328: addiu       $t8, $sp, 0x1C8
    ctx->r24 = ADD32(ctx->r29, 0X1C8);
    // 0x1513B32C: addiu       $t9, $sp, 0x120
    ctx->r25 = ADD32(ctx->r29, 0X120);
    // 0x1513B330: addiu       $t0, $sp, 0x124
    ctx->r8 = ADD32(ctx->r29, 0X124);
    // 0x1513B334: addiu       $t1, $sp, 0x128
    ctx->r9 = ADD32(ctx->r29, 0X128);
    // 0x1513B338: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1513B33C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1513B340: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1513B344: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1513B348: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1513B34C: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    // 0x1513B350: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    // 0x1513B354: addiu       $a3, $sp, 0x134
    ctx->r7 = ADD32(ctx->r29, 0X134);
    // 0x1513B358: jal         0x1503F404
    // 0x1513B35C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_1503F404(rdram, ctx);
        goto after_4;
    // 0x1513B35C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_4:
    // 0x1513B360: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B364: lwc1        $f16, 0x49A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X49A0);
    // 0x1513B368: swc1        $f22, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f22.u32l;
    // 0x1513B36C: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x1513B370: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x1513B374: lwc1        $f4, 0x150($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X150);
    // 0x1513B378: lwc1        $f18, 0x14C($fp)
    ctx->f18.u32l = MEM_W(ctx->r30, 0X14C);
    // 0x1513B37C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1513B380: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1513B384: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1513B388: lui         $t1, 0x10
    ctx->r9 = S32(0X10 << 16);
    // 0x1513B38C: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1513B390: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x1513B394: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1513B398: ori         $t1, $t1, 0x39E9
    ctx->r9 = ctx->r9 | 0X39E9;
    // 0x1513B39C: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x1513B3A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1513B3A4: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x1513B3A8: addiu       $s4, $s4, 0x4330
    ctx->r20 = ADD32(ctx->r20, 0X4330);
    // 0x1513B3AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513B3B0: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x1513B3B4: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1513B3B8: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x1513B3BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513B3C0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1513B3C4: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x1513B3C8: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x1513B3CC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x1513B3D0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x1513B3D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1513B3D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1513B3DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B3E0: lwc1        $f30, 0x49A4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X49A4);
    // 0x1513B3E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B3E8: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x1513B3EC: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x1513B3F0: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x1513B3F4: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x1513B3F8: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1513B3FC: sb          $t6, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r14;
    // 0x1513B400: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x1513B404: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x1513B408: sb          $zero, 0x109($sp)
    MEM_B(0X109, ctx->r29) = 0;
    // 0x1513B40C: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x1513B410: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x1513B414: sb          $t7, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r15;
    // 0x1513B418: sw          $fp, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r30;
    // 0x1513B41C: lwc1        $f28, 0x49A8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X49A8);
    // 0x1513B420: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x1513B424: lbu         $t8, 0x3B($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X3B);
    // 0x1513B428: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1513B42C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1513B430: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B434: lwc1        $f24, 0x49AC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X49AC);
    // 0x1513B438: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B43C: lwc1        $f22, 0x49B0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X49B0);
    // 0x1513B440: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x1513B444: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513B448: sh          $t9, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r25;
    // 0x1513B44C: sh          $t0, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r8;
    // 0x1513B450: sw          $t1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r9;
    // 0x1513B454: sb          $t4, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r12;
    // 0x1513B458: sb          $t3, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r11;
    // 0x1513B45C: sb          $t2, 0x107($sp)
    MEM_B(0X107, ctx->r29) = ctx->r10;
    // 0x1513B460: lwc1        $f20, 0x49B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X49B4);
    // 0x1513B464: sb          $t8, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r24;
L_1513B468:
    // 0x1513B468: lbu         $t5, 0x0($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X0);
    // 0x1513B46C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1513B470: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1513B474: and         $t6, $t5, $v0
    ctx->r14 = ctx->r13 & ctx->r2;
    // 0x1513B478: bne         $t6, $zero, L_1513B56C
    if (ctx->r14 != 0) {
        // 0x1513B47C: addu        $t8, $s4, $t7
        ctx->r24 = ADD32(ctx->r20, ctx->r15);
            goto L_1513B56C;
    }
    // 0x1513B47C: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x1513B480: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1513B484: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x1513B488: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x1513B48C: sh          $t9, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r25;
    // 0x1513B490: lw          $a2, 0x1D4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X1D4);
    // 0x1513B494: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x1513B498: addiu       $t1, $t1, 0x4338
    ctx->r9 = ADD32(ctx->r9, 0X4338);
    // 0x1513B49C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1513B4A0: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x1513B4A4: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1513B4A8: jal         0x15143134
    // 0x1513B4AC: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_5;
    // 0x1513B4AC: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_5:
    // 0x1513B4B0: jal         0x150ADA20
    // 0x1513B4B4: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1513B4B4: nop

    after_6:
    // 0x1513B4B8: jal         0x150ADA20
    // 0x1513B4BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1513B4BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x1513B4C0: jal         0x150ADA68
    // 0x1513B4C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1513B4C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_8:
    // 0x1513B4C8: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1513B4CC: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1513B4D0: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x1513B4D4: add.s       $f18, $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1513B4D8: mfhi        $a1
    ctx->r5 = hi;
    // 0x1513B4DC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1513B4E0: addiu       $a1, $a1, -0x54
    ctx->r5 = ADD32(ctx->r5, -0X54);
    // 0x1513B4E4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1513B4E8: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x1513B4EC: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x1513B4F0: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1513B4F4: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1513B4F8: jal         0x15143794
    // 0x1513B4FC: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    func_15143794(rdram, ctx);
        goto after_9;
    // 0x1513B4FC: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    after_9:
    // 0x1513B500: jal         0x150ADA68
    // 0x1513B504: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1513B504: nop

    after_10:
    // 0x1513B508: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513B50C: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x1513B510: jal         0x150ADA68
    // 0x1513B514: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1513B514: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x1513B518: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513B51C: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x1513B520: jal         0x150ADA68
    // 0x1513B524: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1513B524: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x1513B528: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1513B52C: add.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x1513B530: jal         0x150ADA20
    // 0x1513B534: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1513B534: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x1513B538: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1513B53C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513B540: mfhi        $t6
    ctx->r14 = hi;
    // 0x1513B544: addiu       $t7, $t6, 0x3C
    ctx->r15 = ADD32(ctx->r14, 0X3C);
    // 0x1513B548: sh          $t7, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r15;
    // 0x1513B54C: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x1513B550: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513B554: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513B558: lw          $a3, 0x1D8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1D8);
    // 0x1513B55C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513B560: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x1513B564: jal         0x1513264C
    // 0x1513B568: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    func_1513264C(rdram, ctx);
        goto after_14;
    // 0x1513B568: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_14:
L_1513B56C:
    // 0x1513B56C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513B570: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x1513B574: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x1513B578: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x1513B57C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x1513B580: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1513B584: bne         $at, $zero, L_1513B468
    if (ctx->r1 != 0) {
        // 0x1513B588: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_1513B468;
    }
    // 0x1513B588: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_1513B58C:
    // 0x1513B58C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1513B590:
    // 0x1513B590: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1513B594: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1513B598: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1513B59C: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1513B5A0: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1513B5A4: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1513B5A8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1513B5AC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1513B5B0: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1513B5B4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1513B5B8: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1513B5BC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1513B5C0: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1513B5C4: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1513B5C8: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1513B5CC: jr          $ra
    // 0x1513B5D0: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    return;
    // 0x1513B5D0: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    // 0x1513B5D4: nop

    // 0x1513B5D8: nop

    // 0x1513B5DC: nop

;}
RECOMP_FUNC void func_15144C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15144C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15144C94: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x15144C98: jal         0x15144B68
    // 0x15144C9C: nop

    func_15144B68(rdram, ctx);
        goto after_0;
    // 0x15144C9C: nop

    after_0:
    // 0x15144CA0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x15144CA4: jal         0x15144B68
    // 0x15144CA8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x15144CA8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x15144CAC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15144CB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15144CB4: lwc1        $f6, 0x56A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X56A8);
    // 0x15144CB8: sub.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15144CBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15144CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15144CC4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15144CC8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15144CCC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15144CD0: bc1fl       L_15144CE4
    if (!c1cs) {
        // 0x15144CD4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_15144CE4;
    }
    goto skip_0;
    // 0x15144CD4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_0:
    // 0x15144CD8: lwc1        $f8, 0x56AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X56AC);
    // 0x15144CDC: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15144CE0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15144CE4:
    // 0x15144CE4: jr          $ra
    // 0x15144CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15144CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151C1860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1860: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151C1864: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151C1868: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151C186C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151C1870: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151C1874: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151C1878: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
    // 0x151C187C: sb          $t7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r15;
    // 0x151C1880: jal         0x150ADA20
    // 0x151C1884: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151C1884: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x151C1888: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151C188C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C1890: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151C1894: mfhi        $t8
    ctx->r24 = hi;
    // 0x151C1898: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x151C189C: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x151C18A0: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x151C18A4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151C18A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C18AC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x151C18B0: nop

    // 0x151C18B4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x151C18B8: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151C18BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C18C0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151C18C4: nop

    // 0x151C18C8: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x151C18CC: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151C18D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C18D4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x151C18D8: jal         0x150ADA20
    // 0x151C18DC: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C18DC: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_1:
    // 0x151C18E0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151C18E4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C18E8: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x151C18EC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x151C18F0: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C18F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C18F8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C18FC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C1900: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C1904: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151C1908: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C190C: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x151C1910: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151C1914: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151C1918: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C191C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C1920: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C1924: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151C1928: jal         0x151602C0
    // 0x151C192C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x151C192C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x151C1930: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151C1934: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151C1938: jr          $ra
    // 0x151C193C: nop

    return;
    return;
    // 0x151C193C: nop

;}
RECOMP_FUNC void func_10017780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017780: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x10017784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017788: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1001778C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x10017790: jal         0x10024880
    // 0x10017794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10017794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x10017798: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1001779C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x100177A0: lw          $t6, -0x45E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45E0);
    // 0x100177A4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x100177A8: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x100177AC: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x100177B0: lw          $t8, 0x28B8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X28B8);
    // 0x100177B4: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x100177B8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x100177BC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x100177C0: sh          $t7, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r15;
    // 0x100177C4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x100177C8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x100177CC: beq         $t2, $zero, L_10017844
    if (ctx->r10 == 0) {
        // 0x100177D0: nop
    
            goto L_10017844;
    }
    // 0x100177D0: nop

L_100177D4:
    // 0x100177D4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x100177D8: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x100177DC: beq         $t4, $zero, L_10017828
    if (ctx->r12 == 0) {
        // 0x100177E0: nop
    
            goto L_10017828;
    }
    // 0x100177E0: nop

    // 0x100177E4: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x100177E8: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x100177EC: lbu         $t6, 0x2($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X2);
    // 0x100177F0: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x100177F4: bne         $t9, $t8, L_10017828
    if (ctx->r25 != ctx->r24) {
        // 0x100177F8: nop
    
            goto L_10017828;
    }
    // 0x100177F8: nop

    // 0x100177FC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x10017800: sh          $t0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r8;
    // 0x10017804: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10017808: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1001780C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10017810: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x10017814: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x10017818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1001781C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017820: jal         0x1001C224
    // 0x10017824: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10017824: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
L_10017828:
    // 0x10017828: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1001782C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10017830: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x10017834: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x10017838: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001783C: bne         $t4, $zero, L_100177D4
    if (ctx->r12 != 0) {
        // 0x10017840: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_100177D4;
    }
    // 0x10017840: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_10017844:
    // 0x10017844: jal         0x10024880
    // 0x10017848: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x10017848: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x1001784C: b           L_10017854
    // 0x10017850: nop

        goto L_10017854;
    // 0x10017850: nop

L_10017854:
    // 0x10017854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017858: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1001785C: jr          $ra
    // 0x10017860: nop

    return;
    return;
    // 0x10017860: nop

    // 0x10017864: nop

    // 0x10017868: nop

    // 0x1001786C: nop

;}
RECOMP_FUNC void func_1507A428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A428: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A42C: lbu         $t7, 0x1890($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507A430: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507A434: lbu         $t0, 0x1891($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1891);
    // 0x1507A438: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507A43C: lbu         $t4, 0x1892($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1892);
    // 0x1507A440: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1507A444: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A448: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x1507A44C: lbu         $t9, 0x1893($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X1893);
    // 0x1507A450: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x1507A454: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x1507A458: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1507A45C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507A460: lw          $t8, 0x154C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X154C);
    // 0x1507A464: or          $v0, $t6, $t9
    ctx->r2 = ctx->r14 | ctx->r25;
    // 0x1507A468: ori         $t0, $v0, 0x1
    ctx->r8 = ctx->r2 | 0X1;
    // 0x1507A46C: nor         $t0, $t0, $zero
    ctx->r8 = ~(ctx->r8 | 0);
    // 0x1507A470: sw          $t0, 0x94($t8)
    MEM_W(0X94, ctx->r24) = ctx->r8;
    // 0x1507A474: jr          $ra
    // 0x1507A478: nop

    return;
    return;
    // 0x1507A478: nop

;}
RECOMP_FUNC void func_1500FA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500FA64: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1500FA68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500FA6C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1500FA70: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x1500FA74: addiu       $t7, $t7, 0x6320
    ctx->r15 = ADD32(ctx->r15, 0X6320);
    // 0x1500FA78: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1500FA7C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x1500FA80: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x1500FA84: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1500FA88: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x1500FA8C: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x1500FA90: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1500FA94: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1500FA98: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x1500FA9C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1500FAA0: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x1500FAA4: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x1500FAA8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1500FAAC: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x1500FAB0: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x1500FAB4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1500FAB8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1500FABC: sb          $t1, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r9;
    // 0x1500FAC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500FAC4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1500FAC8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500FACC: jal         0x151ACBD4
    // 0x1500FAD0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_0;
    // 0x1500FAD0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1500FAD4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1500FAD8: addiu       $t3, $t3, 0x6338
    ctx->r11 = ADD32(ctx->r11, 0X6338);
    // 0x1500FADC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1500FAE0: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x1500FAE4: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x1500FAE8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1500FAEC: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x1500FAF0: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    // 0x1500FAF4: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1500FAF8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1500FAFC: sw          $t9, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r25;
    // 0x1500FB00: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x1500FB04: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x1500FB08: lw          $t9, 0x14($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X14);
    // 0x1500FB0C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1500FB10: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x1500FB14: sw          $t9, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r25;
    // 0x1500FB18: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1500FB1C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1500FB20: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    // 0x1500FB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500FB28: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1500FB2C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500FB30: jal         0x151ACBD4
    // 0x1500FB34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_1;
    // 0x1500FB34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1500FB38: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1500FB3C: addiu       $t7, $t7, 0x6350
    ctx->r15 = ADD32(ctx->r15, 0X6350);
    // 0x1500FB40: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1500FB44: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x1500FB48: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x1500FB4C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1500FB50: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x1500FB54: lw          $t5, 0xC($t7)
    ctx->r13 = MEM_W(ctx->r15, 0XC);
    // 0x1500FB58: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1500FB5C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x1500FB60: sw          $t5, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r13;
    // 0x1500FB64: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1500FB68: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x1500FB6C: lw          $t5, 0x14($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X14);
    // 0x1500FB70: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1500FB74: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x1500FB78: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
    // 0x1500FB7C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1500FB80: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1500FB84: sb          $t4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r12;
    // 0x1500FB88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500FB8C: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1500FB90: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500FB94: jal         0x151ACBD4
    // 0x1500FB98: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_2;
    // 0x1500FB98: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x1500FB9C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x1500FBA0: addiu       $t2, $t2, 0x6368
    ctx->r10 = ADD32(ctx->r10, 0X6368);
    // 0x1500FBA4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x1500FBA8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x1500FBAC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x1500FBB0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1500FBB4: lw          $t8, 0x4($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X4);
    // 0x1500FBB8: addiu       $t1, $t1, 0x6380
    ctx->r9 = ADD32(ctx->r9, 0X6380);
    // 0x1500FBBC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1500FBC0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1500FBC4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x1500FBC8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1500FBCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500FBD0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x1500FBD4: lw          $t8, 0xC($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XC);
    // 0x1500FBD8: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x1500FBDC: lw          $at, 0x10($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X10);
    // 0x1500FBE0: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x1500FBE4: lw          $t8, 0x14($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X14);
    // 0x1500FBE8: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x1500FBEC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1500FBF0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1500FBF4: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x1500FBF8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1500FBFC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1500FC00: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x1500FC04: lw          $t7, 0xC($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XC);
    // 0x1500FC08: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x1500FC0C: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x1500FC10: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x1500FC14: lw          $t7, 0x14($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X14);
    // 0x1500FC18: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x1500FC1C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1500FC20: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1500FC24: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
    // 0x1500FC28: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1500FC2C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500FC30: jal         0x151ACBD4
    // 0x1500FC34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_3;
    // 0x1500FC34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x1500FC38: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1500FC3C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1500FC40: addiu       $a0, $zero, -0x6E7
    ctx->r4 = ADD32(0, -0X6E7);
    // 0x1500FC44: addiu       $a1, $zero, -0x46A
    ctx->r5 = ADD32(0, -0X46A);
    // 0x1500FC48: addiu       $a2, $zero, 0x421
    ctx->r6 = ADD32(0, 0X421);
    // 0x1500FC4C: jal         0x1500F9D0
    // 0x1500FC50: addiu       $a3, $zero, -0x648
    ctx->r7 = ADD32(0, -0X648);
    func_1500F9D0(rdram, ctx);
        goto after_4;
    // 0x1500FC50: addiu       $a3, $zero, -0x648
    ctx->r7 = ADD32(0, -0X648);
    after_4:
    // 0x1500FC54: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1500FC58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1500FC5C: addiu       $a0, $zero, -0xA71
    ctx->r4 = ADD32(0, -0XA71);
    // 0x1500FC60: addiu       $a1, $zero, 0x71B
    ctx->r5 = ADD32(0, 0X71B);
    // 0x1500FC64: addiu       $a2, $zero, 0x82B
    ctx->r6 = ADD32(0, 0X82B);
    // 0x1500FC68: jal         0x1500F9D0
    // 0x1500FC6C: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    func_1500F9D0(rdram, ctx);
        goto after_5;
    // 0x1500FC6C: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    after_5:
    // 0x1500FC70: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1500FC74: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1500FC78: addiu       $a0, $zero, -0x870
    ctx->r4 = ADD32(0, -0X870);
    // 0x1500FC7C: addiu       $a1, $zero, 0x36E
    ctx->r5 = ADD32(0, 0X36E);
    // 0x1500FC80: addiu       $a2, $zero, 0x4E1
    ctx->r6 = ADD32(0, 0X4E1);
    // 0x1500FC84: jal         0x1500F9D0
    // 0x1500FC88: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    func_1500F9D0(rdram, ctx);
        goto after_6;
    // 0x1500FC88: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    after_6:
    // 0x1500FC8C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1500FC90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1500FC94: addiu       $a0, $zero, -0xBD5
    ctx->r4 = ADD32(0, -0XBD5);
    // 0x1500FC98: addiu       $a1, $zero, 0x3F1
    ctx->r5 = ADD32(0, 0X3F1);
    // 0x1500FC9C: addiu       $a2, $zero, 0x659
    ctx->r6 = ADD32(0, 0X659);
    // 0x1500FCA0: jal         0x1500F9D0
    // 0x1500FCA4: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    func_1500F9D0(rdram, ctx);
        goto after_7;
    // 0x1500FCA4: addiu       $a3, $zero, -0x602
    ctx->r7 = ADD32(0, -0X602);
    after_7:
    // 0x1500FCA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1500FCAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1500FCB0: addiu       $a0, $zero, -0xE6B
    ctx->r4 = ADD32(0, -0XE6B);
    // 0x1500FCB4: addiu       $a1, $zero, -0x263
    ctx->r5 = ADD32(0, -0X263);
    // 0x1500FCB8: addiu       $a2, $zero, -0x427
    ctx->r6 = ADD32(0, -0X427);
    // 0x1500FCBC: jal         0x1500F9D0
    // 0x1500FCC0: addiu       $a3, $zero, -0x647
    ctx->r7 = ADD32(0, -0X647);
    func_1500F9D0(rdram, ctx);
        goto after_8;
    // 0x1500FCC0: addiu       $a3, $zero, -0x647
    ctx->r7 = ADD32(0, -0X647);
    after_8:
    // 0x1500FCC4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500FCC8: addiu       $v0, $v0, -0x32E0
    ctx->r2 = ADD32(ctx->r2, -0X32E0);
    // 0x1500FCCC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1500FCD0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500FCD4: addiu       $v1, $v1, -0x32D8
    ctx->r3 = ADD32(ctx->r3, -0X32D8);
    // 0x1500FCD8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x1500FCDC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1500FCE0: bgez        $t6, L_1500FCF8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1500FCE4: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500FCF8;
    }
    // 0x1500FCE4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500FCE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FCEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500FCF0: nop

    // 0x1500FCF4: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500FCF8:
    // 0x1500FCF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FCFC: swc1        $f18, -0x325C($at)
    MEM_W(-0X325C, ctx->r1) = ctx->f18.u32l;
    // 0x1500FD00: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x1500FD04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FD08: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1500FD0C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1500FD10: bgez        $t0, L_1500FD24
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1500FD14: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500FD24;
    }
    // 0x1500FD14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500FD18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500FD1C: nop

    // 0x1500FD20: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1500FD24:
    // 0x1500FD24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FD28: swc1        $f8, -0x3258($at)
    MEM_W(-0X3258, ctx->r1) = ctx->f8.u32l;
    // 0x1500FD2C: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x1500FD30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FD34: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x1500FD38: bgez        $t1, L_1500FD4C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1500FD3C: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500FD4C;
    }
    // 0x1500FD3C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500FD40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500FD44: nop

    // 0x1500FD48: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_1500FD4C:
    // 0x1500FD4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FD50: swc1        $f4, -0x3254($at)
    MEM_W(-0X3254, ctx->r1) = ctx->f4.u32l;
    // 0x1500FD54: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x1500FD58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FD5C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1500FD60: bgez        $t7, L_1500FD74
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500FD64: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500FD74;
    }
    // 0x1500FD64: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500FD68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500FD6C: nop

    // 0x1500FD70: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_1500FD74:
    // 0x1500FD74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FD78: swc1        $f10, -0x3250($at)
    MEM_W(-0X3250, ctx->r1) = ctx->f10.u32l;
    // 0x1500FD7C: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x1500FD80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FD84: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1500FD88: bgez        $t5, L_1500FD9C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500FD8C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500FD9C;
    }
    // 0x1500FD8C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500FD90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500FD94: nop

    // 0x1500FD98: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500FD9C:
    // 0x1500FD9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FDA0: swc1        $f18, -0x324C($at)
    MEM_W(-0X324C, ctx->r1) = ctx->f18.u32l;
    // 0x1500FDA4: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x1500FDA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FDAC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1500FDB0: bgez        $t4, L_1500FDC4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1500FDB4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500FDC4;
    }
    // 0x1500FDB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500FDB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500FDBC: nop

    // 0x1500FDC0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1500FDC4:
    // 0x1500FDC4: lbu         $t9, -0x32C4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32C4);
    // 0x1500FDC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FDCC: swc1        $f8, -0x3248($at)
    MEM_W(-0X3248, ctx->r1) = ctx->f8.u32l;
    // 0x1500FDD0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1500FDD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FDD8: bgez        $t9, L_1500FDEC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500FDDC: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500FDEC;
    }
    // 0x1500FDDC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500FDE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500FDE4: nop

    // 0x1500FDE8: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_1500FDEC:
    // 0x1500FDEC: lbu         $t3, -0x32C3($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32C3);
    // 0x1500FDF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FDF4: swc1        $f4, -0x3244($at)
    MEM_W(-0X3244, ctx->r1) = ctx->f4.u32l;
    // 0x1500FDF8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1500FDFC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500FE00: bgez        $t3, L_1500FE14
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1500FE04: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500FE14;
    }
    // 0x1500FE04: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500FE08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500FE0C: nop

    // 0x1500FE10: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_1500FE14:
    // 0x1500FE14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500FE18: swc1        $f10, -0x3240($at)
    MEM_W(-0X3240, ctx->r1) = ctx->f10.u32l;
    // 0x1500FE1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500FE20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1500FE24: jr          $ra
    // 0x1500FE28: nop

    return;
    return;
    // 0x1500FE28: nop

;}
RECOMP_FUNC void func_15158FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15158FA8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15158FAC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15158FB0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15158FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15158FB8: bne         $a2, $zero, L_15158FF0
    if (ctx->r6 != 0) {
        // 0x15158FBC: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15158FF0;
    }
    // 0x15158FBC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15158FC0: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x15158FC4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x15158FC8: beq         $t7, $t8, L_15158FE0
    if (ctx->r15 == ctx->r24) {
        // 0x15158FCC: nop
    
            goto L_15158FE0;
    }
    // 0x15158FCC: nop

    // 0x15158FD0: lbu         $t9, 0x1C($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1C);
    // 0x15158FD4: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x15158FD8: bnel        $t9, $t0, L_15159078
    if (ctx->r25 != ctx->r8) {
        // 0x15158FDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15159078;
    }
    goto skip_0;
    // 0x15158FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15158FE0:
    // 0x15158FE0: jal         0x1516972C
    // 0x15158FE4: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15158FE4: nop

    after_0:
    // 0x15158FE8: b           L_15159078
    // 0x15158FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15159078;
    // 0x15158FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15158FF0:
    // 0x15158FF0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15158FF4: bnel        $v0, $at, L_15159044
    if (ctx->r2 != ctx->r1) {
        // 0x15158FF8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_15159044;
    }
    goto skip_1;
    // 0x15158FF8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_1:
    // 0x15158FFC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x15159000: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x15159004: bnel        $v0, $v1, L_15159024
    if (ctx->r2 != ctx->r3) {
        // 0x15159008: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_15159024;
    }
    goto skip_2;
    // 0x15159008: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x1515900C: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x15159010: sw          $t1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r9;
    // 0x15159014: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x15159018: b           L_15159074
    // 0x1515901C: sb          $t2, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r10;
        goto L_15159074;
    // 0x1515901C: sb          $t2, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r10;
    // 0x15159020: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_15159024:
    // 0x15159024: bnel        $t3, $v1, L_15159078
    if (ctx->r11 != ctx->r3) {
        // 0x15159028: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15159078;
    }
    goto skip_3;
    // 0x15159028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x1515902C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x15159030: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x15159034: sb          $t4, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r12;
    // 0x15159038: b           L_15159078
    // 0x1515903C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15159078;
    // 0x1515903C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15159040: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_15159044:
    // 0x15159044: bnel        $v0, $at, L_15159078
    if (ctx->r2 != ctx->r1) {
        // 0x15159048: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15159078;
    }
    goto skip_4;
    // 0x15159048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x1515904C: lw          $t5, 0x18($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X18);
    // 0x15159050: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15159054: beq         $t5, $t6, L_1515906C
    if (ctx->r13 == ctx->r14) {
        // 0x15159058: nop
    
            goto L_1515906C;
    }
    // 0x15159058: nop

    // 0x1515905C: lbu         $t7, 0x1C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1C);
    // 0x15159060: lbu         $t8, 0x4($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X4);
    // 0x15159064: bnel        $t7, $t8, L_15159078
    if (ctx->r15 != ctx->r24) {
        // 0x15159068: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15159078;
    }
    goto skip_5;
    // 0x15159068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
L_1515906C:
    // 0x1515906C: jal         0x1519F400
    // 0x15159070: nop

    func_1519F400(rdram, ctx);
        goto after_1;
    // 0x15159070: nop

    after_1:
L_15159074:
    // 0x15159074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15159078:
    // 0x15159078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515907C: jr          $ra
    // 0x15159080: nop

    return;
    return;
    // 0x15159080: nop

;}
RECOMP_FUNC void func_15183D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15183D28: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15183D2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15183D30: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x15183D34: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x15183D38: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15183D3C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15183D40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15183D44: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183D48: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15183D4C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15183D50: addiu       $v0, $v0, -0x2088
    ctx->r2 = ADD32(ctx->r2, -0X2088);
    // 0x15183D54: addiu       $s3, $s3, -0x2180
    ctx->r19 = ADD32(ctx->r19, -0X2180);
    // 0x15183D58: addiu       $s1, $s1, -0x2098
    ctx->r17 = ADD32(ctx->r17, -0X2098);
    // 0x15183D5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15183D60: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
L_15183D64:
    // 0x15183D64: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
    // 0x15183D68: slti        $at, $t6, -0x1
    ctx->r1 = SIGNED(ctx->r14) < -0X1 ? 1 : 0;
    // 0x15183D6C: bnel        $at, $zero, L_15183DAC
    if (ctx->r1 != 0) {
        // 0x15183D70: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15183DAC;
    }
    goto skip_0;
    // 0x15183D70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x15183D74: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15183D78: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15183D7C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x15183D80: addiu       $t3, $zero, -0x2
    ctx->r11 = ADD32(0, -0X2);
    // 0x15183D84: mflo        $t7
    ctx->r15 = lo;
    // 0x15183D88: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x15183D8C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15183D90: beql        $t9, $zero, L_15183DA8
    if (ctx->r25 == 0) {
        // 0x15183D94: sb          $t3, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r11;
            goto L_15183DA8;
    }
    goto skip_1;
    // 0x15183D94: sb          $t3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r11;
    skip_1:
    // 0x15183D98: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15183D9C: bnel        $t2, $zero, L_15183DAC
    if (ctx->r10 != 0) {
        // 0x15183DA0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15183DAC;
    }
    goto skip_2;
    // 0x15183DA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x15183DA4: sb          $t3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r11;
L_15183DA8:
    // 0x15183DA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15183DAC:
    // 0x15183DAC: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x15183DB0: bne         $at, $zero, L_15183D64
    if (ctx->r1 != 0) {
        // 0x15183DB4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15183D64;
    }
    // 0x15183DB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15183DB8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15183DBC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15183DC0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15183DC4: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x15183DC8: addiu       $a2, $a2, -0x209C
    ctx->r6 = ADD32(ctx->r6, -0X209C);
    // 0x15183DCC: addiu       $v1, $v1, -0x20A0
    ctx->r3 = ADD32(ctx->r3, -0X20A0);
    // 0x15183DD0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_15183DD4:
    // 0x15183DD4: blezl       $a0, L_15183DF8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15183DD8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15183DF8;
    }
    goto skip_3;
    // 0x15183DD8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x15183DDC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x15183DE0: subu        $v0, $a0, $t4
    ctx->r2 = SUB32(ctx->r4, ctx->r12);
    // 0x15183DE4: bgezl       $v0, L_15183DF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15183DE8: sb          $v0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r2;
            goto L_15183DF4;
    }
    goto skip_4;
    // 0x15183DE8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    skip_4:
    // 0x15183DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15183DF0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_15183DF4:
    // 0x15183DF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15183DF8:
    // 0x15183DF8: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x15183DFC: bnel        $at, $zero, L_15183DD4
    if (ctx->r1 != 0) {
        // 0x15183E00: lbu         $a0, 0x0($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X0);
            goto L_15183DD4;
    }
    goto skip_5;
    // 0x15183E00: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    skip_5:
    // 0x15183E04: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183E08: addiu       $s1, $s1, -0x2098
    ctx->r17 = ADD32(ctx->r17, -0X2098);
    // 0x15183E0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15183E10: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_15183E14:
    // 0x15183E14: lb          $t5, 0x0($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X0);
    // 0x15183E18: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x15183E1C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x15183E20: bne         $s2, $t5, L_15183E88
    if (ctx->r18 != ctx->r13) {
        // 0x15183E24: sll         $t6, $t6, 3
        ctx->r14 = S32(ctx->r14 << 3);
            goto L_15183E88;
    }
    // 0x15183E24: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15183E28: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15183E2C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15183E30: addiu       $t7, $t7, -0x2F50
    ctx->r15 = ADD32(ctx->r15, -0X2F50);
    // 0x15183E34: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15183E38: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15183E3C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15183E40: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x15183E44: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x15183E48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x15183E4C: lw          $t1, -0x2C40($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2C40);
    // 0x15183E50: mflo        $t8
    ctx->r24 = lo;
    // 0x15183E54: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x15183E58: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x15183E5C: lbu         $t2, 0x72E8($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X72E8);
    // 0x15183E60: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15183E64: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15183E68: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15183E6C: lw          $a2, 0x30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X30);
    // 0x15183E70: addiu       $a3, $v0, 0x24
    ctx->r7 = ADD32(ctx->r2, 0X24);
    // 0x15183E74: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15183E78: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15183E7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15183E80: jal         0x15165C80
    // 0x15183E84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_15165C80(rdram, ctx);
        goto after_0;
    // 0x15183E84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
L_15183E88:
    // 0x15183E88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15183E8C: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x15183E90: bne         $at, $zero, L_15183E14
    if (ctx->r1 != 0) {
        // 0x15183E94: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15183E14;
    }
    // 0x15183E94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15183E98: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183E9C: addiu       $s1, $s1, -0x2096
    ctx->r17 = ADD32(ctx->r17, -0X2096);
    // 0x15183EA0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_15183EA4:
    // 0x15183EA4: lb          $t3, 0x0($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X0);
    // 0x15183EA8: sll         $t4, $s0, 3
    ctx->r12 = S32(ctx->r16 << 3);
    // 0x15183EAC: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x15183EB0: bne         $s2, $t3, L_15183F18
    if (ctx->r18 != ctx->r11) {
        // 0x15183EB4: sll         $t4, $t4, 3
        ctx->r12 = S32(ctx->r12 << 3);
            goto L_15183F18;
    }
    // 0x15183EB4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x15183EB8: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15183EBC: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15183EC0: addiu       $t5, $t5, -0x2CE8
    ctx->r13 = ADD32(ctx->r13, -0X2CE8);
    // 0x15183EC4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x15183EC8: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x15183ECC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15183ED0: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x15183ED4: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x15183ED8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15183EDC: lw          $t9, -0x2C40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2C40);
    // 0x15183EE0: mflo        $t6
    ctx->r14 = lo;
    // 0x15183EE4: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x15183EE8: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x15183EEC: lbu         $t0, 0x72E8($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X72E8);
    // 0x15183EF0: lwc1        $f8, -0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X48);
    // 0x15183EF4: lwc1        $f10, -0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X44);
    // 0x15183EF8: addiu       $a0, $v0, -0x58
    ctx->r4 = ADD32(ctx->r2, -0X58);
    // 0x15183EFC: lw          $a2, -0x40($v0)
    ctx->r6 = MEM_W(ctx->r2, -0X40);
    // 0x15183F00: addiu       $a3, $v0, -0x4C
    ctx->r7 = ADD32(ctx->r2, -0X4C);
    // 0x15183F04: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15183F08: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15183F0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15183F10: jal         0x15165C80
    // 0x15183F14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_15165C80(rdram, ctx);
        goto after_1;
    // 0x15183F14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
L_15183F18:
    // 0x15183F18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15183F1C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x15183F20: bne         $at, $zero, L_15183EA4
    if (ctx->r1 != 0) {
        // 0x15183F24: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15183EA4;
    }
    // 0x15183F24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15183F28: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15183F2C: lb          $t1, -0x2091($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X2091);
    // 0x15183F30: bne         $s2, $t1, L_15183F40
    if (ctx->r18 != ctx->r9) {
        // 0x15183F34: nop
    
            goto L_15183F40;
    }
    // 0x15183F34: nop

    // 0x15183F38: jal         0x1517725C
    // 0x15183F3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_1517725C(rdram, ctx);
        goto after_2;
    // 0x15183F3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
L_15183F40:
    // 0x15183F40: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183F44: addiu       $s1, $s1, -0x2098
    ctx->r17 = ADD32(ctx->r17, -0X2098);
    // 0x15183F48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15183F4C:
    // 0x15183F4C: lb          $t2, 0x8($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X8);
    // 0x15183F50: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x15183F54: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x15183F58: bnel        $s2, $t2, L_15183F6C
    if (ctx->r18 != ctx->r10) {
        // 0x15183F5C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15183F6C;
    }
    goto skip_6;
    // 0x15183F5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
    // 0x15183F60: jal         0x15179DB0
    // 0x15183F64: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_15179DB0(rdram, ctx);
        goto after_3;
    // 0x15183F64: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x15183F68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15183F6C:
    // 0x15183F6C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x15183F70: bne         $at, $zero, L_15183F4C
    if (ctx->r1 != 0) {
        // 0x15183F74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15183F4C;
    }
    // 0x15183F74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15183F78: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15183F7C: lb          $v0, -0x2091($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2091);
    // 0x15183F80: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183F84: addiu       $s1, $s1, -0x2098
    ctx->r17 = ADD32(ctx->r17, -0X2098);
    // 0x15183F88: bne         $s2, $v0, L_15183F98
    if (ctx->r18 != ctx->r2) {
        // 0x15183F8C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15183F98;
    }
    // 0x15183F8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15183F90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183F94: sb          $s2, -0x208E($at)
    MEM_B(-0X208E, ctx->r1) = ctx->r18;
L_15183F98:
    // 0x15183F98: lb          $t4, 0x0($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X0);
    // 0x15183F9C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15183FA0: bnel        $t4, $at, L_15183FCC
    if (ctx->r12 != ctx->r1) {
        // 0x15183FA4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15183FCC;
    }
    goto skip_7;
    // 0x15183FA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x15183FA8: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15183FAC: mflo        $t5
    ctx->r13 = lo;
    // 0x15183FB0: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x15183FB4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15183FB8: beql        $t7, $zero, L_15183FCC
    if (ctx->r15 == 0) {
        // 0x15183FBC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15183FCC;
    }
    goto skip_8;
    // 0x15183FBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_8:
    // 0x15183FC0: jal         0x15183C28
    // 0x15183FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15183C28(rdram, ctx);
        goto after_4;
    // 0x15183FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x15183FC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15183FCC:
    // 0x15183FCC: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x15183FD0: bne         $at, $zero, L_15183F98
    if (ctx->r1 != 0) {
        // 0x15183FD4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15183F98;
    }
    // 0x15183FD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15183FD8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15183FDC: lb          $v0, -0x2098($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2098);
    // 0x15183FE0: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15183FE4: addiu       $s1, $s1, -0x2095
    ctx->r17 = ADD32(ctx->r17, -0X2095);
    // 0x15183FE8: blez        $v0, L_15183FFC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15183FEC: lui         $v1, 0x800E
        ctx->r3 = S32(0X800E << 16);
            goto L_15183FFC;
    }
    // 0x15183FEC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15183FF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183FF4: b           L_15184010
    // 0x15183FF8: sb          $zero, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = 0;
        goto L_15184010;
    // 0x15183FF8: sb          $zero, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = 0;
L_15183FFC:
    // 0x15183FFC: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15184000: bne         $at, $zero, L_15184010
    if (ctx->r1 != 0) {
        // 0x15184004: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_15184010;
    }
    // 0x15184004: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x15184008: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518400C: sb          $t9, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = ctx->r25;
L_15184010:
    // 0x15184010: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15184014: lb          $v0, -0x2097($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2097);
    // 0x15184018: addiu       $v1, $v1, -0x208D
    ctx->r3 = ADD32(ctx->r3, -0X208D);
    // 0x1518401C: blez        $v0, L_15184030
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15184020: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_15184030;
    }
    // 0x15184020: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15184024: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15184028: b           L_15184040
    // 0x1518402C: sb          $zero, -0x2097($at)
    MEM_B(-0X2097, ctx->r1) = 0;
        goto L_15184040;
    // 0x1518402C: sb          $zero, -0x2097($at)
    MEM_B(-0X2097, ctx->r1) = 0;
L_15184030:
    // 0x15184030: bne         $at, $zero, L_15184040
    if (ctx->r1 != 0) {
        // 0x15184034: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_15184040;
    }
    // 0x15184034: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x15184038: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518403C: sb          $t1, -0x2097($at)
    MEM_B(-0X2097, ctx->r1) = ctx->r9;
L_15184040:
    // 0x15184040: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15184044: lb          $v0, -0x2096($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2096);
    // 0x15184048: blez        $v0, L_1518405C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1518404C: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_1518405C;
    }
    // 0x1518404C: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15184050: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15184054: b           L_1518406C
    // 0x15184058: sb          $zero, -0x2096($at)
    MEM_B(-0X2096, ctx->r1) = 0;
        goto L_1518406C;
    // 0x15184058: sb          $zero, -0x2096($at)
    MEM_B(-0X2096, ctx->r1) = 0;
L_1518405C:
    // 0x1518405C: bne         $at, $zero, L_1518406C
    if (ctx->r1 != 0) {
        // 0x15184060: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_1518406C;
    }
    // 0x15184060: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x15184064: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15184068: sb          $t3, -0x2096($at)
    MEM_B(-0X2096, ctx->r1) = ctx->r11;
L_1518406C:
    // 0x1518406C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
L_15184070:
    // 0x15184070: blez        $v0, L_15184080
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15184074: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_15184080;
    }
    // 0x15184074: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15184078: b           L_1518408C
    // 0x1518407C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
        goto L_1518408C;
    // 0x1518407C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_15184080:
    // 0x15184080: bne         $at, $zero, L_1518408C
    if (ctx->r1 != 0) {
        // 0x15184084: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_1518408C;
    }
    // 0x15184084: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x15184088: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
L_1518408C:
    // 0x1518408C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x15184090: blez        $v0, L_151840A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15184094: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_151840A0;
    }
    // 0x15184094: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x15184098: b           L_151840AC
    // 0x1518409C: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
        goto L_151840AC;
    // 0x1518409C: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
L_151840A0:
    // 0x151840A0: bne         $at, $zero, L_151840AC
    if (ctx->r1 != 0) {
        // 0x151840A4: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_151840AC;
    }
    // 0x151840A4: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x151840A8: sb          $t5, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r13;
L_151840AC:
    // 0x151840AC: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x151840B0: blez        $v0, L_151840C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151840B4: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_151840C0;
    }
    // 0x151840B4: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x151840B8: b           L_151840CC
    // 0x151840BC: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
        goto L_151840CC;
    // 0x151840BC: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
L_151840C0:
    // 0x151840C0: bne         $at, $zero, L_151840CC
    if (ctx->r1 != 0) {
        // 0x151840C4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_151840CC;
    }
    // 0x151840C4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x151840C8: sb          $t6, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r14;
L_151840CC:
    // 0x151840CC: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x151840D0: blez        $v0, L_151840E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151840D4: slti        $at, $v0, -0x1
        ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
            goto L_151840E0;
    }
    // 0x151840D4: slti        $at, $v0, -0x1
    ctx->r1 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x151840D8: b           L_151840EC
    // 0x151840DC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
        goto L_151840EC;
    // 0x151840DC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_151840E0:
    // 0x151840E0: bne         $at, $zero, L_151840EC
    if (ctx->r1 != 0) {
        // 0x151840E4: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_151840EC;
    }
    // 0x151840E4: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x151840E8: sb          $t7, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r15;
L_151840EC:
    // 0x151840EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x151840F0: bnel        $s1, $v1, L_15184070
    if (ctx->r17 != ctx->r3) {
        // 0x151840F4: lb          $v0, 0x0($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X0);
            goto L_15184070;
    }
    goto skip_9;
    // 0x151840F4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    skip_9:
    // 0x151840F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151840FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15184100: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x15184104: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x15184108: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1518410C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x15184110: jr          $ra
    // 0x15184114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15184114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151903D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151903D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151903D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151903D8: addiu       $a1, $a0, 0x20
    ctx->r5 = ADD32(ctx->r4, 0X20);
    // 0x151903DC: jal         0x15163DEC
    // 0x151903E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15163DEC(rdram, ctx);
        goto after_0;
    // 0x151903E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151903E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151903E8: jal         0x15163F50
    // 0x151903EC: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_15163F50(rdram, ctx);
        goto after_1;
    // 0x151903EC: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_1:
    // 0x151903F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151903F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151903F8: jr          $ra
    // 0x151903FC: nop

    return;
    return;
    // 0x151903FC: nop

;}
RECOMP_FUNC void func_1505E060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505E060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1505E064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505E068: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1505E06C: lhu         $t6, 0x4($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X4);
    // 0x1505E070: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x1505E074: lwc1        $f6, 0x10($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X10);
    // 0x1505E078: lwc1        $f8, 0x20($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X20);
    // 0x1505E07C: lwc1        $f10, 0x18($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1505E080: lb          $t7, 0x38($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X38);
    // 0x1505E084: lw          $t8, 0x28($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X28);
    // 0x1505E088: addiu       $a0, $a3, 0x40
    ctx->r4 = ADD32(ctx->r7, 0X40);
    // 0x1505E08C: addiu       $a1, $a3, 0x210
    ctx->r5 = ADD32(ctx->r7, 0X210);
    // 0x1505E090: addiu       $a2, $zero, 0x1D0
    ctx->r6 = ADD32(0, 0X1D0);
    // 0x1505E094: sh          $t6, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r14;
    // 0x1505E098: swc1        $f4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f4.u32l;
    // 0x1505E09C: swc1        $f6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f6.u32l;
    // 0x1505E0A0: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
    // 0x1505E0A4: swc1        $f10, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f10.u32l;
    // 0x1505E0A8: sb          $t7, 0x39($a3)
    MEM_B(0X39, ctx->r7) = ctx->r15;
    // 0x1505E0AC: jal         0x10023A10
    // 0x1505E0B0: sw          $t8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r24;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1505E0B0: sw          $t8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r24;
    after_0:
    // 0x1505E0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505E0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1505E0BC: jr          $ra
    // 0x1505E0C0: nop

    return;
    return;
    // 0x1505E0C0: nop

;}
RECOMP_FUNC void func_150F85A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F85A0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150F85A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150F85A8: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x150F85AC: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150F85B0: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x150F85B4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150F85B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F85BC: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x150F85C0: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x150F85C4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150F85C8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F85CC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F85D0: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x150F85D4: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150F85D8: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x150F85DC: sb          $t6, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r14;
    // 0x150F85E0: jal         0x150ADA20
    // 0x150F85E4: sb          $t7, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150F85E4: sb          $t7, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r15;
    after_0:
    // 0x150F85E8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150F85EC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F85F0: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150F85F4: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F85F8: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150F85FC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150F8600: mfhi        $t8
    ctx->r24 = hi;
    // 0x150F8604: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x150F8608: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F860C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150F8610: sh          $t9, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r25;
    // 0x150F8614: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F8618: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150F861C: sb          $zero, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = 0;
    // 0x150F8620: sw          $t1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r9;
    // 0x150F8624: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150F8628: sw          $t3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r11;
    // 0x150F862C: jal         0x150ADA20
    // 0x150F8630: sw          $t5, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150F8630: sw          $t5, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r13;
    after_1:
    // 0x150F8634: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150F8638: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F863C: mfhi        $a2
    ctx->r6 = hi;
    // 0x150F8640: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F8644: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F8648: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F864C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F8650: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F8654: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150F8658: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150F865C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150F8660: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F8664: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F8668: addiu       $a2, $a2, 0x5A
    ctx->r6 = ADD32(ctx->r6, 0X5A);
    // 0x150F866C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x150F8670: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x150F8674: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150F8678: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F867C: jal         0x151602C0
    // 0x150F8680: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x150F8680: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x150F8684: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150F8688: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x150F868C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x150F8690: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x150F8694: addiu       $t4, $sp, 0xC4
    ctx->r12 = ADD32(ctx->r29, 0XC4);
    // 0x150F8698: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150F869C: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x150F86A0: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x150F86A4: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150F86A8: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x150F86AC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150F86B0: addiu       $t9, $zero, -0x40
    ctx->r25 = ADD32(0, -0X40);
    // 0x150F86B4: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x150F86B8: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150F86BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150F86C0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x150F86C4: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150F86C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F86CC: lwc1        $f18, 0x1C60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1C60);
    // 0x150F86D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F86D4: lwc1        $f4, 0x1C64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1C64);
    // 0x150F86D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F86DC: lwc1        $f6, 0x1C68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1C68);
    // 0x150F86E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F86E4: lwc1        $f8, 0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1C6C);
    // 0x150F86E8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150F86EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F86F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F86F4: sh          $t0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r8;
    // 0x150F86F8: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x150F86FC: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x150F8700: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F8704: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150F8708: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150F870C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F8710: sh          $t9, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r25;
    // 0x150F8714: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x150F8718: sh          $t6, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r14;
    // 0x150F871C: sh          $t5, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r13;
    // 0x150F8720: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
    // 0x150F8724: sb          $t4, 0x7E($sp)
    MEM_B(0X7E, ctx->r29) = ctx->r12;
    // 0x150F8728: sb          $t7, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = ctx->r15;
    // 0x150F872C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F8730: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F8734: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F8738: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F873C: sb          $t0, 0x82($sp)
    MEM_B(0X82, ctx->r29) = ctx->r8;
    // 0x150F8740: sb          $t1, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r9;
    // 0x150F8744: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F8748: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F874C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F8750: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F8754: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F8758: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F875C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F8760: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x150F8764: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F8768: sh          $t8, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r24;
    // 0x150F876C: sb          $t9, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r25;
    // 0x150F8770: sb          $t2, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r10;
    // 0x150F8774: sb          $t6, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r14;
    // 0x150F8778: sb          $t5, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r13;
    // 0x150F877C: sb          $t3, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r11;
    // 0x150F8780: sb          $t4, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r12;
    // 0x150F8784: sb          $t7, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r15;
    // 0x150F8788: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x150F878C: lui         $t1, 0x6
    ctx->r9 = S32(0X6 << 16);
    // 0x150F8790: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150F8794: addiu       $t9, $zero, 0x24
    ctx->r25 = ADD32(0, 0X24);
    // 0x150F8798: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x150F879C: ori         $t1, $t1, 0x600
    ctx->r9 = ctx->r9 | 0X600;
    // 0x150F87A0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150F87A4: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x150F87A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150F87AC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F87B0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150F87B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F87B8: sh          $zero, 0x68($sp)
    MEM_H(0X68, ctx->r29) = 0;
    // 0x150F87BC: sb          $t8, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r24;
    // 0x150F87C0: sb          $zero, 0x85($sp)
    MEM_B(0X85, ctx->r29) = 0;
    // 0x150F87C4: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x150F87C8: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
    // 0x150F87CC: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x150F87D0: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150F87D4: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x150F87D8: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x150F87DC: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150F87E0: sb          $zero, 0x92($sp)
    MEM_B(0X92, ctx->r29) = 0;
    // 0x150F87E4: sb          $t8, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r24;
    // 0x150F87E8: sb          $t9, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r25;
    // 0x150F87EC: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x150F87F0: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
    // 0x150F87F4: sh          $t2, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r10;
    // 0x150F87F8: sh          $t6, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r14;
    // 0x150F87FC: sh          $t5, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r13;
    // 0x150F8800: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x150F8804: sb          $t3, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r11;
    // 0x150F8808: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x150F880C: sb          $t4, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r12;
    // 0x150F8810: sb          $t7, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r15;
    // 0x150F8814: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150F8818: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150F881C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150F8820: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x150F8824: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x150F8828: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x150F882C: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x150F8830: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x150F8834: jal         0x15152B38
    // 0x150F8838: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    func_15152B38(rdram, ctx);
        goto after_3;
    // 0x150F8838: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150F883C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150F8840: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x150F8844: jr          $ra
    // 0x150F8848: nop

    return;
    return;
    // 0x150F8848: nop

;}
RECOMP_FUNC void func_151607A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151607A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151607A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151607AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151607B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151607B4: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x151607B8: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x151607BC: beq         $t6, $zero, L_1516085C
    if (ctx->r14 == 0) {
        // 0x151607C0: nop
    
            goto L_1516085C;
    }
    // 0x151607C0: nop

    // 0x151607C4: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x151607C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151607CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151607D0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151607D4: nop

    // 0x151607D8: bc1f        L_1516084C
    if (!c1cs) {
        // 0x151607DC: nop
    
            goto L_1516084C;
    }
    // 0x151607DC: nop

    // 0x151607E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151607E4: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151607E8: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151607EC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151607F0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151607F4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151607F8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151607FC: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x15160800: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15160804: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15160808: nop

    // 0x1516080C: bc1fl       L_151608B4
    if (!c1cs) {
        // 0x15160810: cfc1        $t2, $FpcCsr
        ctx->r10 = get_cop1_cs();
            goto L_151608B4;
    }
    goto skip_0;
    // 0x15160810: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    skip_0:
    // 0x15160814: lh          $t7, 0x10($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X10);
    // 0x15160818: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x1516081C: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x15160820: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x15160824: sh          $t8, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r24;
    // 0x15160828: lh          $t9, 0x10($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X10);
    // 0x1516082C: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x15160830: addiu       $a3, $a1, 0xC
    ctx->r7 = ADD32(ctx->r5, 0XC);
    // 0x15160834: beql        $t9, $zero, L_151608B4
    if (ctx->r25 == 0) {
        // 0x15160838: cfc1        $t2, $FpcCsr
        ctx->r10 = get_cop1_cs();
            goto L_151608B4;
    }
    goto skip_1;
    // 0x15160838: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    skip_1:
    // 0x1516083C: jal         0x15160954
    // 0x15160840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_15160954(rdram, ctx);
        goto after_0;
    // 0x15160840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x15160844: b           L_151608B4
    // 0x15160848: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
        goto L_151608B4;
    // 0x15160848: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_1516084C:
    // 0x1516084C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15160850: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15160854: b           L_151608B0
    // 0x15160858: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
        goto L_151608B0;
    // 0x15160858: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
L_1516085C:
    // 0x1516085C: jal         0x150ADA68
    // 0x15160860: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15160860: nop

    after_1:
    // 0x15160864: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15160868: lwc1        $f16, 0x6AD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6AD4);
    // 0x1516086C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15160870: nop

    // 0x15160874: bc1fl       L_151608B4
    if (!c1cs) {
        // 0x15160878: cfc1        $t2, $FpcCsr
        ctx->r10 = get_cop1_cs();
            goto L_151608B4;
    }
    goto skip_2;
    // 0x15160878: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    skip_2:
    // 0x1516087C: jal         0x150ADA20
    // 0x15160880: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15160880: nop

    after_2:
    // 0x15160884: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15160888: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1516088C: mfhi        $t0
    ctx->r8 = hi;
    // 0x15160890: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x15160894: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x15160898: sh          $t1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r9;
    // 0x1516089C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151608A0: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x151608A4: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x151608A8: jal         0x15160954
    // 0x151608AC: addiu       $a3, $a1, 0xC
    ctx->r7 = ADD32(ctx->r5, 0XC);
    func_15160954(rdram, ctx);
        goto after_3;
    // 0x151608AC: addiu       $a3, $a1, 0xC
    ctx->r7 = ADD32(ctx->r5, 0XC);
    after_3:
L_151608B0:
    // 0x151608B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_151608B4:
    // 0x151608B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151608B8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151608BC: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151608C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151608C4: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151608C8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151608CC: nop

    // 0x151608D0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x151608D4: beql        $t3, $zero, L_15160924
    if (ctx->r11 == 0) {
        // 0x151608D8: mfc1        $t3, $f18
        ctx->r11 = (int32_t)ctx->f18.u32l;
            goto L_15160924;
    }
    goto skip_3;
    // 0x151608D8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x151608DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151608E0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151608E4: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x151608E8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151608EC: nop

    // 0x151608F0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151608F4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151608F8: nop

    // 0x151608FC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x15160900: bne         $t3, $zero, L_15160918
    if (ctx->r11 != 0) {
        // 0x15160904: nop
    
            goto L_15160918;
    }
    // 0x15160904: nop

    // 0x15160908: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x1516090C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15160910: b           L_15160930
    // 0x15160914: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_15160930;
    // 0x15160914: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_15160918:
    // 0x15160918: b           L_15160930
    // 0x1516091C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_15160930;
    // 0x1516091C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x15160920: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
L_15160924:
    // 0x15160924: nop

    // 0x15160928: bltz        $t3, L_15160918
    if (SIGNED(ctx->r11) < 0) {
        // 0x1516092C: nop
    
            goto L_15160918;
    }
    // 0x1516092C: nop

L_15160930:
    // 0x15160930: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x15160934: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x15160938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516093C: sb          $t3, 0x2F($t4)
    MEM_B(0X2F, ctx->r12) = ctx->r11;
    // 0x15160940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15160944: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15160948: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1516094C: jr          $ra
    // 0x15160950: nop

    return;
    return;
    // 0x15160950: nop

;}
RECOMP_FUNC void func_150E0D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E0D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150E0D94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150E0D98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E0D9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150E0DA0: lbu         $t6, 0x23E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23E);
    // 0x150E0DA4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150E0DA8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150E0DAC: bnel        $t6, $at, L_150E0E80
    if (ctx->r14 != ctx->r1) {
        // 0x150E0DB0: lw          $t6, 0x2C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2C);
            goto L_150E0E80;
    }
    goto skip_0;
    // 0x150E0DB0: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    skip_0:
    // 0x150E0DB4: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x150E0DB8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x150E0DBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150E0DC0: bne         $t7, $at, L_150E0DD0
    if (ctx->r15 != ctx->r1) {
        // 0x150E0DC4: addiu       $a1, $zero, 0x4044
        ctx->r5 = ADD32(0, 0X4044);
            goto L_150E0DD0;
    }
    // 0x150E0DC4: addiu       $a1, $zero, 0x4044
    ctx->r5 = ADD32(0, 0X4044);
    // 0x150E0DC8: jal         0x1509BFB0
    // 0x150E0DCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x150E0DCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_150E0DD0:
    // 0x150E0DD0: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x150E0DD4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x150E0DD8: beql        $t8, $at, L_150E0E68
    if (ctx->r24 == ctx->r1) {
        // 0x150E0DDC: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_150E0E68;
    }
    goto skip_1;
    // 0x150E0DDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x150E0DE0: lw          $t9, 0x6C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C8);
    // 0x150E0DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150E0DE8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150E0DEC: bne         $t9, $zero, L_150E0E64
    if (ctx->r25 != 0) {
        // 0x150E0DF0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150E0E64;
    }
    // 0x150E0DF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E0DF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E0DF8: jal         0x15123934
    // 0x150E0DFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x150E0DFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x150E0E00: beq         $v0, $zero, L_150E0E38
    if (ctx->r2 == 0) {
        // 0x150E0E04: lui         $at, 0x30
        ctx->r1 = S32(0X30 << 16);
            goto L_150E0E38;
    }
    // 0x150E0E04: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x150E0E08: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150E0E0C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150E0E10: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150E0E14: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150E0E18: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150E0E1C: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150E0E20: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x150E0E24: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
    // 0x150E0E28: sh          $t4, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r12;
    // 0x150E0E2C: sh          $t5, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r13;
    // 0x150E0E30: jal         0x15124B18
    // 0x150E0E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x150E0E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_150E0E38:
    // 0x150E0E38: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x150E0E3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E0E40: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150E0E44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E0E48: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150E0E4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E0E50: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150E0E54: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150E0E58: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x150E0E5C: b           L_150E0E70
    // 0x150E0E60: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
        goto L_150E0E70;
    // 0x150E0E60: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_150E0E64:
    // 0x150E0E64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_150E0E68:
    // 0x150E0E68: nop

    // 0x150E0E6C: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
L_150E0E70:
    // 0x150E0E70: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0E74: b           L_150E0EEC
    // 0x150E0E78: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
        goto L_150E0EEC;
    // 0x150E0E78: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x150E0E7C: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
L_150E0E80:
    // 0x150E0E80: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150E0E84: bne         $t6, $at, L_150E0EC4
    if (ctx->r14 != ctx->r1) {
        // 0x150E0E88: nop
    
            goto L_150E0EC4;
    }
    // 0x150E0E88: nop

    // 0x150E0E8C: lw          $t7, 0x6C8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X6C8);
    // 0x150E0E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150E0E94: bne         $t7, $zero, L_150E0EC4
    if (ctx->r15 != 0) {
        // 0x150E0E98: nop
    
            goto L_150E0EC4;
    }
    // 0x150E0E98: nop

    // 0x150E0E9C: jal         0x151239CC
    // 0x150E0EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x150E0EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x150E0EA4: beq         $v0, $zero, L_150E0EC4
    if (ctx->r2 == 0) {
        // 0x150E0EA8: lui         $at, 0x42DC
        ctx->r1 = S32(0X42DC << 16);
            goto L_150E0EC4;
    }
    // 0x150E0EA8: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x150E0EAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E0EB0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150E0EB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E0EB8: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150E0EBC: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150E0EC0: swc1        $f10, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f10.u32l;
L_150E0EC4:
    // 0x150E0EC4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0EC8: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x150E0ECC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x150E0ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150E0ED4: bne         $v1, $at, L_150E0EEC
    if (ctx->r3 != ctx->r1) {
        // 0x150E0ED8: addiu       $a1, $zero, 0x4044
        ctx->r5 = ADD32(0, 0X4044);
            goto L_150E0EEC;
    }
    // 0x150E0ED8: addiu       $a1, $zero, 0x4044
    ctx->r5 = ADD32(0, 0X4044);
    // 0x150E0EDC: jal         0x1509BFB0
    // 0x150E0EE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_4;
    // 0x150E0EE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x150E0EE4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0EE8: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
L_150E0EEC:
    // 0x150E0EEC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x150E0EF0: bnel        $v1, $at, L_150E0F1C
    if (ctx->r3 != ctx->r1) {
        // 0x150E0EF4: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_150E0F1C;
    }
    goto skip_2;
    // 0x150E0EF4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_2:
    // 0x150E0EF8: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150E0EFC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150E0F00: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150E0F04: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150E0F08: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x150E0F0C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0F10: b           L_150E0FC8
    // 0x150E0F14: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
        goto L_150E0FC8;
    // 0x150E0F14: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x150E0F18: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_150E0F1C:
    // 0x150E0F1C: bne         $v1, $at, L_150E0FC8
    if (ctx->r3 != ctx->r1) {
        // 0x150E0F20: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150E0FC8;
    }
    // 0x150E0F20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E0F24: addiu       $a1, $zero, 0x4042
    ctx->r5 = ADD32(0, 0X4042);
    // 0x150E0F28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E0F2C: jal         0x1509BE40
    // 0x150E0F30: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x150E0F30: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_5:
    // 0x150E0F34: beq         $v0, $zero, L_150E0F54
    if (ctx->r2 == 0) {
        // 0x150E0F38: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150E0F54;
    }
    // 0x150E0F38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E0F3C: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150E0F40: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150E0F44: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150E0F48: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x150E0F4C: b           L_150E0F64
    // 0x150E0F50: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_150E0F64;
    // 0x150E0F50: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_150E0F54:
    // 0x150E0F54: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x150E0F58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E0F5C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x150E0F60: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150E0F64:
    // 0x150E0F64: addiu       $a1, $zero, 0x4044
    ctx->r5 = ADD32(0, 0X4044);
    // 0x150E0F68: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E0F6C: jal         0x1509BE40
    // 0x150E0F70: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x150E0F70: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_6:
    // 0x150E0F74: beq         $v0, $zero, L_150E0FA8
    if (ctx->r2 == 0) {
        // 0x150E0F78: lui         $at, 0xDFFF
        ctx->r1 = S32(0XDFFF << 16);
            goto L_150E0FA8;
    }
    // 0x150E0F78: lui         $at, 0xDFFF
    ctx->r1 = S32(0XDFFF << 16);
    // 0x150E0F7C: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x150E0F80: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x150E0F84: ori         $at, $at, 0x1010
    ctx->r1 = ctx->r1 | 0X1010;
    // 0x150E0F88: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x150E0F8C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x150E0F90: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
    // 0x150E0F94: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x150E0F98: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150E0F9C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0FA0: b           L_150E0FC8
    // 0x150E0FA4: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
        goto L_150E0FC8;
    // 0x150E0FA4: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
L_150E0FA8:
    // 0x150E0FA8: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150E0FAC: ori         $at, $at, 0xEFEF
    ctx->r1 = ctx->r1 | 0XEFEF;
    // 0x150E0FB0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E0FB4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150E0FB8: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x150E0FBC: ori         $t1, $t9, 0x8
    ctx->r9 = ctx->r25 | 0X8;
    // 0x150E0FC0: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150E0FC4: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
L_150E0FC8:
    // 0x150E0FC8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x150E0FCC: bne         $v1, $at, L_150E104C
    if (ctx->r3 != ctx->r1) {
        // 0x150E0FD0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150E104C;
    }
    // 0x150E0FD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E0FD4: addiu       $a1, $zero, 0x406E
    ctx->r5 = ADD32(0, 0X406E);
    // 0x150E0FD8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E0FDC: jal         0x1509BE40
    // 0x150E0FE0: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_7;
    // 0x150E0FE0: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_7:
    // 0x150E0FE4: beq         $v0, $zero, L_150E0FFC
    if (ctx->r2 == 0) {
        // 0x150E0FE8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150E0FFC;
    }
    // 0x150E0FE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E0FEC: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x150E0FF0: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x150E0FF4: b           L_150E100C
    // 0x150E0FF8: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
        goto L_150E100C;
    // 0x150E0FF8: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150E0FFC:
    // 0x150E0FFC: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x150E1000: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x150E1004: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150E1008: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
L_150E100C:
    // 0x150E100C: addiu       $a1, $zero, 0x406F
    ctx->r5 = ADD32(0, 0X406F);
    // 0x150E1010: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E1014: jal         0x1509BE40
    // 0x150E1018: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_8;
    // 0x150E1018: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_8:
    // 0x150E101C: beql        $v0, $zero, L_150E103C
    if (ctx->r2 == 0) {
        // 0x150E1020: lw          $t8, 0x84($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X84);
            goto L_150E103C;
    }
    goto skip_3;
    // 0x150E1020: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    skip_3:
    // 0x150E1024: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150E1028: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E102C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150E1030: b           L_150E104C
    // 0x150E1034: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_150E104C;
    // 0x150E1034: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150E1038: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
L_150E103C:
    // 0x150E103C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150E1040: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150E1044: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150E1048: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
L_150E104C:
    // 0x150E104C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150E1050: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150E1054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150E1058: jr          $ra
    // 0x150E105C: nop

    return;
    return;
    // 0x150E105C: nop

;}
RECOMP_FUNC void func_1503D484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503D484: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1503D488: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1503D48C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503D490: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503D494: addiu       $s2, $zero, 0x3E7
    ctx->r18 = ADD32(0, 0X3E7);
    // 0x1503D498: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1503D49C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1503D4A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1503D4A4: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x1503D4A8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x1503D4AC: beql        $s2, $t6, L_1503D4E0
    if (ctx->r18 == ctx->r14) {
        // 0x1503D4B0: lw          $t1, 0x2C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X2C);
            goto L_1503D4E0;
    }
    goto skip_0;
    // 0x1503D4B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1503D4B4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
L_1503D4B8:
    // 0x1503D4B8: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x1503D4BC: beql        $t7, $zero, L_1503D4D0
    if (ctx->r15 == 0) {
        // 0x1503D4C0: lhu         $t8, 0x8($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8);
            goto L_1503D4D0;
    }
    goto skip_1;
    // 0x1503D4C0: lhu         $t8, 0x8($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8);
    skip_1:
    // 0x1503D4C4: jal         0x1503D438
    // 0x1503D4C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1503D438(rdram, ctx);
        goto after_0;
    // 0x1503D4C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x1503D4CC: lhu         $t8, 0x8($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8);
L_1503D4D0:
    // 0x1503D4D0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503D4D4: bnel        $s2, $t8, L_1503D4B8
    if (ctx->r18 != ctx->r24) {
        // 0x1503D4D8: lw          $t7, 0x4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X4);
            goto L_1503D4B8;
    }
    goto skip_2;
    // 0x1503D4D8: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x1503D4DC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
L_1503D4E0:
    // 0x1503D4E0: subu        $t9, $s0, $s1
    ctx->r25 = SUB32(ctx->r16, ctx->r17);
    // 0x1503D4E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503D4E8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x1503D4EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x1503D4F0: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x1503D4F4: sh          $t0, 0x5A90($at)
    MEM_H(0X5A90, ctx->r1) = ctx->r8;
    // 0x1503D4F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1503D4FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503D500: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1503D504: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1503D508: jr          $ra
    // 0x1503D50C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1503D50C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1505371C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505371C: lhu         $t6, 0x7A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7A);
    // 0x15053720: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15053724: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15053728: addiu       $t7, $t6, 0x4000
    ctx->r15 = ADD32(ctx->r14, 0X4000);
    // 0x1505372C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15053730: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15053734: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15053738: nop

    // 0x1505373C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15053740: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15053744: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x15053748: jr          $ra
    // 0x1505374C: nop

    return;
    return;
    // 0x1505374C: nop

;}
RECOMP_FUNC void func_150FDDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDDA0: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x150FDDA4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150FDDA8: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x150FDDAC: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x150FDDB0: bne         $a0, $zero, L_150FDDC0
    if (ctx->r4 != 0) {
        // 0x150FDDB4: addiu       $a1, $sp, 0x98
        ctx->r5 = ADD32(ctx->r29, 0X98);
            goto L_150FDDC0;
    }
    // 0x150FDDB4: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x150FDDB8: b           L_150FDF28
    // 0x150FDDBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150FDF28;
    // 0x150FDDBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150FDDC0:
    // 0x150FDDC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FDDC4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x150FDDC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FDDCC: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x150FDDD0: jal         0x15145740
    // 0x150FDDD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15145740(rdram, ctx);
        goto after_0;
    // 0x150FDDD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150FDDD8: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
    // 0x150FDDDC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FDDE0: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x150FDDE4: lbu         $a1, 0xC7($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XC7);
    // 0x150FDDE8: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    // 0x150FDDEC: jal         0x150FDF38
    // 0x150FDDF0: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    func_150FDF38(rdram, ctx);
        goto after_1;
    // 0x150FDDF0: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    after_1:
    // 0x150FDDF4: jal         0x150ADA68
    // 0x150FDDF8: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150FDDF8: nop

    after_2:
    // 0x150FDDFC: jal         0x150ADA68
    // 0x150FDE00: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150FDE00: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x150FDE04: jal         0x150ADA20
    // 0x150FDE08: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150FDE08: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x150FDE0C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150FDE10: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x150FDE14: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x150FDE18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150FDE1C: bne         $t7, $at, L_150FDE2C
    if (ctx->r15 != ctx->r1) {
        // 0x150FDE20: addiu       $a0, $sp, 0x8C
        ctx->r4 = ADD32(ctx->r29, 0X8C);
            goto L_150FDE2C;
    }
    // 0x150FDE20: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150FDE24: b           L_150FDE30
    // 0x150FDE28: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
        goto L_150FDE30;
    // 0x150FDE28: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
L_150FDE2C:
    // 0x150FDE2C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_150FDE30:
    // 0x150FDE30: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150FDE34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FDE38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FDE3C: lwc1        $f8, 0x1F94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1F94);
    // 0x150FDE40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150FDE44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150FDE48: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150FDE4C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150FDE50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FDE54: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150FDE58: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150FDE5C: lui         $at, 0x4349
    ctx->r1 = S32(0X4349 << 16);
    // 0x150FDE60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FDE64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FDE68: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x150FDE6C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150FDE70: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150FDE74: lwc1        $f18, 0x1F98($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1F98);
    // 0x150FDE78: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150FDE7C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150FDE80: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x150FDE84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FDE88: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150FDE8C: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x150FDE90: mfhi        $t8
    ctx->r24 = hi;
    // 0x150FDE94: addiu       $t9, $t8, 0xC8
    ctx->r25 = ADD32(ctx->r24, 0XC8);
    // 0x150FDE98: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150FDE9C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150FDEA0: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x150FDEA4: lbu         $t8, 0xC7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XC7);
    // 0x150FDEA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150FDEAC: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x150FDEB0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FDEB4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150FDEB8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FDEBC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150FDEC0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150FDEC4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FDEC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150FDECC: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x150FDED0: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x150FDED4: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x150FDED8: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x150FDEDC: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x150FDEE0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x150FDEE4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x150FDEE8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150FDEEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FDEF0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150FDEF4: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x150FDEF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150FDEFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FDF00: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150FDF04: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150FDF08: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x150FDF0C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150FDF10: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150FDF14: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x150FDF18: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x150FDF1C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150FDF20: jal         0x151C229C
    // 0x150FDF24: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    func_151C229C(rdram, ctx);
        goto after_5;
    // 0x150FDF24: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    after_5:
L_150FDF28:
    // 0x150FDF28: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150FDF2C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x150FDF30: jr          $ra
    // 0x150FDF34: nop

    return;
    return;
    // 0x150FDF34: nop

;}
RECOMP_FUNC void func_151CD2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CD2C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151CD2C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151CD2C8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151CD2CC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151CD2D0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151CD2D4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151CD2D8: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x151CD2DC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x151CD2E0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x151CD2E4: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x151CD2E8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151CD2EC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x151CD2F0: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x151CD2F4: lw          $t8, 0x1C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X1C);
    // 0x151CD2F8: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x151CD2FC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151CD300: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151CD304: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151CD308: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151CD30C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151CD310: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151CD314: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151CD318: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151CD31C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151CD320: jal         0x15149130
    // 0x151CD324: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x151CD324: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    after_0:
    // 0x151CD328: beq         $v0, $zero, L_151CD348
    if (ctx->r2 == 0) {
        // 0x151CD32C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151CD348;
    }
    // 0x151CD32C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151CD330: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151CD334: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CD338: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151CD33C: jal         0x10022EC0
    // 0x151CD340: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CD340: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x151CD344: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_151CD348:
    // 0x151CD348: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151CD34C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151CD350: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151CD354: jr          $ra
    // 0x151CD358: nop

    return;
    return;
    // 0x151CD358: nop

;}
RECOMP_FUNC void func_1504C0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504C0B8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1504C0BC: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1504C0C0: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1504C0C4: beq         $v0, $at, L_1504C0D4
    if (ctx->r2 == ctx->r1) {
        // 0x1504C0C8: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_1504C0D4;
    }
    // 0x1504C0C8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x1504C0CC: bnel        $v0, $at, L_1504C0E0
    if (ctx->r2 != ctx->r1) {
        // 0x1504C0D0: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_1504C0E0;
    }
    goto skip_0;
    // 0x1504C0D0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    skip_0:
L_1504C0D4:
    // 0x1504C0D4: jr          $ra
    // 0x1504C0D8: addiu       $v0, $zero, 0x18B
    ctx->r2 = ADD32(0, 0X18B);
    return;
    return;
    // 0x1504C0D8: addiu       $v0, $zero, 0x18B
    ctx->r2 = ADD32(0, 0X18B);
    // 0x1504C0DC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_1504C0E0:
    // 0x1504C0E0: jr          $ra
    // 0x1504C0E4: nop

    return;
    return;
    // 0x1504C0E4: nop

;}
RECOMP_FUNC void func_151934B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151934B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151934B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151934BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151934C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151934C4: lh          $t6, 0xA4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA4);
    // 0x151934C8: lh          $t7, 0x96($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X96);
    // 0x151934CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x151934D0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151934D4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151934D8: beql        $at, $zero, L_15193578
    if (ctx->r1 == 0) {
        // 0x151934DC: lh          $t4, 0x94($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X94);
            goto L_15193578;
    }
    goto skip_0;
    // 0x151934DC: lh          $t4, 0x94($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X94);
    skip_0:
    // 0x151934E0: lh          $v0, 0xAA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XAA);
    // 0x151934E4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151934E8: sra         $v1, $v0, 2
    ctx->r3 = S32(SIGNED(ctx->r2) >> 2);
    // 0x151934EC: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151934F0: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x151934F4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x151934F8: div         $zero, $t8, $a0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r4)));
    // 0x151934FC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x15193500: mflo        $t9
    ctx->r25 = lo;
    // 0x15193504: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x15193508: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x1519350C: div         $zero, $t0, $a0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r4)));
    // 0x15193510: bne         $a0, $zero, L_1519351C
    if (ctx->r4 != 0) {
        // 0x15193514: nop
    
            goto L_1519351C;
    }
    // 0x15193514: nop

    // 0x15193518: break       7
    do_break(353973528);
L_1519351C:
    // 0x1519351C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15193520: bne         $a0, $at, L_15193534
    if (ctx->r4 != ctx->r1) {
        // 0x15193524: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15193534;
    }
    // 0x15193524: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15193528: bne         $t8, $at, L_15193534
    if (ctx->r24 != ctx->r1) {
        // 0x1519352C: nop
    
            goto L_15193534;
    }
    // 0x1519352C: nop

    // 0x15193530: break       6
    do_break(353973552);
L_15193534:
    // 0x15193534: mflo        $t1
    ctx->r9 = lo;
    // 0x15193538: sh          $t9, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r25;
    // 0x1519353C: sh          $t1, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = ctx->r9;
    // 0x15193540: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x15193544: bne         $a0, $zero, L_15193550
    if (ctx->r4 != 0) {
        // 0x15193548: nop
    
            goto L_15193550;
    }
    // 0x15193548: nop

    // 0x1519354C: break       7
    do_break(353973580);
L_15193550:
    // 0x15193550: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15193554: bne         $a0, $at, L_15193568
    if (ctx->r4 != ctx->r1) {
        // 0x15193558: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15193568;
    }
    // 0x15193558: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1519355C: bne         $t0, $at, L_15193568
    if (ctx->r8 != ctx->r1) {
        // 0x15193560: nop
    
            goto L_15193568;
    }
    // 0x15193560: nop

    // 0x15193564: break       6
    do_break(353973604);
L_15193568:
    // 0x15193568: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x1519356C: b           L_15193648
    // 0x15193570: sh          $t3, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = ctx->r11;
        goto L_15193648;
    // 0x15193570: sh          $t3, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = ctx->r11;
    // 0x15193574: lh          $t4, 0x94($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X94);
L_15193578:
    // 0x15193578: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x1519357C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15193580: sh          $t5, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r13;
    // 0x15193584: lh          $v0, 0x94($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X94);
    // 0x15193588: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x1519358C: bne         $at, $zero, L_1519359C
    if (ctx->r1 != 0) {
        // 0x15193590: nop
    
            goto L_1519359C;
    }
    // 0x15193590: nop

    // 0x15193594: sh          $t6, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r14;
    // 0x15193598: lh          $v0, 0x94($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X94);
L_1519359C:
    // 0x1519359C: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151935A0: lh          $t7, 0x9E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X9E);
    // 0x151935A4: lh          $t3, 0xA6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA6);
    // 0x151935A8: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151935AC: mflo        $t9
    ctx->r25 = lo;
    // 0x151935B0: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x151935B4: subu        $t1, $t7, $t0
    ctx->r9 = SUB32(ctx->r15, ctx->r8);
    // 0x151935B8: sh          $t1, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r9;
    // 0x151935BC: lh          $t2, 0x9E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X9E);
    // 0x151935C0: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151935C4: beql        $at, $zero, L_1519364C
    if (ctx->r1 == 0) {
        // 0x151935C8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1519364C;
    }
    goto skip_1;
    // 0x151935C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x151935CC: lb          $t4, 0xB3($s0)
    ctx->r12 = MEM_B(ctx->r16, 0XB3);
    // 0x151935D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151935D4: bnel        $t4, $at, L_15193644
    if (ctx->r12 != ctx->r1) {
        // 0x151935D8: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_15193644;
    }
    goto skip_2;
    // 0x151935D8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    skip_2:
    // 0x151935DC: lh          $t5, 0x9C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X9C);
    // 0x151935E0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x151935E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x151935E8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x151935EC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x151935F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151935F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151935F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151935FC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x15193600: lh          $t6, 0xA6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA6);
    // 0x15193604: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15193608: nop

    // 0x1519360C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15193610: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x15193614: lh          $t8, 0xA0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA0);
    // 0x15193618: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1519361C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15193620: nop

    // 0x15193624: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15193628: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x1519362C: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x15193630: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15193634: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x15193638: jal         0x151DBCBC
    // 0x1519363C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_151DBCBC(rdram, ctx);
        goto after_0;
    // 0x1519363C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x15193640: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_15193644:
    // 0x15193644: sh          $t1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r9;
L_15193648:
    // 0x15193648: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1519364C:
    // 0x1519364C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15193650: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15193654: jr          $ra
    // 0x15193658: nop

    return;
    return;
    // 0x15193658: nop

;}
RECOMP_FUNC void func_15076F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076F78: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15076F7C: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15076F80: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076F84: lb          $v0, 0x1890($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X1890);
    // 0x15076F88: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15076F8C: sh          $v0, 0xCC($t6)
    MEM_H(0XCC, ctx->r14) = ctx->r2;
    // 0x15076F90: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076F94: lb          $v0, 0x1891($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X1891);
    // 0x15076F98: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15076F9C: sh          $v0, 0xCE($t7)
    MEM_H(0XCE, ctx->r15) = ctx->r2;
    // 0x15076FA0: jr          $ra
    // 0x15076FA4: nop

    return;
    return;
    // 0x15076FA4: nop

;}
RECOMP_FUNC void func_15142A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15142A5C: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x15142A60: lh          $t6, 0x3C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3C);
    // 0x15142A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15142A68: blez        $t6, L_15142A78
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15142A6C: nop
    
            goto L_15142A78;
    }
    // 0x15142A6C: nop

    // 0x15142A70: jr          $ra
    // 0x15142A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15142A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15142A78:
    // 0x15142A78: jr          $ra
    // 0x15142A7C: nop

    return;
    return;
    // 0x15142A7C: nop

;}
RECOMP_FUNC void func_1507DB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DB6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507DB70: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1507DB74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1507DB78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507DB7C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1507DB80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1507DB84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1507DB88: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1507DB8C: addiu       $t7, $t7, 0x6B80
    ctx->r15 = ADD32(ctx->r15, 0X6B80);
    // 0x1507DB90: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x1507DB94: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1507DB98: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1507DB9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DBA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x1507DBA4: addiu       $a0, $a0, 0xD0F
    ctx->r4 = ADD32(ctx->r4, 0XD0F);
    // 0x1507DBA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507DBAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x1507DBB0: jal         0x1510D0EC
    // 0x1507DBB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x1507DBB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1507DBB8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1507DBBC: lui         $t8, 0xFD18
    ctx->r24 = S32(0XFD18 << 16);
    // 0x1507DBC0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1507DBC4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x1507DBC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DBCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DBD0: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x1507DBD4: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x1507DBD8: lui         $t9, 0xF518
    ctx->r25 = S32(0XF518 << 16);
    // 0x1507DBDC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x1507DBE0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x1507DBE4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DBE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1507DBEC: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x1507DBF0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x1507DBF4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x1507DBF8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DBFC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1507DC00: lui         $t5, 0x73F
    ctx->r13 = S32(0X73F << 16);
    // 0x1507DC04: ori         $t5, $t5, 0xF000
    ctx->r13 = ctx->r13 | 0XF000;
    // 0x1507DC08: lui         $t4, 0xF300
    ctx->r12 = S32(0XF300 << 16);
    // 0x1507DC0C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x1507DC10: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x1507DC14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DC18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x1507DC1C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1507DC20: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507DC24: addiu       $t1, $t1, 0x18A2
    ctx->r9 = ADD32(ctx->r9, 0X18A2);
    // 0x1507DC28: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x1507DC2C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x1507DC30: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DC34: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1507DC38: lui         $t7, 0xF518
    ctx->r15 = S32(0XF518 << 16);
    // 0x1507DC3C: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x1507DC40: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x1507DC44: ori         $t7, $t7, 0x1000
    ctx->r15 = ctx->r15 | 0X1000;
    // 0x1507DC48: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1507DC4C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1507DC50: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DC54: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1507DC58: lui         $t2, 0x7
    ctx->r10 = S32(0X7 << 16);
    // 0x1507DC5C: ori         $t2, $t2, 0xC07C
    ctx->r10 = ctx->r10 | 0XC07C;
    // 0x1507DC60: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x1507DC64: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1507DC68: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x1507DC6C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DC70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DC74: lui         $t3, 0xEF00
    ctx->r11 = S32(0XEF00 << 16);
    // 0x1507DC78: lui         $t4, 0xF0A
    ctx->r12 = S32(0XF0A << 16);
    // 0x1507DC7C: ori         $t4, $t4, 0x4004
    ctx->r12 = ctx->r12 | 0X4004;
    // 0x1507DC80: ori         $t3, $t3, 0x2C3F
    ctx->r11 = ctx->r11 | 0X2C3F;
    // 0x1507DC84: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x1507DC88: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x1507DC8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DC90: lhu         $a2, 0x0($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X0);
    // 0x1507DC94: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1507DC98: sllv        $t0, $t5, $s1
    ctx->r8 = S32(ctx->r13 << (ctx->r17 & 31));
    // 0x1507DC9C: and         $t6, $a2, $t0
    ctx->r14 = ctx->r6 & ctx->r8;
    // 0x1507DCA0: beq         $t6, $zero, L_1507DD08
    if (ctx->r14 == 0) {
        // 0x1507DCA4: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_1507DD08;
    }
    // 0x1507DCA4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507DCA8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507DCAC: addiu       $t7, $t7, 0x18A4
    ctx->r15 = ADD32(ctx->r15, 0X18A4);
    // 0x1507DCB0: addu        $v0, $s1, $t7
    ctx->r2 = ADD32(ctx->r17, ctx->r15);
    // 0x1507DCB4: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x1507DCB8: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x1507DCBC: bne         $at, $zero, L_1507DCD0
    if (ctx->r1 != 0) {
        // 0x1507DCC0: addiu       $t8, $a1, -0x4
        ctx->r24 = ADD32(ctx->r5, -0X4);
            goto L_1507DCD0;
    }
    // 0x1507DCC0: addiu       $t8, $a1, -0x4
    ctx->r24 = ADD32(ctx->r5, -0X4);
    // 0x1507DCC4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x1507DCC8: b           L_1507DD34
    // 0x1507DCCC: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
        goto L_1507DD34;
    // 0x1507DCCC: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
L_1507DCD0:
    // 0x1507DCD0: nor         $t9, $t0, $zero
    ctx->r25 = ~(ctx->r8 | 0);
    // 0x1507DCD4: and         $t2, $a2, $t9
    ctx->r10 = ctx->r6 & ctx->r25;
    // 0x1507DCD8: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x1507DCDC: jal         0x15181DC8
    // 0x1507DCE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15181DC8(rdram, ctx);
        goto after_1;
    // 0x1507DCE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x1507DCE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507DCE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507DCEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507DCF0: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x1507DCF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1507DCF8: jal         0x1517EE40
    // 0x1507DCFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_1517EE40(rdram, ctx);
        goto after_2;
    // 0x1507DCFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x1507DD00: b           L_1507DE38
    // 0x1507DD04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1507DE38;
    // 0x1507DD04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1507DD08:
    // 0x1507DD08: addiu       $t3, $t3, 0x18A4
    ctx->r11 = ADD32(ctx->r11, 0X18A4);
    // 0x1507DD0C: addu        $v0, $s1, $t3
    ctx->r2 = ADD32(ctx->r17, ctx->r11);
    // 0x1507DD10: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x1507DD14: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x1507DD18: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x1507DD1C: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x1507DD20: slti        $at, $a1, 0x3D
    ctx->r1 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
    // 0x1507DD24: bne         $at, $zero, L_1507DD34
    if (ctx->r1 != 0) {
        // 0x1507DD28: sb          $t5, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r13;
            goto L_1507DD34;
    }
    // 0x1507DD28: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x1507DD2C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x1507DD30: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
L_1507DD34:
    // 0x1507DD34: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1507DD38: lw          $t7, -0x19D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19D8);
    // 0x1507DD3C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x1507DD40: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x1507DD44: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x1507DD48: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x1507DD4C: lwc1        $f4, 0x30($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X30);
    // 0x1507DD50: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x1507DD54: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x1507DD58: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x1507DD5C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1507DD60: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x1507DD64: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x1507DD68: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1507DD6C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DD70: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1507DD74: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1507DD78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DD7C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x1507DD80: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1507DD84: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1507DD88: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1507DD8C: sll         $t2, $a2, 1
    ctx->r10 = S32(ctx->r6 << 1);
    // 0x1507DD90: subu        $a3, $t2, $v0
    ctx->r7 = SUB32(ctx->r10, ctx->r2);
    // 0x1507DD94: sll         $t4, $a0, 1
    ctx->r12 = S32(ctx->r4 << 1);
    // 0x1507DD98: addu        $a2, $t2, $v0
    ctx->r6 = ADD32(ctx->r10, ctx->r2);
    // 0x1507DD9C: subu        $t1, $t4, $v0
    ctx->r9 = SUB32(ctx->r12, ctx->r2);
    // 0x1507DDA0: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    // 0x1507DDA4: andi        $t5, $a2, 0xFFF
    ctx->r13 = ctx->r6 & 0XFFF;
    // 0x1507DDA8: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x1507DDAC: andi        $t2, $a3, 0xFFF
    ctx->r10 = ctx->r7 & 0XFFF;
    // 0x1507DDB0: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x1507DDB4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x1507DDB8: andi        $t8, $a0, 0xFFF
    ctx->r24 = ctx->r4 & 0XFFF;
    // 0x1507DDBC: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x1507DDC0: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x1507DDC4: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1507DDC8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1507DDCC: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x1507DDD0: lui         $t6, 0xE100
    ctx->r14 = S32(0XE100 << 16);
    // 0x1507DDD4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1507DDD8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1507DDDC: subu        $t8, $a2, $a3
    ctx->r24 = SUB32(ctx->r6, ctx->r7);
    // 0x1507DDE0: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x1507DDE4: div         $zero, $t9, $t8
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r24)));
    // 0x1507DDE8: mflo        $a1
    ctx->r5 = lo;
    // 0x1507DDEC: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x1507DDF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DDF4: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x1507DDF8: or          $t4, $t3, $t2
    ctx->r12 = ctx->r11 | ctx->r10;
    // 0x1507DDFC: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x1507DE00: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x1507DE04: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x1507DE08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1507DE0C: bne         $t8, $zero, L_1507DE18
    if (ctx->r24 != 0) {
        // 0x1507DE10: nop
    
            goto L_1507DE18;
    }
    // 0x1507DE10: nop

    // 0x1507DE14: break       7
    do_break(352837140);
L_1507DE18:
    // 0x1507DE18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507DE1C: bne         $t8, $at, L_1507DE30
    if (ctx->r24 != ctx->r1) {
        // 0x1507DE20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1507DE30;
    }
    // 0x1507DE20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507DE24: bne         $t9, $at, L_1507DE30
    if (ctx->r25 != ctx->r1) {
        // 0x1507DE28: nop
    
            goto L_1507DE30;
    }
    // 0x1507DE28: nop

    // 0x1507DE2C: break       6
    do_break(352837164);
L_1507DE30:
    // 0x1507DE30: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x1507DE34: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1507DE38:
    // 0x1507DE38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1507DE3C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1507DE40: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1507DE44: jr          $ra
    // 0x1507DE48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1507DE48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1513C73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C73C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1513C740: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1513C744: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1513C748: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1513C74C: lbu         $a3, 0x4B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4B);
    // 0x1513C750: lbu         $a2, 0x47($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X47);
    // 0x1513C754: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513C758: lbu         $t6, 0x6B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6B);
    // 0x1513C75C: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x1513C760: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x1513C764: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x1513C768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C76C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1513C770: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1513C774: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513C778: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513C77C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1513C780: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1513C784: jal         0x1513C350
    // 0x1513C788: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_1513C350(rdram, ctx);
        goto after_0;
    // 0x1513C788: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_0:
    // 0x1513C78C: bne         $v0, $zero, L_1513C79C
    if (ctx->r2 != 0) {
        // 0x1513C790: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513C79C;
    }
    // 0x1513C790: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513C794: b           L_1513C7F4
    // 0x1513C798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C7F4;
    // 0x1513C798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C79C:
    // 0x1513C79C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513C7A0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513C7A4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513C7A8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513C7AC: lbu         $t0, 0x67($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X67);
    // 0x1513C7B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C7B4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x1513C7B8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x1513C7BC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x1513C7C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1513C7C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1513C7C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1513C7CC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1513C7D0: jal         0x1513E2AC
    // 0x1513C7D4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_1513E2AC(rdram, ctx);
        goto after_1;
    // 0x1513C7D4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_1:
    // 0x1513C7D8: bne         $v0, $zero, L_1513C7F0
    if (ctx->r2 != 0) {
        // 0x1513C7DC: lw          $a0, 0x3C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X3C);
            goto L_1513C7F0;
    }
    // 0x1513C7DC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1513C7E0: jal         0x1516972C
    // 0x1513C7E4: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1513C7E4: nop

    after_2:
    // 0x1513C7E8: b           L_1513C7F4
    // 0x1513C7EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C7F4;
    // 0x1513C7EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C7F0:
    // 0x1513C7F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1513C7F4:
    // 0x1513C7F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513C7F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1513C7FC: jr          $ra
    // 0x1513C800: nop

    return;
    return;
    // 0x1513C800: nop

;}
RECOMP_FUNC void func_1507A2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A2AC: jal         0x150ADA20
    // 0x1507A2B0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1507A2B0: nop

    after_0:
    // 0x1507A2B4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A2B8: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507A2BC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A2C0: addiu       $v1, $v1, 0x1893
    ctx->r3 = ADD32(ctx->r3, 0X1893);
    // 0x1507A2C4: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x1507A2C8: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1507A2CC: mfhi        $t7
    ctx->r15 = hi;
    // 0x1507A2D0: bne         $t6, $zero, L_1507A2DC
    if (ctx->r14 != 0) {
        // 0x1507A2D4: nop
    
            goto L_1507A2DC;
    }
    // 0x1507A2D4: nop

    // 0x1507A2D8: break       7
    do_break(352821976);
L_1507A2DC:
    // 0x1507A2DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1507A2E0: jal         0x15075CA0
    // 0x1507A2E4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    func_15075CA0(rdram, ctx);
        goto after_1;
    // 0x1507A2E4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    after_1:
    // 0x1507A2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A2EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A2F0: jr          $ra
    // 0x1507A2F4: nop

    return;
    return;
    // 0x1507A2F4: nop

;}
RECOMP_FUNC void func_10007A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_150528C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150528C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150528CC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150528D0: addiu       $a2, $a2, 0x2104
    ctx->r6 = ADD32(ctx->r6, 0X2104);
    // 0x150528D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150528D8: addiu       $t1, $zero, 0x4F
    ctx->r9 = ADD32(0, 0X4F);
    // 0x150528DC: lhu         $t7, 0x76($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X76);
    // 0x150528E0: lb          $t6, 0x22B($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X22B);
    // 0x150528E4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x150528E8: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x150528EC: lbu         $t9, 0x13F($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X13F);
    // 0x150528F0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150528F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150528F8: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x150528FC: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x15052900: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x15052904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15052908: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505290C: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x15052910: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x15052914: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x15052918: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1505291C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x15052920: bne         $t1, $v1, L_1505299C
    if (ctx->r9 != ctx->r3) {
        // 0x15052924: cvt.s.w     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1505299C;
    }
    // 0x15052924: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15052928: lbu         $v0, 0x65($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X65);
    // 0x1505292C: beql        $v0, $zero, L_150529A0
    if (ctx->r2 == 0) {
        // 0x15052930: lw          $t4, 0xF8($a0)
        ctx->r12 = MEM_W(ctx->r4, 0XF8);
            goto L_150529A0;
    }
    goto skip_0;
    // 0x15052930: lw          $t4, 0xF8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XF8);
    skip_0:
    // 0x15052934: lw          $t7, 0x1D4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1D4);
    // 0x15052938: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1505293C: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15052940: beq         $t7, $zero, L_1505299C
    if (ctx->r15 == 0) {
        // 0x15052944: addiu       $t0, $zero, 0x32C
        ctx->r8 = ADD32(0, 0X32C);
            goto L_1505299C;
    }
    // 0x15052944: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x15052948: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1505294C: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15052950: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052954: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x15052958: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1505295C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15052960: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15052964: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052968: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x1505296C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052970: addu        $t8, $a1, $t9
    ctx->r24 = ADD32(ctx->r5, ctx->r25);
    // 0x15052974: lui         $at, 0x438E
    ctx->r1 = S32(0X438E << 16);
    // 0x15052978: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505297C: lwc1        $f8, -0x1DC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, -0X1DC);
    // 0x15052980: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x15052984: mflo        $t2
    ctx->r10 = lo;
    // 0x15052988: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1505298C: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x15052990: lwc1        $f6, 0x18($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X18);
    // 0x15052994: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15052998: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
L_1505299C:
    // 0x1505299C: lw          $t4, 0xF8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XF8);
L_150529A0:
    // 0x150529A0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150529A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150529A8: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x150529AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150529B0: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x150529B4: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x150529B8: sw          $t5, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r13;
    // 0x150529BC: bne         $v1, $at, L_150529E8
    if (ctx->r3 != ctx->r1) {
        // 0x150529C0: sb          $t6, 0x80($a0)
        MEM_B(0X80, ctx->r4) = ctx->r14;
            goto L_150529E8;
    }
    // 0x150529C0: sb          $t6, 0x80($a0)
    MEM_B(0X80, ctx->r4) = ctx->r14;
    // 0x150529C4: lbu         $t7, 0x222($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X222);
    // 0x150529C8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150529CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150529D0: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150529D4: mflo        $t9
    ctx->r25 = lo;
    // 0x150529D8: addu        $t8, $a1, $t9
    ctx->r24 = ADD32(ctx->r5, ctx->r25);
    // 0x150529DC: lwc1        $f10, 0x18($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X18);
    // 0x150529E0: b           L_15052A18
    // 0x150529E4: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
        goto L_15052A18;
    // 0x150529E4: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
L_150529E8:
    // 0x150529E8: lbu         $t3, 0x13F($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X13F);
    // 0x150529EC: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x150529F0: lbu         $t7, 0x21E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X21E);
    // 0x150529F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150529F8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x150529FC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15052A00: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x15052A04: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x15052A08: lh          $t3, 0xA($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA);
    // 0x15052A0C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15052A10: nop

    // 0x15052A14: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
L_15052A18:
    // 0x15052A18: lh          $v0, 0x224($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X224);
    // 0x15052A1C: beql        $v0, $zero, L_15052A34
    if (ctx->r2 == 0) {
        // 0x15052A20: lbu         $v0, 0x223($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X223);
            goto L_15052A34;
    }
    goto skip_1;
    // 0x15052A20: lbu         $v0, 0x223($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X223);
    skip_1:
    // 0x15052A24: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15052A28: nop

    // 0x15052A2C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15052A30: lbu         $v0, 0x223($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X223);
L_15052A34:
    // 0x15052A34: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x15052A38: beq         $v0, $at, L_15052A48
    if (ctx->r2 == ctx->r1) {
        // 0x15052A3C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15052A48;
    }
    // 0x15052A3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15052A40: bne         $v0, $at, L_15052A68
    if (ctx->r2 != ctx->r1) {
        // 0x15052A44: nop
    
            goto L_15052A68;
    }
    // 0x15052A44: nop

L_15052A48:
    // 0x15052A48: lbu         $t2, 0x222($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X222);
    // 0x15052A4C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15052A50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15052A54: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15052A58: mflo        $t4
    ctx->r12 = lo;
    // 0x15052A5C: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x15052A60: lwc1        $f10, 0x18($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X18);
    // 0x15052A64: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
L_15052A68:
    // 0x15052A68: beq         $t1, $v1, L_15052A78
    if (ctx->r9 == ctx->r3) {
        // 0x15052A6C: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_15052A78;
    }
    // 0x15052A6C: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x15052A70: bnel        $v1, $at, L_15052B5C
    if (ctx->r3 != ctx->r1) {
        // 0x15052A74: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_15052B5C;
    }
    goto skip_2;
    // 0x15052A74: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_2:
L_15052A78:
    // 0x15052A78: lbu         $t7, 0x251($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X251);
    // 0x15052A7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15052A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15052A84: bnel        $t7, $at, L_15052B08
    if (ctx->r15 != ctx->r1) {
        // 0x15052A88: lbu         $t6, 0x124($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X124);
            goto L_15052B08;
    }
    goto skip_3;
    // 0x15052A88: lbu         $t6, 0x124($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X124);
    skip_3:
    // 0x15052A8C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x15052A90: lwc1        $f14, 0x20($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15052A94: lwc1        $f12, 0x3C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15052A98: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x15052A9C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15052AA0: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x15052AA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15052AA8: jal         0x1505A630
    // 0x15052AAC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15052AAC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x15052AB0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15052AB4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15052AB8: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15052ABC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052AC0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x15052AC4: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x15052AC8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15052ACC: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15052AD0: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15052AD4: bgez        $v0, L_15052AEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15052AD8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_15052AEC;
    }
    // 0x15052AD8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15052ADC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15052AE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15052AE4: nop

    // 0x15052AE8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_15052AEC:
    // 0x15052AEC: lui         $at, 0xBBB4
    ctx->r1 = S32(0XBBB4 << 16);
    // 0x15052AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15052AF4: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x15052AF8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15052AFC: b           L_15052B58
    // 0x15052B00: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
        goto L_15052B58;
    // 0x15052B00: swc1        $f6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f6.u32l;
    // 0x15052B04: lbu         $t6, 0x124($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X124);
L_15052B08:
    // 0x15052B08: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15052B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15052B10: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x15052B14: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15052B18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052B1C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15052B20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052B24: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15052B28: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052B2C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15052B30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15052B34: addu        $t8, $a1, $t9
    ctx->r24 = ADD32(ctx->r5, ctx->r25);
    // 0x15052B38: lbu         $t3, -0x205($t8)
    ctx->r11 = MEM_BU(ctx->r24, -0X205);
    // 0x15052B3C: bne         $t3, $at, L_15052B58
    if (ctx->r11 != ctx->r1) {
        // 0x15052B40: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15052B58;
    }
    // 0x15052B40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052B44: lwc1        $f8, -0x6CB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CB0);
    // 0x15052B48: lwc1        $f10, 0xB8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x15052B4C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x15052B50: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15052B54: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
L_15052B58:
    // 0x15052B58: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_15052B5C:
    // 0x15052B5C: bnel        $v1, $at, L_15052BEC
    if (ctx->r3 != ctx->r1) {
        // 0x15052B60: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_15052BEC;
    }
    goto skip_4;
    // 0x15052B60: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_4:
    // 0x15052B64: lbu         $t2, 0x222($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X222);
    // 0x15052B68: lh          $v0, 0x224($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X224);
    // 0x15052B6C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15052B70: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15052B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15052B78: mflo        $t4
    ctx->r12 = lo;
    // 0x15052B7C: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x15052B80: lwc1        $f6, 0x18($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X18);
    // 0x15052B84: beq         $v0, $zero, L_15052B98
    if (ctx->r2 == 0) {
        // 0x15052B88: sub.s       $f16, $f6, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
            goto L_15052B98;
    }
    // 0x15052B88: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x15052B8C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15052B90: nop

    // 0x15052B94: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
L_15052B98:
    // 0x15052B98: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15052B9C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x15052BA0: nop

    // 0x15052BA4: bc1fl       L_15052BD8
    if (!c1cs) {
        // 0x15052BA8: lbu         $t7, 0x223($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X223);
            goto L_15052BD8;
    }
    goto skip_5;
    // 0x15052BA8: lbu         $t7, 0x223($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X223);
    skip_5:
    // 0x15052BAC: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15052BB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15052BB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052BB8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15052BBC: nop

    // 0x15052BC0: bc1fl       L_15052BD8
    if (!c1cs) {
        // 0x15052BC4: lbu         $t7, 0x223($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X223);
            goto L_15052BD8;
    }
    goto skip_6;
    // 0x15052BC4: lbu         $t7, 0x223($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X223);
    skip_6:
    // 0x15052BC8: lwc1        $f10, -0x6CAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CAC);
    // 0x15052BCC: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15052BD0: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x15052BD4: lbu         $t7, 0x223($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X223);
L_15052BD8:
    // 0x15052BD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15052BDC: beql        $t7, $at, L_15052BEC
    if (ctx->r15 == ctx->r1) {
        // 0x15052BE0: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_15052BEC;
    }
    goto skip_7;
    // 0x15052BE0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_7:
    // 0x15052BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15052BE8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_15052BEC:
    // 0x15052BEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15052BF0: bc1f        L_15052BFC
    if (!c1cs) {
        // 0x15052BF4: nop
    
            goto L_15052BFC;
    }
    // 0x15052BF4: nop

    // 0x15052BF8: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_15052BFC:
    // 0x15052BFC: beql        $a3, $zero, L_15052C64
    if (ctx->r7 == 0) {
        // 0x15052C00: lbu         $v0, 0x226($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X226);
            goto L_15052C64;
    }
    goto skip_8;
    // 0x15052C00: lbu         $v0, 0x226($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X226);
    skip_8:
    // 0x15052C04: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15052C08: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15052C0C: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15052C10: sub.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x15052C14: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15052C18: nop

    // 0x15052C1C: bc1fl       L_15052C64
    if (!c1cs) {
        // 0x15052C20: lbu         $v0, 0x226($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X226);
            goto L_15052C64;
    }
    goto skip_9;
    // 0x15052C20: lbu         $v0, 0x226($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X226);
    skip_9:
    // 0x15052C24: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    // 0x15052C28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052C2C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15052C30: nop

    // 0x15052C34: bc1fl       L_15052C64
    if (!c1cs) {
        // 0x15052C38: lbu         $v0, 0x226($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X226);
            goto L_15052C64;
    }
    goto skip_10;
    // 0x15052C38: lbu         $v0, 0x226($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X226);
    skip_10:
    // 0x15052C3C: lwc1        $f10, -0x6CA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CA8);
    // 0x15052C40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15052C44: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15052C48: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15052C4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15052C50: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x15052C54: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x15052C58: add.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x15052C5C: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x15052C60: lbu         $v0, 0x226($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X226);
L_15052C64:
    // 0x15052C64: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15052C68: bnel        $v0, $at, L_15052D48
    if (ctx->r2 != ctx->r1) {
        // 0x15052C6C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15052D48;
    }
    goto skip_11;
    // 0x15052C6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_11:
    // 0x15052C70: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x15052C74: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15052C78: beq         $v0, $zero, L_15052CF0
    if (ctx->r2 == 0) {
        // 0x15052C7C: nop
    
            goto L_15052CF0;
    }
    // 0x15052C7C: nop

    // 0x15052C80: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15052C84: lhu         $a1, 0x12C($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X12C);
    // 0x15052C88: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15052C8C: beq         $at, $zero, L_15052CB4
    if (ctx->r1 == 0) {
        // 0x15052C90: subu        $t6, $a1, $v1
        ctx->r14 = SUB32(ctx->r5, ctx->r3);
            goto L_15052CB4;
    }
    // 0x15052C90: subu        $t6, $a1, $v1
    ctx->r14 = SUB32(ctx->r5, ctx->r3);
    // 0x15052C94: sh          $t6, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r14;
    // 0x15052C98: lbu         $t9, 0x1CA($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15052C9C: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x15052CA0: blezl       $t9, L_15052CBC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15052CA4: lw          $v0, 0x31C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X31C);
            goto L_15052CBC;
    }
    goto skip_12;
    // 0x15052CA4: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    skip_12:
    // 0x15052CA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15052CAC: b           L_15052CB8
    // 0x15052CB0: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
        goto L_15052CB8;
    // 0x15052CB0: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
L_15052CB4:
    // 0x15052CB4: sh          $zero, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = 0;
L_15052CB8:
    // 0x15052CB8: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
L_15052CBC:
    // 0x15052CBC: lhu         $t8, 0x8C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8C);
    // 0x15052CC0: andi        $t3, $t8, 0x2000
    ctx->r11 = ctx->r24 & 0X2000;
    // 0x15052CC4: beq         $t3, $zero, L_15052CF0
    if (ctx->r11 == 0) {
        // 0x15052CC8: nop
    
            goto L_15052CF0;
    }
    // 0x15052CC8: nop

    // 0x15052CCC: lbu         $t2, 0x1CA($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15052CD0: beq         $t2, $zero, L_15052CF0
    if (ctx->r10 == 0) {
        // 0x15052CD4: nop
    
            goto L_15052CF0;
    }
    // 0x15052CD4: nop

    // 0x15052CD8: lbu         $a1, 0x75($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X75);
    // 0x15052CDC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15052CE0: andi        $t4, $a1, 0x7F
    ctx->r12 = ctx->r5 & 0X7F;
    // 0x15052CE4: jal         0x150D7790
    // 0x15052CE8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_150D7790(rdram, ctx);
        goto after_1;
    // 0x15052CE8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_1:
    // 0x15052CEC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_15052CF0:
    // 0x15052CF0: jal         0x1504CA60
    // 0x15052CF4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_1504CA60(rdram, ctx);
        goto after_2;
    // 0x15052CF4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_2:
    // 0x15052CF8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052CFC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15052D00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15052D04: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15052D08: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x15052D0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15052D10: nop

    // 0x15052D14: bc1fl       L_15052D24
    if (!c1cs) {
        // 0x15052D18: lwc1        $f0, 0xB8($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0XB8);
            goto L_15052D24;
    }
    goto skip_13;
    // 0x15052D18: lwc1        $f0, 0xB8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB8);
    skip_13:
    // 0x15052D1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15052D20: lwc1        $f0, 0xB8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB8);
L_15052D24:
    // 0x15052D24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052D28: lwc1        $f6, -0x6CA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CA4);
    // 0x15052D2C: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x15052D30: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15052D34: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15052D38: swc1        $f8, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f8.u32l;
    // 0x15052D3C: b           L_15052E08
    // 0x15052D40: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
        goto L_15052E08;
    // 0x15052D40: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
    // 0x15052D44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_15052D48:
    // 0x15052D48: beql        $a3, $at, L_15052DB0
    if (ctx->r7 == ctx->r1) {
        // 0x15052D4C: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_15052DB0;
    }
    goto skip_14;
    // 0x15052D4C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_14:
    // 0x15052D50: beql        $v0, $zero, L_15052DB0
    if (ctx->r2 == 0) {
        // 0x15052D54: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_15052DB0;
    }
    goto skip_15;
    // 0x15052D54: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_15:
    // 0x15052D58: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15052D5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15052D60: bgez        $v0, L_15052D74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15052D64: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15052D74;
    }
    // 0x15052D64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15052D68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15052D6C: nop

    // 0x15052D70: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_15052D74:
    // 0x15052D74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052D78: lwc1        $f8, -0x6CA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CA0);
    // 0x15052D7C: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x15052D80: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15052D84: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15052D88: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x15052D8C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x15052D90: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x15052D94: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15052D98: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x15052D9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x15052DA0: jal         0x15058EA4
    // 0x15052DA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15058EA4(rdram, ctx);
        goto after_3;
    // 0x15052DA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x15052DA8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052DAC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
L_15052DB0:
    // 0x15052DB0: beql        $t5, $zero, L_15052E08
    if (ctx->r13 == 0) {
        // 0x15052DB4: lbu         $t8, 0x104($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X104);
            goto L_15052E08;
    }
    goto skip_16;
    // 0x15052DB4: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
    skip_16:
    // 0x15052DB8: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x15052DBC: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x15052DC0: beql        $t7, $at, L_15052E08
    if (ctx->r15 == ctx->r1) {
        // 0x15052DC4: lbu         $t8, 0x104($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X104);
            goto L_15052E08;
    }
    goto skip_17;
    // 0x15052DC4: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
    skip_17:
    // 0x15052DC8: lhu         $t6, 0x22C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X22C);
    // 0x15052DCC: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x15052DD0: andi        $t9, $t6, 0x8
    ctx->r25 = ctx->r14 & 0X8;
    // 0x15052DD4: bnel        $t9, $zero, L_15052E08
    if (ctx->r25 != 0) {
        // 0x15052DD8: lbu         $t8, 0x104($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X104);
            goto L_15052E08;
    }
    goto skip_18;
    // 0x15052DD8: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
    skip_18:
    // 0x15052DDC: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15052DE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15052DE4: lwc1        $f0, 0xB8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x15052DE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052DEC: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15052DF0: lwc1        $f6, -0x6C9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6C9C);
    // 0x15052DF4: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15052DF8: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15052DFC: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x15052E00: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x15052E04: lbu         $t8, 0x104($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X104);
L_15052E08:
    // 0x15052E08: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x15052E0C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x15052E10: beq         $t8, $zero, L_15052E28
    if (ctx->r24 == 0) {
        // 0x15052E14: nop
    
            goto L_15052E28;
    }
    // 0x15052E14: nop

    // 0x15052E18: jal         0x150585F0
    // 0x15052E1C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_150585F0(rdram, ctx);
        goto after_4;
    // 0x15052E1C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_4:
    // 0x15052E20: b           L_15052E34
    // 0x15052E24: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
        goto L_15052E34;
    // 0x15052E24: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_15052E28:
    // 0x15052E28: jal         0x15056B08
    // 0x15052E2C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_15056B08(rdram, ctx);
        goto after_5;
    // 0x15052E2C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_5:
    // 0x15052E30: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_15052E34:
    // 0x15052E34: lhu         $t3, 0x7A($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X7A);
    // 0x15052E38: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15052E3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15052E40: addiu       $t2, $t3, 0x4000
    ctx->r10 = ADD32(ctx->r11, 0X4000);
    // 0x15052E44: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x15052E48: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15052E4C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15052E50: nop

    // 0x15052E54: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15052E58: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15052E5C: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x15052E60: jal         0x15059140
    // 0x15052E64: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_15059140(rdram, ctx);
        goto after_6;
    // 0x15052E64: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_6:
    // 0x15052E68: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15052E6C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052E70: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x15052E74: beql        $t7, $zero, L_15052E8C
    if (ctx->r15 == 0) {
        // 0x15052E78: lbu         $t6, 0x4($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X4);
            goto L_15052E8C;
    }
    goto skip_19;
    // 0x15052E78: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    skip_19:
    // 0x15052E7C: jal         0x15052760
    // 0x15052E80: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_15052760(rdram, ctx);
        goto after_7;
    // 0x15052E80: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_7:
    // 0x15052E84: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052E88: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
L_15052E8C:
    // 0x15052E8C: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x15052E90: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15052E94: bne         $t6, $at, L_15052EA0
    if (ctx->r14 != ctx->r1) {
        // 0x15052E98: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15052EA0;
    }
    // 0x15052E98: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15052E9C: sw          $zero, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = 0;
L_15052EA0:
    // 0x15052EA0: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x15052EA4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15052EA8: beq         $t9, $zero, L_15052EC4
    if (ctx->r25 == 0) {
        // 0x15052EAC: nop
    
            goto L_15052EC4;
    }
    // 0x15052EAC: nop

    // 0x15052EB0: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x15052EB4: lb          $t3, -0x270($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X270);
    // 0x15052EB8: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15052EBC: bnel        $at, $zero, L_15052ED8
    if (ctx->r1 != 0) {
        // 0x15052EC0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15052ED8;
    }
    goto skip_20;
    // 0x15052EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    skip_20:
L_15052EC4:
    // 0x15052EC4: jal         0x150535F4
    // 0x15052EC8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_150535F4(rdram, ctx);
        goto after_8;
    // 0x15052EC8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_8:
    // 0x15052ECC: bne         $v0, $zero, L_15052EE0
    if (ctx->r2 != 0) {
        // 0x15052ED0: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_15052EE0;
    }
    // 0x15052ED0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15052ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_15052ED8:
    // 0x15052ED8: jal         0x1502178C
    // 0x15052EDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1502178C(rdram, ctx);
        goto after_9;
    // 0x15052EDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_9:
L_15052EE0:
    // 0x15052EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15052EE4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15052EE8: jr          $ra
    // 0x15052EEC: nop

    return;
    return;
    // 0x15052EEC: nop

;}
RECOMP_FUNC void func_15166204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15166204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15166208: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1516620C: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x15166210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15166214: lh          $t6, 0x96($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X96);
    // 0x15166218: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1516621C: lh          $t9, 0x9E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X9E);
    // 0x15166220: lbu         $v0, 0x92($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X92);
    // 0x15166224: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15166228: mflo        $t8
    ctx->r24 = lo;
    // 0x1516622C: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x15166230: sh          $t0, 0x9E($a0)
    MEM_H(0X9E, ctx->r4) = ctx->r8;
    // 0x15166234: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15166238: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x1516623C: bgtzl       $v0, L_15166258
    if (SIGNED(ctx->r2) > 0) {
        // 0x15166240: sb          $v0, 0x92($a0)
        MEM_B(0X92, ctx->r4) = ctx->r2;
            goto L_15166258;
    }
    goto skip_0;
    // 0x15166240: sb          $v0, 0x92($a0)
    MEM_B(0X92, ctx->r4) = ctx->r2;
    skip_0:
    // 0x15166244: jal         0x1516972C
    // 0x15166248: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15166248: nop

    after_0:
    // 0x1516624C: b           L_1516625C
    // 0x15166250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1516625C;
    // 0x15166250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15166254: sb          $v0, 0x92($a0)
    MEM_B(0X92, ctx->r4) = ctx->r2;
L_15166258:
    // 0x15166258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516625C:
    // 0x1516625C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15166260: jr          $ra
    // 0x15166264: nop

    return;
    return;
    // 0x15166264: nop

;}
RECOMP_FUNC void func_1500FF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500FF9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500FFA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500FFA4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x1500FFA8: lw          $a0, 0x17B8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X17B8);
    // 0x1500FFAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500FFB0: addiu       $a2, $zero, 0xAD
    ctx->r6 = ADD32(0, 0XAD);
    // 0x1500FFB4: jal         0x1510C4AC
    // 0x1500FFB8: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_1510C4AC(rdram, ctx);
        goto after_0;
    // 0x1500FFB8: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_0:
    // 0x1500FFBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500FFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500FFC4: jr          $ra
    // 0x1500FFC8: nop

    return;
    return;
    // 0x1500FFC8: nop

;}
RECOMP_FUNC void func_15148AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15148AF4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15148AF8: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x15148AFC: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x15148B00: lb          $a1, 0x2E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2E);
    // 0x15148B04: addiu       $t0, $t0, -0x165C
    ctx->r8 = ADD32(ctx->r8, -0X165C);
    // 0x15148B08: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x15148B0C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_15148B10:
    // 0x15148B10: bgez        $a1, L_15148B20
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15148B14: nop
    
            goto L_15148B20;
    }
    // 0x15148B14: nop

    // 0x15148B18: lbu         $a1, 0x25($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X25);
    // 0x15148B1C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_15148B20:
    // 0x15148B20: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15148B24: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15148B28: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15148B2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15148B30: mflo        $t6
    ctx->r14 = lo;
    // 0x15148B34: addu        $a2, $v0, $t6
    ctx->r6 = ADD32(ctx->r2, ctx->r14);
    // 0x15148B38: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x15148B3C: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15148B40: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15148B44: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x15148B48: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15148B4C: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15148B50: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x15148B54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15148B58: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15148B5C: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x15148B60: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15148B64: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15148B68: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15148B6C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15148B70: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x15148B74: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x15148B78: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15148B7C: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15148B80: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15148B84: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15148B88: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x15148B8C: lb          $t7, 0x2D($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2D);
    // 0x15148B90: bnel        $a1, $t7, L_15148B10
    if (ctx->r5 != ctx->r15) {
        // 0x15148B94: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_15148B10;
    }
    goto skip_0;
    // 0x15148B94: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_0:
    // 0x15148B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15148B9C: jr          $ra
    // 0x15148BA0: nop

    return;
    return;
    // 0x15148BA0: nop

;}
RECOMP_FUNC void func_1509B570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509B570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509B574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509B578: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1509B57C: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x1509B580: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509B584: jal         0x1509B704
    // 0x1509B588: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_1509B704(rdram, ctx);
        goto after_0;
    // 0x1509B588: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1509B58C: beq         $v0, $zero, L_1509B5A0
    if (ctx->r2 == 0) {
        // 0x1509B590: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1509B5A0;
    }
    // 0x1509B590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509B594: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x1509B598: b           L_1509B5A4
    // 0x1509B59C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
        goto L_1509B5A4;
    // 0x1509B59C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
L_1509B5A0:
    // 0x1509B5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509B5A4:
    // 0x1509B5A4: jr          $ra
    // 0x1509B5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1509B5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1501C17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C17C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1501C180: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1501C184: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1501C188: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1501C18C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x1501C190: lbu         $v0, 0x4060($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4060);
    // 0x1501C194: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x1501C198: beq         $at, $zero, L_1501C1A8
    if (ctx->r1 == 0) {
        // 0x1501C19C: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_1501C1A8;
    }
    // 0x1501C19C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C1A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1501C1A4: sb          $zero, -0x16C4($at)
    MEM_B(-0X16C4, ctx->r1) = 0;
L_1501C1A8:
    // 0x1501C1A8: jr          $ra
    // 0x1501C1AC: nop

    return;
    return;
    // 0x1501C1AC: nop

;}
RECOMP_FUNC void func_1506DC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506DC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506DC18: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506DC1C: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506DC20: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1506DC24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506DC28: lwc1        $f0, 0x118($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X118);
    // 0x1506DC2C: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1506DC30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506DC34: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1506DC38: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1506DC3C: nop

    // 0x1506DC40: bc1t        L_1506DC60
    if (c1cs) {
        // 0x1506DC44: nop
    
            goto L_1506DC60;
    }
    // 0x1506DC44: nop

    // 0x1506DC48: lwc1        $f10, -0x62B0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X62B0);
    // 0x1506DC4C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x1506DC50: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x1506DC54: nop

    // 0x1506DC58: bc1f        L_1506DC8C
    if (!c1cs) {
        // 0x1506DC5C: nop
    
            goto L_1506DC8C;
    }
    // 0x1506DC5C: nop

L_1506DC60:
    // 0x1506DC60: jal         0x150ADA20
    // 0x1506DC64: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1506DC64: nop

    after_0:
    // 0x1506DC68: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x1506DC6C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x1506DC70: bne         $at, $zero, L_1506DC80
    if (ctx->r1 != 0) {
        // 0x1506DC74: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_1506DC80;
    }
    // 0x1506DC74: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506DC78: b           L_1506DC84
    // 0x1506DC7C: addiu       $a0, $v1, 0x612
    ctx->r4 = ADD32(ctx->r3, 0X612);
        goto L_1506DC84;
    // 0x1506DC7C: addiu       $a0, $v1, 0x612
    ctx->r4 = ADD32(ctx->r3, 0X612);
L_1506DC80:
    // 0x1506DC80: addiu       $a0, $v1, 0x8F
    ctx->r4 = ADD32(ctx->r3, 0X8F);
L_1506DC84:
    // 0x1506DC84: b           L_1506DC8C
    // 0x1506DC88: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
        goto L_1506DC8C;
    // 0x1506DC88: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
L_1506DC8C:
    // 0x1506DC8C: jal         0x15060A9C
    // 0x1506DC90: nop

    func_15060A9C(rdram, ctx);
        goto after_1;
    // 0x1506DC90: nop

    after_1:
    // 0x1506DC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506DC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506DC9C: jr          $ra
    // 0x1506DCA0: nop

    return;
    return;
    // 0x1506DCA0: nop

;}
RECOMP_FUNC void __osPfsSelectBank2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F123C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151F1240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F1244: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151F1248: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151F124C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_151F1250:
    // 0x151F1250: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151F1254: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x151F1258: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x151F125C: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x151F1260: sb          $t7, 0x28($t9)
    MEM_B(0X28, ctx->r25) = ctx->r15;
    // 0x151F1264: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x151F1268: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151F126C: slti        $at, $t1, 0x20
    ctx->r1 = SIGNED(ctx->r9) < 0X20 ? 1 : 0;
    // 0x151F1270: bne         $at, $zero, L_151F1250
    if (ctx->r1 != 0) {
        // 0x151F1274: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_151F1250;
    }
    // 0x151F1274: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151F1278: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151F127C: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x151F1280: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x151F1284: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x151F1288: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x151F128C: jal         0x10025870
    // 0x151F1290: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    __osContRamWrite_recomp(rdram, ctx);
        goto after_0;
    // 0x151F1290: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x151F1294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F1298: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x151F129C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x151F12A0: jr          $ra
    // 0x151F12A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x151F12A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_150491EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150491EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150491F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150491F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150491F8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150491FC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x15049200: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15049204: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15049208: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x1504920C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x15049210: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15049214: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15049218: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1504921C: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x15049220: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x15049224: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15049228: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x1504922C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x15049230: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x15049234: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x15049238: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1504923C: jal         0x1504917C
    // 0x15049240: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    func_1504917C(rdram, ctx);
        goto after_0;
    // 0x15049240: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    after_0:
    // 0x15049244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15049248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1504924C: jr          $ra
    // 0x15049250: nop

    return;
    return;
    // 0x15049250: nop

;}
RECOMP_FUNC void func_15153CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15153CCC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15153CD0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x15153CD4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x15153CD8: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x15153CDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15153CE0: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x15153CE4: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x15153CE8: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x15153CEC: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x15153CF0: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x15153CF4: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x15153CF8: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x15153CFC: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x15153D00: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x15153D04: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x15153D08: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x15153D0C: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x15153D10: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x15153D14: jal         0x1514F6E8
    // 0x15153D18: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_1514F6E8(rdram, ctx);
        goto after_0;
    // 0x15153D18: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_0:
    // 0x15153D1C: beql        $v0, $zero, L_15153EE0
    if (ctx->r2 == 0) {
        // 0x15153D20: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_15153EE0;
    }
    goto skip_0;
    // 0x15153D20: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_0:
    // 0x15153D24: jal         0x150ADA20
    // 0x15153D28: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15153D28: nop

    after_1:
    // 0x15153D2C: lh          $t6, 0x26($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X26);
    // 0x15153D30: lh          $t9, 0x24($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X24);
    // 0x15153D34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15153D38: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15153D3C: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x15153D40: mfhi        $t8
    ctx->r24 = hi;
    // 0x15153D44: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x15153D48: bne         $t7, $zero, L_15153D54
    if (ctx->r15 != 0) {
        // 0x15153D4C: nop
    
            goto L_15153D54;
    }
    // 0x15153D4C: nop

    // 0x15153D50: break       7
    do_break(353713488);
L_15153D54:
    // 0x15153D54: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x15153D58: beq         $s4, $zero, L_15153EDC
    if (ctx->r20 == 0) {
        // 0x15153D5C: addiu       $s5, $sp, 0xA8
        ctx->r21 = ADD32(ctx->r29, 0XA8);
            goto L_15153EDC;
    }
    // 0x15153D5C: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x15153D60: lwc1        $f24, 0x5FFC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5FFC);
L_15153D64:
    // 0x15153D64: jal         0x150ADA68
    // 0x15153D68: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15153D68: nop

    after_2:
    // 0x15153D6C: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15153D70: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15153D74: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15153D78: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15153D7C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x15153D80: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15153D84: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15153D88: jal         0x1514F808
    // 0x15153D8C: nop

    func_1514F808(rdram, ctx);
        goto after_3;
    // 0x15153D8C: nop

    after_3:
    // 0x15153D90: jal         0x150ADA68
    // 0x15153D94: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15153D94: nop

    after_4:
    // 0x15153D98: jal         0x150ADA20
    // 0x15153D9C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15153D9C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_5:
    // 0x15153DA0: jal         0x150ADA20
    // 0x15153DA4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15153DA4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_6:
    // 0x15153DA8: jal         0x150ADA68
    // 0x15153DAC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15153DAC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_7:
    // 0x15153DB0: jal         0x150ADA20
    // 0x15153DB4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15153DB4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_8:
    // 0x15153DB8: jal         0x150ADA68
    // 0x15153DBC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x15153DBC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_9:
    // 0x15153DC0: lh          $t0, 0x2E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2E);
    // 0x15153DC4: lh          $t6, 0x32($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X32);
    // 0x15153DC8: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x15153DCC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x15153DD0: divu        $zero, $s1, $t1
    lo = S32(U32(ctx->r17) / U32(ctx->r9)); hi = S32(U32(ctx->r17) % U32(ctx->r9));
    // 0x15153DD4: mfhi        $t2
    ctx->r10 = hi;
    // 0x15153DD8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15153DDC: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15153DE0: divu        $zero, $s2, $t7
    lo = S32(U32(ctx->r18) / U32(ctx->r15)); hi = S32(U32(ctx->r18) % U32(ctx->r15));
    // 0x15153DE4: mfhi        $t8
    ctx->r24 = hi;
    // 0x15153DE8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15153DEC: lh          $t3, 0x2C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2C);
    // 0x15153DF0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15153DF4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15153DF8: mul.s       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x15153DFC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15153E00: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15153E04: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x15153E08: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x15153E0C: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x15153E10: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15153E14: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x15153E18: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x15153E1C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15153E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15153E24: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x15153E28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15153E2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15153E30: bne         $t1, $zero, L_15153E3C
    if (ctx->r9 != 0) {
        // 0x15153E34: nop
    
            goto L_15153E3C;
    }
    // 0x15153E34: nop

    // 0x15153E38: break       7
    do_break(353713720);
L_15153E3C:
    // 0x15153E3C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x15153E40: lh          $t1, 0x2A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2A);
    // 0x15153E44: lh          $t4, 0x28($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X28);
    // 0x15153E48: bne         $t7, $zero, L_15153E54
    if (ctx->r15 != 0) {
        // 0x15153E4C: nop
    
            goto L_15153E54;
    }
    // 0x15153E4C: nop

    // 0x15153E50: break       7
    do_break(353713744);
L_15153E54:
    // 0x15153E54: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x15153E58: divu        $zero, $s3, $t2
    lo = S32(U32(ctx->r19) / U32(ctx->r10)); hi = S32(U32(ctx->r19) % U32(ctx->r10));
    // 0x15153E5C: mfhi        $t3
    ctx->r11 = hi;
    // 0x15153E60: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15153E64: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15153E68: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15153E6C: bne         $t2, $zero, L_15153E78
    if (ctx->r10 != 0) {
        // 0x15153E70: nop
    
            goto L_15153E78;
    }
    // 0x15153E70: nop

    // 0x15153E74: break       7
    do_break(353713780);
L_15153E78:
    // 0x15153E78: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15153E7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15153E80: bc1fl       L_15153E90
    if (!c1cs) {
        // 0x15153E84: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_15153E90;
    }
    goto skip_1;
    // 0x15153E84: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    skip_1:
    // 0x15153E88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15153E8C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_15153E90:
    // 0x15153E90: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x15153E94: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x15153E98: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15153E9C: lbu         $t8, 0x34($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X34);
    // 0x15153EA0: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x15153EA4: lbu         $t2, 0xC7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XC7);
    // 0x15153EA8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x15153EAC: lh          $t9, 0x3C($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X3C);
    // 0x15153EB0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x15153EB4: lh          $t0, 0x3E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X3E);
    // 0x15153EB8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x15153EBC: lw          $t1, 0x40($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X40);
    // 0x15153EC0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x15153EC4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x15153EC8: jal         0x151DA6F8
    // 0x15153ECC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_151DA6F8(rdram, ctx);
        goto after_10;
    // 0x15153ECC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_10:
    // 0x15153ED0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x15153ED4: bne         $s4, $zero, L_15153D64
    if (ctx->r20 != 0) {
        // 0x15153ED8: nop
    
            goto L_15153D64;
    }
    // 0x15153ED8: nop

L_15153EDC:
    // 0x15153EDC: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_15153EE0:
    // 0x15153EE0: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x15153EE4: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x15153EE8: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x15153EEC: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x15153EF0: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x15153EF4: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x15153EF8: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x15153EFC: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x15153F00: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x15153F04: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x15153F08: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x15153F0C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x15153F10: jr          $ra
    // 0x15153F14: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15153F14: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1517EF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517EF00: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517EF04: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x1517EF08: lbu         $v0, -0x2240($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2240);
    // 0x1517EF0C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517EF10: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x1517EF14: beq         $v0, $zero, L_1517EF24
    if (ctx->r2 == 0) {
        // 0x1517EF18: addu        $t8, $t8, $a0
        ctx->r24 = ADD32(ctx->r24, ctx->r4);
            goto L_1517EF24;
    }
    // 0x1517EF18: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x1517EF1C: b           L_1517EFA0
    // 0x1517EF20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_1517EFA0;
    // 0x1517EF20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1517EF24:
    // 0x1517EF24: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x1517EF28: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x1517EF2C: lw          $a1, -0x21D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X21D8);
    // 0x1517EF30: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517EF34: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1517EF38: beq         $a1, $zero, L_1517EF8C
    if (ctx->r5 == 0) {
        // 0x1517EF3C: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_1517EF8C;
    }
    // 0x1517EF3C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1517EF40: lw          $t6, -0x2250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2250);
    // 0x1517EF44: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1517EF48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1517EF4C: div         $zero, $t7, $a1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r5)));
    // 0x1517EF50: bne         $a1, $zero, L_1517EF5C
    if (ctx->r5 != 0) {
        // 0x1517EF54: nop
    
            goto L_1517EF5C;
    }
    // 0x1517EF54: nop

    // 0x1517EF58: break       7
    do_break(353890136);
L_1517EF5C:
    // 0x1517EF5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517EF60: bne         $a1, $at, L_1517EF74
    if (ctx->r5 != ctx->r1) {
        // 0x1517EF64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1517EF74;
    }
    // 0x1517EF64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517EF68: bne         $t7, $at, L_1517EF74
    if (ctx->r15 != ctx->r1) {
        // 0x1517EF6C: nop
    
            goto L_1517EF74;
    }
    // 0x1517EF6C: nop

    // 0x1517EF70: break       6
    do_break(353890160);
L_1517EF74:
    // 0x1517EF74: mflo        $v1
    ctx->r3 = lo;
    // 0x1517EF78: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x1517EF7C: bne         $at, $zero, L_1517EF90
    if (ctx->r1 != 0) {
        // 0x1517EF80: nop
    
            goto L_1517EF90;
    }
    // 0x1517EF80: nop

    // 0x1517EF84: b           L_1517EF90
    // 0x1517EF88: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_1517EF90;
    // 0x1517EF88: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1517EF8C:
    // 0x1517EF8C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1517EF90:
    // 0x1517EF90: lb          $t8, -0x2254($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2254);
    // 0x1517EF94: bnel        $t8, $zero, L_1517EFA4
    if (ctx->r24 != 0) {
        // 0x1517EF98: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1517EFA4;
    }
    goto skip_0;
    // 0x1517EF98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x1517EF9C: subu        $v1, $t9, $v1
    ctx->r3 = SUB32(ctx->r25, ctx->r3);
L_1517EFA0:
    // 0x1517EFA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1517EFA4:
    // 0x1517EFA4: jr          $ra
    // 0x1517EFA8: nop

    return;
    return;
    // 0x1517EFA8: nop

;}
RECOMP_FUNC void func_15185A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185A28: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15185A2C: addiu       $a3, $a3, 0x368C
    ctx->r7 = ADD32(ctx->r7, 0X368C);
    // 0x15185A30: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15185A34: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15185A38: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15185A3C: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15185A40: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x15185A44: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15185A48: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15185A4C: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x15185A50: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15185A54: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15185A58: add.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15185A5C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15185A60: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15185A64: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15185A68: sub.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x15185A6C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15185A70: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x15185A74: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x15185A78: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15185A7C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x15185A80: lh          $t6, 0xC($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XC);
    // 0x15185A84: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x15185A88: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x15185A8C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15185A90: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15185A94: addiu       $v0, $a2, 0x14
    ctx->r2 = ADD32(ctx->r6, 0X14);
    // 0x15185A98: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15185A9C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15185AA0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15185AA4: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15185AA8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15185AAC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15185AB0: nop

    // 0x15185AB4: sh          $t9, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r25;
    // 0x15185AB8: lh          $t0, 0xE($a1)
    ctx->r8 = MEM_H(ctx->r5, 0XE);
    // 0x15185ABC: lh          $v1, 0xE($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XE);
    // 0x15185AC0: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x15185AC4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15185AC8: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x15185ACC: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15185AD0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15185AD4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15185AD8: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x15185ADC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15185AE0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15185AE4: nop

    // 0x15185AE8: sh          $t3, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r11;
    // 0x15185AEC: lh          $t4, 0x10($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X10);
    // 0x15185AF0: lh          $v1, 0x10($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X10);
    // 0x15185AF4: subu        $t5, $t4, $v1
    ctx->r13 = SUB32(ctx->r12, ctx->r3);
    // 0x15185AF8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x15185AFC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15185B00: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15185B04: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15185B08: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15185B0C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x15185B10: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15185B14: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15185B18: nop

    // 0x15185B1C: sh          $t7, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r15;
    // 0x15185B20: jr          $ra
    // 0x15185B24: nop

    return;
    return;
    // 0x15185B24: nop

;}
RECOMP_FUNC void func_1515F0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F0AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515F0B0: lwc1        $f0, 0x6524($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6524);
    // 0x1515F0B4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1515F0B8: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x1515F0BC: bc1fl       L_1515F0D0
    if (!c1cs) {
        // 0x1515F0C0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1515F0D0;
    }
    goto skip_0;
    // 0x1515F0C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x1515F0C4: b           L_1515F0E8
    // 0x1515F0C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_1515F0E8;
    // 0x1515F0C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1515F0CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1515F0D0:
    // 0x1515F0D0: nop

    // 0x1515F0D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1515F0D8: nop

    // 0x1515F0DC: bc1fl       L_1515F0EC
    if (!c1cs) {
        // 0x1515F0E0: trunc.w.s   $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
            goto L_1515F0EC;
    }
    goto skip_1;
    // 0x1515F0E0: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    skip_1:
    // 0x1515F0E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1515F0E8:
    // 0x1515F0E8: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
L_1515F0EC:
    // 0x1515F0EC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1515F0F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1515F0F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x1515F0F8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1515F0FC: nop

    // 0x1515F100: sw          $t7, -0x32F0($at)
    MEM_W(-0X32F0, ctx->r1) = ctx->r15;
    // 0x1515F104: jr          $ra
    // 0x1515F108: nop

    return;
    return;
    // 0x1515F108: nop

;}
RECOMP_FUNC void func_15131DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131DEC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15131DF0: lwc1        $f2, 0xA8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x15131DF4: lwc1        $f4, 0xB0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x15131DF8: lwc1        $f8, 0xB8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x15131DFC: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x15131E00: lwc1        $f6, 0xB4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x15131E04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15131E08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15131E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15131E10: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15131E14: nop

    // 0x15131E18: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15131E1C: swc1        $f12, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f12.u32l;
    // 0x15131E20: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    // 0x15131E24: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15131E28: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x15131E2C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15131E30: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15131E34: nop

    // 0x15131E38: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x15131E3C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15131E40: nop

    // 0x15131E44: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15131E48: beq         $t7, $zero, L_15131E94
    if (ctx->r15 == 0) {
        // 0x15131E4C: nop
    
            goto L_15131E94;
    }
    // 0x15131E4C: nop

    // 0x15131E50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15131E54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15131E58: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15131E5C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15131E60: nop

    // 0x15131E64: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15131E68: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15131E6C: nop

    // 0x15131E70: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15131E74: bne         $t7, $zero, L_15131E8C
    if (ctx->r15 != 0) {
        // 0x15131E78: nop
    
            goto L_15131E8C;
    }
    // 0x15131E78: nop

    // 0x15131E7C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15131E80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15131E84: b           L_15131EA4
    // 0x15131E88: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15131EA4;
    // 0x15131E88: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15131E8C:
    // 0x15131E8C: b           L_15131EA4
    // 0x15131E90: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15131EA4;
    // 0x15131E90: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_15131E94:
    // 0x15131E94: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15131E98: nop

    // 0x15131E9C: bltz        $t7, L_15131E8C
    if (SIGNED(ctx->r15) < 0) {
        // 0x15131EA0: nop
    
            goto L_15131E8C;
    }
    // 0x15131EA0: nop

L_15131EA4:
    // 0x15131EA4: sb          $t7, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r15;
    // 0x15131EA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15131EAC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15131EB0: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15131EB4: lwc1        $f6, 0xAC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x15131EB8: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x15131EBC: swc1        $f10, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f10.u32l;
    // 0x15131EC0: lwc1        $f16, 0xA8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x15131EC4: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x15131EC8: nop

    // 0x15131ECC: bc1f        L_15131EDC
    if (!c1cs) {
        // 0x15131ED0: nop
    
            goto L_15131EDC;
    }
    // 0x15131ED0: nop

    // 0x15131ED4: jr          $ra
    // 0x15131ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15131ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15131EDC:
    // 0x15131EDC: jr          $ra
    // 0x15131EE0: nop

    return;
    return;
    // 0x15131EE0: nop

;}
RECOMP_FUNC void func_150750A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150750A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150750A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150750AC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150750B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150750B4: nop

    // 0x150750B8: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x150750BC: jr          $ra
    // 0x150750C0: nop

    return;
    return;
    // 0x150750C0: nop

;}
RECOMP_FUNC void func_15008B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15008B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15008B98: jal         0x15008BB0
    // 0x15008B9C: nop

    func_15008BB0(rdram, ctx);
        goto after_0;
    // 0x15008B9C: nop

    after_0:
    // 0x15008BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15008BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15008BA8: jr          $ra
    // 0x15008BAC: nop

    return;
    return;
    // 0x15008BAC: nop

;}
RECOMP_FUNC void func_1504A2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504A2B0: lui         $at, 0x3400
    ctx->r1 = S32(0X3400 << 16);
    // 0x1504A2B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504A2B8: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x1504A2BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504A2C0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1504A2C4: nop

    // 0x1504A2C8: bc1f        L_1504A2E0
    if (!c1cs) {
        // 0x1504A2CC: nop
    
            goto L_1504A2E0;
    }
    // 0x1504A2CC: nop

    // 0x1504A2D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504A2D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1504A2D8: jr          $ra
    // 0x1504A2DC: nop

    return;
    return;
    // 0x1504A2DC: nop

L_1504A2E0:
    // 0x1504A2E0: lwc1        $f6, -0x6F60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F60);
    // 0x1504A2E4: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1504A2E8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1504A2EC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x1504A2F0: nop

    // 0x1504A2F4: slti        $at, $a0, 0x401
    ctx->r1 = SIGNED(ctx->r4) < 0X401 ? 1 : 0;
    // 0x1504A2F8: bne         $at, $zero, L_1504A328
    if (ctx->r1 != 0) {
        // 0x1504A2FC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1504A328;
    }
    // 0x1504A2FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1504A300: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1504A304: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504A308: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x1504A30C: nop

    // 0x1504A310: bc1f        L_1504A320
    if (!c1cs) {
        // 0x1504A314: nop
    
            goto L_1504A320;
    }
    // 0x1504A314: nop

    // 0x1504A318: jr          $ra
    // 0x1504A31C: lwc1        $f0, -0x6F5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6F5C);
    return;
    return;
    // 0x1504A31C: lwc1        $f0, -0x6F5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6F5C);
L_1504A320:
    // 0x1504A320: jr          $ra
    // 0x1504A324: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    return;
    return;
    // 0x1504A324: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_1504A328:
    // 0x1504A328: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x1504A32C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504A330: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1504A334: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504A338: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504A33C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504A340: lwc1        $f8, -0x6F58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6F58);
    // 0x1504A344: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x1504A348: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1504A34C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1504A350: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x1504A354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504A358: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1504A35C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
L_1504A360:
    // 0x1504A360: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x1504A364: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1504A368: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504A36C: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1504A370: mul.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1504A374: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x1504A378: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x1504A37C: nop

    // 0x1504A380: bc1fl       L_1504A360
    if (!c1cs) {
        // 0x1504A384: mtc1        $v1, $f4
        ctx->f4.u32l = ctx->r3;
            goto L_1504A360;
    }
    goto skip_0;
    // 0x1504A384: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    skip_0:
    // 0x1504A388: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1504A38C: beql        $a0, $zero, L_1504A3CC
    if (ctx->r4 == 0) {
        // 0x1504A390: c.le.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
            goto L_1504A3CC;
    }
    goto skip_1;
    // 0x1504A390: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    skip_1:
    // 0x1504A394: beq         $a1, $zero, L_1504A3B0
    if (ctx->r5 == 0) {
        // 0x1504A398: addu        $v1, $a1, $a0
        ctx->r3 = ADD32(ctx->r5, ctx->r4);
            goto L_1504A3B0;
    }
    // 0x1504A398: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_1504A39C:
    // 0x1504A39C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1504A3A0: bne         $v1, $v0, L_1504A39C
    if (ctx->r3 != ctx->r2) {
        // 0x1504A3A4: add.s       $f2, $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
            goto L_1504A39C;
    }
    // 0x1504A3A4: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1504A3A8: beql        $v0, $zero, L_1504A3CC
    if (ctx->r2 == 0) {
        // 0x1504A3AC: c.le.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
            goto L_1504A3CC;
    }
    goto skip_2;
    // 0x1504A3AC: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    skip_2:
L_1504A3B0:
    // 0x1504A3B0: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1504A3B4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1504A3B8: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1504A3BC: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1504A3C0: bne         $v0, $zero, L_1504A3B0
    if (ctx->r2 != 0) {
        // 0x1504A3C4: add.s       $f2, $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
            goto L_1504A3B0;
    }
    // 0x1504A3C4: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1504A3C8: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
L_1504A3CC:
    // 0x1504A3CC: nop

    // 0x1504A3D0: bc1fl       L_1504A3E4
    if (!c1cs) {
        // 0x1504A3D4: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_1504A3E4;
    }
    goto skip_3;
    // 0x1504A3D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_3:
    // 0x1504A3D8: jr          $ra
    // 0x1504A3DC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    return;
    // 0x1504A3DC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1504A3E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_1504A3E4:
    // 0x1504A3E4: nop

    // 0x1504A3E8: div.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1504A3EC: jr          $ra
    // 0x1504A3F0: nop

    return;
    return;
    // 0x1504A3F0: nop

;}
RECOMP_FUNC void func_150EC3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EC3D4: bnel        $a0, $a1, L_150EC3E8
    if (ctx->r4 != ctx->r5) {
        // 0x150EC3D8: lw          $t6, 0x0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X0);
            goto L_150EC3E8;
    }
    goto skip_0;
    // 0x150EC3D8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x150EC3DC: jr          $ra
    // 0x150EC3E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150EC3E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EC3E4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
L_150EC3E8:
    // 0x150EC3E8: bnel        $t6, $zero, L_150EC3FC
    if (ctx->r14 != 0) {
        // 0x150EC3EC: lbu         $v0, 0x4($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X4);
            goto L_150EC3FC;
    }
    goto skip_1;
    // 0x150EC3EC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    skip_1:
    // 0x150EC3F0: jr          $ra
    // 0x150EC3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150EC3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EC3F8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
L_150EC3FC:
    // 0x150EC3FC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150EC400: bne         $v0, $at, L_150EC410
    if (ctx->r2 != ctx->r1) {
        // 0x150EC404: nop
    
            goto L_150EC410;
    }
    // 0x150EC404: nop

    // 0x150EC408: jr          $ra
    // 0x150EC40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150EC40C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EC410:
    // 0x150EC410: beq         $v0, $zero, L_150EC448
    if (ctx->r2 == 0) {
        // 0x150EC414: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150EC448;
    }
    // 0x150EC414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150EC418: beq         $v0, $at, L_150EC448
    if (ctx->r2 == ctx->r1) {
        // 0x150EC41C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_150EC448;
    }
    // 0x150EC41C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150EC420: beq         $v0, $at, L_150EC448
    if (ctx->r2 == ctx->r1) {
        // 0x150EC424: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_150EC448;
    }
    // 0x150EC424: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150EC428: beq         $v0, $at, L_150EC448
    if (ctx->r2 == ctx->r1) {
        // 0x150EC42C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_150EC448;
    }
    // 0x150EC42C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150EC430: beq         $v0, $at, L_150EC448
    if (ctx->r2 == ctx->r1) {
        // 0x150EC434: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_150EC448;
    }
    // 0x150EC434: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150EC438: beq         $v0, $at, L_150EC448
    if (ctx->r2 == ctx->r1) {
        // 0x150EC43C: addiu       $at, $zero, 0x77
        ctx->r1 = ADD32(0, 0X77);
            goto L_150EC448;
    }
    // 0x150EC43C: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x150EC440: bnel        $v0, $at, L_150EC454
    if (ctx->r2 != ctx->r1) {
        // 0x150EC444: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150EC454;
    }
    goto skip_2;
    // 0x150EC444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_150EC448:
    // 0x150EC448: jr          $ra
    // 0x150EC44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150EC44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150EC450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EC454:
    // 0x150EC454: jr          $ra
    // 0x150EC458: nop

    return;
    return;
    // 0x150EC458: nop

;}
RECOMP_FUNC void func_1505A630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505A630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1505A634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505A638: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x1505A63C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1505A640: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x1505A644: jal         0x150484A0
    // 0x1505A648: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x1505A648: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x1505A64C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A650: lwc1        $f4, -0x6B28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B28);
    // 0x1505A654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1505A658: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1505A65C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1505A660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505A664: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1505A668: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x1505A66C: nop

    // 0x1505A670: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1505A674: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x1505A678: nop

    // 0x1505A67C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x1505A680: beql        $v0, $zero, L_1505A6D0
    if (ctx->r2 == 0) {
        // 0x1505A684: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_1505A6D0;
    }
    goto skip_0;
    // 0x1505A684: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x1505A688: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505A68C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1505A690: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1505A694: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x1505A698: nop

    // 0x1505A69C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1505A6A0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x1505A6A4: nop

    // 0x1505A6A8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x1505A6AC: bne         $v0, $zero, L_1505A6C4
    if (ctx->r2 != 0) {
        // 0x1505A6B0: nop
    
            goto L_1505A6C4;
    }
    // 0x1505A6B0: nop

    // 0x1505A6B4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x1505A6B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1505A6BC: b           L_1505A6DC
    // 0x1505A6C0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_1505A6DC;
    // 0x1505A6C0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_1505A6C4:
    // 0x1505A6C4: b           L_1505A6DC
    // 0x1505A6C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1505A6DC;
    // 0x1505A6C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1505A6CC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_1505A6D0:
    // 0x1505A6D0: nop

    // 0x1505A6D4: bltz        $v0, L_1505A6C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x1505A6D8: nop
    
            goto L_1505A6C4;
    }
    // 0x1505A6D8: nop

L_1505A6DC:
    // 0x1505A6DC: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x1505A6E0: addiu       $v0, $t7, 0x4000
    ctx->r2 = ADD32(ctx->r15, 0X4000);
    // 0x1505A6E4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1505A6E8: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x1505A6EC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x1505A6F0: jr          $ra
    // 0x1505A6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1505A6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1510A930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510A930: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1510A934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510A938: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1510A93C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1510A940: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x1510A944: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510A948: addiu       $t6, $t6, 0x17EC
    ctx->r14 = ADD32(ctx->r14, 0X17EC);
    // 0x1510A94C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1510A950: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x1510A954: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x1510A958: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x1510A95C: addiu       $t0, $zero, 0x18FC
    ctx->r8 = ADD32(0, 0X18FC);
    // 0x1510A960: addiu       $t1, $zero, 0x1A12
    ctx->r9 = ADD32(0, 0X1A12);
    // 0x1510A964: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x1510A968: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x1510A96C: addu        $t5, $a3, $a1
    ctx->r13 = ADD32(ctx->r7, ctx->r5);
    // 0x1510A970: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510A974: lwc1        $f6, 0x26A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X26A0);
    // 0x1510A978: sb          $t7, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r15;
    // 0x1510A97C: sh          $t8, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r24;
    // 0x1510A980: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x1510A984: sh          $t0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r8;
    // 0x1510A988: sh          $t1, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r9;
    // 0x1510A98C: sb          $t2, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r10;
    // 0x1510A990: or          $t4, $t3, $a1
    ctx->r12 = ctx->r11 | ctx->r5;
    // 0x1510A994: addu        $v0, $t5, $a2
    ctx->r2 = ADD32(ctx->r13, ctx->r6);
    // 0x1510A998: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1510A99C: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x1510A9A0: addiu       $t8, $zero, 0x2710
    ctx->r24 = ADD32(0, 0X2710);
    // 0x1510A9A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510A9A8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1510A9AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1510A9B0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1510A9B4: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x1510A9B8: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x1510A9BC: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1510A9C0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1510A9C4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x1510A9C8: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x1510A9CC: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x1510A9D0: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x1510A9D4: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x1510A9D8: sb          $t9, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r25;
    // 0x1510A9DC: sb          $t0, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r8;
    // 0x1510A9E0: sb          $t1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r9;
    // 0x1510A9E4: sb          $t2, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r10;
    // 0x1510A9E8: sb          $t3, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r11;
    // 0x1510A9EC: sb          $zero, 0x59($sp)
    MEM_B(0X59, ctx->r29) = 0;
    // 0x1510A9F0: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x1510A9F4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1510A9F8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x1510A9FC: jal         0x15169968
    // 0x1510AA00: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_15169968(rdram, ctx);
        goto after_0;
    // 0x1510AA00: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1510AA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510AA08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1510AA0C: jr          $ra
    // 0x1510AA10: nop

    return;
    return;
    // 0x1510AA10: nop

;}
RECOMP_FUNC void func_150617BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150617BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150617C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150617C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150617C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150617CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150617D0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150617D4: beql        $t6, $zero, L_1506195C
    if (ctx->r14 == 0) {
        // 0x150617D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506195C;
    }
    goto skip_0;
    // 0x150617D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x150617DC: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
    // 0x150617E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150617E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150617E8: bltz        $a0, L_150618A8
    if (SIGNED(ctx->r4) < 0) {
        // 0x150617EC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_150618A8;
    }
    // 0x150617EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150617F0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150617F4: addiu       $t0, $t0, -0x400C
    ctx->r8 = ADD32(ctx->r8, -0X400C);
L_150617F8:
    // 0x150617F8: lbu         $t7, 0xF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XF);
    // 0x150617FC: sll         $t4, $a3, 1
    ctx->r12 = S32(ctx->r7 << 1);
    // 0x15061800: and         $t8, $t7, $a3
    ctx->r24 = ctx->r15 & ctx->r7;
    // 0x15061804: beq         $t8, $zero, L_15061850
    if (ctx->r24 == 0) {
        // 0x15061808: or          $a3, $t4, $zero
        ctx->r7 = ctx->r12 | 0;
            goto L_15061850;
    }
    // 0x15061808: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x1506180C: lbu         $v1, 0xB($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XB);
    // 0x15061810: addu        $t9, $t0, $a2
    ctx->r25 = ADD32(ctx->r8, ctx->r6);
    // 0x15061814: blezl       $v1, L_1506189C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15061818: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_1506189C;
    }
    goto skip_1;
    // 0x15061818: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x1506181C: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x15061820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15061824: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15061828: bne         $t1, $zero, L_15061844
    if (ctx->r9 != 0) {
        // 0x1506182C: nop
    
            goto L_15061844;
    }
    // 0x1506182C: nop

    // 0x15061830: addiu       $v0, $v1, -0x32
    ctx->r2 = ADD32(ctx->r3, -0X32);
    // 0x15061834: bgezl       $v0, L_15061848
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15061838: sb          $v0, 0xB($a1)
        MEM_B(0XB, ctx->r5) = ctx->r2;
            goto L_15061848;
    }
    goto skip_2;
    // 0x15061838: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    skip_2:
    // 0x1506183C: b           L_15061844
    // 0x15061840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15061844;
    // 0x15061840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15061844:
    // 0x15061844: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
L_15061848:
    // 0x15061848: b           L_15061898
    // 0x1506184C: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
        goto L_15061898;
    // 0x1506184C: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
L_15061850:
    // 0x15061850: lbu         $v1, 0xB($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XB);
    // 0x15061854: addu        $t2, $t0, $a2
    ctx->r10 = ADD32(ctx->r8, ctx->r6);
    // 0x15061858: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1506185C: beql        $at, $zero, L_1506189C
    if (ctx->r1 == 0) {
        // 0x15061860: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_1506189C;
    }
    goto skip_3;
    // 0x15061860: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_3:
    // 0x15061864: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x15061868: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1506186C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15061870: bne         $t3, $zero, L_15061890
    if (ctx->r11 != 0) {
        // 0x15061874: nop
    
            goto L_15061890;
    }
    // 0x15061874: nop

    // 0x15061878: addiu       $v0, $v1, 0x32
    ctx->r2 = ADD32(ctx->r3, 0X32);
    // 0x1506187C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x15061880: bnel        $at, $zero, L_15061894
    if (ctx->r1 != 0) {
        // 0x15061884: sb          $v0, 0xB($a1)
        MEM_B(0XB, ctx->r5) = ctx->r2;
            goto L_15061894;
    }
    goto skip_4;
    // 0x15061884: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    skip_4:
    // 0x15061888: b           L_15061890
    // 0x1506188C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_15061890;
    // 0x1506188C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_15061890:
    // 0x15061890: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
L_15061894:
    // 0x15061894: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
L_15061898:
    // 0x15061898: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_1506189C:
    // 0x1506189C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x150618A0: beq         $at, $zero, L_150617F8
    if (ctx->r1 == 0) {
        // 0x150618A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_150617F8;
    }
    // 0x150618A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_150618A8:
    // 0x150618A8: lbu         $t5, 0xA($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XA);
    // 0x150618AC: beql        $t5, $zero, L_1506195C
    if (ctx->r13 == 0) {
        // 0x150618B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506195C;
    }
    goto skip_5;
    // 0x150618B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x150618B4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x150618B8: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x150618BC: beq         $v1, $a0, L_1506190C
    if (ctx->r3 == ctx->r4) {
        // 0x150618C0: slt         $at, $a0, $v1
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1506190C;
    }
    // 0x150618C0: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150618C4: beql        $at, $zero, L_150618EC
    if (ctx->r1 == 0) {
        // 0x150618C8: lbu         $t7, 0x9($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9);
            goto L_150618EC;
    }
    goto skip_6;
    // 0x150618C8: lbu         $t7, 0x9($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9);
    skip_6:
    // 0x150618CC: lbu         $t6, 0x9($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X9);
    // 0x150618D0: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x150618D4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150618D8: beql        $at, $zero, L_15061904
    if (ctx->r1 == 0) {
        // 0x150618DC: sb          $v0, 0x7($s0)
        MEM_B(0X7, ctx->r16) = ctx->r2;
            goto L_15061904;
    }
    goto skip_7;
    // 0x150618DC: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    skip_7:
    // 0x150618E0: b           L_15061900
    // 0x150618E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15061900;
    // 0x150618E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150618E8: lbu         $t7, 0x9($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9);
L_150618EC:
    // 0x150618EC: subu        $v0, $a0, $t7
    ctx->r2 = SUB32(ctx->r4, ctx->r15);
    // 0x150618F0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150618F4: beql        $at, $zero, L_15061904
    if (ctx->r1 == 0) {
        // 0x150618F8: sb          $v0, 0x7($s0)
        MEM_B(0X7, ctx->r16) = ctx->r2;
            goto L_15061904;
    }
    goto skip_8;
    // 0x150618F8: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    skip_8:
    // 0x150618FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15061900:
    // 0x15061900: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_15061904:
    // 0x15061904: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x15061908: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
L_1506190C:
    // 0x1506190C: bnel        $v1, $a0, L_1506195C
    if (ctx->r3 != ctx->r4) {
        // 0x15061910: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506195C;
    }
    goto skip_9;
    // 0x15061910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x15061914: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x15061918: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1506191C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061920: bnel        $v0, $at, L_1506193C
    if (ctx->r2 != ctx->r1) {
        // 0x15061924: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1506193C;
    }
    goto skip_10;
    // 0x15061924: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_10:
    // 0x15061928: jal         0x15060F28
    // 0x1506192C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x1506192C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15061930: b           L_1506195C
    // 0x15061934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506195C;
    // 0x15061934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15061938: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_1506193C:
    // 0x1506193C: bne         $v0, $at, L_15061954
    if (ctx->r2 != ctx->r1) {
        // 0x15061940: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15061954;
    }
    // 0x15061940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15061944: jal         0x15060F28
    // 0x15061948: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x15061948: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x1506194C: b           L_1506195C
    // 0x15061950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506195C;
    // 0x15061950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15061954:
    // 0x15061954: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x15061958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506195C:
    // 0x1506195C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15061960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15061964: jr          $ra
    // 0x15061968: nop

    return;
    return;
    // 0x15061968: nop

;}
RECOMP_FUNC void func_151DBAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DBAA8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151DBAAC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x151DBAB0: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x151DBAB4: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151DBAB8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151DBABC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151DBAC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DBAC4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x151DBAC8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x151DBACC: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x151DBAD0: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x151DBAD4: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x151DBAD8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151DBADC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151DBAE0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151DBAE4: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151DBAE8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151DBAEC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151DBAF0: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x151DBAF4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x151DBAF8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151DBAFC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x151DBB00: addiu       $t7, $zero, 0x9B
    ctx->r15 = ADD32(0, 0X9B);
    // 0x151DBB04: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151DBB08: lui         $at, 0x40B0
    ctx->r1 = S32(0X40B0 << 16);
    // 0x151DBB0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DBB10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DBB14: lwc1        $f6, -0x4B40($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4B40);
    // 0x151DBB18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DBB1C: lwc1        $f8, -0x4B3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B3C);
    // 0x151DBB20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DBB24: lwc1        $f10, -0x4B38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B38);
    // 0x151DBB28: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151DBB2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151DBB30: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x151DBB34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DBB38: lwc1        $f18, -0x4B34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4B34);
    // 0x151DBB3C: sh          $t3, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r11;
    // 0x151DBB40: sh          $t4, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r12;
    // 0x151DBB44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151DBB48: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x151DBB4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DBB50: lbu         $t3, 0x7B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7B);
    // 0x151DBB54: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x151DBB58: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x151DBB5C: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x151DBB60: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x151DBB64: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x151DBB68: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151DBB6C: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x151DBB70: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x151DBB74: sh          $t5, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r13;
    // 0x151DBB78: sh          $t6, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r14;
    // 0x151DBB7C: sh          $t9, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r25;
    // 0x151DBB80: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
    // 0x151DBB84: sh          $t7, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r15;
    // 0x151DBB88: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    // 0x151DBB8C: sh          $t1, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r9;
    // 0x151DBB90: sh          $t2, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r10;
    // 0x151DBB94: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151DBB98: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151DBB9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DBBA0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151DBBA4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151DBBA8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151DBBAC: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x151DBBB0: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x151DBBB4: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x151DBBB8: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x151DBBBC: jal         0x15153F18
    // 0x151DBBC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15153F18(rdram, ctx);
        goto after_0;
    // 0x151DBBC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x151DBBC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DBBC8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151DBBCC: jr          $ra
    // 0x151DBBD0: nop

    return;
    return;
    // 0x151DBBD0: nop

;}
RECOMP_FUNC void func_15138BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15138BC0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15138BC4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15138BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15138BCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15138BD0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15138BD4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x15138BD8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x15138BDC: jal         0x15134070
    // 0x15138BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15134070(rdram, ctx);
        goto after_0;
    // 0x15138BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15138BE4: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x15138BE8: beq         $v0, $at, L_15138C6C
    if (ctx->r2 == ctx->r1) {
        // 0x15138BEC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15138C6C;
    }
    // 0x15138BEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15138BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15138BF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15138BF8: jal         0x151380B4
    // 0x15138BFC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_151380B4(rdram, ctx);
        goto after_1;
    // 0x15138BFC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x15138C00: sb          $v0, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r2;
    // 0x15138C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15138C08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15138C0C: jal         0x15138120
    // 0x15138C10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15138120(rdram, ctx);
        goto after_2;
    // 0x15138C10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x15138C14: lbu         $t6, 0x4F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4F);
    // 0x15138C18: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15138C1C: beql        $t6, $zero, L_15138C70
    if (ctx->r14 == 0) {
        // 0x15138C20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15138C70;
    }
    goto skip_0;
    // 0x15138C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15138C24: jal         0x1504715C
    // 0x15138C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_3;
    // 0x15138C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x15138C2C: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x15138C30: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15138C34: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15138C38: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15138C3C: lbu         $a3, 0x67($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X67);
    // 0x15138C40: jal         0x151382E0
    // 0x15138C44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_151382E0(rdram, ctx);
        goto after_4;
    // 0x15138C44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x15138C48: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x15138C4C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x15138C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15138C54: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x15138C58: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15138C5C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x15138C60: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15138C64: jal         0x15138424
    // 0x15138C68: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15138424(rdram, ctx);
        goto after_5;
    // 0x15138C68: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_5:
L_15138C6C:
    // 0x15138C6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15138C70:
    // 0x15138C70: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15138C74: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15138C78: jr          $ra
    // 0x15138C7C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15138C7C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151942B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151942B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151942B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151942B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151942BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151942C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151942C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151942C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151942CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151942D0: jal         0x15193CA0
    // 0x151942D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15193CA0(rdram, ctx);
        goto after_0;
    // 0x151942D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x151942D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151942DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151942E0: jr          $ra
    // 0x151942E4: nop

    return;
    return;
    // 0x151942E4: nop

;}
RECOMP_FUNC void func_1503A7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503A7F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1503A7F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1503A7F8: addiu       $v0, $v0, 0x3FFA
    ctx->r2 = ADD32(ctx->r2, 0X3FFA);
    // 0x1503A7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503A800: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1503A804: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x1503A808: jal         0x15036F34
    // 0x1503A80C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_15036F34(rdram, ctx);
        goto after_0;
    // 0x1503A80C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x1503A810: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1503A814: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503A818: jal         0x1503A678
    // 0x1503A81C: sb          $t7, 0x3FFA($at)
    MEM_B(0X3FFA, ctx->r1) = ctx->r15;
    func_1503A678(rdram, ctx);
        goto after_1;
    // 0x1503A81C: sb          $t7, 0x3FFA($at)
    MEM_B(0X3FFA, ctx->r1) = ctx->r15;
    after_1:
    // 0x1503A820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503A824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1503A828: jr          $ra
    // 0x1503A82C: nop

    return;
    return;
    // 0x1503A82C: nop

;}
RECOMP_FUNC void func_151A25E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A25E0: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x151A25E4: lh          $t6, 0x54($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X54);
    // 0x151A25E8: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    // 0x151A25EC: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151A25F0: beql        $at, $zero, L_151A2618
    if (ctx->r1 == 0) {
        // 0x151A25F4: addiu       $v0, $a0, 0x50
        ctx->r2 = ADD32(ctx->r4, 0X50);
            goto L_151A2618;
    }
    goto skip_0;
    // 0x151A25F4: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    skip_0:
    // 0x151A25F8: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x151A25FC: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x151A2600: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x151A2604: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A2608: mflo        $t0
    ctx->r8 = lo;
    // 0x151A260C: sb          $t0, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r8;
    // 0x151A2610: nop

    // 0x151A2614: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
L_151A2618:
    // 0x151A2618: lh          $t1, 0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XA);
    // 0x151A261C: slt         $at, $t1, $v1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151A2620: beql        $at, $zero, L_151A2648
    if (ctx->r1 == 0) {
        // 0x151A2624: lh          $t7, 0x10($v0)
        ctx->r15 = MEM_H(ctx->r2, 0X10);
            goto L_151A2648;
    }
    goto skip_1;
    // 0x151A2624: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    skip_1:
    // 0x151A2628: lh          $t2, 0x8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X8);
    // 0x151A262C: lh          $t4, 0x6($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X6);
    // 0x151A2630: subu        $t3, $t2, $v1
    ctx->r11 = SUB32(ctx->r10, ctx->r3);
    // 0x151A2634: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A2638: mflo        $t6
    ctx->r14 = lo;
    // 0x151A263C: sh          $t6, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r14;
    // 0x151A2640: sh          $t6, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r14;
    // 0x151A2644: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
L_151A2648:
    // 0x151A2648: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151A264C: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151A2650: beql        $at, $zero, L_151A2670
    if (ctx->r1 == 0) {
        // 0x151A2654: lh          $t0, 0x14($v0)
        ctx->r8 = MEM_H(ctx->r2, 0X14);
            goto L_151A2670;
    }
    goto skip_2;
    // 0x151A2654: lh          $t0, 0x14($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X14);
    skip_2:
    // 0x151A2658: lh          $t8, 0x12($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X12);
    // 0x151A265C: multu       $v1, $t8
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A2660: mflo        $t9
    ctx->r25 = lo;
    // 0x151A2664: sb          $t9, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r25;
    // 0x151A2668: nop

    // 0x151A266C: lh          $t0, 0x14($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X14);
L_151A2670:
    // 0x151A2670: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151A2674: beql        $at, $zero, L_151A26AC
    if (ctx->r1 == 0) {
        // 0x151A2678: lh          $t9, 0x18($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X18);
            goto L_151A26AC;
    }
    goto skip_3;
    // 0x151A2678: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
    skip_3:
    // 0x151A267C: lh          $t1, 0x16($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X16);
    // 0x151A2680: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x151A2684: lh          $t5, 0x34($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X34);
    // 0x151A2688: lh          $t7, 0x36($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X36);
    // 0x151A268C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A2690: mflo        $t4
    ctx->r12 = lo;
    // 0x151A2694: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x151A2698: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x151A269C: sh          $t6, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r14;
    // 0x151A26A0: sh          $t8, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r24;
    // 0x151A26A4: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x151A26A8: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
L_151A26AC:
    // 0x151A26AC: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151A26B0: beql        $at, $zero, L_151A26D0
    if (ctx->r1 == 0) {
        // 0x151A26B4: lh          $t2, 0xE($v0)
        ctx->r10 = MEM_H(ctx->r2, 0XE);
            goto L_151A26D0;
    }
    goto skip_4;
    // 0x151A26B4: lh          $t2, 0xE($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE);
    skip_4:
    // 0x151A26B8: lh          $t0, 0x1A($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X1A);
    // 0x151A26BC: addiu       $t1, $zero, -0x270F
    ctx->r9 = ADD32(0, -0X270F);
    // 0x151A26C0: sh          $t0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r8;
    // 0x151A26C4: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x151A26C8: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x151A26CC: lh          $t2, 0xE($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE);
L_151A26D0:
    // 0x151A26D0: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A26D4: mflo        $t3
    ctx->r11 = lo;
    // 0x151A26D8: sb          $t3, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r11;
    // 0x151A26DC: sb          $t3, 0x41($a0)
    MEM_B(0X41, ctx->r4) = ctx->r11;
    // 0x151A26E0: sb          $t3, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r11;
    // 0x151A26E4: jr          $ra
    // 0x151A26E8: nop

    return;
    return;
    // 0x151A26E8: nop

;}
RECOMP_FUNC void func_1505A9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505A9AC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1505A9B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1505A9B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1505A9B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1505A9BC: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1505A9C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1505A9C4: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x1505A9C8: sb          $t6, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r14;
    // 0x1505A9CC: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x1505A9D0: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505A9D4: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505A9D8: lbu         $t8, 0x4F($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4F);
    // 0x1505A9DC: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x1505A9E0: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1505A9E4: beql        $t8, $zero, L_1505AB48
    if (ctx->r24 == 0) {
        // 0x1505A9E8: lbu         $t3, 0x65($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X65);
            goto L_1505AB48;
    }
    goto skip_0;
    // 0x1505A9E8: lbu         $t3, 0x65($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X65);
    skip_0:
    // 0x1505A9EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505A9F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505A9F4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1505A9F8: nop

    // 0x1505A9FC: bc1fl       L_1505AA14
    if (!c1cs) {
        // 0x1505AA00: lwc1        $f6, 0x118($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X118);
            goto L_1505AA14;
    }
    goto skip_1;
    // 0x1505AA00: lwc1        $f6, 0x118($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X118);
    skip_1:
    // 0x1505AA04: swc1        $f4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f4.u32l;
    // 0x1505AA08: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x1505AA0C: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505AA10: lwc1        $f6, 0x118($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X118);
L_1505AA14:
    // 0x1505AA14: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x1505AA18: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x1505AA1C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1505AA20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505AA24: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x1505AA28: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1505AA2C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x1505AA30: nop

    // 0x1505AA34: bc1fl       L_1505B5E8
    if (!c1cs) {
        // 0x1505AA38: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B5E8;
    }
    goto skip_2;
    // 0x1505AA38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x1505AA3C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505AA40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505AA44: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x1505AA48: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x1505AA4C: nop

    // 0x1505AA50: bc1fl       L_1505B5E8
    if (!c1cs) {
        // 0x1505AA54: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B5E8;
    }
    goto skip_3;
    // 0x1505AA54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x1505AA58: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1505AA5C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1505AA60: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1505AA64: nop

    // 0x1505AA68: bc1fl       L_1505AA84
    if (!c1cs) {
        // 0x1505AA6C: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_1505AA84;
    }
    goto skip_4;
    // 0x1505AA6C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_4:
    // 0x1505AA70: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1505AA74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1505AA78: sb          $a0, 0x4F($t9)
    MEM_B(0X4F, ctx->r25) = ctx->r4;
    // 0x1505AA7C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505AA80: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_1505AA84:
    // 0x1505AA84: nop

    // 0x1505AA88: bc1fl       L_1505AB04
    if (!c1cs) {
        // 0x1505AA8C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_1505AB04;
    }
    goto skip_5;
    // 0x1505AA8C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_5:
    // 0x1505AA90: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x1505AA94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505AA98: nop

    // 0x1505AA9C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1505AAA0: nop

    // 0x1505AAA4: bc1f        L_1505AAF0
    if (!c1cs) {
        // 0x1505AAA8: nop
    
            goto L_1505AAF0;
    }
    // 0x1505AAA8: nop

    // 0x1505AAAC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1505AAB0: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x1505AAB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505AAB8: bc1f        L_1505AAE0
    if (!c1cs) {
        // 0x1505AABC: nop
    
            goto L_1505AAE0;
    }
    // 0x1505AABC: nop

    // 0x1505AAC0: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505AAC4: lwc1        $f8, -0x6B18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B18);
    // 0x1505AAC8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x1505AACC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505AAD0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1505AAD4: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x1505AAD8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505AADC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
L_1505AAE0:
    // 0x1505AAE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505AAE4: lwc1        $f18, -0x6B14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B14);
    // 0x1505AAE8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1505AAEC: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_1505AAF0:
    // 0x1505AAF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505AAF4: lwc1        $f6, -0x6B10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B10);
    // 0x1505AAF8: b           L_1505B5E4
    // 0x1505AAFC: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
        goto L_1505B5E4;
    // 0x1505AAFC: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x1505AB00: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_1505AB04:
    // 0x1505AB04: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1505AB08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1505AB0C: nop

    // 0x1505AB10: bc1f        L_1505AB34
    if (!c1cs) {
        // 0x1505AB14: nop
    
            goto L_1505AB34;
    }
    // 0x1505AB14: nop

    // 0x1505AB18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505AB1C: nop

    // 0x1505AB20: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1505AB24: nop

    // 0x1505AB28: bc1f        L_1505AB34
    if (!c1cs) {
        // 0x1505AB2C: nop
    
            goto L_1505AB34;
    }
    // 0x1505AB2C: nop

    // 0x1505AB30: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
L_1505AB34:
    // 0x1505AB34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505AB38: lwc1        $f10, -0x6B0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B0C);
    // 0x1505AB3C: b           L_1505B5E4
    // 0x1505AB40: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
        goto L_1505B5E4;
    // 0x1505AB40: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x1505AB44: lbu         $t3, 0x65($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X65);
L_1505AB48:
    // 0x1505AB48: beql        $t3, $zero, L_1505AB84
    if (ctx->r11 == 0) {
        // 0x1505AB4C: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_1505AB84;
    }
    goto skip_6;
    // 0x1505AB4C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_6:
    // 0x1505AB50: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505AB54: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AB58: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1505AB5C: nop

    // 0x1505AB60: bc1f        L_1505AB78
    if (!c1cs) {
        // 0x1505AB64: nop
    
            goto L_1505AB78;
    }
    // 0x1505AB64: nop

    // 0x1505AB68: swc1        $f16, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f16.u32l;
    // 0x1505AB6C: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AB70: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x1505AB74: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
L_1505AB78:
    // 0x1505AB78: b           L_1505B5E4
    // 0x1505AB7C: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
        goto L_1505B5E4;
    // 0x1505AB7C: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x1505AB80: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_1505AB84:
    // 0x1505AB84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505AB88: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1505AB8C: nop

    // 0x1505AB90: bc1fl       L_1505B580
    if (!c1cs) {
        // 0x1505AB94: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1505B580;
    }
    goto skip_7;
    // 0x1505AB94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_7:
    // 0x1505AB98: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x1505AB9C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x1505ABA0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1505ABA4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1505ABA8: bne         $v0, $zero, L_1505ABC0
    if (ctx->r2 != 0) {
        // 0x1505ABAC: addiu       $v1, $v1, -0x1610
        ctx->r3 = ADD32(ctx->r3, -0X1610);
            goto L_1505ABC0;
    }
    // 0x1505ABAC: addiu       $v1, $v1, -0x1610
    ctx->r3 = ADD32(ctx->r3, -0X1610);
    // 0x1505ABB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505ABB4: sb          $zero, 0x137($s0)
    MEM_B(0X137, ctx->r16) = 0;
    // 0x1505ABB8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x1505ABBC: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_1505ABC0:
    // 0x1505ABC0: bnel        $v0, $zero, L_1505ABD8
    if (ctx->r2 != 0) {
        // 0x1505ABC4: lwc1        $f6, 0x28($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
            goto L_1505ABD8;
    }
    goto skip_8;
    // 0x1505ABC4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    skip_8:
    // 0x1505ABC8: lw          $t5, 0x31C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ABCC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1505ABD0: sb          $t4, 0x55($t5)
    MEM_B(0X55, ctx->r13) = ctx->r12;
    // 0x1505ABD4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
L_1505ABD8:
    // 0x1505ABD8: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x1505ABDC: nop

    // 0x1505ABE0: bc1fl       L_1505AC00
    if (!c1cs) {
        // 0x1505ABE4: lw          $t4, 0x184($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X184);
            goto L_1505AC00;
    }
    goto skip_9;
    // 0x1505ABE4: lw          $t4, 0x184($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X184);
    skip_9:
    // 0x1505ABE8: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ABEC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1505ABF0: sb          $t6, 0x51($t7)
    MEM_B(0X51, ctx->r15) = ctx->r14;
    // 0x1505ABF4: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ABF8: sb          $zero, 0x31($t8)
    MEM_B(0X31, ctx->r24) = 0;
    // 0x1505ABFC: lw          $t4, 0x184($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X184);
L_1505AC00:
    // 0x1505AC00: lbu         $t9, 0x100($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X100);
    // 0x1505AC04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505AC08: srl         $t5, $t4, 12
    ctx->r13 = S32(U32(ctx->r12) >> 12);
    // 0x1505AC0C: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x1505AC10: andi        $t3, $t9, 0xFD
    ctx->r11 = ctx->r25 & 0XFD;
    // 0x1505AC14: bne         $t6, $at, L_1505AC64
    if (ctx->r14 != ctx->r1) {
        // 0x1505AC18: sb          $t3, 0x100($s0)
        MEM_B(0X100, ctx->r16) = ctx->r11;
            goto L_1505AC64;
    }
    // 0x1505AC18: sb          $t3, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r11;
    // 0x1505AC1C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1505AC20: addiu       $v1, $v1, -0x1610
    ctx->r3 = ADD32(ctx->r3, -0X1610);
    // 0x1505AC24: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1505AC28: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1505AC2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505AC30: bne         $t7, $at, L_1505AC54
    if (ctx->r15 != ctx->r1) {
        // 0x1505AC34: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_1505AC54;
    }
    // 0x1505AC34: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1505AC38: jal         0x1513783C
    // 0x1505AC3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1513783C(rdram, ctx);
        goto after_0;
    // 0x1505AC3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1505AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505AC44: jal         0x1507CD64
    // 0x1505AC48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_1507CD64(rdram, ctx);
        goto after_1;
    // 0x1505AC48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x1505AC4C: b           L_1505B5E8
    // 0x1505AC50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505B5E8;
    // 0x1505AC50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505AC54:
    // 0x1505AC54: jal         0x15055C88
    // 0x1505AC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15055C88(rdram, ctx);
        goto after_2;
    // 0x1505AC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1505AC5C: b           L_1505B5E8
    // 0x1505AC60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505B5E8;
    // 0x1505AC60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505AC64:
    // 0x1505AC64: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1505AC68: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x1505AC6C: bne         $t8, $at, L_1505AC80
    if (ctx->r24 != ctx->r1) {
        // 0x1505AC70: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_1505AC80;
    }
    // 0x1505AC70: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1505AC74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1505AC78: b           L_1505ACA0
    // 0x1505AC7C: lwc1        $f18, 0x1CC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1CC);
        goto L_1505ACA0;
    // 0x1505AC7C: lwc1        $f18, 0x1CC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1CC);
L_1505AC80:
    // 0x1505AC80: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1505AC84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505AC88: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1505AC8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505AC90: nop

    // 0x1505AC94: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1505AC98: nop

    // 0x1505AC9C: lwc1        $f18, 0x1CC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1CC);
L_1505ACA0:
    // 0x1505ACA0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505ACA4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1505ACA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505ACAC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1505ACB0: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x1505ACB4: nop

    // 0x1505ACB8: bc1fl       L_1505AFD0
    if (!c1cs) {
        // 0x1505ACBC: lbu         $t7, 0xAD($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XAD);
            goto L_1505AFD0;
    }
    goto skip_10;
    // 0x1505ACBC: lbu         $t7, 0xAD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XAD);
    skip_10:
    // 0x1505ACC0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ACC4: lbu         $t9, 0x120($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X120);
    // 0x1505ACC8: bnel        $t9, $zero, L_1505AFD0
    if (ctx->r25 != 0) {
        // 0x1505ACCC: lbu         $t7, 0xAD($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XAD);
            goto L_1505AFD0;
    }
    goto skip_11;
    // 0x1505ACCC: lbu         $t7, 0xAD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XAD);
    skip_11:
    // 0x1505ACD0: lbu         $t3, 0x78($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X78);
    // 0x1505ACD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505ACD8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1505ACDC: beq         $t3, $at, L_1505AFCC
    if (ctx->r11 == ctx->r1) {
        // 0x1505ACE0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1505AFCC;
    }
    // 0x1505ACE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505ACE4: lwc1        $f12, -0x6B08($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6B08);
    // 0x1505ACE8: sb          $zero, 0x95($v0)
    MEM_B(0X95, ctx->r2) = 0;
    // 0x1505ACEC: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ACF0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x1505ACF4: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x1505ACF8: sb          $a0, 0x51($t4)
    MEM_B(0X51, ctx->r12) = ctx->r4;
    // 0x1505ACFC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1505AD00: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1505AD04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1505AD08: beq         $t5, $at, L_1505AECC
    if (ctx->r13 == ctx->r1) {
        // 0x1505AD0C: addiu       $t0, $zero, 0x30
        ctx->r8 = ADD32(0, 0X30);
            goto L_1505AECC;
    }
    // 0x1505AD0C: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x1505AD10: lw          $v1, 0x184($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X184);
    // 0x1505AD14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505AD18: srl         $t6, $v1, 12
    ctx->r14 = S32(U32(ctx->r3) >> 12);
    // 0x1505AD1C: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x1505AD20: beq         $a0, $t7, L_1505AD38
    if (ctx->r4 == ctx->r15) {
        // 0x1505AD24: xori        $t8, $v1, 0x13
        ctx->r24 = ctx->r3 ^ 0X13;
            goto L_1505AD38;
    }
    // 0x1505AD24: xori        $t8, $v1, 0x13
    ctx->r24 = ctx->r3 ^ 0X13;
    // 0x1505AD28: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x1505AD2C: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x1505AD30: beql        $t9, $zero, L_1505AD70
    if (ctx->r25 == 0) {
        // 0x1505AD34: lbu         $v0, 0x1CA($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X1CA);
            goto L_1505AD70;
    }
    goto skip_12;
    // 0x1505AD34: lbu         $v0, 0x1CA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1CA);
    skip_12:
L_1505AD38:
    // 0x1505AD38: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x1505AD3C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x1505AD40: addiu       $a0, $zero, 0x1B8
    ctx->r4 = ADD32(0, 0X1B8);
    // 0x1505AD44: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x1505AD48: jal         0x15060B70
    // 0x1505AD4C: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    func_15060B70(rdram, ctx);
        goto after_3;
    // 0x1505AD4C: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    after_3:
    // 0x1505AD50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505AD54: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1505AD58: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505AD5C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x1505AD60: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1505AD64: b           L_1505AECC
    // 0x1505AD68: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
        goto L_1505AECC;
    // 0x1505AD68: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1505AD6C: lbu         $v0, 0x1CA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1CA);
L_1505AD70:
    // 0x1505AD70: beq         $v0, $zero, L_1505ADA8
    if (ctx->r2 == 0) {
        // 0x1505AD74: nop
    
            goto L_1505ADA8;
    }
    // 0x1505AD74: nop

    // 0x1505AD78: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x1505AD7C: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x1505AD80: lbu         $t4, 0x78($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X78);
    // 0x1505AD84: bnel        $t4, $at, L_1505AD94
    if (ctx->r12 != ctx->r1) {
        // 0x1505AD88: lbu         $t5, 0x4($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X4);
            goto L_1505AD94;
    }
    goto skip_13;
    // 0x1505AD88: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    skip_13:
    // 0x1505AD8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1505AD90: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
L_1505AD94:
    // 0x1505AD94: addiu       $at, $zero, 0x75
    ctx->r1 = ADD32(0, 0X75);
    // 0x1505AD98: ori         $t6, $t1, 0x2
    ctx->r14 = ctx->r9 | 0X2;
    // 0x1505AD9C: bne         $t5, $at, L_1505ADA8
    if (ctx->r13 != ctx->r1) {
        // 0x1505ADA0: nop
    
            goto L_1505ADA8;
    }
    // 0x1505ADA0: nop

    // 0x1505ADA4: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_1505ADA8:
    // 0x1505ADA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505ADAC: lwc1        $f8, -0x6B04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B04);
    // 0x1505ADB0: lwc1        $f0, 0x1CC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1CC);
    // 0x1505ADB4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1505ADB8: nop

    // 0x1505ADBC: bc1f        L_1505AE40
    if (!c1cs) {
        // 0x1505ADC0: nop
    
            goto L_1505AE40;
    }
    // 0x1505ADC0: nop

    // 0x1505ADC4: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505ADC8: andi        $t7, $t1, 0x2
    ctx->r15 = ctx->r9 & 0X2;
    // 0x1505ADCC: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x1505ADD0: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x1505ADD4: nop

    // 0x1505ADD8: bc1f        L_1505AE40
    if (!c1cs) {
        // 0x1505ADDC: nop
    
            goto L_1505AE40;
    }
    // 0x1505ADDC: nop

    // 0x1505ADE0: bne         $t7, $zero, L_1505AE30
    if (ctx->r15 != 0) {
        // 0x1505ADE4: andi        $t8, $v1, 0x1F
        ctx->r24 = ctx->r3 & 0X1F;
            goto L_1505AE30;
    }
    // 0x1505ADE4: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x1505ADE8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1505ADEC: beq         $t8, $at, L_1505AE40
    if (ctx->r24 == ctx->r1) {
        // 0x1505ADF0: sb          $zero, 0x1CA($s0)
        MEM_B(0X1CA, ctx->r16) = 0;
            goto L_1505AE40;
    }
    // 0x1505ADF0: sb          $zero, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = 0;
    // 0x1505ADF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505ADF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1505ADFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1505AE00: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1505AE04: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x1505AE08: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x1505AE0C: jal         0x1513783C
    // 0x1505AE10: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    func_1513783C(rdram, ctx);
        goto after_4;
    // 0x1505AE10: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x1505AE14: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505AE18: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x1505AE1C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x1505AE20: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1505AE24: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1505AE28: b           L_1505AE40
    // 0x1505AE2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_1505AE40;
    // 0x1505AE2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_1505AE30:
    // 0x1505AE30: beq         $v0, $zero, L_1505AE40
    if (ctx->r2 == 0) {
        // 0x1505AE34: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_1505AE40;
    }
    // 0x1505AE34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1505AE38: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x1505AE3C: sb          $t9, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = ctx->r25;
L_1505AE40:
    // 0x1505AE40: bne         $t1, $zero, L_1505AE60
    if (ctx->r9 != 0) {
        // 0x1505AE44: andi        $t5, $t1, 0x1
        ctx->r13 = ctx->r9 & 0X1;
            goto L_1505AE60;
    }
    // 0x1505AE44: andi        $t5, $t1, 0x1
    ctx->r13 = ctx->r9 & 0X1;
    // 0x1505AE48: lbu         $v0, 0x1CA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1505AE4C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x1505AE50: sb          $t3, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r11;
    // 0x1505AE54: beq         $v0, $zero, L_1505AE60
    if (ctx->r2 == 0) {
        // 0x1505AE58: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_1505AE60;
    }
    // 0x1505AE58: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x1505AE5C: sb          $t4, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = ctx->r12;
L_1505AE60:
    // 0x1505AE60: beq         $t5, $zero, L_1505AE78
    if (ctx->r13 == 0) {
        // 0x1505AE64: andi        $t6, $t1, 0x2
        ctx->r14 = ctx->r9 & 0X2;
            goto L_1505AE78;
    }
    // 0x1505AE64: andi        $t6, $t1, 0x2
    ctx->r14 = ctx->r9 & 0X2;
    // 0x1505AE68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505AE6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1505AE70: b           L_1505AEA8
    // 0x1505AE74: addiu       $t0, $zero, 0x19D
    ctx->r8 = ADD32(0, 0X19D);
        goto L_1505AEA8;
    // 0x1505AE74: addiu       $t0, $zero, 0x19D
    ctx->r8 = ADD32(0, 0X19D);
L_1505AE78:
    // 0x1505AE78: beql        $t6, $zero, L_1505AE9C
    if (ctx->r14 == 0) {
        // 0x1505AE7C: lbu         $t7, 0x1CA($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
            goto L_1505AE9C;
    }
    goto skip_14;
    // 0x1505AE7C: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
    skip_14:
    // 0x1505AE80: beq         $a3, $zero, L_1505AE90
    if (ctx->r7 == 0) {
        // 0x1505AE84: nop
    
            goto L_1505AE90;
    }
    // 0x1505AE84: nop

    // 0x1505AE88: b           L_1505AEA8
    // 0x1505AE8C: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
        goto L_1505AEA8;
    // 0x1505AE8C: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
L_1505AE90:
    // 0x1505AE90: b           L_1505AEA8
    // 0x1505AE94: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
        goto L_1505AEA8;
    // 0x1505AE94: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x1505AE98: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
L_1505AE9C:
    // 0x1505AE9C: beql        $t7, $zero, L_1505AEAC
    if (ctx->r15 == 0) {
        // 0x1505AEA0: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_1505AEAC;
    }
    goto skip_15;
    // 0x1505AEA0: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    skip_15:
    // 0x1505AEA4: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
L_1505AEA8:
    // 0x1505AEA8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
L_1505AEAC:
    // 0x1505AEAC: bne         $t0, $at, L_1505AECC
    if (ctx->r8 != ctx->r1) {
        // 0x1505AEB0: nop
    
            goto L_1505AECC;
    }
    // 0x1505AEB0: nop

    // 0x1505AEB4: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x1505AEB8: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x1505AEBC: lbu         $t9, 0x78($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X78);
    // 0x1505AEC0: bne         $t9, $at, L_1505AECC
    if (ctx->r25 != ctx->r1) {
        // 0x1505AEC4: nop
    
            goto L_1505AECC;
    }
    // 0x1505AEC4: nop

    // 0x1505AEC8: addiu       $t0, $zero, 0x1AA
    ctx->r8 = ADD32(0, 0X1AA);
L_1505AECC:
    // 0x1505AECC: bne         $t2, $zero, L_1505AF0C
    if (ctx->r10 != 0) {
        // 0x1505AED0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1505AF0C;
    }
    // 0x1505AED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505AED4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1505AED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505AEDC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1505AEE0: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x1505AEE4: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x1505AEE8: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x1505AEEC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1505AEF0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x1505AEF4: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x1505AEF8: jal         0x1505E650
    // 0x1505AEFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1505E650(rdram, ctx);
        goto after_5;
    // 0x1505AEFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x1505AF00: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505AF04: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1505AF08: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
L_1505AF0C:
    // 0x1505AF0C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1505AF10: addiu       $t4, $zero, 0xFE
    ctx->r12 = ADD32(0, 0XFE);
    // 0x1505AF14: sb          $zero, 0x104($s0)
    MEM_B(0X104, ctx->r16) = 0;
    // 0x1505AF18: sb          $t3, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r11;
    // 0x1505AF1C: beq         $t1, $zero, L_1505AF30
    if (ctx->r9 == 0) {
        // 0x1505AF20: sb          $t4, 0x89($s0)
        MEM_B(0X89, ctx->r16) = ctx->r12;
            goto L_1505AF30;
    }
    // 0x1505AF20: sb          $t4, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r12;
    // 0x1505AF24: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x1505AF28: b           L_1505AF38
    // 0x1505AF2C: sb          $t5, 0x228($s0)
    MEM_B(0X228, ctx->r16) = ctx->r13;
        goto L_1505AF38;
    // 0x1505AF2C: sb          $t5, 0x228($s0)
    MEM_B(0X228, ctx->r16) = ctx->r13;
L_1505AF30:
    // 0x1505AF30: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x1505AF34: sb          $t6, 0x228($s0)
    MEM_B(0X228, ctx->r16) = ctx->r14;
L_1505AF38:
    // 0x1505AF38: lbu         $t8, 0x100($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X100);
    // 0x1505AF3C: lhu         $t7, 0x7A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X7A);
    // 0x1505AF40: swc1        $f14, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f14.u32l;
    // 0x1505AF44: andi        $t9, $t8, 0x8B
    ctx->r25 = ctx->r24 & 0X8B;
    // 0x1505AF48: sb          $t9, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r25;
    // 0x1505AF4C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1505AF50: sh          $t7, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r15;
    // 0x1505AF54: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AF58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505AF5C: sb          $zero, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = 0;
    // 0x1505AF60: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x1505AF64: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x1505AF68: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AF6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505AF70: bne         $t2, $zero, L_1505AFBC
    if (ctx->r10 != 0) {
        // 0x1505AF74: swc1        $f8, 0x1CC($s0)
        MEM_W(0X1CC, ctx->r16) = ctx->f8.u32l;
            goto L_1505AFBC;
    }
    // 0x1505AF74: swc1        $f8, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f8.u32l;
    // 0x1505AF78: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1505AF7C: addiu       $t3, $zero, 0x199
    ctx->r11 = ADD32(0, 0X199);
    // 0x1505AF80: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1505AF84: addiu       $t5, $zero, 0xAA
    ctx->r13 = ADD32(0, 0XAA);
    // 0x1505AF88: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1505AF8C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1505AF90: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1505AF94: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1505AF98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1505AF9C: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1505AFA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1505AFA4: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x1505AFA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1505AFAC: jal         0x15174690
    // 0x1505AFB0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15174690(rdram, ctx);
        goto after_6;
    // 0x1505AFB0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
    // 0x1505AFB4: b           L_1505B5E8
    // 0x1505AFB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505B5E8;
    // 0x1505AFB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505AFBC:
    // 0x1505AFBC: jal         0x1507CD64
    // 0x1505AFC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_1507CD64(rdram, ctx);
        goto after_7;
    // 0x1505AFC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x1505AFC4: b           L_1505B5E8
    // 0x1505AFC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505B5E8;
    // 0x1505AFC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505AFCC:
    // 0x1505AFCC: lbu         $t7, 0xAD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XAD);
L_1505AFD0:
    // 0x1505AFD0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AFD4: beq         $t7, $zero, L_1505AFEC
    if (ctx->r15 == 0) {
        // 0x1505AFD8: swc1        $f10, 0x1CC($s0)
        MEM_W(0X1CC, ctx->r16) = ctx->f10.u32l;
            goto L_1505AFEC;
    }
    // 0x1505AFD8: swc1        $f10, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f10.u32l;
    // 0x1505AFDC: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505AFE0: swc1        $f14, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f14.u32l;
    // 0x1505AFE4: b           L_1505B5E4
    // 0x1505AFE8: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
        goto L_1505B5E4;
    // 0x1505AFE8: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
L_1505AFEC:
    // 0x1505AFEC: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
    // 0x1505AFF0: bnel        $v0, $zero, L_1505B470
    if (ctx->r2 != 0) {
        // 0x1505AFF4: lbu         $t5, 0x100($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X100);
            goto L_1505B470;
    }
    goto skip_16;
    // 0x1505AFF4: lbu         $t5, 0x100($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X100);
    skip_16:
    // 0x1505AFF8: lbu         $v0, 0x7F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7F);
    // 0x1505AFFC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x1505B000: bnel        $v0, $zero, L_1505B034
    if (ctx->r2 != 0) {
        // 0x1505B004: lhu         $t9, 0x76($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X76);
            goto L_1505B034;
    }
    goto skip_17;
    // 0x1505B004: lhu         $t9, 0x76($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X76);
    skip_17:
    // 0x1505B008: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505B00C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505B010: nop

    // 0x1505B014: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x1505B018: nop

    // 0x1505B01C: bc1fl       L_1505B034
    if (!c1cs) {
        // 0x1505B020: lhu         $t9, 0x76($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X76);
            goto L_1505B034;
    }
    goto skip_18;
    // 0x1505B020: lhu         $t9, 0x76($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X76);
    skip_18:
    // 0x1505B024: lhu         $t8, 0x7A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X7A);
    // 0x1505B028: lbu         $v0, 0x7F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7F);
    // 0x1505B02C: sh          $t8, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r24;
    // 0x1505B030: lhu         $t9, 0x76($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X76);
L_1505B034:
    // 0x1505B034: lhu         $t3, 0x7A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X7A);
    // 0x1505B038: subu        $v1, $t9, $t3
    ctx->r3 = SUB32(ctx->r25, ctx->r11);
    // 0x1505B03C: sra         $t4, $v1, 8
    ctx->r12 = S32(SIGNED(ctx->r3) >> 8);
    // 0x1505B040: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x1505B044: slti        $at, $t5, 0x81
    ctx->r1 = SIGNED(ctx->r13) < 0X81 ? 1 : 0;
    // 0x1505B048: bne         $at, $zero, L_1505B05C
    if (ctx->r1 != 0) {
        // 0x1505B04C: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_1505B05C;
    }
    // 0x1505B04C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x1505B050: negu        $v1, $t5
    ctx->r3 = SUB32(0, ctx->r13);
    // 0x1505B054: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x1505B058: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_1505B05C:
    // 0x1505B05C: bne         $v0, $zero, L_1505B070
    if (ctx->r2 != 0) {
        // 0x1505B060: slti        $at, $v1, 0x50
        ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_1505B070;
    }
    // 0x1505B060: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x1505B064: beq         $at, $zero, L_1505B070
    if (ctx->r1 == 0) {
        // 0x1505B068: addiu       $t7, $zero, 0xA
        ctx->r15 = ADD32(0, 0XA);
            goto L_1505B070;
    }
    // 0x1505B068: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x1505B06C: sb          $t7, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = ctx->r15;
L_1505B070:
    // 0x1505B070: lbu         $t8, 0xA9($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XA9);
    // 0x1505B074: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1505B078: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1505B07C: bne         $t8, $at, L_1505B15C
    if (ctx->r24 != ctx->r1) {
        // 0x1505B080: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_1505B15C;
    }
    // 0x1505B080: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1505B084: lbu         $v1, 0x274($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X274);
    // 0x1505B088: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505B08C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505B090: beq         $v1, $zero, L_1505B0E4
    if (ctx->r3 == 0) {
        // 0x1505B094: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1505B0E4;
    }
    // 0x1505B094: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1505B098: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1505B09C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x1505B0A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1505B0A4: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x1505B0A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1505B0AC: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x1505B0B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1505B0B4: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x1505B0B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1505B0BC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1505B0C0: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1505B0C4: addiu       $t3, $t9, -0x32C
    ctx->r11 = ADD32(ctx->r25, -0X32C);
    // 0x1505B0C8: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x1505B0CC: lbu         $a0, 0x24C($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X24C);
    // 0x1505B0D0: beql        $a0, $zero, L_1505B0E8
    if (ctx->r4 == 0) {
        // 0x1505B0D4: swc1        $f14, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
            goto L_1505B0E8;
    }
    goto skip_19;
    // 0x1505B0D4: swc1        $f14, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
    skip_19:
    // 0x1505B0D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1505B0DC: sw          $zero, 0x218($v0)
    MEM_W(0X218, ctx->r2) = 0;
    // 0x1505B0E0: sb          $a0, 0x232($v0)
    MEM_B(0X232, ctx->r2) = ctx->r4;
L_1505B0E4:
    // 0x1505B0E4: swc1        $f14, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
L_1505B0E8:
    // 0x1505B0E8: sb          $t5, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r13;
    // 0x1505B0EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1505B0F0: sb          $t6, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r14;
    // 0x1505B0F4: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    // 0x1505B0F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1505B0FC: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x1505B100: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x1505B104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505B108: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x1505B10C: jal         0x1505E650
    // 0x1505B110: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_1505E650(rdram, ctx);
        goto after_8;
    // 0x1505B110: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_8:
    // 0x1505B114: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1505B118: lbu         $t7, 0x3E78($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3E78);
    // 0x1505B11C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B120: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    // 0x1505B124: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x1505B128: beq         $at, $zero, L_1505B13C
    if (ctx->r1 == 0) {
        // 0x1505B12C: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_1505B13C;
    }
    // 0x1505B12C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x1505B130: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1505B134: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1505B138: sb          $t8, 0x57($t9)
    MEM_B(0X57, ctx->r25) = ctx->r24;
L_1505B13C:
    // 0x1505B13C: bne         $t0, $zero, L_1505B154
    if (ctx->r8 != 0) {
        // 0x1505B140: nop
    
            goto L_1505B154;
    }
    // 0x1505B140: nop

    // 0x1505B144: jal         0x15060A9C
    // 0x1505B148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15060A9C(rdram, ctx);
        goto after_9;
    // 0x1505B148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x1505B14C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B150: nop

L_1505B154:
    // 0x1505B154: b           L_1505B3B8
    // 0x1505B158: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
        goto L_1505B3B8;
    // 0x1505B158: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
L_1505B15C:
    // 0x1505B15C: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1505B160: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1505B164: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1505B168: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x1505B16C: nop

    // 0x1505B170: blezl       $t4, L_1505B278
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1505B174: lhu         $v0, 0x84($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X84);
            goto L_1505B278;
    }
    goto skip_20;
    // 0x1505B174: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    skip_20:
    // 0x1505B178: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1505B17C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505B180: lbu         $v1, 0x11A($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X11A);
    // 0x1505B184: beq         $v1, $at, L_1505B274
    if (ctx->r3 == ctx->r1) {
        // 0x1505B188: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1505B274;
    }
    // 0x1505B188: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1505B18C: beql        $v1, $at, L_1505B278
    if (ctx->r3 == ctx->r1) {
        // 0x1505B190: lhu         $v0, 0x84($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X84);
            goto L_1505B278;
    }
    goto skip_21;
    // 0x1505B190: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    skip_21:
    // 0x1505B194: lbu         $t5, 0x4E($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4E);
    // 0x1505B198: bnel        $t5, $zero, L_1505B278
    if (ctx->r13 != 0) {
        // 0x1505B19C: lhu         $v0, 0x84($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X84);
            goto L_1505B278;
    }
    goto skip_22;
    // 0x1505B19C: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    skip_22:
    // 0x1505B1A0: lbu         $v0, 0x100($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X100);
    // 0x1505B1A4: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x1505B1A8: bne         $v1, $zero, L_1505B1E4
    if (ctx->r3 != 0) {
        // 0x1505B1AC: andi        $t6, $v0, 0x8
        ctx->r14 = ctx->r2 & 0X8;
            goto L_1505B1E4;
    }
    // 0x1505B1AC: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x1505B1B0: bnel        $t6, $zero, L_1505B278
    if (ctx->r14 != 0) {
        // 0x1505B1B4: lhu         $v0, 0x84($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X84);
            goto L_1505B278;
    }
    goto skip_23;
    // 0x1505B1B4: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    skip_23:
    // 0x1505B1B8: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1505B1BC: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x1505B1C0: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x1505B1C4: nop

    // 0x1505B1C8: bc1f        L_1505B1DC
    if (!c1cs) {
        // 0x1505B1CC: nop
    
            goto L_1505B1DC;
    }
    // 0x1505B1CC: nop

    // 0x1505B1D0: lbu         $t7, 0xA8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA8);
    // 0x1505B1D4: beq         $t7, $zero, L_1505B1E4
    if (ctx->r15 == 0) {
        // 0x1505B1D8: nop
    
            goto L_1505B1E4;
    }
    // 0x1505B1D8: nop

L_1505B1DC:
    // 0x1505B1DC: beql        $t8, $zero, L_1505B278
    if (ctx->r24 == 0) {
        // 0x1505B1E0: lhu         $v0, 0x84($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X84);
            goto L_1505B278;
    }
    goto skip_24;
    // 0x1505B1E0: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
    skip_24:
L_1505B1E4:
    // 0x1505B1E4: beq         $v1, $zero, L_1505B214
    if (ctx->r3 == 0) {
        // 0x1505B1E8: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_1505B214;
    }
    // 0x1505B1E8: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x1505B1EC: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x1505B1F0: andi        $t3, $v0, 0x40
    ctx->r11 = ctx->r2 & 0X40;
    // 0x1505B1F4: bne         $t3, $zero, L_1505B244
    if (ctx->r11 != 0) {
        // 0x1505B1F8: sb          $t9, 0x83($s0)
        MEM_B(0X83, ctx->r16) = ctx->r25;
            goto L_1505B244;
    }
    // 0x1505B1F8: sb          $t9, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r25;
    // 0x1505B1FC: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x1505B200: swc1        $f14, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
    // 0x1505B204: sb          $t4, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r12;
    // 0x1505B208: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1505B20C: b           L_1505B244
    // 0x1505B210: sb          $t5, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r13;
        goto L_1505B244;
    // 0x1505B210: sb          $t5, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r13;
L_1505B214:
    // 0x1505B214: beq         $t6, $zero, L_1505B23C
    if (ctx->r14 == 0) {
        // 0x1505B218: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_1505B23C;
    }
    // 0x1505B218: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x1505B21C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B220: lwc1        $f4, -0x6B00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B00);
    // 0x1505B224: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505B228: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1505B22C: sb          $t7, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r15;
    // 0x1505B230: mul.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1505B234: b           L_1505B244
    // 0x1505B238: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
        goto L_1505B244;
    // 0x1505B238: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
L_1505B23C:
    // 0x1505B23C: swc1        $f14, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f14.u32l;
    // 0x1505B240: sb          $t8, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r24;
L_1505B244:
    // 0x1505B244: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1505B248: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x1505B24C: lbu         $v0, 0x78($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X78);
    // 0x1505B250: bnel        $v0, $at, L_1505B264
    if (ctx->r2 != ctx->r1) {
        // 0x1505B254: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_1505B264;
    }
    goto skip_25;
    // 0x1505B254: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    skip_25:
    // 0x1505B258: b           L_1505B274
    // 0x1505B25C: addiu       $t0, $zero, 0x19D
    ctx->r8 = ADD32(0, 0X19D);
        goto L_1505B274;
    // 0x1505B25C: addiu       $t0, $zero, 0x19D
    ctx->r8 = ADD32(0, 0X19D);
    // 0x1505B260: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_1505B264:
    // 0x1505B264: bne         $v0, $at, L_1505B274
    if (ctx->r2 != ctx->r1) {
        // 0x1505B268: addiu       $t0, $zero, 0x36
        ctx->r8 = ADD32(0, 0X36);
            goto L_1505B274;
    }
    // 0x1505B268: addiu       $t0, $zero, 0x36
    ctx->r8 = ADD32(0, 0X36);
    // 0x1505B26C: b           L_1505B274
    // 0x1505B270: addiu       $t0, $zero, 0xD8
    ctx->r8 = ADD32(0, 0XD8);
        goto L_1505B274;
    // 0x1505B270: addiu       $t0, $zero, 0xD8
    ctx->r8 = ADD32(0, 0XD8);
L_1505B274:
    // 0x1505B274: lhu         $v0, 0x84($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X84);
L_1505B278:
    // 0x1505B278: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1505B27C: addiu       $t4, $zero, 0xFE
    ctx->r12 = ADD32(0, 0XFE);
    // 0x1505B280: beq         $v0, $at, L_1505B294
    if (ctx->r2 == ctx->r1) {
        // 0x1505B284: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_1505B294;
    }
    // 0x1505B284: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1505B288: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x1505B28C: bne         $v0, $at, L_1505B350
    if (ctx->r2 != ctx->r1) {
        // 0x1505B290: nop
    
            goto L_1505B350;
    }
    // 0x1505B290: nop

L_1505B294:
    // 0x1505B294: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x1505B298: sb          $t4, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r12;
    // 0x1505B29C: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x1505B2A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1505B2A4: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x1505B2A8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x1505B2AC: beq         $t3, $at, L_1505B2D4
    if (ctx->r11 == ctx->r1) {
        // 0x1505B2B0: sb          $t5, 0x83($s0)
        MEM_B(0X83, ctx->r16) = ctx->r13;
            goto L_1505B2D4;
    }
    // 0x1505B2B0: sb          $t5, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r13;
    // 0x1505B2B4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x1505B2B8: beq         $t3, $at, L_1505B2D4
    if (ctx->r11 == ctx->r1) {
        // 0x1505B2BC: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_1505B2D4;
    }
    // 0x1505B2BC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1505B2C0: beq         $t3, $at, L_1505B2D4
    if (ctx->r11 == ctx->r1) {
        // 0x1505B2C4: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_1505B2D4;
    }
    // 0x1505B2C4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1505B2C8: beq         $t3, $at, L_1505B2D4
    if (ctx->r11 == ctx->r1) {
        // 0x1505B2CC: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_1505B2D4;
    }
    // 0x1505B2CC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x1505B2D0: bne         $t3, $at, L_1505B2F4
    if (ctx->r11 != ctx->r1) {
        // 0x1505B2D4: addiu       $t0, $zero, 0xC8
        ctx->r8 = ADD32(0, 0XC8);
            goto L_1505B2F4;
    }
L_1505B2D4:
    // 0x1505B2D4: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x1505B2D8: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x1505B2DC: addiu       $a0, $zero, 0x1B8
    ctx->r4 = ADD32(0, 0X1B8);
    // 0x1505B2E0: jal         0x15060B70
    // 0x1505B2E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15060B70(rdram, ctx);
        goto after_10;
    // 0x1505B2E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x1505B2E8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B2EC: b           L_1505B350
    // 0x1505B2F0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
        goto L_1505B350;
    // 0x1505B2F0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_1505B2F4:
    // 0x1505B2F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505B2F8: beq         $v0, $at, L_1505B318
    if (ctx->r2 == ctx->r1) {
        // 0x1505B2FC: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_1505B318;
    }
    // 0x1505B2FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1505B300: beq         $v0, $a0, L_1505B318
    if (ctx->r2 == ctx->r4) {
        // 0x1505B304: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_1505B318;
    }
    // 0x1505B304: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1505B308: beq         $v0, $at, L_1505B318
    if (ctx->r2 == ctx->r1) {
        // 0x1505B30C: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_1505B318;
    }
    // 0x1505B30C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1505B310: bne         $v0, $at, L_1505B338
    if (ctx->r2 != ctx->r1) {
        // 0x1505B314: addiu       $t0, $zero, 0x27
        ctx->r8 = ADD32(0, 0X27);
            goto L_1505B338;
    }
    // 0x1505B314: addiu       $t0, $zero, 0x27
    ctx->r8 = ADD32(0, 0X27);
L_1505B318:
    // 0x1505B318: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x1505B31C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x1505B320: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    // 0x1505B324: jal         0x15060B70
    // 0x1505B328: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15060B70(rdram, ctx);
        goto after_11;
    // 0x1505B328: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x1505B32C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B330: b           L_1505B350
    // 0x1505B334: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
        goto L_1505B350;
    // 0x1505B334: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_1505B338:
    // 0x1505B338: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    // 0x1505B33C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505B340: jal         0x15060B70
    // 0x1505B344: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_15060B70(rdram, ctx);
        goto after_12;
    // 0x1505B344: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_12:
    // 0x1505B348: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B34C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_1505B350:
    // 0x1505B350: beq         $t0, $zero, L_1505B390
    if (ctx->r8 == 0) {
        // 0x1505B354: lbu         $v0, 0x100($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X100);
            goto L_1505B390;
    }
    // 0x1505B354: lbu         $v0, 0x100($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X100);
    // 0x1505B358: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x1505B35C: bne         $t6, $zero, L_1505B390
    if (ctx->r14 != 0) {
        // 0x1505B360: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1505B390;
    }
    // 0x1505B360: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505B364: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505B368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505B36C: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x1505B370: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1505B374: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x1505B378: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x1505B37C: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x1505B380: jal         0x1505E650
    // 0x1505B384: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_13;
    // 0x1505B384: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_13:
    // 0x1505B388: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1505B38C: lbu         $v0, 0x100($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X100);
L_1505B390:
    // 0x1505B390: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x1505B394: bne         $t7, $zero, L_1505B3A0
    if (ctx->r15 != 0) {
        // 0x1505B398: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1505B3A0;
    }
    // 0x1505B398: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1505B39C: sb          $t8, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r24;
L_1505B3A0:
    // 0x1505B3A0: lbu         $t9, 0x6E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6E);
    // 0x1505B3A4: addiu       $t3, $zero, 0x90
    ctx->r11 = ADD32(0, 0X90);
    // 0x1505B3A8: bnel        $t9, $zero, L_1505B3B8
    if (ctx->r25 != 0) {
        // 0x1505B3AC: lwc1        $f0, 0x28($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
            goto L_1505B3B8;
    }
    goto skip_26;
    // 0x1505B3AC: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    skip_26:
    // 0x1505B3B0: sb          $t3, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r11;
    // 0x1505B3B4: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
L_1505B3B8:
    // 0x1505B3B8: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x1505B3BC: nop

    // 0x1505B3C0: bc1fl       L_1505B468
    if (!c1cs) {
        // 0x1505B3C4: sb          $zero, 0xA9($s0)
        MEM_B(0XA9, ctx->r16) = 0;
            goto L_1505B468;
    }
    goto skip_27;
    // 0x1505B3C4: sb          $zero, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = 0;
    skip_27:
    // 0x1505B3C8: lbu         $t4, 0x100($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X100);
    // 0x1505B3CC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1505B3D0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x1505B3D4: bnel        $t5, $zero, L_1505B468
    if (ctx->r13 != 0) {
        // 0x1505B3D8: sb          $zero, 0xA9($s0)
        MEM_B(0XA9, ctx->r16) = 0;
            goto L_1505B468;
    }
    goto skip_28;
    // 0x1505B3D8: sb          $zero, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = 0;
    skip_28:
    // 0x1505B3DC: lbu         $t6, -0x3D84($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3D84);
    // 0x1505B3E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1505B3E4: beql        $t6, $zero, L_1505B418
    if (ctx->r14 == 0) {
        // 0x1505B3E8: lbu         $t7, 0x110($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X110);
            goto L_1505B418;
    }
    goto skip_29;
    // 0x1505B3E8: lbu         $t7, 0x110($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X110);
    skip_29:
    // 0x1505B3EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505B3F0: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505B3F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1505B3F8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1505B3FC: nop

    // 0x1505B400: bc1fl       L_1505B42C
    if (!c1cs) {
        // 0x1505B404: lbu         $t8, 0x63($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X63);
            goto L_1505B42C;
    }
    goto skip_30;
    // 0x1505B404: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    skip_30:
    // 0x1505B408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505B40C: b           L_1505B428
    // 0x1505B410: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
        goto L_1505B428;
    // 0x1505B410: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x1505B414: lbu         $t7, 0x110($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X110);
L_1505B418:
    // 0x1505B418: bnel        $t7, $zero, L_1505B42C
    if (ctx->r15 != 0) {
        // 0x1505B41C: lbu         $t8, 0x63($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X63);
            goto L_1505B42C;
    }
    goto skip_31;
    // 0x1505B41C: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    skip_31:
    // 0x1505B420: swc1        $f14, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f14.u32l;
    // 0x1505B424: swc1        $f14, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f14.u32l;
L_1505B428:
    // 0x1505B428: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
L_1505B42C:
    // 0x1505B42C: lw          $t9, 0x31C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X31C);
    // 0x1505B430: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505B434: sb          $t8, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r24;
    // 0x1505B438: lbu         $t3, 0x4E($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X4E);
    // 0x1505B43C: bne         $t3, $at, L_1505B464
    if (ctx->r11 != ctx->r1) {
        // 0x1505B440: lui         $at, 0xC120
        ctx->r1 = S32(0XC120 << 16);
            goto L_1505B464;
    }
    // 0x1505B440: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x1505B444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505B448: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B44C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1505B450: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x1505B454: nop

    // 0x1505B458: bc1fl       L_1505B468
    if (!c1cs) {
        // 0x1505B45C: sb          $zero, 0xA9($s0)
        MEM_B(0XA9, ctx->r16) = 0;
            goto L_1505B468;
    }
    goto skip_32;
    // 0x1505B45C: sb          $zero, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = 0;
    skip_32:
    // 0x1505B460: sb          $t4, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r12;
L_1505B464:
    // 0x1505B464: sb          $zero, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = 0;
L_1505B468:
    // 0x1505B468: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
    // 0x1505B46C: lbu         $t5, 0x100($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X100);
L_1505B470:
    // 0x1505B470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B474: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505B478: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x1505B47C: bne         $t6, $zero, L_1505B48C
    if (ctx->r14 != 0) {
        // 0x1505B480: nop
    
            goto L_1505B48C;
    }
    // 0x1505B480: nop

    // 0x1505B484: b           L_1505B490
    // 0x1505B488: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_1505B490;
    // 0x1505B488: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_1505B48C:
    // 0x1505B48C: lwc1        $f2, -0x6AFC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6AFC);
L_1505B490:
    // 0x1505B490: bne         $v0, $zero, L_1505B4B8
    if (ctx->r2 != 0) {
        // 0x1505B494: swc1        $f16, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
            goto L_1505B4B8;
    }
    // 0x1505B494: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x1505B498: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x1505B49C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1505B4A0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x1505B4A4: bnel        $t8, $zero, L_1505B4BC
    if (ctx->r24 != 0) {
        // 0x1505B4A8: lw          $t9, 0xF4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XF4);
            goto L_1505B4BC;
    }
    goto skip_33;
    // 0x1505B4A8: lw          $t9, 0xF4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF4);
    skip_33:
    // 0x1505B4AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505B4B0: b           L_1505B550
    // 0x1505B4B4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
        goto L_1505B550;
    // 0x1505B4B4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
L_1505B4B8:
    // 0x1505B4B8: lw          $t9, 0xF4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF4);
L_1505B4BC:
    // 0x1505B4BC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x1505B4C0: andi        $t3, $t9, 0x80
    ctx->r11 = ctx->r25 & 0X80;
    // 0x1505B4C4: beql        $t3, $zero, L_1505B4E0
    if (ctx->r11 == 0) {
        // 0x1505B4C8: lwc1        $f0, 0x20($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
            goto L_1505B4E0;
    }
    goto skip_34;
    // 0x1505B4C8: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    skip_34:
    // 0x1505B4CC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x1505B4D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505B4D4: b           L_1505B530
    // 0x1505B4D8: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_1505B530;
    // 0x1505B4D8: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x1505B4DC: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_1505B4E0:
    // 0x1505B4E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505B4E4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x1505B4E8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1505B4EC: nop

    // 0x1505B4F0: bc1fl       L_1505B504
    if (!c1cs) {
        // 0x1505B4F4: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_1505B504;
    }
    goto skip_35;
    // 0x1505B4F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_35:
    // 0x1505B4F8: b           L_1505B530
    // 0x1505B4FC: swc1        $f14, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f14.u32l;
        goto L_1505B530;
    // 0x1505B4FC: swc1        $f14, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f14.u32l;
    // 0x1505B500: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_1505B504:
    // 0x1505B504: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x1505B508: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505B50C: nop

    // 0x1505B510: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1505B514: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x1505B518: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B51C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x1505B520: nop

    // 0x1505B524: bc1fl       L_1505B534
    if (!c1cs) {
        // 0x1505B528: lbu         $t4, 0x109($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X109);
            goto L_1505B534;
    }
    goto skip_36;
    // 0x1505B528: lbu         $t4, 0x109($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X109);
    skip_36:
    // 0x1505B52C: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
L_1505B530:
    // 0x1505B530: lbu         $t4, 0x109($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X109);
L_1505B534:
    // 0x1505B534: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B538: beql        $t4, $zero, L_1505B554
    if (ctx->r12 == 0) {
        // 0x1505B53C: lbu         $v0, 0x7F($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X7F);
            goto L_1505B554;
    }
    goto skip_37;
    // 0x1505B53C: lbu         $v0, 0x7F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7F);
    skip_37:
    // 0x1505B540: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505B544: lwc1        $f8, -0x6AF8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6AF8);
    // 0x1505B548: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1505B54C: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
L_1505B550:
    // 0x1505B550: lbu         $v0, 0x7F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7F);
L_1505B554:
    // 0x1505B554: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x1505B558: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    // 0x1505B55C: beq         $at, $zero, L_1505B568
    if (ctx->r1 == 0) {
        // 0x1505B560: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_1505B568;
    }
    // 0x1505B560: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x1505B564: sb          $t5, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = ctx->r13;
L_1505B568:
    // 0x1505B568: lbu         $t6, 0x100($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X100);
    // 0x1505B56C: andi        $t7, $t6, 0x9F
    ctx->r15 = ctx->r14 & 0X9F;
    // 0x1505B570: sb          $t7, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r15;
    // 0x1505B574: b           L_1505B5B0
    // 0x1505B578: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
        goto L_1505B5B0;
    // 0x1505B578: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1505B57C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1505B580:
    // 0x1505B580: nop

    // 0x1505B584: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1505B588: nop

    // 0x1505B58C: bc1fl       L_1505B5B0
    if (!c1cs) {
        // 0x1505B590: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_1505B5B0;
    }
    goto skip_38;
    // 0x1505B590: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_38:
    // 0x1505B594: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1505B598: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x1505B59C: nop

    // 0x1505B5A0: bc1fl       L_1505B5B0
    if (!c1cs) {
        // 0x1505B5A4: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_1505B5B0;
    }
    goto skip_39;
    // 0x1505B5A4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_39:
    // 0x1505B5A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1505B5AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_1505B5B0:
    // 0x1505B5B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505B5B4: nop

    // 0x1505B5B8: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x1505B5BC: nop

    // 0x1505B5C0: bc1fl       L_1505B5D0
    if (!c1cs) {
        // 0x1505B5C4: lbu         $t8, 0xAD($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XAD);
            goto L_1505B5D0;
    }
    goto skip_40;
    // 0x1505B5C4: lbu         $t8, 0xAD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XAD);
    skip_40:
    // 0x1505B5C8: sb          $zero, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = 0;
    // 0x1505B5CC: lbu         $t8, 0xAD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XAD);
L_1505B5D0:
    // 0x1505B5D0: beql        $t8, $zero, L_1505B5E4
    if (ctx->r24 == 0) {
        // 0x1505B5D4: swc1        $f2, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
            goto L_1505B5E4;
    }
    goto skip_41;
    // 0x1505B5D4: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    skip_41:
    // 0x1505B5D8: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505B5DC: swc1        $f16, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f16.u32l;
    // 0x1505B5E0: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
L_1505B5E4:
    // 0x1505B5E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505B5E8:
    // 0x1505B5E8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1505B5EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1505B5F0: jr          $ra
    // 0x1505B5F4: nop

    return;
    return;
    // 0x1505B5F4: nop

;}
RECOMP_FUNC void func_150D4BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D4BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D4BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D4BDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D4BE0: jal         0x150D4C2C
    // 0x150D4BE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D4C2C(rdram, ctx);
        goto after_0;
    // 0x150D4BE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D4BE8: jal         0x151478F4
    // 0x150D4BEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x150D4BEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D4BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D4BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D4BF8: jr          $ra
    // 0x150D4BFC: nop

    return;
    return;
    // 0x150D4BFC: nop

;}
RECOMP_FUNC void func_1513418C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513418C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15134190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15134194: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15134198: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1513419C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151341A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151341A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x151341A8: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x151341AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151341B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151341B4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x151341B8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151341BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151341C0: addiu       $a2, $a2, 0x58
    ctx->r6 = ADD32(ctx->r6, 0X58);
    // 0x151341C4: jal         0x15167A68
    // 0x151341C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151341C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151341CC: bne         $v0, $zero, L_151341DC
    if (ctx->r2 != 0) {
        // 0x151341D0: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_151341DC;
    }
    // 0x151341D0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x151341D4: b           L_151342AC
    // 0x151341D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151342AC;
    // 0x151341D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151341DC:
    // 0x151341DC: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    // 0x151341E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151341E4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151341E8: jal         0x10022EC0
    // 0x151341EC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151341EC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x151341F0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x151341F4: lbu         $a0, 0x3A($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X3A);
    // 0x151341F8: andi        $t8, $a0, 0x2
    ctx->r24 = ctx->r4 & 0X2;
    // 0x151341FC: beq         $t8, $zero, L_15134284
    if (ctx->r24 == 0) {
        // 0x15134200: ori         $t7, $a0, 0x18
        ctx->r15 = ctx->r4 | 0X18;
            goto L_15134284;
    }
    // 0x15134200: ori         $t7, $a0, 0x18
    ctx->r15 = ctx->r4 | 0X18;
    // 0x15134204: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x15134208: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1513420C: beq         $t9, $zero, L_15134224
    if (ctx->r25 == 0) {
        // 0x15134210: nop
    
            goto L_15134224;
    }
    // 0x15134210: nop

    // 0x15134214: lbu         $t0, 0x18($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X18);
    // 0x15134218: lbu         $t1, 0x3B($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X3B);
    // 0x1513421C: beql        $t0, $t1, L_15134238
    if (ctx->r8 == ctx->r9) {
        // 0x15134220: lw          $v1, 0x1D4($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X1D4);
            goto L_15134238;
    }
    goto skip_0;
    // 0x15134220: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_15134224:
    // 0x15134224: jal         0x1516972C
    // 0x15134228: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15134228: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x1513422C: b           L_151342AC
    // 0x15134230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151342AC;
    // 0x15134230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15134234: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
L_15134238:
    // 0x15134238: ori         $t6, $a0, 0x8
    ctx->r14 = ctx->r4 | 0X8;
    // 0x1513423C: beq         $v1, $zero, L_1513427C
    if (ctx->r3 == 0) {
        // 0x15134240: nop
    
            goto L_1513427C;
    }
    // 0x15134240: nop

    // 0x15134244: lbu         $t2, 0x74($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X74);
    // 0x15134248: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1513424C: addiu       $a1, $a3, 0x40
    ctx->r5 = ADD32(ctx->r7, 0X40);
    // 0x15134250: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x15134254: beq         $t3, $at, L_1513427C
    if (ctx->r11 == ctx->r1) {
        // 0x15134258: nop
    
            goto L_1513427C;
    }
    // 0x15134258: nop

    // 0x1513425C: lbu         $t4, 0x20($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X20);
    // 0x15134260: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x15134264: addiu       $a0, $a3, 0x24
    ctx->r4 = ADD32(ctx->r7, 0X24);
    // 0x15134268: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x1513426C: jal         0x15143134
    // 0x15134270: addu        $a2, $v1, $t5
    ctx->r6 = ADD32(ctx->r3, ctx->r13);
    func_15143134(rdram, ctx);
        goto after_3;
    // 0x15134270: addu        $a2, $v1, $t5
    ctx->r6 = ADD32(ctx->r3, ctx->r13);
    after_3:
    // 0x15134274: b           L_15134288
    // 0x15134278: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
        goto L_15134288;
    // 0x15134278: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
L_1513427C:
    // 0x1513427C: b           L_15134288
    // 0x15134280: sb          $t6, 0x3A($a3)
    MEM_B(0X3A, ctx->r7) = ctx->r14;
        goto L_15134288;
    // 0x15134280: sb          $t6, 0x3A($a3)
    MEM_B(0X3A, ctx->r7) = ctx->r14;
L_15134284:
    // 0x15134284: sb          $t7, 0x3A($a3)
    MEM_B(0X3A, ctx->r7) = ctx->r15;
L_15134288:
    // 0x15134288: lwc1        $f0, 0x30($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X30);
    // 0x1513428C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15134290: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15134294: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15134298: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1513429C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x151342A0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151342A4: swc1        $f10, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->f10.u32l;
    // 0x151342A8: swc1        $f8, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->f8.u32l;
L_151342AC:
    // 0x151342AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151342B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151342B4: jr          $ra
    // 0x151342B8: nop

    return;
    return;
    // 0x151342B8: nop

;}
RECOMP_FUNC void func_150ECC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150ECC70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150ECC74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150ECC78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150ECC7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150ECC80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECC84: addiu       $a1, $zero, 0x403B
    ctx->r5 = ADD32(0, 0X403B);
    // 0x150ECC88: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150ECC8C: jal         0x1509BE40
    // 0x150ECC90: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150ECC90: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_0:
    // 0x150ECC94: beq         $v0, $zero, L_150ECECC
    if (ctx->r2 == 0) {
        // 0x150ECC98: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_150ECECC;
    }
    // 0x150ECC98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150ECC9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECCA0: addiu       $a1, $zero, 0x4031
    ctx->r5 = ADD32(0, 0X4031);
    // 0x150ECCA4: jal         0x1509BFB0
    // 0x150ECCA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_1;
    // 0x150ECCA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x150ECCAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECCB0: addiu       $a1, $zero, 0x4032
    ctx->r5 = ADD32(0, 0X4032);
    // 0x150ECCB4: jal         0x1509BFB0
    // 0x150ECCB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_2;
    // 0x150ECCB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x150ECCBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECCC0: addiu       $a1, $zero, 0x4033
    ctx->r5 = ADD32(0, 0X4033);
    // 0x150ECCC4: jal         0x1509BFB0
    // 0x150ECCC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_3;
    // 0x150ECCC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x150ECCCC: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150ECCD0: lui         $at, 0x8002
    ctx->r1 = S32(0X8002 << 16);
    // 0x150ECCD4: ori         $at, $at, 0x1200
    ctx->r1 = ctx->r1 | 0X1200;
    // 0x150ECCD8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150ECCDC: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150ECCE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECCE4: addiu       $a1, $zero, 0x4038
    ctx->r5 = ADD32(0, 0X4038);
    // 0x150ECCE8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150ECCEC: jal         0x1509BE40
    // 0x150ECCF0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_4;
    // 0x150ECCF0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_4:
    // 0x150ECCF4: beq         $v0, $zero, L_150ECD28
    if (ctx->r2 == 0) {
        // 0x150ECCF8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150ECD28;
    }
    // 0x150ECCF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECCFC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150ECD00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150ECD04: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x150ECD08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150ECD0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD10: swc1        $f4, -0x7524($at)
    MEM_W(-0X7524, ctx->r1) = ctx->f4.u32l;
    // 0x150ECD14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD18: swc1        $f0, -0x7520($at)
    MEM_W(-0X7520, ctx->r1) = ctx->f0.u32l;
    // 0x150ECD1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD20: b           L_150ECDCC
    // 0x150ECD24: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
        goto L_150ECDCC;
    // 0x150ECD24: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
L_150ECD28:
    // 0x150ECD28: addiu       $a1, $zero, 0x4039
    ctx->r5 = ADD32(0, 0X4039);
    // 0x150ECD2C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150ECD30: jal         0x1509BE40
    // 0x150ECD34: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x150ECD34: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_5:
    // 0x150ECD38: beq         $v0, $zero, L_150ECD6C
    if (ctx->r2 == 0) {
        // 0x150ECD3C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150ECD6C;
    }
    // 0x150ECD3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECD40: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150ECD44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150ECD48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD4C: swc1        $f0, -0x7524($at)
    MEM_W(-0X7524, ctx->r1) = ctx->f0.u32l;
    // 0x150ECD50: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x150ECD54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150ECD58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD5C: swc1        $f6, -0x7520($at)
    MEM_W(-0X7520, ctx->r1) = ctx->f6.u32l;
    // 0x150ECD60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD64: b           L_150ECDCC
    // 0x150ECD68: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
        goto L_150ECDCC;
    // 0x150ECD68: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
L_150ECD6C:
    // 0x150ECD6C: addiu       $a1, $zero, 0x403A
    ctx->r5 = ADD32(0, 0X403A);
    // 0x150ECD70: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150ECD74: jal         0x1509BE40
    // 0x150ECD78: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x150ECD78: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_6:
    // 0x150ECD7C: beq         $v0, $zero, L_150ECDB0
    if (ctx->r2 == 0) {
        // 0x150ECD80: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_150ECDB0;
    }
    // 0x150ECD80: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150ECD84: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150ECD88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150ECD8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD90: swc1        $f0, -0x7524($at)
    MEM_W(-0X7524, ctx->r1) = ctx->f0.u32l;
    // 0x150ECD94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECD98: swc1        $f0, -0x7520($at)
    MEM_W(-0X7520, ctx->r1) = ctx->f0.u32l;
    // 0x150ECD9C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x150ECDA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150ECDA4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECDA8: b           L_150ECDCC
    // 0x150ECDAC: swc1        $f8, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f8.u32l;
        goto L_150ECDCC;
    // 0x150ECDAC: swc1        $f8, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f8.u32l;
L_150ECDB0:
    // 0x150ECDB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150ECDB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECDB8: swc1        $f0, -0x7524($at)
    MEM_W(-0X7524, ctx->r1) = ctx->f0.u32l;
    // 0x150ECDBC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECDC0: swc1        $f0, -0x7520($at)
    MEM_W(-0X7520, ctx->r1) = ctx->f0.u32l;
    // 0x150ECDC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECDC8: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
L_150ECDCC:
    // 0x150ECDCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECDD0: addiu       $a1, $zero, 0x2007
    ctx->r5 = ADD32(0, 0X2007);
    // 0x150ECDD4: jal         0x1509BE40
    // 0x150ECDD8: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_7;
    // 0x150ECDD8: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_7:
    // 0x150ECDDC: ori         $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 | 0X2000;
    // 0x150ECDE0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150ECDE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECDE8: addiu       $a1, $zero, 0x4010
    ctx->r5 = ADD32(0, 0X4010);
    // 0x150ECDEC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150ECDF0: jal         0x1509BE40
    // 0x150ECDF4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_8;
    // 0x150ECDF4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_8:
    // 0x150ECDF8: bne         $v0, $zero, L_150ECE10
    if (ctx->r2 != 0) {
        // 0x150ECDFC: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_150ECE10;
    }
    // 0x150ECDFC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150ECE00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150ECE04: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x150ECE08: b           L_150ED1B0
    // 0x150ECE0C: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
        goto L_150ED1B0;
    // 0x150ECE0C: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
L_150ECE10:
    // 0x150ECE10: beq         $a1, $zero, L_150ED1B0
    if (ctx->r5 == 0) {
        // 0x150ECE14: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150ED1B0;
    }
    // 0x150ECE14: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150ECE18: sw          $t9, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->r25;
    // 0x150ECE1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECE20: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    // 0x150ECE24: jal         0x1509BE40
    // 0x150ECE28: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_9;
    // 0x150ECE28: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_9:
    // 0x150ECE2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECE30: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150ECE34: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x150ECE38: jal         0x1509BFB0
    // 0x150ECE3C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_10;
    // 0x150ECE3C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_10:
    // 0x150ECE40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECE44: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150ECE48: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    // 0x150ECE4C: jal         0x1509BE40
    // 0x150ECE50: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_11;
    // 0x150ECE50: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_11:
    // 0x150ECE54: sra         $a0, $v0, 1
    ctx->r4 = S32(SIGNED(ctx->r2) >> 1);
    // 0x150ECE58: slti        $at, $v0, 0x384
    ctx->r1 = SIGNED(ctx->r2) < 0X384 ? 1 : 0;
    // 0x150ECE5C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x150ECE60: beq         $at, $zero, L_150ECE70
    if (ctx->r1 == 0) {
        // 0x150ECE64: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_150ECE70;
    }
    // 0x150ECE64: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150ECE68: b           L_150ECE80
    // 0x150ECE6C: addiu       $a3, $zero, 0x384
    ctx->r7 = ADD32(0, 0X384);
        goto L_150ECE80;
    // 0x150ECE6C: addiu       $a3, $zero, 0x384
    ctx->r7 = ADD32(0, 0X384);
L_150ECE70:
    // 0x150ECE70: slti        $at, $v0, 0x4A7
    ctx->r1 = SIGNED(ctx->r2) < 0X4A7 ? 1 : 0;
    // 0x150ECE74: bnel        $at, $zero, L_150ECE84
    if (ctx->r1 != 0) {
        // 0x150ECE78: slti        $at, $a0, 0xB4
        ctx->r1 = SIGNED(ctx->r4) < 0XB4 ? 1 : 0;
            goto L_150ECE84;
    }
    goto skip_0;
    // 0x150ECE78: slti        $at, $a0, 0xB4
    ctx->r1 = SIGNED(ctx->r4) < 0XB4 ? 1 : 0;
    skip_0:
    // 0x150ECE7C: addiu       $a3, $zero, 0x4A6
    ctx->r7 = ADD32(0, 0X4A6);
L_150ECE80:
    // 0x150ECE80: slti        $at, $a0, 0xB4
    ctx->r1 = SIGNED(ctx->r4) < 0XB4 ? 1 : 0;
L_150ECE84:
    // 0x150ECE84: beq         $at, $zero, L_150ECE94
    if (ctx->r1 == 0) {
        // 0x150ECE88: ori         $a1, $zero, 0x9000
        ctx->r5 = 0 | 0X9000;
            goto L_150ECE94;
    }
    // 0x150ECE88: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150ECE8C: b           L_150ECEA4
    // 0x150ECE90: addiu       $v1, $zero, 0xB4
    ctx->r3 = ADD32(0, 0XB4);
        goto L_150ECEA4;
    // 0x150ECE90: addiu       $v1, $zero, 0xB4
    ctx->r3 = ADD32(0, 0XB4);
L_150ECE94:
    // 0x150ECE94: slti        $at, $a0, 0xE8
    ctx->r1 = SIGNED(ctx->r4) < 0XE8 ? 1 : 0;
    // 0x150ECE98: bnel        $at, $zero, L_150ECEA8
    if (ctx->r1 != 0) {
        // 0x150ECE9C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_150ECEA8;
    }
    goto skip_1;
    // 0x150ECE9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x150ECEA0: addiu       $v1, $zero, 0xE7
    ctx->r3 = ADD32(0, 0XE7);
L_150ECEA4:
    // 0x150ECEA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_150ECEA8:
    // 0x150ECEA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x150ECEAC: jal         0x1509BFB0
    // 0x150ECEB0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_1509BFB0(rdram, ctx);
        goto after_12;
    // 0x150ECEB0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_12:
    // 0x150ECEB4: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150ECEB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150ECEBC: nop

    // 0x150ECEC0: swc1        $f16, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f16.u32l;
    // 0x150ECEC4: b           L_150ECF38
    // 0x150ECEC8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
        goto L_150ECF38;
    // 0x150ECEC8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_150ECECC:
    // 0x150ECECC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150ECED0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECED4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECED8: swc1        $f0, -0x7524($at)
    MEM_W(-0X7524, ctx->r1) = ctx->f0.u32l;
    // 0x150ECEDC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECEE0: swc1        $f0, -0x7520($at)
    MEM_W(-0X7520, ctx->r1) = ctx->f0.u32l;
    // 0x150ECEE4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECEE8: addiu       $a1, $zero, 0x4031
    ctx->r5 = ADD32(0, 0X4031);
    // 0x150ECEEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150ECEF0: jal         0x1509BFB0
    // 0x150ECEF4: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
    func_1509BFB0(rdram, ctx);
        goto after_13;
    // 0x150ECEF4: swc1        $f0, -0x751C($at)
    MEM_W(-0X751C, ctx->r1) = ctx->f0.u32l;
    after_13:
    // 0x150ECEF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECEFC: addiu       $a1, $zero, 0x4032
    ctx->r5 = ADD32(0, 0X4032);
    // 0x150ECF00: jal         0x1509BFB0
    // 0x150ECF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_14;
    // 0x150ECF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x150ECF08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150ECF0C: addiu       $a1, $zero, 0x4033
    ctx->r5 = ADD32(0, 0X4033);
    // 0x150ECF10: jal         0x1509BFB0
    // 0x150ECF14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_15;
    // 0x150ECF14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x150ECF18: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150ECF1C: lui         $at, 0x7FFD
    ctx->r1 = S32(0X7FFD << 16);
    // 0x150ECF20: ori         $at, $at, 0xEDFF
    ctx->r1 = ctx->r1 | 0XEDFF;
    // 0x150ECF24: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x150ECF28: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150ECF2C: ori         $t3, $t1, 0x8
    ctx->r11 = ctx->r9 | 0X8;
    // 0x150ECF30: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
    // 0x150ECF34: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_150ECF38:
    // 0x150ECF38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150ECF3C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150ECF40: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150ECF44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150ECF48: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x150ECF4C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150ECF50: addiu       $a2, $a2, -0x7518
    ctx->r6 = ADD32(ctx->r6, -0X7518);
    // 0x150ECF54: lw          $a1, -0x7524($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7524);
    // 0x150ECF58: addiu       $a0, $a0, -0x7530
    ctx->r4 = ADD32(ctx->r4, -0X7530);
    // 0x150ECF5C: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x150ECF60: jal         0x150495B0
    // 0x150ECF64: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_16;
    // 0x150ECF64: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x150ECF68: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150ECF6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150ECF70: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150ECF74: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150ECF78: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150ECF7C: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x150ECF80: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150ECF84: addiu       $a2, $a2, -0x7514
    ctx->r6 = ADD32(ctx->r6, -0X7514);
    // 0x150ECF88: lw          $a1, -0x7520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7520);
    // 0x150ECF8C: addiu       $a0, $a0, -0x752C
    ctx->r4 = ADD32(ctx->r4, -0X752C);
    // 0x150ECF90: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x150ECF94: jal         0x150495B0
    // 0x150ECF98: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_17;
    // 0x150ECF98: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x150ECF9C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150ECFA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150ECFA4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150ECFA8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150ECFAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150ECFB0: lwc1        $f16, 0x7B4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x150ECFB4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150ECFB8: addiu       $a2, $a2, -0x7510
    ctx->r6 = ADD32(ctx->r6, -0X7510);
    // 0x150ECFBC: lw          $a1, -0x751C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X751C);
    // 0x150ECFC0: addiu       $a0, $a0, -0x7528
    ctx->r4 = ADD32(ctx->r4, -0X7528);
    // 0x150ECFC4: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x150ECFC8: jal         0x150495B0
    // 0x150ECFCC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_150495B0(rdram, ctx);
        goto after_18;
    // 0x150ECFCC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_18:
    // 0x150ECFD0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ECFD4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x150ECFD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ECFDC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ECFE0: lwc1        $f18, -0x7530($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7530);
    // 0x150ECFE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150ECFE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ECFEC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150ECFF0: addiu       $a1, $zero, 0x30F3
    ctx->r5 = ADD32(0, 0X30F3);
    // 0x150ECFF4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x150ECFF8: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ECFFC: nop

    // 0x150ED000: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED004: beql        $a3, $zero, L_150ED054
    if (ctx->r7 == 0) {
        // 0x150ED008: mfc1        $a3, $f4
        ctx->r7 = (int32_t)ctx->f4.u32l;
            goto L_150ED054;
    }
    goto skip_2;
    // 0x150ED008: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x150ED00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150ED010: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ED014: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150ED018: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ED01C: nop

    // 0x150ED020: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150ED024: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ED028: nop

    // 0x150ED02C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED030: bne         $a3, $zero, L_150ED048
    if (ctx->r7 != 0) {
        // 0x150ED034: nop
    
            goto L_150ED048;
    }
    // 0x150ED034: nop

    // 0x150ED038: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x150ED03C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150ED040: b           L_150ED060
    // 0x150ED044: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150ED060;
    // 0x150ED044: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150ED048:
    // 0x150ED048: b           L_150ED060
    // 0x150ED04C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150ED060;
    // 0x150ED04C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150ED050: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
L_150ED054:
    // 0x150ED054: nop

    // 0x150ED058: bltz        $a3, L_150ED048
    if (SIGNED(ctx->r7) < 0) {
        // 0x150ED05C: nop
    
            goto L_150ED048;
    }
    // 0x150ED05C: nop

L_150ED060:
    // 0x150ED060: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x150ED064: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x150ED068: jal         0x1509BFB0
    // 0x150ED06C: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_19;
    // 0x150ED06C: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    after_19:
    // 0x150ED070: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ED074: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150ED078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ED07C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ED080: lwc1        $f6, -0x752C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X752C);
    // 0x150ED084: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150ED088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ED08C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150ED090: addiu       $a1, $zero, 0x30F4
    ctx->r5 = ADD32(0, 0X30F4);
    // 0x150ED094: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x150ED098: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ED09C: nop

    // 0x150ED0A0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED0A4: beql        $a3, $zero, L_150ED0F4
    if (ctx->r7 == 0) {
        // 0x150ED0A8: mfc1        $a3, $f8
        ctx->r7 = (int32_t)ctx->f8.u32l;
            goto L_150ED0F4;
    }
    goto skip_3;
    // 0x150ED0A8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x150ED0AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150ED0B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ED0B4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150ED0B8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ED0BC: nop

    // 0x150ED0C0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150ED0C4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ED0C8: nop

    // 0x150ED0CC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED0D0: bne         $a3, $zero, L_150ED0E8
    if (ctx->r7 != 0) {
        // 0x150ED0D4: nop
    
            goto L_150ED0E8;
    }
    // 0x150ED0D4: nop

    // 0x150ED0D8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150ED0DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150ED0E0: b           L_150ED100
    // 0x150ED0E4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150ED100;
    // 0x150ED0E4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150ED0E8:
    // 0x150ED0E8: b           L_150ED100
    // 0x150ED0EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150ED100;
    // 0x150ED0EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150ED0F0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
L_150ED0F4:
    // 0x150ED0F4: nop

    // 0x150ED0F8: bltz        $a3, L_150ED0E8
    if (SIGNED(ctx->r7) < 0) {
        // 0x150ED0FC: nop
    
            goto L_150ED0E8;
    }
    // 0x150ED0FC: nop

L_150ED100:
    // 0x150ED100: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150ED104: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x150ED108: jal         0x1509BFB0
    // 0x150ED10C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_20;
    // 0x150ED10C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_20:
    // 0x150ED110: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150ED114: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x150ED118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ED11C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ED120: lwc1        $f10, -0x7528($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7528);
    // 0x150ED124: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150ED128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150ED12C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150ED130: addiu       $a1, $zero, 0x30F5
    ctx->r5 = ADD32(0, 0X30F5);
    // 0x150ED134: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x150ED138: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ED13C: nop

    // 0x150ED140: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED144: beql        $a3, $zero, L_150ED194
    if (ctx->r7 == 0) {
        // 0x150ED148: mfc1        $a3, $f16
        ctx->r7 = (int32_t)ctx->f16.u32l;
            goto L_150ED194;
    }
    goto skip_4;
    // 0x150ED148: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x150ED14C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150ED150: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150ED154: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150ED158: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150ED15C: nop

    // 0x150ED160: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150ED164: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150ED168: nop

    // 0x150ED16C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150ED170: bne         $a3, $zero, L_150ED188
    if (ctx->r7 != 0) {
        // 0x150ED174: nop
    
            goto L_150ED188;
    }
    // 0x150ED174: nop

    // 0x150ED178: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150ED17C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150ED180: b           L_150ED1A0
    // 0x150ED184: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150ED1A0;
    // 0x150ED184: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150ED188:
    // 0x150ED188: b           L_150ED1A0
    // 0x150ED18C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150ED1A0;
    // 0x150ED18C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150ED190: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
L_150ED194:
    // 0x150ED194: nop

    // 0x150ED198: bltz        $a3, L_150ED188
    if (SIGNED(ctx->r7) < 0) {
        // 0x150ED19C: nop
    
            goto L_150ED188;
    }
    // 0x150ED19C: nop

L_150ED1A0:
    // 0x150ED1A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x150ED1A4: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x150ED1A8: jal         0x1509BFB0
    // 0x150ED1AC: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_21;
    // 0x150ED1AC: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    after_21:
L_150ED1B0:
    // 0x150ED1B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150ED1B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150ED1B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150ED1BC: jr          $ra
    // 0x150ED1C0: nop

    return;
    return;
    // 0x150ED1C0: nop

;}
RECOMP_FUNC void func_10008EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008EE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008EEC: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x10008EF0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x10008EF4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x10008EF8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008EFC: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x10008F00: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x10008F04: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x10008F08: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    // 0x10008F0C: jal         0x10018D00
    // 0x10008F10: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_10018D00(rdram, ctx);
        goto after_0;
    // 0x10008F10: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x10008F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008F1C: jr          $ra
    // 0x10008F20: nop

    return;
    return;
    // 0x10008F20: nop

;}
RECOMP_FUNC void func_15169260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169260: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15169264: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15169268: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1516926C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15169270: andi        $s3, $a3, 0xFF
    ctx->r19 = ctx->r7 & 0XFF;
    // 0x15169274: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15169278: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1516927C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15169280: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15169284: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15169288: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1516928C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15169290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15169294: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15169298: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1516929C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151692A0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x151692A4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x151692A8: blez        $t6, L_1516941C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x151692AC: addiu       $fp, $zero, 0x34
        ctx->r30 = ADD32(0, 0X34);
            goto L_1516941C;
    }
    // 0x151692AC: addiu       $fp, $zero, 0x34
    ctx->r30 = ADD32(0, 0X34);
    // 0x151692B0: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x151692B4: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151692B8: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x151692BC: addiu       $s4, $s4, -0x2E70
    ctx->r20 = ADD32(ctx->r20, -0X2E70);
    // 0x151692C0: addiu       $s5, $s5, -0x2E68
    ctx->r21 = ADD32(ctx->r21, -0X2E68);
    // 0x151692C4: addiu       $s7, $s7, -0x4B58
    ctx->r23 = ADD32(ctx->r23, -0X4B58);
L_151692C8:
    // 0x151692C8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151692CC: addiu       $t7, $t7, -0x31B0
    ctx->r15 = ADD32(ctx->r15, -0X31B0);
    // 0x151692D0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_151692D4:
    // 0x151692D4: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x151692D8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x151692DC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x151692E0: multu       $v0, $fp
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151692E4: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151692E8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151692EC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x151692F0: mflo        $t8
    ctx->r24 = lo;
    // 0x151692F4: addu        $t9, $s7, $t8
    ctx->r25 = ADD32(ctx->r23, ctx->r24);
    // 0x151692F8: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x151692FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15169300: beql        $t0, $zero, L_15169394
    if (ctx->r8 == 0) {
        // 0x15169304: lb          $t0, 0x0($s4)
        ctx->r8 = MEM_B(ctx->r20, 0X0);
            goto L_15169394;
    }
    goto skip_0;
    // 0x15169304: lb          $t0, 0x0($s4)
    ctx->r8 = MEM_B(ctx->r20, 0X0);
    skip_0:
    // 0x15169308: lb          $t4, 0x0($s4)
    ctx->r12 = MEM_B(ctx->r20, 0X0);
    // 0x1516930C: lw          $s0, 0x0($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X0);
    // 0x15169310: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15169314: beq         $s0, $zero, L_15169380
    if (ctx->r16 == 0) {
        // 0x15169318: sb          $t5, 0x0($s4)
        MEM_B(0X0, ctx->r20) = ctx->r13;
            goto L_15169380;
    }
    // 0x15169318: sb          $t5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r13;
    // 0x1516931C: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    // 0x15169320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15169324: addu        $s1, $s5, $t7
    ctx->r17 = ADD32(ctx->r21, ctx->r15);
    // 0x15169328: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_1516932C:
    // 0x1516932C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169330: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15169334: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x15169338: jal         0x1516968C
    // 0x1516933C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    func_1516968C(rdram, ctx);
        goto after_0;
    // 0x1516933C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    after_0:
    // 0x15169340: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x15169344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169348: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1516934C: multu       $t9, $fp
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15169350: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x15169354: mflo        $t0
    ctx->r8 = lo;
    // 0x15169358: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x1516935C: lw          $t9, 0x1C($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X1C);
    // 0x15169360: jalr        $t9
    // 0x15169364: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15169364: nop

    after_1:
    // 0x15169368: lb          $t2, 0x0($s4)
    ctx->r10 = MEM_B(ctx->r20, 0X0);
    // 0x1516936C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15169370: addu        $s1, $s5, $t3
    ctx->r17 = ADD32(ctx->r21, ctx->r11);
    // 0x15169374: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15169378: bnel        $s0, $zero, L_1516932C
    if (ctx->r16 != 0) {
        // 0x1516937C: lw          $t8, 0x8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X8);
            goto L_1516932C;
    }
    goto skip_1;
    // 0x1516937C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_15169380:
    // 0x15169380: lb          $t4, 0x0($s4)
    ctx->r12 = MEM_B(ctx->r20, 0X0);
    // 0x15169384: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x15169388: b           L_151693EC
    // 0x1516938C: sb          $t5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r13;
        goto L_151693EC;
    // 0x1516938C: sb          $t5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r13;
    // 0x15169390: lb          $t0, 0x0($s4)
    ctx->r8 = MEM_B(ctx->r20, 0X0);
L_15169394:
    // 0x15169394: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x15169398: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x1516939C: beq         $s0, $zero, L_151693E0
    if (ctx->r16 == 0) {
        // 0x151693A0: sb          $t1, 0x0($s4)
        MEM_B(0X0, ctx->r20) = ctx->r9;
            goto L_151693E0;
    }
    // 0x151693A0: sb          $t1, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r9;
    // 0x151693A4: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
    // 0x151693A8: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x151693AC: addu        $s1, $s5, $t2
    ctx->r17 = ADD32(ctx->r21, ctx->r10);
    // 0x151693B0: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
L_151693B4:
    // 0x151693B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151693B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151693BC: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x151693C0: jal         0x1516968C
    // 0x151693C4: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    func_1516968C(rdram, ctx);
        goto after_2;
    // 0x151693C4: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    after_2:
    // 0x151693C8: lb          $t4, 0x0($s4)
    ctx->r12 = MEM_B(ctx->r20, 0X0);
    // 0x151693CC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151693D0: addu        $s1, $s5, $t5
    ctx->r17 = ADD32(ctx->r21, ctx->r13);
    // 0x151693D4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x151693D8: bnel        $s0, $zero, L_151693B4
    if (ctx->r16 != 0) {
        // 0x151693DC: lw          $t3, 0x8($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X8);
            goto L_151693B4;
    }
    goto skip_2;
    // 0x151693DC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    skip_2:
L_151693E0:
    // 0x151693E0: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    // 0x151693E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x151693E8: sb          $t7, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r15;
L_151693EC:
    // 0x151693EC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x151693F0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151693F4: addiu       $t1, $t1, -0x2E70
    ctx->r9 = ADD32(ctx->r9, -0X2E70);
    // 0x151693F8: addiu       $t0, $t8, 0x1A0
    ctx->r8 = ADD32(ctx->r24, 0X1A0);
    // 0x151693FC: bne         $t0, $t1, L_151692D4
    if (ctx->r8 != ctx->r9) {
        // 0x15169400: sw          $t0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r8;
            goto L_151692D4;
    }
    // 0x15169400: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x15169404: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x15169408: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x1516940C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x15169410: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x15169414: bne         $t2, $t3, L_151692C8
    if (ctx->r10 != ctx->r11) {
        // 0x15169418: sw          $t2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r10;
            goto L_151692C8;
    }
    // 0x15169418: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
L_1516941C:
    // 0x1516941C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15169420: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15169424: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15169428: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1516942C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15169430: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15169434: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15169438: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1516943C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15169440: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15169444: jr          $ra
    // 0x15169448: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x15169448: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_15147928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514792C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15147930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15147934: jal         0x151478D0
    // 0x15147938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478D0(rdram, ctx);
        goto after_0;
    // 0x15147938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514793C: jal         0x1514795C
    // 0x15147940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514795C(rdram, ctx);
        goto after_1;
    // 0x15147940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15147944: jal         0x15169824
    // 0x15147948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_2;
    // 0x15147948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x1514794C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15147950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15147954: jr          $ra
    // 0x15147958: nop

    return;
    return;
    // 0x15147958: nop

;}
RECOMP_FUNC void func_151A11CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A11CC: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x151A11D0: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
    // 0x151A11D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151A11D8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151A11DC: jr          $ra
    // 0x151A11E0: nop

    return;
    return;
    // 0x151A11E0: nop

;}
RECOMP_FUNC void func_15004FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004FE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15004FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15004FE8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15004FEC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15004FF0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15004FF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15004FF8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x15004FFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15005000: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x15005004: jal         0x1502B7F0
    // 0x15005008: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1502B7F0(rdram, ctx);
        goto after_0;
    // 0x15005008: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x1500500C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x15005010: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15005014: mflo        $v1
    ctx->r3 = lo;
    // 0x15005018: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x1500501C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x15005020: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x15005024: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x15005028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1500502C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15005030: jal         0x10003C40
    // 0x15005034: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15005034: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15005038: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1500503C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15005040: addiu       $a0, $a0, 0x6650
    ctx->r4 = ADD32(ctx->r4, 0X6650);
    // 0x15005044: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x15005048: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500504C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x15005050: blez        $t0, L_15005238
    if (SIGNED(ctx->r8) <= 0) {
        // 0x15005054: sw          $t0, 0x6654($at)
        MEM_W(0X6654, ctx->r1) = ctx->r8;
            goto L_15005238;
    }
    // 0x15005054: sw          $t0, 0x6654($at)
    MEM_W(0X6654, ctx->r1) = ctx->r8;
    // 0x15005058: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x1500505C: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x15005060: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x15005064: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x15005068: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x1500506C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
L_15005070:
    // 0x15005070: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x15005074: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x15005078: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1500507C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15005080: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x15005084: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15005088: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500508C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15005090: nop

    // 0x15005094: sh          $t2, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r10;
    // 0x15005098: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x1500509C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x150050A0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x150050A4: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x150050A8: addu        $t3, $t9, $v0
    ctx->r11 = ADD32(ctx->r25, ctx->r2);
    // 0x150050AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150050B0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150050B4: nop

    // 0x150050B8: sh          $t8, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r24;
    // 0x150050BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x150050C0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x150050C4: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x150050C8: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x150050CC: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x150050D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150050D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150050D8: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x150050DC: nop

    // 0x150050E0: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x150050E4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x150050E8: addu        $t3, $t8, $v0
    ctx->r11 = ADD32(ctx->r24, ctx->r2);
    // 0x150050EC: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x150050F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x150050F4: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x150050F8: lwc1        $f0, 0xC($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0XC);
    // 0x150050FC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15005100: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x15005104: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15005108: nop

    // 0x1500510C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15005110: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15005114: nop

    // 0x15005118: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1500511C: beql        $t7, $zero, L_1500516C
    if (ctx->r15 == 0) {
        // 0x15005120: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_1500516C;
    }
    goto skip_0;
    // 0x15005120: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x15005124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15005128: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500512C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15005130: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15005134: nop

    // 0x15005138: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1500513C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15005140: nop

    // 0x15005144: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15005148: bne         $t7, $zero, L_15005160
    if (ctx->r15 != 0) {
        // 0x1500514C: nop
    
            goto L_15005160;
    }
    // 0x1500514C: nop

    // 0x15005150: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15005154: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15005158: b           L_15005178
    // 0x1500515C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15005178;
    // 0x1500515C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15005160:
    // 0x15005160: b           L_15005178
    // 0x15005164: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15005178;
    // 0x15005164: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15005168: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_1500516C:
    // 0x1500516C: nop

    // 0x15005170: bltz        $t7, L_15005160
    if (SIGNED(ctx->r15) < 0) {
        // 0x15005174: nop
    
            goto L_15005160;
    }
    // 0x15005174: nop

L_15005178:
    // 0x15005178: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1500517C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x15005180: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x15005184: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x15005188: sw          $t7, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r15;
    // 0x1500518C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x15005190: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x15005194: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x15005198: addu        $t3, $t8, $v1
    ctx->r11 = ADD32(ctx->r24, ctx->r3);
    // 0x1500519C: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x150051A0: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x150051A4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150051A8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150051AC: nop

    // 0x150051B0: sh          $t4, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r12;
    // 0x150051B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x150051B8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x150051BC: addu        $a1, $t7, $v1
    ctx->r5 = ADD32(ctx->r15, ctx->r3);
    // 0x150051C0: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x150051C4: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150051C8: addu        $t2, $t3, $v0
    ctx->r10 = ADD32(ctx->r11, ctx->r2);
    // 0x150051CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150051D0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150051D4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x150051D8: nop

    // 0x150051DC: sh          $t8, 0xE($t2)
    MEM_H(0XE, ctx->r10) = ctx->r24;
    // 0x150051E0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x150051E4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x150051E8: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    // 0x150051EC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150051F0: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x150051F4: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x150051F8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150051FC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15005200: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15005204: nop

    // 0x15005208: sh          $t6, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r14;
    // 0x1500520C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x15005210: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x15005214: addu        $t8, $t3, $v1
    ctx->r24 = ADD32(ctx->r11, ctx->r3);
    // 0x15005218: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x1500521C: addu        $t7, $t4, $v0
    ctx->r15 = ADD32(ctx->r12, ctx->r2);
    // 0x15005220: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x15005224: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15005228: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x1500522C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15005230: bgtz        $t0, L_15005070
    if (SIGNED(ctx->r8) > 0) {
        // 0x15005234: sh          $t5, 0x12($t7)
        MEM_H(0X12, ctx->r15) = ctx->r13;
            goto L_15005070;
    }
    // 0x15005234: sh          $t5, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r13;
L_15005238:
    // 0x15005238: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1500523C: beq         $t6, $zero, L_15005250
    if (ctx->r14 == 0) {
        // 0x15005240: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_15005250;
    }
    // 0x15005240: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15005244: jal         0x10004074
    // 0x15005248: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x15005248: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_2:
    // 0x1500524C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
L_15005250:
    // 0x15005250: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x15005254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15005258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1500525C: jr          $ra
    // 0x15005260: nop

    return;
    return;
    // 0x15005260: nop

    // 0x15005264: nop

    // 0x15005268: nop

    // 0x1500526C: nop

;}
RECOMP_FUNC void func_15199C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15199C34: addiu       $sp, $sp, -0x2B0
    ctx->r29 = ADD32(ctx->r29, -0X2B0);
    // 0x15199C38: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x15199C3C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15199C40: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15199C44: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x15199C48: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x15199C4C: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x15199C50: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x15199C54: lw          $t1, 0x94($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X94);
    // 0x15199C58: lw          $s0, 0x98($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X98);
    // 0x15199C5C: sw          $t1, 0x2A8($sp)
    MEM_W(0X2A8, ctx->r29) = ctx->r9;
    // 0x15199C60: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x15199C64: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x15199C68: beq         $t5, $zero, L_15199C80
    if (ctx->r13 == 0) {
        // 0x15199C6C: nop
    
            goto L_15199C80;
    }
    // 0x15199C6C: nop

    // 0x15199C70: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x15199C74: lbu         $t8, 0x3B($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3B);
    // 0x15199C78: beql        $t6, $t8, L_15199C8C
    if (ctx->r14 == ctx->r24) {
        // 0x15199C7C: lbu         $t7, 0x74($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X74);
            goto L_15199C8C;
    }
    goto skip_0;
    // 0x15199C7C: lbu         $t7, 0x74($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X74);
    skip_0:
L_15199C80:
    // 0x15199C80: b           L_1519A984
    // 0x15199C84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519A984;
    // 0x15199C84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15199C88: lbu         $t7, 0x74($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X74);
L_15199C8C:
    // 0x15199C8C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15199C90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15199C94: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x15199C98: bne         $t3, $at, L_15199CB0
    if (ctx->r11 != ctx->r1) {
        // 0x15199C9C: addiu       $a1, $sp, 0x248
        ctx->r5 = ADD32(ctx->r29, 0X248);
            goto L_15199CB0;
    }
    // 0x15199C9C: addiu       $a1, $sp, 0x248
    ctx->r5 = ADD32(ctx->r29, 0X248);
    // 0x15199CA0: lbu         $t2, 0x150($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X150);
    // 0x15199CA4: ori         $t4, $t2, 0x10
    ctx->r12 = ctx->r10 | 0X10;
    // 0x15199CA8: b           L_15199CBC
    // 0x15199CAC: sb          $t4, 0x150($s0)
    MEM_B(0X150, ctx->r16) = ctx->r12;
        goto L_15199CBC;
    // 0x15199CAC: sb          $t4, 0x150($s0)
    MEM_B(0X150, ctx->r16) = ctx->r12;
L_15199CB0:
    // 0x15199CB0: lbu         $t9, 0x150($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X150);
    // 0x15199CB4: andi        $t1, $t9, 0xFFEF
    ctx->r9 = ctx->r25 & 0XFFEF;
    // 0x15199CB8: sb          $t1, 0x150($s0)
    MEM_B(0X150, ctx->r16) = ctx->r9;
L_15199CBC:
    // 0x15199CBC: lw          $t5, 0x1D4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X1D4);
    // 0x15199CC0: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x15199CC4: addiu       $a2, $sp, 0x23C
    ctx->r6 = ADD32(ctx->r29, 0X23C);
    // 0x15199CC8: beq         $t5, $zero, L_15199D44
    if (ctx->r13 == 0) {
        // 0x15199CCC: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15199D44;
    }
    // 0x15199CCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15199CD0: addiu       $t8, $s0, 0x14
    ctx->r24 = ADD32(ctx->r16, 0X14);
    // 0x15199CD4: addiu       $t7, $s0, 0x90
    ctx->r15 = ADD32(ctx->r16, 0X90);
    // 0x15199CD8: addiu       $t3, $s0, 0xD4
    ctx->r11 = ADD32(ctx->r16, 0XD4);
    // 0x15199CDC: addiu       $t2, $sp, 0x298
    ctx->r10 = ADD32(ctx->r29, 0X298);
    // 0x15199CE0: addiu       $t4, $sp, 0x28C
    ctx->r12 = ADD32(ctx->r29, 0X28C);
    // 0x15199CE4: addiu       $t9, $sp, 0x280
    ctx->r25 = ADD32(ctx->r29, 0X280);
    // 0x15199CE8: addiu       $t1, $sp, 0x274
    ctx->r9 = ADD32(ctx->r29, 0X274);
    // 0x15199CEC: sw          $t6, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r14;
    // 0x15199CF0: sw          $t8, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r24;
    // 0x15199CF4: sw          $t7, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r15;
    // 0x15199CF8: sw          $t3, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r11;
    // 0x15199CFC: sw          $t2, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r10;
    // 0x15199D00: sw          $t4, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r12;
    // 0x15199D04: sw          $t9, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->r25;
    // 0x15199D08: sw          $t1, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r9;
    // 0x15199D0C: lbu         $t6, 0x5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5);
    // 0x15199D10: lw          $t5, 0x1D4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X1D4);
    // 0x15199D14: sw          $s1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r17;
    // 0x15199D18: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x15199D1C: addiu       $a0, $sp, 0x264
    ctx->r4 = ADD32(ctx->r29, 0X264);
    // 0x15199D20: addiu       $a1, $sp, 0x254
    ctx->r5 = ADD32(ctx->r29, 0X254);
    // 0x15199D24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x15199D28: jal         0x15145EA4
    // 0x15199D2C: addu        $a2, $t5, $t8
    ctx->r6 = ADD32(ctx->r13, ctx->r24);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x15199D2C: addu        $a2, $t5, $t8
    ctx->r6 = ADD32(ctx->r13, ctx->r24);
    after_0:
    // 0x15199D30: lbu         $t7, 0x150($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X150);
    // 0x15199D34: andi        $t3, $t7, 0xFFFE
    ctx->r11 = ctx->r15 & 0XFFFE;
    // 0x15199D38: sb          $t3, 0x150($s0)
    MEM_B(0X150, ctx->r16) = ctx->r11;
    // 0x15199D3C: b           L_15199DC4
    // 0x15199D40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_15199DC4;
    // 0x15199D40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_15199D44:
    // 0x15199D44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15199D48: sw          $s1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r17;
    // 0x15199D4C: jal         0x15145740
    // 0x15199D50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15145740(rdram, ctx);
        goto after_1;
    // 0x15199D50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x15199D54: lw          $t2, 0x2A4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2A4);
    // 0x15199D58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15199D5C: lwc1        $f0, -0x7520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7520);
    // 0x15199D60: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x15199D64: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x15199D68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15199D6C: swc1        $f6, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->f6.u32l;
    // 0x15199D70: lwc1        $f8, 0x18($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X18);
    // 0x15199D74: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15199D78: lwc1        $f10, 0x248($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X248);
    // 0x15199D7C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15199D80: swc1        $f4, 0x29C($sp)
    MEM_W(0X29C, ctx->r29) = ctx->f4.u32l;
    // 0x15199D84: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x15199D88: swc1        $f8, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->f8.u32l;
    // 0x15199D8C: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15199D90: lwc1        $f6, 0x24C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24C);
    // 0x15199D94: swc1        $f10, 0x28C($sp)
    MEM_W(0X28C, ctx->r29) = ctx->f10.u32l;
    // 0x15199D98: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15199D9C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15199DA0: lwc1        $f10, 0x250($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X250);
    // 0x15199DA4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15199DA8: swc1        $f6, 0x290($sp)
    MEM_W(0X290, ctx->r29) = ctx->f6.u32l;
    // 0x15199DAC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15199DB0: swc1        $f6, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->f6.u32l;
    // 0x15199DB4: lbu         $t4, 0x150($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X150);
    // 0x15199DB8: ori         $t9, $t4, 0x1
    ctx->r25 = ctx->r12 | 0X1;
    // 0x15199DBC: sb          $t9, 0x150($s0)
    MEM_B(0X150, ctx->r16) = ctx->r25;
    // 0x15199DC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_15199DC4:
    // 0x15199DC4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15199DC8: addiu       $t1, $sp, 0x298
    ctx->r9 = ADD32(ctx->r29, 0X298);
    // 0x15199DCC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15199DD0: addiu       $v0, $sp, 0x20C
    ctx->r2 = ADD32(ctx->r29, 0X20C);
    // 0x15199DD4: sw          $at, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r1;
    // 0x15199DD8: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x15199DDC: sw          $t5, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r13;
    // 0x15199DE0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x15199DE4: sw          $at, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r1;
    // 0x15199DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15199DEC: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15199DF0: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15199DF4: lwc1        $f6, 0x12C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x15199DF8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15199DFC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15199E00: swc1        $f10, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f10.u32l;
    // 0x15199E04: lwc1        $f2, 0x12C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x15199E08: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x15199E0C: nop

    // 0x15199E10: bc1fl       L_1519A110
    if (!c1cs) {
        // 0x15199E14: lw          $a0, 0x2A4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2A4);
            goto L_1519A110;
    }
    goto skip_1;
    // 0x15199E14: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
    skip_1:
    // 0x15199E18: div.s       $f0, $f22, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f22.fl, ctx->f2.fl);
    // 0x15199E1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15199E20: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15199E24: lwc1        $f4, 0x128($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X128);
    // 0x15199E28: addiu       $v1, $s0, 0x110
    ctx->r3 = ADD32(ctx->r16, 0X110);
    // 0x15199E2C: addiu       $t0, $s0, 0x11C
    ctx->r8 = ADD32(ctx->r16, 0X11C);
    // 0x15199E30: add.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15199E34: addiu       $t2, $sp, 0x200
    ctx->r10 = ADD32(ctx->r29, 0X200);
    // 0x15199E38: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x15199E3C: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x15199E40: swc1        $f8, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f8.u32l;
    // 0x15199E44: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15199E48: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15199E4C: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x15199E50: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15199E54: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x15199E58: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x15199E5C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x15199E60: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x15199E64: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x15199E68: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x15199E6C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x15199E70: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x15199E74: lwc1        $f4, 0x110($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15199E78: lwc1        $f10, 0x298($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X298);
    // 0x15199E7C: lwc1        $f8, 0x29C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X29C);
    // 0x15199E80: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15199E84: swc1        $f6, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f6.u32l;
    // 0x15199E88: lwc1        $f10, 0x114($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X114);
    // 0x15199E8C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15199E90: lwc1        $f8, 0x2A0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2A0);
    // 0x15199E94: swc1        $f4, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->f4.u32l;
    // 0x15199E98: lwc1        $f10, 0x118($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
    // 0x15199E9C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x15199EA0: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15199EA4: lwc1        $f10, 0x28C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28C);
    // 0x15199EA8: swc1        $f8, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f8.u32l;
    // 0x15199EAC: lwc1        $f6, 0x11C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x15199EB0: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x15199EB4: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15199EB8: lwc1        $f6, 0x290($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X290);
    // 0x15199EBC: swc1        $f10, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f10.u32l;
    // 0x15199EC0: lwc1        $f4, 0x120($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X120);
    // 0x15199EC4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x15199EC8: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15199ECC: lwc1        $f4, 0x294($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X294);
    // 0x15199ED0: swc1        $f6, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f6.u32l;
    // 0x15199ED4: lwc1        $f8, 0x124($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X124);
    // 0x15199ED8: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x15199EDC: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x15199EE0: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15199EE4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15199EE8: swc1        $f4, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f4.u32l;
    // 0x15199EEC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15199EF0: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15199EF4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15199EF8: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15199EFC: lwc1        $f4, 0x220($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X220);
    // 0x15199F00: mul.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15199F04: nop

    // 0x15199F08: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15199F0C: nop

    // 0x15199F10: mul.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15199F14: nop

    // 0x15199F18: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15199F1C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x15199F20: addiu       $v0, $sp, 0x20C
    ctx->r2 = ADD32(ctx->r29, 0X20C);
L_15199F24:
    // 0x15199F24: lb          $t1, 0x2E($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X2E);
    // 0x15199F28: lw          $t7, 0x2A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2A8);
    // 0x15199F2C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15199F30: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15199F34: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15199F38: mflo        $t5
    ctx->r13 = lo;
    // 0x15199F3C: addu        $a0, $t5, $t7
    ctx->r4 = ADD32(ctx->r13, ctx->r15);
    // 0x15199F40: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x15199F44: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x15199F48: addiu       $a1, $a0, 0xC
    ctx->r5 = ADD32(ctx->r4, 0XC);
    // 0x15199F4C: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15199F50: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15199F54: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x15199F58: lwc1        $f6, 0x20C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20C);
    // 0x15199F5C: lwc1        $f10, 0x200($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X200);
    // 0x15199F60: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15199F64: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x15199F68: lwc1        $f10, 0x210($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X210);
    // 0x15199F6C: lwc1        $f8, 0x204($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X204);
    // 0x15199F70: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15199F74: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x15199F78: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
    // 0x15199F7C: lwc1        $f4, 0x208($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X208);
    // 0x15199F80: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15199F84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15199F88: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x15199F8C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15199F90: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x15199F94: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x15199F98: lbu         $t4, 0x3A($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3A);
    // 0x15199F9C: sb          $t4, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r12;
    // 0x15199FA0: lwc1        $f8, 0x144($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X144);
    // 0x15199FA4: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
    // 0x15199FA8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x15199FAC: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x15199FB0: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x15199FB4: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x15199FB8: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x15199FBC: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x15199FC0: jal         0x1519BE1C
    // 0x15199FC4: sw          $a0, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r4;
    func_1519BE1C(rdram, ctx);
        goto after_2;
    // 0x15199FC4: sw          $a0, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r4;
    after_2:
    // 0x15199FC8: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15199FCC: lw          $a0, 0x1E4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1E4);
    // 0x15199FD0: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15199FD4: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15199FD8: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15199FDC: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15199FE0: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15199FE4: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15199FE8: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15199FEC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15199FF0: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x15199FF4: lb          $t2, 0x2E($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X2E);
    // 0x15199FF8: lbu         $t1, 0x25($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X25);
    // 0x15199FFC: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x1519A000: sb          $t6, 0x2E($s2)
    MEM_B(0X2E, ctx->r18) = ctx->r14;
    // 0x1519A004: lb          $v0, 0x2E($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X2E);
    // 0x1519A008: bnel        $t1, $v0, L_1519A01C
    if (ctx->r9 != ctx->r2) {
        // 0x1519A00C: lb          $t5, 0x2C($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X2C);
            goto L_1519A01C;
    }
    goto skip_2;
    // 0x1519A00C: lb          $t5, 0x2C($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2C);
    skip_2:
    // 0x1519A010: sb          $zero, 0x2E($s2)
    MEM_B(0X2E, ctx->r18) = 0;
    // 0x1519A014: lb          $v0, 0x2E($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X2E);
    // 0x1519A018: lb          $t5, 0x2C($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2C);
L_1519A01C:
    // 0x1519A01C: lb          $v1, 0x2D($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X2D);
    // 0x1519A020: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x1519A024: bne         $v1, $v0, L_1519A054
    if (ctx->r3 != ctx->r2) {
        // 0x1519A028: sb          $t7, 0x2C($s2)
        MEM_B(0X2C, ctx->r18) = ctx->r15;
            goto L_1519A054;
    }
    // 0x1519A028: sb          $t7, 0x2C($s2)
    MEM_B(0X2C, ctx->r18) = ctx->r15;
    // 0x1519A02C: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x1519A030: sb          $t3, 0x2D($s2)
    MEM_B(0X2D, ctx->r18) = ctx->r11;
    // 0x1519A034: lb          $t9, 0x2D($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X2D);
    // 0x1519A038: lbu         $t8, 0x25($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X25);
    // 0x1519A03C: bnel        $t8, $t9, L_1519A04C
    if (ctx->r24 != ctx->r25) {
        // 0x1519A040: lb          $t4, 0x2C($s2)
        ctx->r12 = MEM_B(ctx->r18, 0X2C);
            goto L_1519A04C;
    }
    goto skip_3;
    // 0x1519A040: lb          $t4, 0x2C($s2)
    ctx->r12 = MEM_B(ctx->r18, 0X2C);
    skip_3:
    // 0x1519A044: sb          $zero, 0x2D($s2)
    MEM_B(0X2D, ctx->r18) = 0;
    // 0x1519A048: lb          $t4, 0x2C($s2)
    ctx->r12 = MEM_B(ctx->r18, 0X2C);
L_1519A04C:
    // 0x1519A04C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x1519A050: sb          $t2, 0x2C($s2)
    MEM_B(0X2C, ctx->r18) = ctx->r10;
L_1519A054:
    // 0x1519A054: lwc1        $f4, 0x210($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X210);
    // 0x1519A058: lwc1        $f6, 0x20C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20C);
    // 0x1519A05C: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x1519A060: lwc1        $f4, 0x200($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X200);
    // 0x1519A064: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x1519A068: lwc1        $f6, 0x214($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X214);
    // 0x1519A06C: swc1        $f8, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->f8.u32l;
    // 0x1519A070: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1519A074: swc1        $f10, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f10.u32l;
    // 0x1519A078: lwc1        $f4, 0x208($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X208);
    // 0x1519A07C: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x1519A080: lwc1        $f6, 0x204($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X204);
    // 0x1519A084: swc1        $f8, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f8.u32l;
    // 0x1519A088: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1519A08C: swc1        $f10, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f10.u32l;
    // 0x1519A090: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1519A094: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519A098: swc1        $f10, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f10.u32l;
    // 0x1519A09C: lwc1        $f10, 0x230($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X230);
    // 0x1519A0A0: swc1        $f6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f6.u32l;
    // 0x1519A0A4: lwc1        $f4, 0x12C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x1519A0A8: sub.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x1519A0AC: sub.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x1519A0B0: swc1        $f8, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f8.u32l;
    // 0x1519A0B4: lwc1        $f6, 0x12C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x1519A0B8: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x1519A0BC: nop

    // 0x1519A0C0: bc1tl       L_15199F24
    if (c1cs) {
        // 0x1519A0C4: addiu       $v0, $sp, 0x20C
        ctx->r2 = ADD32(ctx->r29, 0X20C);
            goto L_15199F24;
    }
    goto skip_4;
    // 0x1519A0C4: addiu       $v0, $sp, 0x20C
    ctx->r2 = ADD32(ctx->r29, 0X20C);
    skip_4:
    // 0x1519A0C8: addiu       $t1, $sp, 0x20C
    ctx->r9 = ADD32(ctx->r29, 0X20C);
    // 0x1519A0CC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1519A0D0: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x1519A0D4: addiu       $t8, $sp, 0x200
    ctx->r24 = ADD32(ctx->r29, 0X200);
    // 0x1519A0D8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519A0DC: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x1519A0E0: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x1519A0E4: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1519A0E8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519A0EC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1519A0F0: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x1519A0F4: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1519A0F8: lw          $t4, 0x4($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X4);
    // 0x1519A0FC: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x1519A100: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1519A104: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1519A108: swc1        $f20, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f20.u32l;
    // 0x1519A10C: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
L_1519A110:
    // 0x1519A110: lw          $t2, 0x1D4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1D4);
    // 0x1519A114: beql        $t2, $zero, L_1519A500
    if (ctx->r10 == 0) {
        // 0x1519A118: lw          $a0, 0x2A4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2A4);
            goto L_1519A500;
    }
    goto skip_5;
    // 0x1519A118: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
    skip_5:
    // 0x1519A11C: lbu         $t5, 0x74($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X74);
    // 0x1519A120: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1519A124: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x1519A128: beql        $t6, $at, L_1519A500
    if (ctx->r14 == ctx->r1) {
        // 0x1519A12C: lw          $a0, 0x2A4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2A4);
            goto L_1519A500;
    }
    goto skip_6;
    // 0x1519A12C: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
    skip_6:
    // 0x1519A130: jal         0x150ADA68
    // 0x1519A134: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1519A134: nop

    after_3:
    // 0x1519A138: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x1519A13C: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x1519A140: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519A144: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519A148: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1519A14C: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x1519A150: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x1519A154: ori         $t1, $t1, 0x5
    ctx->r9 = ctx->r9 | 0X5;
    // 0x1519A158: ori         $t7, $t7, 0x600
    ctx->r15 = ctx->r15 | 0X600;
    // 0x1519A15C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x1519A160: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1519A164: lwc1        $f8, 0x138($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X138);
    // 0x1519A168: addiu       $t3, $zero, 0x22
    ctx->r11 = ADD32(0, 0X22);
    // 0x1519A16C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x1519A170: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1519A174: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x1519A178: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x1519A17C: addiu       $t5, $zero, 0x15
    ctx->r13 = ADD32(0, 0X15);
    // 0x1519A180: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1519A184: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519A188: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519A18C: swc1        $f6, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f6.u32l;
    // 0x1519A190: lwc1        $f4, 0x138($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X138);
    // 0x1519A194: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x1519A198: nop

    // 0x1519A19C: bc1fl       L_1519A500
    if (!c1cs) {
        // 0x1519A1A0: lw          $a0, 0x2A4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2A4);
            goto L_1519A500;
    }
    goto skip_7;
    // 0x1519A1A0: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
    skip_7:
    // 0x1519A1A4: lwc1        $f8, -0x751C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X751C);
    // 0x1519A1A8: sw          $t1, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r9;
    // 0x1519A1AC: sw          $t7, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r15;
    // 0x1519A1B0: sw          $t9, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r25;
    // 0x1519A1B4: sw          $t3, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r11;
    // 0x1519A1B8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1519A1BC: addiu       $t7, $zero, 0x68
    ctx->r15 = ADD32(0, 0X68);
    // 0x1519A1C0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x1519A1C4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1519A1C8: sw          $zero, 0x188($sp)
    MEM_W(0X188, ctx->r29) = 0;
    // 0x1519A1CC: sw          $t8, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r24;
    // 0x1519A1D0: sw          $t4, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r12;
    // 0x1519A1D4: sb          $zero, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = 0;
    // 0x1519A1D8: sb          $t2, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = ctx->r10;
    // 0x1519A1DC: sh          $t5, 0x1D6($sp)
    MEM_H(0X1D6, ctx->r29) = ctx->r13;
    // 0x1519A1E0: sw          $t6, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r14;
    // 0x1519A1E4: sb          $t1, 0x1DC($sp)
    MEM_B(0X1DC, ctx->r29) = ctx->r9;
    // 0x1519A1E8: sb          $t7, 0x1C0($sp)
    MEM_B(0X1C0, ctx->r29) = ctx->r15;
    // 0x1519A1EC: sb          $t9, 0x1C1($sp)
    MEM_B(0X1C1, ctx->r29) = ctx->r25;
    // 0x1519A1F0: sb          $t3, 0x1C2($sp)
    MEM_B(0X1C2, ctx->r29) = ctx->r11;
    // 0x1519A1F4: swc1        $f8, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f8.u32l;
    // 0x1519A1F8: lh          $t8, 0xD0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD0);
    // 0x1519A1FC: sh          $t8, 0x1C4($sp)
    MEM_H(0X1C4, ctx->r29) = ctx->r24;
    // 0x1519A200: lh          $t4, 0xD2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD2);
    // 0x1519A204: sh          $t4, 0x1C6($sp)
    MEM_H(0X1C6, ctx->r29) = ctx->r12;
L_1519A208:
    // 0x1519A208: jal         0x150ADA20
    // 0x1519A20C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1519A20C: nop

    after_4:
    // 0x1519A210: lw          $t2, 0xA8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA8);
    // 0x1519A214: lw          $t1, 0xA4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA4);
    // 0x1519A218: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x1519A21C: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x1519A220: mfhi        $t6
    ctx->r14 = hi;
    // 0x1519A224: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x1519A228: bne         $t5, $zero, L_1519A234
    if (ctx->r13 != 0) {
        // 0x1519A22C: nop
    
            goto L_1519A234;
    }
    // 0x1519A22C: nop

    // 0x1519A230: break       7
    do_break(354001456);
L_1519A234:
    // 0x1519A234: sb          $t7, 0x1DD($sp)
    MEM_B(0X1DD, ctx->r29) = ctx->r15;
    // 0x1519A238: jal         0x150ADA20
    // 0x1519A23C: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1519A23C: nop

    after_5:
    // 0x1519A240: lh          $t9, 0xAE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XAE);
    // 0x1519A244: lh          $t4, 0xAC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XAC);
    // 0x1519A248: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x1519A24C: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x1519A250: mfhi        $t8
    ctx->r24 = hi;
    // 0x1519A254: addu        $t2, $t8, $t4
    ctx->r10 = ADD32(ctx->r24, ctx->r12);
    // 0x1519A258: bne         $t3, $zero, L_1519A264
    if (ctx->r11 != 0) {
        // 0x1519A25C: nop
    
            goto L_1519A264;
    }
    // 0x1519A25C: nop

    // 0x1519A260: break       7
    do_break(354001504);
L_1519A264:
    // 0x1519A264: sh          $t2, 0x1D4($sp)
    MEM_H(0X1D4, ctx->r29) = ctx->r10;
    // 0x1519A268: jal         0x150ADA68
    // 0x1519A26C: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1519A26C: nop

    after_6:
    // 0x1519A270: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x1519A274: lwc1        $f4, 0xB0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x1519A278: addiu       $a0, $sp, 0x17C
    ctx->r4 = ADD32(ctx->r29, 0X17C);
    // 0x1519A27C: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1519A280: addiu       $t6, $sp, 0x298
    ctx->r14 = ADD32(ctx->r29, 0X298);
    // 0x1519A284: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519A288: swc1        $f8, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f8.u32l;
    // 0x1519A28C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1519A290: addiu       $t5, $sp, 0x1C8
    ctx->r13 = ADD32(ctx->r29, 0X1C8);
    // 0x1519A294: addiu       $t3, $sp, 0x280
    ctx->r11 = ADD32(ctx->r29, 0X280);
    // 0x1519A298: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1519A29C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x1519A2A0: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    // 0x1519A2A4: addiu       $a2, $sp, 0x164
    ctx->r6 = ADD32(ctx->r29, 0X164);
    // 0x1519A2A8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x1519A2AC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x1519A2B0: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1519A2B4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1519A2B8: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x1519A2BC: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x1519A2C0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x1519A2C4: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1519A2C8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x1519A2CC: lwc1        $f10, 0x17C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x1519A2D0: lwc1        $f6, 0x1C8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x1519A2D4: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    // 0x1519A2D8: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519A2DC: lwc1        $f10, 0x1CC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x1519A2E0: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519A2E4: swc1        $f4, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f4.u32l;
    // 0x1519A2E8: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x1519A2EC: lwc1        $f8, 0x1D0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x1519A2F0: swc1        $f6, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f6.u32l;
    // 0x1519A2F4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1519A2F8: jal         0x15146078
    // 0x1519A2FC: swc1        $f10, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f10.u32l;
    func_15146078(rdram, ctx);
        goto after_7;
    // 0x1519A2FC: swc1        $f10, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x1519A300: beql        $v0, $zero, L_1519A4E0
    if (ctx->r2 == 0) {
        // 0x1519A304: lwc1        $f8, 0x138($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X138);
            goto L_1519A4E0;
    }
    goto skip_8;
    // 0x1519A304: lwc1        $f8, 0x138($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X138);
    skip_8:
    // 0x1519A308: jal         0x150ADA68
    // 0x1519A30C: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1519A30C: nop

    after_8:
    // 0x1519A310: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x1519A314: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x1519A318: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1519A31C: jal         0x150ADA20
    // 0x1519A320: add.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1519A320: add.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f8.fl;
    after_9:
    // 0x1519A324: jal         0x150ADA68
    // 0x1519A328: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1519A328: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_10:
    // 0x1519A32C: lwc1        $f10, 0xC0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x1519A330: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1519A334: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1519A338: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1519A33C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1519A340: addiu       $a2, $sp, 0x15C
    ctx->r6 = ADD32(ctx->r29, 0X15C);
    // 0x1519A344: addiu       $a3, $sp, 0x160
    ctx->r7 = ADD32(ctx->r29, 0X160);
    // 0x1519A348: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1519A34C: jal         0x15143874
    // 0x1519A350: nop

    func_15143874(rdram, ctx);
        goto after_11;
    // 0x1519A350: nop

    after_11:
    // 0x1519A354: lwc1        $f0, 0x15C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x1519A358: lwc1        $f4, 0x170($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X170);
    // 0x1519A35C: lwc1        $f2, 0x160($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X160);
    // 0x1519A360: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x1519A364: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519A368: nop

    // 0x1519A36C: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1519A370: lwc1        $f10, 0x17C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x1519A374: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1519A378: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519A37C: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x1519A380: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1519A384: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    // 0x1519A388: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519A38C: swc1        $f6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f6.u32l;
    // 0x1519A390: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1519A394: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    // 0x1519A398: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519A39C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519A3A0: lwc1        $f4, 0x178($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X178);
    // 0x1519A3A4: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1519A3A8: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x1519A3AC: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519A3B0: swc1        $f6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f6.u32l;
    // 0x1519A3B4: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1519A3B8: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    // 0x1519A3BC: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1519A3C0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519A3C4: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1519A3C8: jal         0x150ADA68
    // 0x1519A3CC: swc1        $f6, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1519A3CC: swc1        $f6, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x1519A3D0: lwc1        $f4, 0xC8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x1519A3D4: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x1519A3D8: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519A3DC: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1519A3E0: jal         0x150ADA68
    // 0x1519A3E4: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x1519A3E4: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x1519A3E8: lh          $t5, 0xCE($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XCE);
    // 0x1519A3EC: lh          $t6, 0xCC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XCC);
    // 0x1519A3F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1519A3F4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1519A3F8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1519A3FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1519A400: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1519A404: addiu       $a0, $sp, 0x1C8
    ctx->r4 = ADD32(ctx->r29, 0X1C8);
    // 0x1519A408: addiu       $a1, $sp, 0x1A8
    ctx->r5 = ADD32(ctx->r29, 0X1A8);
    // 0x1519A40C: addiu       $t8, $sp, 0x188
    ctx->r24 = ADD32(ctx->r29, 0X188);
    // 0x1519A410: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1519A414: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1519A418: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519A41C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1519A420: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1519A424: nop

    // 0x1519A428: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1519A42C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1519A430: nop

    // 0x1519A434: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x1519A438: beql        $t4, $zero, L_1519A488
    if (ctx->r12 == 0) {
        // 0x1519A43C: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_1519A488;
    }
    goto skip_9;
    // 0x1519A43C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x1519A440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519A444: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1519A448: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519A44C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1519A450: nop

    // 0x1519A454: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1519A458: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1519A45C: nop

    // 0x1519A460: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x1519A464: bne         $t4, $zero, L_1519A47C
    if (ctx->r12 != 0) {
        // 0x1519A468: nop
    
            goto L_1519A47C;
    }
    // 0x1519A468: nop

    // 0x1519A46C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1519A470: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1519A474: b           L_1519A494
    // 0x1519A478: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_1519A494;
    // 0x1519A478: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_1519A47C:
    // 0x1519A47C: b           L_1519A494
    // 0x1519A480: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_1519A494;
    // 0x1519A480: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1519A484: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_1519A488:
    // 0x1519A488: nop

    // 0x1519A48C: bltz        $t4, L_1519A47C
    if (SIGNED(ctx->r12) < 0) {
        // 0x1519A490: nop
    
            goto L_1519A47C;
    }
    // 0x1519A490: nop

L_1519A494:
    // 0x1519A494: sb          $t4, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = ctx->r12;
    // 0x1519A498: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519A49C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1519A4A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1519A4A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519A4A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519A4AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1519A4B0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1519A4B4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1519A4B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1519A4BC: lbu         $t3, 0xC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0XC);
    // 0x1519A4C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1519A4C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519A4C8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1519A4CC: lbu         $t2, 0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X1);
    // 0x1519A4D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1519A4D4: jal         0x15147DA0
    // 0x1519A4D8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_15147DA0(rdram, ctx);
        goto after_14;
    // 0x1519A4D8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_14:
    // 0x1519A4DC: lwc1        $f8, 0x138($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X138);
L_1519A4E0:
    // 0x1519A4E0: sub.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x1519A4E4: swc1        $f4, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f4.u32l;
    // 0x1519A4E8: lwc1        $f10, 0x138($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X138);
    // 0x1519A4EC: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x1519A4F0: nop

    // 0x1519A4F4: bc1t        L_1519A208
    if (c1cs) {
        // 0x1519A4F8: nop
    
            goto L_1519A208;
    }
    // 0x1519A4F8: nop

    // 0x1519A4FC: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
L_1519A500:
    // 0x1519A500: lw          $t7, 0x1D4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1D4);
    // 0x1519A504: beq         $t7, $zero, L_1519A858
    if (ctx->r15 == 0) {
        // 0x1519A508: nop
    
            goto L_1519A858;
    }
    // 0x1519A508: nop

    // 0x1519A50C: lbu         $t1, 0x74($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X74);
    // 0x1519A510: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1519A514: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x1519A518: beq         $t5, $at, L_1519A858
    if (ctx->r13 == ctx->r1) {
        // 0x1519A51C: nop
    
            goto L_1519A858;
    }
    // 0x1519A51C: nop

    // 0x1519A520: jal         0x150ADA68
    // 0x1519A524: nop

    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x1519A524: nop

    after_15:
    // 0x1519A528: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x1519A52C: lwc1        $f6, 0xE0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x1519A530: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519A534: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1519A538: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1519A53C: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x1519A540: lui         $t8, 0x1F
    ctx->r24 = S32(0X1F << 16);
    // 0x1519A544: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x1519A548: addiu       $t9, $zero, 0x2203
    ctx->r25 = ADD32(0, 0X2203);
    // 0x1519A54C: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x1519A550: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519A554: lwc1        $f4, 0x13C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X13C);
    // 0x1519A558: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x1519A55C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1519A560: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1519A564: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1519A568: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1519A56C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1519A570: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1519A574: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519A578: swc1        $f10, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f10.u32l;
    // 0x1519A57C: lwc1        $f8, 0x13C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X13C);
    // 0x1519A580: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x1519A584: nop

    // 0x1519A588: bc1f        L_1519A858
    if (!c1cs) {
        // 0x1519A58C: nop
    
            goto L_1519A858;
    }
    // 0x1519A58C: nop

    // 0x1519A590: sb          $t6, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r14;
    // 0x1519A594: sh          $t9, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r25;
    // 0x1519A598: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x1519A59C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1519A5A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1519A5A4: sw          $t4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r12;
    // 0x1519A5A8: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x1519A5AC: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    // 0x1519A5B0: sb          $t3, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r11;
    // 0x1519A5B4: sb          $t2, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r10;
    // 0x1519A5B8: sb          $t7, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r15;
    // 0x1519A5BC: sb          $t1, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r9;
    // 0x1519A5C0: sb          $t5, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r13;
    // 0x1519A5C4: sb          $t6, 0x101($sp)
    MEM_B(0X101, ctx->r29) = ctx->r14;
    // 0x1519A5C8: sb          $t9, 0x102($sp)
    MEM_B(0X102, ctx->r29) = ctx->r25;
    // 0x1519A5CC: addiu       $t8, $sp, 0x298
    ctx->r24 = ADD32(ctx->r29, 0X298);
    // 0x1519A5D0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1519A5D4: addiu       $t4, $sp, 0x118
    ctx->r12 = ADD32(ctx->r29, 0X118);
    // 0x1519A5D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1519A5DC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x1519A5E0: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x1519A5E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1519A5E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1519A5EC: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x1519A5F0: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1519A5F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1519A5F8: ori         $t9, $zero, 0xC207
    ctx->r25 = 0 | 0XC207;
    // 0x1519A5FC: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x1519A600: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x1519A604: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    // 0x1519A608: swc1        $f10, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f10.u32l;
    // 0x1519A60C: lh          $t1, 0x10C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X10C);
    // 0x1519A610: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x1519A614: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x1519A618: sh          $t1, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r9;
    // 0x1519A61C: lh          $t5, 0x10E($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X10E);
    // 0x1519A620: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1519A624: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1519A628: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1519A62C: sh          $t6, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r14;
    // 0x1519A630: swc1        $f22, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f22.u32l;
    // 0x1519A634: sw          $t9, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r25;
    // 0x1519A638: sb          $t2, 0x148($sp)
    MEM_B(0X148, ctx->r29) = ctx->r10;
    // 0x1519A63C: sb          $t3, 0x149($sp)
    MEM_B(0X149, ctx->r29) = ctx->r11;
    // 0x1519A640: sb          $t4, 0x14A($sp)
    MEM_B(0X14A, ctx->r29) = ctx->r12;
    // 0x1519A644: sb          $t8, 0x14B($sp)
    MEM_B(0X14B, ctx->r29) = ctx->r24;
    // 0x1519A648: sb          $t7, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = ctx->r15;
    // 0x1519A64C: sb          $zero, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = 0;
    // 0x1519A650: sh          $t5, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r13;
L_1519A654:
    // 0x1519A654: jal         0x150ADA20
    // 0x1519A658: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x1519A658: nop

    after_16:
    // 0x1519A65C: lh          $t1, 0xEA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XEA);
    // 0x1519A660: lh          $t9, 0xE8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE8);
    // 0x1519A664: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x1519A668: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x1519A66C: mfhi        $t6
    ctx->r14 = hi;
    // 0x1519A670: addu        $t2, $t6, $t9
    ctx->r10 = ADD32(ctx->r14, ctx->r25);
    // 0x1519A674: bne         $t5, $zero, L_1519A680
    if (ctx->r13 != 0) {
        // 0x1519A678: nop
    
            goto L_1519A680;
    }
    // 0x1519A678: nop

    // 0x1519A67C: break       7
    do_break(354002556);
L_1519A680:
    // 0x1519A680: sh          $t2, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r10;
    // 0x1519A684: jal         0x150ADA20
    // 0x1519A688: nop

    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1519A688: nop

    after_17:
    // 0x1519A68C: lh          $t3, 0xEE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XEE);
    // 0x1519A690: lh          $t7, 0xEC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XEC);
    // 0x1519A694: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1519A698: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1519A69C: mfhi        $t8
    ctx->r24 = hi;
    // 0x1519A6A0: addu        $t1, $t8, $t7
    ctx->r9 = ADD32(ctx->r24, ctx->r15);
    // 0x1519A6A4: bne         $t4, $zero, L_1519A6B0
    if (ctx->r12 != 0) {
        // 0x1519A6A8: nop
    
            goto L_1519A6B0;
    }
    // 0x1519A6A8: nop

    // 0x1519A6AC: break       7
    do_break(354002604);
L_1519A6B0:
    // 0x1519A6B0: sb          $t1, 0x103($sp)
    MEM_B(0X103, ctx->r29) = ctx->r9;
    // 0x1519A6B4: jal         0x150ADA68
    // 0x1519A6B8: nop

    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x1519A6B8: nop

    after_18:
    // 0x1519A6BC: lwc1        $f8, 0xF4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x1519A6C0: lwc1        $f6, 0xF0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x1519A6C4: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x1519A6C8: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1519A6CC: addiu       $t5, $sp, 0x274
    ctx->r13 = ADD32(ctx->r29, 0X274);
    // 0x1519A6D0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519A6D4: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x1519A6D8: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x1519A6DC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1519A6E0: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x1519A6E4: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    // 0x1519A6E8: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x1519A6EC: lw          $t2, 0x4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X4);
    // 0x1519A6F0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x1519A6F4: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1519A6F8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x1519A6FC: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1519A700: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x1519A704: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1519A708: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519A70C: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1519A710: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1519A714: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x1519A718: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1519A71C: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1519A720: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x1519A724: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1519A728: jal         0x15146078
    // 0x1519A72C: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    func_15146078(rdram, ctx);
        goto after_19;
    // 0x1519A72C: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x1519A730: beql        $v0, $zero, L_1519A83C
    if (ctx->r2 == 0) {
        // 0x1519A734: lwc1        $f6, 0x13C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X13C);
            goto L_1519A83C;
    }
    goto skip_10;
    // 0x1519A734: lwc1        $f6, 0x13C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X13C);
    skip_10:
    // 0x1519A738: jal         0x150ADA68
    // 0x1519A73C: nop

    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x1519A73C: nop

    after_20:
    // 0x1519A740: lwc1        $f4, 0xFC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x1519A744: lwc1        $f10, 0xF8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x1519A748: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519A74C: jal         0x150ADA20
    // 0x1519A750: add.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f10.fl;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x1519A750: add.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f10.fl;
    after_21:
    // 0x1519A754: jal         0x150ADA68
    // 0x1519A758: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_22;
    // 0x1519A758: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_22:
    // 0x1519A75C: lwc1        $f8, 0x100($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X100);
    // 0x1519A760: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1519A764: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x1519A768: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1519A76C: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1519A770: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    // 0x1519A774: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    // 0x1519A778: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1519A77C: jal         0x15143874
    // 0x1519A780: nop

    func_15143874(rdram, ctx);
        goto after_23;
    // 0x1519A780: nop

    after_23:
    // 0x1519A784: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1519A788: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1519A78C: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x1519A790: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1519A794: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519A798: nop

    // 0x1519A79C: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1519A7A0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1519A7A4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1519A7A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519A7AC: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x1519A7B0: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1519A7B4: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1519A7B8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519A7BC: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    // 0x1519A7C0: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1519A7C4: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1519A7C8: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519A7CC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1519A7D0: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1519A7D4: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1519A7D8: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1519A7DC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519A7E0: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    // 0x1519A7E4: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1519A7E8: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1519A7EC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1519A7F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519A7F4: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x1519A7F8: jal         0x150ADA68
    // 0x1519A7FC: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_24;
    // 0x1519A7FC: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    after_24:
    // 0x1519A800: lwc1        $f6, 0x108($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X108);
    // 0x1519A804: lwc1        $f10, 0x104($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X104);
    // 0x1519A808: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x1519A80C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1519A810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1519A814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519A818: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519A81C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519A820: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    // 0x1519A824: lbu         $t8, 0xC($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XC);
    // 0x1519A828: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1519A82C: lbu         $t7, 0x1($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1);
    // 0x1519A830: jal         0x15130280
    // 0x1519A834: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_15130280(rdram, ctx);
        goto after_25;
    // 0x1519A834: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_25:
    // 0x1519A838: lwc1        $f6, 0x13C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X13C);
L_1519A83C:
    // 0x1519A83C: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x1519A840: swc1        $f8, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f8.u32l;
    // 0x1519A844: lwc1        $f10, 0x13C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X13C);
    // 0x1519A848: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x1519A84C: nop

    // 0x1519A850: bc1t        L_1519A654
    if (c1cs) {
        // 0x1519A854: nop
    
            goto L_1519A654;
    }
    // 0x1519A854: nop

L_1519A858:
    // 0x1519A858: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1519A85C: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x1519A860: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x1519A864: lb          $t1, 0x151($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X151);
    // 0x1519A868: lw          $a0, 0x2A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A4);
    // 0x1519A86C: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x1519A870: sb          $t6, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r14;
    // 0x1519A874: lb          $t5, 0x151($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X151);
    // 0x1519A878: slti        $at, $t5, 0x3D
    ctx->r1 = SIGNED(ctx->r13) < 0X3D ? 1 : 0;
    // 0x1519A87C: bnel        $at, $zero, L_1519A8B0
    if (ctx->r1 != 0) {
        // 0x1519A880: lbu         $t4, 0x150($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X150);
            goto L_1519A8B0;
    }
    goto skip_11;
    // 0x1519A880: lbu         $t4, 0x150($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X150);
    skip_11:
    // 0x1519A884: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x1519A888: beql        $v1, $zero, L_1519A8AC
    if (ctx->r3 == 0) {
        // 0x1519A88C: sb          $zero, 0x151($s0)
        MEM_B(0X151, ctx->r16) = 0;
            goto L_1519A8AC;
    }
    goto skip_12;
    // 0x1519A88C: sb          $zero, 0x151($s0)
    MEM_B(0X151, ctx->r16) = 0;
    skip_12:
    // 0x1519A890: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
    // 0x1519A894: beql        $v0, $zero, L_1519A8AC
    if (ctx->r2 == 0) {
        // 0x1519A898: sb          $zero, 0x151($s0)
        MEM_B(0X151, ctx->r16) = 0;
            goto L_1519A8AC;
    }
    goto skip_13;
    // 0x1519A898: sb          $zero, 0x151($s0)
    MEM_B(0X151, ctx->r16) = 0;
    skip_13:
    // 0x1519A89C: lh          $t2, 0x1AA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X1AA);
    // 0x1519A8A0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1519A8A4: sh          $t3, 0x1AA($v0)
    MEM_H(0X1AA, ctx->r2) = ctx->r11;
    // 0x1519A8A8: sb          $zero, 0x151($s0)
    MEM_B(0X151, ctx->r16) = 0;
L_1519A8AC:
    // 0x1519A8AC: lbu         $t4, 0x150($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X150);
L_1519A8B0:
    // 0x1519A8B0: andi        $t8, $t4, 0x8
    ctx->r24 = ctx->r12 & 0X8;
    // 0x1519A8B4: beql        $t8, $zero, L_1519A984
    if (ctx->r24 == 0) {
        // 0x1519A8B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519A984;
    }
    goto skip_14;
    // 0x1519A8B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_14:
    // 0x1519A8BC: lw          $t7, 0x318($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X318);
    // 0x1519A8C0: beql        $t7, $zero, L_1519A984
    if (ctx->r15 == 0) {
        // 0x1519A8C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519A984;
    }
    goto skip_15;
    // 0x1519A8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_15:
    // 0x1519A8C8: lh          $t1, 0x152($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X152);
    // 0x1519A8CC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x1519A8D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1519A8D4: subu        $t6, $t1, $t9
    ctx->r14 = SUB32(ctx->r9, ctx->r25);
    // 0x1519A8D8: sh          $t6, 0x152($s0)
    MEM_H(0X152, ctx->r16) = ctx->r14;
    // 0x1519A8DC: lh          $t5, 0x152($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X152);
    // 0x1519A8E0: bgezl       $t5, L_1519A984
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1519A8E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519A984;
    }
    goto skip_16;
    // 0x1519A8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_16:
    // 0x1519A8E8: jal         0x150ADA20
    // 0x1519A8EC: sb          $t2, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_26;
    // 0x1519A8EC: sb          $t2, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r10;
    after_26:
    // 0x1519A8F0: addiu       $s1, $zero, 0x15
    ctx->r17 = ADD32(0, 0X15);
    // 0x1519A8F4: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x1519A8F8: lw          $t8, 0x2A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2A4);
    // 0x1519A8FC: mfhi        $t3
    ctx->r11 = hi;
    // 0x1519A900: addiu       $t4, $t3, 0x14
    ctx->r12 = ADD32(ctx->r11, 0X14);
    // 0x1519A904: sh          $t4, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r12;
    // 0x1519A908: lw          $t7, 0x318($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X318);
    // 0x1519A90C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1519A910: bne         $s1, $zero, L_1519A91C
    if (ctx->r17 != 0) {
        // 0x1519A914: nop
    
            goto L_1519A91C;
    }
    // 0x1519A914: nop

    // 0x1519A918: break       7
    do_break(354003224);
L_1519A91C:
    // 0x1519A91C: lbu         $t1, 0x23D($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X23D);
    // 0x1519A920: sllv        $t6, $t9, $t1
    ctx->r14 = S32(ctx->r25 << (ctx->r9 & 31));
    // 0x1519A924: jal         0x150ADA20
    // 0x1519A928: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_27;
    // 0x1519A928: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    after_27:
    // 0x1519A92C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1519A930: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1519A934: mfhi        $t5
    ctx->r13 = hi;
    // 0x1519A938: addiu       $t2, $t5, 0x2
    ctx->r10 = ADD32(ctx->r13, 0X2);
    // 0x1519A93C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1519A940: sb          $t2, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r10;
    // 0x1519A944: sb          $t3, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r11;
    // 0x1519A948: lbu         $a3, 0x1($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X1);
    // 0x1519A94C: lbu         $a2, 0xC($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0XC);
    // 0x1519A950: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x1519A954: jal         0x151D8868
    // 0x1519A958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_28;
    // 0x1519A958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x1519A95C: jal         0x150ADA20
    // 0x1519A960: nop

    func_150ADA20(rdram, ctx);
        goto after_29;
    // 0x1519A960: nop

    after_29:
    // 0x1519A964: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x1519A968: mfhi        $t4
    ctx->r12 = hi;
    // 0x1519A96C: addiu       $t8, $t4, 0x78
    ctx->r24 = ADD32(ctx->r12, 0X78);
    // 0x1519A970: sh          $t8, 0x152($s0)
    MEM_H(0X152, ctx->r16) = ctx->r24;
    // 0x1519A974: bne         $s1, $zero, L_1519A980
    if (ctx->r17 != 0) {
        // 0x1519A978: nop
    
            goto L_1519A980;
    }
    // 0x1519A978: nop

    // 0x1519A97C: break       7
    do_break(354003324);
L_1519A980:
    // 0x1519A980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519A984:
    // 0x1519A984: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1519A988: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1519A98C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1519A990: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x1519A994: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x1519A998: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x1519A99C: jr          $ra
    // 0x1519A9A0: addiu       $sp, $sp, 0x2B0
    ctx->r29 = ADD32(ctx->r29, 0X2B0);
    return;
    return;
    // 0x1519A9A0: addiu       $sp, $sp, 0x2B0
    ctx->r29 = ADD32(ctx->r29, 0X2B0);
;}
RECOMP_FUNC void func_150470B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150470B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150470B4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150470B8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x150470BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150470C0: lbu         $t6, 0x1C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1C);
    // 0x150470C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150470C8: addiu       $a3, $a1, 0x4
    ctx->r7 = ADD32(ctx->r5, 0X4);
    // 0x150470CC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x150470D0: beq         $t7, $zero, L_15047148
    if (ctx->r15 == 0) {
        // 0x150470D4: addiu       $t8, $sp, 0x24
        ctx->r24 = ADD32(ctx->r29, 0X24);
            goto L_15047148;
    }
    // 0x150470D4: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x150470D8: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150470DC: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150470E0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x150470E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150470E8: jal         0x150A3FC4
    // 0x150470EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_150A3FC4(rdram, ctx);
        goto after_0;
    // 0x150470EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x150470F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150470F4: beq         $v0, $zero, L_15047148
    if (ctx->r2 == 0) {
        // 0x150470F8: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_15047148;
    }
    // 0x150470F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x150470FC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15047100: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15047104: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x15047108: nop

    // 0x1504710C: bc1f        L_15047140
    if (!c1cs) {
        // 0x15047110: nop
    
            goto L_15047140;
    }
    // 0x15047110: nop

    // 0x15047114: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15047118: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x1504711C: nop

    // 0x15047120: bc1f        L_15047140
    if (!c1cs) {
        // 0x15047124: nop
    
            goto L_15047140;
    }
    // 0x15047124: nop

    // 0x15047128: lbu         $t9, 0x1C($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X1C);
    // 0x1504712C: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x15047130: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x15047134: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x15047138: b           L_1504714C
    // 0x1504713C: sb          $t0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r8;
        goto L_1504714C;
    // 0x1504713C: sb          $t0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r8;
L_15047140:
    // 0x15047140: b           L_1504714C
    // 0x15047144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1504714C;
    // 0x15047144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15047148:
    // 0x15047148: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1504714C:
    // 0x1504714C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15047150: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15047154: jr          $ra
    // 0x15047158: nop

    return;
    return;
    // 0x15047158: nop

;}
RECOMP_FUNC void func_1510B51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B51C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1510B520: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1510B524: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1510B528: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1510B52C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1510B530: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1510B534: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1510B538: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1510B53C: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x1510B540: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1510B544: addiu       $s0, $s0, -0x6508
    ctx->r16 = ADD32(ctx->r16, -0X6508);
    // 0x1510B548: bltz        $v0, L_1510B5D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x1510B54C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1510B5D0;
    }
    // 0x1510B54C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1510B550: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1510B554: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1510B558: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1510B55C: addiu       $s3, $s3, -0x19D8
    ctx->r19 = ADD32(ctx->r19, -0X19D8);
    // 0x1510B560: addiu       $s2, $zero, 0x180
    ctx->r18 = ADD32(0, 0X180);
L_1510B564:
    // 0x1510B564: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1510B568: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x1510B56C: nop

    // 0x1510B570: bc1tl       L_1510B5C4
    if (c1cs) {
        // 0x1510B574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1510B5C4;
    }
    goto skip_0;
    // 0x1510B574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1510B578: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510B57C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x1510B580: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1510B584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1510B588: mflo        $v1
    ctx->r3 = lo;
    // 0x1510B58C: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x1510B590: lw          $a2, 0x78($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X78);
    // 0x1510B594: lw          $a3, 0x74($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X74);
    // 0x1510B598: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1510B59C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x1510B5A0: lwc1        $f6, 0x84($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X84);
    // 0x1510B5A4: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
    // 0x1510B5A8: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x1510B5AC: jal         0x1510B5F8
    // 0x1510B5B0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_1510B5F8(rdram, ctx);
        goto after_0;
    // 0x1510B5B0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1510B5B4: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x1510B5B8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1510B5BC: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x1510B5C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1510B5C4:
    // 0x1510B5C4: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1510B5C8: beq         $at, $zero, L_1510B564
    if (ctx->r1 == 0) {
        // 0x1510B5CC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_1510B564;
    }
    // 0x1510B5CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_1510B5D0:
    // 0x1510B5D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510B5D4: sb          $zero, -0x64E8($at)
    MEM_B(-0X64E8, ctx->r1) = 0;
    // 0x1510B5D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1510B5DC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1510B5E0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1510B5E4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1510B5E8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1510B5EC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1510B5F0: jr          $ra
    // 0x1510B5F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1510B5F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150E7290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E7290: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150E7294: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150E7298: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x150E729C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150E72A0: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x150E72A4: jal         0x150ADA68
    // 0x150E72A8: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E72A8: nop

    after_0:
    // 0x150E72AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E72B0: lwc1        $f4, 0x1340($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1340);
    // 0x150E72B4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150E72B8: addiu       $t7, $t7, -0x75A4
    ctx->r15 = ADD32(ctx->r15, -0X75A4);
    // 0x150E72BC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150E72C0: nop

    // 0x150E72C4: bc1fl       L_150E7594
    if (!c1cs) {
        // 0x150E72C8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_150E7594;
    }
    goto skip_0;
    // 0x150E72C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x150E72CC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150E72D0: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x150E72D4: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x150E72D8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150E72DC: jal         0x150ADA68
    // 0x150E72E0: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150E72E0: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_1:
    // 0x150E72E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E72E8: lwc1        $f6, 0x1344($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1344);
    // 0x150E72EC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150E72F0: nop

    // 0x150E72F4: bc1f        L_150E744C
    if (!c1cs) {
        // 0x150E72F8: nop
    
            goto L_150E744C;
    }
    // 0x150E72F8: nop

    // 0x150E72FC: jal         0x150ADA68
    // 0x150E7300: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150E7300: nop

    after_2:
    // 0x150E7304: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150E7308: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E730C: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x150E7310: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E7314: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150E7318: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150E731C: jal         0x150ADA68
    // 0x150E7320: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150E7320: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150E7324: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E7328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E732C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x150E7330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E7334: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E7338: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E733C: jal         0x150ADA68
    // 0x150E7340: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E7340: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x150E7344: jal         0x150ADA20
    // 0x150E7348: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150E7348: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x150E734C: jal         0x150ADA20
    // 0x150E7350: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E7350: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_6:
    // 0x150E7354: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150E7358: beq         $t1, $zero, L_150E7368
    if (ctx->r9 == 0) {
        // 0x150E735C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_150E7368;
    }
    // 0x150E735C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150E7360: b           L_150E7368
    // 0x150E7364: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
        goto L_150E7368;
    // 0x150E7364: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_150E7368:
    // 0x150E7368: jal         0x150ADA20
    // 0x150E736C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150E736C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_7:
    // 0x150E7370: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x150E7374: beq         $t2, $zero, L_150E7384
    if (ctx->r10 == 0) {
        // 0x150E7378: lw          $t0, 0x44($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X44);
            goto L_150E7384;
    }
    // 0x150E7378: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x150E737C: b           L_150E7388
    // 0x150E7380: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_150E7388;
    // 0x150E7380: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_150E7384:
    // 0x150E7384: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150E7388:
    // 0x150E7388: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x150E738C: jal         0x150ADA20
    // 0x150E7390: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150E7390: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_8:
    // 0x150E7394: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150E7398: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E739C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E73A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E73A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150E73A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E73AC: lwc1        $f10, 0x1348($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1348);
    // 0x150E73B0: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x150E73B4: divu        $zero, $a2, $at
    lo = S32(U32(ctx->r6) / U32(ctx->r1)); hi = S32(U32(ctx->r6) % U32(ctx->r1));
    // 0x150E73B8: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E73BC: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150E73C0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150E73C4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E73C8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150E73CC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x150E73D0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x150E73D4: addiu       $a2, $t3, 0x1F4
    ctx->r6 = ADD32(ctx->r11, 0X1F4);
    // 0x150E73D8: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x150E73DC: or          $t8, $v1, $t0
    ctx->r24 = ctx->r3 | ctx->r8;
    // 0x150E73E0: ori         $t6, $t8, 0x9
    ctx->r14 = ctx->r24 | 0X9;
    // 0x150E73E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E73E8: andi        $a3, $t6, 0xFF
    ctx->r7 = ctx->r14 & 0XFF;
    // 0x150E73EC: lbu         $t6, 0x6F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6F);
    // 0x150E73F0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x150E73F4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150E73F8: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150E73FC: mfhi        $t9
    ctx->r25 = hi;
    // 0x150E7400: addiu       $t1, $t9, 0x64
    ctx->r9 = ADD32(ctx->r25, 0X64);
    // 0x150E7404: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150E7408: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150E740C: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x150E7410: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150E7414: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150E7418: addiu       $t5, $sp, 0x60
    ctx->r13 = ADD32(ctx->r29, 0X60);
    // 0x150E741C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150E7420: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150E7424: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150E7428: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150E742C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x150E7430: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150E7434: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x150E7438: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150E743C: jal         0x150E75A0
    // 0x150E7440: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    func_150E75A0(rdram, ctx);
        goto after_9;
    // 0x150E7440: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    after_9:
    // 0x150E7444: b           L_150E7504
    // 0x150E7448: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
        goto L_150E7504;
    // 0x150E7448: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
L_150E744C:
    // 0x150E744C: jal         0x150ADA68
    // 0x150E7450: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150E7450: nop

    after_10:
    // 0x150E7454: jal         0x150ADA20
    // 0x150E7458: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150E7458: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x150E745C: jal         0x150ADA20
    // 0x150E7460: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150E7460: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_12:
    // 0x150E7464: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150E7468: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E746C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150E7470: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E7474: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x150E7478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E747C: lwc1        $f16, 0x134C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X134C);
    // 0x150E7480: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x150E7484: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x150E7488: mfhi        $a1
    ctx->r5 = hi;
    // 0x150E748C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150E7490: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150E7494: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E7498: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150E749C: addiu       $a1, $a1, 0x1F4
    ctx->r5 = ADD32(ctx->r5, 0X1F4);
    // 0x150E74A0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x150E74A4: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150E74A8: mfhi        $a3
    ctx->r7 = hi;
    // 0x150E74AC: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x150E74B0: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x150E74B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E74B8: addiu       $a3, $a3, 0x64
    ctx->r7 = ADD32(ctx->r7, 0X64);
    // 0x150E74BC: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x150E74C0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150E74C4: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x150E74C8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150E74CC: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x150E74D0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150E74D4: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150E74D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150E74DC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150E74E0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150E74E4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150E74E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150E74EC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x150E74F0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x150E74F4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150E74F8: jal         0x150E76D0
    // 0x150E74FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_150E76D0(rdram, ctx);
        goto after_13;
    // 0x150E74FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_13:
    // 0x150E7500: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
L_150E7504:
    // 0x150E7504: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150E7508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E750C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E7510: jal         0x10010F30
    // 0x150E7514: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_14;
    // 0x150E7514: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x150E7518: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x150E751C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E7520: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x150E7524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E7528: lbu         $a3, 0x6F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6F);
    // 0x150E752C: jal         0x15164F0C
    // 0x150E7530: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15164F0C(rdram, ctx);
        goto after_15;
    // 0x150E7530: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_15:
    // 0x150E7534: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150E7538: jal         0x150ADA20
    // 0x150E753C: sb          $t2, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x150E753C: sb          $t2, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r10;
    after_16:
    // 0x150E7540: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150E7544: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E7548: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E754C: addiu       $t4, $t3, 0x19
    ctx->r12 = ADD32(ctx->r11, 0X19);
    // 0x150E7550: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150E7554: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
    // 0x150E7558: jal         0x150ADA20
    // 0x150E755C: sb          $t5, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x150E755C: sb          $t5, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r13;
    after_17:
    // 0x150E7560: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150E7564: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E7568: mfhi        $t8
    ctx->r24 = hi;
    // 0x150E756C: addiu       $t6, $t8, 0x3
    ctx->r14 = ADD32(ctx->r24, 0X3);
    // 0x150E7570: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150E7574: sb          $t6, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r14;
    // 0x150E7578: sb          $t7, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r15;
    // 0x150E757C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150E7580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E7584: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150E7588: jal         0x151D8868
    // 0x150E758C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_18;
    // 0x150E758C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x150E7590: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150E7594:
    // 0x150E7594: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x150E7598: jr          $ra
    // 0x150E759C: nop

    return;
    return;
    // 0x150E759C: nop

;}
RECOMP_FUNC void func_1518E4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518E4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518E4D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1518E4D8: jal         0x1518E4A0
    // 0x1518E4DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1518E4A0(rdram, ctx);
        goto after_0;
    // 0x1518E4DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1518E4E0: jal         0x15169804
    // 0x1518E4E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x1518E4E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1518E4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518E4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518E4F0: jr          $ra
    // 0x1518E4F4: nop

    return;
    return;
    // 0x1518E4F4: nop

;}
RECOMP_FUNC void func_15183C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15183C28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15183C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15183C30: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15183C34: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x15183C38: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x15183C3C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15183C40: addiu       $t7, $t7, -0x2180
    ctx->r15 = ADD32(ctx->r15, -0X2180);
    // 0x15183C44: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15183C48: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x15183C4C: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x15183C50: beq         $a1, $zero, L_15183C70
    if (ctx->r5 == 0) {
        // 0x15183C54: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_15183C70;
    }
    // 0x15183C54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15183C58: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15183C5C: jal         0x1510D630
    // 0x15183C60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_1510D630(rdram, ctx);
        goto after_0;
    // 0x15183C60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x15183C64: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15183C68: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15183C6C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_15183C70:
    // 0x15183C70: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15183C74: bne         $a2, $at, L_15183C94
    if (ctx->r6 != ctx->r1) {
        // 0x15183C78: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_15183C94;
    }
    // 0x15183C78: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15183C7C: lb          $t8, -0x208F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X208F);
    // 0x15183C80: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15183C84: beql        $t8, $at, L_15183CE8
    if (ctx->r24 == ctx->r1) {
        // 0x15183C88: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_15183CE8;
    }
    goto skip_0;
    // 0x15183C88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x15183C8C: b           L_15183D1C
    // 0x15183C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15183D1C;
    // 0x15183C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15183C94:
    // 0x15183C94: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15183C98: bne         $a2, $at, L_15183CE4
    if (ctx->r6 != ctx->r1) {
        // 0x15183C9C: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_15183CE4;
    }
    // 0x15183C9C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15183CA0: lb          $t9, -0x2090($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X2090);
    // 0x15183CA4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15183CA8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15183CAC: bnel        $t9, $at, L_15183CE8
    if (ctx->r25 != ctx->r1) {
        // 0x15183CB0: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_15183CE8;
    }
    goto skip_1;
    // 0x15183CB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x15183CB4: lw          $v0, -0x20E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X20E0);
    // 0x15183CB8: beq         $v0, $zero, L_15183CE4
    if (ctx->r2 == 0) {
        // 0x15183CBC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15183CE4;
    }
    // 0x15183CBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15183CC0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15183CC4: jal         0x10004074
    // 0x15183CC8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x15183CC8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x15183CCC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183CD0: sw          $zero, -0x20E0($at)
    MEM_W(-0X20E0, ctx->r1) = 0;
    // 0x15183CD4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183CD8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15183CDC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15183CE0: sw          $zero, -0x2068($at)
    MEM_W(-0X2068, ctx->r1) = 0;
L_15183CE4:
    // 0x15183CE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_15183CE8:
    // 0x15183CE8: beq         $v0, $zero, L_15183D18
    if (ctx->r2 == 0) {
        // 0x15183CEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15183D18;
    }
    // 0x15183CEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15183CF0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15183CF4: jal         0x10004074
    // 0x15183CF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x15183CF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x15183CFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15183D00: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15183D04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183D08: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x15183D0C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x15183D10: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x15183D14: sw          $zero, -0x2088($at)
    MEM_W(-0X2088, ctx->r1) = 0;
L_15183D18:
    // 0x15183D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15183D1C:
    // 0x15183D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15183D20: jr          $ra
    // 0x15183D24: nop

    return;
    return;
    // 0x15183D24: nop

;}
RECOMP_FUNC void func_150F25A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F25A0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150F25A4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150F25A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150F25AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F25B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F25B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150F25B8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x150F25BC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150F25C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x150F25C4: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150F25C8: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x150F25CC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150F25D0: nop

    // 0x150F25D4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150F25D8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150F25DC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150F25E0: jal         0x150A8050
    // 0x150F25E4: nop

    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x150F25E4: nop

    after_0:
    // 0x150F25E8: addiu       $v0, $s0, 0x18
    ctx->r2 = ADD32(ctx->r16, 0X18);
    // 0x150F25EC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x150F25F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F25F4: lui         $a2, 0xC3F7
    ctx->r6 = S32(0XC3F7 << 16);
    // 0x150F25F8: lwc1        $f16, 0x38($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X38);
    // 0x150F25FC: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x150F2600: addiu       $t0, $sp, 0x7C
    ctx->r8 = ADD32(ctx->r29, 0X7C);
    // 0x150F2604: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150F2608: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150F260C: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
    // 0x150F2610: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150F2614: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x150F2618: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150F261C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x150F2620: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x150F2624: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x150F2628: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150F262C: lwc1        $f4, 0x40($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X40);
    // 0x150F2630: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F2634: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150F2638: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150F263C: jal         0x150A7960
    // 0x150F2640: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x150F2640: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150F2644: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150F2648: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x150F264C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F2650: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F2654: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150F2658: nop

    // 0x150F265C: sh          $t3, 0xE($t4)
    MEM_H(0XE, ctx->r12) = ctx->r11;
    // 0x150F2660: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150F2664: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x150F2668: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F266C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x150F2670: nop

    // 0x150F2674: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    // 0x150F2678: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150F267C: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x150F2680: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150F2684: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150F2688: nop

    // 0x150F268C: sh          $t9, 0x12($t0)
    MEM_H(0X12, ctx->r8) = ctx->r25;
    // 0x150F2690: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F2694: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150F2698: jr          $ra
    // 0x150F269C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x150F269C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_10016F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10016F00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10016F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10016F08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10016F0C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10016F10: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x10016F14: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x10016F18: jal         0x10019AB0
    // 0x10016F1C: lb          $a0, 0x5($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X5);
    alCents2Ratio(rdram, ctx);
        goto after_0;
    // 0x10016F1C: lb          $a0, 0x5($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X5);
    after_0:
    // 0x10016F20: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10016F24: lwc1        $f4, 0x34($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X34);
    // 0x10016F28: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x10016F2C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x10016F30: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x10016F34: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
    // 0x10016F38: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10016F3C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x10016F40: addiu       $t2, $sp, 0x1C
    ctx->r10 = ADD32(ctx->r29, 0X1C);
    // 0x10016F44: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x10016F48: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x10016F4C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10016F50: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x10016F54: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x10016F58: ori         $a2, $zero, 0x8235
    ctx->r6 = 0 | 0X8235;
    // 0x10016F5C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10016F60: jal         0x1001C224
    // 0x10016F64: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10016F64: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x10016F68: b           L_10016F70
    // 0x10016F6C: nop

        goto L_10016F70;
    // 0x10016F6C: nop

L_10016F70:
    // 0x10016F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10016F74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x10016F78: jr          $ra
    // 0x10016F7C: nop

    return;
    return;
    // 0x10016F7C: nop

;}
RECOMP_FUNC void func_15179DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15179DB0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15179DB4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x15179DB8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15179DBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15179DC0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15179DC4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15179DC8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15179DCC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15179DD0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15179DD4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15179DD8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15179DDC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15179DE0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15179DE4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15179DE8: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x15179DEC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15179DF0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15179DF4: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x15179DF8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x15179DFC: addiu       $t8, $t8, -0x2180
    ctx->r24 = ADD32(ctx->r24, -0X2180);
    // 0x15179E00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15179E04: addiu       $t2, $t2, -0x2F50
    ctx->r10 = ADD32(ctx->r10, -0X2F50);
    // 0x15179E08: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x15179E0C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15179E10: addu        $s4, $t1, $t2
    ctx->r20 = ADD32(ctx->r9, ctx->r10);
    // 0x15179E14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15179E18: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x15179E1C: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x15179E20: lwc1        $f22, 0x7218($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7218);
    // 0x15179E24: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15179E28: addiu       $t3, $s4, 0x20
    ctx->r11 = ADD32(ctx->r20, 0X20);
    // 0x15179E2C: addiu       $t4, $s4, 0x24
    ctx->r12 = ADD32(ctx->r20, 0X24);
    // 0x15179E30: addiu       $t5, $s4, 0x18
    ctx->r13 = ADD32(ctx->r20, 0X18);
    // 0x15179E34: addiu       $t6, $s4, 0x1C
    ctx->r14 = ADD32(ctx->r20, 0X1C);
    // 0x15179E38: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x15179E3C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15179E40: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x15179E44: sw          $t4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r12;
    // 0x15179E48: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x15179E4C: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x15179E50: addiu       $s1, $s1, 0x7210
    ctx->r17 = ADD32(ctx->r17, 0X7210);
    // 0x15179E54: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x15179E58: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x15179E5C: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x15179E60: addiu       $s5, $sp, 0x64
    ctx->r21 = ADD32(ctx->r29, 0X64);
    // 0x15179E64: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x15179E68: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_15179E6C:
    // 0x15179E6C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x15179E70: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15179E74: mul.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x15179E78: jal         0x15047D60
    // 0x15179E7C: nop

    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15179E7C: nop

    after_0:
    // 0x15179E80: lwc1        $f6, 0x28($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X28);
    // 0x15179E84: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15179E88: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15179E8C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15179E90: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x15179E94: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15179E98: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x15179E9C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15179EA0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x15179EA4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15179EA8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x15179EAC: nop

    // 0x15179EB0: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x15179EB4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15179EB8: sh          $t0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r8;
    // 0x15179EBC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x15179EC0: sra         $t3, $t0, 1
    ctx->r11 = S32(SIGNED(ctx->r8) >> 1);
    // 0x15179EC4: negu        $v1, $t3
    ctx->r3 = SUB32(0, ctx->r11);
    // 0x15179EC8: sh          $t0, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r8;
    // 0x15179ECC: lbu         $t7, 0x7210($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7210);
    // 0x15179ED0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15179ED4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x15179ED8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15179EDC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x15179EE0: sh          $v1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r3;
    // 0x15179EE4: lbu         $t1, 0x7211($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7211);
    // 0x15179EE8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x15179EEC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x15179EF0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x15179EF4: sh          $v1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r3;
    // 0x15179EF8: lbu         $t5, 0x7212($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X7212);
    // 0x15179EFC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x15179F00: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x15179F04: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x15179F08: sh          $v1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r3;
    // 0x15179F0C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x15179F10: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15179F14: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x15179F18: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x15179F1C: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x15179F20: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x15179F24: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x15179F28: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x15179F2C: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x15179F30: sh          $v1, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r3;
    // 0x15179F34: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x15179F38: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15179F3C: addiu       $t5, $v1, 0x12
    ctx->r13 = ADD32(ctx->r3, 0X12);
    // 0x15179F40: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x15179F44: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x15179F48: sh          $v1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r3;
    // 0x15179F4C: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x15179F50: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15179F54: addiu       $t6, $v1, -0x12
    ctx->r14 = ADD32(ctx->r3, -0X12);
    // 0x15179F58: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
    // 0x15179F5C: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x15179F60: sh          $v1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r3;
    // 0x15179F64: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x15179F68: sh          $t5, 0x60($t4)
    MEM_H(0X60, ctx->r12) = ctx->r13;
    // 0x15179F6C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15179F70: sh          $t6, 0x80($t7)
    MEM_H(0X80, ctx->r15) = ctx->r14;
    // 0x15179F74: lw          $v0, -0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X4);
    // 0x15179F78: lw          $t9, -0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, -0X4);
    // 0x15179F7C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15179F80: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x15179F84: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15179F88: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x15179F8C: lw          $v0, -0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X4);
    // 0x15179F90: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15179F94: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x15179F98: nop

    // 0x15179F9C: bc1f        L_15179FAC
    if (!c1cs) {
        // 0x15179FA0: nop
    
            goto L_15179FAC;
    }
    // 0x15179FA0: nop

    // 0x15179FA4: sub.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x15179FA8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_15179FAC:
    // 0x15179FAC: bne         $s3, $s5, L_15179E6C
    if (ctx->r19 != ctx->r21) {
        // 0x15179FB0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15179E6C;
    }
    // 0x15179FB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15179FB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15179FB8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15179FBC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15179FC0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15179FC4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15179FC8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15179FCC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15179FD0: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15179FD4: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15179FD8: jr          $ra
    // 0x15179FDC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15179FDC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_10006828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10006828: mfc1        $t2, $f17
    ctx->r10 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x1000682C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x10006830: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x10006834: andi        $t3, $fp, 0x7
    ctx->r11 = ctx->r30 & 0X7;
    // 0x10006838: srlv        $gp, $gp, $t3
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r11 & 31));
    // 0x1000683C: subu        $fp, $fp, $t3
    ctx->r30 = SUB32(ctx->r30, ctx->r11);
    // 0x10006840: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x10006844: beq         $at, $zero, L_1000686C
    if (ctx->r1 == 0) {
        // 0x10006848: nop
    
            goto L_1000686C;
    }
    // 0x10006848: nop

    // 0x1000684C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_10006850:
    // 0x10006850: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x10006854: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x10006858: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x1000685C: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x10006860: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x10006864: bnel        $at, $zero, L_10006850
    if (ctx->r1 != 0) {
        // 0x10006868: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_10006850;
    }
    goto skip_0;
    // 0x10006868: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_1000686C:
    // 0x1000686C: andi        $t3, $gp, 0xFFFF
    ctx->r11 = ctx->r28 & 0XFFFF;
    // 0x10006870: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x10006874: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x10006878: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x1000687C: beq         $at, $zero, L_100068A4
    if (ctx->r1 == 0) {
        // 0x10006880: nop
    
            goto L_100068A4;
    }
    // 0x10006880: nop

    // 0x10006884: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_10006888:
    // 0x10006888: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1000688C: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x10006890: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x10006894: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x10006898: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x1000689C: bnel        $at, $zero, L_10006888
    if (ctx->r1 != 0) {
        // 0x100068A0: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_10006888;
    }
    goto skip_1;
    // 0x100068A0: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_100068A4:
    // 0x100068A4: nor         $t5, $gp, $zero
    ctx->r13 = ~(ctx->r28 | 0);
    // 0x100068A8: andi        $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 & 0XFFFF;
    // 0x100068AC: bne         $t3, $t5, L_10006924
    if (ctx->r11 != ctx->r13) {
        // 0x100068B0: srl         $gp, $gp, 16
        ctx->r28 = S32(U32(ctx->r28) >> 16);
            goto L_10006924;
    }
    // 0x100068B0: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x100068B4: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x100068B8: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x100068BC: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x100068C0: beq         $at, $zero, L_10006924
    if (ctx->r1 == 0) {
        // 0x100068C4: addu        $t5, $t7, $t2
        ctx->r13 = ADD32(ctx->r15, ctx->r10);
            goto L_10006924;
    }
    // 0x100068C4: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x100068C8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x100068CC: beq         $t3, $zero, L_10006918
    if (ctx->r11 == 0) {
        // 0x100068D0: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_10006918;
    }
    // 0x100068D0: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_100068D4:
    // 0x100068D4: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x100068D8: beq         $at, $zero, L_10006900
    if (ctx->r1 == 0) {
        // 0x100068DC: nop
    
            goto L_10006900;
    }
    // 0x100068DC: nop

    // 0x100068E0: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_100068E4:
    // 0x100068E4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x100068E8: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x100068EC: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x100068F0: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x100068F4: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x100068F8: bnel        $at, $zero, L_100068E4
    if (ctx->r1 != 0) {
        // 0x100068FC: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_100068E4;
    }
    goto skip_2;
    // 0x100068FC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_2:
L_10006900:
    // 0x10006900: sb          $gp, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r28;
    // 0x10006904: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x10006908: srl         $gp, $gp, 8
    ctx->r28 = S32(U32(ctx->r28) >> 8);
    // 0x1000690C: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x10006910: bne         $t3, $zero, L_100068D4
    if (ctx->r11 != 0) {
        // 0x10006914: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_100068D4;
    }
    // 0x10006914: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_10006918:
    // 0x10006918: mtc1        $t2, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r10;
    // 0x1000691C: jr          $ra
    // 0x10006920: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    return;
    // 0x10006920: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_10006924:
    // 0x10006924: jr          $ra
    // 0x10006928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x10006928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_150641D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150641D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150641DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150641E0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150641E4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x150641E8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x150641EC: lhu         $v1, 0x36($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X36);
    // 0x150641F0: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x150641F4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150641F8: jal         0x150ADA20
    // 0x150641FC: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150641FC: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_0:
    // 0x15064200: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x15064204: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x15064208: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1506420C: lhu         $a1, 0x3A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X3A);
    // 0x15064210: beq         $t6, $zero, L_1506421C
    if (ctx->r14 == 0) {
        // 0x15064214: lhu         $a2, 0x3E($sp)
        ctx->r6 = MEM_HU(ctx->r29, 0X3E);
            goto L_1506421C;
    }
    // 0x15064214: lhu         $a2, 0x3E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3E);
    // 0x15064218: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
L_1506421C:
    // 0x1506421C: lhu         $v0, 0x84($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X84);
    // 0x15064220: lhu         $t7, 0x36($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X36);
    // 0x15064224: addiu       $a3, $zero, 0xFE
    ctx->r7 = ADD32(0, 0XFE);
    // 0x15064228: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x1506422C: beql        $t7, $v0, L_15064240
    if (ctx->r15 == ctx->r2) {
        // 0x15064230: lbu         $t8, 0x107($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X107);
            goto L_15064240;
    }
    goto skip_0;
    // 0x15064230: lbu         $t8, 0x107($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X107);
    skip_0:
    // 0x15064234: bne         $a1, $v0, L_15064258
    if (ctx->r5 != ctx->r2) {
        // 0x15064238: nop
    
            goto L_15064258;
    }
    // 0x15064238: nop

    // 0x1506423C: lbu         $t8, 0x107($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X107);
L_15064240:
    // 0x15064240: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x15064244: slti        $at, $t8, 0x28
    ctx->r1 = SIGNED(ctx->r24) < 0X28 ? 1 : 0;
    // 0x15064248: beq         $at, $zero, L_15064258
    if (ctx->r1 == 0) {
        // 0x1506424C: nop
    
            goto L_15064258;
    }
    // 0x1506424C: nop

    // 0x15064250: b           L_1506429C
    // 0x15064254: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
        goto L_1506429C;
    // 0x15064254: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_15064258:
    // 0x15064258: bne         $a2, $v0, L_15064264
    if (ctx->r6 != ctx->r2) {
        // 0x1506425C: addiu       $a1, $sp, 0x26
        ctx->r5 = ADD32(ctx->r29, 0X26);
            goto L_15064264;
    }
    // 0x1506425C: addiu       $a1, $sp, 0x26
    ctx->r5 = ADD32(ctx->r29, 0X26);
    // 0x15064260: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
L_15064264:
    // 0x15064264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15064268: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1506426C: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    // 0x15064270: jal         0x1505DADC
    // 0x15064274: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_1505DADC(rdram, ctx);
        goto after_1;
    // 0x15064274: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x15064278: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1506427C: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x15064280: beq         $v0, $at, L_15064290
    if (ctx->r2 == ctx->r1) {
        // 0x15064284: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_15064290;
    }
    // 0x15064284: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15064288: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x1506428C: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
L_15064290:
    // 0x15064290: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15064294: sb          $t1, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r9;
    // 0x15064298: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1506429C:
    // 0x1506429C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150642A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150642A4: jr          $ra
    // 0x150642A8: nop

    return;
    return;
    // 0x150642A8: nop

;}
RECOMP_FUNC void func_15002878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002878: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500287C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15002880: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15002884: lw          $v1, -0x41E8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41E8);
    // 0x15002888: addiu       $a1, $a1, -0x41D8
    ctx->r5 = ADD32(ctx->r5, -0X41D8);
    // 0x1500288C: addiu       $a0, $a0, -0x41E4
    ctx->r4 = ADD32(ctx->r4, -0X41E4);
    // 0x15002890: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_15002894:
    // 0x15002894: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15002898: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1500289C: beq         $at, $zero, L_150028A8
    if (ctx->r1 == 0) {
        // 0x150028A0: nop
    
            goto L_150028A8;
    }
    // 0x150028A0: nop

    // 0x150028A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_150028A8:
    // 0x150028A8: bnel        $a0, $a1, L_15002894
    if (ctx->r4 != ctx->r5) {
        // 0x150028AC: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_15002894;
    }
    goto skip_0;
    // 0x150028AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x150028B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150028B4: jr          $ra
    // 0x150028B8: nop

    return;
    return;
    // 0x150028B8: nop

;}
RECOMP_FUNC void corrupted_init2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F1974: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x151F1978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F197C: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x151F1980: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x151F1984: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
L_151F1988:
    // 0x151F1988: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x151F198C: lw          $t7, 0x12C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X12C);
    // 0x151F1990: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151F1994: sb          $zero, 0x101($t8)
    MEM_B(0X101, ctx->r24) = 0;
    // 0x151F1998: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    // 0x151F199C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x151F19A0: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x151F19A4: bne         $at, $zero, L_151F1988
    if (ctx->r1 != 0) {
        // 0x151F19A8: sw          $t0, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r8;
            goto L_151F1988;
    }
    // 0x151F19A8: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
    // 0x151F19AC: lw          $t2, 0x134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X134);
    // 0x151F19B0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151F19B4: sb          $t1, 0x100($t2)
    MEM_B(0X100, ctx->r10) = ctx->r9;
    // 0x151F19B8: lw          $t3, 0x130($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X130);
    // 0x151F19BC: sb          $zero, 0x123($sp)
    MEM_B(0X123, ctx->r29) = 0;
    // 0x151F19C0: lbu         $t4, 0x64($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X64);
    // 0x151F19C4: blez        $t4, L_151F1B14
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151F19C8: nop
    
            goto L_151F1B14;
    }
    // 0x151F19C8: nop

L_151F19CC:
    // 0x151F19CC: lbu         $t5, 0x123($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X123);
    // 0x151F19D0: blez        $t5, L_151F19E4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x151F19D4: nop
    
            goto L_151F19E4;
    }
    // 0x151F19D4: nop

    // 0x151F19D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151F19DC: b           L_151F19F0
    // 0x151F19E0: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
        goto L_151F19F0;
    // 0x151F19E0: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
L_151F19E4:
    // 0x151F19E4: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x151F19E8: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x151F19EC: sw          $t8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r24;
L_151F19F0:
    // 0x151F19F0: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x151F19F4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x151F19F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151F19FC: jal         0x100282DC
    // 0x151F1A00: lbu         $a3, 0x123($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X123);
    __osPfsRWInode_recomp(rdram, ctx);
        goto after_0;
    // 0x151F1A00: lbu         $a3, 0x123($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X123);
    after_0:
    // 0x151F1A04: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F1A08: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x151F1A0C: beq         $t9, $zero, L_151F1A24
    if (ctx->r25 == 0) {
        // 0x151F1A10: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151F1A24;
    }
    // 0x151F1A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151F1A14: beq         $t9, $at, L_151F1A24
    if (ctx->r25 == ctx->r1) {
        // 0x151F1A18: nop
    
            goto L_151F1A24;
    }
    // 0x151F1A18: nop

    // 0x151F1A1C: b           L_151F1B18
    // 0x151F1A20: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_151F1B18;
    // 0x151F1A20: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_151F1A24:
    // 0x151F1A24: lw          $t0, 0x124($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X124);
    // 0x151F1A28: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x151F1A2C: beq         $at, $zero, L_151F1AF0
    if (ctx->r1 == 0) {
        // 0x151F1A30: sw          $t0, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r8;
            goto L_151F1AF0;
    }
    // 0x151F1A30: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
L_151F1A34:
    // 0x151F1A34: lw          $t2, 0x12C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X12C);
    // 0x151F1A38: addiu       $t4, $sp, 0x20
    ctx->r12 = ADD32(ctx->r29, 0X20);
    // 0x151F1A3C: addiu       $t1, $sp, 0x120
    ctx->r9 = ADD32(ctx->r29, 0X120);
    // 0x151F1A40: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x151F1A44: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x151F1A48: lhu         $at, 0x0($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X0);
    // 0x151F1A4C: sh          $at, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r1;
    // 0x151F1A50: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x151F1A54: lhu         $t8, 0x120($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X120);
    // 0x151F1A58: lw          $t0, 0x60($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X60);
    // 0x151F1A5C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151F1A60: bne         $at, $zero, L_151F1ADC
    if (ctx->r1 != 0) {
        // 0x151F1A64: nop
    
            goto L_151F1ADC;
    }
    // 0x151F1A64: nop

    // 0x151F1A68: lbu         $t2, 0x120($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X120);
    // 0x151F1A6C: lbu         $t3, 0x123($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X123);
    // 0x151F1A70: beq         $t2, $t3, L_151F1ADC
    if (ctx->r10 == ctx->r11) {
        // 0x151F1A74: nop
    
            goto L_151F1ADC;
    }
    // 0x151F1A74: nop

    // 0x151F1A78: lbu         $t4, 0x121($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X121);
    // 0x151F1A7C: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x151F1A80: bgez        $t4, L_151F1A90
    if (SIGNED(ctx->r12) >= 0) {
        // 0x151F1A84: sra         $t6, $t4, 2
        ctx->r14 = S32(SIGNED(ctx->r12) >> 2);
            goto L_151F1A90;
    }
    // 0x151F1A84: sra         $t6, $t4, 2
    ctx->r14 = S32(SIGNED(ctx->r12) >> 2);
    // 0x151F1A88: addiu       $at, $t4, 0x3
    ctx->r1 = ADD32(ctx->r12, 0X3);
    // 0x151F1A8C: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_151F1A90:
    // 0x151F1A90: bgez        $t2, L_151F1AA4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x151F1A94: andi        $t1, $t2, 0x7
        ctx->r9 = ctx->r10 & 0X7;
            goto L_151F1AA4;
    }
    // 0x151F1A94: andi        $t1, $t2, 0x7
    ctx->r9 = ctx->r10 & 0X7;
    // 0x151F1A98: beq         $t1, $zero, L_151F1AA4
    if (ctx->r9 == 0) {
        // 0x151F1A9C: nop
    
            goto L_151F1AA4;
    }
    // 0x151F1A9C: nop

    // 0x151F1AA0: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
L_151F1AA4:
    // 0x151F1AA4: sll         $t5, $t1, 5
    ctx->r13 = S32(ctx->r9 << 5);
    // 0x151F1AA8: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x151F1AAC: sw          $t7, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r15;
    // 0x151F1AB0: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x151F1AB4: lbu         $t0, 0x101($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X101);
    // 0x151F1AB8: bgez        $t3, L_151F1ACC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x151F1ABC: andi        $t4, $t3, 0x7
        ctx->r12 = ctx->r11 & 0X7;
            goto L_151F1ACC;
    }
    // 0x151F1ABC: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x151F1AC0: beq         $t4, $zero, L_151F1ACC
    if (ctx->r12 == 0) {
        // 0x151F1AC4: nop
    
            goto L_151F1ACC;
    }
    // 0x151F1AC4: nop

    // 0x151F1AC8: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_151F1ACC:
    // 0x151F1ACC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151F1AD0: sllv        $t1, $t2, $t4
    ctx->r9 = S32(ctx->r10 << (ctx->r12 & 31));
    // 0x151F1AD4: or          $t6, $t0, $t1
    ctx->r14 = ctx->r8 | ctx->r9;
    // 0x151F1AD8: sb          $t6, 0x101($t8)
    MEM_B(0X101, ctx->r24) = ctx->r14;
L_151F1ADC:
    // 0x151F1ADC: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x151F1AE0: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x151F1AE4: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x151F1AE8: bne         $at, $zero, L_151F1A34
    if (ctx->r1 != 0) {
        // 0x151F1AEC: sw          $t9, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r25;
            goto L_151F1A34;
    }
    // 0x151F1AEC: sw          $t9, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r25;
L_151F1AF0:
    // 0x151F1AF0: lbu         $t7, 0x123($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X123);
    // 0x151F1AF4: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x151F1AF8: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x151F1AFC: sb          $t3, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r11;
    // 0x151F1B00: lbu         $t0, 0x64($t4)
    ctx->r8 = MEM_BU(ctx->r12, 0X64);
    // 0x151F1B04: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x151F1B08: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151F1B0C: bne         $at, $zero, L_151F19CC
    if (ctx->r1 != 0) {
        // 0x151F1B10: nop
    
            goto L_151F19CC;
    }
    // 0x151F1B10: nop

L_151F1B14:
    // 0x151F1B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F1B18:
    // 0x151F1B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F1B1C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x151F1B20: jr          $ra
    // 0x151F1B24: nop

    return;
    return;
    // 0x151F1B24: nop

;}
RECOMP_FUNC void func_15172D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15172D80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15172D84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15172D88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15172D8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15172D90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15172D94: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15172D98: addiu       $t6, $t6, -0x2D50
    ctx->r14 = ADD32(ctx->r14, -0X2D50);
    // 0x15172D9C: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x15172DA0: lb          $t7, 0x0($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X0);
    // 0x15172DA4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x15172DA8: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x15172DAC: beq         $v0, $t7, L_15172E68
    if (ctx->r2 == ctx->r15) {
        // 0x15172DB0: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15172E68;
    }
    // 0x15172DB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15172DB4: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x15172DB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15172DBC: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x15172DC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15172DC4: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x15172DC8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15172DCC: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15172DD0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15172DD4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15172DD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x15172DDC: lbu         $t1, 0x1CA($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1CA);
    // 0x15172DE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15172DE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15172DE8: bne         $t1, $zero, L_15172E0C
    if (ctx->r9 != 0) {
        // 0x15172DEC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15172E0C;
    }
    // 0x15172DEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15172DF0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x15172DF4: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x15172DF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15172DFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15172E00: jal         0x1517EE40
    // 0x15172E04: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_1517EE40(rdram, ctx);
        goto after_0;
    // 0x15172E04: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_0:
    // 0x15172E08: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
L_15172E0C:
    // 0x15172E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15172E10: jal         0x1517F40C
    // 0x15172E14: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_1517F40C(rdram, ctx);
        goto after_1;
    // 0x15172E14: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x15172E18: beq         $v0, $zero, L_15172E68
    if (ctx->r2 == 0) {
        // 0x15172E1C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_15172E68;
    }
    // 0x15172E1C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x15172E20: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15172E24: lw          $t2, -0x1610($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1610);
    // 0x15172E28: lb          $a1, 0x0($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X0);
    // 0x15172E2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15172E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15172E34: beq         $t2, $a1, L_15172E4C
    if (ctx->r10 == ctx->r5) {
        // 0x15172E38: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15172E4C;
    }
    // 0x15172E38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15172E3C: jal         0x1501C730
    // 0x15172E40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501C730(rdram, ctx);
        goto after_2;
    // 0x15172E40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x15172E44: b           L_15172E6C
    // 0x15172E48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15172E6C;
    // 0x15172E48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15172E4C:
    // 0x15172E4C: jal         0x15172CA8
    // 0x15172E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15172CA8(rdram, ctx);
        goto after_3;
    // 0x15172E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15172E54: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15172E58: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x15172E5C: lbu         $a1, -0x2D40($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2D40);
    // 0x15172E60: jal         0x15172D28
    // 0x15172E64: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_15172D28(rdram, ctx);
        goto after_4;
    // 0x15172E64: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
L_15172E68:
    // 0x15172E68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15172E6C:
    // 0x15172E6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15172E70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15172E74: jr          $ra
    // 0x15172E78: nop

    return;
    return;
    // 0x15172E78: nop

;}
RECOMP_FUNC void func_15196330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15196330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15196334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15196338: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1519633C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15196340: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15196344: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196348: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x1519634C: lb          $v1, 0x65($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X65);
    // 0x15196350: beq         $v1, $at, L_15196374
    if (ctx->r3 == ctx->r1) {
        // 0x15196354: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_15196374;
    }
    // 0x15196354: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15196358: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1519635C: lw          $t9, -0x768($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X768);
    // 0x15196360: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15196364: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x15196368: jalr        $t9
    // 0x1519636C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1519636C: nop

    after_0:
    // 0x15196370: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_15196374:
    // 0x15196374: lb          $v1, 0x62($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X62);
    // 0x15196378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1519637C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196380: beq         $v1, $at, L_1519639C
    if (ctx->r3 == ctx->r1) {
        // 0x15196384: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_1519639C;
    }
    // 0x15196384: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15196388: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1519638C: lw          $t9, -0x774($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X774);
    // 0x15196390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15196394: jalr        $t9
    // 0x15196398: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15196398: nop

    after_1:
L_1519639C:
    // 0x1519639C: jal         0x151478F4
    // 0x151963A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_151478F4(rdram, ctx);
        goto after_2;
    // 0x151963A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x151963A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151963A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151963AC: jr          $ra
    // 0x151963B0: nop

    return;
    return;
    // 0x151963B0: nop

;}
RECOMP_FUNC void func_150BE150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BE150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150BE154: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150BE158: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150BE15C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150BE160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150BE164: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x150BE168: bne         $a2, $at, L_150BE190
    if (ctx->r6 != ctx->r1) {
        // 0x150BE16C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150BE190;
    }
    // 0x150BE16C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150BE170: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x150BE174: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x150BE178: bnel        $t7, $t8, L_150BE1B8
    if (ctx->r15 != ctx->r24) {
        // 0x150BE17C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150BE1B8;
    }
    goto skip_0;
    // 0x150BE17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150BE180: jal         0x1516972C
    // 0x150BE184: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150BE184: nop

    after_0:
    // 0x150BE188: b           L_150BE1B8
    // 0x150BE18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150BE1B8;
    // 0x150BE18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150BE190:
    // 0x150BE190: bnel        $v0, $zero, L_150BE1B8
    if (ctx->r2 != 0) {
        // 0x150BE194: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150BE1B8;
    }
    goto skip_1;
    // 0x150BE194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150BE198: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x150BE19C: lw          $t9, 0x28($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X28);
    // 0x150BE1A0: lw          $t0, 0x318($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X318);
    // 0x150BE1A4: bnel        $t9, $t0, L_150BE1B8
    if (ctx->r25 != ctx->r8) {
        // 0x150BE1A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150BE1B8;
    }
    goto skip_2;
    // 0x150BE1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150BE1AC: jal         0x1516972C
    // 0x150BE1B0: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150BE1B0: nop

    after_1:
    // 0x150BE1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150BE1B8:
    // 0x150BE1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150BE1BC: jr          $ra
    // 0x150BE1C0: nop

    return;
    return;
    // 0x150BE1C0: nop

;}
RECOMP_FUNC void func_15147A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147A80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15147A84: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15147A88: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15147A8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15147A90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15147A94: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15147A98: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x15147A9C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15147AA0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15147AA4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15147AA8: lbu         $t6, 0x15($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15);
    // 0x15147AAC: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x15147AB0: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x15147AB4: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15147AB8: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x15147ABC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x15147AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15147AC4: lbu         $t9, 0x5F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5F);
    // 0x15147AC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15147ACC: mflo        $v1
    ctx->r3 = lo;
    // 0x15147AD0: addu        $a2, $s1, $v1
    ctx->r6 = ADD32(ctx->r17, ctx->r3);
    // 0x15147AD4: beq         $t8, $zero, L_15147AE4
    if (ctx->r24 == 0) {
        // 0x15147AD8: addiu       $a2, $a2, 0xA0
        ctx->r6 = ADD32(ctx->r6, 0XA0);
            goto L_15147AE4;
    }
    // 0x15147AD8: addiu       $a2, $a2, 0xA0
    ctx->r6 = ADD32(ctx->r6, 0XA0);
    // 0x15147ADC: b           L_15147AE4
    // 0x15147AE0: addiu       $v0, $zero, 0x4D
    ctx->r2 = ADD32(0, 0X4D);
        goto L_15147AE4;
    // 0x15147AE0: addiu       $v0, $zero, 0x4D
    ctx->r2 = ADD32(0, 0X4D);
L_15147AE4:
    // 0x15147AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15147AE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15147AEC: jal         0x15167A68
    // 0x15147AF0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15147AF0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x15147AF4: bne         $v0, $zero, L_15147B04
    if (ctx->r2 != 0) {
        // 0x15147AF8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_15147B04;
    }
    // 0x15147AF8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15147AFC: b           L_15147C2C
    // 0x15147B00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15147C2C;
    // 0x15147B00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15147B04:
    // 0x15147B04: addiu       $v0, $s3, 0xA0
    ctx->r2 = ADD32(ctx->r19, 0XA0);
    // 0x15147B08: addu        $t1, $v0, $s1
    ctx->r9 = ADD32(ctx->r2, ctx->r17);
    // 0x15147B0C: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x15147B10: sw          $t1, 0x94($s3)
    MEM_W(0X94, ctx->r19) = ctx->r9;
    // 0x15147B14: addiu       $a0, $s3, 0x10
    ctx->r4 = ADD32(ctx->r19, 0X10);
    // 0x15147B18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15147B1C: jal         0x10022EC0
    // 0x15147B20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15147B20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_1:
    // 0x15147B24: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x15147B28: sb          $zero, 0x2C($s3)
    MEM_B(0X2C, ctx->r19) = 0;
    // 0x15147B2C: sb          $zero, 0x2D($s3)
    MEM_B(0X2D, ctx->r19) = 0;
    // 0x15147B30: sb          $zero, 0x2E($s3)
    MEM_B(0X2E, ctx->r19) = 0;
    // 0x15147B34: sb          $s2, 0x2F($s3)
    MEM_B(0X2F, ctx->r19) = ctx->r18;
    // 0x15147B38: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x15147B3C: or          $t7, $s3, $zero
    ctx->r15 = ctx->r19 | 0;
    // 0x15147B40: or          $t6, $v1, $zero
    ctx->r14 = ctx->r3 | 0;
    // 0x15147B44: sb          $t2, 0x30($s3)
    MEM_B(0X30, ctx->r19) = ctx->r10;
    // 0x15147B48: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15147B4C: addiu       $t5, $v1, 0x24
    ctx->r13 = ADD32(ctx->r3, 0X24);
    // 0x15147B50: beq         $v1, $zero, L_15147B84
    if (ctx->r3 == 0) {
        // 0x15147B54: sb          $t3, 0x31($s3)
        MEM_B(0X31, ctx->r19) = ctx->r11;
            goto L_15147B84;
    }
    // 0x15147B54: sb          $t3, 0x31($s3)
    MEM_B(0X31, ctx->r19) = ctx->r11;
L_15147B58:
    // 0x15147B58: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15147B5C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x15147B60: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x15147B64: sw          $at, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->r1;
    // 0x15147B68: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x15147B6C: sw          $at, 0x58($t7)
    MEM_W(0X58, ctx->r15) = ctx->r1;
    // 0x15147B70: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x15147B74: bne         $t6, $t5, L_15147B58
    if (ctx->r14 != ctx->r13) {
        // 0x15147B78: sw          $at, 0x5C($t7)
        MEM_W(0X5C, ctx->r15) = ctx->r1;
            goto L_15147B58;
    }
    // 0x15147B78: sw          $at, 0x5C($t7)
    MEM_W(0X5C, ctx->r15) = ctx->r1;
    // 0x15147B7C: b           L_15147B8C
    // 0x15147B80: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
        goto L_15147B8C;
    // 0x15147B80: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
L_15147B84:
    // 0x15147B84: sb          $zero, 0x7C($s3)
    MEM_B(0X7C, ctx->r19) = 0;
    // 0x15147B88: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
L_15147B8C:
    // 0x15147B8C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15147B90: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x15147B94: sw          $s4, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r20;
    // 0x15147B98: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15147B9C: sb          $zero, 0x38($s3)
    MEM_B(0X38, ctx->r19) = 0;
    // 0x15147BA0: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x15147BA4: sw          $t8, 0x50($s3)
    MEM_W(0X50, ctx->r19) = ctx->r24;
L_15147BA8:
    // 0x15147BA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15147BAC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x15147BB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15147BB4: bne         $at, $zero, L_15147BA8
    if (ctx->r1 != 0) {
        // 0x15147BB8: sw          $zero, 0x38($s0)
        MEM_W(0X38, ctx->r16) = 0;
            goto L_15147BA8;
    }
    // 0x15147BB8: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x15147BBC: beq         $s4, $zero, L_15147C0C
    if (ctx->r20 == 0) {
        // 0x15147BC0: sw          $zero, 0x4C($s3)
        MEM_W(0X4C, ctx->r19) = 0;
            goto L_15147C0C;
    }
    // 0x15147BC0: sw          $zero, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = 0;
    // 0x15147BC4: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x15147BC8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15147BCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15147BD0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x15147BD4: bltz        $t9, L_15147C00
    if (SIGNED(ctx->r25) < 0) {
        // 0x15147BD8: nop
    
            goto L_15147C00;
    }
    // 0x15147BD8: nop

L_15147BDC:
    // 0x15147BDC: jal         0x1515D480
    // 0x15147BE0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_1515D480(rdram, ctx);
        goto after_2;
    // 0x15147BE0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x15147BE4: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x15147BE8: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x15147BEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15147BF0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15147BF4: slt         $at, $t0, $s1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15147BF8: beq         $at, $zero, L_15147BDC
    if (ctx->r1 == 0) {
        // 0x15147BFC: nop
    
            goto L_15147BDC;
    }
    // 0x15147BFC: nop

L_15147C00:
    // 0x15147C00: jal         0x1515D440
    // 0x15147C04: nop

    func_1515D440(rdram, ctx);
        goto after_3;
    // 0x15147C04: nop

    after_3:
    // 0x15147C08: sw          $v0, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = ctx->r2;
L_15147C0C:
    // 0x15147C0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15147C10: addiu       $a0, $s3, 0x84
    ctx->r4 = ADD32(ctx->r19, 0X84);
    // 0x15147C14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x15147C18: swc1        $f0, 0x54($s3)
    MEM_W(0X54, ctx->r19) = ctx->f0.u32l;
    // 0x15147C1C: swc1        $f0, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->f0.u32l;
    // 0x15147C20: jal         0x100226F0
    // 0x15147C24: swc1        $f0, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->f0.u32l;
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x15147C24: swc1        $f0, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->f0.u32l;
    after_4:
    // 0x15147C28: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_15147C2C:
    // 0x15147C2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15147C30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15147C34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15147C38: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15147C3C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15147C40: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15147C44: jr          $ra
    // 0x15147C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15147C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151346D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151346D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151346D4: lbu         $t6, 0x3A($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3A);
    // 0x151346D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151346DC: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x151346E0: sb          $t7, 0x3A($a1)
    MEM_B(0X3A, ctx->r5) = ctx->r15;
    // 0x151346E4: jr          $ra
    // 0x151346E8: nop

    return;
    return;
    // 0x151346E8: nop

;}
RECOMP_FUNC void func_15102920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102920: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15102924: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15102928: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x1510292C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x15102930: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x15102934: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x15102938: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x1510293C: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x15102940: sh          $t6, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r14;
    // 0x15102944: sh          $t7, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r15;
    // 0x15102948: jal         0x1510F8CC
    // 0x1510294C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    func_1510F8CC(rdram, ctx);
        goto after_0;
    // 0x1510294C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_0:
    // 0x15102950: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15102954: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x15102958: addiu       $t8, $zero, 0x5C
    ctx->r24 = ADD32(0, 0X5C);
    // 0x1510295C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x15102960: lbu         $a2, 0x97($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X97);
    // 0x15102964: sb          $t8, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r24;
    // 0x15102968: beq         $a0, $at, L_151029AC
    if (ctx->r4 == ctx->r1) {
        // 0x1510296C: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_151029AC;
    }
    // 0x1510296C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15102970: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x15102974: bne         $v1, $at, L_151029C0
    if (ctx->r3 != ctx->r1) {
        // 0x15102978: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_151029C0;
    }
    // 0x15102978: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1510297C: bne         $v0, $at, L_1510298C
    if (ctx->r2 != ctx->r1) {
        // 0x15102980: nop
    
            goto L_1510298C;
    }
    // 0x15102980: nop

    // 0x15102984: b           L_15102B28
    // 0x15102988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102B28;
    // 0x15102988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510298C:
    // 0x1510298C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15102990: lwc1        $f6, 0x2340($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2340);
    // 0x15102994: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15102998: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x1510299C: sb          $t9, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r25;
    // 0x151029A0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151029A4: b           L_151029C0
    // 0x151029A8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
        goto L_151029C0;
    // 0x151029A8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
L_151029AC:
    // 0x151029AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151029B0: bnel        $v0, $at, L_151029C4
    if (ctx->r2 != ctx->r1) {
        // 0x151029B4: lh          $v0, 0xA2($sp)
        ctx->r2 = MEM_H(ctx->r29, 0XA2);
            goto L_151029C4;
    }
    goto skip_0;
    // 0x151029B4: lh          $v0, 0xA2($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XA2);
    skip_0:
    // 0x151029B8: b           L_15102B28
    // 0x151029BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102B28;
    // 0x151029BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151029C0:
    // 0x151029C0: lh          $v0, 0xA2($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XA2);
L_151029C4:
    // 0x151029C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151029C8: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x151029CC: bne         $v0, $a1, L_151029DC
    if (ctx->r2 != ctx->r5) {
        // 0x151029D0: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_151029DC;
    }
    // 0x151029D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x151029D4: b           L_151029E0
    // 0x151029D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151029E0;
    // 0x151029D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151029DC:
    // 0x151029DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151029E0:
    // 0x151029E0: ori         $t4, $v1, 0x9700
    ctx->r12 = ctx->r3 | 0X9700;
    // 0x151029E4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151029E8: bne         $v0, $a1, L_151029FC
    if (ctx->r2 != ctx->r5) {
        // 0x151029EC: sw          $t5, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r13;
            goto L_151029FC;
    }
    // 0x151029EC: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x151029F0: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x151029F4: b           L_15102A00
    // 0x151029F8: sh          $t6, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r14;
        goto L_15102A00;
    // 0x151029F8: sh          $t6, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r14;
L_151029FC:
    // 0x151029FC: sh          $v0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r2;
L_15102A00:
    // 0x15102A00: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x15102A04: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x15102A08: bne         $a0, $at, L_15102A1C
    if (ctx->r4 != ctx->r1) {
        // 0x15102A0C: sw          $zero, 0x70($sp)
        MEM_W(0X70, ctx->r29) = 0;
            goto L_15102A1C;
    }
    // 0x15102A0C: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x15102A10: sra         $t7, $a2, 1
    ctx->r15 = S32(SIGNED(ctx->r6) >> 1);
    // 0x15102A14: b           L_15102A20
    // 0x15102A18: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
        goto L_15102A20;
    // 0x15102A18: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
L_15102A1C:
    // 0x15102A1C: sb          $a2, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r6;
L_15102A20:
    // 0x15102A20: lbu         $t0, 0xAB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XAB);
    // 0x15102A24: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15102A28: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15102A2C: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x15102A30: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x15102A34: sb          $zero, 0x77($sp)
    MEM_B(0X77, ctx->r29) = 0;
    // 0x15102A38: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x15102A3C: beq         $t0, $zero, L_15102A4C
    if (ctx->r8 == 0) {
        // 0x15102A40: sb          $t9, 0x79($sp)
        MEM_B(0X79, ctx->r29) = ctx->r25;
            goto L_15102A4C;
    }
    // 0x15102A40: sb          $t9, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r25;
    // 0x15102A44: b           L_15102A50
    // 0x15102A48: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_15102A50;
    // 0x15102A48: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_15102A4C:
    // 0x15102A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15102A50:
    // 0x15102A50: lbu         $t3, 0xA7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XA7);
    // 0x15102A54: lui         $at, 0x3B
    ctx->r1 = S32(0X3B << 16);
    // 0x15102A58: addu        $t1, $v1, $at
    ctx->r9 = ADD32(ctx->r3, ctx->r1);
    // 0x15102A5C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x15102A60: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x15102A64: sb          $zero, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = 0;
    // 0x15102A68: beq         $t3, $zero, L_15102A84
    if (ctx->r11 == 0) {
        // 0x15102A6C: sb          $t2, 0x7B($sp)
        MEM_B(0X7B, ctx->r29) = ctx->r10;
            goto L_15102A84;
    }
    // 0x15102A6C: sb          $t2, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r10;
    // 0x15102A70: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x15102A74: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15102A78: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x15102A7C: b           L_15102A8C
    // 0x15102A80: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
        goto L_15102A8C;
    // 0x15102A80: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
L_15102A84:
    // 0x15102A84: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15102A88: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_15102A8C:
    // 0x15102A8C: jal         0x150ADA20
    // 0x15102A90: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15102A90: nop

    after_1:
    // 0x15102A94: jal         0x150ADA20
    // 0x15102A98: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15102A98: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x15102A9C: jal         0x150ADA20
    // 0x15102AA0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15102AA0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x15102AA4: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x15102AA8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x15102AAC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x15102AB0: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15102AB4: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15102AB8: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x15102ABC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15102AC0: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15102AC4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15102AC8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x15102ACC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x15102AD0: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15102AD4: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x15102AD8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x15102ADC: lbu         $t5, 0xB3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XB3);
    // 0x15102AE0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x15102AE4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x15102AE8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x15102AEC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x15102AF0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15102AF4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15102AF8: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x15102AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15102B00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15102B04: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x15102B08: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x15102B0C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x15102B10: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x15102B14: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x15102B18: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x15102B1C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x15102B20: jal         0x1513C650
    // 0x15102B24: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    func_1513C650(rdram, ctx);
        goto after_4;
    // 0x15102B24: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    after_4:
L_15102B28:
    // 0x15102B28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15102B2C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x15102B30: jr          $ra
    // 0x15102B34: nop

    return;
    return;
    // 0x15102B34: nop

;}
RECOMP_FUNC void func_1515A11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515A11C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1515A120: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1515A124: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1515A128: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x1515A12C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1515A130: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1515A134: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1515A138: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1515A13C: lb          $t6, 0xAE($s1)
    ctx->r14 = MEM_B(ctx->r17, 0XAE);
    // 0x1515A140: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1515A144: lbu         $t9, 0xAC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XAC);
    // 0x1515A148: lb          $t1, 0xAF($s1)
    ctx->r9 = MEM_B(ctx->r17, 0XAF);
    // 0x1515A14C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A150: lbu         $t4, 0xAD($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XAD);
    // 0x1515A154: mflo        $t8
    ctx->r24 = lo;
    // 0x1515A158: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    // 0x1515A15C: sb          $a0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r4;
    // 0x1515A160: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x1515A164: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A168: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1515A16C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515A170: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1515A174: mflo        $t3
    ctx->r11 = lo;
    // 0x1515A178: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x1515A17C: jal         0x151423D8
    // 0x1515A180: sb          $t5, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r13;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1515A180: sb          $t5, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r13;
    after_0:
    // 0x1515A184: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x1515A188: addiu       $s0, $s1, 0xA8
    ctx->r16 = ADD32(ctx->r17, 0XA8);
    // 0x1515A18C: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x1515A190: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515A194: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1515A198: jal         0x151423D8
    // 0x1515A19C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1515A19C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x1515A1A0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1515A1A4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1515A1A8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1515A1AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1515A1B0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515A1B4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1515A1B8: swc1        $f16, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f16.u32l;
    // 0x1515A1BC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1515A1C0: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1515A1C4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1515A1C8: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1515A1CC: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
    // 0x1515A1D0: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1515A1D4: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1515A1D8: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1515A1DC: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1515A1E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1515A1E4: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x1515A1E8: jal         0x15144B68
    // 0x1515A1EC: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x1515A1EC: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    after_2:
    // 0x1515A1F0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x1515A1F4: jal         0x15047D60
    // 0x1515A1F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x1515A1F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x1515A1FC: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1515A200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515A204: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1515A208: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    // 0x1515A20C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1515A210: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1515A214: swc1        $f18, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f18.u32l;
    // 0x1515A218: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1515A21C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1515A220: swc1        $f6, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f6.u32l;
    // 0x1515A224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1515A228: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1515A22C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1515A230: jr          $ra
    // 0x1515A234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1515A234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15048F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048F20: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15048F24: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15048F28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15048F2C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15048F30: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15048F34: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15048F38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15048F3C: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x15048F40: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15048F44: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15048F48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15048F4C: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x15048F50: jr          $ra
    // 0x15048F54: nop

    return;
    return;
    // 0x15048F54: nop

;}
RECOMP_FUNC void func_15005290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005290: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x15005294: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15005298: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1500529C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150052A0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x150052A4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x150052A8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x150052AC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x150052B0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x150052B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x150052B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150052BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150052C0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150052C4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150052C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150052CC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x150052D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150052D4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150052D8: jal         0x1502B5C8
    // 0x150052DC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_1502B5C8(rdram, ctx);
        goto after_0;
    // 0x150052DC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_0:
    // 0x150052E0: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x150052E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150052E8: sw          $v0, -0x3FE0($at)
    MEM_W(-0X3FE0, ctx->r1) = ctx->r2;
    // 0x150052EC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x150052F0: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x150052F4: lui         $fp, 0x8008
    ctx->r30 = S32(0X8008 << 16);
    // 0x150052F8: mflo        $t8
    ctx->r24 = lo;
    // 0x150052FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15005300: addiu       $fp, $fp, 0x2FA0
    ctx->r30 = ADD32(ctx->r30, 0X2FA0);
    // 0x15005304: sh          $t8, -0x6AB0($at)
    MEM_H(-0X6AB0, ctx->r1) = ctx->r24;
    // 0x15005308: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x1500530C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15005310: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15005314: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15005318: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x1500531C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x15005320: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x15005324: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x15005328: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x1500532C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x15005330: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x15005334: jal         0x10003C40
    // 0x15005338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15005338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1500533C: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x15005340: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x15005344: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x15005348: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x1500534C: addiu       $s7, $s7, -0x4010
    ctx->r23 = ADD32(ctx->r23, -0X4010);
    // 0x15005350: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x15005354: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x15005358: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x1500535C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15005360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15005364: jal         0x10003C40
    // 0x15005368: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x15005368: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1500536C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15005370: sll         $s1, $s0, 6
    ctx->r17 = S32(ctx->r16 << 6);
    // 0x15005374: sw          $v0, -0x3D50($at)
    MEM_W(-0X3D50, ctx->r1) = ctx->r2;
    // 0x15005378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1500537C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15005380: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15005384: jal         0x10003C40
    // 0x15005388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x15005388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x1500538C: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x15005390: addiu       $s2, $s2, -0x3D60
    ctx->r18 = ADD32(ctx->r18, -0X3D60);
    // 0x15005394: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x15005398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1500539C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150053A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150053A4: jal         0x10003C40
    // 0x150053A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x150053A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x150053AC: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x150053B0: sll         $s5, $s4, 16
    ctx->r21 = S32(ctx->r20 << 16);
    // 0x150053B4: sra         $t9, $s5, 16
    ctx->r25 = S32(SIGNED(ctx->r21) >> 16);
    // 0x150053B8: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x150053BC: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x150053C0: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x150053C4: addiu       $s6, $s6, -0x19E0
    ctx->r22 = ADD32(ctx->r22, -0X19E0);
    // 0x150053C8: addiu       $s3, $s3, -0x400C
    ctx->r19 = ADD32(ctx->r19, -0X400C);
    // 0x150053CC: addiu       $s2, $s2, -0x1D50
    ctx->r18 = ADD32(ctx->r18, -0X1D50);
    // 0x150053D0: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x150053D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150053D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_150053DC:
    // 0x150053DC: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x150053E0: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x150053E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150053E8: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x150053EC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x150053F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150053F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150053F8: jal         0x10003C40
    // 0x150053FC: addu        $s4, $s1, $t0
    ctx->r20 = ADD32(ctx->r17, ctx->r8);
    allocate_memory(rdram, ctx);
        goto after_5;
    // 0x150053FC: addu        $s4, $s1, $t0
    ctx->r20 = ADD32(ctx->r17, ctx->r8);
    after_5:
    // 0x15005400: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x15005404: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15005408: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x1500540C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x15005410: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15005414: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15005418: jal         0x150054C4
    // 0x1500541C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    func_150054C4(rdram, ctx);
        goto after_6;
    // 0x1500541C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    after_6:
    // 0x15005420: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x15005424: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x15005428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1500542C: addiu       $s1, $s1, 0x9A0
    ctx->r17 = ADD32(ctx->r17, 0X9A0);
    // 0x15005430: sltu        $at, $t3, $s0
    ctx->r1 = ctx->r11 < ctx->r16 ? 1 : 0;
    // 0x15005434: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15005438: beq         $at, $zero, L_150053DC
    if (ctx->r1 == 0) {
        // 0x1500543C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_150053DC;
    }
    // 0x1500543C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x15005440: jal         0x1512ABF8
    // 0x15005444: nop

    func_1512ABF8(rdram, ctx);
        goto after_7;
    // 0x15005444: nop

    after_7:
    // 0x15005448: jal         0x1512D238
    // 0x1500544C: nop

    func_1512D238(rdram, ctx);
        goto after_8;
    // 0x1500544C: nop

    after_8:
    // 0x15005450: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15005454: sw          $zero, -0x6B50($at)
    MEM_W(-0X6B50, ctx->r1) = 0;
    // 0x15005458: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x1500545C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15005460: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15005464: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x15005468: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x1500546C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15005470: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x15005474: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15005478: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x1500547C: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x15005480: addiu       $a0, $t4, 0x9A0
    ctx->r4 = ADD32(ctx->r12, 0X9A0);
    // 0x15005484: jal         0x10003C40
    // 0x15005488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_9;
    // 0x15005488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x1500548C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15005490: sw          $v0, -0x3FF0($at)
    MEM_W(-0X3FF0, ctx->r1) = ctx->r2;
    // 0x15005494: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15005498: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1500549C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x150054A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x150054A4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x150054A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x150054AC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x150054B0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x150054B4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x150054B8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x150054BC: jr          $ra
    // 0x150054C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x150054C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_15005F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005F28: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15005F2C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15005F30: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005F34: sh          $t7, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r15;
    // 0x15005F38: jal         0x15124B18
    // 0x15005F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005F40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005F44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15005F48: sw          $t8, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r24;
    // 0x15005F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005F50: jr          $ra
    // 0x15005F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1518FC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518FC44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518FC48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518FC4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1518FC50: lw          $a0, 0x2C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X2C);
    // 0x1518FC54: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1518FC58: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x1518FC5C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x1518FC60: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    // 0x1518FC64: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1518FC68: jal         0x1514BF50
    // 0x1518FC6C: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    func_1514BF50(rdram, ctx);
        goto after_0;
    // 0x1518FC6C: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    after_0:
    // 0x1518FC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518FC74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518FC78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518FC7C: jr          $ra
    // 0x1518FC80: nop

    return;
    return;
    // 0x1518FC80: nop

;}
RECOMP_FUNC void func_151AE984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE984: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151AE988: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE98C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151AE990: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151AE994: lwc1        $f0, -0x6274($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6274);
    // 0x151AE998: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151AE99C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151AE9A0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x151AE9A4: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x151AE9A8: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151AE9AC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151AE9B0: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x151AE9B4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151AE9B8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151AE9BC: nop

    // 0x151AE9C0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151AE9C4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x151AE9C8: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x151AE9CC: jal         0x150ADA68
    // 0x151AE9D0: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151AE9D0: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151AE9D4: jal         0x150ADA20
    // 0x151AE9D8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151AE9D8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151AE9DC: jal         0x150ADA20
    // 0x151AE9E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151AE9E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x151AE9E4: jal         0x150ADA68
    // 0x151AE9E8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151AE9E8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x151AE9EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151AE9F0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151AE9F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE9F8: lwc1        $f8, -0x6270($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6270);
    // 0x151AE9FC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x151AEA00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AEA04: lwc1        $f16, -0x626C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X626C);
    // 0x151AEA08: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x151AEA0C: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x151AEA10: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151AEA14: mfhi        $t7
    ctx->r15 = hi;
    // 0x151AEA18: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x151AEA1C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151AEA20: lbu         $t2, 0x7B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7B);
    // 0x151AEA24: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x151AEA28: lui         $at, 0x435B
    ctx->r1 = S32(0X435B << 16);
    // 0x151AEA2C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AEA30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AEA34: lui         $at, 0x429A
    ctx->r1 = S32(0X429A << 16);
    // 0x151AEA38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AEA3C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AEA40: lbu         $t4, 0x7F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7F);
    // 0x151AEA44: mfhi        $t0
    ctx->r8 = hi;
    // 0x151AEA48: addiu       $t1, $t0, 0x9B
    ctx->r9 = ADD32(ctx->r8, 0X9B);
    // 0x151AEA4C: addiu       $t8, $t7, 0x3C
    ctx->r24 = ADD32(ctx->r15, 0X3C);
    // 0x151AEA50: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151AEA54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151AEA58: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151AEA5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AEA60: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151AEA64: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x151AEA68: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x151AEA6C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x151AEA70: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151AEA74: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151AEA78: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x151AEA7C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x151AEA80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151AEA84: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151AEA88: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151AEA8C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151AEA90: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x151AEA94: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x151AEA98: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151AEA9C: jal         0x151D9014
    // 0x151AEAA0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    func_151D9014(rdram, ctx);
        goto after_4;
    // 0x151AEAA0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    after_4:
    // 0x151AEAA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151AEAA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151AEAAC: jr          $ra
    // 0x151AEAB0: nop

    return;
    return;
    // 0x151AEAB0: nop

;}
RECOMP_FUNC void func_15163504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15163508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516350C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x15163510: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x15163514: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15163518: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x1516351C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15163520: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15163524: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15163528: nop

    // 0x1516352C: sh          $t8, 0xE($t9)
    MEM_H(0XE, ctx->r25) = ctx->r24;
    // 0x15163530: lw          $t0, 0x1C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C);
    // 0x15163534: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x15163538: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1516353C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15163540: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15163544: nop

    // 0x15163548: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x1516354C: lw          $t4, 0x20($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X20);
    // 0x15163550: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x15163554: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x15163558: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1516355C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15163560: nop

    // 0x15163564: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x15163568: lb          $t8, 0x24($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X24);
    // 0x1516356C: beq         $t8, $at, L_15163598
    if (ctx->r24 == ctx->r1) {
        // 0x15163570: nop
    
            goto L_15163598;
    }
    // 0x15163570: nop

    // 0x15163574: lb          $t9, 0x24($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X24);
    // 0x15163578: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1516357C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15163580: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15163584: lw          $t9, -0x4C94($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C94);
    // 0x15163588: jalr        $t9
    // 0x1516358C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1516358C: nop

    after_0:
    // 0x15163590: b           L_1516359C
    // 0x15163594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1516359C;
    // 0x15163594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15163598:
    // 0x15163598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516359C:
    // 0x1516359C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151635A0: jr          $ra
    // 0x151635A4: nop

    return;
    return;
    // 0x151635A4: nop

;}
RECOMP_FUNC void func_15086D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15086D94: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15086D98: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x15086D9C: mov.s       $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    ctx->f30.fl = ctx->f12.fl;
    // 0x15086DA0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15086DA4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15086DA8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15086DAC: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x15086DB0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x15086DB4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x15086DB8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15086DBC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15086DC0: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x15086DC4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x15086DC8: jal         0x15085DA8
    // 0x15086DCC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    func_15085DA8(rdram, ctx);
        goto after_0;
    // 0x15086DCC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_0:
    // 0x15086DD0: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x15086DD4: lh          $s1, 0x7290($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X7290);
    // 0x15086DD8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15086DDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15086DE0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x15086DE4: blez        $s1, L_15087058
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15086DE8: swc1        $f4, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
            goto L_15087058;
    }
    // 0x15086DE8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x15086DEC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15086DF0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x15086DF4: lw          $t4, 0x2350($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2350);
    // 0x15086DF8: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15086DFC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x15086E00: addiu       $ra, $zero, 0xFF
    ctx->r31 = ADD32(0, 0XFF);
    // 0x15086E04: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15086E08: sll         $t6, $t3, 4
    ctx->r14 = S32(ctx->r11 << 4);
L_15086E0C:
    // 0x15086E0C: addu        $t2, $t6, $t4
    ctx->r10 = ADD32(ctx->r14, ctx->r12);
    // 0x15086E10: lbu         $t7, 0xE($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XE);
    // 0x15086E14: bnel        $t5, $t7, L_15087048
    if (ctx->r13 != ctx->r15) {
        // 0x15086E18: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_15087048;
    }
    goto skip_0;
    // 0x15086E18: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_0:
    // 0x15086E1C: lbu         $t8, 0x6($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X6);
    // 0x15086E20: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15086E24: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x15086E28: bnel        $v0, $t8, L_15087048
    if (ctx->r2 != ctx->r24) {
        // 0x15086E2C: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_15087048;
    }
    goto skip_1;
    // 0x15086E2C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_1:
L_15086E30:
    // 0x15086E30: lbu         $v1, 0x9($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X9);
    // 0x15086E34: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15086E38: beq         $ra, $v1, L_1508703C
    if (ctx->r31 == ctx->r3) {
        // 0x15086E3C: slt         $at, $t3, $v1
        ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1508703C;
    }
    // 0x15086E3C: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15086E40: beq         $at, $zero, L_1508703C
    if (ctx->r1 == 0) {
        // 0x15086E44: sll         $t9, $v1, 4
        ctx->r25 = S32(ctx->r3 << 4);
            goto L_1508703C;
    }
    // 0x15086E44: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x15086E48: addu        $a1, $t9, $t4
    ctx->r5 = ADD32(ctx->r25, ctx->r12);
    // 0x15086E4C: lbu         $t6, 0xE($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XE);
    // 0x15086E50: bne         $t5, $t6, L_1508703C
    if (ctx->r13 != ctx->r14) {
        // 0x15086E54: nop
    
            goto L_1508703C;
    }
    // 0x15086E54: nop

    // 0x15086E58: lh          $a2, 0x4($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X4);
    // 0x15086E5C: lh          $v1, 0x4($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X4);
    // 0x15086E60: lh          $a0, 0x0($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X0);
    // 0x15086E64: lh          $a3, 0x0($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X0);
    // 0x15086E68: subu        $t7, $a2, $v1
    ctx->r15 = SUB32(ctx->r6, ctx->r3);
    // 0x15086E6C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15086E70: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x15086E74: subu        $t8, $a3, $a0
    ctx->r24 = SUB32(ctx->r7, ctx->r4);
    // 0x15086E78: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15086E7C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15086E80: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15086E84: cvt.s.w     $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    ctx->f24.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15086E88: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15086E8C: mul.s       $f6, $f24, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f12.fl);
    // 0x15086E90: cvt.s.w     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    ctx->f26.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15086E94: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15086E98: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x15086E9C: mul.s       $f8, $f14, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x15086EA0: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15086EA4: mul.s       $f10, $f30, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f12.fl);
    // 0x15086EA8: nop

    // 0x15086EAC: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x15086EB0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x15086EB4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15086EB8: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15086EBC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15086EC0: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15086EC4: add.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15086EC8: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15086ECC: add.s       $f10, $f30, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f30.fl + ctx->f4.fl;
    // 0x15086ED0: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x15086ED4: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15086ED8: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15086EDC: add.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x15086EE0: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x15086EE4: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x15086EE8: bc1f        L_15086F00
    if (!c1cs) {
        // 0x15086EEC: nop
    
            goto L_15086F00;
    }
    // 0x15086EEC: nop

    // 0x15086EF0: c.le.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl <= ctx->f18.fl;
    // 0x15086EF4: nop

    // 0x15086EF8: bc1tl       L_15086F24
    if (c1cs) {
        // 0x15086EFC: c.lt.s      $f2, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
            goto L_15086F24;
    }
    goto skip_2;
    // 0x15086EFC: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    skip_2:
L_15086F00:
    // 0x15086F00: c.lt.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
    // 0x15086F04: nop

    // 0x15086F08: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15086F0C: nop
    
            goto L_1508703C;
    }
    // 0x15086F0C: nop

    // 0x15086F10: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x15086F14: nop

    // 0x15086F18: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15086F1C: nop
    
            goto L_1508703C;
    }
    // 0x15086F1C: nop

    // 0x15086F20: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
L_15086F24:
    // 0x15086F24: nop

    // 0x15086F28: bc1fl       L_15086F38
    if (!c1cs) {
        // 0x15086F2C: c.lt.s      $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
            goto L_15086F38;
    }
    goto skip_3;
    // 0x15086F2C: c.lt.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
    skip_3:
    // 0x15086F30: neg.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = -ctx->f2.fl;
    // 0x15086F34: c.lt.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
L_15086F38:
    // 0x15086F38: nop

    // 0x15086F3C: bc1fl       L_15086F4C
    if (!c1cs) {
        // 0x15086F40: add.s       $f10, $f16, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f20.fl;
            goto L_15086F4C;
    }
    goto skip_4;
    // 0x15086F40: add.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f20.fl;
    skip_4:
    // 0x15086F44: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
    // 0x15086F48: add.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f20.fl;
L_15086F4C:
    // 0x15086F4C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x15086F50: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15086F54: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x15086F58: div.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x15086F5C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x15086F60: mul.s       $f6, $f24, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f12.fl);
    // 0x15086F64: nop

    // 0x15086F68: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x15086F6C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15086F70: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15086F74: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15086F78: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x15086F7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x15086F80: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15086F84: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15086F88: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15086F8C: nop

    // 0x15086F90: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15086F94: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x15086F98: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15086F9C: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x15086FA0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15086FA4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15086FA8: add.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x15086FAC: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x15086FB0: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15086FB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15086FB8: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x15086FBC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15086FC0: add.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x15086FC4: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x15086FC8: nop

    // 0x15086FCC: bc1f        L_15086FF4
    if (!c1cs) {
        // 0x15086FD0: nop
    
            goto L_15086FF4;
    }
    // 0x15086FD0: nop

    // 0x15086FD4: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x15086FD8: nop

    // 0x15086FDC: bc1fl       L_15086FF8
    if (!c1cs) {
        // 0x15086FE0: c.lt.s      $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
            goto L_15086FF8;
    }
    goto skip_5;
    // 0x15086FE0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    skip_5:
    // 0x15086FE4: c.le.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl <= ctx->f20.fl;
    // 0x15086FE8: nop

    // 0x15086FEC: bc1tl       L_15087028
    if (c1cs) {
        // 0x15086FF0: lwc1        $f8, 0x50($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
            goto L_15087028;
    }
    goto skip_6;
    // 0x15086FF0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    skip_6:
L_15086FF4:
    // 0x15086FF4: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
L_15086FF8:
    // 0x15086FF8: nop

    // 0x15086FFC: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15087000: nop
    
            goto L_1508703C;
    }
    // 0x15087000: nop

    // 0x15087004: c.lt.s      $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f16.fl < ctx->f22.fl;
    // 0x15087008: nop

    // 0x1508700C: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15087010: nop
    
            goto L_1508703C;
    }
    // 0x15087010: nop

    // 0x15087014: c.le.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl <= ctx->f16.fl;
    // 0x15087018: nop

    // 0x1508701C: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15087020: nop
    
            goto L_1508703C;
    }
    // 0x15087020: nop

    // 0x15087024: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
L_15087028:
    // 0x15087028: c.lt.s      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.fl < ctx->f8.fl;
    // 0x1508702C: nop

    // 0x15087030: bc1f        L_1508703C
    if (!c1cs) {
        // 0x15087034: nop
    
            goto L_1508703C;
    }
    // 0x15087034: nop

    // 0x15087038: swc1        $f28, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f28.u32l;
L_1508703C:
    // 0x1508703C: bne         $t0, $s0, L_15086E30
    if (ctx->r8 != ctx->r16) {
        // 0x15087040: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_15086E30;
    }
    // 0x15087040: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x15087044: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_15087048:
    // 0x15087048: slt         $at, $t3, $s1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1508704C: bnel        $at, $zero, L_15086E0C
    if (ctx->r1 != 0) {
        // 0x15087050: sll         $t6, $t3, 4
        ctx->r14 = S32(ctx->r11 << 4);
            goto L_15086E0C;
    }
    goto skip_7;
    // 0x15087050: sll         $t6, $t3, 4
    ctx->r14 = S32(ctx->r11 << 4);
    skip_7:
    // 0x15087054: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
L_15087058:
    // 0x15087058: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508705C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15087060: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15087064: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15087068: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1508706C: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x15087070: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15087074: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x15087078: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x1508707C: bc1f        L_150870AC
    if (!c1cs) {
        // 0x15087080: ldc1        $f30, 0x38($sp)
        CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
            goto L_150870AC;
    }
    // 0x15087080: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x15087084: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15087088: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1508708C: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x15087090: nop

    // 0x15087094: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15087098: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1508709C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150870A0: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150870A4: b           L_150870B8
    // 0x150870A8: nop

        goto L_150870B8;
    // 0x150870A8: nop

L_150870AC:
    // 0x150870AC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150870B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150870B4: nop

L_150870B8:
    // 0x150870B8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150870BC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x150870C0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x150870C4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x150870C8: jr          $ra
    // 0x150870CC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x150870CC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_15109ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15109ED4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15109ED8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15109EDC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15109EE0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15109EE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15109EE8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15109EEC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15109EF0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15109EF4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x15109EF8: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x15109EFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15109F00: bne         $t8, $zero, L_15109F10
    if (ctx->r24 != 0) {
        // 0x15109F04: addiu       $t3, $zero, 0x1B
        ctx->r11 = ADD32(0, 0X1B);
            goto L_15109F10;
    }
    // 0x15109F04: addiu       $t3, $zero, 0x1B
    ctx->r11 = ADD32(0, 0X1B);
    // 0x15109F08: b           L_15109FA8
    // 0x15109F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15109FA8;
    // 0x15109F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15109F10:
    // 0x15109F10: bgez        $a1, L_15109F20
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15109F14: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15109F20;
    }
    // 0x15109F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15109F18: b           L_15109F30
    // 0x15109F1C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
        goto L_15109F30;
    // 0x15109F1C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
L_15109F20:
    // 0x15109F20: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x15109F24: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15109F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15109F2C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_15109F30:
    // 0x15109F30: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x15109F34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15109F38: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15109F3C: lb          $t0, 0x53($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X53);
    // 0x15109F40: lb          $t1, 0x57($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X57);
    // 0x15109F44: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x15109F48: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x15109F4C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x15109F50: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x15109F54: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15109F58: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15109F5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x15109F60: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15109F64: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x15109F68: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x15109F6C: sb          $t0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r8;
    // 0x15109F70: sb          $t1, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r9;
    // 0x15109F74: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x15109F78: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15109F7C: jal         0x15149130
    // 0x15109F80: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15109F80: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x15109F84: beq         $v0, $zero, L_15109FA4
    if (ctx->r2 == 0) {
        // 0x15109F88: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15109FA4;
    }
    // 0x15109F88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15109F8C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15109F90: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15109F94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15109F98: jal         0x10022EC0
    // 0x15109F9C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15109F9C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x15109FA0: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_15109FA4:
    // 0x15109FA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15109FA8:
    // 0x15109FA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15109FAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15109FB0: jr          $ra
    // 0x15109FB4: nop

    return;
    return;
    // 0x15109FB4: nop

;}
RECOMP_FUNC void func_150C4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C4B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C4B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C4B10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150C4B14: jal         0x150C4AD8
    // 0x150C4B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150C4AD8(rdram, ctx);
        goto after_0;
    // 0x150C4B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150C4B1C: jal         0x1514933C
    // 0x150C4B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150C4B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150C4B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C4B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C4B2C: jr          $ra
    // 0x150C4B30: nop

    return;
    return;
    // 0x150C4B30: nop

;}
RECOMP_FUNC void func_15088218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088218: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1508821C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15088220: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x15088224: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x15088228: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x1508822C: bne         $v1, $zero, L_1508823C
    if (ctx->r3 != 0) {
        // 0x15088230: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1508823C;
    }
    // 0x15088230: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15088234: jr          $ra
    // 0x15088238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15088238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508823C:
    // 0x1508823C: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x15088240: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x15088244: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15088248: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1508824C: lh          $a2, 0x24($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X24);
    // 0x15088250: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15088254: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x15088258: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1508825C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x15088260: nop

    // 0x15088264: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x15088268: jr          $ra
    // 0x1508826C: nop

    return;
    return;
    // 0x1508826C: nop

;}
RECOMP_FUNC void func_1500E470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500E470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500E474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500E478: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1500E47C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1500E480: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E484: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500E488: sb          $t6, -0x2E70($at)
    MEM_B(-0X2E70, ctx->r1) = ctx->r14;
    // 0x1500E48C: addiu       $a0, $a0, -0x2E68
    ctx->r4 = ADD32(ctx->r4, -0X2E68);
    // 0x1500E490: jal         0x100226F0
    // 0x1500E494: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x1500E494: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x1500E498: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1500E49C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4A0: sb          $t7, -0x2BFC($at)
    MEM_B(-0X2BFC, ctx->r1) = ctx->r15;
    // 0x1500E4A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4A8: sb          $zero, -0x2BFB($at)
    MEM_B(-0X2BFB, ctx->r1) = 0;
    // 0x1500E4AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4B0: sb          $zero, -0x2BFA($at)
    MEM_B(-0X2BFA, ctx->r1) = 0;
    // 0x1500E4B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4B8: sw          $zero, 0x930($at)
    MEM_W(0X930, ctx->r1) = 0;
    // 0x1500E4BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4C0: sw          $zero, 0x934($at)
    MEM_W(0X934, ctx->r1) = 0;
    // 0x1500E4C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4C8: sw          $zero, 0x940($at)
    MEM_W(0X940, ctx->r1) = 0;
    // 0x1500E4CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E4D0: sb          $zero, -0x3300($at)
    MEM_B(-0X3300, ctx->r1) = 0;
    // 0x1500E4D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E4D8: sb          $zero, -0x74A0($at)
    MEM_B(-0X74A0, ctx->r1) = 0;
    // 0x1500E4DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500E4E0: sw          $zero, -0x1B20($at)
    MEM_W(-0X1B20, ctx->r1) = 0;
    // 0x1500E4E4: jal         0x15012720
    // 0x1500E4E8: nop

    func_15012720(rdram, ctx);
        goto after_1;
    // 0x1500E4E8: nop

    after_1:
    // 0x1500E4EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E4F0: sb          $v0, 0xA10($at)
    MEM_B(0XA10, ctx->r1) = ctx->r2;
    // 0x1500E4F4: jal         0x15012370
    // 0x1500E4F8: nop

    func_15012370(rdram, ctx);
        goto after_2;
    // 0x1500E4F8: nop

    after_2:
    // 0x1500E4FC: jal         0x151EF640
    // 0x1500E500: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_151EF640(rdram, ctx);
        goto after_3;
    // 0x1500E500: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_3:
    // 0x1500E504: jal         0x151732E0
    // 0x1500E508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151732E0(rdram, ctx);
        goto after_4;
    // 0x1500E508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x1500E50C: jal         0x15004FE0
    // 0x1500E510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15004FE0(rdram, ctx);
        goto after_5;
    // 0x1500E510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x1500E514: jal         0x150127B0
    // 0x1500E518: nop

    func_150127B0(rdram, ctx);
        goto after_6;
    // 0x1500E518: nop

    after_6:
    // 0x1500E51C: jal         0x1519582C
    // 0x1500E520: nop

    func_1519582C(rdram, ctx);
        goto after_7;
    // 0x1500E520: nop

    after_7:
    // 0x1500E524: jal         0x15008BE0
    // 0x1500E528: nop

    func_15008BE0(rdram, ctx);
        goto after_8;
    // 0x1500E528: nop

    after_8:
    // 0x1500E52C: jal         0x15008B90
    // 0x1500E530: nop

    func_15008B90(rdram, ctx);
        goto after_9;
    // 0x1500E530: nop

    after_9:
    // 0x1500E534: jal         0x1500E5C0
    // 0x1500E538: nop

    func_1500E5C0(rdram, ctx);
        goto after_10;
    // 0x1500E538: nop

    after_10:
    // 0x1500E53C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x1500E540: lw          $t8, 0xDF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XDF0);
    // 0x1500E544: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1500E548: lbu         $v0, 0xA($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0XA);
    // 0x1500E54C: beq         $v0, $zero, L_1500E564
    if (ctx->r2 == 0) {
        // 0x1500E550: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_1500E564;
    }
    // 0x1500E550: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1500E554: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1500E558: lw          $t9, 0x2D90($at)
    ctx->r25 = MEM_W(ctx->r1, 0X2D90);
    // 0x1500E55C: jalr        $t9
    // 0x1500E560: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x1500E560: nop

    after_11:
L_1500E564:
    // 0x1500E564: jal         0x1500ABA0
    // 0x1500E568: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1500ABA0(rdram, ctx);
        goto after_12;
    // 0x1500E568: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_12:
    // 0x1500E56C: jal         0x1500BEC0
    // 0x1500E570: nop

    func_1500BEC0(rdram, ctx);
        goto after_13;
    // 0x1500E570: nop

    after_13:
    // 0x1500E574: jal         0x1500AC14
    // 0x1500E578: nop

    func_1500AC14(rdram, ctx);
        goto after_14;
    // 0x1500E578: nop

    after_14:
    // 0x1500E57C: jal         0x151872B0
    // 0x1500E580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151872B0(rdram, ctx);
        goto after_15;
    // 0x1500E580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_15:
    // 0x1500E584: jal         0x15178EB0
    // 0x1500E588: nop

    func_15178EB0(rdram, ctx);
        goto after_16;
    // 0x1500E588: nop

    after_16:
    // 0x1500E58C: jal         0x15012FE0
    // 0x1500E590: nop

    func_15012FE0(rdram, ctx);
        goto after_17;
    // 0x1500E590: nop

    after_17:
    // 0x1500E594: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1500E598: lw          $t0, 0x2E4C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2E4C);
    // 0x1500E59C: lbu         $v0, 0x4($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X4);
    // 0x1500E5A0: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x1500E5A4: sltiu       $t2, $t1, 0x1
    ctx->r10 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x1500E5A8: jal         0x151645C4
    // 0x1500E5AC: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    func_151645C4(rdram, ctx);
        goto after_18;
    // 0x1500E5AC: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    after_18:
    // 0x1500E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500E5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500E5B8: jr          $ra
    // 0x1500E5BC: nop

    return;
    return;
    // 0x1500E5BC: nop

;}
RECOMP_FUNC void func_151AFC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AFC08: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x151AFC0C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151AFC10: beql        $t7, $zero, L_151AFC80
    if (ctx->r15 == 0) {
        // 0x151AFC14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151AFC80;
    }
    goto skip_0;
    // 0x151AFC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151AFC18: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x151AFC1C: slti        $at, $v1, 0x20
    ctx->r1 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x151AFC20: beql        $at, $zero, L_151AFC48
    if (ctx->r1 == 0) {
        // 0x151AFC24: addiu       $v0, $a0, 0x128
        ctx->r2 = ADD32(ctx->r4, 0X128);
            goto L_151AFC48;
    }
    goto skip_1;
    // 0x151AFC24: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
    skip_1:
    // 0x151AFC28: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
    // 0x151AFC2C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x151AFC30: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151AFC34: beql        $at, $zero, L_151AFC48
    if (ctx->r1 == 0) {
        // 0x151AFC38: addiu       $v0, $a0, 0x128
        ctx->r2 = ADD32(ctx->r4, 0X128);
            goto L_151AFC48;
    }
    goto skip_2;
    // 0x151AFC38: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
    skip_2:
    // 0x151AFC3C: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    // 0x151AFC40: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x151AFC44: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
L_151AFC48:
    // 0x151AFC48: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x151AFC4C: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151AFC50: beq         $at, $zero, L_151AFC7C
    if (ctx->r1 == 0) {
        // 0x151AFC54: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_151AFC7C;
    }
    // 0x151AFC54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151AFC58: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151AFC5C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151AFC60: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151AFC64: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151AFC68: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AFC6C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x151AFC70: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x151AFC74: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x151AFC78: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
L_151AFC7C:
    // 0x151AFC7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151AFC80:
    // 0x151AFC80: jr          $ra
    // 0x151AFC84: nop

    return;
    return;
    // 0x151AFC84: nop

;}
RECOMP_FUNC void func_100095A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100095A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x100095A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x100095A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x100095AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x100095B0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x100095B4: jal         0x100233C0
    // 0x100095B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x100095B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x100095BC: jal         0x100099BC
    // 0x100095C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_100099BC(rdram, ctx);
        goto after_1;
    // 0x100095C0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x100095C4: jal         0x1000A03C
    // 0x100095C8: nop

    func_1000A03C(rdram, ctx);
        goto after_2;
    // 0x100095C8: nop

    after_2:
    // 0x100095CC: lui         $t6, 0xA450
    ctx->r14 = S32(0XA450 << 16);
    // 0x100095D0: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x100095D4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x100095D8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x100095DC: srl         $t7, $v1, 2
    ctx->r15 = S32(U32(ctx->r3) >> 2);
    // 0x100095E0: beq         $v0, $zero, L_1000960C
    if (ctx->r2 == 0) {
        // 0x100095E4: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1000960C;
    }
    // 0x100095E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x100095E8: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x100095EC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x100095F0: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x100095F4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x100095F8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x100095FC: jal         0x10002DB0
    // 0x10009600: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x10009600: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_3:
    // 0x10009604: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x10009608: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
L_1000960C:
    // 0x1000960C: slti        $at, $v1, 0xF9
    ctx->r1 = SIGNED(ctx->r3) < 0XF9 ? 1 : 0;
    // 0x10009610: bne         $at, $zero, L_10009644
    if (ctx->r1 != 0) {
        // 0x10009614: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_10009644;
    }
    // 0x10009614: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009618: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000961C: addiu       $v1, $v1, 0xF84
    ctx->r3 = ADD32(ctx->r3, 0XF84);
    // 0x10009620: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x10009624: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x10009628: bne         $t9, $zero, L_10009644
    if (ctx->r25 != 0) {
        // 0x1000962C: nop
    
            goto L_10009644;
    }
    // 0x1000962C: nop

    // 0x10009630: lw          $t0, 0xF88($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XF88);
    // 0x10009634: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x10009638: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    // 0x1000963C: b           L_10009668
    // 0x10009640: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
        goto L_10009668;
    // 0x10009640: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_10009644:
    // 0x10009644: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x10009648: lw          $t2, 0xF8C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XF8C);
    // 0x1000964C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x10009650: addiu       $v1, $v1, 0xF84
    ctx->r3 = ADD32(ctx->r3, 0XF84);
    // 0x10009654: sh          $t2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r10;
    // 0x10009658: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x1000965C: beq         $v0, $zero, L_10009668
    if (ctx->r2 == 0) {
        // 0x10009660: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_10009668;
    }
    // 0x10009660: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x10009664: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_10009668:
    // 0x10009668: lh          $t4, 0x8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8);
    // 0x1000966C: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10009670: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x10009674: addu        $v0, $a2, $t5
    ctx->r2 = ADD32(ctx->r6, ctx->r13);
    // 0x10009678: andi        $t6, $v0, 0x1FFF
    ctx->r14 = ctx->r2 & 0X1FFF;
    // 0x1000967C: bnel        $t6, $zero, L_1000969C
    if (ctx->r14 != 0) {
        // 0x10009680: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_1000969C;
    }
    goto skip_0;
    // 0x10009680: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x10009684: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x10009688: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x1000968C: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x10009690: b           L_100096A0
    // 0x10009694: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_100096A0;
    // 0x10009694: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x10009698: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_1000969C:
    // 0x1000969C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_100096A0:
    // 0x100096A0: lw          $t0, -0x51B4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X51B4);
    // 0x100096A4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x100096A8: lh          $a3, 0x8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X8);
    // 0x100096AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x100096B0: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x100096B4: jal         0x10019498
    // 0x100096B8: lw          $a0, -0x1C78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C78);
    n_alAudioFrame(rdram, ctx);
        goto after_4;
    // 0x100096B8: lw          $a0, -0x1C78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C78);
    after_4:
    // 0x100096BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x100096C0: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x100096C4: addiu       $a1, $a1, -0x1C78
    ctx->r5 = ADD32(ctx->r5, -0X1C78);
    // 0x100096C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x100096CC: bne         $t2, $zero, L_100096DC
    if (ctx->r10 != 0) {
        // 0x100096D0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_100096DC;
    }
    // 0x100096D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x100096D4: b           L_100097B8
    // 0x100096D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_100097B8;
    // 0x100096D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_100096DC:
    // 0x100096DC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x100096E0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x100096E4: addiu       $t3, $t3, -0x19F8
    ctx->r11 = ADD32(ctx->r11, -0X19F8);
    // 0x100096E8: addiu       $t4, $s0, 0x70
    ctx->r12 = ADD32(ctx->r16, 0X70);
    // 0x100096EC: addiu       $a0, $a0, -0x51B4
    ctx->r4 = ADD32(ctx->r4, -0X51B4);
    // 0x100096F0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x100096F4: sw          $t3, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r11;
    // 0x100096F8: sw          $t4, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r12;
    // 0x100096FC: sw          $a2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r6;
    // 0x10009700: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x10009704: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x10009708: lui         $v0, 0x1003
    ctx->r2 = S32(0X1003 << 16);
    // 0x1000970C: addiu       $v0, $v0, -0x6F30
    ctx->r2 = ADD32(ctx->r2, -0X6F30);
    // 0x10009710: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x10009714: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x10009718: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1000971C: lui         $t6, 0x1003
    ctx->r14 = S32(0X1003 << 16);
    // 0x10009720: addiu       $t6, $t6, -0x6E60
    ctx->r14 = ADD32(ctx->r14, -0X6E60);
    // 0x10009724: sw          $t8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r24;
    // 0x10009728: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1000972C: lui         $t8, 0x1003
    ctx->r24 = S32(0X1003 << 16);
    // 0x10009730: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x10009734: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x10009738: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x1000973C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x10009740: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x10009744: addiu       $t8, $t8, -0x6E60
    ctx->r24 = ADD32(ctx->r24, -0X6E60);
    // 0x10009748: subu        $t3, $v1, $t2
    ctx->r11 = SUB32(ctx->r3, ctx->r10);
    // 0x1000974C: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x10009750: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x10009754: addiu       $t9, $t9, -0x36A0
    ctx->r25 = ADD32(ctx->r25, -0X36A0);
    // 0x10009758: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x1000975C: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x10009760: sw          $t5, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r13;
    // 0x10009764: sw          $a2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r6;
    // 0x10009768: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x1000976C: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    // 0x10009770: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x10009774: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x10009778: sw          $t9, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r25;
    // 0x1000977C: sw          $t0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r8;
    // 0x10009780: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x10009784: jal         0x10024F10
    // 0x10009788: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_5;
    // 0x10009788: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    after_5:
    // 0x1000978C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009790: addiu       $a0, $a0, -0x4E00
    ctx->r4 = ADD32(ctx->r4, -0X4E00);
    // 0x10009794: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x10009798: jal         0x10023580
    // 0x1000979C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x1000979C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x100097A0: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x100097A4: lw          $t2, -0x51B4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X51B4);
    // 0x100097A8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100097AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x100097B0: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x100097B4: sw          $t3, -0x51B4($at)
    MEM_W(-0X51B4, ctx->r1) = ctx->r11;
L_100097B8:
    // 0x100097B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x100097BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x100097C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100097C4: jr          $ra
    // 0x100097C8: nop

    return;
    return;
    // 0x100097C8: nop

;}
RECOMP_FUNC void func_1506EFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506EFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506EFD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506EFD4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506EFD8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506EFDC: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x1506EFE0: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x1506EFE4: beql        $t6, $at, L_1506EFF8
    if (ctx->r14 == ctx->r1) {
        // 0x1506EFE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506EFF8;
    }
    goto skip_0;
    // 0x1506EFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506EFEC: jal         0x150BB760
    // 0x1506EFF0: nop

    func_150BB760(rdram, ctx);
        goto after_0;
    // 0x1506EFF0: nop

    after_0:
    // 0x1506EFF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506EFF8:
    // 0x1506EFF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506EFFC: jr          $ra
    // 0x1506F000: nop

    return;
    return;
    // 0x1506F000: nop

;}
RECOMP_FUNC void func_15001B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001B8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15001B90: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x15001B94: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x15001B98: addiu       $v1, $v1, 0xDE0
    ctx->r3 = ADD32(ctx->r3, 0XDE0);
    // 0x15001B9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15001BA0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15001BA4: sra         $t7, $a0, 8
    ctx->r15 = S32(SIGNED(ctx->r4) >> 8);
    // 0x15001BA8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x15001BAC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15001BB0: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x15001BB4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15001BB8: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x15001BBC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x15001BC0: jr          $ra
    // 0x15001BC4: nop

    return;
    return;
    // 0x15001BC4: nop

;}
RECOMP_FUNC void func_151E82B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E82B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E82BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151E82C0: jal         0x151E530C
    // 0x151E82C4: nop

    func_151E530C(rdram, ctx);
        goto after_0;
    // 0x151E82C4: nop

    after_0:
    // 0x151E82C8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151E82CC: addiu       $t0, $t0, 0xA80
    ctx->r8 = ADD32(ctx->r8, 0XA80);
    // 0x151E82D0: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x151E82D4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151E82D8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E82DC: bne         $a1, $v0, L_151E8334
    if (ctx->r5 != ctx->r2) {
        // 0x151E82E0: addiu       $t1, $t1, 0xA90
        ctx->r9 = ADD32(ctx->r9, 0XA90);
            goto L_151E8334;
    }
    // 0x151E82E0: addiu       $t1, $t1, 0xA90
    ctx->r9 = ADD32(ctx->r9, 0XA90);
    // 0x151E82E4: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x151E82E8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x151E82EC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151E82F0: slti        $at, $t6, 0x79
    ctx->r1 = SIGNED(ctx->r14) < 0X79 ? 1 : 0;
    // 0x151E82F4: bne         $at, $zero, L_151E8334
    if (ctx->r1 != 0) {
        // 0x151E82F8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_151E8334;
    }
    // 0x151E82F8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151E82FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8300: sb          $t7, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r15;
    // 0x151E8304: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x151E8308: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E830C: sh          $t8, -0x234($at)
    MEM_H(-0X234, ctx->r1) = ctx->r24;
    // 0x151E8310: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E8314: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x151E8318: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151E831C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x151E8320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E8324: jal         0x1501C730
    // 0x151E8328: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_1;
    // 0x151E8328: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x151E832C: b           L_151E83DC
    // 0x151E8330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151E83DC;
    // 0x151E8330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151E8334:
    // 0x151E8334: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E8338: addiu       $t1, $t1, 0xA90
    ctx->r9 = ADD32(ctx->r9, 0XA90);
    // 0x151E833C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x151E8340: bne         $v0, $at, L_151E834C
    if (ctx->r2 != ctx->r1) {
        // 0x151E8344: lw          $v1, 0x0($t1)
        ctx->r3 = MEM_W(ctx->r9, 0X0);
            goto L_151E834C;
    }
    // 0x151E8344: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x151E8348: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
L_151E834C:
    // 0x151E834C: slti        $at, $v1, 0x1BE
    ctx->r1 = SIGNED(ctx->r3) < 0X1BE ? 1 : 0;
    // 0x151E8350: bnel        $at, $zero, L_151E83DC
    if (ctx->r1 != 0) {
        // 0x151E8354: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151E83DC;
    }
    goto skip_0;
    // 0x151E8354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x151E8358: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x151E835C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E8360: bltzl       $v0, L_151E83DC
    if (SIGNED(ctx->r2) < 0) {
        // 0x151E8364: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151E83DC;
    }
    goto skip_1;
    // 0x151E8364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x151E8368: lw          $v1, 0xBD8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XBD8);
    // 0x151E836C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151E8370: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x151E8374: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x151E8378: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x151E837C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x151E8380: beq         $a0, $t5, L_151E83A8
    if (ctx->r4 == ctx->r13) {
        // 0x151E8384: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_151E83A8;
    }
    // 0x151E8384: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
L_151E8388:
    // 0x151E8388: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
    // 0x151E838C: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x151E8390: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151E8394: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x151E8398: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x151E839C: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x151E83A0: bnel        $a0, $t2, L_151E8388
    if (ctx->r4 != ctx->r10) {
        // 0x151E83A4: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_151E8388;
    }
    goto skip_2;
    // 0x151E83A4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    skip_2:
L_151E83A8:
    // 0x151E83A8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x151E83AC: sh          $t3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r11;
    // 0x151E83B0: lh          $t4, 0x0($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X0);
    // 0x151E83B4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x151E83B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151E83BC: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x151E83C0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x151E83C4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x151E83C8: bnel        $t8, $at, L_151E83D8
    if (ctx->r24 != ctx->r1) {
        // 0x151E83CC: sw          $zero, 0x0($t1)
        MEM_W(0X0, ctx->r9) = 0;
            goto L_151E83D8;
    }
    goto skip_3;
    // 0x151E83CC: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    skip_3:
    // 0x151E83D0: sh          $a1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r5;
    // 0x151E83D4: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_151E83D8:
    // 0x151E83D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151E83DC:
    // 0x151E83DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151E83E0: jr          $ra
    // 0x151E83E4: nop

    return;
    return;
    // 0x151E83E4: nop

;}
RECOMP_FUNC void func_1518F49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F49C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1518F4A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1518F4A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518F4A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518F4AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1518F4B0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1518F4B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1518F4B8: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x1518F4BC: addiu       $a2, $s0, 0x18
    ctx->r6 = ADD32(ctx->r16, 0X18);
    // 0x1518F4C0: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x1518F4C4: jal         0x15169850
    // 0x1518F4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x1518F4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x1518F4CC: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x1518F4D0: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x1518F4D4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x1518F4D8: bnel        $t6, $at, L_1518F50C
    if (ctx->r14 != ctx->r1) {
        // 0x1518F4DC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1518F50C;
    }
    goto skip_0;
    // 0x1518F4DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1518F4E0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x1518F4E4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x1518F4E8: lbu         $a0, 0x1C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1C);
    // 0x1518F4EC: lbu         $a1, 0x4($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X4);
    // 0x1518F4F0: beq         $v0, $v1, L_1518F500
    if (ctx->r2 == ctx->r3) {
        // 0x1518F4F4: nop
    
            goto L_1518F500;
    }
    // 0x1518F4F4: nop

    // 0x1518F4F8: bnel        $a1, $a0, L_1518F50C
    if (ctx->r5 != ctx->r4) {
        // 0x1518F4FC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1518F50C;
    }
    goto skip_1;
    // 0x1518F4FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_1518F500:
    // 0x1518F500: jal         0x1516972C
    // 0x1518F504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x1518F504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1518F508: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1518F50C:
    // 0x1518F50C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1518F510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518F514: jr          $ra
    // 0x1518F518: nop

    return;
    return;
    // 0x1518F518: nop

;}
RECOMP_FUNC void func_151D1C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D1C98: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x151D1C9C: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x151D1CA0: sll         $s0, $a2, 16
    ctx->r16 = S32(ctx->r6 << 16);
    // 0x151D1CA4: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x151D1CA8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x151D1CAC: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x151D1CB0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151D1CB4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151D1CB8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x151D1CBC: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x151D1CC0: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x151D1CC4: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x151D1CC8: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x151D1CCC: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x151D1CD0: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x151D1CD4: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x151D1CD8: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x151D1CDC: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x151D1CE0: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x151D1CE4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x151D1CE8: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x151D1CEC: lb          $t7, 0x2C($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X2C);
    // 0x151D1CF0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x151D1CF4: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151D1CF8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x151D1CFC: beq         $at, $zero, L_151D1D0C
    if (ctx->r1 == 0) {
        // 0x151D1D00: addiu       $a0, $s3, 0x84
        ctx->r4 = ADD32(ctx->r19, 0X84);
            goto L_151D1D0C;
    }
    // 0x151D1D00: addiu       $a0, $s3, 0x84
    ctx->r4 = ADD32(ctx->r19, 0X84);
    // 0x151D1D04: b           L_151D21FC
    // 0x151D1D08: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_151D21FC;
    // 0x151D1D08: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_151D1D0C:
    // 0x151D1D0C: lw          $t8, 0x98($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X98);
    // 0x151D1D10: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151D1D14: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x151D1D18: sw          $t8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r24;
    // 0x151D1D1C: lbu         $t0, 0x25($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X25);
    // 0x151D1D20: lw          $fp, 0x94($s3)
    ctx->r30 = MEM_W(ctx->r19, 0X94);
    // 0x151D1D24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151D1D28: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x151D1D2C: jal         0x151D5D60
    // 0x151D1D30: addiu       $a2, $t1, 0xA0
    ctx->r6 = ADD32(ctx->r9, 0XA0);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151D1D30: addiu       $a2, $t1, 0xA0
    ctx->r6 = ADD32(ctx->r9, 0XA0);
    after_0:
    // 0x151D1D34: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1D38: addiu       $s0, $sp, 0xBF
    ctx->r16 = ADD32(ctx->r29, 0XBF);
    // 0x151D1D3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151D1D40: bne         $a0, $zero, L_151D1D50
    if (ctx->r4 != 0) {
        // 0x151D1D44: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_151D1D50;
    }
    // 0x151D1D44: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151D1D48: b           L_151D21FC
    // 0x151D1D4C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_151D21FC;
    // 0x151D1D4C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_151D1D50:
    // 0x151D1D50: addiu       $t3, $zero, 0xBC
    ctx->r11 = ADD32(0, 0XBC);
    // 0x151D1D54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151D1D58: sb          $t2, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r10;
    // 0x151D1D5C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x151D1D60: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151D1D64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151D1D68: addiu       $a1, $a1, 0x1430
    ctx->r5 = ADD32(ctx->r5, 0X1430);
    // 0x151D1D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D1D70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151D1D74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151D1D78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151D1D7C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151D1D80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151D1D84: jal         0x15142E24
    // 0x151D1D88: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    func_15142E24(rdram, ctx);
        goto after_1;
    // 0x151D1D88: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    after_1:
    // 0x151D1D8C: lui         $a1, 0x22
    ctx->r5 = S32(0X22 << 16);
    // 0x151D1D90: lui         $a2, 0x1D
    ctx->r6 = S32(0X1D << 16);
    // 0x151D1D94: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151D1D98: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x151D1D9C: jal         0x15142B7C
    // 0x151D1DA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_2;
    // 0x151D1DA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x151D1DA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151D1DA8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x151D1DAC: jal         0x1513F4E4
    // 0x151D1DB0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_3;
    // 0x151D1DB0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x151D1DB4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151D1DB8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151D1DBC: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151D1DC0: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151D1DC4: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x151D1DC8: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x151D1DCC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151D1DD0: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x151D1DD4: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    // 0x151D1DD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151D1DDC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151D1DE0: jal         0x15142FBC
    // 0x151D1DE4: or          $a2, $t0, $t1
    ctx->r6 = ctx->r8 | ctx->r9;
    func_15142FBC(rdram, ctx);
        goto after_4;
    // 0x151D1DE4: or          $a2, $t0, $t1
    ctx->r6 = ctx->r8 | ctx->r9;
    after_4:
    // 0x151D1DE8: lb          $a0, 0x2E($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X2E);
    // 0x151D1DEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151D1DF0: addiu       $s4, $zero, 0x28
    ctx->r20 = ADD32(0, 0X28);
    // 0x151D1DF4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151D1DF8: bgezl       $a0, L_151D1E0C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151D1DFC: addiu       $s0, $a0, -0x1
        ctx->r16 = ADD32(ctx->r4, -0X1);
            goto L_151D1E0C;
    }
    goto skip_0;
    // 0x151D1DFC: addiu       $s0, $a0, -0x1
    ctx->r16 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x151D1E00: lbu         $a0, 0x25($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X25);
    // 0x151D1E04: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151D1E08: addiu       $s0, $a0, -0x1
    ctx->r16 = ADD32(ctx->r4, -0X1);
L_151D1E0C:
    // 0x151D1E0C: bgez        $s0, L_151D1E1C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151D1E10: nop
    
            goto L_151D1E1C;
    }
    // 0x151D1E10: nop

    // 0x151D1E14: lbu         $s0, 0x25($s3)
    ctx->r16 = MEM_BU(ctx->r19, 0X25);
    // 0x151D1E18: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_151D1E1C:
    // 0x151D1E1C: multu       $a0, $s4
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D1E20: addiu       $t3, $sp, 0xCC
    ctx->r11 = ADD32(ctx->r29, 0XCC);
    // 0x151D1E24: addiu       $a3, $zero, 0x7FF
    ctx->r7 = ADD32(0, 0X7FF);
    // 0x151D1E28: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x151D1E2C: lui         $s6, 0x600
    ctx->r22 = S32(0X600 << 16);
    // 0x151D1E30: lui         $s5, 0x100
    ctx->r21 = S32(0X100 << 16);
    // 0x151D1E34: ori         $s5, $s5, 0x4008
    ctx->r21 = ctx->r21 | 0X4008;
    // 0x151D1E38: ori         $s6, $s6, 0x204
    ctx->r22 = ctx->r22 | 0X204;
    // 0x151D1E3C: ori         $s7, $s7, 0x604
    ctx->r23 = ctx->r23 | 0X604;
    // 0x151D1E40: mflo        $t2
    ctx->r10 = lo;
    // 0x151D1E44: addu        $v1, $fp, $t2
    ctx->r3 = ADD32(ctx->r30, ctx->r10);
    // 0x151D1E48: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151D1E4C: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x151D1E50: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151D1E54: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x151D1E58: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x151D1E5C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151D1E60: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151D1E64: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x151D1E68: lbu         $t6, 0x14($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X14);
    // 0x151D1E6C: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x151D1E70: lbu         $t8, 0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8);
    // 0x151D1E74: lwc1        $f2, 0x1C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151D1E78: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x151D1E7C: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D1E80: lwc1        $f26, 0x18($v1)
    ctx->f26.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151D1E84: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151D1E88: nop

    // 0x151D1E8C: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151D1E90: mflo        $a1
    ctx->r5 = lo;
    // 0x151D1E94: sra         $t9, $a1, 8
    ctx->r25 = S32(SIGNED(ctx->r5) >> 8);
    // 0x151D1E98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151D1E9C: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D1EA0: mflo        $t1
    ctx->r9 = lo;
    // 0x151D1EA4: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
    // 0x151D1EA8: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D1EAC: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151D1EB0: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x151D1EB4: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x151D1EB8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D1EBC: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151D1EC0: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151D1EC4: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x151D1EC8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1ECC: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x151D1ED0: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151D1ED4: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151D1ED8: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151D1EDC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151D1EE0: lbu         $t5, 0x14($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X14);
    // 0x151D1EE4: lbu         $t6, 0x8($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X8);
    // 0x151D1EE8: lwc1        $f24, 0x18($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151D1EEC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x151D1EF0: mul.s       $f20, $f8, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151D1EF4: trunc.w.s   $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    ctx->f4.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x151D1EF8: sh          $t1, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r9;
    // 0x151D1EFC: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151D1F00: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F04: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D1F08: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151D1F0C: mul.s       $f22, $f10, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D1F10: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x151D1F14: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x151D1F18: nop

    // 0x151D1F1C: sh          $t3, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r11;
    // 0x151D1F20: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151D1F24: mflo        $s2
    ctx->r18 = lo;
    // 0x151D1F28: sra         $t8, $s2, 8
    ctx->r24 = S32(SIGNED(ctx->r18) >> 8);
    // 0x151D1F2C: add.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x151D1F30: andi        $s2, $t8, 0xFF
    ctx->r18 = ctx->r24 & 0XFF;
    // 0x151D1F34: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F38: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151D1F3C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x151D1F40: nop

    // 0x151D1F44: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x151D1F48: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F4C: sb          $a1, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r5;
    // 0x151D1F50: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F54: sh          $v1, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r3;
    // 0x151D1F58: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F5C: sh          $a3, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r7;
    // 0x151D1F60: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F64: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x151D1F68: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151D1F6C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F70: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x151D1F74: addiu       $t7, $t3, 0x10
    ctx->r15 = ADD32(ctx->r11, 0X10);
    // 0x151D1F78: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x151D1F7C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151D1F80: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151D1F84: nop

    // 0x151D1F88: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x151D1F8C: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151D1F90: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1F94: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151D1F98: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x151D1F9C: nop

    // 0x151D1FA0: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x151D1FA4: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151D1FA8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FAC: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x151D1FB0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151D1FB4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151D1FB8: nop

    // 0x151D1FBC: sh          $t4, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r12;
    // 0x151D1FC0: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FC4: sb          $a1, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r5;
    // 0x151D1FC8: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FCC: sh          $v1, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r3;
    // 0x151D1FD0: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FD4: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
    // 0x151D1FD8: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FDC: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x151D1FE0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FE4: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x151D1FE8: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x151D1FEC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
L_151D1FF0:
    // 0x151D1FF0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x151D1FF4: addiu       $a3, $zero, 0x7FF
    ctx->r7 = ADD32(0, 0X7FF);
    // 0x151D1FF8: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x151D1FFC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x151D2000: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151D2004: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x151D2008: trunc.w.s   $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    ctx->f18.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x151D200C: sh          $t1, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r9;
    // 0x151D2010: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151D2014: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2018: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x151D201C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151D2020: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151D2024: nop

    // 0x151D2028: sh          $t3, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r11;
    // 0x151D202C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151D2030: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2034: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x151D2038: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151D203C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x151D2040: nop

    // 0x151D2044: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x151D2048: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x151D204C: sb          $s2, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r18;
    // 0x151D2050: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2054: sh          $a0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r4;
    // 0x151D2058: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x151D205C: sh          $a3, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r7;
    // 0x151D2060: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2064: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x151D2068: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151D206C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2070: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x151D2074: addiu       $t5, $t3, 0x10
    ctx->r13 = ADD32(ctx->r11, 0X10);
    // 0x151D2078: sw          $t5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r13;
    // 0x151D207C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151D2080: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151D2084: nop

    // 0x151D2088: sh          $t7, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r15;
    // 0x151D208C: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151D2090: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2094: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151D2098: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x151D209C: nop

    // 0x151D20A0: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x151D20A4: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151D20A8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20AC: sub.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x151D20B0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151D20B4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151D20B8: nop

    // 0x151D20BC: sh          $t4, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r12;
    // 0x151D20C0: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20C4: sb          $s2, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r18;
    // 0x151D20C8: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20CC: sh          $a0, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r4;
    // 0x151D20D0: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20D4: sh          $zero, 0x8($t7)
    MEM_H(0X8, ctx->r15) = 0;
    // 0x151D20D8: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20DC: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x151D20E0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20E4: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x151D20E8: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x151D20EC: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x151D20F0: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x151D20F4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151D20F8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x151D20FC: addiu       $t1, $t0, -0x40
    ctx->r9 = ADD32(ctx->r8, -0X40);
    // 0x151D2100: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x151D2104: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151D2108: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
    // 0x151D210C: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x151D2110: c.lt.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl < ctx->f24.fl;
    // 0x151D2114: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2118: bc1f        L_151D215C
    if (!c1cs) {
        // 0x151D211C: addiu       $a1, $a0, -0x20
        ctx->r5 = ADD32(ctx->r4, -0X20);
            goto L_151D215C;
    }
    // 0x151D211C: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    // 0x151D2120: jal         0x10022EC0
    // 0x151D2124: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151D2124: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_5:
    // 0x151D2128: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x151D212C: lh          $t2, -0x16($t4)
    ctx->r10 = MEM_H(ctx->r12, -0X16);
    // 0x151D2130: addiu       $t3, $t2, -0x2000
    ctx->r11 = ADD32(ctx->r10, -0X2000);
    // 0x151D2134: sh          $t3, -0x16($t4)
    MEM_H(-0X16, ctx->r12) = ctx->r11;
    // 0x151D2138: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x151D213C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x151D2140: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x151D2144: lh          $t5, -0x16($t7)
    ctx->r13 = MEM_H(ctx->r15, -0X16);
    // 0x151D2148: addiu       $t8, $t5, -0x2000
    ctx->r24 = ADD32(ctx->r13, -0X2000);
    // 0x151D214C: sh          $t8, -0x16($t7)
    MEM_H(-0X16, ctx->r15) = ctx->r24;
    // 0x151D2150: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x151D2154: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x151D2158: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_151D215C:
    // 0x151D215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2160: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x151D2164: bgezl       $s0, L_151D2178
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151D2168: lb          $v1, 0x2D($s3)
        ctx->r3 = MEM_B(ctx->r19, 0X2D);
            goto L_151D2178;
    }
    goto skip_1;
    // 0x151D2168: lb          $v1, 0x2D($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2D);
    skip_1:
    // 0x151D216C: lbu         $s0, 0x25($s3)
    ctx->r16 = MEM_BU(ctx->r19, 0X25);
    // 0x151D2170: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x151D2174: lb          $v1, 0x2D($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2D);
L_151D2178:
    // 0x151D2178: beq         $a0, $v1, L_151D21F0
    if (ctx->r4 == ctx->r3) {
        // 0x151D217C: nop
    
            goto L_151D21F0;
    }
    // 0x151D217C: nop

    // 0x151D2180: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D2184: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x151D2188: mflo        $t1
    ctx->r9 = lo;
    // 0x151D218C: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
    // 0x151D2190: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D2194: multu       $a0, $s4
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D2198: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151D219C: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x151D21A0: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x151D21A4: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D21A8: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151D21AC: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x151D21B0: mflo        $t6
    ctx->r14 = lo;
    // 0x151D21B4: lbu         $t8, 0x14($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X14);
    // 0x151D21B8: lbu         $t9, 0x8($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X8);
    // 0x151D21BC: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151D21C0: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151D21C4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D21C8: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151D21CC: mul.s       $f20, $f8, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151D21D0: addu        $t5, $fp, $t6
    ctx->r13 = ADD32(ctx->r30, ctx->r14);
    // 0x151D21D4: lwc1        $f26, 0x18($t5)
    ctx->f26.u32l = MEM_W(ctx->r13, 0X18);
    // 0x151D21D8: mul.s       $f22, $f10, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D21DC: lwc1        $f24, 0x18($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151D21E0: lb          $v1, 0x2D($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2D);
    // 0x151D21E4: mflo        $s2
    ctx->r18 = lo;
    // 0x151D21E8: sra         $t0, $s2, 8
    ctx->r8 = S32(SIGNED(ctx->r18) >> 8);
    // 0x151D21EC: andi        $s2, $t0, 0xFF
    ctx->r18 = ctx->r8 & 0XFF;
L_151D21F0:
    // 0x151D21F0: bnel        $a0, $v1, L_151D1FF0
    if (ctx->r4 != ctx->r3) {
        // 0x151D21F4: lwc1        $f10, 0xD8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_151D1FF0;
    }
    goto skip_2;
    // 0x151D21F4: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    skip_2:
    // 0x151D21F8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_151D21FC:
    // 0x151D21FC: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x151D2200: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x151D2204: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x151D2208: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x151D220C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x151D2210: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x151D2214: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x151D2218: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x151D221C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x151D2220: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x151D2224: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x151D2228: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x151D222C: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x151D2230: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x151D2234: jr          $ra
    // 0x151D2238: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x151D2238: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void guRotate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048310: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15048314: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15048318: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1504831C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15048320: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x15048324: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x15048328: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1504832C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15048330: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15048334: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15048338: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x1504833C: jal         0x15048190
    // 0x15048340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x15048340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15048344: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15048348: jal         0x150A7790
    // 0x1504834C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x1504834C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x15048350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15048354: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x15048358: jr          $ra
    // 0x1504835C: nop

    return;
    return;
    // 0x1504835C: nop

;}
RECOMP_FUNC void func_1511EF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511EF40: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1511EF44: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1511EF48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1511EF4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1511EF50: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1511EF54: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x1511EF58: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x1511EF5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1511EF60: bne         $v0, $zero, L_1511EF90
    if (ctx->r2 != 0) {
        // 0x1511EF64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1511EF90;
    }
    // 0x1511EF64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1511EF68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511EF6C: jal         0x10003C40
    // 0x1511EF70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1511EF70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1511EF74: sw          $v0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r2;
    // 0x1511EF78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1511EF7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1511EF80: jal         0x100226F0
    // 0x1511EF84: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1511EF84: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_1:
    // 0x1511EF88: b           L_1511EF94
    // 0x1511EF8C: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
        goto L_1511EF94;
    // 0x1511EF8C: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
L_1511EF90:
    // 0x1511EF90: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
L_1511EF94:
    // 0x1511EF94: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1511EF98: blezl       $v0, L_1511EFF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1511EF9C: lw          $v0, 0x80($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X80);
            goto L_1511EFF4;
    }
    goto skip_0;
    // 0x1511EF9C: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    skip_0:
    // 0x1511EFA0: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1511EFA4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1511EFA8: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x1511EFAC: sh          $t7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r15;
    // 0x1511EFB0: lh          $t8, 0x1C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1C);
    // 0x1511EFB4: bgtzl       $t8, L_1511EFF4
    if (SIGNED(ctx->r24) > 0) {
        // 0x1511EFB8: lw          $v0, 0x80($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X80);
            goto L_1511EFF4;
    }
    goto skip_1;
    // 0x1511EFB8: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    skip_1:
    // 0x1511EFBC: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x1511EFC0: lw          $t1, -0x4010($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4010);
    // 0x1511EFC4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1511EFC8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1511EFCC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1511EFD0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1511EFD4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1511EFD8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1511EFDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1511EFE0: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x1511EFE4: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x1511EFE8: jal         0x151239CC
    // 0x1511EFEC: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_151239CC(rdram, ctx);
        goto after_2;
    // 0x1511EFEC: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_2:
    // 0x1511EFF0: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
L_1511EFF4:
    // 0x1511EFF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511EFF8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x1511EFFC: bnel        $v0, $at, L_1511F130
    if (ctx->r2 != ctx->r1) {
        // 0x1511F000: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511F130;
    }
    goto skip_2;
    // 0x1511F000: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x1511F004: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x1511F008: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1511F00C: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1511F010: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1511F014: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1511F018: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1511F01C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1511F020: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1511F024: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1511F028: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1511F02C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1511F030: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1511F034: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x1511F038: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1511F03C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x1511F040: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511F044: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1511F048: nop

    // 0x1511F04C: sh          $t6, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r14;
    // 0x1511F050: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1511F054: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1511F058: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1511F05C: nop

    // 0x1511F060: addiu       $t1, $t0, 0x64
    ctx->r9 = ADD32(ctx->r8, 0X64);
    // 0x1511F064: sh          $t1, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r9;
    // 0x1511F068: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1511F06C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511F070: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x1511F074: nop

    // 0x1511F078: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    // 0x1511F07C: jal         0x15086D48
    // 0x1511F080: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_15086D48(rdram, ctx);
        goto after_3;
    // 0x1511F080: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_3:
    // 0x1511F084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1511F088: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x1511F08C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x1511F090: jal         0x15086CBC
    // 0x1511F094: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_15086CBC(rdram, ctx);
        goto after_4;
    // 0x1511F094: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x1511F098: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x1511F09C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1511F0A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511F0A4: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1511F0A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511F0AC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1511F0B0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1511F0B4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1511F0B8: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x1511F0BC: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x1511F0C0: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1511F0C4: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1511F0C8: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1511F0CC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1511F0D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511F0D4: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x1511F0D8: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x1511F0DC: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x1511F0E0: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1511F0E4: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1511F0E8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1511F0EC: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x1511F0F0: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1511F0F4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1511F0F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1511F0FC: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1511F100: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511F104: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x1511F108: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1511F10C: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x1511F110: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1511F114: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x1511F118: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1511F11C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x1511F120: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x1511F124: b           L_1511F308
    // 0x1511F128: sw          $t4, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r12;
        goto L_1511F308;
    // 0x1511F128: sw          $t4, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r12;
    // 0x1511F12C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_1511F130:
    // 0x1511F130: bne         $v0, $at, L_1511F308
    if (ctx->r2 != ctx->r1) {
        // 0x1511F134: lui         $t5, 0x8008
        ctx->r13 = S32(0X8008 << 16);
            goto L_1511F308;
    }
    // 0x1511F134: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x1511F138: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x1511F13C: lw          $t5, 0x2FA0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2FA0);
    // 0x1511F140: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1511F144: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1511F148: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1511F14C: bne         $at, $zero, L_1511F20C
    if (ctx->r1 != 0) {
        // 0x1511F150: addu        $t6, $t6, $v0
        ctx->r14 = ADD32(ctx->r14, ctx->r2);
            goto L_1511F20C;
    }
    // 0x1511F150: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1511F154: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511F158: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x1511F15C: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x1511F160: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511F164: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1511F168: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x1511F16C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x1511F170: lw          $t8, 0x2C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2C);
    // 0x1511F174: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    // 0x1511F178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511F17C: beq         $a1, $t8, L_1511F198
    if (ctx->r5 == ctx->r24) {
        // 0x1511F180: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_1511F198;
    }
    // 0x1511F180: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x1511F184: lw          $a3, 0x134($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X134);
    // 0x1511F188: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x1511F18C: jal         0x15123934
    // 0x1511F190: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15123934(rdram, ctx);
        goto after_5;
    // 0x1511F190: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_5:
    // 0x1511F194: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_1511F198:
    // 0x1511F198: lh          $t0, 0x10($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X10);
    // 0x1511F19C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511F1A0: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x1511F1A4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1511F1A8: nop

    // 0x1511F1AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511F1B0: swc1        $f6, 0x2BC($a0)
    MEM_W(0X2BC, ctx->r4) = ctx->f6.u32l;
    // 0x1511F1B4: lh          $t1, 0x12($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X12);
    // 0x1511F1B8: lw          $at, 0x2BC($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X2BC);
    // 0x1511F1BC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x1511F1C0: nop

    // 0x1511F1C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511F1C8: swc1        $f10, 0x2C0($a0)
    MEM_W(0X2C0, ctx->r4) = ctx->f10.u32l;
    // 0x1511F1CC: lh          $t2, 0x14($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X14);
    // 0x1511F1D0: sw          $at, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = ctx->r1;
    // 0x1511F1D4: lw          $t4, 0x2C0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X2C0);
    // 0x1511F1D8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x1511F1DC: swc1        $f0, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f0.u32l;
    // 0x1511F1E0: swc1        $f0, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->f0.u32l;
    // 0x1511F1E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1511F1E8: sw          $t4, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = ctx->r12;
    // 0x1511F1EC: swc1        $f18, 0x2C4($a0)
    MEM_W(0X2C4, ctx->r4) = ctx->f18.u32l;
    // 0x1511F1F0: lw          $at, 0x2C4($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X2C4);
    // 0x1511F1F4: sw          $at, 0x2AC($a0)
    MEM_W(0X2AC, ctx->r4) = ctx->r1;
    // 0x1511F1F8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x1511F1FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511F200: nop

    // 0x1511F204: swc1        $f4, 0x2FC($a0)
    MEM_W(0X2FC, ctx->r4) = ctx->f4.u32l;
    // 0x1511F208: sh          $t5, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r13;
L_1511F20C:
    // 0x1511F20C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511F210: lwc1        $f8, 0x3378($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3378);
    // 0x1511F214: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1511F218: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1511F21C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511F220: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1511F224: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x1511F228: div.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1511F22C: jal         0x15047C00
    // 0x1511F230: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_6;
    // 0x1511F230: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x1511F234: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1511F238: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1511F23C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511F240: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1511F244: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1511F248: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1511F24C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1511F250: jal         0x15047D60
    // 0x1511F254: sh          $t7, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r15;
    sinf_recomp(rdram, ctx);
        goto after_7;
    // 0x1511F254: sh          $t7, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r15;
    after_7:
    // 0x1511F258: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1511F25C: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1511F260: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x1511F264: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1511F268: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1511F26C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1511F270: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1511F274: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1511F278: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1511F27C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1511F280: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511F284: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1511F288: nop

    // 0x1511F28C: sh          $t9, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r25;
    // 0x1511F290: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1511F294: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1511F298: mul.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1511F29C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1511F2A0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511F2A4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1511F2A8: nop

    // 0x1511F2AC: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
    // 0x1511F2B0: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x1511F2B4: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1511F2B8: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1511F2BC: nop

    // 0x1511F2C0: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1511F2C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1511F2C8: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x1511F2CC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1511F2D0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x1511F2D4: nop

    // 0x1511F2D8: bc1fl       L_1511F30C
    if (!c1cs) {
        // 0x1511F2DC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1511F30C;
    }
    goto skip_3;
    // 0x1511F2DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x1511F2E0: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x1511F2E4: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
    // 0x1511F2E8: sb          $t3, 0x6E($s1)
    MEM_B(0X6E, ctx->r17) = ctx->r11;
    // 0x1511F2EC: lw          $t4, 0x2FA0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2FA0);
    // 0x1511F2F0: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x1511F2F4: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1511F2F8: bnel        $at, $zero, L_1511F30C
    if (ctx->r1 != 0) {
        // 0x1511F2FC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1511F30C;
    }
    goto skip_4;
    // 0x1511F2FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x1511F300: jal         0x151239CC
    // 0x1511F304: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_151239CC(rdram, ctx);
        goto after_8;
    // 0x1511F304: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_8:
L_1511F308:
    // 0x1511F308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1511F30C:
    // 0x1511F30C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1511F310: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1511F314: jr          $ra
    // 0x1511F318: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1511F318: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_100155A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100155A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x100155A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x100155A8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x100155AC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x100155B0: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x100155B4: lw          $t8, -0x45D4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45D4);
    // 0x100155B8: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x100155BC: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
    // 0x100155C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100155C4: lw          $t9, -0x45D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45D4);
    // 0x100155C8: sw          $zero, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = 0;
    // 0x100155CC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100155D0: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x100155D4: lw          $t1, -0x45D4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45D4);
    // 0x100155D8: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x100155DC: sw          $t0, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->r8;
    // 0x100155E0: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x100155E4: lw          $t3, -0x45D4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45D4);
    // 0x100155E8: addiu       $t2, $zero, 0x3E80
    ctx->r10 = ADD32(0, 0X3E80);
    // 0x100155EC: sw          $t2, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r10;
    // 0x100155F0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x100155F4: addiu       $t5, $zero, 0x58
    ctx->r13 = ADD32(0, 0X58);
    // 0x100155F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100155FC: lw          $a2, 0xC($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XC);
    // 0x10015600: lw          $a3, 0x0($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X0);
    // 0x10015604: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x10015608: jal         0x10012844
    // 0x1001560C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x1001560C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x10015610: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x10015614: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10015618: lw          $t7, -0x45D4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45D4);
    // 0x1001561C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x10015620: sw          $t6, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->r14;
    // 0x10015624: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x10015628: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x1001562C: lw          $t0, -0x45D4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45D4);
    // 0x10015630: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x10015634: sw          $t9, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->r25;
    // 0x10015638: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x1001563C: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x10015640: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10015644: lw          $a2, 0xC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XC);
    // 0x10015648: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x1001564C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x10015650: jal         0x10012844
    // 0x10015654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x10015654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x10015658: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x1001565C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10015660: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x10015664: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x10015668: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1001566C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x10015670: jal         0x1001C060
    // 0x10015674: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    n_alEvtqNew(rdram, ctx);
        goto after_2;
    // 0x10015674: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    after_2:
    // 0x10015678: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x1001567C: lw          $t4, -0x45D4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45D4);
    // 0x10015680: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10015684: lw          $t5, 0x40($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X40);
    // 0x10015688: sw          $t5, -0x45D8($at)
    MEM_W(-0X45D8, ctx->r1) = ctx->r13;
    // 0x1001568C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x10015690: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10015694: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x10015698: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001569C: sltiu       $at, $t8, 0x2
    ctx->r1 = ctx->r24 < 0X2 ? 1 : 0;
    // 0x100156A0: bne         $at, $zero, L_1001576C
    if (ctx->r1 != 0) {
        // 0x100156A4: nop
    
            goto L_1001576C;
    }
    // 0x100156A4: nop

L_100156A8:
    // 0x100156A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100156AC: lw          $t9, -0x45D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45D4);
    // 0x100156B0: lw          $t0, 0x40($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X40);
    // 0x100156B4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x100156B8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x100156BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x100156C0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x100156C4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x100156C8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x100156CC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x100156D0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x100156D4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x100156D8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x100156DC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x100156E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x100156E4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x100156E8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x100156EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x100156F0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x100156F4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x100156F8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x100156FC: addiu       $t9, $t8, -0x58
    ctx->r25 = ADD32(ctx->r24, -0X58);
    // 0x10015700: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x10015704: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10015708: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001570C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10015710: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x10015714: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x10015718: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001571C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x10015720: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10015724: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x10015728: beq         $t6, $zero, L_10015740
    if (ctx->r14 == 0) {
        // 0x1001572C: nop
    
            goto L_10015740;
    }
    // 0x1001572C: nop

    // 0x10015730: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x10015734: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10015738: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001573C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
L_10015740:
    // 0x10015740: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x10015744: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10015748: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001574C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x10015750: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10015754: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x10015758: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x1001575C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x10015760: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x10015764: bne         $at, $zero, L_100156A8
    if (ctx->r1 != 0) {
        // 0x10015768: nop
    
            goto L_100156A8;
    }
    // 0x10015768: nop

L_1001576C:
    // 0x1001576C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x10015770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10015774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10015778: lhu         $t8, 0x14($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X14);
    // 0x1001577C: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x10015780: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10015784: jal         0x10012844
    // 0x10015788: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x10015788: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x1001578C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10015790: sw          $v0, 0x28B8($at)
    MEM_W(0X28B8, ctx->r1) = ctx->r2;
    // 0x10015794: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x10015798: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1001579C: lhu         $t9, 0x14($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X14);
    // 0x100157A0: beq         $t9, $zero, L_100157E4
    if (ctx->r25 == 0) {
        // 0x100157A4: nop
    
            goto L_100157E4;
    }
    // 0x100157A4: nop

L_100157A8:
    // 0x100157A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x100157AC: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x100157B0: lw          $t1, 0x28B8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X28B8);
    // 0x100157B4: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x100157B8: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x100157BC: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x100157C0: sh          $t0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r8;
    // 0x100157C4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x100157C8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x100157CC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x100157D0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x100157D4: lhu         $t7, 0x14($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X14);
    // 0x100157D8: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x100157DC: bne         $at, $zero, L_100157A8
    if (ctx->r1 != 0) {
        // 0x100157E0: nop
    
            goto L_100157A8;
    }
    // 0x100157E0: nop

L_100157E4:
    // 0x100157E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100157E8: lw          $t9, -0x45D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45D4);
    // 0x100157EC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x100157F0: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x100157F4: lw          $t1, -0x45D4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45D4);
    // 0x100157F8: lui         $t2, 0x1001
    ctx->r10 = S32(0X1001 << 16);
    // 0x100157FC: addiu       $t2, $t2, 0x5878
    ctx->r10 = ADD32(ctx->r10, 0X5878);
    // 0x10015800: sw          $t2, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r10;
    // 0x10015804: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x10015808: lw          $t4, -0x45D4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45D4);
    // 0x1001580C: sw          $t4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r12;
    // 0x10015810: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10015814: jal         0x1001C690
    // 0x10015818: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    n_alSynAddPlayer(rdram, ctx);
        goto after_4;
    // 0x10015818: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    after_4:
    // 0x1001581C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x10015820: sh          $t0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r8;
    // 0x10015824: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10015828: lw          $t3, -0x45D4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45D4);
    // 0x1001582C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x10015830: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x10015834: addiu       $a0, $t3, 0x14
    ctx->r4 = ADD32(ctx->r11, 0X14);
    // 0x10015838: jal         0x1001C224
    // 0x1001583C: lw          $a2, 0x48($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x1001583C: lw          $a2, 0x48($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X48);
    after_5:
    // 0x10015840: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x10015844: lw          $t5, -0x45D4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45D4);
    // 0x10015848: addiu       $a0, $t5, 0x14
    ctx->r4 = ADD32(ctx->r13, 0X14);
    // 0x1001584C: jal         0x1001C108
    // 0x10015850: addiu       $a1, $t5, 0x28
    ctx->r5 = ADD32(ctx->r13, 0X28);
    n_alEvtqNextEvent(rdram, ctx);
        goto after_6;
    // 0x10015850: addiu       $a1, $t5, 0x28
    ctx->r5 = ADD32(ctx->r13, 0X28);
    after_6:
    // 0x10015854: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10015858: lw          $t8, -0x45D4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45D4);
    // 0x1001585C: sw          $v0, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r2;
    // 0x10015860: b           L_10015868
    // 0x10015864: nop

        goto L_10015868;
    // 0x10015864: nop

L_10015868:
    // 0x10015868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001586C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x10015870: jr          $ra
    // 0x10015874: nop

    return;
    return;
    // 0x10015874: nop

;}
RECOMP_FUNC void func_150D8B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8B88: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x150D8B8C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150D8B90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D8B94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150D8B98: lw          $t6, 0x31C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X31C);
    // 0x150D8B9C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150D8BA0: beql        $t6, $zero, L_150D8D74
    if (ctx->r14 == 0) {
        // 0x150D8BA4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150D8D74;
    }
    goto skip_0;
    // 0x150D8BA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x150D8BA8: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x150D8BAC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150D8BB0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x150D8BB4: bne         $t7, $at, L_150D8BC4
    if (ctx->r15 != ctx->r1) {
        // 0x150D8BB8: addiu       $a1, $zero, 0x37
        ctx->r5 = ADD32(0, 0X37);
            goto L_150D8BC4;
    }
    // 0x150D8BB8: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x150D8BBC: jal         0x1000D96C
    // 0x150D8BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000D96C(rdram, ctx);
        goto after_0;
    // 0x150D8BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_150D8BC4:
    // 0x150D8BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D8BC8: jal         0x150D8B10
    // 0x150D8BCC: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_150D8B10(rdram, ctx);
        goto after_1;
    // 0x150D8BCC: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_1:
    // 0x150D8BD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150D8BD4: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x150D8BD8: sb          $t8, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r24;
    // 0x150D8BDC: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150D8BE0: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x150D8BE4: addiu       $t0, $sp, 0xAC
    ctx->r8 = ADD32(ctx->r29, 0XAC);
    // 0x150D8BE8: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x150D8BEC: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x150D8BF0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x150D8BF4: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x150D8BF8: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x150D8BFC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150D8C00: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x150D8C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D8C08: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x150D8C0C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x150D8C10: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x150D8C14: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150D8C18: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150D8C1C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150D8C20: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x150D8C24: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150D8C28: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150D8C2C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150D8C30: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150D8C34: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150D8C38: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x150D8C3C: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x150D8C40: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150D8C44: jal         0x150D8B3C
    // 0x150D8C48: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    func_150D8B3C(rdram, ctx);
        goto after_2;
    // 0x150D8C48: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    after_2:
    // 0x150D8C4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D8C50: lwc1        $f4, 0xB48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB48);
    // 0x150D8C54: jal         0x151EF610
    // 0x150D8C58: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    func_151EF610(rdram, ctx);
        goto after_3;
    // 0x150D8C58: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x150D8C5C: bgez        $v0, L_150D8C70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150D8C60: andi        $a0, $v0, 0x1
        ctx->r4 = ctx->r2 & 0X1;
            goto L_150D8C70;
    }
    // 0x150D8C60: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x150D8C64: beq         $a0, $zero, L_150D8C70
    if (ctx->r4 == 0) {
        // 0x150D8C68: nop
    
            goto L_150D8C70;
    }
    // 0x150D8C68: nop

    // 0x150D8C6C: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
L_150D8C70:
    // 0x150D8C70: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x150D8C74: addiu       $t3, $zero, 0x1388
    ctx->r11 = ADD32(0, 0X1388);
    // 0x150D8C78: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150D8C7C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150D8C80: addiu       $a0, $a0, 0x1B6
    ctx->r4 = ADD32(ctx->r4, 0X1B6);
    // 0x150D8C84: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150D8C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D8C8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D8C90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D8C94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D8C98: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150D8C9C: jal         0x10010F88
    // 0x150D8CA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_10010F88(rdram, ctx);
        goto after_4;
    // 0x150D8CA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x150D8CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150D8CA8: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x150D8CAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D8CB0: sh          $v0, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r2;
    // 0x150D8CB4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x150D8CB8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150D8CBC: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x150D8CC0: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x150D8CC4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x150D8CC8: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x150D8CCC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x150D8CD0: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x150D8CD4: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x150D8CD8: beq         $v1, $zero, L_150D8CF4
    if (ctx->r3 == 0) {
        // 0x150D8CDC: addiu       $t9, $zero, 0x36
        ctx->r25 = ADD32(0, 0X36);
            goto L_150D8CF4;
    }
    // 0x150D8CDC: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x150D8CE0: lbu         $t6, 0x84($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X84);
    // 0x150D8CE4: lbu         $t5, 0xA4($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA4);
    // 0x150D8CE8: beq         $t6, $zero, L_150D8CF4
    if (ctx->r14 == 0) {
        // 0x150D8CEC: andi        $t4, $t5, 0xFFFE
        ctx->r12 = ctx->r13 & 0XFFFE;
            goto L_150D8CF4;
    }
    // 0x150D8CEC: andi        $t4, $t5, 0xFFFE
    ctx->r12 = ctx->r13 & 0XFFFE;
    // 0x150D8CF0: sb          $t4, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r12;
L_150D8CF4:
    // 0x150D8CF4: sb          $t7, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r15;
    // 0x150D8CF8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150D8CFC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x150D8D00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150D8D04: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150D8D08: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x150D8D0C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150D8D10: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150D8D14: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150D8D18: sh          $t2, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r10;
    // 0x150D8D1C: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x150D8D20: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x150D8D24: sb          $t1, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r9;
    // 0x150D8D28: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x150D8D2C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x150D8D30: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150D8D34: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150D8D38: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150D8D3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150D8D40: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x150D8D44: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x150D8D48: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x150D8D4C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x150D8D50: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x150D8D54: jal         0x15147A80
    // 0x150D8D58: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15147A80(rdram, ctx);
        goto after_5;
    // 0x150D8D58: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_5:
    // 0x150D8D5C: beq         $v0, $zero, L_150D8D70
    if (ctx->r2 == 0) {
        // 0x150D8D60: addiu       $a1, $sp, 0x58
        ctx->r5 = ADD32(ctx->r29, 0X58);
            goto L_150D8D70;
    }
    // 0x150D8D60: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x150D8D64: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x150D8D68: jal         0x10022EC0
    // 0x150D8D6C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x150D8D6C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_6:
L_150D8D70:
    // 0x150D8D70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150D8D74:
    // 0x150D8D74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150D8D78: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x150D8D7C: jr          $ra
    // 0x150D8D80: nop

    return;
    return;
    // 0x150D8D80: nop

;}
RECOMP_FUNC void func_15001DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001DE0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15001DE4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15001DE8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15001DEC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15001DF0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15001DF4: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15001DF8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15001DFC: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x15001E00: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x15001E04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15001E08: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15001E0C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15001E10: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x15001E14: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x15001E18: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x15001E1C: subu        $a0, $s5, $s2
    ctx->r4 = SUB32(ctx->r21, ctx->r18);
    // 0x15001E20: addu        $a1, $s5, $s2
    ctx->r5 = ADD32(ctx->r21, ctx->r18);
    // 0x15001E24: subu        $a2, $s3, $s4
    ctx->r6 = SUB32(ctx->r19, ctx->r20);
    // 0x15001E28: addu        $a3, $s3, $s4
    ctx->r7 = ADD32(ctx->r19, ctx->r20);
    // 0x15001E2C: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x15001E30: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x15001E34: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x15001E38: lhu         $s0, 0xDD8($s0)
    ctx->r16 = MEM_HU(ctx->r16, 0XDD8);
    // 0x15001E3C: lw          $s1, 0xDD4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0XDD4);
    // 0x15001E40: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15001E44: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15001E48: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15001E4C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x15001E50: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x15001E54: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x15001E58: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x15001E5C: sw          $s4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r20;
    // 0x15001E60: jal         0x15002248
    // 0x15001E64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_15002248(rdram, ctx);
        goto after_0;
    // 0x15001E64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x15001E68: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15001E6C: bne         $at, $zero, L_15001E7C
    if (ctx->r1 != 0) {
        // 0x15001E70: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_15001E7C;
    }
    // 0x15001E70: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15001E74: beq         $at, $zero, L_15001EE4
    if (ctx->r1 == 0) {
        // 0x15001E78: nop
    
            goto L_15001EE4;
    }
    // 0x15001E78: nop

L_15001E7C:
    // 0x15001E7C: jal         0x15001B10
    // 0x15001E80: nop

    func_15001B10(rdram, ctx);
        goto after_1;
    // 0x15001E80: nop

    after_1:
    // 0x15001E84: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x15001E88: addiu       $v1, $v1, 0xDD0
    ctx->r3 = ADD32(ctx->r3, 0XDD0);
    // 0x15001E8C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15001E90: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x15001E94: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x15001E98: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x15001E9C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x15001EA0: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x15001EA4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x15001EA8: sh          $s2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r18;
    // 0x15001EAC: sh          $s5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r21;
    // 0x15001EB0: sh          $s3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r19;
    // 0x15001EB4: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x15001EB8: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x15001EBC: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x15001EC0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x15001EC4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x15001EC8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x15001ECC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x15001ED0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x15001ED4: jal         0x15002008
    // 0x15001ED8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15002008(rdram, ctx);
        goto after_2;
    // 0x15001ED8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
    // 0x15001EDC: b           L_15001FD8
    // 0x15001EE0: nop

        goto L_15001FD8;
    // 0x15001EE0: nop

L_15001EE4:
    // 0x15001EE4: jal         0x15001B10
    // 0x15001EE8: nop

    func_15001B10(rdram, ctx);
        goto after_3;
    // 0x15001EE8: nop

    after_3:
    // 0x15001EEC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x15001EF0: sra         $s0, $s2, 1
    ctx->r16 = S32(SIGNED(ctx->r18) >> 1);
    // 0x15001EF4: subu        $a0, $s5, $s0
    ctx->r4 = SUB32(ctx->r21, ctx->r16);
    // 0x15001EF8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x15001EFC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x15001F00: sh          $s2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r18;
    // 0x15001F04: sh          $s5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r21;
    // 0x15001F08: sh          $s3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r19;
    // 0x15001F0C: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x15001F10: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x15001F14: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x15001F18: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x15001F1C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x15001F20: sra         $a3, $s1, 1
    ctx->r7 = S32(SIGNED(ctx->r17) >> 1);
    // 0x15001F24: subu        $a1, $s3, $a3
    ctx->r5 = SUB32(ctx->r19, ctx->r7);
    // 0x15001F28: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x15001F2C: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x15001F30: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15001F34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15001F38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15001F3C: jal         0x15001DE0
    // 0x15001F40: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_15001DE0(rdram, ctx);
        goto after_4;
    // 0x15001F40: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_4:
    // 0x15001F44: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x15001F48: subu        $t9, $v0, $s4
    ctx->r25 = SUB32(ctx->r2, ctx->r20);
    // 0x15001F4C: sh          $t9, 0xC($s4)
    MEM_H(0XC, ctx->r20) = ctx->r25;
    // 0x15001F50: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15001F54: addu        $a1, $s1, $s3
    ctx->r5 = ADD32(ctx->r17, ctx->r19);
    // 0x15001F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15001F5C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15001F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15001F64: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15001F68: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x15001F6C: jal         0x15001DE0
    // 0x15001F70: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15001DE0(rdram, ctx);
        goto after_5;
    // 0x15001F70: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x15001F74: subu        $t1, $v0, $s2
    ctx->r9 = SUB32(ctx->r2, ctx->r18);
    // 0x15001F78: sh          $t1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r9;
    // 0x15001F7C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x15001F80: addu        $a0, $s0, $s5
    ctx->r4 = ADD32(ctx->r16, ctx->r21);
    // 0x15001F84: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15001F88: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15001F8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15001F90: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x15001F94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15001F98: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x15001F9C: jal         0x15001DE0
    // 0x15001FA0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15001DE0(rdram, ctx);
        goto after_6;
    // 0x15001FA0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_6:
    // 0x15001FA4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x15001FA8: subu        $t3, $v0, $s3
    ctx->r11 = SUB32(ctx->r2, ctx->r19);
    // 0x15001FAC: sh          $t3, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r11;
    // 0x15001FB0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x15001FB4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15001FB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15001FBC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15001FC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15001FC4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x15001FC8: jal         0x15001DE0
    // 0x15001FCC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15001DE0(rdram, ctx);
        goto after_7;
    // 0x15001FCC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_7:
    // 0x15001FD0: subu        $t5, $v0, $s2
    ctx->r13 = SUB32(ctx->r2, ctx->r18);
    // 0x15001FD4: sh          $t5, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r13;
L_15001FD8:
    // 0x15001FD8: jal         0x10004074
    // 0x15001FDC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_10004074(rdram, ctx);
        goto after_8;
    // 0x15001FDC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_8:
    // 0x15001FE0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x15001FE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15001FE8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15001FEC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15001FF0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15001FF4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15001FF8: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15001FFC: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15002000: jr          $ra
    // 0x15002004: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x15002004: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_15083E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15083E90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15083E94: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15083E98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15083E9C: bne         $a0, $zero, L_15083EAC
    if (ctx->r4 != 0) {
        // 0x15083EA0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15083EAC;
    }
    // 0x15083EA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15083EA4: jr          $ra
    // 0x15083EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15083EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15083EAC:
    // 0x15083EAC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15083EB0: lw          $t7, -0x3D30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D30);
    // 0x15083EB4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15083EB8: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15083EBC: beq         $t7, $zero, L_15083ED8
    if (ctx->r15 == 0) {
        // 0x15083EC0: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_15083ED8;
    }
    // 0x15083EC0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15083EC4: lbu         $t8, -0x3CF5($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3CF5);
    // 0x15083EC8: bne         $v0, $t8, L_15083ED8
    if (ctx->r2 != ctx->r24) {
        // 0x15083ECC: nop
    
            goto L_15083ED8;
    }
    // 0x15083ECC: nop

    // 0x15083ED0: jr          $ra
    // 0x15083ED4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x15083ED4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15083ED8:
    // 0x15083ED8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15083EDC: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x15083EE0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15083EE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15083EE8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15083EEC: beql        $t9, $zero, L_15083F0C
    if (ctx->r25 == 0) {
        // 0x15083EF0: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_15083F0C;
    }
    goto skip_0;
    // 0x15083EF0: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    skip_0:
    // 0x15083EF4: lbu         $t0, 0x3B($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3B);
    // 0x15083EF8: bnel        $v0, $t0, L_15083F0C
    if (ctx->r2 != ctx->r8) {
        // 0x15083EFC: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_15083F0C;
    }
    goto skip_1;
    // 0x15083EFC: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    skip_1:
    // 0x15083F00: jr          $ra
    // 0x15083F04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15083F04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15083F08: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
L_15083F0C:
    // 0x15083F0C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15083F10: beql        $t1, $zero, L_15083F30
    if (ctx->r9 == 0) {
        // 0x15083F14: lw          $t3, 0x32C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F30;
    }
    goto skip_2;
    // 0x15083F14: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
    skip_2:
    // 0x15083F18: lbu         $t2, 0x3B($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3B);
    // 0x15083F1C: bnel        $v0, $t2, L_15083F30
    if (ctx->r2 != ctx->r10) {
        // 0x15083F20: lw          $t3, 0x32C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F30;
    }
    goto skip_3;
    // 0x15083F20: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
    skip_3:
    // 0x15083F24: jr          $ra
    // 0x15083F28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15083F28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15083F2C: lw          $t3, 0x32C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X32C);
L_15083F30:
    // 0x15083F30: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15083F34: beql        $t3, $zero, L_15083F54
    if (ctx->r11 == 0) {
        // 0x15083F38: lw          $t5, 0x32C($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F54;
    }
    goto skip_4;
    // 0x15083F38: lw          $t5, 0x32C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X32C);
    skip_4:
    // 0x15083F3C: lbu         $t4, 0x3B($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3B);
    // 0x15083F40: bnel        $v0, $t4, L_15083F54
    if (ctx->r2 != ctx->r12) {
        // 0x15083F44: lw          $t5, 0x32C($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F54;
    }
    goto skip_5;
    // 0x15083F44: lw          $t5, 0x32C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X32C);
    skip_5:
    // 0x15083F48: jr          $ra
    // 0x15083F4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15083F4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15083F50: lw          $t5, 0x32C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X32C);
L_15083F54:
    // 0x15083F54: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15083F58: beql        $t5, $zero, L_15083F78
    if (ctx->r13 == 0) {
        // 0x15083F5C: lw          $t7, 0x32C($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F78;
    }
    goto skip_6;
    // 0x15083F5C: lw          $t7, 0x32C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X32C);
    skip_6:
    // 0x15083F60: lbu         $t6, 0x3B($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3B);
    // 0x15083F64: bnel        $v0, $t6, L_15083F78
    if (ctx->r2 != ctx->r14) {
        // 0x15083F68: lw          $t7, 0x32C($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X32C);
            goto L_15083F78;
    }
    goto skip_7;
    // 0x15083F68: lw          $t7, 0x32C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X32C);
    skip_7:
    // 0x15083F6C: jr          $ra
    // 0x15083F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15083F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15083F74: lw          $t7, 0x32C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X32C);
L_15083F78:
    // 0x15083F78: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15083F7C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15083F80: beq         $t7, $zero, L_15083F9C
    if (ctx->r15 == 0) {
        // 0x15083F84: nop
    
            goto L_15083F9C;
    }
    // 0x15083F84: nop

    // 0x15083F88: lbu         $t8, 0x3B($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3B);
    // 0x15083F8C: bne         $v0, $t8, L_15083F9C
    if (ctx->r2 != ctx->r24) {
        // 0x15083F90: nop
    
            goto L_15083F9C;
    }
    // 0x15083F90: nop

    // 0x15083F94: jr          $ra
    // 0x15083F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15083F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15083F9C:
    // 0x15083F9C: bne         $a0, $a1, L_15083F0C
    if (ctx->r4 != ctx->r5) {
        // 0x15083FA0: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_15083F0C;
    }
    // 0x15083FA0: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x15083FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15083FA8: jr          $ra
    // 0x15083FAC: nop

    return;
    return;
    // 0x15083FAC: nop

;}
RECOMP_FUNC void func_1516FE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516FE1C: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x1516FE20: sw          $s6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r22;
    // 0x1516FE24: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x1516FE28: sw          $ra, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r31;
    // 0x1516FE2C: sw          $fp, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r30;
    // 0x1516FE30: sw          $s7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r23;
    // 0x1516FE34: sw          $s5, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r21;
    // 0x1516FE38: sw          $s4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r20;
    // 0x1516FE3C: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x1516FE40: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x1516FE44: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x1516FE48: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x1516FE4C: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x1516FE50: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x1516FE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516FE58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1516FE5C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1516FE60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1516FE64: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1516FE68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1516FE6C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1516FE70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1516FE74: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1516FE78: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1516FE7C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1516FE80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1516FE84: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x1516FE88: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1516FE8C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1516FE90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516FE94: bne         $v0, $t8, L_1516FEB0
    if (ctx->r2 != ctx->r24) {
        // 0x1516FE98: andi        $s3, $s6, 0xFFFF
        ctx->r19 = ctx->r22 & 0XFFFF;
            goto L_1516FEB0;
    }
    // 0x1516FE98: andi        $s3, $s6, 0xFFFF
    ctx->r19 = ctx->r22 & 0XFFFF;
    // 0x1516FE9C: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x1516FEA0: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x1516FEA4: addiu       $s2, $zero, 0x19
    ctx->r18 = ADD32(0, 0X19);
    // 0x1516FEA8: b           L_1516FED4
    // 0x1516FEAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_1516FED4;
    // 0x1516FEAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_1516FEB0:
    // 0x1516FEB0: addiu       $fp, $t0, 0x14
    ctx->r30 = ADD32(ctx->r8, 0X14);
    // 0x1516FEB4: sra         $s7, $fp, 16
    ctx->r23 = S32(SIGNED(ctx->r30) >> 16);
    // 0x1516FEB8: sll         $t9, $s7, 16
    ctx->r25 = S32(ctx->r23 << 16);
    // 0x1516FEBC: sll         $t2, $fp, 16
    ctx->r10 = S32(ctx->r30 << 16);
    // 0x1516FEC0: sra         $s7, $t9, 16
    ctx->r23 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1516FEC4: sra         $fp, $t2, 16
    ctx->r30 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1516FEC8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1516FECC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x1516FED0: lw          $s2, 0xFC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XFC);
L_1516FED4:
    // 0x1516FED4: andi        $s4, $a0, 0xFF
    ctx->r20 = ctx->r4 & 0XFF;
    // 0x1516FED8: andi        $s5, $a1, 0xFFFF
    ctx->r21 = ctx->r5 & 0XFFFF;
    // 0x1516FEDC: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x1516FEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1516FEE4:
    // 0x1516FEE4: bne         $s0, $v0, L_1516FEF4
    if (ctx->r16 != ctx->r2) {
        // 0x1516FEE8: sll         $a0, $s7, 16
        ctx->r4 = S32(ctx->r23 << 16);
            goto L_1516FEF4;
    }
    // 0x1516FEE8: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x1516FEEC: addiu       $s2, $zero, 0x1B
    ctx->r18 = ADD32(0, 0X1B);
    // 0x1516FEF0: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_1516FEF4:
    // 0x1516FEF4: sll         $a1, $fp, 16
    ctx->r5 = S32(ctx->r30 << 16);
    // 0x1516FEF8: addiu       $t7, $zero, 0xAA
    ctx->r15 = ADD32(0, 0XAA);
    // 0x1516FEFC: addiu       $t8, $zero, 0xAA
    ctx->r24 = ADD32(0, 0XAA);
    // 0x1516FF00: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x1516FF04: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x1516FF08: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1516FF0C: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1516FF10: addiu       $t6, $zero, 0xAA
    ctx->r14 = ADD32(0, 0XAA);
    // 0x1516FF14: lbu         $t7, 0x10B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X10B);
    // 0x1516FF18: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x1516FF1C: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x1516FF20: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x1516FF24: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x1516FF28: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1516FF2C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x1516FF30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1516FF34: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x1516FF38: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x1516FF3C: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x1516FF40: addiu       $t3, $zero, 0x168
    ctx->r11 = ADD32(0, 0X168);
    // 0x1516FF44: sw          $t3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r11;
    // 0x1516FF48: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x1516FF4C: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x1516FF50: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x1516FF54: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x1516FF58: sw          $t4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r12;
    // 0x1516FF5C: sw          $t5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r13;
    // 0x1516FF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1516FF64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516FF68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516FF6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1516FF70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1516FF74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1516FF78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1516FF7C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1516FF80: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1516FF84: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1516FF88: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1516FF8C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x1516FF90: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1516FF94: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1516FF98: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1516FF9C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1516FFA0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1516FFA4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x1516FFA8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1516FFAC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1516FFB0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1516FFB4: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x1516FFB8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1516FFBC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1516FFC0: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x1516FFC4: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x1516FFC8: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x1516FFCC: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x1516FFD0: sw          $s5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r21;
    // 0x1516FFD4: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1516FFD8: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x1516FFDC: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1516FFE0: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1516FFE4: sw          $s2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r18;
    // 0x1516FFE8: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1516FFEC: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x1516FFF0: jal         0x1516D99C
    // 0x1516FFF4: sw          $t8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r24;
    func_1516D99C(rdram, ctx);
        goto after_0;
    // 0x1516FFF4: sw          $t8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r24;
    after_0:
    // 0x1516FFF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1516FFFC: bnel        $s0, $s6, L_1516FEE4
    if (ctx->r16 != ctx->r22) {
        // 0x15170000: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1516FEE4;
    }
    goto skip_0;
    // 0x15170000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15170004: lw          $ra, 0xF4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XF4);
    // 0x15170008: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x1517000C: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x15170010: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x15170014: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x15170018: lw          $s4, 0xE0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE0);
    // 0x1517001C: lw          $s5, 0xE4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XE4);
    // 0x15170020: lw          $s6, 0xE8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XE8);
    // 0x15170024: lw          $s7, 0xEC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XEC);
    // 0x15170028: lw          $fp, 0xF0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XF0);
    // 0x1517002C: jr          $ra
    // 0x15170030: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x15170030: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_150E3020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3020: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150E3024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150E3028: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150E302C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150E3030: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150E3034: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x150E3038: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150E303C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E3040: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150E3044: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150E3048: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x150E304C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E3050: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x150E3054: jal         0x15167A68
    // 0x150E3058: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x150E3058: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150E305C: bne         $v0, $zero, L_150E306C
    if (ctx->r2 != 0) {
        // 0x150E3060: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150E306C;
    }
    // 0x150E3060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150E3064: b           L_150E31F8
    // 0x150E3068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E31F8;
    // 0x150E3068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E306C:
    // 0x150E306C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E3070: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3074: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150E3078: swc1        $f2, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f2.u32l;
    // 0x150E307C: swc1        $f2, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f2.u32l;
    // 0x150E3080: lwc1        $f4, 0x1030($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1030);
    // 0x150E3084: sw          $zero, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = 0;
    // 0x150E3088: sb          $zero, 0x70($v0)
    MEM_B(0X70, ctx->r2) = 0;
    // 0x150E308C: sb          $zero, 0x71($v0)
    MEM_B(0X71, ctx->r2) = 0;
    // 0x150E3090: sw          $zero, 0x74($v0)
    MEM_W(0X74, ctx->r2) = 0;
    // 0x150E3094: swc1        $f4, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f4.u32l;
    // 0x150E3098: lh          $t8, 0x56($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X56);
    // 0x150E309C: addiu       $v1, $v1, -0x6630
    ctx->r3 = ADD32(ctx->r3, -0X6630);
    // 0x150E30A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E30A4: sh          $t8, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r24;
    // 0x150E30A8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x150E30AC: sw          $t9, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r25;
    // 0x150E30B0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x150E30B4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x150E30B8: nop

    // 0x150E30BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E30C0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x150E30C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x150E30C8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x150E30CC: nop

    // 0x150E30D0: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150E30D4: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x150E30D8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x150E30DC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x150E30E0: nop

    // 0x150E30E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150E30E8: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x150E30EC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x150E30F0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x150E30F4: nop

    // 0x150E30F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150E30FC: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x150E3100: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x150E3104: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x150E3108: nop

    // 0x150E310C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150E3110: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x150E3114: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x150E3118: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x150E311C: nop

    // 0x150E3120: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150E3124: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x150E3128: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150E312C: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x150E3130: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150E3134: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x150E3138: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150E313C: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x150E3140: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150E3144: swc1        $f0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f0.u32l;
    // 0x150E3148: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
    // 0x150E314C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x150E3150: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x150E3154: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x150E3158: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x150E315C: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x150E3160: sw          $t7, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r15;
    // 0x150E3164: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_150E3168:
    // 0x150E3168: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150E316C: bnel        $t8, $zero, L_150E3188
    if (ctx->r24 != 0) {
        // 0x150E3170: lw          $t9, 0x4($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X4);
            goto L_150E3188;
    }
    goto skip_0;
    // 0x150E3170: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x150E3174: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x150E3178: sb          $a1, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r5;
    // 0x150E317C: b           L_150E31F8
    // 0x150E3180: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150E31F8;
    // 0x150E3180: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150E3184: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
L_150E3188:
    // 0x150E3188: bnel        $t9, $zero, L_150E31A8
    if (ctx->r25 != 0) {
        // 0x150E318C: lw          $t1, 0x8($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X8);
            goto L_150E31A8;
    }
    goto skip_1;
    // 0x150E318C: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    skip_1:
    // 0x150E3190: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x150E3194: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x150E3198: sb          $t0, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r8;
    // 0x150E319C: b           L_150E31F8
    // 0x150E31A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150E31F8;
    // 0x150E31A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150E31A4: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
L_150E31A8:
    // 0x150E31A8: bnel        $t1, $zero, L_150E31C8
    if (ctx->r9 != 0) {
        // 0x150E31AC: lw          $t3, 0xC($v1)
        ctx->r11 = MEM_W(ctx->r3, 0XC);
            goto L_150E31C8;
    }
    goto skip_2;
    // 0x150E31AC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    skip_2:
    // 0x150E31B0: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x150E31B4: addiu       $t2, $a1, 0x2
    ctx->r10 = ADD32(ctx->r5, 0X2);
    // 0x150E31B8: sb          $t2, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r10;
    // 0x150E31BC: b           L_150E31F8
    // 0x150E31C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150E31F8;
    // 0x150E31C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150E31C4: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
L_150E31C8:
    // 0x150E31C8: bnel        $t3, $zero, L_150E31E8
    if (ctx->r11 != 0) {
        // 0x150E31CC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_150E31E8;
    }
    goto skip_3;
    // 0x150E31CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_3:
    // 0x150E31D0: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x150E31D4: addiu       $t4, $a1, 0x3
    ctx->r12 = ADD32(ctx->r5, 0X3);
    // 0x150E31D8: sb          $t4, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r12;
    // 0x150E31DC: b           L_150E31F8
    // 0x150E31E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150E31F8;
    // 0x150E31E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150E31E4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_150E31E8:
    // 0x150E31E8: bne         $a1, $v0, L_150E3168
    if (ctx->r5 != ctx->r2) {
        // 0x150E31EC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_150E3168;
    }
    // 0x150E31EC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x150E31F0: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
    // 0x150E31F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_150E31F8:
    // 0x150E31F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150E31FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150E3200: jr          $ra
    // 0x150E3204: nop

    return;
    return;
    // 0x150E3204: nop

;}
RECOMP_FUNC void func_15116058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116058: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x1511605C: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x15116060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15116064: sra         $t8, $t4, 16
    ctx->r24 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15116068: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x1511606C: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x15116070: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15116074: blez        $t7, L_15116108
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15116078: sra         $a1, $t5, 16
        ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
            goto L_15116108;
    }
    // 0x15116078: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1511607C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15116080: addiu       $t1, $t1, -0x1640
    ctx->r9 = ADD32(ctx->r9, -0X1640);
    // 0x15116084: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15116088: lbu         $a3, 0x0($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X0);
L_1511608C:
    // 0x1511608C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15116090: sltiu       $v1, $a3, 0x1
    ctx->r3 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x15116094: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15116098: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x1511609C: lw          $t2, 0x20($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X20);
    // 0x151160A0: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151160A4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x151160A8: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x151160AC: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x151160B0: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x151160B4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x151160B8: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x151160BC: sh          $t5, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r13;
    // 0x151160C0: lbu         $a3, 0x0($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X0);
    // 0x151160C4: sltiu       $v1, $a3, 0x1
    ctx->r3 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x151160C8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x151160CC: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x151160D0: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x151160D4: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x151160D8: addu        $t9, $a0, $t5
    ctx->r25 = ADD32(ctx->r4, ctx->r13);
    // 0x151160DC: addu        $t6, $t4, $t0
    ctx->r14 = ADD32(ctx->r12, ctx->r8);
    // 0x151160E0: lh          $t7, 0xA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA);
    // 0x151160E4: lw          $t2, 0x20($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X20);
    // 0x151160E8: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x151160EC: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x151160F0: sh          $t8, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r24;
    // 0x151160F4: lhu         $t4, 0x16($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X16);
    // 0x151160F8: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x151160FC: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15116100: bnel        $at, $zero, L_1511608C
    if (ctx->r1 != 0) {
        // 0x15116104: lbu         $a3, 0x0($t1)
        ctx->r7 = MEM_BU(ctx->r9, 0X0);
            goto L_1511608C;
    }
    goto skip_0;
    // 0x15116104: lbu         $a3, 0x0($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X0);
    skip_0:
L_15116108:
    // 0x15116108: jr          $ra
    // 0x1511610C: nop

    return;
    return;
    // 0x1511610C: nop

;}
RECOMP_FUNC void func_15003120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15003120: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x15003124: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x15003128: addiu       $t3, $t3, 0xE34
    ctx->r11 = ADD32(ctx->r11, 0XE34);
    // 0x1500312C: addiu       $t2, $t2, 0xE30
    ctx->r10 = ADD32(ctx->r10, 0XE30);
    // 0x15003130: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15003134: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x15003138: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x1500313C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15003140: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
    // 0x15003144: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x15003148: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x1500314C: beq         $a2, $zero, L_150031E4
    if (ctx->r6 == 0) {
        // 0x15003150: sb          $zero, 0x0($t9)
        MEM_B(0X0, ctx->r25) = 0;
            goto L_150031E4;
    }
    // 0x15003150: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x15003154: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x15003158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500315C: addu        $v1, $t4, $v0
    ctx->r3 = ADD32(ctx->r12, ctx->r2);
    // 0x15003160: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15003164: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x15003168: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1500316C: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x15003170: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15003174: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15003178: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x1500317C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15003180: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x15003184: beql        $t9, $zero, L_150031DC
    if (ctx->r25 == 0) {
        // 0x15003188: lw          $t7, 0x0($t3)
        ctx->r15 = MEM_W(ctx->r11, 0X0);
            goto L_150031DC;
    }
    goto skip_0;
    // 0x15003188: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    skip_0:
    // 0x1500318C: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x15003190: addu        $t4, $t1, $a3
    ctx->r12 = ADD32(ctx->r9, ctx->r7);
L_15003194:
    // 0x15003194: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x15003198: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1500319C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x150031A0: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x150031A4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150031A8: addu        $t0, $t7, $v1
    ctx->r8 = ADD32(ctx->r15, ctx->r3);
    // 0x150031AC: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x150031B0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x150031B4: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x150031B8: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x150031BC: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x150031C0: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x150031C4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x150031C8: addu        $t0, $t6, $v1
    ctx->r8 = ADD32(ctx->r14, ctx->r3);
    // 0x150031CC: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x150031D0: bnel        $t1, $zero, L_15003194
    if (ctx->r9 != 0) {
        // 0x150031D4: addu        $t4, $t1, $a3
        ctx->r12 = ADD32(ctx->r9, ctx->r7);
            goto L_15003194;
    }
    goto skip_1;
    // 0x150031D4: addu        $t4, $t1, $a3
    ctx->r12 = ADD32(ctx->r9, ctx->r7);
    skip_1:
    // 0x150031D8: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
L_150031DC:
    // 0x150031DC: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x150031E0: sb          $a2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r6;
L_150031E4:
    // 0x150031E4: jr          $ra
    // 0x150031E8: nop

    return;
    return;
    // 0x150031E8: nop

;}
RECOMP_FUNC void func_151D4DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D4DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D4DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D4DB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151D4DB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151D4DBC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D4DC0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151D4DC4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151D4DC8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151D4DCC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151D4DD0: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    // 0x151D4DD4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151D4DD8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151D4DDC: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4DE0: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_151D4F58;
    }
    // 0x151D4DE0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151D4DE4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151D4DE8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4DEC: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_151D4F58;
    }
    // 0x151D4DEC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x151D4DF0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4DF4: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_151D4F58;
    }
    // 0x151D4DF4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x151D4DF8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4DFC: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_151D4F58;
    }
    // 0x151D4DFC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x151D4E00: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E04: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_151D4F58;
    }
    // 0x151D4E04: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x151D4E08: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E0C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_151D4F58;
    }
    // 0x151D4E0C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x151D4E10: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E14: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_151D4F58;
    }
    // 0x151D4E14: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x151D4E18: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E1C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_151D4F58;
    }
    // 0x151D4E1C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151D4E20: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E24: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_151D4F58;
    }
    // 0x151D4E24: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x151D4E28: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E2C: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_151D4F58;
    }
    // 0x151D4E2C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x151D4E30: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E34: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_151D4F58;
    }
    // 0x151D4E34: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x151D4E38: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E3C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_151D4F58;
    }
    // 0x151D4E3C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151D4E40: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E44: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_151D4F58;
    }
    // 0x151D4E44: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151D4E48: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E4C: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_151D4F58;
    }
    // 0x151D4E4C: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x151D4E50: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E54: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_151D4F58;
    }
    // 0x151D4E54: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x151D4E58: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E5C: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_151D4F58;
    }
    // 0x151D4E5C: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x151D4E60: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E64: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_151D4F58;
    }
    // 0x151D4E64: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x151D4E68: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E6C: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_151D4F58;
    }
    // 0x151D4E6C: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x151D4E70: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E74: addiu       $at, $zero, 0x49
        ctx->r1 = ADD32(0, 0X49);
            goto L_151D4F58;
    }
    // 0x151D4E74: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x151D4E78: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E7C: addiu       $at, $zero, 0x4A
        ctx->r1 = ADD32(0, 0X4A);
            goto L_151D4F58;
    }
    // 0x151D4E7C: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x151D4E80: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E84: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_151D4F58;
    }
    // 0x151D4E84: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x151D4E88: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E8C: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_151D4F58;
    }
    // 0x151D4E8C: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x151D4E90: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E94: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_151D4F58;
    }
    // 0x151D4E94: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x151D4E98: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4E9C: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_151D4F58;
    }
    // 0x151D4E9C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x151D4EA0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EA4: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_151D4F58;
    }
    // 0x151D4EA4: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x151D4EA8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EAC: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_151D4F58;
    }
    // 0x151D4EAC: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x151D4EB0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EB4: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_151D4F58;
    }
    // 0x151D4EB4: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x151D4EB8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EBC: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_151D4F58;
    }
    // 0x151D4EBC: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x151D4EC0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EC4: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_151D4F58;
    }
    // 0x151D4EC4: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x151D4EC8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4ECC: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_151D4F58;
    }
    // 0x151D4ECC: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x151D4ED0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4ED4: addiu       $at, $zero, 0x70
        ctx->r1 = ADD32(0, 0X70);
            goto L_151D4F58;
    }
    // 0x151D4ED4: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x151D4ED8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EDC: addiu       $at, $zero, 0x73
        ctx->r1 = ADD32(0, 0X73);
            goto L_151D4F58;
    }
    // 0x151D4EDC: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x151D4EE0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EE4: addiu       $at, $zero, 0x77
        ctx->r1 = ADD32(0, 0X77);
            goto L_151D4F58;
    }
    // 0x151D4EE4: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x151D4EE8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EEC: addiu       $at, $zero, 0x7B
        ctx->r1 = ADD32(0, 0X7B);
            goto L_151D4F58;
    }
    // 0x151D4EEC: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x151D4EF0: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EF4: addiu       $at, $zero, 0x89
        ctx->r1 = ADD32(0, 0X89);
            goto L_151D4F58;
    }
    // 0x151D4EF4: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x151D4EF8: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4EFC: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_151D4F58;
    }
    // 0x151D4EFC: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x151D4F00: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F04: addiu       $at, $zero, 0x8E
        ctx->r1 = ADD32(0, 0X8E);
            goto L_151D4F58;
    }
    // 0x151D4F04: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x151D4F08: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F0C: addiu       $at, $zero, 0x8F
        ctx->r1 = ADD32(0, 0X8F);
            goto L_151D4F58;
    }
    // 0x151D4F0C: addiu       $at, $zero, 0x8F
    ctx->r1 = ADD32(0, 0X8F);
    // 0x151D4F10: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F14: addiu       $at, $zero, 0x91
        ctx->r1 = ADD32(0, 0X91);
            goto L_151D4F58;
    }
    // 0x151D4F14: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x151D4F18: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F1C: addiu       $at, $zero, 0x9E
        ctx->r1 = ADD32(0, 0X9E);
            goto L_151D4F58;
    }
    // 0x151D4F1C: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x151D4F20: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F24: addiu       $at, $zero, 0xA6
        ctx->r1 = ADD32(0, 0XA6);
            goto L_151D4F58;
    }
    // 0x151D4F24: addiu       $at, $zero, 0xA6
    ctx->r1 = ADD32(0, 0XA6);
    // 0x151D4F28: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F2C: addiu       $at, $zero, 0xAB
        ctx->r1 = ADD32(0, 0XAB);
            goto L_151D4F58;
    }
    // 0x151D4F2C: addiu       $at, $zero, 0xAB
    ctx->r1 = ADD32(0, 0XAB);
    // 0x151D4F30: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F34: addiu       $at, $zero, 0xAC
        ctx->r1 = ADD32(0, 0XAC);
            goto L_151D4F58;
    }
    // 0x151D4F34: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x151D4F38: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F3C: addiu       $at, $zero, 0xB2
        ctx->r1 = ADD32(0, 0XB2);
            goto L_151D4F58;
    }
    // 0x151D4F3C: addiu       $at, $zero, 0xB2
    ctx->r1 = ADD32(0, 0XB2);
    // 0x151D4F40: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F44: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_151D4F58;
    }
    // 0x151D4F44: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x151D4F48: beq         $v0, $at, L_151D4F58
    if (ctx->r2 == ctx->r1) {
        // 0x151D4F4C: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_151D4F58;
    }
    // 0x151D4F4C: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x151D4F50: bnel        $v0, $at, L_151D4F7C
    if (ctx->r2 != ctx->r1) {
        // 0x151D4F54: lw          $t7, 0x28($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X28);
            goto L_151D4F7C;
    }
    goto skip_0;
    // 0x151D4F54: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    skip_0:
L_151D4F58:
    // 0x151D4F58: beq         $t0, $zero, L_151D4F68
    if (ctx->r8 == 0) {
        // 0x151D4F5C: addiu       $a3, $zero, 0x9
        ctx->r7 = ADD32(0, 0X9);
            goto L_151D4F68;
    }
    // 0x151D4F5C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x151D4F60: b           L_151D4F70
    // 0x151D4F64: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
        goto L_151D4F70;
    // 0x151D4F64: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
L_151D4F68:
    // 0x151D4F68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151D4F6C: nop

L_151D4F70:
    // 0x151D4F70: jal         0x151C2050
    // 0x151D4F74: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_151C2050(rdram, ctx);
        goto after_0;
    // 0x151D4F74: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x151D4F78: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
L_151D4F7C:
    // 0x151D4F7C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151D4F80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151D4F84: lbu         $v0, 0x1CA($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X1CA);
    // 0x151D4F88: bne         $v0, $zero, L_151D4F98
    if (ctx->r2 != 0) {
        // 0x151D4F8C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151D4F98;
    }
    // 0x151D4F8C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151D4F90: b           L_151D4F9C
    // 0x151D4F94: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_151D4F9C;
    // 0x151D4F94: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_151D4F98:
    // 0x151D4F98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_151D4F9C:
    // 0x151D4F9C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151D4FA0: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x151D4FA4: or          $t9, $t1, $at
    ctx->r25 = ctx->r9 | ctx->r1;
    // 0x151D4FA8: beq         $t0, $zero, L_151D5008
    if (ctx->r8 == 0) {
        // 0x151D4FAC: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_151D5008;
    }
    // 0x151D4FAC: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x151D4FB0: lbu         $t2, 0x59($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X59);
    // 0x151D4FB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D4FB8: bnel        $t2, $at, L_151D500C
    if (ctx->r10 != ctx->r1) {
        // 0x151D4FBC: lbu         $t7, 0x47($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X47);
            goto L_151D500C;
    }
    goto skip_1;
    // 0x151D4FBC: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    skip_1:
    // 0x151D4FC0: lbu         $t3, 0x58($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X58);
    // 0x151D4FC4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151D4FC8: bne         $t3, $at, L_151D5008
    if (ctx->r11 != ctx->r1) {
        // 0x151D4FCC: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_151D5008;
    }
    // 0x151D4FCC: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x151D4FD0: bne         $at, $zero, L_151D4FE8
    if (ctx->r1 != 0) {
        // 0x151D4FD4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_151D4FE8;
    }
    // 0x151D4FD4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151D4FD8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x151D4FDC: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x151D4FE0: b           L_151D5008
    // 0x151D4FE4: sb          $t4, 0x1CA($t5)
    MEM_B(0X1CA, ctx->r13) = ctx->r12;
        goto L_151D5008;
    // 0x151D4FE4: sb          $t4, 0x1CA($t5)
    MEM_B(0X1CA, ctx->r13) = ctx->r12;
L_151D4FE8:
    // 0x151D4FE8: jal         0x1507DE4C
    // 0x151D4FEC: sb          $zero, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = 0;
    func_1507DE4C(rdram, ctx);
        goto after_1;
    // 0x151D4FEC: sb          $zero, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = 0;
    after_1:
    // 0x151D4FF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151D4FF4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151D4FF8: jal         0x15138C80
    // 0x151D4FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15138C80(rdram, ctx);
        goto after_2;
    // 0x151D4FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x151D5000: lui         $t1, 0x10
    ctx->r9 = S32(0X10 << 16);
    // 0x151D5004: ori         $t1, $t1, 0x20
    ctx->r9 = ctx->r9 | 0X20;
L_151D5008:
    // 0x151D5008: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
L_151D500C:
    // 0x151D500C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151D5010: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151D5014: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151D5018: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x151D501C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x151D5020: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x151D5024: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151D5028: jal         0x15137610
    // 0x151D502C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_15137610(rdram, ctx);
        goto after_3;
    // 0x151D502C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_3:
    // 0x151D5030: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x151D5034: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151D5038: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x151D503C: bnel        $t9, $zero, L_151D513C
    if (ctx->r25 != 0) {
        // 0x151D5040: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151D513C;
    }
    goto skip_2;
    // 0x151D5040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x151D5044: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151D5048: lwc1        $f14, 0x8($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X8);
    // 0x151D504C: jal         0x150484A0
    // 0x151D5050: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_150484A0(rdram, ctx);
        goto after_4;
    // 0x151D5050: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_4:
    // 0x151D5054: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D5058: lwc1        $f4, -0x4DE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4DE8);
    // 0x151D505C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D5060: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x151D5064: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D5068: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151D506C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151D5070: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x151D5074: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x151D5078: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151D507C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151D5080: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151D5084: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D5088: nop

    // 0x151D508C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151D5090: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D5094: nop

    // 0x151D5098: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D509C: beql        $v0, $zero, L_151D50EC
    if (ctx->r2 == 0) {
        // 0x151D50A0: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_151D50EC;
    }
    goto skip_3;
    // 0x151D50A0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x151D50A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D50A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D50AC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151D50B0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D50B4: nop

    // 0x151D50B8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151D50BC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D50C0: nop

    // 0x151D50C4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D50C8: bne         $v0, $zero, L_151D50E0
    if (ctx->r2 != 0) {
        // 0x151D50CC: nop
    
            goto L_151D50E0;
    }
    // 0x151D50CC: nop

    // 0x151D50D0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x151D50D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151D50D8: b           L_151D50F8
    // 0x151D50DC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_151D50F8;
    // 0x151D50DC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_151D50E0:
    // 0x151D50E0: b           L_151D50F8
    // 0x151D50E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_151D50F8;
    // 0x151D50E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x151D50E8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_151D50EC:
    // 0x151D50EC: nop

    // 0x151D50F0: bltz        $v0, L_151D50E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x151D50F4: nop
    
            goto L_151D50E0;
    }
    // 0x151D50F4: nop

L_151D50F8:
    // 0x151D50F8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151D50FC: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x151D5100: beq         $t5, $zero, L_151D5120
    if (ctx->r13 == 0) {
        // 0x151D5104: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_151D5120;
    }
    // 0x151D5104: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x151D5108: subu        $a3, $t5, $t6
    ctx->r7 = SUB32(ctx->r13, ctx->r14);
    // 0x151D510C: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151D5110: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x151D5114: mflo        $a3
    ctx->r7 = lo;
    // 0x151D5118: b           L_151D5124
    // 0x151D511C: addiu       $a2, $v0, -0x4000
    ctx->r6 = ADD32(ctx->r2, -0X4000);
        goto L_151D5124;
    // 0x151D511C: addiu       $a2, $v0, -0x4000
    ctx->r6 = ADD32(ctx->r2, -0X4000);
L_151D5120:
    // 0x151D5120: addiu       $a2, $v0, -0x4000
    ctx->r6 = ADD32(ctx->r2, -0X4000);
L_151D5124:
    // 0x151D5124: ori         $t8, $a2, 0x1
    ctx->r24 = ctx->r6 | 0X1;
    // 0x151D5128: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151D512C: or          $a1, $t1, $at
    ctx->r5 = ctx->r9 | ctx->r1;
    // 0x151D5130: jal         0x1505D024
    // 0x151D5134: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_1505D024(rdram, ctx);
        goto after_5;
    // 0x151D5134: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_5:
    // 0x151D5138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D513C:
    // 0x151D513C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D5140: jr          $ra
    // 0x151D5144: nop

    return;
    return;
    // 0x151D5144: nop

;}
RECOMP_FUNC void func_151DD970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DD970: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DD974: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151DD978: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DD97C: lb          $t8, -0x1AA($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1AA);
    // 0x151DD980: lb          $t7, -0x1AB($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1AB);
    // 0x151DD984: lb          $t6, -0x1AC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1AC);
    // 0x151DD988: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DD98C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DD990: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DD994: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DD998: addiu       $v0, $v0, -0x195
    ctx->r2 = ADD32(ctx->r2, -0X195);
    // 0x151DD99C: addiu       $a0, $a0, -0x1A9
    ctx->r4 = ADD32(ctx->r4, -0X1A9);
    // 0x151DD9A0: addiu       $v1, $v1, 0xBE3
    ctx->r3 = ADD32(ctx->r3, 0XBE3);
    // 0x151DD9A4: sb          $t8, 0xBE2($at)
    MEM_B(0XBE2, ctx->r1) = ctx->r24;
    // 0x151DD9A8: sb          $t7, 0xBE1($at)
    MEM_B(0XBE1, ctx->r1) = ctx->r15;
    // 0x151DD9AC: sb          $t6, 0xBE0($at)
    MEM_B(0XBE0, ctx->r1) = ctx->r14;
L_151DD9B0:
    // 0x151DD9B0: lb          $t0, 0x1($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X1);
    // 0x151DD9B4: lb          $t1, 0x2($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X2);
    // 0x151DD9B8: lb          $t2, 0x3($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X3);
    // 0x151DD9BC: lb          $t9, 0x0($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X0);
    // 0x151DD9C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151DD9C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151DD9C8: sb          $t0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r8;
    // 0x151DD9CC: sb          $t1, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r9;
    // 0x151DD9D0: sb          $t2, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r10;
    // 0x151DD9D4: bne         $a0, $v0, L_151DD9B0
    if (ctx->r4 != ctx->r2) {
        // 0x151DD9D8: sb          $t9, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = ctx->r25;
            goto L_151DD9B0;
    }
    // 0x151DD9D8: sb          $t9, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r25;
    // 0x151DD9DC: jr          $ra
    // 0x151DD9E0: nop

    return;
    return;
    // 0x151DD9E0: nop

;}
RECOMP_FUNC void func_100071D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_151F2BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2BA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F2BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2BB0: jal         0x10024880
    // 0x151F2BB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2BB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151F2BB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F2BBC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151F2BC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2BC4: sw          $t6, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r14;
    // 0x151F2BC8: jal         0x10024880
    // 0x151F2BCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x151F2BCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151F2BD0: b           L_151F2BD8
    // 0x151F2BD4: nop

        goto L_151F2BD8;
    // 0x151F2BD4: nop

L_151F2BD8:
    // 0x151F2BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F2BDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F2BE0: jr          $ra
    // 0x151F2BE4: nop

    return;
    return;
    // 0x151F2BE4: nop

;}
RECOMP_FUNC void func_150B2570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B2570: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150B2574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B2578: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x150B257C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150B2580: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150B2584: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x150B2588: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x150B258C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B2590: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150B2594: jal         0x151423D8
    // 0x150B2598: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150B2598: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x150B259C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150B25A0: jal         0x151423D8
    // 0x150B25A4: lbu         $a0, 0x9B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X9B);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150B25A4: lbu         $a0, 0x9B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X9B);
    after_1:
    // 0x150B25A8: jal         0x150ADA20
    // 0x150B25AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150B25AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150B25B0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150B25B4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B25B8: mfhi        $v1
    ctx->r3 = hi;
    // 0x150B25BC: addiu       $t7, $v1, -0x1E
    ctx->r15 = ADD32(ctx->r3, -0X1E);
    // 0x150B25C0: addiu       $a0, $t7, -0x40
    ctx->r4 = ADD32(ctx->r15, -0X40);
    // 0x150B25C4: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150B25C8: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
    // 0x150B25CC: jal         0x151423D8
    // 0x150B25D0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150B25D0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x150B25D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150B25D8: jal         0x151423D8
    // 0x150B25DC: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x150B25DC: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    after_4:
    // 0x150B25E0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B25E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B25E8: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150B25EC: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150B25F0: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B25F4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150B25F8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150B25FC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x150B2600: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150B2604: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x150B2608: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150B260C: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x150B2610: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B2614: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x150B2618: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150B261C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B2620: nop

    // 0x150B2624: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150B2628: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x150B262C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x150B2630: jal         0x150ADA68
    // 0x150B2634: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150B2634: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x150B2638: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B263C: lwc1        $f18, -0x700($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X700);
    // 0x150B2640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2644: lwc1        $f6, -0x6FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6FC);
    // 0x150B2648: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B264C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B2650: jal         0x150ADA68
    // 0x150B2654: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150B2654: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x150B2658: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B265C: lwc1        $f10, -0x6F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6F8);
    // 0x150B2660: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2664: lwc1        $f18, -0x6F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6F4);
    // 0x150B2668: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150B266C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150B2670: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x150B2674: addiu       $a2, $sp, 0x59
    ctx->r6 = ADD32(ctx->r29, 0X59);
    // 0x150B2678: addiu       $a3, $sp, 0x5A
    ctx->r7 = ADD32(ctx->r29, 0X5A);
    // 0x150B267C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150B2680: jal         0x151429E0
    // 0x150B2684: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_151429E0(rdram, ctx);
        goto after_7;
    // 0x150B2684: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x150B2688: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150B268C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x150B2690: addiu       $a2, $sp, 0x5D
    ctx->r6 = ADD32(ctx->r29, 0X5D);
    // 0x150B2694: jal         0x151429E0
    // 0x150B2698: addiu       $a3, $sp, 0x5E
    ctx->r7 = ADD32(ctx->r29, 0X5E);
    func_151429E0(rdram, ctx);
        goto after_8;
    // 0x150B2698: addiu       $a3, $sp, 0x5E
    ctx->r7 = ADD32(ctx->r29, 0X5E);
    after_8:
    // 0x150B269C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B26A0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B26A4: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x150B26A8: sb          $t9, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r25;
    // 0x150B26AC: sb          $t0, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r8;
    // 0x150B26B0: jal         0x150ADA20
    // 0x150B26B4: sb          $t1, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150B26B4: sb          $t1, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r9;
    after_9:
    // 0x150B26B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150B26BC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B26C0: mfhi        $t2
    ctx->r10 = hi;
    // 0x150B26C4: addiu       $t3, $t2, 0x12
    ctx->r11 = ADD32(ctx->r10, 0X12);
    // 0x150B26C8: jal         0x150ADA68
    // 0x150B26CC: sh          $t3, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r11;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150B26CC: sh          $t3, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r11;
    after_10:
    // 0x150B26D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B26D4: lwc1        $f6, -0x6F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F0);
    // 0x150B26D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B26DC: lwc1        $f10, -0x6EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6EC);
    // 0x150B26E0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B26E4: addiu       $t4, $zero, 0x1601
    ctx->r12 = ADD32(0, 0X1601);
    // 0x150B26E8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B26EC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150B26F0: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x150B26F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150B26F8: sh          $t4, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r12;
    // 0x150B26FC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150B2700: sb          $t5, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r13;
    // 0x150B2704: sh          $t6, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r14;
    // 0x150B2708: sh          $t7, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r15;
    // 0x150B270C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150B2710: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150B2714: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150B2718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150B271C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B2720: jal         0x15156190
    // 0x150B2724: lbu         $a3, 0xB3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XB3);
    func_15156190(rdram, ctx);
        goto after_11;
    // 0x150B2724: lbu         $a3, 0xB3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XB3);
    after_11:
    // 0x150B2728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B272C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B2730: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150B2734: jr          $ra
    // 0x150B2738: nop

    return;
    return;
    // 0x150B2738: nop

;}
RECOMP_FUNC void func_15075650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15075654: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15075658: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x1507565C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075660: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15075664: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075668: lw          $t7, 0x2108($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2108);
    // 0x1507566C: lbu         $t6, 0x13F($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X13F);
    // 0x15075670: lbu         $v0, 0x21F($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X21F);
    // 0x15075674: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15075678: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1507567C: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x15075680: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15075684: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x15075688: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x1507568C: beq         $v0, $zero, L_15075698
    if (ctx->r2 == 0) {
        // 0x15075690: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_15075698;
    }
    // 0x15075690: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15075694: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
L_15075698:
    // 0x15075698: lbu         $a1, 0x220($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X220);
    // 0x1507569C: lbu         $a2, 0x1891($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1891);
    // 0x150756A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150756A4: subu        $t1, $a0, $a1
    ctx->r9 = SUB32(ctx->r4, ctx->r5);
    // 0x150756A8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x150756AC: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x150756B0: bne         $a2, $at, L_15075708
    if (ctx->r6 != ctx->r1) {
        // 0x150756B4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15075708;
    }
    // 0x150756B4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150756B8: lbu         $t3, 0x223($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X223);
    // 0x150756BC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150756C0: beql        $t3, $at, L_150757C4
    if (ctx->r11 == ctx->r1) {
        // 0x150756C4: sb          $zero, 0x223($v1)
        MEM_B(0X223, ctx->r3) = 0;
            goto L_150757C4;
    }
    goto skip_0;
    // 0x150756C4: sb          $zero, 0x223($v1)
    MEM_B(0X223, ctx->r3) = 0;
    skip_0:
    // 0x150756C8: jal         0x150ADA20
    // 0x150756CC: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150756CC: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    after_0:
    // 0x150756D0: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x150756D4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150756D8: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x150756DC: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x150756E0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x150756E4: mfhi        $t4
    ctx->r12 = hi;
    // 0x150756E8: lbu         $t5, 0x220($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X220);
    // 0x150756EC: bne         $t1, $zero, L_150756F8
    if (ctx->r9 != 0) {
        // 0x150756F0: nop
    
            goto L_150756F8;
    }
    // 0x150756F0: nop

    // 0x150756F4: break       7
    do_break(352802548);
L_150756F8:
    // 0x150756F8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150756FC: sb          $t6, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r14;
    // 0x15075700: b           L_150757C0
    // 0x15075704: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
        goto L_150757C0;
    // 0x15075704: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_15075708:
    // 0x15075708: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x1507570C: bnel        $v0, $at, L_150757A4
    if (ctx->r2 != ctx->r1) {
        // 0x15075710: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_150757A4;
    }
    goto skip_1;
    // 0x15075710: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_1:
    // 0x15075714: lbu         $t7, 0x223($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X223);
    // 0x15075718: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x1507571C: beql        $t7, $at, L_150757C4
    if (ctx->r15 == ctx->r1) {
        // 0x15075720: sb          $zero, 0x223($v1)
        MEM_B(0X223, ctx->r3) = 0;
            goto L_150757C4;
    }
    goto skip_2;
    // 0x15075720: sb          $zero, 0x223($v1)
    MEM_B(0X223, ctx->r3) = 0;
    skip_2:
    // 0x15075724: lbu         $v0, 0x21E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X21E);
    // 0x15075728: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x1507572C: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x15075730: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15075734: bne         $at, $zero, L_15075748
    if (ctx->r1 != 0) {
        // 0x15075738: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_15075748;
    }
    // 0x15075738: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1507573C: addiu       $a2, $a3, -0x1
    ctx->r6 = ADD32(ctx->r7, -0X1);
    // 0x15075740: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x15075744: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
L_15075748:
    // 0x15075748: sb          $a2, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r6;
    // 0x1507574C: jal         0x150ADA20
    // 0x15075750: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15075750: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    after_1:
    // 0x15075754: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x15075758: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507575C: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15075760: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x15075764: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15075768: lbu         $a2, 0x1D($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1D);
    // 0x1507576C: mfhi        $t2
    ctx->r10 = hi;
    // 0x15075770: lbu         $t3, 0x220($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X220);
    // 0x15075774: bne         $t1, $zero, L_15075780
    if (ctx->r9 != 0) {
        // 0x15075778: nop
    
            goto L_15075780;
    }
    // 0x15075778: nop

    // 0x1507577C: break       7
    do_break(352802684);
L_15075780:
    // 0x15075780: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x15075784: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x15075788: beq         $a2, $t4, L_150757C0
    if (ctx->r6 == ctx->r12) {
        // 0x1507578C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_150757C0;
    }
    // 0x1507578C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x15075790: sb          $t4, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r12;
    // 0x15075794: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15075798: b           L_150757C4
    // 0x1507579C: sb          $zero, 0x223($v1)
    MEM_B(0X223, ctx->r3) = 0;
        goto L_150757C4;
    // 0x1507579C: sb          $zero, 0x223($v1)
    MEM_B(0X223, ctx->r3) = 0;
    // 0x150757A0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_150757A4:
    // 0x150757A4: bne         $v0, $at, L_150757B8
    if (ctx->r2 != ctx->r1) {
        // 0x150757A8: addiu       $t5, $a3, -0x1
        ctx->r13 = ADD32(ctx->r7, -0X1);
            goto L_150757B8;
    }
    // 0x150757A8: addiu       $t5, $a3, -0x1
    ctx->r13 = ADD32(ctx->r7, -0X1);
    // 0x150757AC: sb          $t5, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r13;
    // 0x150757B0: b           L_150757C0
    // 0x150757B4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
        goto L_150757C0;
    // 0x150757B4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_150757B8:
    // 0x150757B8: sb          $a2, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r6;
    // 0x150757BC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_150757C0:
    // 0x150757C0: sb          $zero, 0x223($v1)
    MEM_B(0X223, ctx->r3) = 0;
L_150757C4:
    // 0x150757C4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150757C8: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150757CC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x150757D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150757D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150757D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150757DC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x150757E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150757E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150757E8: sh          $t7, 0x21C($t8)
    MEM_H(0X21C, ctx->r24) = ctx->r15;
    // 0x150757EC: lbu         $v0, 0x1892($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1892);
    // 0x150757F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150757F4: beql        $v0, $at, L_15075854
    if (ctx->r2 == ctx->r1) {
        // 0x150757F8: lw          $v1, 0x0($t0)
        ctx->r3 = MEM_W(ctx->r8, 0X0);
            goto L_15075854;
    }
    goto skip_3;
    // 0x150757F8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    skip_3:
    // 0x150757FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15075800: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15075804: bgez        $v0, L_15075818
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15075808: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15075818;
    }
    // 0x15075808: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507580C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15075810: nop

    // 0x15075814: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15075818:
    // 0x15075818: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x1507581C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15075820: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15075824: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x15075828: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x1507582C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15075830: lwc1        $f16, 0x44($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X44);
    // 0x15075834: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x15075838: nop

    // 0x1507583C: bc1fl       L_15075854
    if (!c1cs) {
        // 0x15075840: lw          $v1, 0x0($t0)
        ctx->r3 = MEM_W(ctx->r8, 0X0);
            goto L_15075854;
    }
    goto skip_4;
    // 0x15075840: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    skip_4:
    // 0x15075844: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15075848: nop

    // 0x1507584C: swc1        $f18, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f18.u32l;
    // 0x15075850: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_15075854:
    // 0x15075854: lbu         $v0, 0x220($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X220);
    // 0x15075858: lbu         $t2, 0x21E($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X21E);
    // 0x1507585C: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15075860: beq         $at, $zero, L_1507586C
    if (ctx->r1 == 0) {
        // 0x15075864: nop
    
            goto L_1507586C;
    }
    // 0x15075864: nop

    // 0x15075868: sb          $v0, 0x21E($v1)
    MEM_B(0X21E, ctx->r3) = ctx->r2;
L_1507586C:
    // 0x1507586C: jal         0x15075498
    // 0x15075870: nop

    func_15075498(rdram, ctx);
        goto after_2;
    // 0x15075870: nop

    after_2:
    // 0x15075874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075878: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507587C: jr          $ra
    // 0x15075880: nop

    return;
    return;
    // 0x15075880: nop

;}
RECOMP_FUNC void func_15143DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143DA8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15143DAC: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15143DB0: beq         $at, $zero, L_15143DC8
    if (ctx->r1 == 0) {
        // 0x15143DB4: lw          $t6, 0x0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X0);
            goto L_15143DC8;
    }
    // 0x15143DB4: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x15143DB8: xor         $v1, $a1, $a2
    ctx->r3 = ctx->r5 ^ ctx->r6;
    // 0x15143DBC: xor         $a3, $a2, $v1
    ctx->r7 = ctx->r6 ^ ctx->r3;
    // 0x15143DC0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x15143DC4: xor         $a1, $v1, $a3
    ctx->r5 = ctx->r3 ^ ctx->r7;
L_15143DC8:
    // 0x15143DC8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x15143DCC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15143DD0: beql        $at, $zero, L_15143DE8
    if (ctx->r1 == 0) {
        // 0x15143DD4: slt         $at, $a2, $v0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_15143DE8;
    }
    goto skip_0;
    // 0x15143DD4: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    skip_0:
    // 0x15143DD8: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
    // 0x15143DDC: jr          $ra
    // 0x15143DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15143DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15143DE4: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
L_15143DE8:
    // 0x15143DE8: beq         $at, $zero, L_15143E00
    if (ctx->r1 == 0) {
        // 0x15143DEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15143E00;
    }
    // 0x15143DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15143DF0: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x15143DF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x15143DF8: jr          $ra
    // 0x15143DFC: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
    return;
    return;
    // 0x15143DFC: sw          $a2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r6;
L_15143E00:
    // 0x15143E00: jr          $ra
    // 0x15143E04: nop

    return;
    return;
    // 0x15143E04: nop

;}
RECOMP_FUNC void func_1509DD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DD40: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509DD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509DD48: jr          $ra
    // 0x1509DD4C: nop

    return;
    return;
    // 0x1509DD4C: nop

;}
RECOMP_FUNC void func_16001984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001984: lui         $t6, 0xA480
    ctx->r14 = S32(0XA480 << 16);
    // 0x16001988: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x1600198C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x16001990: beq         $t7, $zero, L_160019A0
    if (ctx->r15 == 0) {
        // 0x16001994: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_160019A0;
    }
    // 0x16001994: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x16001998: jr          $ra
    // 0x1600199C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1600199C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_160019A0:
    // 0x160019A0: jr          $ra
    // 0x160019A4: nop

    return;
    return;
    // 0x160019A4: nop

;}
RECOMP_FUNC void func_150BABE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BABE0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150BABE4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x150BABE8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150BABEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150BABF0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150BABF4: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150BABF8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150BABFC: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x150BAC00: lw          $t8, 0x2FA4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA4);
    // 0x150BAC04: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150BAC08: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150BAC0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150BAC10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150BAC14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150BAC18: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x150BAC1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150BAC20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150BAC24: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x150BAC28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BAC2C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150BAC30: lwc1        $f4, 0x380($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X380);
    // 0x150BAC34: lwc1        $f6, -0x190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X190);
    // 0x150BAC38: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BAC3C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BAC40: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150BAC44: beq         $a3, $zero, L_150BAFDC
    if (ctx->r7 == 0) {
        // 0x150BAC48: sw          $t2, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = ctx->r10;
            goto L_150BAFDC;
    }
    // 0x150BAC48: sw          $t2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r10;
    // 0x150BAC4C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x150BAC50: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150BAC54: beql        $v0, $zero, L_150BAFE0
    if (ctx->r2 == 0) {
        // 0x150BAC58: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150BAFE0;
    }
    goto skip_0;
    // 0x150BAC58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x150BAC5C: beql        $v0, $at, L_150BAFE0
    if (ctx->r2 == ctx->r1) {
        // 0x150BAC60: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150BAFE0;
    }
    goto skip_1;
    // 0x150BAC60: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x150BAC64: lw          $v1, 0x1D4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1D4);
    // 0x150BAC68: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    // 0x150BAC6C: beq         $v1, $zero, L_150BAFDC
    if (ctx->r3 == 0) {
        // 0x150BAC70: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_150BAFDC;
    }
    // 0x150BAC70: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x150BAC74: beq         $a1, $zero, L_150BAC8C
    if (ctx->r5 == 0) {
        // 0x150BAC78: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150BAC8C;
    }
    // 0x150BAC78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150BAC7C: beq         $a1, $at, L_150BAC98
    if (ctx->r5 == ctx->r1) {
        // 0x150BAC80: addiu       $t4, $zero, 0x1A
        ctx->r12 = ADD32(0, 0X1A);
            goto L_150BAC98;
    }
    // 0x150BAC80: addiu       $t4, $zero, 0x1A
    ctx->r12 = ADD32(0, 0X1A);
    // 0x150BAC84: b           L_150BACA0
    // 0x150BAC88: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
        goto L_150BACA0;
    // 0x150BAC88: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
L_150BAC8C:
    // 0x150BAC8C: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x150BAC90: b           L_150BAC9C
    // 0x150BAC94: sw          $t3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r11;
        goto L_150BAC9C;
    // 0x150BAC94: sw          $t3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r11;
L_150BAC98:
    // 0x150BAC98: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
L_150BAC9C:
    // 0x150BAC9C: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
L_150BACA0:
    // 0x150BACA0: jal         0x15142314
    // 0x150BACA4: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150BACA4: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    after_0:
    // 0x150BACA8: lw          $t5, 0xD0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD0);
    // 0x150BACAC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150BACB0: addiu       $a1, $zero, 0x4022
    ctx->r5 = ADD32(0, 0X4022);
    // 0x150BACB4: lwc1        $f16, 0x180($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X180);
    // 0x150BACB8: jal         0x15143E94
    // 0x150BACBC: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    func_15143E94(rdram, ctx);
        goto after_1;
    // 0x150BACBC: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x150BACC0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150BACC4: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BACC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BACCC: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BACD0: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150BACD4: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x150BACD8: lbu         $t1, 0xDB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XDB);
    // 0x150BACDC: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x150BACE0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150BACE4: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x150BACE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150BACEC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BACF0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150BACF4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150BACF8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150BACFC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150BAD00: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150BAD04: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150BAD08: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150BAD0C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150BAD10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150BAD14: jal         0x15165F80
    // 0x150BAD18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_15165F80(rdram, ctx);
        goto after_2;
    // 0x150BAD18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_2:
    // 0x150BAD1C: jal         0x150ADA68
    // 0x150BAD20: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150BAD20: nop

    after_3:
    // 0x150BAD24: jal         0x150ADA20
    // 0x150BAD28: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150BAD28: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x150BAD2C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BAD30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BAD34: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150BAD38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BAD3C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150BAD40: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BAD44: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150BAD48: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x150BAD4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150BAD50: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BAD54: addiu       $v1, $a1, 0x3C
    ctx->r3 = ADD32(ctx->r5, 0X3C);
    // 0x150BAD58: addiu       $a0, $a1, -0x3C
    ctx->r4 = ADD32(ctx->r5, -0X3C);
    // 0x150BAD5C: lbu         $t0, 0xDB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XDB);
    // 0x150BAD60: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x150BAD64: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x150BAD68: mfhi        $t8
    ctx->r24 = hi;
    // 0x150BAD6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150BAD70: addiu       $t7, $t8, 0x1E
    ctx->r15 = ADD32(ctx->r24, 0X1E);
    // 0x150BAD74: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150BAD78: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150BAD7C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150BAD80: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150BAD84: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150BAD88: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x150BAD8C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x150BAD90: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x150BAD94: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x150BAD98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150BAD9C: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BADA0: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BADA4: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x150BADA8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BADAC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150BADB0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x150BADB4: jal         0x1514C678
    // 0x150BADB8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_1514C678(rdram, ctx);
        goto after_5;
    // 0x150BADB8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_5:
    // 0x150BADBC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150BADC0: jal         0x1504715C
    // 0x150BADC4: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    func_1504715C(rdram, ctx);
        goto after_6;
    // 0x150BADC4: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    after_6:
    // 0x150BADC8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150BADCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150BADD0: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BADD4: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BADD8: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150BADDC: sub.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x150BADE0: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150BADE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BADE8: add.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x150BADEC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150BADF0: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x150BADF4: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x150BADF8: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x150BADFC: jal         0x15046C80
    // 0x150BAE00: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_15046C80(rdram, ctx);
        goto after_7;
    // 0x150BAE00: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x150BAE04: beq         $v0, $zero, L_150BAF58
    if (ctx->r2 == 0) {
        // 0x150BAE08: nop
    
            goto L_150BAF58;
    }
    // 0x150BAE08: nop

    // 0x150BAE0C: jal         0x150ADA68
    // 0x150BAE10: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150BAE10: nop

    after_8:
    // 0x150BAE14: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150BAE18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150BAE1C: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x150BAE20: addiu       $t2, $zero, 0x7340
    ctx->r10 = ADD32(0, 0X7340);
    // 0x150BAE24: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150BAE28: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x150BAE2C: sb          $t1, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r9;
    // 0x150BAE30: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x150BAE34: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x150BAE38: sh          $t3, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r11;
    // 0x150BAE3C: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x150BAE40: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x150BAE44: jal         0x150ADA20
    // 0x150BAE48: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150BAE48: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x150BAE4C: addiu       $at, $zero, 0x7D1
    ctx->r1 = ADD32(0, 0X7D1);
    // 0x150BAE50: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BAE54: mfhi        $t4
    ctx->r12 = hi;
    // 0x150BAE58: lui         $t1, 0x17
    ctx->r9 = S32(0X17 << 16);
    // 0x150BAE5C: addiu       $t5, $t4, 0x7D0
    ctx->r13 = ADD32(ctx->r12, 0X7D0);
    // 0x150BAE60: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150BAE64: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150BAE68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150BAE6C: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x150BAE70: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150BAE74: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x150BAE78: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x150BAE7C: sb          $t6, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r14;
    // 0x150BAE80: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x150BAE84: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x150BAE88: sb          $zero, 0x77($sp)
    MEM_B(0X77, ctx->r29) = 0;
    // 0x150BAE8C: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x150BAE90: sb          $t7, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r15;
    // 0x150BAE94: sb          $zero, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = 0;
    // 0x150BAE98: sb          $t9, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r25;
    // 0x150BAE9C: sb          $t0, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r8;
    // 0x150BAEA0: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x150BAEA4: jal         0x150ADA20
    // 0x150BAEA8: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150BAEA8: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    after_10:
    // 0x150BAEAC: jal         0x150ADA20
    // 0x150BAEB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150BAEB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_11:
    // 0x150BAEB4: jal         0x150ADA20
    // 0x150BAEB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150BAEB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_12:
    // 0x150BAEBC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x150BAEC0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x150BAEC4: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150BAEC8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x150BAECC: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BAED0: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150BAED4: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150BAED8: lbu         $t0, 0xDB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XDB);
    // 0x150BAEDC: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x150BAEE0: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x150BAEE4: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x150BAEE8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x150BAEEC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x150BAEF0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150BAEF4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150BAEF8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x150BAEFC: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x150BAF00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BAF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150BAF08: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x150BAF0C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150BAF10: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150BAF14: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150BAF18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150BAF1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150BAF20: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150BAF24: jal         0x1513C73C
    // 0x150BAF28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_1513C73C(rdram, ctx);
        goto after_13;
    // 0x150BAF28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_13:
    // 0x150BAF2C: beq         $v0, $zero, L_150BAF58
    if (ctx->r2 == 0) {
        // 0x150BAF30: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_150BAF58;
    }
    // 0x150BAF30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150BAF34: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150BAF38: lw          $a0, -0x78B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78B0);
    // 0x150BAF3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150BAF40: jal         0x1518ABD0
    // 0x150BAF44: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_1518ABD0(rdram, ctx);
        goto after_14;
    // 0x150BAF44: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_14:
    // 0x150BAF48: bne         $v0, $zero, L_150BAF58
    if (ctx->r2 != 0) {
        // 0x150BAF4C: lw          $a1, 0x60($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X60);
            goto L_150BAF58;
    }
    // 0x150BAF4C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x150BAF50: jal         0x1516972C
    // 0x150BAF54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_15;
    // 0x150BAF54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_15:
L_150BAF58:
    // 0x150BAF58: jal         0x150ADA68
    // 0x150BAF5C: nop

    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150BAF5C: nop

    after_16:
    // 0x150BAF60: jal         0x150ADA20
    // 0x150BAF64: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x150BAF64: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_17:
    // 0x150BAF68: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150BAF6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BAF70: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150BAF74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BAF78: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150BAF7C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BAF80: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150BAF84: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x150BAF88: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x150BAF8C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150BAF90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150BAF94: lbu         $t4, 0xDB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XDB);
    // 0x150BAF98: mfhi        $t3
    ctx->r11 = hi;
    // 0x150BAF9C: addiu       $t5, $t3, 0x6
    ctx->r13 = ADD32(ctx->r11, 0X6);
    // 0x150BAFA0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150BAFA4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150BAFA8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150BAFAC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150BAFB0: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BAFB4: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BAFB8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150BAFBC: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x150BAFC0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BAFC4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150BAFC8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150BAFCC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150BAFD0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150BAFD4: jal         0x1514C678
    // 0x150BAFD8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_1514C678(rdram, ctx);
        goto after_18;
    // 0x150BAFD8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_18:
L_150BAFDC:
    // 0x150BAFDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150BAFE0:
    // 0x150BAFE0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x150BAFE4: jr          $ra
    // 0x150BAFE8: nop

    return;
    return;
    // 0x150BAFE8: nop

;}
RECOMP_FUNC void func_150C673C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C673C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150C6740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C6744: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C6748: lbu         $t6, 0xB4($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XB4);
    // 0x150C674C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150C6750: addiu       $v1, $a1, 0xB0
    ctx->r3 = ADD32(ctx->r5, 0XB0);
    // 0x150C6754: bne         $t6, $zero, L_150C6760
    if (ctx->r14 != 0) {
        // 0x150C6758: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_150C6760;
    }
    // 0x150C6758: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150C675C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_150C6760:
    // 0x150C6760: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x150C6764: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x150C6768: lh          $t7, 0x14($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X14);
    // 0x150C676C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x150C6770: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x150C6774: lh          $t0, 0x14($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X14);
    // 0x150C6778: bgezl       $t0, L_150C67F0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x150C677C: lw          $a0, 0x24($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X24);
            goto L_150C67F0;
    }
    goto skip_0;
    // 0x150C677C: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x150C6780: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x150C6784: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x150C6788: jal         0x150ADA20
    // 0x150C678C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150C678C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x150C6790: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x150C6794: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150C6798: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x150C679C: lh          $t1, 0x18($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X18);
    // 0x150C67A0: lh          $t4, 0x16($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X16);
    // 0x150C67A4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x150C67A8: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150C67AC: mfhi        $t3
    ctx->r11 = hi;
    // 0x150C67B0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150C67B4: bne         $t2, $zero, L_150C67C0
    if (ctx->r10 != 0) {
        // 0x150C67B8: nop
    
            goto L_150C67C0;
    }
    // 0x150C67B8: nop

    // 0x150C67BC: break       7
    do_break(353134524);
L_150C67C0:
    // 0x150C67C0: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
    // 0x150C67C4: jal         0x150ADA68
    // 0x150C67C8: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150C67C8: nop

    after_1:
    // 0x150C67CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x150C67D0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150C67D4: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x150C67D8: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150C67DC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150C67E0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C67E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C67E8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x150C67EC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
L_150C67F0:
    // 0x150C67F0: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x150C67F4: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150C67F8: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x150C67FC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150C6800: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150C6804: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x150C6808: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C680C: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C6810: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150C6814: nop

    // 0x150C6818: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x150C681C: sw          $t8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r24;
    // 0x150C6820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C6824: jr          $ra
    // 0x150C6828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150C6828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_150548E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150548E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150548E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150548EC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x150548F0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x150548F4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x150548F8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x150548FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15054900: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15054904: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15054908: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x1505490C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15054910: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x15054914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15054918: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1505491C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15054920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15054924: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15054928: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1505492C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15054930: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15054934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15054938: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1505493C: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15054940: addiu       $t8, $t7, -0x32C
    ctx->r24 = ADD32(ctx->r15, -0X32C);
    // 0x15054944: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x15054948: blez        $v1, L_150549E4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1505494C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150549E4;
    }
    // 0x1505494C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15054950: subu        $s6, $a0, $t9
    ctx->r22 = SUB32(ctx->r4, ctx->r25);
    // 0x15054954: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15054958: div         $zero, $s6, $at
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r1)));
    // 0x1505495C: mflo        $t0
    ctx->r8 = lo;
    // 0x15054960: addiu       $s6, $t0, 0x1
    ctx->r22 = ADD32(ctx->r8, 0X1);
    // 0x15054964: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x15054968: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x1505496C: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x15054970: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_15054974:
    // 0x15054974: lbu         $t1, 0x274($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X274);
    // 0x15054978: bnel        $s6, $t1, L_150549D8
    if (ctx->r22 != ctx->r9) {
        // 0x1505497C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150549D8;
    }
    goto skip_0;
    // 0x1505497C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x15054980: lbu         $t2, 0x232($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X232);
    // 0x15054984: bnel        $s3, $t2, L_150549D8
    if (ctx->r19 != ctx->r10) {
        // 0x15054988: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150549D8;
    }
    goto skip_1;
    // 0x15054988: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x1505498C: jal         0x150ADA20
    // 0x15054990: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15054990: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    after_0:
    // 0x15054994: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x15054998: beq         $t3, $zero, L_150549AC
    if (ctx->r11 == 0) {
        // 0x1505499C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_150549AC;
    }
    // 0x1505499C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150549A0: sb          $s4, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r20;
    // 0x150549A4: b           L_150549B4
    // 0x150549A8: addiu       $v0, $zero, 0x1DB
    ctx->r2 = ADD32(0, 0X1DB);
        goto L_150549B4;
    // 0x150549A8: addiu       $v0, $zero, 0x1DB
    ctx->r2 = ADD32(0, 0X1DB);
L_150549AC:
    // 0x150549AC: sb          $s5, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r21;
    // 0x150549B0: addiu       $v0, $zero, 0x1DC
    ctx->r2 = ADD32(0, 0X1DC);
L_150549B4:
    // 0x150549B4: addiu       $t4, $zero, 0x9C4
    ctx->r12 = ADD32(0, 0X9C4);
    // 0x150549B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150549BC: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x150549C0: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x150549C4: jal         0x10010344
    // 0x150549C8: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010344(rdram, ctx);
        goto after_1;
    // 0x150549C8: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_1:
    // 0x150549CC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150549D0: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x150549D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_150549D8:
    // 0x150549D8: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150549DC: bne         $at, $zero, L_15054974
    if (ctx->r1 != 0) {
        // 0x150549E0: addiu       $s2, $s2, 0x32C
        ctx->r18 = ADD32(ctx->r18, 0X32C);
            goto L_15054974;
    }
    // 0x150549E0: addiu       $s2, $s2, 0x32C
    ctx->r18 = ADD32(ctx->r18, 0X32C);
L_150549E4:
    // 0x150549E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150549E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150549EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x150549F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x150549F4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x150549F8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x150549FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15054A00: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15054A04: jr          $ra
    // 0x15054A08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15054A08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1500BC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500BC7C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1500BC80: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x1500BC84: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x1500BC88: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x1500BC8C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1500BC90: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1500BC94: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500BC98: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x1500BC9C: andi        $s6, $a1, 0xFF
    ctx->r22 = ctx->r5 & 0XFF;
    // 0x1500BCA0: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x1500BCA4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1500BCA8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x1500BCAC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1500BCB0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1500BCB4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1500BCB8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1500BCBC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1500BCC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1500BCC4: beq         $a0, $zero, L_1500BE04
    if (ctx->r4 == 0) {
        // 0x1500BCC8: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_1500BE04;
    }
    // 0x1500BCC8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1500BCCC: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x1500BCD0: addiu       $s0, $s0, 0x5C64
    ctx->r16 = ADD32(ctx->r16, 0X5C64);
    // 0x1500BCD4: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x1500BCD8: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
L_1500BCDC:
    // 0x1500BCDC: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x1500BCE0: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1500BCE4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x1500BCE8: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1500BCEC: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x1500BCF0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1500BCF4: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1500BCF8: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x1500BCFC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500BD00: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500BD04: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1500BD08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BD0C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500BD10: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x1500BD14: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x1500BD18: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x1500BD1C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BD20: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1500BD24: subu        $t9, $t8, $t2
    ctx->r25 = SUB32(ctx->r24, ctx->r10);
    // 0x1500BD28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500BD2C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x1500BD30: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1500BD34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BD38: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1500BD3C: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x1500BD40: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500BD44: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1500BD48: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500BD4C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1500BD50: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1500BD54: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1500BD58: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1500BD5C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1500BD60: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500BD64: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x1500BD68: nop

    // 0x1500BD6C: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1500BD70: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500BD74: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500BD78: add.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1500BD7C: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1500BD80: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1500BD84: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1500BD88: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500BD8C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1500BD90: nop

    // 0x1500BD94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500BD98: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x1500BD9C: lh          $t3, 0x4($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4);
    // 0x1500BDA0: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1500BDA4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500BDA8: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1500BDAC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1500BDB0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500BDB4: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x1500BDB8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BDBC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500BDC0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1500BDC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BDC8: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1500BDCC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BDD0: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1500BDD4: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1500BDD8: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1500BDDC: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1500BDE0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1500BDE4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x1500BDE8: jal         0x1500AF08
    // 0x1500BDEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1500AF08(rdram, ctx);
        goto after_0;
    // 0x1500BDEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x1500BDF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1500BDF4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1500BDF8: bne         $s1, $s4, L_1500BCDC
    if (ctx->r17 != ctx->r20) {
        // 0x1500BDFC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1500BCDC;
    }
    // 0x1500BDFC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1500BE00: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_1500BE04:
    // 0x1500BE04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BE08: addu        $at, $at, $s7
    ctx->r1 = ADD32(ctx->r1, ctx->r23);
    // 0x1500BE0C: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x1500BE10: sb          $t6, -0x2430($at)
    MEM_B(-0X2430, ctx->r1) = ctx->r14;
    // 0x1500BE14: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1500BE18: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1500BE1C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1500BE20: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1500BE24: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1500BE28: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x1500BE2C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x1500BE30: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x1500BE34: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x1500BE38: jr          $ra
    // 0x1500BE3C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1500BE3C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1509ED74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509ED74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1509ED78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1509ED7C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1509ED80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509ED84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1509ED88: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1509ED8C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x1509ED90: jal         0x151149AC
    // 0x1509ED94: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x1509ED94: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x1509ED98: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1509ED9C: bne         $v0, $zero, L_1509EDAC
    if (ctx->r2 != 0) {
        // 0x1509EDA0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1509EDAC;
    }
    // 0x1509EDA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1509EDA4: b           L_1509EFDC
    // 0x1509EDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509EFDC;
    // 0x1509EDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EDAC:
    // 0x1509EDAC: addiu       $t6, $s0, -0x13
    ctx->r14 = ADD32(ctx->r16, -0X13);
    // 0x1509EDB0: sltiu       $at, $t6, 0x11
    ctx->r1 = ctx->r14 < 0X11 ? 1 : 0;
    // 0x1509EDB4: beq         $at, $zero, L_1509EFD8
    if (ctx->r1 == 0) {
        // 0x1509EDB8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1509EFD8;
    }
    // 0x1509EDB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509EDBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509EDC0: addu        $at, $at, $t6
    gpr jr_addend_1509EDC8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509EDC4: lw          $t6, -0xBC4($at)
    ctx->r14 = ADD32(ctx->r1, -0XBC4);
    // 0x1509EDC8: jr          $t6
    // 0x1509EDCC: nop

    switch (jr_addend_1509EDC8 >> 2) {
        case 0: goto L_1509EDD0; break;
        case 1: goto L_1509EDE4; break;
        case 2: goto L_1509EE10; break;
        case 3: goto L_1509EE6C; break;
        case 4: goto L_1509EE90; break;
        case 5: goto L_1509EEB0; break;
        case 6: goto L_1509EEB8; break;
        case 7: goto L_1509EED8; break;
        case 8: goto L_1509EEE0; break;
        case 9: goto L_1509EEF0; break;
        case 10: goto L_1509EF00; break;
        case 11: goto L_1509EF08; break;
        case 12: goto L_1509EF10; break;
        case 13: goto L_1509EF18; break;
        case 14: goto L_1509EF2C; break;
        case 15: goto L_1509EF68; break;
        case 16: goto L_1509EFC8; break;
        default: switch_error(__func__, 0x1509EDC8, 0x8009F43C);
    }
    // 0x1509EDCC: nop

L_1509EDD0:
    // 0x1509EDD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1509EDD4: jal         0x15114050
    // 0x1509EDD8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_15114050(rdram, ctx);
        goto after_1;
    // 0x1509EDD8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x1509EDDC: b           L_1509EFE0
    // 0x1509EDE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EDE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EDE4:
    // 0x1509EDE4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509EDE8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1509EDEC: ori         $at, $at, 0xFFF
    ctx->r1 = ctx->r1 | 0XFFF;
    // 0x1509EDF0: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x1509EDF4: jal         0x15084000
    // 0x1509EDF8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_15084000(rdram, ctx);
        goto after_2;
    // 0x1509EDF8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x1509EDFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1509EE00: jal         0x15114050
    // 0x1509EE04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_15114050(rdram, ctx);
        goto after_3;
    // 0x1509EE04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x1509EE08: b           L_1509EFE0
    // 0x1509EE0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EE0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EE10:
    // 0x1509EE10: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1509EE14: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x1509EE18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1509EE1C:
    // 0x1509EE1C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1509EE20: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x1509EE24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1509EE28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1509EE2C: bnel        $t8, $t9, L_1509EE58
    if (ctx->r24 != ctx->r25) {
        // 0x1509EE30: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1509EE58;
    }
    goto skip_0;
    // 0x1509EE30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1509EE34: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x1509EE38: jal         0x15114050
    // 0x1509EE3C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_15114050(rdram, ctx);
        goto after_4;
    // 0x1509EE3C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_4:
    // 0x1509EE40: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1509EE44: beq         $v0, $zero, L_1509EE54
    if (ctx->r2 == 0) {
        // 0x1509EE48: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_1509EE54;
    }
    // 0x1509EE48: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1509EE4C: b           L_1509EFDC
    // 0x1509EE50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509EFDC;
    // 0x1509EE50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EE54:
    // 0x1509EE54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1509EE58:
    // 0x1509EE58: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x1509EE5C: bne         $s0, $at, L_1509EE1C
    if (ctx->r16 != ctx->r1) {
        // 0x1509EE60: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1509EE1C;
    }
    // 0x1509EE60: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1509EE64: b           L_1509EFDC
    // 0x1509EE68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509EFDC;
    // 0x1509EE68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EE6C:
    // 0x1509EE6C: lbu         $t0, 0x4F($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4F);
    // 0x1509EE70: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1509EE74: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x1509EE78: bne         $t1, $at, L_1509EE88
    if (ctx->r9 != ctx->r1) {
        // 0x1509EE7C: nop
    
            goto L_1509EE88;
    }
    // 0x1509EE7C: nop

    // 0x1509EE80: b           L_1509EFDC
    // 0x1509EE84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509EFDC;
    // 0x1509EE84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EE88:
    // 0x1509EE88: b           L_1509EFDC
    // 0x1509EE8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509EFDC;
    // 0x1509EE8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EE90:
    // 0x1509EE90: jal         0x151140C4
    // 0x1509EE94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_151140C4(rdram, ctx);
        goto after_5;
    // 0x1509EE94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x1509EE98: bgez        $v0, L_1509EEA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1509EE9C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1509EEA8;
    }
    // 0x1509EE9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1509EEA0: b           L_1509EFDC
    // 0x1509EEA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509EFDC;
    // 0x1509EEA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EEA8:
    // 0x1509EEA8: b           L_1509EFDC
    // 0x1509EEAC: ori         $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 | 0X2000;
        goto L_1509EFDC;
    // 0x1509EEAC: ori         $v0, $v1, 0x2000
    ctx->r2 = ctx->r3 | 0X2000;
L_1509EEB0:
    // 0x1509EEB0: b           L_1509EFDC
    // 0x1509EEB4: lbu         $v0, 0x4F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4F);
        goto L_1509EFDC;
    // 0x1509EEB4: lbu         $v0, 0x4F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4F);
L_1509EEB8:
    // 0x1509EEB8: lw          $t2, 0x84($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X84);
    // 0x1509EEBC: lw          $t3, 0x7C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X7C);
    // 0x1509EEC0: bne         $t2, $t3, L_1509EED0
    if (ctx->r10 != ctx->r11) {
        // 0x1509EEC4: nop
    
            goto L_1509EED0;
    }
    // 0x1509EEC4: nop

    // 0x1509EEC8: b           L_1509EFDC
    // 0x1509EECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509EFDC;
    // 0x1509EECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EED0:
    // 0x1509EED0: b           L_1509EFDC
    // 0x1509EED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509EFDC;
    // 0x1509EED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EED8:
    // 0x1509EED8: b           L_1509EFDC
    // 0x1509EEDC: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
        goto L_1509EFDC;
    // 0x1509EEDC: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
L_1509EEE0:
    // 0x1509EEE0: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x1509EEE4: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x1509EEE8: b           L_1509EFDC
    // 0x1509EEEC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_1509EFDC;
    // 0x1509EEEC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_1509EEF0:
    // 0x1509EEF0: lbu         $v0, 0x6E($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6E);
    // 0x1509EEF4: sltiu       $t5, $v0, 0x1
    ctx->r13 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1509EEF8: b           L_1509EFDC
    // 0x1509EEFC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_1509EFDC;
    // 0x1509EEFC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_1509EF00:
    // 0x1509EF00: b           L_1509EFDC
    // 0x1509EF04: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
        goto L_1509EFDC;
    // 0x1509EF04: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
L_1509EF08:
    // 0x1509EF08: b           L_1509EFDC
    // 0x1509EF0C: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
        goto L_1509EFDC;
    // 0x1509EF0C: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
L_1509EF10:
    // 0x1509EF10: b           L_1509EFDC
    // 0x1509EF14: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
        goto L_1509EFDC;
    // 0x1509EF14: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
L_1509EF18:
    // 0x1509EF18: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1509EF1C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509EF20: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x1509EF24: b           L_1509EFE0
    // 0x1509EF28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EF28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EF2C:
    // 0x1509EF2C: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x1509EF30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509EF34: bne         $v0, $zero, L_1509EF44
    if (ctx->r2 != 0) {
        // 0x1509EF38: nop
    
            goto L_1509EF44;
    }
    // 0x1509EF38: nop

    // 0x1509EF3C: b           L_1509EFDC
    // 0x1509EF40: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
        goto L_1509EFDC;
    // 0x1509EF40: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
L_1509EF44:
    // 0x1509EF44: bnel        $v0, $at, L_1509EF58
    if (ctx->r2 != ctx->r1) {
        // 0x1509EF48: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1509EF58;
    }
    goto skip_1;
    // 0x1509EF48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x1509EF4C: b           L_1509EFDC
    // 0x1509EF50: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
        goto L_1509EFDC;
    // 0x1509EF50: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x1509EF54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_1509EF58:
    // 0x1509EF58: bnel        $v0, $at, L_1509EFDC
    if (ctx->r2 != ctx->r1) {
        // 0x1509EF5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509EFDC;
    }
    goto skip_2;
    // 0x1509EF5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x1509EF60: b           L_1509EFDC
    // 0x1509EF64: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
        goto L_1509EFDC;
    // 0x1509EF64: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
L_1509EF68:
    // 0x1509EF68: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x1509EF6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509EF70: bne         $v0, $zero, L_1509EF8C
    if (ctx->r2 != 0) {
        // 0x1509EF74: nop
    
            goto L_1509EF8C;
    }
    // 0x1509EF74: nop

    // 0x1509EF78: lwc1        $f8, 0x7C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x1509EF7C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509EF80: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1509EF84: b           L_1509EFE0
    // 0x1509EF88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EF88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EF8C:
    // 0x1509EF8C: bnel        $v0, $at, L_1509EFAC
    if (ctx->r2 != ctx->r1) {
        // 0x1509EF90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1509EFAC;
    }
    goto skip_3;
    // 0x1509EF90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x1509EF94: lwc1        $f16, 0x80($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X80);
    // 0x1509EF98: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509EF9C: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x1509EFA0: b           L_1509EFE0
    // 0x1509EFA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EFA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509EFA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_1509EFAC:
    // 0x1509EFAC: bnel        $v0, $at, L_1509EFDC
    if (ctx->r2 != ctx->r1) {
        // 0x1509EFB0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509EFDC;
    }
    goto skip_4;
    // 0x1509EFB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x1509EFB4: lwc1        $f4, 0x84($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X84);
    // 0x1509EFB8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509EFBC: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x1509EFC0: b           L_1509EFE0
    // 0x1509EFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1509EFE0;
    // 0x1509EFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EFC8:
    // 0x1509EFC8: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x1509EFCC: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x1509EFD0: b           L_1509EFDC
    // 0x1509EFD4: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
        goto L_1509EFDC;
    // 0x1509EFD4: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
L_1509EFD8:
    // 0x1509EFD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EFDC:
    // 0x1509EFDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1509EFE0:
    // 0x1509EFE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1509EFE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1509EFE8: jr          $ra
    // 0x1509EFEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1509EFEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1504CA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504CA60: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1504CA64: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504CA68: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1504CA6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1504CA70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1504CA74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1504CA78: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1504CA7C: lwc1        $f4, 0x180($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X180);
    // 0x1504CA80: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1504CA84: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x1504CA88: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x1504CA8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504CA90: add.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1504CA94: bc1f        L_1504CAA8
    if (!c1cs) {
        // 0x1504CA98: swc1        $f6, 0x1CC($a0)
        MEM_W(0X1CC, ctx->r4) = ctx->f6.u32l;
            goto L_1504CAA8;
    }
    // 0x1504CA98: swc1        $f6, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->f6.u32l;
    // 0x1504CA9C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1504CAA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504CAA4: nop

L_1504CAA8:
    // 0x1504CAA8: lbu         $t6, 0x81($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X81);
    // 0x1504CAAC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1504CAB0: beql        $t6, $zero, L_1504CB08
    if (ctx->r14 == 0) {
        // 0x1504CAB4: c.lt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
            goto L_1504CB08;
    }
    goto skip_0;
    // 0x1504CAB4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    skip_0:
    // 0x1504CAB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504CABC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1504CAC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504CAC4: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1504CAC8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1504CACC: nop

    // 0x1504CAD0: bc1fl       L_1504CB4C
    if (!c1cs) {
        // 0x1504CAD4: lui         $at, 0xC060
        ctx->r1 = S32(0XC060 << 16);
            goto L_1504CB4C;
    }
    goto skip_1;
    // 0x1504CAD4: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
    skip_1:
    // 0x1504CAD8: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x1504CADC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1504CAE0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x1504CAE4: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x1504CAE8: nop

    // 0x1504CAEC: bc1fl       L_1504CB4C
    if (!c1cs) {
        // 0x1504CAF0: lui         $at, 0xC060
        ctx->r1 = S32(0XC060 << 16);
            goto L_1504CB4C;
    }
    goto skip_2;
    // 0x1504CAF0: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
    skip_2:
    // 0x1504CAF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504CAF8: sb          $zero, 0x81($a0)
    MEM_B(0X81, ctx->r4) = 0;
    // 0x1504CAFC: b           L_1504CB48
    // 0x1504CB00: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
        goto L_1504CB48;
    // 0x1504CB00: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x1504CB04: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
L_1504CB08:
    // 0x1504CB08: nop

    // 0x1504CB0C: bc1fl       L_1504CB4C
    if (!c1cs) {
        // 0x1504CB10: lui         $at, 0xC060
        ctx->r1 = S32(0XC060 << 16);
            goto L_1504CB4C;
    }
    goto skip_3;
    // 0x1504CB10: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
    skip_3:
    // 0x1504CB14: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1504CB18: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x1504CB1C: jal         0x150ADA20
    // 0x1504CB20: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1504CB20: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1504CB24: andi        $t7, $v0, 0x3F
    ctx->r15 = ctx->r2 & 0X3F;
    // 0x1504CB28: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1504CB2C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1504CB30: bne         $t7, $zero, L_1504CB48
    if (ctx->r15 != 0) {
        // 0x1504CB34: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_1504CB48;
    }
    // 0x1504CB34: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504CB38: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1504CB3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504CB40: nop

    // 0x1504CB44: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
L_1504CB48:
    // 0x1504CB48: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
L_1504CB4C:
    // 0x1504CB4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504CB50: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1504CB54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504CB58: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
    // 0x1504CB5C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1504CB60: lui         $a2, 0x4073
    ctx->r6 = S32(0X4073 << 16);
    // 0x1504CB64: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x1504CB68: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x1504CB6C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1504CB70: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1504CB74: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1504CB78: jal         0x15058EA4
    // 0x1504CB7C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_15058EA4(rdram, ctx);
        goto after_1;
    // 0x1504CB7C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1504CB80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1504CB84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1504CB88: sb          $t8, 0x80($a0)
    MEM_B(0X80, ctx->r4) = ctx->r24;
    // 0x1504CB8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1504CB90: jr          $ra
    // 0x1504CB94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1504CB94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1504089C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504089C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150408A0: jr          $ra
    // 0x150408A4: nop

    return;
    return;
    // 0x150408A4: nop

;}
RECOMP_FUNC void func_150A70C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A70C0: sw          $s0, -0x20($sp)
    MEM_W(-0X20, ctx->r29) = ctx->r16;
    // 0x150A70C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150A70C8: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x150A70CC: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x150A70D0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x150A70D4: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x150A70D8: addiu       $s6, $s6, -0x5DE0
    ctx->r22 = ADD32(ctx->r22, -0X5DE0);
    // 0x150A70DC: lwc1        $f19, 0x4($a2)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r6, 0X4);
    // 0x150A70E0: lhu         $t5, 0x10($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X10);
    // 0x150A70E4: sra         $t3, $t5, 4
    ctx->r11 = S32(SIGNED(ctx->r13) >> 4);
    // 0x150A70E8: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x150A70EC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x150A70F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150A70F4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x150A70F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150A70FC: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x150A7100: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
L_150A7104:
    // 0x150A7104: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x150A7108: sub         $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150A710C: andi        $t4, $t4, 0xFF
    ctx->r12 = ctx->r12 & 0XFF;
    // 0x150A7110: slti        $at, $t4, 0x41
    ctx->r1 = SIGNED(ctx->r12) < 0X41 ? 1 : 0;
    // 0x150A7114: bne         $at, $zero, L_150A716C
    if (ctx->r1 != 0) {
        // 0x150A7118: slti        $at, $t4, 0x81
        ctx->r1 = SIGNED(ctx->r12) < 0X81 ? 1 : 0;
            goto L_150A716C;
    }
    // 0x150A7118: slti        $at, $t4, 0x81
    ctx->r1 = SIGNED(ctx->r12) < 0X81 ? 1 : 0;
    // 0x150A711C: bne         $at, $zero, L_150A7154
    if (ctx->r1 != 0) {
        // 0x150A7120: slti        $at, $t4, 0xC1
        ctx->r1 = SIGNED(ctx->r12) < 0XC1 ? 1 : 0;
            goto L_150A7154;
    }
    // 0x150A7120: slti        $at, $t4, 0xC1
    ctx->r1 = SIGNED(ctx->r12) < 0XC1 ? 1 : 0;
    // 0x150A7124: bne         $at, $zero, L_150A713C
    if (ctx->r1 != 0) {
        // 0x150A7128: sub         $t6, $t9, $t4
        ctx->r14 = SUB32(ctx->r25, ctx->r12);
            goto L_150A713C;
    }
    // 0x150A7128: sub         $t6, $t9, $t4
    ctx->r14 = SUB32(ctx->r25, ctx->r12);
    // 0x150A712C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A7130: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7134: j           L_150A717C
    // 0x150A7138: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A717C;
    // 0x150A7138: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
L_150A713C:
    // 0x150A713C: addi        $t6, $t4, -0x80
    ctx->r14 = ADD32(ctx->r12, -0X80);
    // 0x150A7140: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A7144: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7148: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A714C: j           L_150A717C
    // 0x150A7150: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
        goto L_150A717C;
    // 0x150A7150: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
L_150A7154:
    // 0x150A7154: sub         $t6, $s7, $t4
    ctx->r14 = SUB32(ctx->r23, ctx->r12);
    // 0x150A7158: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A715C: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7160: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A7164: j           L_150A717C
    // 0x150A7168: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
        goto L_150A717C;
    // 0x150A7168: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
L_150A716C:
    // 0x150A716C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x150A7170: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7174: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x150A7178: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
L_150A717C:
    // 0x150A717C: mul.s       $f10, $f8, $f19
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f19.fl);
    // 0x150A7180: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150A7184: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150A7188: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x150A718C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x150A7190: lh          $t8, 0x2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X2);
    // 0x150A7194: add         $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x150A7198: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x150A719C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x150A71A0: bne         $a1, $a0, L_150A7104
    if (ctx->r5 != ctx->r4) {
        // 0x150A71A4: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_150A7104;
    }
    // 0x150A71A4: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x150A71A8: lb          $t0, 0x12($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X12);
    // 0x150A71AC: add         $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x150A71B0: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x150A71B4: sh          $t0, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r8;
    // 0x150A71B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A71BC: lw          $s6, -0x8($sp)
    ctx->r22 = MEM_W(ctx->r29, -0X8);
    // 0x150A71C0: jr          $ra
    // 0x150A71C4: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
    return;
    return;
    // 0x150A71C4: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
;}
RECOMP_FUNC void func_150A32B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A32B4: addiu       $sp, $sp, -0x350
    ctx->r29 = ADD32(ctx->r29, -0X350);
    // 0x150A32B8: sw          $a1, 0x354($sp)
    MEM_W(0X354, ctx->r29) = ctx->r5;
    // 0x150A32BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150A32C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150A32C4: sw          $a0, 0x350($sp)
    MEM_W(0X350, ctx->r29) = ctx->r4;
    // 0x150A32C8: sw          $a2, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r6;
    // 0x150A32CC: lw          $t7, 0x358($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X358);
    // 0x150A32D0: lw          $t6, 0x354($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X354);
    // 0x150A32D4: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x150A32D8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150A32DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150A32E0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150A32E4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150A32E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150A32EC: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150A32F0: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x150A32F4: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x150A32F8: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150A32FC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150A3300: swc1        $f0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f0.u32l;
    // 0x150A3304: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150A3308: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150A330C: jal         0x150A1DA0
    // 0x150A3310: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    func_150A1DA0(rdram, ctx);
        goto after_0;
    // 0x150A3310: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x150A3314: bne         $v0, $zero, L_150A3324
    if (ctx->r2 != 0) {
        // 0x150A3318: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150A3324;
    }
    // 0x150A3318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150A331C: b           L_150A3328
    // 0x150A3320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150A3328;
    // 0x150A3320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150A3324:
    // 0x150A3324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150A3328:
    // 0x150A3328: jr          $ra
    // 0x150A332C: addiu       $sp, $sp, 0x350
    ctx->r29 = ADD32(ctx->r29, 0X350);
    return;
    return;
    // 0x150A332C: addiu       $sp, $sp, 0x350
    ctx->r29 = ADD32(ctx->r29, 0X350);
;}
RECOMP_FUNC void func_150408F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150408F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150408F4: jr          $ra
    // 0x150408F8: nop

    return;
    return;
    // 0x150408F8: nop

;}
RECOMP_FUNC void func_1507266C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507266C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15072670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15072674: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15072678: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x1507267C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15072680: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15072684: bne         $t6, $zero, L_1507269C
    if (ctx->r14 != 0) {
        // 0x15072688: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_1507269C;
    }
    // 0x15072688: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507268C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15072690: lbu         $t8, 0x222($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X222);
    // 0x15072694: beql        $t8, $zero, L_15072734
    if (ctx->r24 == 0) {
        // 0x15072698: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15072734;
    }
    goto skip_0;
    // 0x15072698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1507269C:
    // 0x1507269C: lw          $t9, 0x154C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X154C);
    // 0x150726A0: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x150726A4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150726A8: lbu         $t2, 0x222($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X222);
    // 0x150726AC: addiu       $t1, $t1, 0x3E78
    ctx->r9 = ADD32(ctx->r9, 0X3E78);
    // 0x150726B0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150726B4: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150726B8: lw          $v1, 0x1580($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1580);
    // 0x150726BC: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x150726C0: addiu       $a3, $a3, -0x3D30
    ctx->r7 = ADD32(ctx->r7, -0X3D30);
    // 0x150726C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150726C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150726CC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x150726D0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150726D4: sra         $a2, $v1, 16
    ctx->r6 = S32(SIGNED(ctx->r3) >> 16);
    // 0x150726D8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x150726DC: mflo        $t3
    ctx->r11 = lo;
    // 0x150726E0: addu        $a1, $a3, $t3
    ctx->r5 = ADD32(ctx->r7, ctx->r11);
    // 0x150726E4: sb          $t5, 0x65($a1)
    MEM_B(0X65, ctx->r5) = ctx->r13;
    // 0x150726E8: sw          $a2, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->r6;
    // 0x150726EC: sb          $t6, 0x101($a1)
    MEM_B(0X101, ctx->r5) = ctx->r14;
    // 0x150726F0: sb          $zero, 0x104($a1)
    MEM_B(0X104, ctx->r5) = 0;
    // 0x150726F4: sb          $t7, 0x125($a1)
    MEM_B(0X125, ctx->r5) = ctx->r15;
    // 0x150726F8: sw          $zero, 0x218($a1)
    MEM_W(0X218, ctx->r5) = 0;
    // 0x150726FC: sh          $zero, 0xE4($a1)
    MEM_H(0XE4, ctx->r5) = 0;
    // 0x15072700: sh          $zero, 0xE6($a1)
    MEM_H(0XE6, ctx->r5) = 0;
    // 0x15072704: sb          $v1, 0x232($a1)
    MEM_B(0X232, ctx->r5) = ctx->r3;
    // 0x15072708: swc1        $f0, 0xEC($a1)
    MEM_W(0XEC, ctx->r5) = ctx->f0.u32l;
    // 0x1507270C: swc1        $f0, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->f0.u32l;
    // 0x15072710: swc1        $f0, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = ctx->f0.u32l;
    // 0x15072714: swc1        $f0, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f0.u32l;
    // 0x15072718: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x1507271C: multu       $t8, $t0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15072720: mflo        $t9
    ctx->r25 = lo;
    // 0x15072724: addu        $a0, $a3, $t9
    ctx->r4 = ADD32(ctx->r7, ctx->r25);
    // 0x15072728: jal         0x151B5BA0
    // 0x1507272C: nop

    func_151B5BA0(rdram, ctx);
        goto after_0;
    // 0x1507272C: nop

    after_0:
    // 0x15072730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15072734:
    // 0x15072734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072738: jr          $ra
    // 0x1507273C: nop

    return;
    return;
    // 0x1507273C: nop

;}
RECOMP_FUNC void func_150489B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150489B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150489B4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150489B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150489BC: slti        $at, $a0, 0x41
    ctx->r1 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x150489C0: bne         $at, $zero, L_15048A24
    if (ctx->r1 != 0) {
        // 0x150489C4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15048A24;
    }
    // 0x150489C4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150489C8: slti        $at, $v0, 0x81
    ctx->r1 = SIGNED(ctx->r2) < 0X81 ? 1 : 0;
    // 0x150489CC: bne         $at, $zero, L_15048A0C
    if (ctx->r1 != 0) {
        // 0x150489D0: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_15048A0C;
    }
    // 0x150489D0: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x150489D4: slti        $at, $v0, 0xC1
    ctx->r1 = SIGNED(ctx->r2) < 0XC1 ? 1 : 0;
    // 0x150489D8: bne         $at, $zero, L_150489F8
    if (ctx->r1 != 0) {
        // 0x150489DC: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_150489F8;
    }
    // 0x150489DC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x150489E0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150489E4: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x150489E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150489EC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x150489F0: b           L_15048A34
    // 0x150489F4: lwc1        $f2, -0x59E0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X59E0);
        goto L_15048A34;
    // 0x150489F4: lwc1        $f2, -0x59E0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X59E0);
L_150489F8:
    // 0x150489F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150489FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15048A00: lwc1        $f2, -0x5FE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5FE0);
    // 0x15048A04: b           L_15048A34
    // 0x15048A08: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_15048A34;
    // 0x15048A08: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_15048A0C:
    // 0x15048A0C: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x15048A10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048A14: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x15048A18: lwc1        $f2, -0x5BE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5BE0);
    // 0x15048A1C: b           L_15048A34
    // 0x15048A20: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_15048A34;
    // 0x15048A20: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_15048A24:
    // 0x15048A24: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x15048A28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048A2C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x15048A30: lwc1        $f2, -0x5DE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5DE0);
L_15048A34:
    // 0x15048A34: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15048A38: jr          $ra
    // 0x15048A3C: nop

    return;
    return;
    // 0x15048A3C: nop

;}
RECOMP_FUNC void func_15005E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005E38: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15005E3C: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15005E40: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x15005E44: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15005E48: bne         $t6, $at, L_15005E5C
    if (ctx->r14 != ctx->r1) {
        // 0x15005E4C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_15005E5C;
    }
    // 0x15005E4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15005E50: sh          $t7, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r15;
    // 0x15005E54: jal         0x15124B18
    // 0x15005E58: sh          $t8, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r24;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005E58: sh          $t8, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r24;
    after_0:
L_15005E5C:
    // 0x15005E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15005E64: jr          $ra
    // 0x15005E68: nop

    return;
    return;
    // 0x15005E68: nop

;}
RECOMP_FUNC void func_1519F48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F48C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519F490: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519F494: beql        $v1, $zero, L_1519F4D0
    if (ctx->r3 == 0) {
        // 0x1519F498: lhu         $t6, 0x1E($a0)
        ctx->r14 = MEM_HU(ctx->r4, 0X1E);
            goto L_1519F4D0;
    }
    goto skip_0;
    // 0x1519F498: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    skip_0:
    // 0x1519F49C: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x1519F4A0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1519F4A4: addiu       $a1, $v1, 0x58
    ctx->r5 = ADD32(ctx->r3, 0X58);
    // 0x1519F4A8: bnel        $a2, $at, L_1519F4BC
    if (ctx->r6 != ctx->r1) {
        // 0x1519F4AC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_1519F4BC;
    }
    goto skip_1;
    // 0x1519F4AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_1:
    // 0x1519F4B0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x1519F4B4: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x1519F4B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_1519F4BC:
    // 0x1519F4BC: bnel        $a2, $at, L_1519F4CC
    if (ctx->r6 != ctx->r1) {
        // 0x1519F4C0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_1519F4CC;
    }
    goto skip_2;
    // 0x1519F4C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_2:
    // 0x1519F4C4: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x1519F4C8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_1519F4CC:
    // 0x1519F4CC: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
L_1519F4D0:
    // 0x1519F4D0: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x1519F4D4: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x1519F4D8: sh          $t7, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r15;
    // 0x1519F4DC: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x1519F4E0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x1519F4E4: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
    // 0x1519F4E8: jr          $ra
    // 0x1519F4EC: nop

    return;
    return;
    // 0x1519F4EC: nop

;}
RECOMP_FUNC void func_151606A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151606A8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x151606AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151606B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151606B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151606B8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151606BC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151606C0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x151606C4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x151606C8: jal         0x150A8050
    // 0x151606CC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151606CC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_0:
    // 0x151606D0: addiu       $v0, $s0, 0x18
    ctx->r2 = ADD32(ctx->r16, 0X18);
    // 0x151606D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151606D8: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151606DC: addiu       $v1, $v1, 0x66B4
    ctx->r3 = ADD32(ctx->r3, 0X66B4);
    // 0x151606E0: lh          $t7, 0x10($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X10);
    // 0x151606E4: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x151606E8: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x151606EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x151606F0: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x151606F4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x151606F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151606FC: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x15160700: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x15160704: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15160708: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x1516070C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15160710: lh          $t9, 0x12($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X12);
    // 0x15160714: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15160718: nop

    // 0x1516071C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15160720: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x15160724: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x15160728: lh          $t1, 0x14($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X14);
    // 0x1516072C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15160730: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15160734: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x15160738: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1516073C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15160740: jal         0x150A7960
    // 0x15160744: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15160744: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15160748: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1516074C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x15160750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15160754: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15160758: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1516075C: nop

    // 0x15160760: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    // 0x15160764: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15160768: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x1516076C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15160770: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15160774: nop

    // 0x15160778: sh          $t9, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r25;
    // 0x1516077C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15160780: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x15160784: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15160788: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x1516078C: nop

    // 0x15160790: sh          $t2, 0x12($t3)
    MEM_H(0X12, ctx->r11) = ctx->r10;
    // 0x15160794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15160798: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1516079C: jr          $ra
    // 0x151607A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x151607A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_1506EDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EDAC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506EDB0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506EDB4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506EDB8: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506EDBC: sw          $t6, 0xF4($t7)
    MEM_W(0XF4, ctx->r15) = ctx->r14;
    // 0x1506EDC0: jr          $ra
    // 0x1506EDC4: nop

    return;
    return;
    // 0x1506EDC4: nop

;}
RECOMP_FUNC void func_1510B9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B9D0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1510B9D4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x1510B9D8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x1510B9DC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1510B9E0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1510B9E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1510B9E8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510B9EC: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x1510B9F0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x1510B9F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x1510B9F8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x1510B9FC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1510BA00: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x1510BA04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x1510BA08: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1510BA0C: lbu         $t2, 0x35EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X35EA);
    // 0x1510BA10: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x1510BA14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1510BA18: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1510BA1C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x1510BA20: sb          $t1, -0x1460($at)
    MEM_B(-0X1460, ctx->r1) = ctx->r9;
    // 0x1510BA24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1510BA28: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x1510BA2C: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x1510BA30: bne         $t2, $at, L_1510BA4C
    if (ctx->r10 != ctx->r1) {
        // 0x1510BA34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1510BA4C;
    }
    // 0x1510BA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1510BA38: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1510BA3C: lbu         $t3, 0x3662($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3662);
    // 0x1510BA40: beq         $t3, $zero, L_1510BA4C
    if (ctx->r11 == 0) {
        // 0x1510BA44: nop
    
            goto L_1510BA4C;
    }
    // 0x1510BA44: nop

    // 0x1510BA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1510BA4C:
    // 0x1510BA4C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1510BA50: lhu         $t5, 0x18A0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X18A0);
    // 0x1510BA54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1510BA58: sllv        $a2, $t4, $a1
    ctx->r6 = S32(ctx->r12 << (ctx->r5 & 31));
    // 0x1510BA5C: and         $t6, $t5, $a2
    ctx->r14 = ctx->r13 & ctx->r6;
    // 0x1510BA60: beq         $t6, $zero, L_1510BA6C
    if (ctx->r14 == 0) {
        // 0x1510BA64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1510BA6C;
    }
    // 0x1510BA64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510BA68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1510BA6C:
    // 0x1510BA6C: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x1510BA70: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x1510BA74: sh          $a1, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r5;
    // 0x1510BA78: jal         0x1510B7B4
    // 0x1510BA7C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    func_1510B7B4(rdram, ctx);
        goto after_0;
    // 0x1510BA7C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_0:
    // 0x1510BA80: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510BA84: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1510BA88: addiu       $a1, $a1, -0x1640
    ctx->r5 = ADD32(ctx->r5, -0X1640);
    // 0x1510BA8C: addiu       $v1, $v1, -0x6470
    ctx->r3 = ADD32(ctx->r3, -0X6470);
    // 0x1510BA90: lui         $t7, 0xDC08
    ctx->r15 = S32(0XDC08 << 16);
    // 0x1510BA94: ori         $t7, $t7, 0xA
    ctx->r15 = ctx->r15 | 0XA;
    // 0x1510BA98: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510BA9C: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x1510BAA0: lui         $t2, 0xDC08
    ctx->r10 = S32(0XDC08 << 16);
    // 0x1510BAA4: ori         $t2, $t2, 0x60A
    ctx->r10 = ctx->r10 | 0X60A;
    // 0x1510BAA8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x1510BAAC: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x1510BAB0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x1510BAB4: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x1510BAB8: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    // 0x1510BABC: addiu       $s0, $v0, 0x10
    ctx->r16 = ADD32(ctx->r2, 0X10);
    // 0x1510BAC0: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x1510BAC4: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x1510BAC8: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x1510BACC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x1510BAD0: jal         0x1510CB10
    // 0x1510BAD4: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    func_1510CB10(rdram, ctx);
        goto after_1;
    // 0x1510BAD4: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    after_1:
    // 0x1510BAD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510BADC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1510BAE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1510BAE4: jal         0x1510CDB8
    // 0x1510BAE8: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    func_1510CDB8(rdram, ctx);
        goto after_2;
    // 0x1510BAE8: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    after_2:
    // 0x1510BAEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1510BAF0: jal         0x151733D8
    // 0x1510BAF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151733D8(rdram, ctx);
        goto after_3;
    // 0x1510BAF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x1510BAF8: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x1510BAFC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1510BB00: addiu       $t8, $t8, -0x6B90
    ctx->r24 = ADD32(ctx->r24, -0X6B90);
    // 0x1510BB04: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x1510BB08: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510BB0C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1510BB10: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BB14: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x1510BB18: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1510BB1C: bne         $t9, $zero, L_1510BB98
    if (ctx->r25 != 0) {
        // 0x1510BB20: nop
    
            goto L_1510BB98;
    }
    // 0x1510BB20: nop

    // 0x1510BB24: lw          $t1, -0x1610($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1610);
    // 0x1510BB28: addiu       $t2, $t1, -0x13
    ctx->r10 = ADD32(ctx->r9, -0X13);
    // 0x1510BB2C: sltiu       $at, $t2, 0x23
    ctx->r1 = ctx->r10 < 0X23 ? 1 : 0;
    // 0x1510BB30: beq         $at, $zero, L_1510BB98
    if (ctx->r1 == 0) {
        // 0x1510BB34: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_1510BB98;
    }
    // 0x1510BB34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1510BB38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510BB3C: addu        $at, $at, $t2
    gpr jr_addend_1510BB44 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x1510BB40: lw          $t2, 0x2C2C($at)
    ctx->r10 = ADD32(ctx->r1, 0X2C2C);
    // 0x1510BB44: jr          $t2
    // 0x1510BB48: nop

    switch (jr_addend_1510BB44 >> 2) {
        case 0: goto L_1510BB6C; break;
        case 1: goto L_1510BB4C; break;
        case 2: goto L_1510BB98; break;
        case 3: goto L_1510BB98; break;
        case 4: goto L_1510BB98; break;
        case 5: goto L_1510BB98; break;
        case 6: goto L_1510BB98; break;
        case 7: goto L_1510BB5C; break;
        case 8: goto L_1510BB98; break;
        case 9: goto L_1510BB98; break;
        case 10: goto L_1510BB98; break;
        case 11: goto L_1510BB98; break;
        case 12: goto L_1510BB98; break;
        case 13: goto L_1510BB98; break;
        case 14: goto L_1510BB98; break;
        case 15: goto L_1510BB98; break;
        case 16: goto L_1510BB98; break;
        case 17: goto L_1510BB98; break;
        case 18: goto L_1510BB98; break;
        case 19: goto L_1510BB98; break;
        case 20: goto L_1510BB98; break;
        case 21: goto L_1510BB98; break;
        case 22: goto L_1510BB98; break;
        case 23: goto L_1510BB98; break;
        case 24: goto L_1510BB98; break;
        case 25: goto L_1510BB98; break;
        case 26: goto L_1510BB98; break;
        case 27: goto L_1510BB98; break;
        case 28: goto L_1510BB98; break;
        case 29: goto L_1510BB98; break;
        case 30: goto L_1510BB98; break;
        case 31: goto L_1510BB98; break;
        case 32: goto L_1510BB8C; break;
        case 33: goto L_1510BB98; break;
        case 34: goto L_1510BB7C; break;
        default: switch_error(__func__, 0x1510BB44, 0x800A2C2C);
    }
    // 0x1510BB48: nop

L_1510BB4C:
    // 0x1510BB4C: jal         0x150C8600
    // 0x1510BB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150C8600(rdram, ctx);
        goto after_4;
    // 0x1510BB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x1510BB54: b           L_1510BB98
    // 0x1510BB58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BB98;
    // 0x1510BB58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BB5C:
    // 0x1510BB5C: jal         0x15100464
    // 0x1510BB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15100464(rdram, ctx);
        goto after_5;
    // 0x1510BB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x1510BB64: b           L_1510BB98
    // 0x1510BB68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BB98;
    // 0x1510BB68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BB6C:
    // 0x1510BB6C: jal         0x150DFBD0
    // 0x1510BB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150DFBD0(rdram, ctx);
        goto after_6;
    // 0x1510BB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x1510BB74: b           L_1510BB98
    // 0x1510BB78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BB98;
    // 0x1510BB78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BB7C:
    // 0x1510BB7C: jal         0x150CF5E8
    // 0x1510BB80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150CF5E8(rdram, ctx);
        goto after_7;
    // 0x1510BB80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x1510BB84: b           L_1510BB98
    // 0x1510BB88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BB98;
    // 0x1510BB88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BB8C:
    // 0x1510BB8C: jal         0x150D765C
    // 0x1510BB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150D765C(rdram, ctx);
        goto after_8;
    // 0x1510BB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x1510BB94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BB98:
    // 0x1510BB98: jal         0x1510F800
    // 0x1510BB9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_9;
    // 0x1510BB9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x1510BBA0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1510BBA4: lw          $t3, -0x3284($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3284);
    // 0x1510BBA8: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    // 0x1510BBAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1510BBB0: bne         $t3, $zero, L_1510BBEC
    if (ctx->r11 != 0) {
        // 0x1510BBB4: lui         $t2, 0x800E
        ctx->r10 = S32(0X800E << 16);
            goto L_1510BBEC;
    }
    // 0x1510BBB4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1510BBB8: lui         $t4, 0xDC28
    ctx->r12 = S32(0XDC28 << 16);
    // 0x1510BBBC: ori         $t4, $t4, 0xC0A
    ctx->r12 = ctx->r12 | 0XC0A;
    // 0x1510BBC0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1510BBC4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510BBC8: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1510BBCC: sll         $t5, $a1, 4
    ctx->r13 = S32(ctx->r5 << 4);
    // 0x1510BBD0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1510BBD4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1510BBD8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x1510BBDC: addiu       $t9, $t9, -0x6430
    ctx->r25 = ADD32(ctx->r25, -0X6430);
    // 0x1510BBE0: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x1510BBE4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x1510BBE8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_1510BBEC:
    // 0x1510BBEC: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x1510BBF0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x1510BBF4: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    // 0x1510BBF8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1510BBFC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x1510BC00: lwc1        $f4, 0x2F8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1510BC04: lwc1        $f8, 0x2FC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1510BC08: lwc1        $f16, 0x300($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X300);
    // 0x1510BC0C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1510BC10: addiu       $t9, $t9, -0x61F0
    ctx->r25 = ADD32(ctx->r25, -0X61F0);
    // 0x1510BC14: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1510BC18: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1510BC1C: lbu         $t2, -0x61E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X61E0);
    // 0x1510BC20: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1510BC24: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510BC28: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1510BC2C: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1510BC30: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1510BC34: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1510BC38: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x1510BC3C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1510BC40: addiu       $t4, $t4, -0x6430
    ctx->r12 = ADD32(ctx->r12, -0X6430);
    // 0x1510BC44: sll         $t3, $a1, 4
    ctx->r11 = S32(ctx->r5 << 4);
    // 0x1510BC48: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1510BC4C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1510BC50: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x1510BC54: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1510BC58: sll         $t5, $t6, 3
    ctx->r13 = S32(ctx->r14 << 3);
    // 0x1510BC5C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1510BC60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1510BC64: addu        $t7, $v1, $t5
    ctx->r15 = ADD32(ctx->r3, ctx->r13);
    // 0x1510BC68: addiu       $t1, $zero, 0x25
    ctx->r9 = ADD32(0, 0X25);
    // 0x1510BC6C: addiu       $t8, $t8, -0x61DF
    ctx->r24 = ADD32(ctx->r24, -0X61DF);
    // 0x1510BC70: addiu       $t2, $t2, -0x61D8
    ctx->r10 = ADD32(ctx->r10, -0X61D8);
    // 0x1510BC74: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1510BC78: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1510BC7C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510BC80: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1510BC84: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x1510BC88: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1510BC8C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1510BC90: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1510BC94: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x1510BC98: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x1510BC9C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1510BCA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1510BCA4: jal         0x1515D914
    // 0x1510BCA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1515D914(rdram, ctx);
        goto after_10;
    // 0x1510BCA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x1510BCAC: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x1510BCB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1510BCB4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1510BCB8: bnel        $t3, $zero, L_1510BF34
    if (ctx->r11 != 0) {
        // 0x1510BCBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1510BF34;
    }
    goto skip_0;
    // 0x1510BCBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x1510BCC0: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x1510BCC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1510BCC8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1510BCCC: beq         $t4, $at, L_1510BEAC
    if (ctx->r12 == ctx->r1) {
        // 0x1510BCD0: nop
    
            goto L_1510BEAC;
    }
    // 0x1510BCD0: nop

    // 0x1510BCD4: lbu         $v1, -0x1556($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1556);
    // 0x1510BCD8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1510BCDC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1510BCE0: beq         $v1, $zero, L_1510BE58
    if (ctx->r3 == 0) {
        // 0x1510BCE4: nop
    
            goto L_1510BE58;
    }
    // 0x1510BCE4: nop

    // 0x1510BCE8: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BCEC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1510BCF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510BCF4: lbu         $t5, -0x419E($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X419E);
    // 0x1510BCF8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1510BCFC: lui         $t4, 0xDE00
    ctx->r12 = S32(0XDE00 << 16);
    // 0x1510BD00: beq         $t5, $zero, L_1510BE40
    if (ctx->r13 == 0) {
        // 0x1510BD04: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_1510BE40;
    }
    // 0x1510BD04: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x1510BD08: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1510BD0C: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1510BD10: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1510BD14: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x1510BD18: beq         $v0, $at, L_1510BD6C
    if (ctx->r2 == ctx->r1) {
        // 0x1510BD1C: lui         $t3, 0x800B
        ctx->r11 = S32(0X800B << 16);
            goto L_1510BD6C;
    }
    // 0x1510BD1C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x1510BD20: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1510BD24: beq         $v0, $at, L_1510BD6C
    if (ctx->r2 == ctx->r1) {
        // 0x1510BD28: addiu       $at, $zero, 0x32
        ctx->r1 = ADD32(0, 0X32);
            goto L_1510BD6C;
    }
    // 0x1510BD28: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x1510BD2C: beq         $v0, $at, L_1510BD6C
    if (ctx->r2 == ctx->r1) {
        // 0x1510BD30: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_1510BD6C;
    }
    // 0x1510BD30: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1510BD34: lh          $t7, 0x9E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9E);
    // 0x1510BD38: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1510BD3C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1510BD40: addiu       $t9, $t9, -0x63F0
    ctx->r25 = ADD32(ctx->r25, -0X63F0);
    // 0x1510BD44: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x1510BD48: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x1510BD4C: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x1510BD50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1510BD54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510BD58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1510BD5C: jal         0x150A5378
    // 0x1510BD60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_150A5378(rdram, ctx);
        goto after_11;
    // 0x1510BD60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_11:
    // 0x1510BD64: b           L_1510BD80
    // 0x1510BD68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BD80;
    // 0x1510BD68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BD6C:
    // 0x1510BD6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1510BD70: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1510BD74: lw          $t3, 0xE00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XE00);
    // 0x1510BD78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1510BD7C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_1510BD80:
    // 0x1510BD80: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x1510BD84: lw          $t4, 0xE04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XE04);
    // 0x1510BD88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1510BD8C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1510BD90: beq         $t4, $zero, L_1510BDF8
    if (ctx->r12 == 0) {
        // 0x1510BD94: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_1510BDF8;
    }
    // 0x1510BD94: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1510BD98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1510BD9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1510BDA0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510BDA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510BDA8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1510BDAC: jal         0x1510CDB8
    // 0x1510BDB0: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    func_1510CDB8(rdram, ctx);
        goto after_12;
    // 0x1510BDB0: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    after_12:
    // 0x1510BDB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1510BDB8: jal         0x151733D8
    // 0x1510BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151733D8(rdram, ctx);
        goto after_13;
    // 0x1510BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x1510BDC0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1510BDC4: lw          $t5, -0x1610($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1610);
    // 0x1510BDC8: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x1510BDCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1510BDD0: bnel        $t5, $at, L_1510BDE4
    if (ctx->r13 != ctx->r1) {
        // 0x1510BDD4: lui         $t7, 0xDE00
        ctx->r15 = S32(0XDE00 << 16);
            goto L_1510BDE4;
    }
    goto skip_1;
    // 0x1510BDD4: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    skip_1:
    // 0x1510BDD8: jal         0x150CF5E8
    // 0x1510BDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150CF5E8(rdram, ctx);
        goto after_14;
    // 0x1510BDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x1510BDE0: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
L_1510BDE4:
    // 0x1510BDE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510BDE8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x1510BDEC: lw          $t8, 0xE04($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XE04);
    // 0x1510BDF0: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BDF4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_1510BDF8:
    // 0x1510BDF8: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x1510BDFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1510BE00: sb          $zero, -0x1460($at)
    MEM_B(-0X1460, ctx->r1) = 0;
    // 0x1510BE04: lbu         $t9, 0x8B8($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X8B8);
    // 0x1510BE08: beq         $t9, $zero, L_1510BEAC
    if (ctx->r25 == 0) {
        // 0x1510BE0C: nop
    
            goto L_1510BEAC;
    }
    // 0x1510BE0C: nop

    // 0x1510BE10: lw          $t1, 0x84($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X84);
    // 0x1510BE14: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x1510BE18: beq         $t2, $zero, L_1510BEAC
    if (ctx->r10 == 0) {
        // 0x1510BE1C: nop
    
            goto L_1510BEAC;
    }
    // 0x1510BE1C: nop

    // 0x1510BE20: jal         0x1512E5F0
    // 0x1510BE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E5F0(rdram, ctx);
        goto after_15;
    // 0x1510BE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x1510BE28: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x1510BE2C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1510BE30: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BE34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510BE38: b           L_1510BEAC
    // 0x1510BE3C: nop

        goto L_1510BEAC;
    // 0x1510BE3C: nop

L_1510BE40:
    // 0x1510BE40: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1510BE44: lw          $t6, 0xE00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE00);
    // 0x1510BE48: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1510BE4C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1510BE50: b           L_1510BEAC
    // 0x1510BE54: nop

        goto L_1510BEAC;
    // 0x1510BE54: nop

L_1510BE58:
    // 0x1510BE58: beq         $v1, $zero, L_1510BE98
    if (ctx->r3 == 0) {
        // 0x1510BE5C: lui         $t9, 0xDE00
        ctx->r25 = S32(0XDE00 << 16);
            goto L_1510BE98;
    }
    // 0x1510BE5C: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x1510BE60: lh          $t5, 0x9E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X9E);
    // 0x1510BE64: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1510BE68: addiu       $t8, $t8, -0x63F0
    ctx->r24 = ADD32(ctx->r24, -0X63F0);
    // 0x1510BE6C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1510BE70: sll         $t7, $t5, 6
    ctx->r15 = S32(ctx->r13 << 6);
    // 0x1510BE74: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x1510BE78: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x1510BE7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1510BE80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510BE84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1510BE88: jal         0x150A50C0
    // 0x1510BE8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_150A50C0(rdram, ctx);
        goto after_16;
    // 0x1510BE8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_16:
    // 0x1510BE90: b           L_1510BEAC
    // 0x1510BE94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1510BEAC;
    // 0x1510BE94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1510BE98:
    // 0x1510BE98: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1510BE9C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1510BEA0: lw          $t1, 0xE00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XE00);
    // 0x1510BEA4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BEA8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_1510BEAC:
    // 0x1510BEAC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1510BEB0: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x1510BEB4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x1510BEB8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x1510BEBC: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x1510BEC0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1510BEC4: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x1510BEC8: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x1510BECC: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x1510BED0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1510BED4: lbu         $a3, -0x61DF($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X61DF);
    // 0x1510BED8: lbu         $a2, -0x61E0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X61E0);
    // 0x1510BEDC: jal         0x1515E544
    // 0x1510BEE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1515E544(rdram, ctx);
        goto after_17;
    // 0x1510BEE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x1510BEE4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x1510BEE8: lw          $t7, 0xE08($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XE08);
    // 0x1510BEEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1510BEF0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x1510BEF4: beq         $t7, $zero, L_1510BF30
    if (ctx->r15 == 0) {
        // 0x1510BEF8: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_1510BF30;
    }
    // 0x1510BEF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1510BEFC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1510BF00: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1510BF04: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510BF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510BF0C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1510BF10: jal         0x1510CDB8
    // 0x1510BF14: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    func_1510CDB8(rdram, ctx);
        goto after_18;
    // 0x1510BF14: lh          $a3, 0x9E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X9E);
    after_18:
    // 0x1510BF18: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x1510BF1C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1510BF20: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1510BF24: lw          $t1, 0xE08($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XE08);
    // 0x1510BF28: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x1510BF2C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_1510BF30:
    // 0x1510BF30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1510BF34:
    // 0x1510BF34: jal         0x151742EC
    // 0x1510BF38: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    func_151742EC(rdram, ctx);
        goto after_19;
    // 0x1510BF38: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    after_19:
    // 0x1510BF3C: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x1510BF40: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1510BF44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510BF48: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1510BF4C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1510BF50: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1510BF54: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x1510BF58: jr          $ra
    // 0x1510BF5C: nop

    return;
    return;
    // 0x1510BF5C: nop

;}
RECOMP_FUNC void func_1000CDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CDA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000CDA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000CDA8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1000CDAC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000CDB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000CDB4: bne         $a0, $zero, L_1000CDC4
    if (ctx->r4 != 0) {
        // 0x1000CDB8: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_1000CDC4;
    }
    // 0x1000CDB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1000CDBC: b           L_1000CE9C
    // 0x1000CDC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000CE9C;
    // 0x1000CDC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000CDC4:
    // 0x1000CDC4: beq         $a1, $zero, L_1000CE90
    if (ctx->r5 == 0) {
        // 0x1000CDC8: nop
    
            goto L_1000CE90;
    }
    // 0x1000CDC8: nop

    // 0x1000CDCC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x1000CDD0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1000CDD4: bltz        $v0, L_1000CE88
    if (SIGNED(ctx->r2) < 0) {
        // 0x1000CDD8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_1000CE88;
    }
    // 0x1000CDD8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1000CDDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1000CDE0: lw          $t8, 0x17B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X17B0);
    // 0x1000CDE4: beq         $t8, $zero, L_1000CDFC
    if (ctx->r24 == 0) {
        // 0x1000CDE8: nop
    
            goto L_1000CDFC;
    }
    // 0x1000CDE8: nop

    // 0x1000CDEC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x1000CDF0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x1000CDF4: bgtzl       $t9, L_1000CE08
    if (SIGNED(ctx->r25) > 0) {
        // 0x1000CDF8: sw          $v1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r3;
            goto L_1000CE08;
    }
    goto skip_0;
    // 0x1000CDF8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    skip_0:
L_1000CDFC:
    // 0x1000CDFC: b           L_1000CE9C
    // 0x1000CE00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000CE9C;
    // 0x1000CE00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000CE04: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_1000CE08:
    // 0x1000CE08: jal         0x1000853C
    // 0x1000CE0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_1000853C(rdram, ctx);
        goto after_0;
    // 0x1000CE0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000CE10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000CE14: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1000CE18: bne         $v0, $at, L_1000CE28
    if (ctx->r2 != ctx->r1) {
        // 0x1000CE1C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_1000CE28;
    }
    // 0x1000CE1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1000CE20: b           L_1000CE9C
    // 0x1000CE24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000CE9C;
    // 0x1000CE24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000CE28:
    // 0x1000CE28: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x1000CE2C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x1000CE30: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x1000CE34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1000CE38: lw          $t2, -0x4F88($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4F88);
    // 0x1000CE3C: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x1000CE40: bnel        $t3, $zero, L_1000CE68
    if (ctx->r11 != 0) {
        // 0x1000CE44: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_1000CE68;
    }
    goto skip_1;
    // 0x1000CE44: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x1000CE48: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x1000CE4C: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x1000CE50: addiu       $t5, $t5, 0x18AC
    ctx->r13 = ADD32(ctx->r13, 0X18AC);
    // 0x1000CE54: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x1000CE58: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1000CE5C: ori         $t7, $t6, 0x3
    ctx->r15 = ctx->r14 | 0X3;
    // 0x1000CE60: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x1000CE64: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
L_1000CE68:
    // 0x1000CE68: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1000CE6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1000CE70: lbu         $t9, 0x18AC($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X18AC);
    // 0x1000CE74: nor         $t0, $t9, $zero
    ctx->r8 = ~(ctx->r25 | 0);
    // 0x1000CE78: and         $a0, $v1, $t0
    ctx->r4 = ctx->r3 & ctx->r8;
    // 0x1000CE7C: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x1000CE80: b           L_1000CE98
    // 0x1000CE84: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
        goto L_1000CE98;
    // 0x1000CE84: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
L_1000CE88:
    // 0x1000CE88: b           L_1000CE9C
    // 0x1000CE8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000CE9C;
    // 0x1000CE8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000CE90:
    // 0x1000CE90: b           L_1000CE9C
    // 0x1000CE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000CE9C;
    // 0x1000CE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000CE98:
    // 0x1000CE98: sltiu       $v0, $a0, 0x1
    ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
L_1000CE9C:
    // 0x1000CE9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000CEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000CEA4: jr          $ra
    // 0x1000CEA8: nop

    return;
    return;
    // 0x1000CEA8: nop

;}
RECOMP_FUNC void func_151A8CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8CEC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151A8CF0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x151A8CF4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151A8CF8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151A8CFC: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x151A8D00: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151A8D04: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x151A8D08: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x151A8D0C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x151A8D10: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151A8D14: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151A8D18: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151A8D1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A8D20: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151A8D24: lb          $t6, 0x4D($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X4D);
    // 0x151A8D28: beql        $fp, $t6, L_151A8D64
    if (ctx->r30 == ctx->r14) {
        // 0x151A8D2C: addiu       $s0, $s3, 0x28
        ctx->r16 = ADD32(ctx->r19, 0X28);
            goto L_151A8D64;
    }
    goto skip_0;
    // 0x151A8D2C: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    skip_0:
    // 0x151A8D30: lb          $t7, 0x4D($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X4D);
    // 0x151A8D34: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151A8D38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151A8D3C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151A8D40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151A8D44: lw          $t9, -0x680($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X680);
    // 0x151A8D48: jalr        $t9
    // 0x151A8D4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151A8D4C: nop

    after_0:
    // 0x151A8D50: bnel        $v0, $zero, L_151A8D64
    if (ctx->r2 != 0) {
        // 0x151A8D54: addiu       $s0, $s3, 0x28
        ctx->r16 = ADD32(ctx->r19, 0X28);
            goto L_151A8D64;
    }
    goto skip_1;
    // 0x151A8D54: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    skip_1:
    // 0x151A8D58: b           L_151A8EE8
    // 0x151A8D5C: sh          $fp, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r30;
        goto L_151A8EE8;
    // 0x151A8D5C: sh          $fp, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r30;
    // 0x151A8D60: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
L_151A8D64:
    // 0x151A8D64: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x151A8D68: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x151A8D6C: beql        $t1, $zero, L_151A8D94
    if (ctx->r9 == 0) {
        // 0x151A8D70: lbu         $t2, 0x0($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X0);
            goto L_151A8D94;
    }
    goto skip_2;
    // 0x151A8D70: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    skip_2:
    // 0x151A8D74: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x151A8D78: beql        $a0, $zero, L_151A8D94
    if (ctx->r4 == 0) {
        // 0x151A8D7C: lbu         $t2, 0x0($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X0);
            goto L_151A8D94;
    }
    goto skip_3;
    // 0x151A8D7C: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    skip_3:
    // 0x151A8D80: jal         0x151464B8
    // 0x151A8D84: nop

    func_151464B8(rdram, ctx);
        goto after_1;
    // 0x151A8D84: nop

    after_1:
    // 0x151A8D88: bnel        $v0, $zero, L_151A8EEC
    if (ctx->r2 != 0) {
        // 0x151A8D8C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151A8EEC;
    }
    goto skip_4;
    // 0x151A8D8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x151A8D90: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
L_151A8D94:
    // 0x151A8D94: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x151A8D98: beql        $t3, $zero, L_151A8EEC
    if (ctx->r11 == 0) {
        // 0x151A8D9C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151A8EEC;
    }
    goto skip_5;
    // 0x151A8D9C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_5:
    // 0x151A8DA0: jal         0x150ADA68
    // 0x151A8DA4: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151A8DA4: nop

    after_2:
    // 0x151A8DA8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151A8DAC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A8DB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A8DB4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A8DB8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151A8DBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A8DC0: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A8DC4: lwc1        $f6, 0x54($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X54);
    // 0x151A8DC8: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x151A8DCC: addiu       $s6, $s6, -0x690
    ctx->r22 = ADD32(ctx->r22, -0X690);
    // 0x151A8DD0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151A8DD4: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151A8DD8: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x151A8DDC: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x151A8DE0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151A8DE4: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    // 0x151A8DE8: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x151A8DEC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151A8DF0: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x151A8DF4: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151A8DF8: lbu         $s2, 0x5B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X5B);
    // 0x151A8DFC: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x151A8E00: nop

    // 0x151A8E04: bc1fl       L_151A8EEC
    if (!c1cs) {
        // 0x151A8E08: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151A8EEC;
    }
    goto skip_6;
    // 0x151A8E08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_6:
    // 0x151A8E0C: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x151A8E10: lui         $s7, 0x151B
    ctx->r23 = S32(0X151B << 16);
    // 0x151A8E14: addiu       $s7, $s7, -0x7094
    ctx->r23 = ADD32(ctx->r23, -0X7094);
    // 0x151A8E18: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x151A8E1C: beq         $t5, $zero, L_151A8E3C
    if (ctx->r13 == 0) {
        // 0x151A8E20: nop
    
            goto L_151A8E3C;
    }
    // 0x151A8E20: nop

    // 0x151A8E24: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x151A8E28: beq         $t6, $zero, L_151A8E3C
    if (ctx->r14 == 0) {
        // 0x151A8E2C: nop
    
            goto L_151A8E3C;
    }
    // 0x151A8E2C: nop

    // 0x151A8E30: lui         $s7, 0x151B
    ctx->r23 = S32(0X151B << 16);
    // 0x151A8E34: b           L_151A8E3C
    // 0x151A8E38: addiu       $s7, $s7, -0x70E4
    ctx->r23 = ADD32(ctx->r23, -0X70E4);
        goto L_151A8E3C;
    // 0x151A8E38: addiu       $s7, $s7, -0x70E4
    ctx->r23 = ADD32(ctx->r23, -0X70E4);
L_151A8E3C:
    // 0x151A8E3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_151A8E40:
    // 0x151A8E40: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151A8E44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x151A8E48: jalr        $s7
    // 0x151A8E4C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_3;
    // 0x151A8E4C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_3:
    // 0x151A8E50: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x151A8E54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151A8E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A8E5C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x151A8E60: beq         $t8, $zero, L_151A8E78
    if (ctx->r24 == 0) {
        // 0x151A8E64: lw          $a2, 0x60($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X60);
            goto L_151A8E78;
    }
    // 0x151A8E64: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x151A8E68: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151A8E6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x151A8E70: b           L_151A8E9C
    // 0x151A8E74: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
        goto L_151A8E9C;
    // 0x151A8E74: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
L_151A8E78:
    // 0x151A8E78: jal         0x15046C80
    // 0x151A8E7C: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    func_15046C80(rdram, ctx);
        goto after_4;
    // 0x151A8E7C: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    after_4:
    // 0x151A8E80: beq         $v0, $zero, L_151A8E94
    if (ctx->r2 == 0) {
        // 0x151A8E84: lwc1        $f8, 0x60($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
            goto L_151A8E94;
    }
    // 0x151A8E84: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151A8E88: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151A8E8C: b           L_151A8E9C
    // 0x151A8E90: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
        goto L_151A8E9C;
    // 0x151A8E90: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
L_151A8E94:
    // 0x151A8E94: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x151A8E98: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_151A8E9C:
    // 0x151A8E9C: lb          $v0, 0x26($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X26);
    // 0x151A8EA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151A8EA4: beq         $fp, $v0, L_151A8EC4
    if (ctx->r30 == ctx->r2) {
        // 0x151A8EA8: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_151A8EC4;
    }
    // 0x151A8EA8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x151A8EAC: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x151A8EB0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x151A8EB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151A8EB8: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x151A8EBC: jalr        $t9
    // 0x151A8EC0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x151A8EC0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    after_5:
L_151A8EC4:
    // 0x151A8EC4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151A8EC8: sub.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x151A8ECC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x151A8ED0: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151A8ED4: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x151A8ED8: nop

    // 0x151A8EDC: bc1tl       L_151A8E40
    if (c1cs) {
        // 0x151A8EE0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_151A8E40;
    }
    goto skip_7;
    // 0x151A8EE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_7:
    // 0x151A8EE4: sb          $s2, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r18;
L_151A8EE8:
    // 0x151A8EE8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151A8EEC:
    // 0x151A8EEC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x151A8EF0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A8EF4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151A8EF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151A8EFC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151A8F00: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151A8F04: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x151A8F08: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x151A8F0C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x151A8F10: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x151A8F14: jr          $ra
    // 0x151A8F18: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151A8F18: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_151718F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151718F0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x151718F4: sdc1        $f28, 0xA8($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0XA8, ctx->r29);
    // 0x151718F8: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x151718FC: sw          $ra, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r31;
    // 0x15171900: sw          $fp, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r30;
    // 0x15171904: sw          $s7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r23;
    // 0x15171908: sw          $s6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r22;
    // 0x1517190C: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x15171910: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x15171914: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x15171918: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x1517191C: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x15171920: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x15171924: sdc1        $f30, 0xB0($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0XB0, ctx->r29);
    // 0x15171928: sdc1        $f26, 0xA0($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0XA0, ctx->r29);
    // 0x1517192C: sdc1        $f24, 0x98($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X98, ctx->r29);
    // 0x15171930: sdc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X90, ctx->r29);
    // 0x15171934: sdc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X88, ctx->r29);
    // 0x15171938: swc1        $f12, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f12.u32l;
    // 0x1517193C: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x15171940: lw          $a1, 0x15C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X15C);
    // 0x15171944: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15171948: addiu       $t7, $t7, -0x33E0
    ctx->r15 = ADD32(ctx->r15, -0X33E0);
    // 0x1517194C: lwr         $at, 0x2($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X2);
    // 0x15171950: addiu       $t6, $sp, 0xF4
    ctx->r14 = ADD32(ctx->r29, 0XF4);
    // 0x15171954: beq         $a1, $zero, L_15171BAC
    if (ctx->r5 == 0) {
        // 0x15171958: swr         $at, 0x2($t6)
        do_swr(rdram, 0X2, ctx->r14, ctx->r1);
            goto L_15171BAC;
    }
    // 0x15171958: swr         $at, 0x2($t6)
    do_swr(rdram, 0X2, ctx->r14, ctx->r1);
    // 0x1517195C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15171960: blez        $a1, L_15171BAC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15171964: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_15171BAC;
    }
    // 0x15171964: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15171968: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x1517196C: div         $zero, $t2, $a1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r5)));
    // 0x15171970: trunc.w.s   $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    ctx->f6.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x15171974: bne         $a1, $zero, L_15171980
    if (ctx->r5 != 0) {
        // 0x15171978: nop
    
            goto L_15171980;
    }
    // 0x15171978: nop

    // 0x1517197C: break       7
    do_break(353835388);
L_15171980:
    // 0x15171980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15171984: bne         $a1, $at, L_15171998
    if (ctx->r5 != ctx->r1) {
        // 0x15171988: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15171998;
    }
    // 0x15171988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517198C: bne         $t2, $at, L_15171998
    if (ctx->r10 != ctx->r1) {
        // 0x15171990: nop
    
            goto L_15171998;
    }
    // 0x15171990: nop

    // 0x15171994: break       6
    do_break(353835412);
L_15171998:
    // 0x15171998: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x1517199C: mfc1        $s7, $f6
    ctx->r23 = (int32_t)ctx->f6.u32l;
    // 0x151719A0: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151719A4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x151719A8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151719AC: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x151719B0: sll         $t5, $s7, 16
    ctx->r13 = S32(ctx->r23 << 16);
    // 0x151719B4: mflo        $s6
    ctx->r22 = lo;
    // 0x151719B8: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151719BC: addiu       $t7, $sp, 0xF4
    ctx->r15 = ADD32(ctx->r29, 0XF4);
    // 0x151719C0: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x151719C4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151719C8: addu        $s3, $t6, $t7
    ctx->r19 = ADD32(ctx->r14, ctx->r15);
    // 0x151719CC: or          $s7, $t9, $zero
    ctx->r23 = ctx->r25 | 0;
    // 0x151719D0: lbu         $fp, 0x163($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X163);
    // 0x151719D4: cvt.s.w     $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    ctx->f30.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151719D8: sra         $s0, $s1, 8
    ctx->r16 = S32(SIGNED(ctx->r17) >> 8);
L_151719DC:
    // 0x151719DC: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x151719E0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x151719E4: jal         0x15048A40
    // 0x151719E8: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_0;
    // 0x151719E8: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    after_0:
    // 0x151719EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x151719F0: jal         0x150489B0
    // 0x151719F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_1;
    // 0x151719F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x151719F8: mul.s       $f8, $f28, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x151719FC: lwc1        $f10, 0x148($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X148);
    // 0x15171A00: mul.s       $f16, $f26, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x15171A04: add.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15171A08: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15171A0C: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x15171A10: nop

    // 0x15171A14: sra         $s0, $v0, 8
    ctx->r16 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15171A18: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x15171A1C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x15171A20: jal         0x150ADA20
    // 0x15171A24: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15171A24: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    after_2:
    // 0x15171A28: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x15171A2C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15171A30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15171A34: bgez        $t4, L_15171A48
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15171A38: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15171A48;
    }
    // 0x15171A38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15171A3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15171A40: nop

    // 0x15171A44: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15171A48:
    // 0x15171A48: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x15171A4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15171A50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15171A54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15171A58: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15171A5C: jal         0x150ADA20
    // 0x15171A60: add.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl + ctx->f18.fl;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15171A60: add.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x15171A64: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x15171A68: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15171A6C: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x15171A70: bgez        $t5, L_15171A88
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15171A74: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15171A88;
    }
    // 0x15171A74: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15171A78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15171A7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15171A80: nop

    // 0x15171A84: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_15171A88:
    // 0x15171A88: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15171A8C: add.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x15171A90: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15171A94: mfc1        $s5, $f4
    ctx->r21 = (int32_t)ctx->f4.u32l;
    // 0x15171A98: jal         0x150ADA20
    // 0x15171A9C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15171A9C: nop

    after_4:
    // 0x15171AA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15171AA4: lbu         $t5, 0x0($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X0);
    // 0x15171AA8: mul.s       $f6, $f28, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x15171AAC: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x15171AB0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15171AB4: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x15171AB8: mul.s       $f4, $f26, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x15171ABC: sll         $a1, $s7, 16
    ctx->r5 = S32(ctx->r23 << 16);
    // 0x15171AC0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15171AC4: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x15171AC8: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15171ACC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15171AD0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x15171AD4: sll         $t0, $s5, 16
    ctx->r8 = S32(ctx->r21 << 16);
    // 0x15171AD8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15171ADC: sra         $t5, $t0, 16
    ctx->r13 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15171AE0: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x15171AE4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15171AE8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x15171AEC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15171AF0: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x15171AF4: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x15171AF8: sra         $t1, $v1, 8
    ctx->r9 = S32(SIGNED(ctx->r3) >> 8);
    // 0x15171AFC: trunc.w.s   $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    ctx->f8.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x15171B00: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15171B04: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x15171B08: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15171B0C: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x15171B10: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x15171B14: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15171B18: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15171B1C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15171B20: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15171B24: addiu       $t8, $t9, 0xA
    ctx->r24 = ADD32(ctx->r25, 0XA);
    // 0x15171B28: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x15171B2C: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x15171B30: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x15171B34: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x15171B38: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x15171B3C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x15171B40: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x15171B44: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x15171B48: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x15171B4C: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x15171B50: sw          $fp, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r30;
    // 0x15171B54: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x15171B58: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x15171B5C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x15171B60: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x15171B64: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x15171B68: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x15171B6C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x15171B70: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x15171B74: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x15171B78: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15171B7C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15171B80: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15171B84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15171B88: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x15171B8C: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    // 0x15171B90: jal         0x1516D4E8
    // 0x15171B94: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    func_1516D4E8(rdram, ctx);
        goto after_5;
    // 0x15171B94: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    after_5:
    // 0x15171B98: lw          $t2, 0x15C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X15C);
    // 0x15171B9C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15171BA0: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x15171BA4: bnel        $s2, $t2, L_151719DC
    if (ctx->r18 != ctx->r10) {
        // 0x15171BA8: sra         $s0, $s1, 8
        ctx->r16 = S32(SIGNED(ctx->r17) >> 8);
            goto L_151719DC;
    }
    goto skip_0;
    // 0x15171BA8: sra         $s0, $s1, 8
    ctx->r16 = S32(SIGNED(ctx->r17) >> 8);
    skip_0:
L_15171BAC:
    // 0x15171BAC: lw          $ra, 0xDC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XDC);
    // 0x15171BB0: ldc1        $f20, 0x88($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X88);
    // 0x15171BB4: ldc1        $f22, 0x90($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X90);
    // 0x15171BB8: ldc1        $f24, 0x98($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X98);
    // 0x15171BBC: ldc1        $f26, 0xA0($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0XA0);
    // 0x15171BC0: ldc1        $f28, 0xA8($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0XA8);
    // 0x15171BC4: ldc1        $f30, 0xB0($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0XB0);
    // 0x15171BC8: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x15171BCC: lw          $s1, 0xBC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XBC);
    // 0x15171BD0: lw          $s2, 0xC0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC0);
    // 0x15171BD4: lw          $s3, 0xC4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC4);
    // 0x15171BD8: lw          $s4, 0xC8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC8);
    // 0x15171BDC: lw          $s5, 0xCC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XCC);
    // 0x15171BE0: lw          $s6, 0xD0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XD0);
    // 0x15171BE4: lw          $s7, 0xD4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XD4);
    // 0x15171BE8: lw          $fp, 0xD8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD8);
    // 0x15171BEC: jr          $ra
    // 0x15171BF0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    return;
    // 0x15171BF0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_150142AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150142AC: lbu         $t6, 0x16($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X16);
    // 0x150142B0: lbu         $v1, 0x1B($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1B);
    // 0x150142B4: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150142B8: bltz        $v1, L_150142CC
    if (SIGNED(ctx->r3) < 0) {
        // 0x150142BC: sb          $t7, 0x16($a0)
        MEM_B(0X16, ctx->r4) = ctx->r15;
            goto L_150142CC;
    }
    // 0x150142BC: sb          $t7, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r15;
    // 0x150142C0: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x150142C4: bne         $at, $zero, L_150142D4
    if (ctx->r1 != 0) {
        // 0x150142C8: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_150142D4;
    }
    // 0x150142C8: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
L_150142CC:
    // 0x150142CC: jr          $ra
    // 0x150142D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150142D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150142D4:
    // 0x150142D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150142D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x150142DC: sw          $a0, -0x6560($at)
    MEM_W(-0X6560, ctx->r1) = ctx->r4;
    // 0x150142E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150142E4: jr          $ra
    // 0x150142E8: nop

    return;
    return;
    // 0x150142E8: nop

;}
RECOMP_FUNC void func_1511F980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F980: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1511F984: sw          $zero, -0x4040($at)
    MEM_W(-0X4040, ctx->r1) = 0;
    // 0x1511F988: jr          $ra
    // 0x1511F98C: nop

    return;
    return;
    // 0x1511F98C: nop

;}
RECOMP_FUNC void func_150E679C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E679C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150E67A0: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x150E67A4: beql        $at, $zero, L_150E67C8
    if (ctx->r1 == 0) {
        // 0x150E67A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150E67C8;
    }
    goto skip_0;
    // 0x150E67A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150E67AC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x150E67B0: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x150E67B4: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150E67B8: beql        $at, $zero, L_150E67C8
    if (ctx->r1 == 0) {
        // 0x150E67BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150E67C8;
    }
    goto skip_1;
    // 0x150E67BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x150E67C0: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x150E67C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150E67C8:
    // 0x150E67C8: jr          $ra
    // 0x150E67CC: nop

    return;
    return;
    // 0x150E67CC: nop

;}
RECOMP_FUNC void func_151E43DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E43DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151E43E0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x151E43E4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x151E43E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151E43EC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151E43F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151E43F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151E43F8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E43FC: lbu         $v1, -0x280($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X280);
    // 0x151E4400: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E4404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E4408: bne         $s3, $v1, L_151E44EC
    if (ctx->r19 != ctx->r3) {
        // 0x151E440C: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_151E44EC;
    }
    // 0x151E440C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E4410: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E4414: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x151E4418: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151E441C: lb          $v0, 0x42($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X42);
    // 0x151E4420: addiu       $t9, $t9, -0x4844
    ctx->r25 = ADD32(ctx->r25, -0X4844);
    // 0x151E4424: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E4428: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151E442C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x151E4430: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x151E4434: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x151E4438: lb          $v1, -0x496D($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X496D);
    // 0x151E443C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E4440: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151E4444: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151E4448: bne         $v0, $zero, L_151E44C4
    if (ctx->r2 != 0) {
        // 0x151E444C: lb          $a1, 0x2($t0)
        ctx->r5 = MEM_B(ctx->r8, 0X2);
            goto L_151E44C4;
    }
    // 0x151E444C: lb          $a1, 0x2($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X2);
    // 0x151E4450: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4454: lb          $v0, -0x278($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X278);
    // 0x151E4458: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151E445C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151E4460: blez        $v0, L_151E44B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151E4464: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_151E44B4;
    }
    // 0x151E4464: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E4468: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x151E446C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E4470: addiu       $a0, $a0, 0xAC0
    ctx->r4 = ADD32(ctx->r4, 0XAC0);
    // 0x151E4474: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
    // 0x151E4478: addiu       $s2, $s2, -0x1BC
    ctx->r18 = ADD32(ctx->r18, -0X1BC);
L_151E447C:
    // 0x151E447C: lb          $t2, 0x0($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X0);
    // 0x151E4480: addu        $t3, $s1, $s0
    ctx->r11 = ADD32(ctx->r17, ctx->r16);
    // 0x151E4484: bltzl       $t2, L_151E44A8
    if (SIGNED(ctx->r10) < 0) {
        // 0x151E4488: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E44A8;
    }
    goto skip_0;
    // 0x151E4488: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x151E448C: lb          $t4, 0x0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X0);
    // 0x151E4490: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x151E4494: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x151E4498: bnel        $s3, $t6, L_151E44A8
    if (ctx->r19 != ctx->r14) {
        // 0x151E449C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E44A8;
    }
    goto skip_1;
    // 0x151E449C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x151E44A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E44A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_151E44A8:
    // 0x151E44A8: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151E44AC: bne         $at, $zero, L_151E447C
    if (ctx->r1 != 0) {
        // 0x151E44B0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151E447C;
    }
    // 0x151E44B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_151E44B4:
    // 0x151E44B4: beql        $v1, $zero, L_151E44D8
    if (ctx->r3 == 0) {
        // 0x151E44B8: lh          $a0, 0x0($t0)
        ctx->r4 = MEM_H(ctx->r8, 0X0);
            goto L_151E44D8;
    }
    goto skip_2;
    // 0x151E44B8: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
    skip_2:
    // 0x151E44BC: b           L_151E44D4
    // 0x151E44C0: lb          $a1, 0x3($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X3);
        goto L_151E44D4;
    // 0x151E44C0: lb          $a1, 0x3($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X3);
L_151E44C4:
    // 0x151E44C4: lb          $t7, 0xAC0($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XAC0);
    // 0x151E44C8: beql        $s3, $t7, L_151E44D8
    if (ctx->r19 == ctx->r15) {
        // 0x151E44CC: lh          $a0, 0x0($t0)
        ctx->r4 = MEM_H(ctx->r8, 0X0);
            goto L_151E44D8;
    }
    goto skip_3;
    // 0x151E44CC: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
    skip_3:
    // 0x151E44D0: lb          $a1, 0x3($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X3);
L_151E44D4:
    // 0x151E44D4: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
L_151E44D8:
    // 0x151E44D8: jal         0x1501D348
    // 0x151E44DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501D348(rdram, ctx);
        goto after_0;
    // 0x151E44DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x151E44E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E44E4: b           L_151E4BBC
    // 0x151E44E8: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
        goto L_151E4BBC;
    // 0x151E44E8: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
L_151E44EC:
    // 0x151E44EC: lw          $t8, -0x22C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X22C);
    // 0x151E44F0: addiu       $s1, $zero, 0xB
    ctx->r17 = ADD32(0, 0XB);
    // 0x151E44F4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151E44F8: lb          $v0, 0x42($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X42);
    // 0x151E44FC: beql        $s1, $v0, L_151E4520
    if (ctx->r17 == ctx->r2) {
        // 0x151E4500: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_151E4520;
    }
    goto skip_4;
    // 0x151E4500: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_4:
    // 0x151E4504: beql        $v0, $at, L_151E4520
    if (ctx->r2 == ctx->r1) {
        // 0x151E4508: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_151E4520;
    }
    goto skip_5;
    // 0x151E4508: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_5:
    // 0x151E450C: jal         0x151E530C
    // 0x151E4510: nop

    func_151E530C(rdram, ctx);
        goto after_1;
    // 0x151E4510: nop

    after_1:
    // 0x151E4514: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E4518: lbu         $v1, -0x280($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X280);
    // 0x151E451C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_151E4520:
    // 0x151E4520: beq         $a0, $v1, L_151E4538
    if (ctx->r4 == ctx->r3) {
        // 0x151E4524: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151E4538;
    }
    // 0x151E4524: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151E4528: beq         $v1, $at, L_151E4538
    if (ctx->r3 == ctx->r1) {
        // 0x151E452C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_151E4538;
    }
    // 0x151E452C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151E4530: bne         $v1, $at, L_151E4B7C
    if (ctx->r3 != ctx->r1) {
        // 0x151E4534: lui         $t4, 0x800E
        ctx->r12 = S32(0X800E << 16);
            goto L_151E4B7C;
    }
    // 0x151E4534: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
L_151E4538:
    // 0x151E4538: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E453C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151E4540: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x151E4544: addiu       $s0, $s0, -0x234
    ctx->r16 = ADD32(ctx->r16, -0X234);
    // 0x151E4548: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x151E454C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151E4550: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151E4554: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x151E4558: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    // 0x151E455C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x151E4560: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E4564: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E4568: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151E456C: bne         $at, $zero, L_151E4580
    if (ctx->r1 != 0) {
        // 0x151E4570: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151E4580;
    }
    // 0x151E4570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E4574: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151E4578: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    // 0x151E457C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_151E4580:
    // 0x151E4580: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x151E4584: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4588: sb          $t7, 0xBDC($at)
    MEM_B(0XBDC, ctx->r1) = ctx->r15;
    // 0x151E458C: jal         0x1504332C
    // 0x151E4590: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_2;
    // 0x151E4590: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_2:
    // 0x151E4594: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E4598: addiu       $t8, $zero, 0x4B
    ctx->r24 = ADD32(0, 0X4B);
    // 0x151E459C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151E45A0: addiu       $a3, $a3, -0x4734
    ctx->r7 = ADD32(ctx->r7, -0X4734);
    // 0x151E45A4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E45A8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x151E45AC: jal         0x15042D94
    // 0x151E45B0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x151E45B0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_3:
    // 0x151E45B4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151E45B8: jal         0x15042E3C
    // 0x151E45BC: addiu       $a0, $a0, -0x4730
    ctx->r4 = ADD32(ctx->r4, -0X4730);
    func_15042E3C(rdram, ctx);
        goto after_4;
    // 0x151E45BC: addiu       $a0, $a0, -0x4730
    ctx->r4 = ADD32(ctx->r4, -0X4730);
    after_4:
    // 0x151E45C0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E45C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E45C8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E45CC: jal         0x1504332C
    // 0x151E45D0: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    func_1504332C(rdram, ctx);
        goto after_5;
    // 0x151E45D0: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    after_5:
    // 0x151E45D4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E45D8: jal         0x150432FC
    // 0x151E45DC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_150432FC(rdram, ctx);
        goto after_6;
    // 0x151E45DC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_6:
    // 0x151E45E0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E45E4: lbu         $t2, -0x280($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X280);
    // 0x151E45E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151E45EC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151E45F0: bne         $t2, $at, L_151E4604
    if (ctx->r10 != ctx->r1) {
        // 0x151E45F4: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_151E4604;
    }
    // 0x151E45F4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E45F8: lw          $t3, -0x4010($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4010);
    // 0x151E45FC: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x151E4600: sw          $t9, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r25;
L_151E4604:
    // 0x151E4604: lw          $t4, -0x22C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X22C);
    // 0x151E4608: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151E460C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151E4610: lb          $v0, 0x42($t4)
    ctx->r2 = MEM_B(ctx->r12, 0X42);
    // 0x151E4614: addiu       $a1, $a1, 0xAC4
    ctx->r5 = ADD32(ctx->r5, 0XAC4);
    // 0x151E4618: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x151E461C: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x151E4620: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x151E4624: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x151E4628: lb          $t6, -0x496F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X496F);
    // 0x151E462C: bgez        $t6, L_151E4750
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151E4630: nop
    
            goto L_151E4750;
    }
    // 0x151E4630: nop

    // 0x151E4634: beq         $s1, $v0, L_151E4640
    if (ctx->r17 == ctx->r2) {
        // 0x151E4638: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_151E4640;
    }
    // 0x151E4638: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151E463C: bne         $v0, $at, L_151E4744
    if (ctx->r2 != ctx->r1) {
        // 0x151E4640: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_151E4744;
    }
L_151E4640:
    // 0x151E4640: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4644: lb          $v0, -0x278($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X278);
    // 0x151E4648: addiu       $s1, $zero, 0x48
    ctx->r17 = ADD32(0, 0X48);
    // 0x151E464C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151E4650: blez        $v0, L_151E4744
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151E4654: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_151E4744;
    }
    // 0x151E4654: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E4658: addiu       $s2, $s2, -0x1BC
    ctx->r18 = ADD32(ctx->r18, -0X1BC);
L_151E465C:
    // 0x151E465C: lb          $t7, 0x0($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X0);
    // 0x151E4660: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E4664: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x151E4668: bltz        $t7, L_151E4734
    if (SIGNED(ctx->r15) < 0) {
        // 0x151E466C: addiu       $a0, $zero, 0x58
        ctx->r4 = ADD32(0, 0X58);
            goto L_151E4734;
    }
    // 0x151E466C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x151E4670: lb          $v1, 0xAC0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XAC0);
    // 0x151E4674: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E4678: lw          $t8, 0xBD8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XBD8);
    // 0x151E467C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x151E4680: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151E4684: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x151E4688: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E468C: lw          $t3, 0x174($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X174);
    // 0x151E4690: addiu       $t8, $t8, 0xC10
    ctx->r24 = ADD32(ctx->r24, 0XC10);
    // 0x151E4694: addiu       $t5, $t5, 0xC18
    ctx->r13 = ADD32(ctx->r13, 0XC18);
    // 0x151E4698: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x151E469C: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x151E46A0: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x151E46A4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x151E46A8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E46AC: addiu       $a3, $a3, -0x472C
    ctx->r7 = ADD32(ctx->r7, -0X472C);
    // 0x151E46B0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151E46B4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x151E46B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E46BC: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x151E46C0: jal         0x15042D94
    // 0x151E46C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15042D94(rdram, ctx);
        goto after_7;
    // 0x151E46C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_7:
    // 0x151E46C8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x151E46CC: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    // 0x151E46D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E46D4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x151E46D8: jal         0x150916B4
    // 0x151E46DC: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    func_150916B4(rdram, ctx);
        goto after_8;
    // 0x151E46DC: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    after_8:
    // 0x151E46E0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x151E46E4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    // 0x151E46E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E46EC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x151E46F0: jal         0x150916B4
    // 0x151E46F4: lh          $a2, 0x0($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X0);
    func_150916B4(rdram, ctx);
        goto after_9;
    // 0x151E46F4: lh          $a2, 0x0($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X0);
    after_9:
    // 0x151E46F8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E46FC: addiu       $a3, $a3, -0x4720
    ctx->r7 = ADD32(ctx->r7, -0X4720);
    // 0x151E4700: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x151E4704: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E4708: jal         0x15042D94
    // 0x151E470C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_15042D94(rdram, ctx);
        goto after_10;
    // 0x151E470C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_10:
    // 0x151E4710: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E4714: addiu       $a3, $a3, -0x471C
    ctx->r7 = ADD32(ctx->r7, -0X471C);
    // 0x151E4718: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    // 0x151E471C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E4720: jal         0x15042D94
    // 0x151E4724: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_15042D94(rdram, ctx);
        goto after_11;
    // 0x151E4724: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_11:
    // 0x151E4728: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E472C: lb          $v0, -0x278($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X278);
    // 0x151E4730: addiu       $s1, $s1, 0x12
    ctx->r17 = ADD32(ctx->r17, 0X12);
L_151E4734:
    // 0x151E4734: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E4738: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151E473C: bne         $at, $zero, L_151E465C
    if (ctx->r1 != 0) {
        // 0x151E4740: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151E465C;
    }
    // 0x151E4740: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_151E4744:
    // 0x151E4744: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x151E4748: b           L_151E4920
    // 0x151E474C: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
        goto L_151E4920;
    // 0x151E474C: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
L_151E4750:
    // 0x151E4750: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4754: lb          $v0, -0x278($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X278);
    // 0x151E4758: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E475C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E4760: blez        $v0, L_151E478C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151E4764: addiu       $s2, $t4, -0x1BC
        ctx->r18 = ADD32(ctx->r12, -0X1BC);
            goto L_151E478C;
    }
    // 0x151E4764: addiu       $s2, $t4, -0x1BC
    ctx->r18 = ADD32(ctx->r12, -0X1BC);
    // 0x151E4768: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x151E476C: lb          $t5, 0x0($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X0);
L_151E4770:
    // 0x151E4770: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151E4774: sltu        $at, $s2, $a0
    ctx->r1 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x151E4778: bltz        $t5, L_151E4784
    if (SIGNED(ctx->r13) < 0) {
        // 0x151E477C: nop
    
            goto L_151E4784;
    }
    // 0x151E477C: nop

    // 0x151E4780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_151E4784:
    // 0x151E4784: bnel        $at, $zero, L_151E4770
    if (ctx->r1 != 0) {
        // 0x151E4788: lb          $t5, 0x0($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X0);
            goto L_151E4770;
    }
    goto skip_6;
    // 0x151E4788: lb          $t5, 0x0($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X0);
    skip_6:
L_151E478C:
    // 0x151E478C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E4790: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E4794: addiu       $v0, $v0, 0xAC0
    ctx->r2 = ADD32(ctx->r2, 0XAC0);
    // 0x151E4798: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
L_151E479C:
    // 0x151E479C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E47A0: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x151E47A4: bne         $s3, $t6, L_151E47B8
    if (ctx->r19 != ctx->r14) {
        // 0x151E47A8: nop
    
            goto L_151E47B8;
    }
    // 0x151E47A8: nop

    // 0x151E47AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151E47B0: sll         $t7, $a0, 24
    ctx->r15 = S32(ctx->r4 << 24);
    // 0x151E47B4: sra         $a0, $t7, 24
    ctx->r4 = S32(SIGNED(ctx->r15) >> 24);
L_151E47B8:
    // 0x151E47B8: bnel        $at, $zero, L_151E479C
    if (ctx->r1 != 0) {
        // 0x151E47BC: lb          $t6, 0x0($v0)
        ctx->r14 = MEM_B(ctx->r2, 0X0);
            goto L_151E479C;
    }
    goto skip_7;
    // 0x151E47BC: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    skip_7:
    // 0x151E47C0: slti        $t2, $a0, 0x2
    ctx->r10 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x151E47C4: xori        $t2, $t2, 0x1
    ctx->r10 = ctx->r10 ^ 0X1;
    // 0x151E47C8: sll         $t9, $t2, 24
    ctx->r25 = S32(ctx->r10 << 24);
    // 0x151E47CC: sra         $t3, $t9, 24
    ctx->r11 = S32(SIGNED(ctx->r25) >> 24);
    // 0x151E47D0: beq         $t3, $zero, L_151E4800
    if (ctx->r11 == 0) {
        // 0x151E47D4: addiu       $a0, $zero, 0x94
        ctx->r4 = ADD32(0, 0X94);
            goto L_151E4800;
    }
    // 0x151E47D4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E47D8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E47DC: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x151E47E0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151E47E4: addiu       $a3, $a3, -0x4718
    ctx->r7 = ADD32(ctx->r7, -0X4718);
    // 0x151E47E8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151E47EC: jal         0x15042D94
    // 0x151E47F0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_12;
    // 0x151E47F0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_12:
    // 0x151E47F4: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x151E47F8: b           L_151E4920
    // 0x151E47FC: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
        goto L_151E4920;
    // 0x151E47FC: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
L_151E4800:
    // 0x151E4800: bne         $v1, $s3, L_151E4870
    if (ctx->r3 != ctx->r19) {
        // 0x151E4804: addiu       $a0, $zero, 0x76
        ctx->r4 = ADD32(0, 0X76);
            goto L_151E4870;
    }
    // 0x151E4804: addiu       $a0, $zero, 0x76
    ctx->r4 = ADD32(0, 0X76);
    // 0x151E4808: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E480C: addiu       $t5, $zero, 0x52
    ctx->r13 = ADD32(0, 0X52);
    // 0x151E4810: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151E4814: addiu       $a3, $a3, -0x4714
    ctx->r7 = ADD32(ctx->r7, -0X4714);
    // 0x151E4818: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151E481C: jal         0x15042D94
    // 0x151E4820: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_13;
    // 0x151E4820: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_13:
    // 0x151E4824: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x151E4828: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
    // 0x151E482C: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
    // 0x151E4830: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E4834: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x151E4838: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151E483C: lb          $t7, 0xAC0($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XAC0);
    // 0x151E4840: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151E4844: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x151E4848: bne         $s3, $t7, L_151E4858
    if (ctx->r19 != ctx->r15) {
        // 0x151E484C: lui         $a3, 0x800B
        ctx->r7 = S32(0X800B << 16);
            goto L_151E4858;
    }
    // 0x151E484C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E4850: b           L_151E485C
    // 0x151E4854: addiu       $v1, $zero, 0x56
    ctx->r3 = ADD32(0, 0X56);
        goto L_151E485C;
    // 0x151E4854: addiu       $v1, $zero, 0x56
    ctx->r3 = ADD32(0, 0X56);
L_151E4858:
    // 0x151E4858: addiu       $v1, $zero, 0x57
    ctx->r3 = ADD32(0, 0X57);
L_151E485C:
    // 0x151E485C: addiu       $a3, $a3, -0x4710
    ctx->r7 = ADD32(ctx->r7, -0X4710);
    // 0x151E4860: jal         0x15042D94
    // 0x151E4864: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_15042D94(rdram, ctx);
        goto after_14;
    // 0x151E4864: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_14:
    // 0x151E4868: b           L_151E4920
    // 0x151E486C: nop

        goto L_151E4920;
    // 0x151E486C: nop

L_151E4870:
    // 0x151E4870: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x151E4874: addiu       $s2, $s2, 0xBC8
    ctx->r18 = ADD32(ctx->r18, 0XBC8);
    // 0x151E4878: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151E487C:
    // 0x151E487C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E4880: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x151E4884: lb          $t8, 0xAC0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0XAC0);
    // 0x151E4888: addu        $s1, $s2, $s0
    ctx->r17 = ADD32(ctx->r18, ctx->r16);
    // 0x151E488C: addiu       $t2, $zero, 0x71
    ctx->r10 = ADD32(0, 0X71);
    // 0x151E4890: bne         $s3, $t8, L_151E4908
    if (ctx->r19 != ctx->r24) {
        // 0x151E4894: addiu       $a1, $zero, 0x32
        ctx->r5 = ADD32(0, 0X32);
            goto L_151E4908;
    }
    // 0x151E4894: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151E4898: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x151E489C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151E48A0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x151E48A4: bne         $v1, $at, L_151E48B4
    if (ctx->r3 != ctx->r1) {
        // 0x151E48A8: lui         $a3, 0x800B
        ctx->r7 = S32(0X800B << 16);
            goto L_151E48B4;
    }
    // 0x151E48A8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E48AC: b           L_151E48B8
    // 0x151E48B0: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
        goto L_151E48B8;
    // 0x151E48B0: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
L_151E48B4:
    // 0x151E48B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151E48B8:
    // 0x151E48B8: addiu       $t9, $v1, 0x4C
    ctx->r25 = ADD32(ctx->r3, 0X4C);
    // 0x151E48BC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151E48C0: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x151E48C4: jal         0x15042D94
    // 0x151E48C8: addiu       $a3, $a3, -0x470C
    ctx->r7 = ADD32(ctx->r7, -0X470C);
    func_15042D94(rdram, ctx);
        goto after_15;
    // 0x151E48C8: addiu       $a3, $a3, -0x470C
    ctx->r7 = ADD32(ctx->r7, -0X470C);
    after_15:
    // 0x151E48CC: lb          $t3, 0x0($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X0);
    // 0x151E48D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151E48D4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151E48D8: bne         $t3, $at, L_151E48E8
    if (ctx->r11 != ctx->r1) {
        // 0x151E48DC: addiu       $a2, $zero, 0x81
        ctx->r6 = ADD32(0, 0X81);
            goto L_151E48E8;
    }
    // 0x151E48DC: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x151E48E0: b           L_151E48EC
    // 0x151E48E4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_151E48EC;
    // 0x151E48E4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_151E48E8:
    // 0x151E48E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151E48EC:
    // 0x151E48EC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E48F0: addiu       $t4, $zero, 0x56
    ctx->r12 = ADD32(0, 0X56);
    // 0x151E48F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151E48F8: addiu       $a3, $a3, -0x4708
    ctx->r7 = ADD32(ctx->r7, -0X4708);
    // 0x151E48FC: jal         0x15042D94
    // 0x151E4900: addiu       $a0, $v0, 0xB7
    ctx->r4 = ADD32(ctx->r2, 0XB7);
    func_15042D94(rdram, ctx);
        goto after_16;
    // 0x151E4900: addiu       $a0, $v0, 0xB7
    ctx->r4 = ADD32(ctx->r2, 0XB7);
    after_16:
    // 0x151E4904: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_151E4908:
    // 0x151E4908: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E490C: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x151E4910: bne         $at, $zero, L_151E487C
    if (ctx->r1 != 0) {
        // 0x151E4914: nop
    
            goto L_151E487C;
    }
    // 0x151E4914: nop

    // 0x151E4918: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x151E491C: addiu       $s1, $s1, 0xC00
    ctx->r17 = ADD32(ctx->r17, 0XC00);
L_151E4920:
    // 0x151E4920: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4924: lb          $v0, -0xC4($v0)
    ctx->r2 = MEM_B(ctx->r2, -0XC4);
    // 0x151E4928: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151E492C: lb          $s0, -0x16E6($s0)
    ctx->r16 = MEM_B(ctx->r16, -0X16E6);
    // 0x151E4930: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x151E4934: bne         $at, $zero, L_151E4940
    if (ctx->r1 != 0) {
        // 0x151E4938: slti        $at, $s0, -0x1E
        ctx->r1 = SIGNED(ctx->r16) < -0X1E ? 1 : 0;
            goto L_151E4940;
    }
    // 0x151E4938: slti        $at, $s0, -0x1E
    ctx->r1 = SIGNED(ctx->r16) < -0X1E ? 1 : 0;
    // 0x151E493C: bne         $at, $zero, L_151E4950
    if (ctx->r1 != 0) {
        // 0x151E4940: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_151E4950;
    }
L_151E4940:
    // 0x151E4940: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x151E4944: beq         $at, $zero, L_151E497C
    if (ctx->r1 == 0) {
        // 0x151E4948: slti        $at, $s0, 0x1F
        ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
            goto L_151E497C;
    }
    // 0x151E4948: slti        $at, $s0, 0x1F
    ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
    // 0x151E494C: bne         $at, $zero, L_151E497C
    if (ctx->r1 != 0) {
        // 0x151E4950: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_151E497C;
    }
L_151E4950:
    // 0x151E4950: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E4954: addiu       $s2, $s2, -0x1D4
    ctx->r18 = ADD32(ctx->r18, -0X1D4);
    // 0x151E4958: lb          $t5, 0x0($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X0);
    // 0x151E495C: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    // 0x151E4960: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E4964: subu        $t6, $s3, $t5
    ctx->r14 = SUB32(ctx->r19, ctx->r13);
    // 0x151E4968: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    // 0x151E496C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E4970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E4974: jal         0x10010F30
    // 0x151E4978: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_17;
    // 0x151E4978: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
L_151E497C:
    // 0x151E497C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E4980: addiu       $s2, $s2, -0x1D4
    ctx->r18 = ADD32(ctx->r18, -0X1D4);
    // 0x151E4984: lb          $t8, 0x0($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X0);
    // 0x151E4988: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E498C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4990: sltiu       $t2, $t8, 0x1
    ctx->r10 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x151E4994: addiu       $t9, $t2, 0x21
    ctx->r25 = ADD32(ctx->r10, 0X21);
    // 0x151E4998: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151E499C: sb          $s0, -0xC4($at)
    MEM_B(-0XC4, ctx->r1) = ctx->r16;
    // 0x151E49A0: addiu       $a3, $a3, -0x4704
    ctx->r7 = ADD32(ctx->r7, -0X4704);
    // 0x151E49A4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    // 0x151E49A8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x151E49AC: jal         0x15042D94
    // 0x151E49B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_18;
    // 0x151E49B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x151E49B4: lb          $t3, 0x0($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X0);
    // 0x151E49B8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E49BC: addiu       $a3, $a3, -0x4700
    ctx->r7 = ADD32(ctx->r7, -0X4700);
    // 0x151E49C0: xor         $t4, $s3, $t3
    ctx->r12 = ctx->r19 ^ ctx->r11;
    // 0x151E49C4: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x151E49C8: addiu       $t5, $t4, 0xE
    ctx->r13 = ADD32(ctx->r12, 0XE);
    // 0x151E49CC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151E49D0: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x151E49D4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x151E49D8: jal         0x15042D94
    // 0x151E49DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_19;
    // 0x151E49DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x151E49E0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E49E4: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x151E49E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151E49EC: addiu       $a3, $a3, -0x46FC
    ctx->r7 = ADD32(ctx->r7, -0X46FC);
    // 0x151E49F0: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E49F4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x151E49F8: jal         0x15042D94
    // 0x151E49FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_20;
    // 0x151E49FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x151E4A00: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E4A04: lh          $t7, 0xB9A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0XB9A);
    // 0x151E4A08: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E4A0C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151E4A10: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x151E4A14: bne         $t8, $zero, L_151E4A2C
    if (ctx->r24 != 0) {
        // 0x151E4A18: nop
    
            goto L_151E4A2C;
    }
    // 0x151E4A18: nop

    // 0x151E4A1C: lw          $t2, 0xA90($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XA90);
    // 0x151E4A20: slti        $at, $t2, 0x961
    ctx->r1 = SIGNED(ctx->r10) < 0X961 ? 1 : 0;
    // 0x151E4A24: bne         $at, $zero, L_151E4B70
    if (ctx->r1 != 0) {
        // 0x151E4A28: nop
    
            goto L_151E4B70;
    }
    // 0x151E4A28: nop

L_151E4A2C:
    // 0x151E4A2C: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x151E4A30: bne         $s3, $t9, L_151E4A50
    if (ctx->r19 != ctx->r25) {
        // 0x151E4A34: nop
    
            goto L_151E4A50;
    }
    // 0x151E4A34: nop

    // 0x151E4A38: jal         0x151F2CDC
    // 0x151E4A3C: nop

    func_151F2CDC(rdram, ctx);
        goto after_21;
    // 0x151E4A3C: nop

    after_21:
    // 0x151E4A40: bne         $v0, $s3, L_151E4A50
    if (ctx->r2 != ctx->r19) {
        // 0x151E4A44: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151E4A50;
    }
    // 0x151E4A44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E4A48: jal         0x151F2D6C
    // 0x151E4A4C: addiu       $a1, $zero, 0x2DE0
    ctx->r5 = ADD32(0, 0X2DE0);
    func_151F2D6C(rdram, ctx);
        goto after_22;
    // 0x151E4A4C: addiu       $a1, $zero, 0x2DE0
    ctx->r5 = ADD32(0, 0X2DE0);
    after_22:
L_151E4A50:
    // 0x151E4A50: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151E4A54: lw          $t3, 0xA90($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XA90);
    // 0x151E4A58: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E4A5C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151E4A60: slti        $at, $t3, 0x961
    ctx->r1 = SIGNED(ctx->r11) < 0X961 ? 1 : 0;
    // 0x151E4A64: bne         $at, $zero, L_151E4A70
    if (ctx->r1 != 0) {
        // 0x151E4A68: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_151E4A70;
    }
    // 0x151E4A68: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E4A6C: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
L_151E4A70:
    // 0x151E4A70: lb          $t5, 0x0($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X0);
    // 0x151E4A74: addiu       $v0, $v0, 0xB94
    ctx->r2 = ADD32(ctx->r2, 0XB94);
    // 0x151E4A78: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x151E4A7C: bne         $t5, $zero, L_151E4B0C
    if (ctx->r13 != 0) {
        // 0x151E4A80: sb          $t4, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r12;
            goto L_151E4B0C;
    }
    // 0x151E4A80: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x151E4A84: addiu       $t1, $t1, -0x290
    ctx->r9 = ADD32(ctx->r9, -0X290);
    // 0x151E4A88: lb          $a1, 0x0($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X0);
    // 0x151E4A8C: lui         $t5, 0x151E
    ctx->r13 = S32(0X151E << 16);
    // 0x151E4A90: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x151E4A94: beq         $a1, $zero, L_151E4B00
    if (ctx->r5 == 0) {
        // 0x151E4A98: addiu       $t5, $t5, 0x2834
        ctx->r13 = ADD32(ctx->r13, 0X2834);
            goto L_151E4B00;
    }
    // 0x151E4A98: addiu       $t5, $t5, 0x2834
    ctx->r13 = ADD32(ctx->r13, 0X2834);
    // 0x151E4A9C: subu        $t0, $t6, $a1
    ctx->r8 = SUB32(ctx->r14, ctx->r5);
    // 0x151E4AA0: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E4AA4: beq         $at, $zero, L_151E4AFC
    if (ctx->r1 == 0) {
        // 0x151E4AA8: addu        $v1, $a1, $a1
        ctx->r3 = ADD32(ctx->r5, ctx->r5);
            goto L_151E4AFC;
    }
    // 0x151E4AA8: addu        $v1, $a1, $a1
    ctx->r3 = ADD32(ctx->r5, ctx->r5);
    // 0x151E4AAC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E4AB0: addiu       $t7, $t7, -0x1BC
    ctx->r15 = ADD32(ctx->r15, -0X1BC);
    // 0x151E4AB4: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x151E4AB8: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
    // 0x151E4ABC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E4AC0: addiu       $t8, $t8, 0xC00
    ctx->r24 = ADD32(ctx->r24, 0XC00);
    // 0x151E4AC4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E4AC8: addiu       $a1, $a1, -0x1BC
    ctx->r5 = ADD32(ctx->r5, -0X1BC);
    // 0x151E4ACC: addu        $a2, $t0, $t8
    ctx->r6 = ADD32(ctx->r8, ctx->r24);
L_151E4AD0:
    // 0x151E4AD0: addu        $t2, $a1, $v1
    ctx->r10 = ADD32(ctx->r5, ctx->r3);
    // 0x151E4AD4: addu        $t3, $s1, $v1
    ctx->r11 = ADD32(ctx->r17, ctx->r3);
    // 0x151E4AD8: lb          $t9, 0x0($t2)
    ctx->r25 = MEM_B(ctx->r10, 0X0);
    // 0x151E4ADC: lb          $t4, 0x0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X0);
    // 0x151E4AE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E4AE4: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x151E4AE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151E4AEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151E4AF0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x151E4AF4: bne         $at, $zero, L_151E4AD0
    if (ctx->r1 != 0) {
        // 0x151E4AF8: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_151E4AD0;
    }
    // 0x151E4AF8: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_151E4AFC:
    // 0x151E4AFC: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_151E4B00:
    // 0x151E4B00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4B04: b           L_151E4B48
    // 0x151E4B08: sw          $t5, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r13;
        goto L_151E4B48;
    // 0x151E4B08: sw          $t5, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r13;
L_151E4B0C:
    // 0x151E4B0C: lw          $t7, -0x22C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22C);
    // 0x151E4B10: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x151E4B14: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E4B18: sb          $t6, 0x3F($t7)
    MEM_B(0X3F, ctx->r15) = ctx->r14;
    // 0x151E4B1C: lbu         $t8, -0x280($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X280);
    // 0x151E4B20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151E4B24: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151E4B28: bne         $t8, $at, L_151E4B38
    if (ctx->r24 != ctx->r1) {
        // 0x151E4B2C: nop
    
            goto L_151E4B38;
    }
    // 0x151E4B2C: nop

    // 0x151E4B30: b           L_151E4B48
    // 0x151E4B34: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
        goto L_151E4B48;
    // 0x151E4B34: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_151E4B38:
    // 0x151E4B38: lui         $t9, 0x151E
    ctx->r25 = S32(0X151E << 16);
    // 0x151E4B3C: addiu       $t9, $t9, 0x4E00
    ctx->r25 = ADD32(ctx->r25, 0X4E00);
    // 0x151E4B40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4B44: sw          $t9, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r25;
L_151E4B48:
    // 0x151E4B48: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151E4B4C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4B50: sb          $t3, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r11;
    // 0x151E4B54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4B58: jal         0x151E557C
    // 0x151E4B5C: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
    func_151E557C(rdram, ctx);
        goto after_23;
    // 0x151E4B5C: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
    after_23:
    // 0x151E4B60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4B64: sb          $s3, -0x274($at)
    MEM_B(-0X274, ctx->r1) = ctx->r19;
    // 0x151E4B68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4B6C: sb          $s3, -0x270($at)
    MEM_B(-0X270, ctx->r1) = ctx->r19;
L_151E4B70:
    // 0x151E4B70: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4B74: b           L_151E4BB0
    // 0x151E4B78: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
        goto L_151E4BB0;
    // 0x151E4B78: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
L_151E4B7C:
    // 0x151E4B7C: lh          $t4, 0xB9A($t4)
    ctx->r12 = MEM_H(ctx->r12, 0XB9A);
    // 0x151E4B80: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E4B84: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151E4B88: bne         $t4, $zero, L_151E4B98
    if (ctx->r12 != 0) {
        // 0x151E4B8C: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_151E4B98;
    }
    // 0x151E4B8C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151E4B90: lbu         $t5, 0x3C8C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3C8C);
    // 0x151E4B94: bne         $a0, $t5, L_151E4BB0
    if (ctx->r4 != ctx->r13) {
        // 0x151E4B98: lui         $s0, 0x8009
        ctx->r16 = S32(0X8009 << 16);
            goto L_151E4BB0;
    }
L_151E4B98:
    // 0x151E4B98: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E4B9C: addiu       $s0, $s0, -0x234
    ctx->r16 = ADD32(ctx->r16, -0X234);
    // 0x151E4BA0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x151E4BA4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151E4BA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4BAC: sb          $t6, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r14;
L_151E4BB0:
    // 0x151E4BB0: lhu         $t7, 0x20($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X20);
    // 0x151E4BB4: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x151E4BB8: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
L_151E4BBC:
    // 0x151E4BBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151E4BC0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151E4BC4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151E4BC8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x151E4BCC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x151E4BD0: jr          $ra
    // 0x151E4BD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x151E4BD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_1000853C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000853C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008548: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x1000854C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x10008550: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008554: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x10008558: jal         0x10017A80
    // 0x1000855C: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    n_alCSPGetState(rdram, ctx);
        goto after_0;
    // 0x1000855C: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    after_0:
    // 0x10008560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008568: jr          $ra
    // 0x1000856C: nop

    return;
    return;
    // 0x1000856C: nop

;}
RECOMP_FUNC void func_1513C900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513C904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513C908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1513C90C: jal         0x1513C92C
    // 0x1513C910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513C92C(rdram, ctx);
        goto after_0;
    // 0x1513C910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1513C914: jal         0x15169824
    // 0x1513C918: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x1513C918: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1513C91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513C920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513C924: jr          $ra
    // 0x1513C928: nop

    return;
    return;
    // 0x1513C928: nop

;}
RECOMP_FUNC void func_150AAD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AAD98: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150AAD9C: swc1        $f20, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f20.u32l;
    // 0x150AADA0: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150AADA4: swc1        $f22, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f22.u32l;
    // 0x150AADA8: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150AADAC: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x150AADB0: swc1        $f25, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150AADB4: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x150AADB8: swc1        $f27, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150AADBC: swc1        $f28, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f28.u32l;
    // 0x150AADC0: swc1        $f29, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150AADC4: swc1        $f30, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f30.u32l;
    // 0x150AADC8: swc1        $f31, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150AADCC: mtc1        $a0, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r4;
    // 0x150AADD0: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x150AADD4: mtc1        $a2, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r6;
    // 0x150AADD8: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x150AADDC: lwc1        $f27, 0x68($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X68);
    // 0x150AADE0: lwc1        $f28, 0x6C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150AADE4: lwc1        $f29, 0x70($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X70);
    // 0x150AADE8: lwc1        $f30, 0x74($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150AADEC: lwc1        $f31, 0x78($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X78);
    // 0x150AADF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AADF4: lwc1        $f0, -0x3DD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3DD4);
    // 0x150AADF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AADFC: lwc1        $f1, -0x3DD0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X3DD0);
    // 0x150AAE00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AAE04: lwc1        $f2, -0x3DCC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3DCC);
    // 0x150AAE08: or          $t7, $ra, $zero
    ctx->r15 = ctx->r31 | 0;
    // 0x150AAE0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150AAE10: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAE14: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAE18: jal         0x150AA470
    // 0x150AAE1C: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    static_5_150AA470(rdram, ctx);
        goto after_0;
    // 0x150AAE1C: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_0:
    // 0x150AAE20: bne         $v0, $zero, L_150AAE38
    if (ctx->r2 != 0) {
        // 0x150AAE24: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_150AAE38;
    }
    // 0x150AAE24: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x150AAE28: jal         0x150AA9A0
    // 0x150AAE2C: nop

    func_150AA9A0(rdram, ctx);
        goto after_1;
    // 0x150AAE2C: nop

    after_1:
    // 0x150AAE30: j           L_150AB1A0
    // 0x150AAE34: nop

        goto L_150AB1A0;
    // 0x150AAE34: nop

L_150AAE38:
    // 0x150AAE38: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAE3C: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAE40: jal         0x150AA470
    // 0x150AAE44: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    static_5_150AA470(rdram, ctx);
        goto after_2;
    // 0x150AAE44: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_2:
    // 0x150AAE48: bne         $v0, $zero, L_150AAE60
    if (ctx->r2 != 0) {
        // 0x150AAE4C: or          $t5, $v0, $zero
        ctx->r13 = ctx->r2 | 0;
            goto L_150AAE60;
    }
    // 0x150AAE4C: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x150AAE50: jal         0x150AA9A0
    // 0x150AAE54: nop

    func_150AA9A0(rdram, ctx);
        goto after_3;
    // 0x150AAE54: nop

    after_3:
    // 0x150AAE58: j           L_150AB1A0
    // 0x150AAE5C: nop

        goto L_150AB1A0;
    // 0x150AAE5C: nop

L_150AAE60:
    // 0x150AAE60: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAE64: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAE68: jal         0x150AA470
    // 0x150AAE6C: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    static_5_150AA470(rdram, ctx);
        goto after_4;
    // 0x150AAE6C: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_4:
    // 0x150AAE70: bne         $v0, $zero, L_150AAE88
    if (ctx->r2 != 0) {
        // 0x150AAE74: or          $t6, $v0, $zero
        ctx->r14 = ctx->r2 | 0;
            goto L_150AAE88;
    }
    // 0x150AAE74: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x150AAE78: jal         0x150AA9A0
    // 0x150AAE7C: nop

    func_150AA9A0(rdram, ctx);
        goto after_5;
    // 0x150AAE7C: nop

    after_5:
    // 0x150AAE80: j           L_150AB1A0
    // 0x150AAE84: nop

        goto L_150AB1A0;
    // 0x150AAE84: nop

L_150AAE88:
    // 0x150AAE88: and         $t0, $t4, $t5
    ctx->r8 = ctx->r12 & ctx->r13;
    // 0x150AAE8C: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x150AAE90: bne         $t0, $zero, L_150AB160
    if (ctx->r8 != 0) {
        // 0x150AAE94: mov.s       $f3, $f23
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
            goto L_150AB160;
    }
    // 0x150AAE94: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAE98: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAE9C: jal         0x150AA4D0
    // 0x150AAEA0: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    func_150AA4D0(rdram, ctx);
        goto after_6;
    // 0x150AAEA0: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_6:
    // 0x150AAEA4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAEA8: or          $t4, $t4, $v0
    ctx->r12 = ctx->r12 | ctx->r2;
    // 0x150AAEAC: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAEB0: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAEB4: jal         0x150AA4D0
    // 0x150AAEB8: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    func_150AA4D0(rdram, ctx);
        goto after_7;
    // 0x150AAEB8: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_7:
    // 0x150AAEBC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAEC0: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
    // 0x150AAEC4: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAEC8: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAECC: jal         0x150AA4D0
    // 0x150AAED0: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    func_150AA4D0(rdram, ctx);
        goto after_8;
    // 0x150AAED0: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_8:
    // 0x150AAED4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAED8: or          $t6, $t6, $v0
    ctx->r14 = ctx->r14 | ctx->r2;
    // 0x150AAEDC: and         $t0, $t4, $t5
    ctx->r8 = ctx->r12 & ctx->r13;
    // 0x150AAEE0: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x150AAEE4: bne         $t0, $zero, L_150AB160
    if (ctx->r8 != 0) {
        // 0x150AAEE8: mov.s       $f3, $f23
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
            goto L_150AB160;
    }
    // 0x150AAEE8: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAEEC: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAEF0: jal         0x150AA5A8
    // 0x150AAEF4: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    func_150AA5A8(rdram, ctx);
        goto after_9;
    // 0x150AAEF4: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_9:
    // 0x150AAEF8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAEFC: or          $t4, $t4, $v0
    ctx->r12 = ctx->r12 | ctx->r2;
    // 0x150AAF00: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAF04: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAF08: jal         0x150AA5A8
    // 0x150AAF0C: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    func_150AA5A8(rdram, ctx);
        goto after_10;
    // 0x150AAF0C: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_10:
    // 0x150AAF10: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAF14: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
    // 0x150AAF18: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAF1C: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAF20: jal         0x150AA5A8
    // 0x150AAF24: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    func_150AA5A8(rdram, ctx);
        goto after_11;
    // 0x150AAF24: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_11:
    // 0x150AAF28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAF2C: or          $t6, $t6, $v0
    ctx->r14 = ctx->r14 | ctx->r2;
    // 0x150AAF30: and         $t1, $t4, $t5
    ctx->r9 = ctx->r12 & ctx->r13;
    // 0x150AAF34: and         $t0, $t1, $t6
    ctx->r8 = ctx->r9 & ctx->r14;
    // 0x150AAF38: bne         $t0, $zero, L_150AB160
    if (ctx->r8 != 0) {
        // 0x150AAF3C: nop
    
            goto L_150AB160;
    }
    // 0x150AAF3C: nop

    // 0x150AAF40: bne         $t1, $zero, L_150AAF80
    if (ctx->r9 != 0) {
        // 0x150AAF44: and         $t1, $t4, $t6
        ctx->r9 = ctx->r12 & ctx->r14;
            goto L_150AAF80;
    }
    // 0x150AAF44: and         $t1, $t4, $t6
    ctx->r9 = ctx->r12 & ctx->r14;
    // 0x150AAF48: or          $v1, $t4, $t5
    ctx->r3 = ctx->r12 | ctx->r13;
    // 0x150AAF4C: mov.s       $f6, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    ctx->f6.fl = ctx->f23.fl;
    // 0x150AAF50: mov.s       $f7, $f24
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 24);
    ctx->f7.fl = ctx->f24.fl;
    // 0x150AAF54: mov.s       $f8, $f25
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 25);
    ctx->f8.fl = ctx->f25.fl;
    // 0x150AAF58: mov.s       $f9, $f26
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 26);
    ctx->f9.fl = ctx->f26.fl;
    // 0x150AAF5C: mov.s       $f10, $f27
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 27);
    ctx->f10.fl = ctx->f27.fl;
    // 0x150AAF60: jal         0x150AA678
    // 0x150AAF64: mov.s       $f11, $f28
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    ctx->f11.fl = ctx->f28.fl;
    func_150AA678(rdram, ctx);
        goto after_12;
    // 0x150AAF64: mov.s       $f11, $f28
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    ctx->f11.fl = ctx->f28.fl;
    after_12:
    // 0x150AAF68: bne         $v0, $zero, L_150AAF80
    if (ctx->r2 != 0) {
        // 0x150AAF6C: nop
    
            goto L_150AAF80;
    }
    // 0x150AAF6C: nop

    // 0x150AAF70: jal         0x150AA9A0
    // 0x150AAF74: nop

    func_150AA9A0(rdram, ctx);
        goto after_13;
    // 0x150AAF74: nop

    after_13:
    // 0x150AAF78: j           L_150AB1A0
    // 0x150AAF7C: nop

        goto L_150AB1A0;
    // 0x150AAF7C: nop

L_150AAF80:
    // 0x150AAF80: bne         $t1, $zero, L_150AAFC0
    if (ctx->r9 != 0) {
        // 0x150AAF84: and         $t1, $t5, $t6
        ctx->r9 = ctx->r13 & ctx->r14;
            goto L_150AAFC0;
    }
    // 0x150AAF84: and         $t1, $t5, $t6
    ctx->r9 = ctx->r13 & ctx->r14;
    // 0x150AAF88: or          $v1, $t4, $t6
    ctx->r3 = ctx->r12 | ctx->r14;
    // 0x150AAF8C: mov.s       $f6, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    ctx->f6.fl = ctx->f23.fl;
    // 0x150AAF90: mov.s       $f7, $f24
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 24);
    ctx->f7.fl = ctx->f24.fl;
    // 0x150AAF94: mov.s       $f8, $f25
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 25);
    ctx->f8.fl = ctx->f25.fl;
    // 0x150AAF98: mov.s       $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    ctx->f9.fl = ctx->f29.fl;
    // 0x150AAF9C: mov.s       $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    ctx->f10.fl = ctx->f30.fl;
    // 0x150AAFA0: jal         0x150AA678
    // 0x150AAFA4: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    func_150AA678(rdram, ctx);
        goto after_14;
    // 0x150AAFA4: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    after_14:
    // 0x150AAFA8: bne         $v0, $zero, L_150AAFC0
    if (ctx->r2 != 0) {
        // 0x150AAFAC: nop
    
            goto L_150AAFC0;
    }
    // 0x150AAFAC: nop

    // 0x150AAFB0: jal         0x150AA9A0
    // 0x150AAFB4: nop

    func_150AA9A0(rdram, ctx);
        goto after_15;
    // 0x150AAFB4: nop

    after_15:
    // 0x150AAFB8: j           L_150AB1A0
    // 0x150AAFBC: nop

        goto L_150AB1A0;
    // 0x150AAFBC: nop

L_150AAFC0:
    // 0x150AAFC0: bne         $t1, $zero, L_150AAFFC
    if (ctx->r9 != 0) {
        // 0x150AAFC4: or          $v1, $t5, $t6
        ctx->r3 = ctx->r13 | ctx->r14;
            goto L_150AAFFC;
    }
    // 0x150AAFC4: or          $v1, $t5, $t6
    ctx->r3 = ctx->r13 | ctx->r14;
    // 0x150AAFC8: mov.s       $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    ctx->f6.fl = ctx->f26.fl;
    // 0x150AAFCC: mov.s       $f7, $f27
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 27);
    ctx->f7.fl = ctx->f27.fl;
    // 0x150AAFD0: mov.s       $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    ctx->f8.fl = ctx->f28.fl;
    // 0x150AAFD4: mov.s       $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    ctx->f9.fl = ctx->f29.fl;
    // 0x150AAFD8: mov.s       $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    ctx->f10.fl = ctx->f30.fl;
    // 0x150AAFDC: jal         0x150AA678
    // 0x150AAFE0: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    func_150AA678(rdram, ctx);
        goto after_16;
    // 0x150AAFE0: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    after_16:
    // 0x150AAFE4: bne         $v0, $zero, L_150AAFFC
    if (ctx->r2 != 0) {
        // 0x150AAFE8: nop
    
            goto L_150AAFFC;
    }
    // 0x150AAFE8: nop

    // 0x150AAFEC: jal         0x150AA9A0
    // 0x150AAFF0: nop

    func_150AA9A0(rdram, ctx);
        goto after_17;
    // 0x150AAFF0: nop

    after_17:
    // 0x150AAFF4: j           L_150AB1A0
    // 0x150AAFF8: nop

        goto L_150AB1A0;
    // 0x150AAFF8: nop

L_150AAFFC:
    // 0x150AAFFC: jal         0x150AA9A0
    // 0x150AB000: nop

    func_150AA9A0(rdram, ctx);
        goto after_18;
    // 0x150AB000: nop

    after_18:
    // 0x150AB004: c.ult.s     $f21, $f18
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f21.fl < ctx->f18.fl;
    // 0x150AB008: bc1f        L_150AB020
    if (!c1cs) {
        // 0x150AB00C: nop
    
            goto L_150AB020;
    }
    // 0x150AB00C: nop

    // 0x150AB010: neg.s       $f19, $f19
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f19.fl); 
    ctx->f19.fl = -ctx->f19.fl;
    // 0x150AB014: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x150AB018: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x150AB01C: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
L_150AB020:
    // 0x150AB020: lui         $a2, 0x38D1
    ctx->r6 = S32(0X38D1 << 16);
    // 0x150AB024: ori         $a2, $a2, 0xB717
    ctx->r6 = ctx->r6 | 0XB717;
    // 0x150AB028: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB02C: lwc1        $f16, -0x3DC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3DC8);
    // 0x150AB030: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AB034: lwc1        $f17, -0x3DC4($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3DC4);
    // 0x150AB038: mfc1        $a0, $f20
    ctx->r4 = (int32_t)ctx->f20.u32l;
    // 0x150AB03C: mul.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x150AB040: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x150AB044: add.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl + ctx->f20.fl;
    // 0x150AB048: mul.s       $f21, $f21, $f17
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f17.fl);
    // 0x150AB04C: add.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f21.fl;
    // 0x150AB050: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AB054: bc1tl       L_150AB05C
    if (c1cs) {
        // 0x150AB058: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AB05C;
    }
    goto skip_0;
    // 0x150AB058: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_0:
L_150AB05C:
    // 0x150AB05C: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AB060: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AB064: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AB068: bc1f        L_150AB08C
    if (!c1cs) {
        // 0x150AB06C: nop
    
            goto L_150AB08C;
    }
    // 0x150AB06C: nop

    // 0x150AB070: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AB074: nop

    // 0x150AB078: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AB07C: jal         0x150AA814
    // 0x150AB080: nop

    static_5_150AA814(rdram, ctx);
        goto after_19;
    // 0x150AB080: nop

    after_19:
    // 0x150AB084: beq         $v0, $zero, L_150AB1A0
    if (ctx->r2 == 0) {
        // 0x150AB088: nop
    
            goto L_150AB1A0;
    }
    // 0x150AB088: nop

L_150AB08C:
    // 0x150AB08C: add.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl + ctx->f20.fl;
    // 0x150AB090: sub.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f21.fl;
    // 0x150AB094: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AB098: bc1tl       L_150AB0A0
    if (c1cs) {
        // 0x150AB09C: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AB0A0;
    }
    goto skip_1;
    // 0x150AB09C: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_1:
L_150AB0A0:
    // 0x150AB0A0: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AB0A4: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AB0A8: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AB0AC: bc1f        L_150AB0D0
    if (!c1cs) {
        // 0x150AB0B0: nop
    
            goto L_150AB0D0;
    }
    // 0x150AB0B0: nop

    // 0x150AB0B4: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AB0B8: nop

    // 0x150AB0BC: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AB0C0: jal         0x150AA814
    // 0x150AB0C4: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    static_5_150AA814(rdram, ctx);
        goto after_20;
    // 0x150AB0C4: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    after_20:
    // 0x150AB0C8: beq         $v0, $zero, L_150AB1A0
    if (ctx->r2 == 0) {
        // 0x150AB0CC: nop
    
            goto L_150AB1A0;
    }
    // 0x150AB0CC: nop

L_150AB0D0:
    // 0x150AB0D0: sub.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl - ctx->f20.fl;
    // 0x150AB0D4: add.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f21.fl;
    // 0x150AB0D8: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AB0DC: bc1tl       L_150AB0E4
    if (c1cs) {
        // 0x150AB0E0: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AB0E4;
    }
    goto skip_2;
    // 0x150AB0E0: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_2:
L_150AB0E4:
    // 0x150AB0E4: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AB0E8: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AB0EC: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AB0F0: bc1f        L_150AB114
    if (!c1cs) {
        // 0x150AB0F4: nop
    
            goto L_150AB114;
    }
    // 0x150AB0F4: nop

    // 0x150AB0F8: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AB0FC: nop

    // 0x150AB100: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AB104: jal         0x150AA814
    // 0x150AB108: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    static_5_150AA814(rdram, ctx);
        goto after_21;
    // 0x150AB108: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    after_21:
    // 0x150AB10C: beq         $v0, $zero, L_150AB1A0
    if (ctx->r2 == 0) {
        // 0x150AB110: nop
    
            goto L_150AB1A0;
    }
    // 0x150AB110: nop

L_150AB114:
    // 0x150AB114: sub.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl - ctx->f20.fl;
    // 0x150AB118: sub.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f21.fl;
    // 0x150AB11C: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AB120: bc1tl       L_150AB128
    if (c1cs) {
        // 0x150AB124: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AB128;
    }
    goto skip_3;
    // 0x150AB124: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_3:
L_150AB128:
    // 0x150AB128: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AB12C: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AB130: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AB134: bc1f        L_150AB158
    if (!c1cs) {
        // 0x150AB138: nop
    
            goto L_150AB158;
    }
    // 0x150AB138: nop

    // 0x150AB13C: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AB140: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x150AB144: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AB148: jal         0x150AA814
    // 0x150AB14C: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    static_5_150AA814(rdram, ctx);
        goto after_22;
    // 0x150AB14C: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    after_22:
    // 0x150AB150: beq         $v0, $zero, L_150AB1A0
    if (ctx->r2 == 0) {
        // 0x150AB154: nop
    
            goto L_150AB1A0;
    }
    // 0x150AB154: nop

L_150AB158:
    // 0x150AB158: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x150AB15C: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
L_150AB160:
    // 0x150AB160: lwc1        $f20, 0x4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150AB164: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x150AB168: lwc1        $f22, 0xC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150AB16C: lwc1        $f23, 0x10($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150AB170: lwc1        $f24, 0x14($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150AB174: lwc1        $f25, 0x18($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150AB178: lwc1        $f26, 0x1C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150AB17C: lwc1        $f27, 0x20($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x150AB180: lwc1        $f28, 0x24($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150AB184: lwc1        $f29, 0x28($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x150AB188: lwc1        $f30, 0x2C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150AB18C: lwc1        $f31, 0x30($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x150AB190: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150AB194: or          $ra, $t7, $zero
    ctx->r31 = ctx->r15 | 0;
    // 0x150AB198: jr          $t7
    // 0x150AB19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r15)(rdram, ctx);
    return;
    // 0x150AB19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AB1A0:
    // 0x150AB1A0: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x150AB1A4: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x150AB1A8: lwc1        $f20, 0x4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150AB1AC: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x150AB1B0: lwc1        $f22, 0xC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150AB1B4: lwc1        $f23, 0x10($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150AB1B8: lwc1        $f24, 0x14($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150AB1BC: lwc1        $f25, 0x18($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x150AB1C0: lwc1        $f26, 0x1C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150AB1C4: lwc1        $f27, 0x20($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x150AB1C8: lwc1        $f28, 0x24($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150AB1CC: lwc1        $f29, 0x28($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x150AB1D0: lwc1        $f30, 0x2C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150AB1D4: lwc1        $f31, 0x30($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x150AB1D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150AB1DC: or          $ra, $t7, $zero
    ctx->r31 = ctx->r15 | 0;
    // 0x150AB1E0: jr          $t7
    // 0x150AB1E4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r15)(rdram, ctx);
    return;
    // 0x150AB1E4: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_15073CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073CF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15073CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073CFC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15073D00: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15073D04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15073D08: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15073D0C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15073D10: nop

    // 0x15073D14: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15073D18: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15073D1C: jal         0x15062B1C
    // 0x15073D20: nop

    func_15062B1C(rdram, ctx);
        goto after_0;
    // 0x15073D20: nop

    after_0:
    // 0x15073D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15073D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15073D2C: jr          $ra
    // 0x15073D30: nop

    return;
    return;
    // 0x15073D30: nop

;}
RECOMP_FUNC void func_151CEC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CEC10: beq         $a2, $zero, L_151CEC34
    if (ctx->r6 == 0) {
        // 0x151CEC14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151CEC34;
    }
    // 0x151CEC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CEC18: lw          $at, 0x40($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X40);
    // 0x151CEC1C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151CEC20: lw          $t7, 0x44($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X44);
    // 0x151CEC24: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x151CEC28: lw          $at, 0x48($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X48);
    // 0x151CEC2C: b           L_151CEC4C
    // 0x151CEC30: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
        goto L_151CEC4C;
    // 0x151CEC30: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
L_151CEC34:
    // 0x151CEC34: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151CEC38: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x151CEC3C: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x151CEC40: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x151CEC44: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x151CEC48: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
L_151CEC4C:
    // 0x151CEC4C: jr          $ra
    // 0x151CEC50: nop

    return;
    return;
    // 0x151CEC50: nop

;}
RECOMP_FUNC void func_1516A538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516A538: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1516A53C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1516A540: lh          $t6, 0x14($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X14);
    // 0x1516A544: slti        $at, $t6, 0x300
    ctx->r1 = SIGNED(ctx->r14) < 0X300 ? 1 : 0;
    // 0x1516A548: bnel        $at, $zero, L_1516A63C
    if (ctx->r1 != 0) {
        // 0x1516A54C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_1516A63C;
    }
    goto skip_0;
    // 0x1516A54C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1516A550: jal         0x150ADA20
    // 0x1516A554: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1516A554: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x1516A558: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1516A55C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1516A560: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1516A564: mfhi        $t7
    ctx->r15 = hi;
    // 0x1516A568: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x1516A56C: lbu         $t8, 0x25($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X25);
    // 0x1516A570: jal         0x150ADA20
    // 0x1516A574: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1516A574: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_1:
    // 0x1516A578: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x1516A57C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1516A580: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1516A584: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x1516A588: mfhi        $t5
    ctx->r13 = hi;
    // 0x1516A58C: lh          $t2, 0x1C($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X1C);
    // 0x1516A590: lh          $t0, 0x1A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X1A);
    // 0x1516A594: lh          $t9, 0x18($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X18);
    // 0x1516A598: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1516A59C: addiu       $t1, $t0, -0xA
    ctx->r9 = ADD32(ctx->r8, -0XA);
    // 0x1516A5A0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1516A5A4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1516A5A8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x1516A5AC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1516A5B0: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x1516A5B4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1516A5B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516A5BC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1516A5C0: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x1516A5C4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1516A5C8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1516A5CC: bgez        $t5, L_1516A5E4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1516A5D0: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1516A5E4;
    }
    // 0x1516A5D0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1516A5D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1516A5D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1516A5DC: nop

    // 0x1516A5E0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_1516A5E4:
    // 0x1516A5E4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1516A5E8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1516A5EC: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x1516A5F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1516A5F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1516A5F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1516A5FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1516A600: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x1516A604: mflo        $t8
    ctx->r24 = lo;
    // 0x1516A608: addiu       $t9, $t8, 0x19
    ctx->r25 = ADD32(ctx->r24, 0X19);
    // 0x1516A60C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1516A610: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1516A614: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x1516A618: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1516A61C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1516A620: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1516A624: lbu         $t1, 0xC($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XC);
    // 0x1516A628: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1516A62C: lbu         $t2, 0x1($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1);
    // 0x1516A630: jal         0x15171D4C
    // 0x1516A634: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    func_15171D4C(rdram, ctx);
        goto after_2;
    // 0x1516A634: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    after_2:
    // 0x1516A638: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_1516A63C:
    // 0x1516A63C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1516A640: jr          $ra
    // 0x1516A644: nop

    return;
    return;
    // 0x1516A644: nop

;}
RECOMP_FUNC void func_15095060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15095060: beq         $a2, $zero, L_15095070
    if (ctx->r6 == 0) {
        // 0x15095064: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_15095070;
    }
    // 0x15095064: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15095068: addiu       $v1, $v1, 0x2C90
    ctx->r3 = ADD32(ctx->r3, 0X2C90);
    // 0x1509506C: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
L_15095070:
    // 0x15095070: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x15095074: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x15095078: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1509507C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x15095080: beq         $at, $zero, L_15095090
    if (ctx->r1 == 0) {
        // 0x15095084: addiu       $v1, $v1, 0x2C90
        ctx->r3 = ADD32(ctx->r3, 0X2C90);
            goto L_15095090;
    }
    // 0x15095084: addiu       $v1, $v1, 0x2C90
    ctx->r3 = ADD32(ctx->r3, 0X2C90);
    // 0x15095088: b           L_150950A4
    // 0x1509508C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_150950A4;
    // 0x1509508C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_15095090:
    // 0x15095090: sra         $t6, $a1, 8
    ctx->r14 = S32(SIGNED(ctx->r5) >> 8);
    // 0x15095094: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15095098: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x1509509C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x150950A0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_150950A4:
    // 0x150950A4: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x150950A8: sh          $t0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r8;
    // 0x150950AC: lhu         $t1, 0x8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8);
    // 0x150950B0: sh          $t1, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r9;
    // 0x150950B4: lbu         $t2, 0xA($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XA);
    // 0x150950B8: sb          $t2, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r10;
    // 0x150950BC: lbu         $t3, 0xB($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XB);
    // 0x150950C0: sb          $t3, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r11;
    // 0x150950C4: lbu         $t4, 0x4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4);
    // 0x150950C8: sb          $t4, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r12;
    // 0x150950CC: jr          $ra
    // 0x150950D0: nop

    return;
    return;
    // 0x150950D0: nop

;}
RECOMP_FUNC void func_1516D2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D2E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516D2E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516D2E8: beql        $a0, $zero, L_1516D31C
    if (ctx->r4 == 0) {
        // 0x1516D2EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1516D31C;
    }
    goto skip_0;
    // 0x1516D2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1516D2F0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x1516D2F4: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x1516D2F8: bnel        $t6, $at, L_1516D31C
    if (ctx->r14 != ctx->r1) {
        // 0x1516D2FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1516D31C;
    }
    goto skip_1;
    // 0x1516D2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1516D300: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x1516D304: sb          $zero, 0x8($t7)
    MEM_B(0X8, ctx->r15) = 0;
    // 0x1516D308: jal         0x1516972C
    // 0x1516D30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1516D30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1516D310: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516D314: sb          $zero, 0x15($a0)
    MEM_B(0X15, ctx->r4) = 0;
    // 0x1516D318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516D31C:
    // 0x1516D31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516D320: jr          $ra
    // 0x1516D324: nop

    return;
    return;
    // 0x1516D324: nop

;}
RECOMP_FUNC void func_15056150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15056150: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15056154: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x15056158: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x1505615C: lw          $v0, 0x2E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2E8);
    // 0x15056160: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15056164: beql        $v0, $zero, L_1505624C
    if (ctx->r2 == 0) {
        // 0x15056168: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_1505624C;
    }
    goto skip_0;
    // 0x15056168: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_0:
    // 0x1505616C: lbu         $t7, 0x13F($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X13F);
    // 0x15056170: lw          $t6, 0x2104($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2104);
    // 0x15056174: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x15056178: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1505617C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x15056180: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x15056184: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15056188: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1505618C: lh          $t0, 0x8($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X8);
    // 0x15056190: lh          $t1, 0xC($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XC);
    // 0x15056194: lh          $t2, 0xA($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XA);
    // 0x15056198: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1505619C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x150561A0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x150561A4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150561A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150561AC: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x150561B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150561B4: mul.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150561B8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150561BC: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150561C0: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150561C4: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150561C8: sub.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x150561CC: sub.s       $f20, $f8, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x150561D0: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x150561D4: sub.s       $f22, $f10, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x150561D8: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150561DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150561E0: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x150561E4: lwc1        $f6, -0x6BC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6BC0);
    // 0x150561E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150561EC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150561F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150561F4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150561F8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150561FC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15056200: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15056204: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x15056208: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1505620C: mul.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x15056210: nop

    // 0x15056214: mul.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x15056218: bc1f        L_15056248
    if (!c1cs) {
        // 0x1505621C: nop
    
            goto L_15056248;
    }
    // 0x1505621C: nop

    // 0x15056220: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15056224: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x15056228: mul.s       $f8, $f20, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x1505622C: nop

    // 0x15056230: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x15056234: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x15056238: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1505623C: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15056240: swc1        $f10, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
    // 0x15056244: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
L_15056248:
    // 0x15056248: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_1505624C:
    // 0x1505624C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x15056250: jr          $ra
    // 0x15056254: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15056254: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_150F568C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F568C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F5690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F5694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F5698: jal         0x15179008
    // 0x150F569C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15179008(rdram, ctx);
        goto after_0;
    // 0x150F569C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x150F56A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F56A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F56A8: jr          $ra
    // 0x150F56AC: nop

    return;
    return;
    // 0x150F56AC: nop

;}
RECOMP_FUNC void func_151AB930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB930: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151AB934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AB938: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151AB93C: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x151AB940: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AB944: lwc1        $f6, -0x6FEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6FEC);
    // 0x151AB948: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
    // 0x151AB94C: lhu         $t7, 0x84($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X84);
    // 0x151AB950: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151AB954: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151AB958: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AB95C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x151AB960: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151AB964: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151AB968: jal         0x151D8E20
    // 0x151AB96C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x151AB96C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151AB970: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x151AB974: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x151AB978: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151AB97C: sb          $v0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r2;
    // 0x151AB980: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151AB984: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151AB988: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151AB98C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x151AB990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151AB994: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x151AB998: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151AB99C: jal         0x151491F4
    // 0x151AB9A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_1;
    // 0x151AB9A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x151AB9A4: beq         $v0, $zero, L_151AB9B8
    if (ctx->r2 == 0) {
        // 0x151AB9A8: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151AB9B8;
    }
    // 0x151AB9A8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151AB9AC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151AB9B0: jal         0x10022EC0
    // 0x151AB9B4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151AB9B4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_2:
L_151AB9B8:
    // 0x151AB9B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151AB9BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151AB9C0: jr          $ra
    // 0x151AB9C4: nop

    return;
    return;
    // 0x151AB9C4: nop

;}
RECOMP_FUNC void func_150AFDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AFDB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150AFDB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150AFDB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150AFDBC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150AFDC0: lb          $t6, -0x2E70($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X2E70);
    // 0x150AFDC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150AFDC8: lw          $a0, -0x316C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X316C);
    // 0x150AFDCC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150AFDD0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150AFDD4: beq         $a0, $zero, L_150AFE40
    if (ctx->r4 == 0) {
        // 0x150AFDD8: sb          $t7, -0x2E70($at)
        MEM_B(-0X2E70, ctx->r1) = ctx->r15;
            goto L_150AFE40;
    }
    // 0x150AFDD8: sb          $t7, -0x2E70($at)
    MEM_B(-0X2E70, ctx->r1) = ctx->r15;
    // 0x150AFDDC: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x150AFDE0: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x150AFDE4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AFDE8: addiu       $t1, $t1, -0x2E68
    ctx->r9 = ADD32(ctx->r9, -0X2E68);
    // 0x150AFDEC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150AFDF0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x150AFDF4: addiu       $s0, $s0, 0x3E78
    ctx->r16 = ADD32(ctx->r16, 0X3E78);
    // 0x150AFDF8: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x150AFDFC: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
L_150AFE00:
    // 0x150AFE00: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x150AFE04: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x150AFE08: lbu         $t4, 0x3F($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X3F);
    // 0x150AFE0C: bnel        $t3, $t4, L_150AFE38
    if (ctx->r11 != ctx->r12) {
        // 0x150AFE10: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_150AFE38;
    }
    goto skip_0;
    // 0x150AFE10: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x150AFE14: jal         0x1516972C
    // 0x150AFE18: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150AFE18: nop

    after_0:
    // 0x150AFE1C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x150AFE20: lb          $t5, -0x2E70($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X2E70);
    // 0x150AFE24: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150AFE28: addiu       $t7, $t7, -0x2E68
    ctx->r15 = ADD32(ctx->r15, -0X2E68);
    // 0x150AFE2C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150AFE30: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150AFE34: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_150AFE38:
    // 0x150AFE38: bnel        $a0, $zero, L_150AFE00
    if (ctx->r4 != 0) {
        // 0x150AFE3C: lw          $t2, 0x8($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X8);
            goto L_150AFE00;
    }
    goto skip_1;
    // 0x150AFE3C: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    skip_1:
L_150AFE40:
    // 0x150AFE40: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150AFE44: lb          $t8, -0x2E70($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2E70);
    // 0x150AFE48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150AFE4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150AFE50: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x150AFE54: sb          $t9, -0x2E70($at)
    MEM_B(-0X2E70, ctx->r1) = ctx->r25;
    // 0x150AFE58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150AFE5C: jr          $ra
    // 0x150AFE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150AFE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151A7A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A7A90: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151A7A94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A7A98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A7A9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A7AA0: lbu         $t6, 0x1C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C);
    // 0x151A7AA4: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151A7AA8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x151A7AAC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151A7AB0: beq         $t7, $zero, L_151A7AD8
    if (ctx->r15 == 0) {
        // 0x151A7AB4: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_151A7AD8;
    }
    // 0x151A7AB4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151A7AB8: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x151A7ABC: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151A7AC0: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x151A7AC4: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
    // 0x151A7AC8: lh          $t3, 0x10($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X10);
    // 0x151A7ACC: bgezl       $t3, L_151A7ADC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x151A7AD0: lb          $v0, 0x2C($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2C);
            goto L_151A7ADC;
    }
    goto skip_0;
    // 0x151A7AD0: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    skip_0:
    // 0x151A7AD4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_151A7AD8:
    // 0x151A7AD8: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
L_151A7ADC:
    // 0x151A7ADC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A7AE0: beql        $v0, $at, L_151A7B20
    if (ctx->r2 == ctx->r1) {
        // 0x151A7AE4: lb          $v0, 0x2D($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2D);
            goto L_151A7B20;
    }
    goto skip_1;
    // 0x151A7AE4: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    skip_1:
    // 0x151A7AE8: bne         $t1, $zero, L_151A7B1C
    if (ctx->r9 != 0) {
        // 0x151A7AEC: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_151A7B1C;
    }
    // 0x151A7AEC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x151A7AF0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151A7AF4: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x151A7AF8: lw          $t9, -0x6C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6C0);
    // 0x151A7AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A7B00: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x151A7B04: jalr        $t9
    // 0x151A7B08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151A7B08: nop

    after_0:
    // 0x151A7B0C: sltiu       $t1, $v0, 0x1
    ctx->r9 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x151A7B10: andi        $t5, $t1, 0xFF
    ctx->r13 = ctx->r9 & 0XFF;
    // 0x151A7B14: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    // 0x151A7B18: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_151A7B1C:
    // 0x151A7B1C: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
L_151A7B20:
    // 0x151A7B20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A7B24: beq         $v0, $at, L_151A7B60
    if (ctx->r2 == ctx->r1) {
        // 0x151A7B28: nop
    
            goto L_151A7B60;
    }
    // 0x151A7B28: nop

    // 0x151A7B2C: bne         $t1, $zero, L_151A7B60
    if (ctx->r9 != 0) {
        // 0x151A7B30: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151A7B60;
    }
    // 0x151A7B30: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151A7B34: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151A7B38: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x151A7B3C: lw          $t9, -0x6B8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6B8);
    // 0x151A7B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A7B44: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x151A7B48: jalr        $t9
    // 0x151A7B4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151A7B4C: nop

    after_1:
    // 0x151A7B50: sltiu       $t1, $v0, 0x1
    ctx->r9 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x151A7B54: andi        $t7, $t1, 0xFF
    ctx->r15 = ctx->r9 & 0XFF;
    // 0x151A7B58: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x151A7B5C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_151A7B60:
    // 0x151A7B60: bne         $t1, $zero, L_151A7D48
    if (ctx->r9 != 0) {
        // 0x151A7B64: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_151A7D48;
    }
    // 0x151A7B64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A7B68: lwc1        $f4, 0x68($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X68);
    // 0x151A7B6C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A7B70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151A7B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A7B78: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A7B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A7B80: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x151A7B84: swc1        $f8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f8.u32l;
    // 0x151A7B88: lwc1        $f10, 0x68($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X68);
    // 0x151A7B8C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151A7B90: nop

    // 0x151A7B94: bc1fl       L_151A7BE8
    if (!c1cs) {
        // 0x151A7B98: lbu         $t4, 0x1C($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X1C);
            goto L_151A7BE8;
    }
    goto skip_2;
    // 0x151A7B98: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
    skip_2:
    // 0x151A7B9C: lh          $a2, 0x12($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X12);
    // 0x151A7BA0: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x151A7BA4: sb          $t1, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r9;
    // 0x151A7BA8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151A7BAC: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x151A7BB0: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151A7BB4: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x151A7BB8: jal         0x151A8340
    // 0x151A7BBC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_151A8340(rdram, ctx);
        goto after_2;
    // 0x151A7BBC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x151A7BC0: jal         0x150ADA68
    // 0x151A7BC4: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151A7BC4: nop

    after_3:
    // 0x151A7BC8: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151A7BCC: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151A7BD0: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x151A7BD4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151A7BD8: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x151A7BDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A7BE0: swc1        $f8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f8.u32l;
    // 0x151A7BE4: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
L_151A7BE8:
    // 0x151A7BE8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151A7BEC: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x151A7BF0: beq         $t5, $zero, L_151A7D48
    if (ctx->r13 == 0) {
        // 0x151A7BF4: nop
    
            goto L_151A7D48;
    }
    // 0x151A7BF4: nop

    // 0x151A7BF8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A7BFC: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A7C00: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x151A7C04: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x151A7C08: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151A7C0C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x151A7C10: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A7C14: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151A7C18: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A7C1C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151A7C20: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A7C24: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151A7C28: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151A7C2C: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x151A7C30: lw          $at, 0x48($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X48);
    // 0x151A7C34: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151A7C38: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x151A7C3C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x151A7C40: lw          $at, 0x50($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X50);
    // 0x151A7C44: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151A7C48: sb          $t1, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r9;
    // 0x151A7C4C: jal         0x151450B4
    // 0x151A7C50: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    func_151450B4(rdram, ctx);
        goto after_4;
    // 0x151A7C50: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    after_4:
    // 0x151A7C54: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x151A7C58: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x151A7C5C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151A7C60: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151A7C64: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151A7C68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151A7C6C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A7C70: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151A7C74: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x151A7C78: lwc1        $f16, 0x58($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151A7C7C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151A7C80: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x151A7C84: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151A7C88: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A7C8C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x151A7C90: lh          $t8, 0x12($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X12);
    // 0x151A7C94: lw          $v0, 0x64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X64);
    // 0x151A7C98: blez        $t8, L_151A7D48
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151A7C9C: nop
    
            goto L_151A7D48;
    }
    // 0x151A7C9C: nop

    // 0x151A7CA0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
L_151A7CA4:
    // 0x151A7CA4: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151A7CA8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151A7CAC: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A7CB0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151A7CB4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151A7CB8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151A7CBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151A7CC0: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151A7CC4: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x151A7CC8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151A7CCC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151A7CD0: mul.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x151A7CD4: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151A7CD8: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A7CDC: swc1        $f6, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f6.u32l;
    // 0x151A7CE0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151A7CE4: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151A7CE8: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A7CEC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151A7CF0: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151A7CF4: mul.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151A7CF8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151A7CFC: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151A7D00: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151A7D04: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A7D08: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x151A7D0C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151A7D10: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151A7D14: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A7D18: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A7D1C: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151A7D20: mul.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x151A7D24: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151A7D28: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x151A7D2C: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151A7D30: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151A7D34: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x151A7D38: lh          $t2, 0x12($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X12);
    // 0x151A7D3C: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x151A7D40: bnel        $at, $zero, L_151A7CA4
    if (ctx->r1 != 0) {
        // 0x151A7D44: lwc1        $f0, 0x0($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
            goto L_151A7CA4;
    }
    goto skip_3;
    // 0x151A7D44: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    skip_3:
L_151A7D48:
    // 0x151A7D48: beql        $t1, $zero, L_151A7D5C
    if (ctx->r9 == 0) {
        // 0x151A7D4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151A7D5C;
    }
    goto skip_4;
    // 0x151A7D4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x151A7D50: jal         0x1516972C
    // 0x151A7D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x151A7D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x151A7D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151A7D5C:
    // 0x151A7D5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A7D60: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151A7D64: jr          $ra
    // 0x151A7D68: nop

    return;
    return;
    // 0x151A7D68: nop

;}
RECOMP_FUNC void func_1500AF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500AF08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1500AF0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1500AF10: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1500AF14: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1500AF18: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500AF1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1500AF20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500AF24: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1500AF28: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x1500AF2C: lw          $t8, 0xDF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XDF0);
    // 0x1500AF30: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1500AF34: addiu       $a2, $a2, -0x22E8
    ctx->r6 = ADD32(ctx->r6, -0X22E8);
    // 0x1500AF38: lhu         $v1, 0x18($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X18);
    // 0x1500AF3C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1500AF40: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x1500AF44: bnel        $at, $zero, L_1500AF58
    if (ctx->r1 != 0) {
        // 0x1500AF48: lw          $t9, 0x0($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X0);
            goto L_1500AF58;
    }
    goto skip_0;
    // 0x1500AF48: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x1500AF4C: b           L_1500B1E0
    // 0x1500AF50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_1500B1E0;
    // 0x1500AF50: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1500AF54: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
L_1500AF58:
    // 0x1500AF58: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x1500AF5C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x1500AF60: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x1500AF64: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x1500AF68: sh          $a3, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r7;
    // 0x1500AF6C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x1500AF70: lh          $t3, 0x42($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X42);
    // 0x1500AF74: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1500AF78: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1500AF7C: sh          $t3, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r11;
    // 0x1500AF80: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1500AF84: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x1500AF88: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x1500AF8C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1500AF90: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x1500AF94: lbu         $t9, -0x2430($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X2430);
    // 0x1500AF98: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1500AF9C: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x1500AFA0: bnel        $at, $zero, L_1500AFFC
    if (ctx->r1 != 0) {
        // 0x1500AFA4: lw          $t9, 0x0($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X0);
            goto L_1500AFFC;
    }
    goto skip_1;
    // 0x1500AFA4: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x1500AFA8: lw          $t3, -0x2400($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2400);
    // 0x1500AFAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1500AFB0: sllv        $t4, $t2, $s0
    ctx->r12 = S32(ctx->r10 << (ctx->r16 & 31));
    // 0x1500AFB4: and         $t5, $t4, $t3
    ctx->r13 = ctx->r12 & ctx->r11;
    // 0x1500AFB8: beq         $t5, $zero, L_1500AFE0
    if (ctx->r13 == 0) {
        // 0x1500AFBC: andi        $t3, $a0, 0x3
        ctx->r11 = ctx->r4 & 0X3;
            goto L_1500AFE0;
    }
    // 0x1500AFBC: andi        $t3, $a0, 0x3
    ctx->r11 = ctx->r4 & 0X3;
    // 0x1500AFC0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x1500AFC4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x1500AFC8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1500AFCC: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x1500AFD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1500AFD4: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x1500AFD8: b           L_1500B008
    // 0x1500AFDC: sb          $t9, 0x7($t4)
    MEM_B(0X7, ctx->r12) = ctx->r25;
        goto L_1500B008;
    // 0x1500AFDC: sb          $t9, 0x7($t4)
    MEM_B(0X7, ctx->r12) = ctx->r25;
L_1500AFE0:
    // 0x1500AFE0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1500AFE4: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x1500AFE8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1500AFEC: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1500AFF0: b           L_1500B008
    // 0x1500AFF4: sb          $t6, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r14;
        goto L_1500B008;
    // 0x1500AFF4: sb          $t6, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r14;
    // 0x1500AFF8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
L_1500AFFC:
    // 0x1500AFFC: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x1500B000: addu        $t4, $t9, $v1
    ctx->r12 = ADD32(ctx->r25, ctx->r3);
    // 0x1500B004: sb          $t2, 0x7($t4)
    MEM_B(0X7, ctx->r12) = ctx->r10;
L_1500B008:
    // 0x1500B008: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1500B00C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x1500B010: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1500B014: sll         $t5, $t3, 5
    ctx->r13 = S32(ctx->r11 << 5);
    // 0x1500B018: or          $t7, $t5, $s0
    ctx->r15 = ctx->r13 | ctx->r16;
    // 0x1500B01C: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x1500B020: sb          $t7, 0x6($t8)
    MEM_B(0X6, ctx->r24) = ctx->r15;
    // 0x1500B024: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x1500B028: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x1500B02C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1500B030: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x1500B034: sb          $t9, 0xA($t4)
    MEM_B(0XA, ctx->r12) = ctx->r25;
    // 0x1500B038: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x1500B03C: addiu       $t3, $t3, -0x2440
    ctx->r11 = ADD32(ctx->r11, -0X2440);
    // 0x1500B040: addu        $t1, $s0, $t3
    ctx->r9 = ADD32(ctx->r16, ctx->r11);
    // 0x1500B044: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x1500B048: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1500B04C: beq         $a3, $zero, L_1500B1A4
    if (ctx->r7 == 0) {
        // 0x1500B050: sb          $t5, 0x8($t7)
        MEM_B(0X8, ctx->r15) = ctx->r13;
            goto L_1500B1A4;
    }
    // 0x1500B050: sb          $t5, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r13;
    // 0x1500B054: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x1500B058: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1500B05C: jal         0x151EF610
    // 0x1500B060: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_151EF610(rdram, ctx);
        goto after_0;
    // 0x1500B060: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1500B064: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1500B068: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1500B06C: addiu       $t3, $t3, -0x1BC8
    ctx->r11 = ADD32(ctx->r11, -0X1BC8);
    // 0x1500B070: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x1500B074: mfhi        $t8
    ctx->r24 = hi;
    // 0x1500B078: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x1500B07C: addu        $t2, $t8, $a3
    ctx->r10 = ADD32(ctx->r24, ctx->r7);
    // 0x1500B080: addu        $a1, $t4, $t3
    ctx->r5 = ADD32(ctx->r12, ctx->r11);
    // 0x1500B084: subu        $a0, $t2, $a3
    ctx->r4 = SUB32(ctx->r10, ctx->r7);
    // 0x1500B088: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x1500B08C: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x1500B090: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x1500B094: sra         $t7, $t5, 16
    ctx->r15 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1500B098: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500B09C: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x1500B0A0: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1500B0A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1500B0A8: addiu       $a2, $a2, -0x22E8
    ctx->r6 = ADD32(ctx->r6, -0X22E8);
    // 0x1500B0AC: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x1500B0B0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x1500B0B4: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x1500B0B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1500B0BC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1500B0C0: mflo        $t8
    ctx->r24 = lo;
    // 0x1500B0C4: sra         $t2, $t8, 10
    ctx->r10 = S32(SIGNED(ctx->r24) >> 10);
    // 0x1500B0C8: addu        $t4, $t9, $v1
    ctx->r12 = ADD32(ctx->r25, ctx->r3);
    // 0x1500B0CC: sb          $t2, 0xC($t4)
    MEM_B(0XC, ctx->r12) = ctx->r10;
    // 0x1500B0D0: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x1500B0D4: bne         $a3, $zero, L_1500B0E0
    if (ctx->r7 != 0) {
        // 0x1500B0D8: nop
    
            goto L_1500B0E0;
    }
    // 0x1500B0D8: nop

    // 0x1500B0DC: break       7
    do_break(352366812);
L_1500B0E0:
    // 0x1500B0E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500B0E4: bne         $a3, $at, L_1500B0F8
    if (ctx->r7 != ctx->r1) {
        // 0x1500B0E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500B0F8;
    }
    // 0x1500B0E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500B0EC: bne         $v0, $at, L_1500B0F8
    if (ctx->r2 != ctx->r1) {
        // 0x1500B0F0: nop
    
            goto L_1500B0F8;
    }
    // 0x1500B0F0: nop

    // 0x1500B0F4: break       6
    do_break(352366836);
L_1500B0F8:
    // 0x1500B0F8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1500B0FC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x1500B100: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x1500B104: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x1500B108: lbu         $t6, 0x5CE0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5CE0);
    // 0x1500B10C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x1500B110: beql        $t7, $zero, L_1500B184
    if (ctx->r15 == 0) {
        // 0x1500B114: lh          $t3, 0x2($a1)
        ctx->r11 = MEM_H(ctx->r5, 0X2);
            goto L_1500B184;
    }
    goto skip_2;
    // 0x1500B114: lh          $t3, 0x2($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2);
    skip_2:
    // 0x1500B118: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x1500B11C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x1500B120: jal         0x151EF610
    // 0x1500B124: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    func_151EF610(rdram, ctx);
        goto after_1;
    // 0x1500B124: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    after_1:
    // 0x1500B128: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1500B12C: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x1500B130: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1500B134: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x1500B138: mfhi        $t8
    ctx->r24 = hi;
    // 0x1500B13C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1500B140: addu        $t0, $t9, $t0
    ctx->r8 = ADD32(ctx->r25, ctx->r8);
    // 0x1500B144: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x1500B148: sra         $t4, $t2, 16
    ctx->r12 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1500B14C: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x1500B150: addiu       $a2, $a2, -0x22E8
    ctx->r6 = ADD32(ctx->r6, -0X22E8);
    // 0x1500B154: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x1500B158: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1500B15C: bne         $a3, $zero, L_1500B168
    if (ctx->r7 != 0) {
        // 0x1500B160: nop
    
            goto L_1500B168;
    }
    // 0x1500B160: nop

    // 0x1500B164: break       7
    do_break(352366948);
L_1500B168:
    // 0x1500B168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500B16C: bne         $a3, $at, L_1500B180
    if (ctx->r7 != ctx->r1) {
        // 0x1500B170: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500B180;
    }
    // 0x1500B170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500B174: bne         $v0, $at, L_1500B180
    if (ctx->r2 != ctx->r1) {
        // 0x1500B178: nop
    
            goto L_1500B180;
    }
    // 0x1500B178: nop

    // 0x1500B17C: break       6
    do_break(352366972);
L_1500B180:
    // 0x1500B180: lh          $t3, 0x2($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2);
L_1500B184:
    // 0x1500B184: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1500B188: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500B18C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1500B190: mflo        $t5
    ctx->r13 = lo;
    // 0x1500B194: sra         $t6, $t5, 10
    ctx->r14 = S32(SIGNED(ctx->r13) >> 10);
    // 0x1500B198: sb          $t6, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r14;
    // 0x1500B19C: b           L_1500B1DC
    // 0x1500B1A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
        goto L_1500B1DC;
    // 0x1500B1A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_1500B1A4:
    // 0x1500B1A4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1500B1A8: addiu       $t2, $t2, -0x1BC8
    ctx->r10 = ADD32(ctx->r10, -0X1BC8);
    // 0x1500B1AC: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x1500B1B0: addu        $a1, $t9, $t2
    ctx->r5 = ADD32(ctx->r25, ctx->r10);
    // 0x1500B1B4: lh          $t4, 0x0($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X0);
    // 0x1500B1B8: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x1500B1BC: sra         $t3, $t4, 2
    ctx->r11 = S32(SIGNED(ctx->r12) >> 2);
    // 0x1500B1C0: addu        $t7, $t5, $v1
    ctx->r15 = ADD32(ctx->r13, ctx->r3);
    // 0x1500B1C4: sb          $t3, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r11;
    // 0x1500B1C8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x1500B1CC: lh          $t6, 0x2($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X2);
    // 0x1500B1D0: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x1500B1D4: sra         $t8, $t6, 2
    ctx->r24 = S32(SIGNED(ctx->r14) >> 2);
    // 0x1500B1D8: sb          $t8, 0xD($t2)
    MEM_B(0XD, ctx->r10) = ctx->r24;
L_1500B1DC:
    // 0x1500B1DC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_1500B1E0:
    // 0x1500B1E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500B1E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1500B1E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1500B1EC: jr          $ra
    // 0x1500B1F0: nop

    return;
    return;
    // 0x1500B1F0: nop

;}
RECOMP_FUNC void func_150403C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150403C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150403CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150403D0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150403D4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150403D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150403DC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150403E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150403E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150403E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150403EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150403F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150403F4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150403F8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150403FC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x15040400: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x15040404: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15040408: bne         $t6, $zero, L_15040420
    if (ctx->r14 != 0) {
        // 0x1504040C: lw          $t8, 0x54($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X54);
            goto L_15040420;
    }
    // 0x1504040C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15040410: lb          $t7, 0x0($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X0);
    // 0x15040414: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x15040418: bnel        $t7, $at, L_15040434
    if (ctx->r15 != ctx->r1) {
        // 0x1504041C: lb          $t9, 0x0($s1)
        ctx->r25 = MEM_B(ctx->r17, 0X0);
            goto L_15040434;
    }
    goto skip_0;
    // 0x1504041C: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
    skip_0:
L_15040420:
    // 0x15040420: beq         $t8, $zero, L_150406FC
    if (ctx->r24 == 0) {
        // 0x15040424: sltu        $at, $a0, $t8
        ctx->r1 = ctx->r4 < ctx->r24 ? 1 : 0;
            goto L_150406FC;
    }
    // 0x15040424: sltu        $at, $a0, $t8
    ctx->r1 = ctx->r4 < ctx->r24 ? 1 : 0;
    // 0x15040428: beql        $at, $zero, L_15040700
    if (ctx->r1 == 0) {
        // 0x1504042C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15040700;
    }
    goto skip_1;
    // 0x1504042C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x15040430: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
L_15040434:
    // 0x15040434: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x15040438: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x1504043C: addiu       $t0, $t9, 0x2D
    ctx->r8 = ADD32(ctx->r25, 0X2D);
    // 0x15040440: lui         $s6, 0xC00
    ctx->r22 = S32(0XC00 << 16);
    // 0x15040444: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x15040448: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x1504044C: sltiu       $at, $t0, 0x4D
    ctx->r1 = ctx->r8 < 0X4D ? 1 : 0;
    // 0x15040450: addiu       $fp, $fp, 0x68A0
    ctx->r30 = ADD32(ctx->r30, 0X68A0);
    // 0x15040454: addiu       $s7, $s7, 0x68A1
    ctx->r23 = ADD32(ctx->r23, 0X68A1);
    // 0x15040458: ori         $s6, $s6, 0x5B
    ctx->r22 = ctx->r22 | 0X5B;
    // 0x1504045C: addiu       $s5, $s5, -0x3720
    ctx->r21 = ADD32(ctx->r21, -0X3720);
    // 0x15040460: addiu       $s2, $s2, -0x1640
    ctx->r18 = ADD32(ctx->r18, -0X1640);
    // 0x15040464: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x15040468: beq         $at, $zero, L_15040640
    if (ctx->r1 == 0) {
        // 0x1504046C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_15040640;
    }
    // 0x1504046C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15040470: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15040474: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15040478: addu        $at, $at, $t0
    gpr jr_addend_15040480 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x1504047C: lw          $t0, -0x76A0($at)
    ctx->r8 = ADD32(ctx->r1, -0X76A0);
    // 0x15040480: jr          $t0
    // 0x15040484: nop

    switch (jr_addend_15040480 >> 2) {
        case 0: goto L_15040648; break;
        case 1: goto L_15040648; break;
        case 2: goto L_15040648; break;
        case 3: goto L_15040648; break;
        case 4: goto L_15040648; break;
        case 5: goto L_15040648; break;
        case 6: goto L_15040648; break;
        case 7: goto L_15040648; break;
        case 8: goto L_150405FC; break;
        case 9: goto L_15040648; break;
        case 10: goto L_15040648; break;
        case 11: goto L_15040488; break;
        case 12: goto L_15040648; break;
        case 13: goto L_15040648; break;
        case 14: goto L_15040648; break;
        case 15: goto L_150405EC; break;
        case 16: goto L_150405EC; break;
        case 17: goto L_150405A0; break;
        case 18: goto L_150405A0; break;
        case 19: goto L_15040648; break;
        case 20: goto L_15040598; break;
        case 21: goto L_15040648; break;
        case 22: goto L_15040648; break;
        case 23: goto L_150405F4; break;
        case 24: goto L_150405F4; break;
        case 25: goto L_150405EC; break;
        case 26: goto L_150405EC; break;
        case 27: goto L_150405EC; break;
        case 28: goto L_15040648; break;
        case 29: goto L_15040648; break;
        case 30: goto L_15040648; break;
        case 31: goto L_15040648; break;
        case 32: goto L_15040648; break;
        case 33: goto L_15040648; break;
        case 34: goto L_15040648; break;
        case 35: goto L_150405A0; break;
        case 36: goto L_150405EC; break;
        case 37: goto L_150405EC; break;
        case 38: goto L_150405EC; break;
        case 39: goto L_15040648; break;
        case 40: goto L_150405EC; break;
        case 41: goto L_150405EC; break;
        case 42: goto L_150405D4; break;
        case 43: goto L_150405EC; break;
        case 44: goto L_150405E4; break;
        case 45: goto L_15040648; break;
        case 46: goto L_150405C4; break;
        case 47: goto L_15040648; break;
        case 48: goto L_15040648; break;
        case 49: goto L_15040648; break;
        case 50: goto L_150405AC; break;
        case 51: goto L_150405A0; break;
        case 52: goto L_150405A0; break;
        case 53: goto L_15040648; break;
        case 54: goto L_15040640; break;
        case 55: goto L_15040640; break;
        case 56: goto L_15040640; break;
        case 57: goto L_15040640; break;
        case 58: goto L_15040640; break;
        case 59: goto L_15040640; break;
        case 60: goto L_15040640; break;
        case 61: goto L_150405A0; break;
        case 62: goto L_150405A0; break;
        case 63: goto L_150405A0; break;
        case 64: goto L_150405A0; break;
        case 65: goto L_150405A0; break;
        case 66: goto L_150405A0; break;
        case 67: goto L_150405A0; break;
        case 68: goto L_150405A0; break;
        case 69: goto L_150405A0; break;
        case 70: goto L_150405A0; break;
        case 71: goto L_150405A0; break;
        case 72: goto L_150405A0; break;
        case 73: goto L_150405A0; break;
        case 74: goto L_150405A0; break;
        case 75: goto L_150405A0; break;
        case 76: goto L_150405A0; break;
        default: switch_error(__func__, 0x15040480, 0x80098960);
    }
    // 0x15040484: nop

L_15040488:
    // 0x15040488: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x1504048C: jal         0x150408CC
    // 0x15040490: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150408CC(rdram, ctx);
        goto after_0;
    // 0x15040490: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x15040494: srl         $v1, $s0, 24
    ctx->r3 = S32(U32(ctx->r16) >> 24);
    // 0x15040498: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x1504049C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x150404A0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150404A4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x150404A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150404AC: lw          $t4, 0x6860($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6860);
    // 0x150404B0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150404B4: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x150404B8: and         $t2, $s0, $at
    ctx->r10 = ctx->r16 & ctx->r1;
    // 0x150404BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150404C0: addu        $s0, $t2, $t4
    ctx->r16 = ADD32(ctx->r10, ctx->r12);
    // 0x150404C4: or          $t5, $s0, $at
    ctx->r13 = ctx->r16 | ctx->r1;
    // 0x150404C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150404CC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x150404D0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x150404D4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x150404D8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x150404DC: bne         $t8, $at, L_150404F4
    if (ctx->r24 != ctx->r1) {
        // 0x150404E0: sb          $t7, 0x0($s7)
        MEM_B(0X0, ctx->r23) = ctx->r15;
            goto L_150404F4;
    }
    // 0x150404E0: sb          $t7, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r15;
    // 0x150404E4: jal         0x15040CC8
    // 0x150404E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15040CC8(rdram, ctx);
        goto after_1;
    // 0x150404E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x150404EC: jal         0x150AD770
    // 0x150404F0: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_2;
    // 0x150404F0: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_2:
L_150404F4:
    // 0x150404F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150404F8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x150404FC: sltu        $at, $s0, $at
    ctx->r1 = ctx->r16 < ctx->r1 ? 1 : 0;
    // 0x15040500: bne         $at, $zero, L_15040530
    if (ctx->r1 != 0) {
        // 0x15040504: lui         $at, 0xA000
        ctx->r1 = S32(0XA000 << 16);
            goto L_15040530;
    }
    // 0x15040504: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x15040508: sltu        $at, $s0, $at
    ctx->r1 = ctx->r16 < ctx->r1 ? 1 : 0;
    // 0x1504050C: beq         $at, $zero, L_15040530
    if (ctx->r1 == 0) {
        // 0x15040510: andi        $t9, $s0, 0x7
        ctx->r25 = ctx->r16 & 0X7;
            goto L_15040530;
    }
    // 0x15040510: andi        $t9, $s0, 0x7
    ctx->r25 = ctx->r16 & 0X7;
    // 0x15040514: bne         $t9, $zero, L_15040530
    if (ctx->r25 != 0) {
        // 0x15040518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15040530;
    }
    // 0x15040518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1504051C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15040520: jal         0x150403C8
    // 0x15040524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_150403C8(rdram, ctx);
        goto after_3;
    // 0x15040524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x15040528: b           L_15040560
    // 0x1504052C: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
        goto L_15040560;
    // 0x1504052C: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
L_15040530:
    // 0x15040530: jal         0x15040CC8
    // 0x15040534: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15040CC8(rdram, ctx);
        goto after_4;
    // 0x15040534: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x15040538: jal         0x150AD770
    // 0x1504053C: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_5;
    // 0x1504053C: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_5:
    // 0x15040540: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x15040544: subu        $t1, $s3, $t0
    ctx->r9 = SUB32(ctx->r19, ctx->r8);
    // 0x15040548: jal         0x10007DA0
    // 0x1504054C: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
    func_10007DA0(rdram, ctx);
        goto after_6;
    // 0x1504054C: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
    after_6:
    // 0x15040550: lbu         $t2, 0x0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X0);
    // 0x15040554: subu        $t3, $s3, $t2
    ctx->r11 = SUB32(ctx->r19, ctx->r10);
    // 0x15040558: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
    // 0x1504055C: lbu         $v0, 0x0($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X0);
L_15040560:
    // 0x15040560: blez        $v0, L_15040570
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15040564: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_15040570;
    }
    // 0x15040564: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x15040568: b           L_15040648
    // 0x1504056C: sb          $t4, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r12;
        goto L_15040648;
    // 0x1504056C: sb          $t4, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r12;
L_15040570:
    // 0x15040570: jal         0x150AD770
    // 0x15040574: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_7;
    // 0x15040574: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_7:
    // 0x15040578: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x1504057C: subu        $t6, $s3, $t5
    ctx->r14 = SUB32(ctx->r19, ctx->r13);
    // 0x15040580: jal         0x10007DA0
    // 0x15040584: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    func_10007DA0(rdram, ctx);
        goto after_8;
    // 0x15040584: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    after_8:
    // 0x15040588: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x1504058C: subu        $t8, $s3, $t7
    ctx->r24 = SUB32(ctx->r19, ctx->r15);
    // 0x15040590: b           L_15040648
    // 0x15040594: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
        goto L_15040648;
    // 0x15040594: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
L_15040598:
    // 0x15040598: b           L_15040648
    // 0x1504059C: sb          $zero, 0x0($fp)
    MEM_B(0X0, ctx->r30) = 0;
        goto L_15040648;
    // 0x1504059C: sb          $zero, 0x0($fp)
    MEM_B(0X0, ctx->r30) = 0;
L_150405A0:
    // 0x150405A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150405A4: b           L_15040648
    // 0x150405A8: sb          $t9, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r25;
        goto L_15040648;
    // 0x150405A8: sb          $t9, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r25;
L_150405AC:
    // 0x150405AC: jal         0x1504082C
    // 0x150405B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1504082C(rdram, ctx);
        goto after_9;
    // 0x150405B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x150405B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150405B8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x150405BC: b           L_15040648
    // 0x150405C0: sb          $t0, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r8;
        goto L_15040648;
    // 0x150405C0: sb          $t0, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r8;
L_150405C4:
    // 0x150405C4: jal         0x15040754
    // 0x150405C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15040754(rdram, ctx);
        goto after_10;
    // 0x150405C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x150405CC: b           L_15040648
    // 0x150405D0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
        goto L_15040648;
    // 0x150405D0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_150405D4:
    // 0x150405D4: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x150405D8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150405DC: b           L_15040648
    // 0x150405E0: sw          $t1, 0x48B0($at)
    MEM_W(0X48B0, ctx->r1) = ctx->r9;
        goto L_15040648;
    // 0x150405E0: sw          $t1, 0x48B0($at)
    MEM_W(0X48B0, ctx->r1) = ctx->r9;
L_150405E4:
    // 0x150405E4: b           L_15040648
    // 0x150405E8: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
        goto L_15040648;
    // 0x150405E8: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
L_150405EC:
    // 0x150405EC: b           L_15040648
    // 0x150405F0: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
        goto L_15040648;
    // 0x150405F0: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
L_150405F4:
    // 0x150405F4: b           L_15040648
    // 0x150405F8: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
        goto L_15040648;
    // 0x150405F8: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
L_150405FC:
    // 0x150405FC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x15040600: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15040604: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x15040608: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x1504060C: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x15040610: bne         $t2, $at, L_15040648
    if (ctx->r10 != ctx->r1) {
        // 0x15040614: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_15040648;
    }
    // 0x15040614: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x15040618: bgez        $a0, L_15040628
    if (SIGNED(ctx->r4) >= 0) {
        // 0x1504061C: sra         $t3, $a0, 2
        ctx->r11 = S32(SIGNED(ctx->r4) >> 2);
            goto L_15040628;
    }
    // 0x1504061C: sra         $t3, $a0, 2
    ctx->r11 = S32(SIGNED(ctx->r4) >> 2);
    // 0x15040620: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x15040624: sra         $t3, $at, 2
    ctx->r11 = S32(SIGNED(ctx->r1) >> 2);
L_15040628:
    // 0x15040628: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1504062C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15040630: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x15040634: sw          $a1, 0x6860($at)
    MEM_W(0X6860, ctx->r1) = ctx->r5;
    // 0x15040638: b           L_15040648
    // 0x1504063C: nop

        goto L_15040648;
    // 0x1504063C: nop

L_15040640:
    // 0x15040640: jal         0x150AD770
    // 0x15040644: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_11;
    // 0x15040644: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_11:
L_15040648:
    // 0x15040648: beql        $s4, $zero, L_15040690
    if (ctx->r20 == 0) {
        // 0x1504064C: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_15040690;
    }
    goto skip_2;
    // 0x1504064C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    skip_2:
    // 0x15040650: lbu         $t5, 0x0($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X0);
    // 0x15040654: beql        $t5, $zero, L_15040690
    if (ctx->r13 == 0) {
        // 0x15040658: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_15040690;
    }
    goto skip_3;
    // 0x15040658: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    skip_3:
    // 0x1504065C: jal         0x15040CC8
    // 0x15040660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15040CC8(rdram, ctx);
        goto after_12;
    // 0x15040660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x15040664: sb          $zero, 0x0($fp)
    MEM_B(0X0, ctx->r30) = 0;
    // 0x15040668: jal         0x150AD770
    // 0x1504066C: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_13;
    // 0x1504066C: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_13:
    // 0x15040670: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x15040674: subu        $t7, $s3, $t6
    ctx->r15 = SUB32(ctx->r19, ctx->r14);
    // 0x15040678: jal         0x10007DA0
    // 0x1504067C: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    func_10007DA0(rdram, ctx);
        goto after_14;
    // 0x1504067C: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    after_14:
    // 0x15040680: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x15040684: subu        $t9, $s3, $t8
    ctx->r25 = SUB32(ctx->r19, ctx->r24);
    // 0x15040688: sb          $t9, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r25;
    // 0x1504068C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_15040690:
    // 0x15040690: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15040694: beql        $t0, $zero, L_150406CC
    if (ctx->r8 == 0) {
        // 0x15040698: lw          $t5, 0x54($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X54);
            goto L_150406CC;
    }
    goto skip_4;
    // 0x15040698: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    skip_4:
    // 0x1504069C: jal         0x15040CC8
    // 0x150406A0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    func_15040CC8(rdram, ctx);
        goto after_15;
    // 0x150406A0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    after_15:
    // 0x150406A4: jal         0x150AD770
    // 0x150406A8: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    func_150AD770(rdram, ctx);
        goto after_16;
    // 0x150406A8: sw          $s6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r22;
    after_16:
    // 0x150406AC: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
    // 0x150406B0: subu        $t2, $s3, $t1
    ctx->r10 = SUB32(ctx->r19, ctx->r9);
    // 0x150406B4: jal         0x10007DA0
    // 0x150406B8: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
    func_10007DA0(rdram, ctx);
        goto after_17;
    // 0x150406B8: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
    after_17:
    // 0x150406BC: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x150406C0: subu        $t4, $s3, $t3
    ctx->r12 = SUB32(ctx->r19, ctx->r11);
    // 0x150406C4: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
    // 0x150406C8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
L_150406CC:
    // 0x150406CC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x150406D0: bnel        $t5, $zero, L_150406EC
    if (ctx->r13 != 0) {
        // 0x150406D4: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_150406EC;
    }
    goto skip_5;
    // 0x150406D4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    skip_5:
    // 0x150406D8: lb          $t6, 0x0($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X0);
    // 0x150406DC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x150406E0: bnel        $t6, $at, L_15040434
    if (ctx->r14 != ctx->r1) {
        // 0x150406E4: lb          $t9, 0x0($s1)
        ctx->r25 = MEM_B(ctx->r17, 0X0);
            goto L_15040434;
    }
    goto skip_6;
    // 0x150406E4: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
    skip_6:
    // 0x150406E8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_150406EC:
    // 0x150406EC: beq         $t7, $zero, L_150406FC
    if (ctx->r15 == 0) {
        // 0x150406F0: sltu        $at, $s1, $t7
        ctx->r1 = ctx->r17 < ctx->r15 ? 1 : 0;
            goto L_150406FC;
    }
    // 0x150406F0: sltu        $at, $s1, $t7
    ctx->r1 = ctx->r17 < ctx->r15 ? 1 : 0;
    // 0x150406F4: bnel        $at, $zero, L_15040434
    if (ctx->r1 != 0) {
        // 0x150406F8: lb          $t9, 0x0($s1)
        ctx->r25 = MEM_B(ctx->r17, 0X0);
            goto L_15040434;
    }
    goto skip_7;
    // 0x150406F8: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
    skip_7:
L_150406FC:
    // 0x150406FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15040700:
    // 0x15040700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15040704: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15040708: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1504070C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15040710: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15040714: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15040718: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1504071C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15040720: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15040724: jr          $ra
    // 0x15040728: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15040728: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150B5060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B5060: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x150B5064: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x150B5068: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x150B506C: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x150B5070: sh          $t7, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r15;
    // 0x150B5074: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x150B5078: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x150B507C: sb          $t9, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r25;
    // 0x150B5080: jr          $ra
    // 0x150B5084: nop

    return;
    return;
    // 0x150B5084: nop

;}
RECOMP_FUNC void func_1516F1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F1C0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1516F1C4: sw          $ra, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r31;
    // 0x1516F1C8: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x1516F1CC: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x1516F1D0: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x1516F1D4: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x1516F1D8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x1516F1DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1516F1E0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x1516F1E4: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x1516F1E8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1516F1EC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1516F1F0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1516F1F4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1516F1F8: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x1516F1FC: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x1516F200: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x1516F204: lbu         $t3, 0xDB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XDB);
    // 0x1516F208: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x1516F20C: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x1516F210: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x1516F214: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x1516F218: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1516F21C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1516F220: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1516F224: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x1516F228: addiu       $t8, $zero, 0x81
    ctx->r24 = ADD32(0, 0X81);
    // 0x1516F22C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x1516F230: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x1516F234: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1516F238: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1516F23C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x1516F240: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x1516F244: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x1516F248: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x1516F24C: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x1516F250: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x1516F254: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x1516F258: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x1516F25C: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x1516F260: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1516F264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516F268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1516F26C: addiu       $a3, $zero, 0x2D
    ctx->r7 = ADD32(0, 0X2D);
    // 0x1516F270: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1516F274: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1516F278: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1516F27C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1516F280: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1516F284: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1516F288: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1516F28C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1516F290: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1516F294: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1516F298: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1516F29C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1516F2A0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1516F2A4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1516F2A8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x1516F2AC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1516F2B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1516F2B4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x1516F2B8: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x1516F2BC: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1516F2C0: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x1516F2C4: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x1516F2C8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1516F2CC: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x1516F2D0: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1516F2D4: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x1516F2D8: sw          $t3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r11;
    // 0x1516F2DC: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x1516F2E0: jal         0x1516D99C
    // 0x1516F2E4: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    func_1516D99C(rdram, ctx);
        goto after_0;
    // 0x1516F2E4: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    after_0:
    // 0x1516F2E8: lw          $ra, 0xCC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XCC);
    // 0x1516F2EC: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x1516F2F0: jr          $ra
    // 0x1516F2F4: nop

    return;
    return;
    // 0x1516F2F4: nop

;}
RECOMP_FUNC void func_151D7830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7830: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x151D7834: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151D7838: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D783C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151D7840: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151D7844: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151D7848: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x151D784C: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x151D7850: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D7854: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x151D7858: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x151D785C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D7860: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151D7864: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x151D7868: addiu       $t5, $zero, 0x76
    ctx->r13 = ADD32(0, 0X76);
    // 0x151D786C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151D7870: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D7874: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x151D7878: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151D787C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151D7880: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x151D7884: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151D7888: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151D788C: sb          $t0, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r8;
    // 0x151D7890: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D7894: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x151D7898: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x151D789C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151D78A0: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x151D78A4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x151D78A8: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151D78AC: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x151D78B0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D78B4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x151D78B8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151D78BC: sh          $t4, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r12;
    // 0x151D78C0: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x151D78C4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x151D78C8: sb          $t7, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r15;
    // 0x151D78CC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x151D78D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151D78D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151D78D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151D78DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151D78E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D78E4: lbu         $t0, 0xC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XC);
    // 0x151D78E8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151D78EC: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    // 0x151D78F0: jal         0x15147A80
    // 0x151D78F4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x151D78F4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_0:
    // 0x151D78F8: beq         $v0, $zero, L_151D7918
    if (ctx->r2 == 0) {
        // 0x151D78FC: addiu       $a1, $sp, 0x68
        ctx->r5 = ADD32(ctx->r29, 0X68);
            goto L_151D7918;
    }
    // 0x151D78FC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151D7900: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151D7904: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x151D7908: jal         0x10022EC0
    // 0x151D790C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151D790C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_1:
    // 0x151D7910: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x151D7914: sw          $v1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r3;
L_151D7918:
    // 0x151D7918: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151D791C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151D7920: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x151D7924: jr          $ra
    // 0x151D7928: nop

    return;
    return;
    // 0x151D7928: nop

;}
RECOMP_FUNC void func_150F6420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F6424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F6428: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F642C: jal         0x150F6400
    // 0x150F6430: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F6400(rdram, ctx);
        goto after_0;
    // 0x150F6430: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F6434: jal         0x1513CA6C
    // 0x150F6438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CA6C(rdram, ctx);
        goto after_1;
    // 0x150F6438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F643C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F6440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F6444: jr          $ra
    // 0x150F6448: nop

    return;
    return;
    // 0x150F6448: nop

;}
RECOMP_FUNC void func_1514672C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514672C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146730: lwc1        $f2, 0x56C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X56C4);
    // 0x15146734: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15146738: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1514673C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15146740: nop

    // 0x15146744: bc1t        L_15146794
    if (c1cs) {
        // 0x15146748: nop
    
            goto L_15146794;
    }
    // 0x15146748: nop

    // 0x1514674C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15146750: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15146754: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15146758: nop

    // 0x1514675C: bc1t        L_15146794
    if (c1cs) {
        // 0x15146760: nop
    
            goto L_15146794;
    }
    // 0x15146760: nop

    // 0x15146764: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15146768: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514676C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15146770: nop

    // 0x15146774: bc1t        L_15146794
    if (c1cs) {
        // 0x15146778: nop
    
            goto L_15146794;
    }
    // 0x15146778: nop

    // 0x1514677C: lwc1        $f4, 0x56C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X56C8);
    // 0x15146780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15146784: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15146788: nop

    // 0x1514678C: bc1f        L_1514679C
    if (!c1cs) {
        // 0x15146790: nop
    
            goto L_1514679C;
    }
    // 0x15146790: nop

L_15146794:
    // 0x15146794: jr          $ra
    // 0x15146798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15146798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514679C:
    // 0x1514679C: jr          $ra
    // 0x151467A0: nop

    return;
    return;
    // 0x151467A0: nop

;}
RECOMP_FUNC void func_15160600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15160604: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15160608: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1516060C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15160610: addiu       $t7, $t7, 0x6698
    ctx->r15 = ADD32(ctx->r15, 0X6698);
    // 0x15160614: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15160618: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1516061C: addiu       $t8, $zero, 0x23F
    ctx->r24 = ADD32(0, 0X23F);
    // 0x15160620: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15160624: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15160628: addiu       $a1, $a1, 0x6690
    ctx->r5 = ADD32(ctx->r5, 0X6690);
    // 0x1516062C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15160630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15160634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15160638: jal         0x151422DC
    // 0x1516063C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151422DC(rdram, ctx);
        goto after_0;
    // 0x1516063C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x15160640: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x15160644: lw          $t0, 0x14($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X14);
    // 0x15160648: sb          $v0, 0x2F($t0)
    MEM_B(0X2F, ctx->r8) = ctx->r2;
    // 0x1516064C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15160650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15160654: jr          $ra
    // 0x15160658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15160658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151A99D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A99D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151A99D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A99D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A99DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A99E0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151A99E4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151A99E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A99EC: lwc1        $f6, -0x708C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X708C);
    // 0x151A99F0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151A99F4: lwc1        $f0, 0x118($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X118);
    // 0x151A99F8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151A99FC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151A9A00: nop

    // 0x151A9A04: bc1fl       L_151A9A28
    if (!c1cs) {
        // 0x151A9A08: lwc1        $f16, 0x18($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
            goto L_151A9A28;
    }
    goto skip_0;
    // 0x151A9A08: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x151A9A0C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151A9A10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151A9A14: nop

    // 0x151A9A18: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151A9A1C: b           L_151A9A38
    // 0x151A9A20: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151A9A38;
    // 0x151A9A20: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151A9A24: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
L_151A9A28:
    // 0x151A9A28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A9A2C: nop

    // 0x151A9A30: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A9A34: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151A9A38:
    // 0x151A9A38: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151A9A3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A9A40: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151A9A44: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151A9A48: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x151A9A4C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A9A50: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151A9A54: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A9A5C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151A9A60: jal         0x15045800
    // 0x151A9A64: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151A9A64: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151A9A68: beq         $v0, $zero, L_151A9A90
    if (ctx->r2 == 0) {
        // 0x151A9A6C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_151A9A90;
    }
    // 0x151A9A6C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9A70: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A9A74: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x151A9A78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151A9A7C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151A9A80: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151A9A84: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151A9A88: jal         0x151ABE40
    // 0x151A9A8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151A9A8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
L_151A9A90:
    // 0x151A9A90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151A9A94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A9A98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151A9A9C: jr          $ra
    // 0x151A9AA0: nop

    return;
    return;
    // 0x151A9AA0: nop

;}
RECOMP_FUNC void guMtxXFML(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0080: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151F0084: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x151F0088: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151F008C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151F0090: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151F0094: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x151F0098: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x151F009C: jal         0x151EFEB8
    // 0x151F00A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x151F00A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x151F00A4: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x151F00A8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x151F00AC: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x151F00B0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151F00B4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x151F00B8: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x151F00BC: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x151F00C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151F00C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151F00C8: jal         0x151F0140
    // 0x151F00CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    guMtxXFMF(rdram, ctx);
        goto after_1;
    // 0x151F00CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x151F00D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151F00D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151F00D8: jr          $ra
    // 0x151F00DC: nop

    return;
    return;
    // 0x151F00DC: nop

;}
RECOMP_FUNC void func_15005AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005AF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15005AF4: jr          $ra
    // 0x15005AF8: nop

    return;
    return;
    // 0x15005AF8: nop

;}
RECOMP_FUNC void func_150DB9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DB9E0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150DB9E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150DB9E8: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x150DB9EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150DB9F0: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150DB9F4: beql        $a0, $zero, L_150DBC50
    if (ctx->r4 == 0) {
        // 0x150DB9F8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150DBC50;
    }
    goto skip_0;
    // 0x150DB9F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150DB9FC: beq         $a1, $zero, L_150DBA18
    if (ctx->r5 == 0) {
        // 0x150DBA00: andi        $a2, $s0, 0xFF
        ctx->r6 = ctx->r16 & 0XFF;
            goto L_150DBA18;
    }
    // 0x150DBA00: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x150DBA04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150DBA08: beq         $a1, $at, L_150DBC40
    if (ctx->r5 == ctx->r1) {
        // 0x150DBA0C: andi        $a2, $s0, 0xFF
        ctx->r6 = ctx->r16 & 0XFF;
            goto L_150DBC40;
    }
    // 0x150DBA0C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x150DBA10: b           L_150DBC50
    // 0x150DBA14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150DBC50;
    // 0x150DBA14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150DBA18:
    // 0x150DBA18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150DBA1C: jal         0x15196438
    // 0x150DBA20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15196438(rdram, ctx);
        goto after_0;
    // 0x150DBA20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150DBA24: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150DBA28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150DBA2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBA30: lwc1        $f4, 0xC00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC00);
    // 0x150DBA34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBA38: lwc1        $f6, 0xC04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC04);
    // 0x150DBA3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBA40: lwc1        $f8, 0xC08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XC08);
    // 0x150DBA44: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150DBA48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DBA4C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150DBA50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DBA54: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150DBA58: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150DBA5C: addiu       $t8, $zero, -0x4B
    ctx->r24 = ADD32(0, -0X4B);
    // 0x150DBA60: addiu       $t9, $zero, -0x26
    ctx->r25 = ADD32(0, -0X26);
    // 0x150DBA64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBA68: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x150DBA6C: lwc1        $f18, 0xC0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC0C);
    // 0x150DBA70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150DBA74: sh          $t6, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r14;
    // 0x150DBA78: sh          $t7, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r15;
    // 0x150DBA7C: sh          $t8, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r24;
    // 0x150DBA80: sh          $t9, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r25;
    // 0x150DBA84: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150DBA88: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x150DBA8C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150DBA90: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150DBA94: addiu       $t4, $zero, 0x29
    ctx->r12 = ADD32(0, 0X29);
    // 0x150DBA98: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150DBA9C: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x150DBAA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150DBAA4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150DBAA8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150DBAAC: sh          $t0, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r8;
    // 0x150DBAB0: sh          $t1, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r9;
    // 0x150DBAB4: sh          $t2, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r10;
    // 0x150DBAB8: sh          $t3, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r11;
    // 0x150DBABC: sh          $t4, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r12;
    // 0x150DBAC0: sh          $zero, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = 0;
    // 0x150DBAC4: sb          $t5, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r13;
    // 0x150DBAC8: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x150DBACC: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x150DBAD0: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150DBAD4: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x150DBAD8: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x150DBADC: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x150DBAE0: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x150DBAE4: sb          $t8, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r24;
    // 0x150DBAE8: sb          $t9, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = ctx->r25;
    // 0x150DBAEC: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x150DBAF0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x150DBAF4: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150DBAF8: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x150DBAFC: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x150DBB00: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x150DBB04: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x150DBB08: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    // 0x150DBB0C: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x150DBB10: jal         0x15152F70
    // 0x150DBB14: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_15152F70(rdram, ctx);
        goto after_1;
    // 0x150DBB14: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150DBB18: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x150DBB1C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150DBB20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DBB24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150DBB28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DBB2C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150DBB30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150DBB34: jal         0x151491F4
    // 0x150DBB38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_2;
    // 0x150DBB38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x150DBB3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBB40: lwc1        $f6, 0xC10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC10);
    // 0x150DBB44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBB48: lwc1        $f8, 0xC14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XC14);
    // 0x150DBB4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBB50: lwc1        $f10, 0xC18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC18);
    // 0x150DBB54: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x150DBB58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBB5C: lwc1        $f16, 0xC1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XC1C);
    // 0x150DBB60: sh          $t0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r8;
    // 0x150DBB64: addiu       $t8, $zero, -0x3D
    ctx->r24 = ADD32(0, -0X3D);
    // 0x150DBB68: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150DBB6C: addiu       $t2, $zero, -0x4A
    ctx->r10 = ADD32(0, -0X4A);
    // 0x150DBB70: addiu       $t3, $zero, -0x26
    ctx->r11 = ADD32(0, -0X26);
    // 0x150DBB74: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x150DBB78: addiu       $t5, $zero, 0x23
    ctx->r13 = ADD32(0, 0X23);
    // 0x150DBB7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBB80: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x150DBB84: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x150DBB88: sh          $t8, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r24;
    // 0x150DBB8C: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x150DBB90: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150DBB94: lwc1        $f18, 0xC20($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC20);
    // 0x150DBB98: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x150DBB9C: sh          $t2, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r10;
    // 0x150DBBA0: sh          $t3, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r11;
    // 0x150DBBA4: sh          $t4, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r12;
    // 0x150DBBA8: sh          $t5, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r13;
    // 0x150DBBAC: sh          $t6, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r14;
    // 0x150DBBB0: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x150DBBB4: sh          $t9, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r25;
    // 0x150DBBB8: sb          $t0, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r8;
    // 0x150DBBBC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150DBBC0: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x150DBBC4: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150DBBC8: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150DBBCC: addiu       $t4, $zero, 0xAE
    ctx->r12 = ADD32(0, 0XAE);
    // 0x150DBBD0: addiu       $t5, $zero, 0x73
    ctx->r13 = ADD32(0, 0X73);
    // 0x150DBBD4: addiu       $t6, $zero, 0x73
    ctx->r14 = ADD32(0, 0X73);
    // 0x150DBBD8: addiu       $t7, $zero, 0x87
    ctx->r15 = ADD32(0, 0X87);
    // 0x150DBBDC: addiu       $t8, $t8, 0x514
    ctx->r24 = ADD32(ctx->r24, 0X514);
    // 0x150DBBE0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150DBBE4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150DBBE8: sb          $t1, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r9;
    // 0x150DBBEC: sh          $t2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r10;
    // 0x150DBBF0: sh          $t3, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r11;
    // 0x150DBBF4: sh          $zero, 0x66($sp)
    MEM_H(0X66, ctx->r29) = 0;
    // 0x150DBBF8: sh          $t4, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r12;
    // 0x150DBBFC: sh          $t5, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r13;
    // 0x150DBC00: sh          $t6, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r14;
    // 0x150DBC04: sh          $t7, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r15;
    // 0x150DBC08: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x150DBC0C: sb          $t9, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r25;
    // 0x150DBC10: sb          $t0, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r8;
    // 0x150DBC14: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150DBC18: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x150DBC1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150DBC20: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x150DBC24: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x150DBC28: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x150DBC2C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x150DBC30: jal         0x15153298
    // 0x150DBC34: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_15153298(rdram, ctx);
        goto after_3;
    // 0x150DBC34: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150DBC38: b           L_150DBC50
    // 0x150DBC3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150DBC50;
    // 0x150DBC3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150DBC40:
    // 0x150DBC40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150DBC44: jal         0x15196438
    // 0x150DBC48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15196438(rdram, ctx);
        goto after_4;
    // 0x150DBC48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x150DBC4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150DBC50:
    // 0x150DBC50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150DBC54: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x150DBC58: jr          $ra
    // 0x150DBC5C: nop

    return;
    return;
    // 0x150DBC5C: nop

;}
RECOMP_FUNC void func_15192D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15192D48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15192D4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15192D50: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15192D54: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15192D58: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15192D5C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15192D60: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x15192D64: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15192D68: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15192D6C: bne         $t6, $zero, L_15192D7C
    if (ctx->r14 != 0) {
        // 0x15192D70: addiu       $a2, $zero, 0x18
        ctx->r6 = ADD32(0, 0X18);
            goto L_15192D7C;
    }
    // 0x15192D70: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15192D74: b           L_15192DE0
    // 0x15192D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15192DE0;
    // 0x15192D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15192D7C:
    // 0x15192D7C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15192D80: lbu         $t8, 0x3B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B);
    // 0x15192D84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15192D88: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x15192D8C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x15192D90: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x15192D94: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x15192D98: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15192D9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15192DA0: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x15192DA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15192DA8: sb          $t8, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r24;
    // 0x15192DAC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x15192DB0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15192DB4: jal         0x151491F4
    // 0x15192DB8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x15192DB8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_0:
    // 0x15192DBC: beq         $v0, $zero, L_15192DDC
    if (ctx->r2 == 0) {
        // 0x15192DC0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15192DDC;
    }
    // 0x15192DC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15192DC4: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15192DC8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15192DCC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x15192DD0: jal         0x10022EC0
    // 0x15192DD4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15192DD4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x15192DD8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
L_15192DDC:
    // 0x15192DDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15192DE0:
    // 0x15192DE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15192DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15192DE8: jr          $ra
    // 0x15192DEC: nop

    return;
    return;
    // 0x15192DEC: nop

;}
RECOMP_FUNC void func_150407F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150407F4: jr          $ra
    // 0x150407F8: nop

    return;
    return;
    // 0x150407F8: nop

;}
RECOMP_FUNC void func_1508EF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508EF80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1508EF84: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1508EF88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1508EF8C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1508EF90: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1508EF94: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1508EF98: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1508EF9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508EFA0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508EFA4: lwc1        $f4, -0x2380($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2380);
    // 0x1508EFA8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x1508EFAC: mul.s       $f20, $f14, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1508EFB0: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1508EFB4: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1508EFB8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1508EFBC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1508EFC0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x1508EFC4: jal         0x15047C00
    // 0x1508EFC8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x1508EFC8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1508EFCC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1508EFD0: jal         0x15047D60
    // 0x1508EFD4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1508EFD4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1508EFD8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1508EFDC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1508EFE0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1508EFE4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1508EFE8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1508EFEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x1508EFF0: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x1508EFF4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1508EFF8: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1508EFFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508F000: jal         0x15047D60
    // 0x1508F004: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1508F004: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x1508F008: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1508F00C: jal         0x15047C00
    // 0x1508F010: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x1508F010: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x1508F014: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1508F018: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1508F01C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1508F020: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1508F024: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x1508F028: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1508F02C: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x1508F030: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x1508F034: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1508F038: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1508F03C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1508F040: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1508F044: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1508F048: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x1508F04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1508F050: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1508F054: jr          $ra
    // 0x1508F058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1508F058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1508F05C: nop

;}
RECOMP_FUNC void func_1507C22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507C22C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1507C230: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1507C234: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1507C238: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1507C23C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1507C240: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1507C244: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1507C248: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1507C24C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1507C250: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1507C254: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1507C258: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1507C25C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1507C260: addiu       $s2, $s2, 0x121C
    ctx->r18 = ADD32(ctx->r18, 0X121C);
    // 0x1507C264: addiu       $s4, $s4, 0x3638
    ctx->r20 = ADD32(ctx->r20, 0X3638);
    // 0x1507C268: addiu       $s5, $s5, 0x3654
    ctx->r21 = ADD32(ctx->r21, 0X3654);
    // 0x1507C26C: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x1507C270: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x1507C274: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_1507C278:
    // 0x1507C278: beql        $t6, $zero, L_1507C2F8
    if (ctx->r14 == 0) {
        // 0x1507C27C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_0;
    // 0x1507C27C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_0:
    // 0x1507C280: lw          $t7, 0x25C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X25C);
    // 0x1507C284: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x1507C288: bnel        $t8, $zero, L_1507C2F8
    if (ctx->r24 != 0) {
        // 0x1507C28C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_1;
    // 0x1507C28C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_1:
    // 0x1507C290: beql        $s1, $zero, L_1507C2A8
    if (ctx->r17 == 0) {
        // 0x1507C294: lbu         $t0, 0x0($s4)
        ctx->r8 = MEM_BU(ctx->r20, 0X0);
            goto L_1507C2A8;
    }
    goto skip_2;
    // 0x1507C294: lbu         $t0, 0x0($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X0);
    skip_2:
    // 0x1507C298: lbu         $t9, 0x5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5);
    // 0x1507C29C: bnel        $s3, $t9, L_1507C2F8
    if (ctx->r19 != ctx->r25) {
        // 0x1507C2A0: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_3;
    // 0x1507C2A0: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_3:
    // 0x1507C2A4: lbu         $t0, 0x0($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X0);
L_1507C2A8:
    // 0x1507C2A8: beql        $t0, $zero, L_1507C2D0
    if (ctx->r8 == 0) {
        // 0x1507C2AC: lw          $a0, 0x2D0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2D0);
            goto L_1507C2D0;
    }
    goto skip_4;
    // 0x1507C2AC: lw          $a0, 0x2D0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2D0);
    skip_4:
    // 0x1507C2B0: lbu         $t1, 0x0($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X0);
    // 0x1507C2B4: bnel        $t1, $zero, L_1507C2D0
    if (ctx->r9 != 0) {
        // 0x1507C2B8: lw          $a0, 0x2D0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2D0);
            goto L_1507C2D0;
    }
    goto skip_5;
    // 0x1507C2B8: lw          $a0, 0x2D0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2D0);
    skip_5:
    // 0x1507C2BC: jal         0x150229E4
    // 0x1507C2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150229E4(rdram, ctx);
        goto after_0;
    // 0x1507C2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x1507C2C4: beql        $v0, $zero, L_1507C2F8
    if (ctx->r2 == 0) {
        // 0x1507C2C8: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_6;
    // 0x1507C2C8: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_6:
    // 0x1507C2CC: lw          $a0, 0x2D0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2D0);
L_1507C2D0:
    // 0x1507C2D0: beql        $a0, $zero, L_1507C2F8
    if (ctx->r4 == 0) {
        // 0x1507C2D4: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_7;
    // 0x1507C2D4: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_7:
    // 0x1507C2D8: lbu         $t2, 0x2FA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2FA);
    // 0x1507C2DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1507C2E0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x1507C2E4: beql        $t2, $zero, L_1507C2F8
    if (ctx->r10 == 0) {
        // 0x1507C2E8: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1507C2F8;
    }
    goto skip_8;
    // 0x1507C2E8: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_8:
    // 0x1507C2EC: jal         0x1507BDB0
    // 0x1507C2F0: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    func_1507BDB0(rdram, ctx);
        goto after_1;
    // 0x1507C2F0: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    after_1:
    // 0x1507C2F4: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_1507C2F8:
    // 0x1507C2F8: bnel        $s0, $s2, L_1507C278
    if (ctx->r16 != ctx->r18) {
        // 0x1507C2FC: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_1507C278;
    }
    goto skip_9;
    // 0x1507C2FC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x1507C300: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1507C304: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1507C308: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1507C30C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1507C310: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1507C314: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1507C318: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1507C31C: jr          $ra
    // 0x1507C320: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1507C320: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150ABD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB6F0:
    // 0x150ABD20: mul.s       $f3, $f19, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f3.fl = MUL_S(ctx->f19.fl, ctx->f26.fl);
    // 0x150ABD24: nop

    // 0x150ABD28: mul.s       $f4, $f20, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f27.fl);
    // 0x150ABD2C: nop

    // 0x150ABD30: mul.s       $f5, $f21, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f5.fl = MUL_S(ctx->f21.fl, ctx->f28.fl);
    // 0x150ABD34: sub.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f22.fl - ctx->f3.fl;
    // 0x150ABD38: sub.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150ABD3C: sub.s       $f3, $f3, $f5
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f5.fl;
    // 0x150ABD40: mul.s       $f4, $f19, $f19
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f4.fl = MUL_S(ctx->f19.fl, ctx->f19.fl);
    // 0x150ABD44: nop

    // 0x150ABD48: mul.s       $f5, $f20, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f5.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150ABD4C: add.s       $f4, $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f5.fl;
    // 0x150ABD50: mul.s       $f5, $f21, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x150ABD54: add.s       $f4, $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f5.fl;
    // 0x150ABD58: div.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f4.fl);
    // 0x150ABD5C: mul.s       $f9, $f3, $f19
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f9.fl = MUL_S(ctx->f3.fl, ctx->f19.fl);
    // 0x150ABD60: add.s       $f9, $f9, $f26
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f26.fl;
    // 0x150ABD64: mul.s       $f10, $f3, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f3.fl, ctx->f20.fl);
    // 0x150ABD68: add.s       $f10, $f10, $f27
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f27.fl;
    // 0x150ABD6C: mul.s       $f11, $f3, $f21
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f11.fl = MUL_S(ctx->f3.fl, ctx->f21.fl);
    // 0x150ABD70: add.s       $f11, $f11, $f28
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f28.fl;
    // 0x150ABD74: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x150ABD78: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
L_150ABD7C:
    // 0x150ABD7C: bne         $t0, $zero, L_150ABDA0
    if (ctx->r8 != 0) {
        // 0x150ABD80: nop
    
            goto L_150ABDA0;
    }
    // 0x150ABD80: nop

    // 0x150ABD84: lwc1        $f3, 0x218($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X218);
    // 0x150ABD88: lwc1        $f4, 0x21C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X21C);
    // 0x150ABD8C: lwc1        $f5, 0x220($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X220);
    // 0x150ABD90: lwc1        $f6, 0x20C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20C);
    // 0x150ABD94: lwc1        $f7, 0x210($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X210);
    // 0x150ABD98: j           L_150ABDE0
    // 0x150ABD9C: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
        goto L_150ABDE0;
    // 0x150ABD9C: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
L_150ABDA0:
    // 0x150ABDA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150ABDA4: bne         $t0, $at, L_150ABDC8
    if (ctx->r8 != ctx->r1) {
        // 0x150ABDA8: nop
    
            goto L_150ABDC8;
    }
    // 0x150ABDA8: nop

    // 0x150ABDAC: lwc1        $f3, 0x224($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X224);
    // 0x150ABDB0: lwc1        $f4, 0x228($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X228);
    // 0x150ABDB4: lwc1        $f5, 0x22C($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X22C);
    // 0x150ABDB8: lwc1        $f6, 0x218($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X218);
    // 0x150ABDBC: lwc1        $f7, 0x21C($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X21C);
    // 0x150ABDC0: j           L_150ABDE0
    // 0x150ABDC4: lwc1        $f8, 0x220($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X220);
        goto L_150ABDE0;
    // 0x150ABDC4: lwc1        $f8, 0x220($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X220);
L_150ABDC8:
    // 0x150ABDC8: lwc1        $f3, 0x20C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20C);
    // 0x150ABDCC: lwc1        $f4, 0x210($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X210);
    // 0x150ABDD0: lwc1        $f5, 0x214($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X214);
    // 0x150ABDD4: lwc1        $f6, 0x224($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X224);
    // 0x150ABDD8: lwc1        $f7, 0x228($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X228);
    // 0x150ABDDC: lwc1        $f8, 0x22C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X22C);
L_150ABDE0:
    // 0x150ABDE0: sub.s       $f3, $f3, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f6.fl;
    // 0x150ABDE4: sub.s       $f4, $f4, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f7.fl;
    // 0x150ABDE8: sub.s       $f5, $f5, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f8.fl;
    // 0x150ABDEC: sub.s       $f6, $f9, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f9.fl - ctx->f6.fl;
    // 0x150ABDF0: sub.s       $f7, $f10, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = ctx->f10.fl - ctx->f7.fl;
    // 0x150ABDF4: sub.s       $f8, $f11, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f11.fl - ctx->f8.fl;
    // 0x150ABDF8: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150ABDFC: nop

    // 0x150ABE00: mul.s       $f17, $f5, $f7
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f17.fl = MUL_S(ctx->f5.fl, ctx->f7.fl);
    // 0x150ABE04: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABE08: swc1        $f16, 0x230($t1)
    MEM_W(0X230, ctx->r9) = ctx->f16.u32l;
    // 0x150ABE0C: mul.s       $f16, $f5, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f5.fl, ctx->f6.fl);
    // 0x150ABE10: nop

    // 0x150ABE14: mul.s       $f17, $f3, $f8
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f17.fl = MUL_S(ctx->f3.fl, ctx->f8.fl);
    // 0x150ABE18: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABE1C: swc1        $f16, 0x234($t1)
    MEM_W(0X234, ctx->r9) = ctx->f16.u32l;
    // 0x150ABE20: mul.s       $f16, $f3, $f7
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f16.fl = MUL_S(ctx->f3.fl, ctx->f7.fl);
    // 0x150ABE24: nop

    // 0x150ABE28: mul.s       $f17, $f4, $f6
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f17.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150ABE2C: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABE30: swc1        $f16, 0x238($t1)
    MEM_W(0X238, ctx->r9) = ctx->f16.u32l;
    // 0x150ABE34: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x150ABE38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150ABE3C: bne         $t0, $at, L_150ABD7C
    if (ctx->r8 != ctx->r1) {
        // 0x150ABE40: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150ABD7C;
    }
    // 0x150ABE40: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150ABE44: lwc1        $f3, 0x230($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X230);
    // 0x150ABE48: lwc1        $f4, 0x234($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X234);
    // 0x150ABE4C: lwc1        $f5, 0x238($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X238);
    // 0x150ABE50: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150ABE54: abs.s       $f7, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f7.fl = fabsf(ctx->f4.fl);
    // 0x150ABE58: abs.s       $f8, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f8.fl = fabsf(ctx->f5.fl);
    // 0x150ABE5C: c.ole.s     $f6, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    c1cs = ctx->f6.fl <= ctx->f7.fl;
    // 0x150ABE60: bc1t        L_150ABE80
    if (c1cs) {
        // 0x150ABE64: nop
    
            goto L_150ABE80;
    }
    // 0x150ABE64: nop

    // 0x150ABE68: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150ABE6C: bc1fl       L_150ABE90
    if (!c1cs) {
        // 0x150ABE70: addiu       $t0, $zero, 0x8
        ctx->r8 = ADD32(0, 0X8);
            goto L_150ABE90;
    }
    goto skip_0;
    // 0x150ABE70: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    skip_0:
    // 0x150ABE74: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x150ABE78: j           L_150ABE90
    // 0x150ABE7C: nop

        goto L_150ABE90;
    // 0x150ABE7C: nop

L_150ABE80:
    // 0x150ABE80: c.ule.s     $f8, $f7
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 7);
    c1cs = ctx->f8.fl <= ctx->f7.fl;
    // 0x150ABE84: bc1fl       L_150ABE90
    if (!c1cs) {
        // 0x150ABE88: addiu       $t0, $zero, 0x8
        ctx->r8 = ADD32(0, 0X8);
            goto L_150ABE90;
    }
    goto skip_1;
    // 0x150ABE88: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    skip_1:
    // 0x150ABE8C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_150ABE90:
    // 0x150ABE90: add         $t0, $t0, $sp
    ctx->r8 = ADD32(ctx->r8, ctx->r29);
    // 0x150ABE94: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x150ABE98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150ABE9C: lwc1        $f3, 0x230($t0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r8, 0X230);
    // 0x150ABEA0: lwc1        $f4, 0x23C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X23C);
    // 0x150ABEA4: lwc1        $f5, 0x248($t0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r8, 0X248);
    // 0x150ABEA8: c.olt.s     $f3, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f3.fl < ctx->f6.fl;
    // 0x150ABEAC: bc1tl       L_150ABEB4
    if (c1cs) {
        // 0x150ABEB0: ori         $t1, $t1, 0x1
        ctx->r9 = ctx->r9 | 0X1;
            goto L_150ABEB4;
    }
    goto skip_2;
    // 0x150ABEB0: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    skip_2:
L_150ABEB4:
    // 0x150ABEB4: c.olt.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150ABEB8: bc1tl       L_150ABEC0
    if (c1cs) {
        // 0x150ABEBC: ori         $t1, $t1, 0x2
        ctx->r9 = ctx->r9 | 0X2;
            goto L_150ABEC0;
    }
    goto skip_3;
    // 0x150ABEBC: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    skip_3:
L_150ABEC0:
    // 0x150ABEC0: c.olt.s     $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f5.fl < ctx->f6.fl;
    // 0x150ABEC4: bc1tl       L_150ABECC
    if (c1cs) {
        // 0x150ABEC8: ori         $t1, $t1, 0x4
        ctx->r9 = ctx->r9 | 0X4;
            goto L_150ABECC;
    }
    goto skip_4;
    // 0x150ABEC8: ori         $t1, $t1, 0x4
    ctx->r9 = ctx->r9 | 0X4;
    skip_4:
L_150ABECC:
    // 0x150ABECC: beq         $t1, $zero, L_150ABEE4
    if (ctx->r9 == 0) {
        // 0x150ABED0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_150ABEE4;
    }
    // 0x150ABED0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150ABED4: beq         $t1, $at, L_150ABEE4
    if (ctx->r9 == ctx->r1) {
        // 0x150ABED8: nop
    
            goto L_150ABEE4;
    }
    // 0x150ABED8: nop

    // 0x150ABEDC: jr          $ra
    // 0x150ABEE0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    return;
    return;
    // 0x150ABEE0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
L_150ABEE4:
    // 0x150ABEE4: jr          $ra
    // 0x150ABEE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    return;
    return;
    // 0x150ABEE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150ABEEC: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x150ABEF0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150ABEF4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x150ABEF8: swc1        $f3, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
L_150ABEFC:
    // 0x150ABEFC: bne         $t0, $zero, L_150ABF20
    if (ctx->r8 != 0) {
        // 0x150ABF00: nop
    
            goto L_150ABF20;
    }
    // 0x150ABF00: nop

    // 0x150ABF04: lwc1        $f3, 0x218($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X218);
    // 0x150ABF08: lwc1        $f4, 0x21C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X21C);
    // 0x150ABF0C: lwc1        $f5, 0x220($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X220);
    // 0x150ABF10: lwc1        $f6, 0x20C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20C);
    // 0x150ABF14: lwc1        $f7, 0x210($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X210);
    // 0x150ABF18: j           L_150ABF60
    // 0x150ABF1C: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
        goto L_150ABF60;
    // 0x150ABF1C: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
L_150ABF20:
    // 0x150ABF20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150ABF24: bne         $t0, $at, L_150ABF48
    if (ctx->r8 != ctx->r1) {
        // 0x150ABF28: nop
    
            goto L_150ABF48;
    }
    // 0x150ABF28: nop

    // 0x150ABF2C: lwc1        $f3, 0x224($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X224);
    // 0x150ABF30: lwc1        $f4, 0x228($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X228);
    // 0x150ABF34: lwc1        $f5, 0x22C($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X22C);
    // 0x150ABF38: lwc1        $f6, 0x218($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X218);
    // 0x150ABF3C: lwc1        $f7, 0x21C($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X21C);
    // 0x150ABF40: j           L_150ABF60
    // 0x150ABF44: lwc1        $f8, 0x220($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X220);
        goto L_150ABF60;
    // 0x150ABF44: lwc1        $f8, 0x220($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X220);
L_150ABF48:
    // 0x150ABF48: lwc1        $f3, 0x20C($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20C);
    // 0x150ABF4C: lwc1        $f4, 0x210($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X210);
    // 0x150ABF50: lwc1        $f5, 0x214($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X214);
    // 0x150ABF54: lwc1        $f6, 0x224($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X224);
    // 0x150ABF58: lwc1        $f7, 0x228($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X228);
    // 0x150ABF5C: lwc1        $f8, 0x22C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X22C);
L_150ABF60:
    // 0x150ABF60: sub.s       $f9, $f6, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = ctx->f6.fl - ctx->f3.fl;
    // 0x150ABF64: sub.s       $f10, $f7, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f7.fl - ctx->f4.fl;
    // 0x150ABF68: sub.s       $f11, $f8, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = ctx->f8.fl - ctx->f5.fl;
    // 0x150ABF6C: mul.s       $f16, $f9, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f9.fl, ctx->f26.fl);
    // 0x150ABF70: nop

    // 0x150ABF74: mul.s       $f17, $f10, $f27
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f17.fl = MUL_S(ctx->f10.fl, ctx->f27.fl);
    // 0x150ABF78: add.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f17.fl;
    // 0x150ABF7C: mul.s       $f17, $f11, $f28
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f17.fl = MUL_S(ctx->f11.fl, ctx->f28.fl);
    // 0x150ABF80: add.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f17.fl;
    // 0x150ABF84: mul.s       $f17, $f9, $f3
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f17.fl = MUL_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150ABF88: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABF8C: mul.s       $f17, $f10, $f4
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f17.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150ABF90: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABF94: mul.s       $f17, $f11, $f5
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f17.fl = MUL_S(ctx->f11.fl, ctx->f5.fl);
    // 0x150ABF98: sub.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f17.fl;
    // 0x150ABF9C: mul.s       $f17, $f9, $f9
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f17.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x150ABFA0: nop

    // 0x150ABFA4: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150ABFA8: add.s       $f17, $f17, $f6
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f6.fl;
    // 0x150ABFAC: mul.s       $f6, $f11, $f11
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f6.fl = MUL_S(ctx->f11.fl, ctx->f11.fl);
    // 0x150ABFB0: add.s       $f17, $f17, $f6
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f17.fl = ctx->f17.fl + ctx->f6.fl;
    // 0x150ABFB4: div.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f17.fl);
    // 0x150ABFB8: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x150ABFBC: c.olt.s     $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    c1cs = ctx->f16.fl < ctx->f17.fl;
    // 0x150ABFC0: bc1tl       L_150ABFDC
    if (c1cs) {
        // 0x150ABFC4: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_150ABFDC;
    }
    goto skip_5;
    // 0x150ABFC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_5:
    // 0x150ABFC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150ABFCC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x150ABFD0: c.ule.s     $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    c1cs = ctx->f16.fl <= ctx->f17.fl;
    // 0x150ABFD4: bc1fl       L_150ABFDC
    if (!c1cs) {
        // 0x150ABFD8: mov.s       $f16, $f17
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    ctx->f16.fl = ctx->f17.fl;
            goto L_150ABFDC;
    }
    goto skip_6;
    // 0x150ABFD8: mov.s       $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    ctx->f16.fl = ctx->f17.fl;
    skip_6:
L_150ABFDC:
    // 0x150ABFDC: mul.s       $f17, $f16, $f9
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f17.fl = MUL_S(ctx->f16.fl, ctx->f9.fl);
    // 0x150ABFE0: add.s       $f3, $f3, $f17
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f17.fl;
    // 0x150ABFE4: mul.s       $f17, $f16, $f10
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f17.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x150ABFE8: add.s       $f4, $f4, $f17
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f17.fl;
    // 0x150ABFEC: mul.s       $f17, $f16, $f11
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f17.fl = MUL_S(ctx->f16.fl, ctx->f11.fl);
    // 0x150ABFF0: add.s       $f5, $f5, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f17.fl;
    // 0x150ABFF4: sub.s       $f16, $f3, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f3.fl - ctx->f26.fl;
    // 0x150ABFF8: mul.s       $f16, $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150ABFFC: sub.s       $f17, $f4, $f27
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f17.fl = ctx->f4.fl - ctx->f27.fl;
    // 0x150AC000: mul.s       $f17, $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f17.fl = MUL_S(ctx->f17.fl, ctx->f17.fl);
    // 0x150AC004: add.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f17.fl;
    // 0x150AC008: sub.s       $f17, $f5, $f28
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f17.fl = ctx->f5.fl - ctx->f28.fl;
    // 0x150AC00C: mul.s       $f17, $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f17.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f17.fl = MUL_S(ctx->f17.fl, ctx->f17.fl);
    // 0x150AC010: add.s       $f16, $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f17.fl;
    // 0x150AC014: sqrt.s      $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = sqrtf(ctx->f16.fl);
    // 0x150AC018: lwc1        $f17, 0x254($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X254);
    // 0x150AC01C: c.ult.s     $f16, $f17
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 17);
    c1cs = ctx->f16.fl < ctx->f17.fl;
    // 0x150AC020: bc1f        L_150AC038
    if (!c1cs) {
        // 0x150AC024: nop
    
            goto L_150AC038;
    }
    // 0x150AC024: nop

    // 0x150AC028: swc1        $f16, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f16.u32l;
    // 0x150AC02C: swc1        $f3, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x150AC030: swc1        $f4, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->f4.u32l;
    // 0x150AC034: swc1        $f5, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
L_150AC038:
    // 0x150AC038: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150AC03C: bne         $t0, $at, L_150ABEFC
    if (ctx->r8 != ctx->r1) {
        // 0x150AC040: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150ABEFC;
    }
    // 0x150AC040: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150AC044: lwc1        $f3, 0x254($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X254);
    // 0x150AC048: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150AC04C: c.ult.s     $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl < ctx->f4.fl;
    // 0x150AC050: bc1f        L_150AB6F0
    if (!c1cs) {
        // 0x150AC054: nop
    
        // 0x150AC054: nop

    static_5_150AB6F0(rdram, ctx);
        return;
    }
    // 0x150AC054: nop

    // 0x150AC058: lwc1        $f5, 0x258($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X258);
    // 0x150AC05C: lwc1        $f6, 0x25C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X25C);
    // 0x150AC060: lwc1        $f7, 0x260($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X260);
    // 0x150AC064: sub.s       $f9, $f26, $f5
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f9.fl = ctx->f26.fl - ctx->f5.fl;
    // 0x150AC068: sub.s       $f10, $f27, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f27.fl - ctx->f6.fl;
    // 0x150AC06C: sub.s       $f11, $f28, $f7
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f11.fl = ctx->f28.fl - ctx->f7.fl;
    // 0x150AC070: mul.s       $f5, $f9, $f9
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f5.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x150AC074: nop

    // 0x150AC078: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150AC07C: add.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f6.fl;
    // 0x150AC080: mul.s       $f6, $f11, $f11
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f6.fl = MUL_S(ctx->f11.fl, ctx->f11.fl);
    // 0x150AC084: add.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = ctx->f5.fl + ctx->f6.fl;
    // 0x150AC088: sqrt.s      $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = sqrtf(ctx->f5.fl);
    // 0x150AC08C: sub.s       $f6, $f4, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f3.fl;
    // 0x150AC090: div.s       $f5, $f6, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = DIV_S(ctx->f6.fl, ctx->f5.fl);
    // 0x150AC094: mul.s       $f9, $f9, $f5
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f5.fl);
    // 0x150AC098: nop

    // 0x150AC09C: mul.s       $f10, $f10, $f5
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f5.fl);
    // 0x150AC0A0: nop

    // 0x150AC0A4: mul.s       $f11, $f11, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f5.fl);
    // 0x150AC0A8: nop

    // 0x150AC0AC: mul.s       $f5, $f9, $f13
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f5.fl = MUL_S(ctx->f9.fl, ctx->f13.fl);
    // 0x150AC0B0: nop

    // 0x150AC0B4: mul.s       $f6, $f11, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f11.fl, ctx->f12.fl);
    // 0x150AC0B8: sub.s       $f5, $f5, $f6
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f6.fl;
    // 0x150AC0BC: mul.s       $f6, $f9, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f9.fl, ctx->f12.fl);
    // 0x150AC0C0: nop

    // 0x150AC0C4: mul.s       $f11, $f11, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f13.fl);
    // 0x150AC0C8: add.s       $f11, $f11, $f6
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f6.fl;
    // 0x150AC0CC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150AC0D0: lwc1        $f7, 0x38($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150AC0D4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150AC0D8: add.s       $f6, $f6, $f5
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f5.fl;
    // 0x150AC0DC: add.s       $f7, $f7, $f10
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f10.fl;
    // 0x150AC0E0: add.s       $f8, $f8, $f11
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f11.fl;
    // 0x150AC0E4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x150AC0E8: swc1        $f7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x150AC0EC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x150AC0F0: j           L_150AC1B4
    // 0x150AC0F4: nop

        goto L_150AC1B4;
    // 0x150AC0F4: nop

    // 0x150AC0F8: lwc1        $f9, 0x34($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X34);
    // 0x150AC0FC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150AC100: lwc1        $f11, 0x3C($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150AC104: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150AC108: mul.s       $f6, $f6, $f15
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f15.fl);
    // 0x150AC10C: add.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f6.fl;
    // 0x150AC110: mul.s       $f8, $f19, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f19.fl, ctx->f26.fl);
    // 0x150AC114: sub.s       $f6, $f22, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x150AC118: mul.s       $f8, $f20, $f27
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f27.fl);
    // 0x150AC11C: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150AC120: mul.s       $f8, $f21, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f21.fl, ctx->f28.fl);
    // 0x150AC124: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150AC128: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150AC12C: c.ole.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x150AC130: bc1t        L_150AB6F0
    if (c1cs) {
        // 0x150AC134: div.s       $f7, $f20, $f15
        CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f7.fl = DIV_S(ctx->f20.fl, ctx->f15.fl);
        // 0x150AC134: div.s       $f7, $f20, $f15
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f7.fl = DIV_S(ctx->f20.fl, ctx->f15.fl);
    static_5_150AB6F0(rdram, ctx);
        return;
    }
    // 0x150AC134: div.s       $f7, $f20, $f15
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f7.fl = DIV_S(ctx->f20.fl, ctx->f15.fl);
    // 0x150AC138: lui         $t0, 0xBE4C
    ctx->r8 = S32(0XBE4C << 16);
    // 0x150AC13C: ori         $t0, $t0, 0xCCCD
    ctx->r8 = ctx->r8 | 0XCCCD;
    // 0x150AC140: mtc1        $t0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r8;
    // 0x150AC144: c.ult.s     $f7, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f7.fl < ctx->f3.fl;
    // 0x150AC148: bc1f        L_150AC160
    if (!c1cs) {
        // 0x150AC14C: lwc1        $f4, 0x50($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
            goto L_150AC160;
    }
    // 0x150AC14C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150AC150: c.ole.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x150AC154: bc1t        L_150AC160
    if (c1cs) {
        // 0x150AC158: nop
    
            goto L_150AC160;
    }
    // 0x150AC158: nop

    // 0x150AC15C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_150AC160:
    // 0x150AC160: div.s       $f14, $f6, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150AC164: mul.s       $f3, $f19, $f13
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f3.fl = MUL_S(ctx->f19.fl, ctx->f13.fl);
    // 0x150AC168: nop

    // 0x150AC16C: mul.s       $f4, $f21, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f21.fl, ctx->f12.fl);
    // 0x150AC170: sub.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150AC174: mul.s       $f4, $f19, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f19.fl, ctx->f12.fl);
    // 0x150AC178: nop

    // 0x150AC17C: mul.s       $f5, $f21, $f13
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f5.fl = MUL_S(ctx->f21.fl, ctx->f13.fl);
    // 0x150AC180: add.s       $f4, $f5, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f5.fl + ctx->f4.fl;
    // 0x150AC184: mul.s       $f6, $f14, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f3.fl);
    // 0x150AC188: nop

    // 0x150AC18C: mul.s       $f7, $f14, $f20
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f7.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x150AC190: nop

    // 0x150AC194: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x150AC198: nop

    // 0x150AC19C: add.s       $f6, $f6, $f9
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f9.fl;
    // 0x150AC1A0: add.s       $f7, $f7, $f10
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f10.fl;
    // 0x150AC1A4: add.s       $f8, $f8, $f11
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f11.fl;
    // 0x150AC1A8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x150AC1AC: swc1        $f7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x150AC1B0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_150AC1B4:
    // 0x150AC1B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150AC1B8: sw          $t1, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r9;
    // 0x150AC1BC: lui         $t0, 0x150B
    ctx->r8 = S32(0X150B << 16);
    // 0x150AC1C0: addiu       $t0, $t0, -0x4910
    ctx->r8 = ADD32(ctx->r8, -0X4910);
;}
RECOMP_FUNC void func_151D10C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D10C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D10C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D10CC: jal         0x151D10E4
    // 0x151D10D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151D10E4(rdram, ctx);
        goto after_0;
    // 0x151D10D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x151D10D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D10D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D10DC: jr          $ra
    // 0x151D10E0: nop

    return;
    return;
    // 0x151D10E0: nop

;}
RECOMP_FUNC void func_100088F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100088F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x100088F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x100088F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x100088FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x10008900: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x10008904: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x10008908: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x1000890C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x10008910: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x10008914: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10008918: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1000891C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x10008920: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x10008924: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_10008928:
    // 0x10008928: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x1000892C: and         $t8, $t7, $s2
    ctx->r24 = ctx->r15 & ctx->r18;
    // 0x10008930: beql        $t8, $zero, L_10008960
    if (ctx->r24 == 0) {
        // 0x10008934: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_10008960;
    }
    goto skip_0;
    // 0x10008934: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x10008938: beq         $s3, $zero, L_10008954
    if (ctx->r19 == 0) {
        // 0x1000893C: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_10008954;
    }
    // 0x1000893C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x10008940: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x10008944: jal         0x1000862C
    // 0x10008948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1000862C(rdram, ctx);
        goto after_0;
    // 0x10008948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x1000894C: b           L_10008960
    // 0x10008950: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_10008960;
    // 0x10008950: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_10008954:
    // 0x10008954: jal         0x100085F8
    // 0x10008958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_100085F8(rdram, ctx);
        goto after_1;
    // 0x10008958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x1000895C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_10008960:
    // 0x10008960: bnel        $s0, $s4, L_10008928
    if (ctx->r16 != ctx->r20) {
        // 0x10008964: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_10008928;
    }
    goto skip_1;
    // 0x10008964: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_1:
    // 0x10008968: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1000896C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10008970: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x10008974: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x10008978: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1000897C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x10008980: jr          $ra
    // 0x10008984: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x10008984: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150484A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150484A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150484A4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150484A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150484AC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x150484B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150484B4: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x150484B8: nop

    // 0x150484BC: bc1fl       L_150484E8
    if (!c1cs) {
        // 0x150484C0: c.eq.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
            goto L_150484E8;
    }
    goto skip_0;
    // 0x150484C0: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    skip_0:
    // 0x150484C4: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    // 0x150484C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150484CC: bc1f        L_150484DC
    if (!c1cs) {
        // 0x150484D0: nop
    
            goto L_150484DC;
    }
    // 0x150484D0: nop

    // 0x150484D4: b           L_150485C4
    // 0x150484D8: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
        goto L_150485C4;
    // 0x150484D8: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_150484DC:
    // 0x150484DC: b           L_150485C4
    // 0x150484E0: lwc1        $f2, -0x7220($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7220);
        goto L_150485C4;
    // 0x150484E0: lwc1        $f2, -0x7220($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7220);
    // 0x150484E4: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
L_150484E8:
    // 0x150484E8: nop

    // 0x150484EC: bc1f        L_15048518
    if (!c1cs) {
        // 0x150484F0: nop
    
            goto L_15048518;
    }
    // 0x150484F0: nop

    // 0x150484F4: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x150484F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150484FC: bc1f        L_15048510
    if (!c1cs) {
        // 0x15048500: nop
    
            goto L_15048510;
    }
    // 0x15048500: nop

    // 0x15048504: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048508: b           L_150485C4
    // 0x1504850C: lwc1        $f2, -0x721C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X721C);
        goto L_150485C4;
    // 0x1504850C: lwc1        $f2, -0x721C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X721C);
L_15048510:
    // 0x15048510: b           L_150485C4
    // 0x15048514: lwc1        $f2, -0x7218($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7218);
        goto L_150485C4;
    // 0x15048514: lwc1        $f2, -0x7218($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X7218);
L_15048518:
    // 0x15048518: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x1504851C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x15048520: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15048524: jal         0x10026530
    // 0x15048528: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x15048528: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x1504852C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15048530: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15048534: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x15048538: nop

    // 0x1504853C: bc1fl       L_15048578
    if (!c1cs) {
        // 0x15048540: div.s       $f12, $f20, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f2.fl);
            goto L_15048578;
    }
    goto skip_1;
    // 0x15048540: div.s       $f12, $f20, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f2.fl);
    skip_1:
    // 0x15048544: jal         0x15048360
    // 0x15048548: div.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    func_15048360(rdram, ctx);
        goto after_1;
    // 0x15048548: div.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    after_1:
    // 0x1504854C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15048550: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15048554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048558: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x1504855C: nop

    // 0x15048560: bc1fl       L_150485C8
    if (!c1cs) {
        // 0x15048564: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_150485C8;
    }
    goto skip_2;
    // 0x15048564: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x15048568: lwc1        $f8, -0x7214($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7214);
    // 0x1504856C: b           L_150485C4
    // 0x15048570: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
        goto L_150485C4;
    // 0x15048570: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15048574: div.s       $f12, $f20, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f2.fl);
L_15048578:
    // 0x15048578: jal         0x15048360
    // 0x1504857C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_15048360(rdram, ctx);
        goto after_2;
    // 0x1504857C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x15048580: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15048584: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15048588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504858C: lwc1        $f10, -0x7210($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7210);
    // 0x15048590: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x15048594: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048598: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1504859C: bc1f        L_150485AC
    if (!c1cs) {
        // 0x150485A0: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_150485AC;
    }
    // 0x150485A0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x150485A4: lwc1        $f18, -0x720C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X720C);
    // 0x150485A8: sub.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f12.fl;
L_150485AC:
    // 0x150485AC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x150485B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150485B4: bc1fl       L_150485C8
    if (!c1cs) {
        // 0x150485B8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_150485C8;
    }
    goto skip_3;
    // 0x150485B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x150485BC: lwc1        $f4, -0x7208($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7208);
    // 0x150485C0: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_150485C4:
    // 0x150485C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_150485C8:
    // 0x150485C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150485CC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150485D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150485D4: jr          $ra
    // 0x150485D8: nop

    return;
    return;
    // 0x150485D8: nop

;}
RECOMP_FUNC void func_150EA904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA904: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150EA908: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150EA90C: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x150EA910: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x150EA914: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x150EA918: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150EA91C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150EA920: lbu         $t8, 0x72($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X72);
    // 0x150EA924: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x150EA928: bne         $t8, $at, L_150EA93C
    if (ctx->r24 != ctx->r1) {
        // 0x150EA92C: nop
    
            goto L_150EA93C;
    }
    // 0x150EA92C: nop

    // 0x150EA930: lbu         $t0, 0x73($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X73);
    // 0x150EA934: ori         $t1, $t0, 0x3
    ctx->r9 = ctx->r8 | 0X3;
    // 0x150EA938: sb          $t1, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r9;
L_150EA93C:
    // 0x150EA93C: jr          $ra
    // 0x150EA940: nop

    return;
    return;
    // 0x150EA940: nop

;}
RECOMP_FUNC void func_1507B958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B958: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B95C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507B960: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507B964: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507B968: sb          $t6, 0xB0($t7)
    MEM_B(0XB0, ctx->r15) = ctx->r14;
    // 0x1507B96C: jr          $ra
    // 0x1507B970: nop

    return;
    return;
    // 0x1507B970: nop

;}
RECOMP_FUNC void func_150B765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B765C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B7660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B7664: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x150B7668: jal         0x150B76BC
    // 0x150B766C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150B76BC(rdram, ctx);
        goto after_0;
    // 0x150B766C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x150B7670: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B7674: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B7678: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
    // 0x150B767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B7680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B7684: jr          $ra
    // 0x150B7688: nop

    return;
    return;
    // 0x150B7688: nop

;}
RECOMP_FUNC void func_1001ED6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001ED6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001ED70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001ED74: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001ED78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001ED7C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1001ED80: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001ED84: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1001ED88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001ED8C: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x1001ED90: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x1001ED94: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1001ED98: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x1001ED9C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1001EDA0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1001EDA4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1001EDA8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1001EDAC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EDB0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001EDB4: lbu         $t5, 0x8($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X8);
    // 0x1001EDB8: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1001EDBC: bne         $at, $zero, L_1001EDCC
    if (ctx->r1 != 0) {
        // 0x1001EDC0: nop
    
            goto L_1001EDCC;
    }
    // 0x1001EDC0: nop

    // 0x1001EDC4: b           L_1001F27C
    // 0x1001EDC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001F27C;
    // 0x1001EDC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001EDCC:
    // 0x1001EDCC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001EDD0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x1001EDD4: beq         $at, $zero, L_1001F02C
    if (ctx->r1 == 0) {
        // 0x1001EDD8: nop
    
            goto L_1001F02C;
    }
    // 0x1001EDD8: nop

    // 0x1001EDDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1001EDE0: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001EDE4: addu        $at, $at, $t6
    gpr jr_addend_1001EDEC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1001EDE8: lw          $t6, -0x385C($at)
    ctx->r14 = ADD32(ctx->r1, -0X385C);
    // 0x1001EDEC: jr          $t6
    // 0x1001EDF0: nop

    switch (jr_addend_1001EDEC >> 2) {
        case 0: goto L_1001EDF4; break;
        case 1: goto L_1001EE50; break;
        case 2: goto L_1001EEAC; break;
        case 3: goto L_1001EED8; break;
        case 4: goto L_1001EF04; break;
        case 5: goto L_1001EF30; break;
        case 6: goto L_1001EF94; break;
        case 7: goto L_1001EFB0; break;
        default: switch_error(__func__, 0x1001EDEC, 0x8002C7A4);
    }
    // 0x1001EDF0: nop

L_1001EDF4:
    // 0x1001EDF4: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x1001EDF8: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x1001EDFC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001EE00: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x1001EE04: lw          $t9, 0x54($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X54);
    // 0x1001EE08: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EE0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001EE10: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001EE14: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x1001EE18: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1001EE1C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x1001EE20: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1001EE24: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x1001EE28: mflo        $t0
    ctx->r8 = lo;
    // 0x1001EE2C: nop

    // 0x1001EE30: nop

    // 0x1001EE34: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x1001EE38: mflo        $t1
    ctx->r9 = lo;
    // 0x1001EE3C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x1001EE40: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x1001EE44: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x1001EE48: b           L_1001F02C
    // 0x1001EE4C: nop

        goto L_1001F02C;
    // 0x1001EE4C: nop

L_1001EE50:
    // 0x1001EE50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001EE54: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001EE58: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001EE5C: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x1001EE60: lw          $t0, 0x54($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X54);
    // 0x1001EE64: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EE68: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001EE6C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1001EE70: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1001EE74: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x1001EE78: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x1001EE7C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1001EE80: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1001EE84: mflo        $t1
    ctx->r9 = lo;
    // 0x1001EE88: nop

    // 0x1001EE8C: nop

    // 0x1001EE90: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x1001EE94: mflo        $t4
    ctx->r12 = lo;
    // 0x1001EE98: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x1001EE9C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x1001EEA0: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x1001EEA4: b           L_1001F02C
    // 0x1001EEA8: nop

        goto L_1001F02C;
    // 0x1001EEA8: nop

L_1001EEAC:
    // 0x1001EEAC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EEB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001EEB4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001EEB8: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x1001EEBC: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x1001EEC0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x1001EEC4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1001EEC8: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x1001EECC: sh          $t7, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r15;
    // 0x1001EED0: b           L_1001F02C
    // 0x1001EED4: nop

        goto L_1001F02C;
    // 0x1001EED4: nop

L_1001EED8:
    // 0x1001EED8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EEDC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001EEE0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001EEE4: lw          $t5, 0x4($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X4);
    // 0x1001EEE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1001EEEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1001EEF0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x1001EEF4: addu        $t4, $t5, $t0
    ctx->r12 = ADD32(ctx->r13, ctx->r8);
    // 0x1001EEF8: sh          $t6, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r14;
    // 0x1001EEFC: b           L_1001F02C
    // 0x1001EF00: nop

        goto L_1001F02C;
    // 0x1001EF00: nop

L_1001EF04:
    // 0x1001EF04: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EF08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001EF0C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001EF10: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x1001EF14: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x1001EF18: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x1001EF1C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1001EF20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1001EF24: sh          $t1, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r9;
    // 0x1001EF28: b           L_1001F02C
    // 0x1001EF2C: nop

        goto L_1001F02C;
    // 0x1001EF2C: nop

L_1001EF30:
    // 0x1001EF30: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001EF34: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1001EF38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1001EF3C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1001EF40: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x1001EF44: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x1001EF48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001EF4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001EF50: lw          $t6, 0x54($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X54);
    // 0x1001EF54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001EF58: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EF5C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1001EF60: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1001EF64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001EF68: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x1001EF6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001EF70: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x1001EF74: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x1001EF78: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1001EF7C: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x1001EF80: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1001EF84: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1001EF88: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x1001EF8C: b           L_1001F02C
    // 0x1001EF90: nop

        goto L_1001F02C;
    // 0x1001EF90: nop

L_1001EF94:
    // 0x1001EF94: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001EF98: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1001EF9C: nop

    // 0x1001EFA0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1001EFA4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x1001EFA8: b           L_1001F02C
    // 0x1001EFAC: nop

        goto L_1001F02C;
    // 0x1001EFAC: nop

L_1001EFB0:
    // 0x1001EFB0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EFB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001EFB8: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x1001EFBC: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1001EFC0: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x1001EFC4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1001EFC8: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x1001EFCC: lw          $t2, 0x20($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X20);
    // 0x1001EFD0: beq         $t2, $zero, L_1001F024
    if (ctx->r10 == 0) {
        // 0x1001EFD4: nop
    
            goto L_1001F024;
    }
    // 0x1001EFD4: nop

    // 0x1001EFD8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EFDC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001EFE0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001EFE4: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x1001EFE8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x1001EFEC: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x1001EFF0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1001EFF4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1001EFF8: lw          $t5, 0x20($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X20);
    // 0x1001EFFC: sh          $t3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r11;
    // 0x1001F000: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F004: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001F008: lw          $t4, 0x4($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X4);
    // 0x1001F00C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x1001F010: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x1001F014: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1001F018: addu        $t1, $t4, $t7
    ctx->r9 = ADD32(ctx->r12, ctx->r15);
    // 0x1001F01C: jal         0x1001CD54
    // 0x1001F020: lw          $a0, 0x20($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x1001F020: lw          $a0, 0x20($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X20);
    after_0:
L_1001F024:
    // 0x1001F024: b           L_1001F02C
    // 0x1001F028: nop

        goto L_1001F02C;
    // 0x1001F028: nop

L_1001F02C:
    // 0x1001F02C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F030: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001F034: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x1001F038: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x1001F03C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x1001F040: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1001F044: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x1001F048: addu        $t5, $t9, $t3
    ctx->r13 = ADD32(ctx->r25, ctx->r11);
    // 0x1001F04C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1001F050: addiu       $t4, $t2, -0x10
    ctx->r12 = ADD32(ctx->r10, -0X10);
    // 0x1001F054: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x1001F058: bne         $at, $zero, L_1001F088
    if (ctx->r1 != 0) {
        // 0x1001F05C: nop
    
            goto L_1001F088;
    }
    // 0x1001F05C: nop

    // 0x1001F060: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F064: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001F068: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x1001F06C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001F070: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1001F074: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x1001F078: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1001F07C: addiu       $t0, $t1, -0x10
    ctx->r8 = ADD32(ctx->r9, -0X10);
    // 0x1001F080: addu        $t8, $t9, $t5
    ctx->r24 = ADD32(ctx->r25, ctx->r13);
    // 0x1001F084: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
L_1001F088:
    // 0x1001F088: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F08C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001F090: lw          $t6, 0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X4);
    // 0x1001F094: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x1001F098: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x1001F09C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x1001F0A0: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x1001F0A4: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x1001F0A8: lw          $t3, 0x0($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X0);
    // 0x1001F0AC: addiu       $t5, $t9, -0x8
    ctx->r13 = ADD32(ctx->r25, -0X8);
    // 0x1001F0B0: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x1001F0B4: bne         $at, $zero, L_1001F0E4
    if (ctx->r1 != 0) {
        // 0x1001F0B8: nop
    
            goto L_1001F0E4;
    }
    // 0x1001F0B8: nop

    // 0x1001F0BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F0C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001F0C4: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1001F0C8: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x1001F0CC: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x1001F0D0: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x1001F0D4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1001F0D8: addiu       $t4, $t8, -0x8
    ctx->r12 = ADD32(ctx->r24, -0X8);
    // 0x1001F0DC: addu        $t2, $t6, $t7
    ctx->r10 = ADD32(ctx->r14, ctx->r15);
    // 0x1001F0E0: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
L_1001F0E4:
    // 0x1001F0E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F0E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001F0EC: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x1001F0F0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x1001F0F4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x1001F0F8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1001F0FC: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x1001F100: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001F104: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x1001F108: sltu        $at, $t1, $t6
    ctx->r1 = ctx->r9 < ctx->r14 ? 1 : 0;
    // 0x1001F10C: bne         $at, $zero, L_1001F13C
    if (ctx->r1 != 0) {
        // 0x1001F110: nop
    
            goto L_1001F13C;
    }
    // 0x1001F110: nop

    // 0x1001F114: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F118: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001F11C: lw          $t4, 0x4($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X4);
    // 0x1001F120: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x1001F124: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x1001F128: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1001F12C: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x1001F130: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x1001F134: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x1001F138: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
L_1001F13C:
    // 0x1001F13C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F140: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001F144: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x1001F148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1001F14C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1001F150: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1001F154: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x1001F158: lw          $t4, 0x24($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X24);
    // 0x1001F15C: beq         $t4, $zero, L_1001F26C
    if (ctx->r12 == 0) {
        // 0x1001F160: nop
    
            goto L_1001F26C;
    }
    // 0x1001F160: nop

    // 0x1001F164: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001F168: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1001F16C: beq         $t9, $at, L_1001F210
    if (ctx->r25 == ctx->r1) {
        // 0x1001F170: nop
    
            goto L_1001F210;
    }
    // 0x1001F170: nop

    // 0x1001F174: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F178: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001F17C: lw          $t8, 0x4($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X4);
    // 0x1001F180: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x1001F184: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x1001F188: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x1001F18C: addu        $t6, $t8, $t0
    ctx->r14 = ADD32(ctx->r24, ctx->r8);
    // 0x1001F190: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x1001F194: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1001F198: subu        $t2, $t1, $t7
    ctx->r10 = SUB32(ctx->r9, ctx->r15);
    // 0x1001F19C: beq         $t2, $zero, L_1001F204
    if (ctx->r10 == 0) {
        // 0x1001F1A0: nop
    
            goto L_1001F204;
    }
    // 0x1001F1A0: nop

    // 0x1001F1A4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F1A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001F1AC: lw          $t9, 0x4($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X4);
    // 0x1001F1B0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1001F1B4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x1001F1B8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1001F1BC: addu        $t8, $t9, $t5
    ctx->r24 = ADD32(ctx->r25, ctx->r13);
    // 0x1001F1C0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x1001F1C4: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x1001F1C8: subu        $t1, $t0, $t6
    ctx->r9 = SUB32(ctx->r8, ctx->r14);
    // 0x1001F1CC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1001F1D0: bgez        $t1, L_1001F1E8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1001F1D4: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1001F1E8;
    }
    // 0x1001F1D4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001F1D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1001F1DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001F1E0: nop

    // 0x1001F1E4: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_1001F1E8:
    // 0x1001F1E8: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x1001F1EC: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001F1F0: lwc1        $f16, -0x383C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X383C);
    // 0x1001F1F4: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1001F1F8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1001F1FC: b           L_1001F210
    // 0x1001F200: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
        goto L_1001F210;
    // 0x1001F200: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_1001F204:
    // 0x1001F204: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1001F208: nop

    // 0x1001F20C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_1001F210:
    // 0x1001F210: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F214: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001F218: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x1001F21C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x1001F220: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x1001F224: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1001F228: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x1001F22C: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x1001F230: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001F234: subu        $t6, $t5, $t0
    ctx->r14 = SUB32(ctx->r13, ctx->r8);
    // 0x1001F238: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1001F23C: bgez        $t6, L_1001F254
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1001F240: cvt.s.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1001F254;
    }
    // 0x1001F240: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1001F244: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1001F248: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1001F24C: nop

    // 0x1001F250: add.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f10.fl;
L_1001F254:
    // 0x1001F254: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001F258: lwc1        $f4, -0x3838($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3838);
    // 0x1001F25C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1001F260: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1001F264: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1001F268: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
L_1001F26C:
    // 0x1001F26C: b           L_1001F27C
    // 0x1001F270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001F27C;
    // 0x1001F270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1001F274: b           L_1001F27C
    // 0x1001F278: nop

        goto L_1001F27C;
    // 0x1001F278: nop

L_1001F27C:
    // 0x1001F27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001F280: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001F284: jr          $ra
    // 0x1001F288: nop

    return;
    return;
    // 0x1001F288: nop

;}
RECOMP_FUNC void func_15142C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15142C10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x15142C14: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x15142C18: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15142C1C: addiu       $t0, $t0, -0x2E38
    ctx->r8 = ADD32(ctx->r8, -0X2E38);
    // 0x15142C20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15142C24: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x15142C28: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15142C2C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15142C30: bne         $a1, $t6, L_15142C68
    if (ctx->r5 != ctx->r14) {
        // 0x15142C34: lui         $t3, 0xFB00
        ctx->r11 = S32(0XFB00 << 16);
            goto L_15142C68;
    }
    // 0x15142C34: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x15142C38: lh          $t7, -0x2E36($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2E36);
    // 0x15142C3C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15142C40: bnel        $a2, $t7, L_15142C6C
    if (ctx->r6 != ctx->r15) {
        // 0x15142C44: lbu         $t1, 0x0($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X0);
            goto L_15142C6C;
    }
    goto skip_0;
    // 0x15142C44: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    skip_0:
    // 0x15142C48: lh          $t8, -0x2E34($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2E34);
    // 0x15142C4C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x15142C50: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15142C54: bnel        $a3, $t8, L_15142C6C
    if (ctx->r7 != ctx->r24) {
        // 0x15142C58: lbu         $t1, 0x0($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X0);
            goto L_15142C6C;
    }
    goto skip_1;
    // 0x15142C58: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    skip_1:
    // 0x15142C5C: lh          $t9, -0x2E32($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2E32);
    // 0x15142C60: beql        $v0, $t9, L_15142CE4
    if (ctx->r2 == ctx->r25) {
        // 0x15142C64: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15142CE4;
    }
    goto skip_2;
    // 0x15142C64: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_2:
L_15142C68:
    // 0x15142C68: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
L_15142C6C:
    // 0x15142C6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15142C70: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x15142C74: bne         $t1, $at, L_15142C94
    if (ctx->r9 != ctx->r1) {
        // 0x15142C78: sll         $t5, $a1, 24
        ctx->r13 = S32(ctx->r5 << 24);
            goto L_15142C94;
    }
    // 0x15142C78: sll         $t5, $a1, 24
    ctx->r13 = S32(ctx->r5 << 24);
    // 0x15142C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15142C80: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x15142C84: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x15142C88: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15142C8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15142C90: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_15142C94:
    // 0x15142C94: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15142C98: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x15142C9C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15142CA0: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x15142CA4: sll         $t1, $t9, 8
    ctx->r9 = S32(ctx->r25 << 8);
    // 0x15142CA8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x15142CAC: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x15142CB0: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x15142CB4: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x15142CB8: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x15142CBC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x15142CC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15142CC4: sh          $a1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r5;
    // 0x15142CC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15142CCC: sh          $a2, -0x2E36($at)
    MEM_H(-0X2E36, ctx->r1) = ctx->r6;
    // 0x15142CD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15142CD4: sh          $a3, -0x2E34($at)
    MEM_H(-0X2E34, ctx->r1) = ctx->r7;
    // 0x15142CD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15142CDC: sh          $v0, -0x2E32($at)
    MEM_H(-0X2E32, ctx->r1) = ctx->r2;
    // 0x15142CE0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15142CE4:
    // 0x15142CE4: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x15142CE8: jr          $ra
    // 0x15142CEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15142CEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15153298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15153298: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x1515329C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151532A0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x151532A4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x151532A8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151532AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151532B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151532B4: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x151532B8: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x151532BC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x151532C0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x151532C4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x151532C8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x151532CC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x151532D0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151532D4: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151532D8: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151532DC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151532E0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151532E4: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x151532E8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151532EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151532F0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151532F4: nop

    // 0x151532F8: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x151532FC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15153300: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15153304: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15153308: nop

    // 0x1515330C: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x15153310: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15153314: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15153318: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x1515331C: nop

    // 0x15153320: sh          $t1, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r9;
    // 0x15153324: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15153328: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1515332C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15153330: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x15153334: nop

    // 0x15153338: sb          $t4, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r12;
    // 0x1515333C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15153340: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15153344: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15153348: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x1515334C: nop

    // 0x15153350: sb          $t7, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r15;
    // 0x15153354: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15153358: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1515335C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15153360: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x15153364: nop

    // 0x15153368: sb          $t0, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r8;
    // 0x1515336C: lbu         $t1, 0x3C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3C);
    // 0x15153370: sb          $t1, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r9;
    // 0x15153374: lbu         $t2, 0x3C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3C);
    // 0x15153378: sb          $t2, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r10;
    // 0x1515337C: lbu         $t3, 0x3C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3C);
    // 0x15153380: sb          $zero, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = 0;
    // 0x15153384: sb          $zero, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = 0;
    // 0x15153388: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x1515338C: sb          $t3, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r11;
    // 0x15153390: lbu         $t4, 0x3D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3D);
    // 0x15153394: sb          $t4, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r12;
    // 0x15153398: lb          $t5, 0x28($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X28);
    // 0x1515339C: sb          $t5, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r13;
    // 0x151533A0: lbu         $t6, 0x29($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X29);
    // 0x151533A4: sh          $zero, 0x94($sp)
    MEM_H(0X94, ctx->r29) = 0;
    // 0x151533A8: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x151533AC: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x151533B0: sh          $t7, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r15;
    // 0x151533B4: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x151533B8: jal         0x150ADA20
    // 0x151533BC: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151533BC: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    after_0:
    // 0x151533C0: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    // 0x151533C4: lh          $t2, 0xC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XC);
    // 0x151533C8: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x151533CC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x151533D0: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x151533D4: mfhi        $t1
    ctx->r9 = hi;
    // 0x151533D8: addu        $s3, $t1, $t2
    ctx->r19 = ADD32(ctx->r9, ctx->r10);
    // 0x151533DC: bne         $t0, $zero, L_151533E8
    if (ctx->r8 != 0) {
        // 0x151533E0: nop
    
            goto L_151533E8;
    }
    // 0x151533E0: nop

    // 0x151533E4: break       7
    do_break(353711076);
L_151533E8:
    // 0x151533E8: beql        $s3, $zero, L_151535FC
    if (ctx->r19 == 0) {
        // 0x151533EC: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_151535FC;
    }
    goto skip_0;
    // 0x151533EC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
L_151533F0:
    // 0x151533F0: jal         0x150ADA20
    // 0x151533F4: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151533F4: nop

    after_1:
    // 0x151533F8: lh          $t3, 0x12($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X12);
    // 0x151533FC: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x15153400: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15153404: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x15153408: mfhi        $t5
    ctx->r13 = hi;
    // 0x1515340C: addu        $s1, $t5, $t6
    ctx->r17 = ADD32(ctx->r13, ctx->r14);
    // 0x15153410: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x15153414: bne         $t4, $zero, L_15153420
    if (ctx->r12 != 0) {
        // 0x15153418: nop
    
            goto L_15153420;
    }
    // 0x15153418: nop

    // 0x1515341C: break       7
    do_break(353711132);
L_15153420:
    // 0x15153420: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15153424: jal         0x150ADA20
    // 0x15153428: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15153428: nop

    after_2:
    // 0x1515342C: lh          $t9, 0x16($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X16);
    // 0x15153430: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x15153434: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x15153438: divu        $zero, $v0, $t0
    lo = S32(U32(ctx->r2) / U32(ctx->r8)); hi = S32(U32(ctx->r2) % U32(ctx->r8));
    // 0x1515343C: mfhi        $t1
    ctx->r9 = hi;
    // 0x15153440: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x15153444: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x15153448: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1515344C: bne         $t0, $zero, L_15153458
    if (ctx->r8 != 0) {
        // 0x15153450: nop
    
            goto L_15153458;
    }
    // 0x15153450: nop

    // 0x15153454: break       7
    do_break(353711188);
L_15153458:
    // 0x15153458: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x1515345C: jal         0x151423D8
    // 0x15153460: andi        $a0, $t4, 0xFF
    ctx->r4 = ctx->r12 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15153460: andi        $a0, $t4, 0xFF
    ctx->r4 = ctx->r12 & 0XFF;
    after_3:
    // 0x15153464: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15153468: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x1515346C: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x15153470: jal         0x151423D8
    // 0x15153474: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x15153474: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_4:
    // 0x15153478: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1515347C: jal         0x151423D8
    // 0x15153480: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x15153480: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_5:
    // 0x15153484: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x15153488: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1515348C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x15153490: jal         0x151423D8
    // 0x15153494: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x15153494: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_6:
    // 0x15153498: jal         0x150ADA68
    // 0x1515349C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1515349C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_7:
    // 0x151534A0: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151534A4: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151534A8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151534AC: jal         0x150ADA20
    // 0x151534B0: add.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f18.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151534B0: add.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f18.fl;
    after_8:
    // 0x151534B4: lh          $t7, 0x22($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X22);
    // 0x151534B8: mul.s       $f0, $f20, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x151534BC: neg.s       $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = -ctx->f20.fl;
    // 0x151534C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x151534C4: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x151534C8: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x151534CC: lh          $t0, 0x20($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X20);
    // 0x151534D0: mfhi        $t9
    ctx->r25 = hi;
    // 0x151534D4: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151534D8: bne         $t8, $zero, L_151534E4
    if (ctx->r24 != 0) {
        // 0x151534DC: nop
    
            goto L_151534E4;
    }
    // 0x151534DC: nop

    // 0x151534E0: break       7
    do_break(353711328);
L_151534E4:
    // 0x151534E4: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151534E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151534EC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x151534F0: sh          $t1, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r9;
    // 0x151534F4: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151534F8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151534FC: sh          $t3, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r11;
    // 0x15153500: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15153504: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x15153508: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1515350C: sh          $t5, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r13;
    // 0x15153510: jal         0x150ADA20
    // 0x15153514: sh          $t7, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15153514: sh          $t7, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r15;
    after_9:
    // 0x15153518: lh          $t8, 0x26($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X26);
    // 0x1515351C: lh          $t1, 0x24($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X24);
    // 0x15153520: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15153524: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x15153528: mfhi        $t0
    ctx->r8 = hi;
    // 0x1515352C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x15153530: bne         $t9, $zero, L_1515353C
    if (ctx->r25 != 0) {
        // 0x15153534: nop
    
            goto L_1515353C;
    }
    // 0x15153534: nop

    // 0x15153538: break       7
    do_break(353711416);
L_1515353C:
    // 0x1515353C: sh          $t2, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r10;
    // 0x15153540: jal         0x150ADA20
    // 0x15153544: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15153544: nop

    after_10:
    // 0x15153548: lh          $t3, 0x2C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2C);
    // 0x1515354C: lh          $t6, 0x2A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2A);
    // 0x15153550: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15153554: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x15153558: mfhi        $t5
    ctx->r13 = hi;
    // 0x1515355C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15153560: bne         $t4, $zero, L_1515356C
    if (ctx->r12 != 0) {
        // 0x15153564: nop
    
            goto L_1515356C;
    }
    // 0x15153564: nop

    // 0x15153568: break       7
    do_break(353711464);
L_1515356C:
    // 0x1515356C: sb          $t7, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r15;
    // 0x15153570: jal         0x150ADA20
    // 0x15153574: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15153574: nop

    after_11:
    // 0x15153578: lh          $t8, 0x32($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X32);
    // 0x1515357C: lh          $t1, 0x30($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X30);
    // 0x15153580: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15153584: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x15153588: mfhi        $t0
    ctx->r8 = hi;
    // 0x1515358C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x15153590: bne         $t9, $zero, L_1515359C
    if (ctx->r25 != 0) {
        // 0x15153594: nop
    
            goto L_1515359C;
    }
    // 0x15153594: nop

    // 0x15153598: break       7
    do_break(353711512);
L_1515359C:
    // 0x1515359C: sh          $t2, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r10;
    // 0x151535A0: jal         0x150ADA20
    // 0x151535A4: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151535A4: nop

    after_12:
    // 0x151535A8: lh          $t3, 0x36($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X36);
    // 0x151535AC: lh          $t6, 0x34($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X34);
    // 0x151535B0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x151535B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151535B8: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x151535BC: mfhi        $t5
    ctx->r13 = hi;
    // 0x151535C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x151535C4: bne         $t4, $zero, L_151535D0
    if (ctx->r12 != 0) {
        // 0x151535C8: nop
    
            goto L_151535D0;
    }
    // 0x151535C8: nop

    // 0x151535CC: break       7
    do_break(353711564);
L_151535D0:
    // 0x151535D0: sh          $t7, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r15;
    // 0x151535D4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x151535D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151535DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151535E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151535E4: jal         0x15167D84
    // 0x151535E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_15167D84(rdram, ctx);
        goto after_13;
    // 0x151535E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_13:
    // 0x151535EC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x151535F0: bne         $s3, $zero, L_151533F0
    if (ctx->r19 != 0) {
        // 0x151535F4: nop
    
            goto L_151533F0;
    }
    // 0x151535F4: nop

    // 0x151535F8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_151535FC:
    // 0x151535FC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15153600: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15153604: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15153608: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1515360C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15153610: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15153614: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15153618: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x1515361C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15153620: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15153624: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15153628: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x1515362C: jr          $ra
    // 0x15153630: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x15153630: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_15075DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075DEC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15075DF0: addiu       $v1, $v1, 0x1891
    ctx->r3 = ADD32(ctx->r3, 0X1891);
    // 0x15075DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075DF8: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15075DFC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15075E00: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075E04: bne         $t6, $zero, L_15075E1C
    if (ctx->r14 != 0) {
        // 0x15075E08: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15075E1C;
    }
    // 0x15075E08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15075E0C: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15075E10: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x15075E14: lbu         $t8, 0x232($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X232);
    // 0x15075E18: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_15075E1C:
    // 0x15075E1C: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
    // 0x15075E20: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15075E24: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15075E28: beq         $v0, $zero, L_15075E38
    if (ctx->r2 == 0) {
        // 0x15075E2C: nop
    
            goto L_15075E38;
    }
    // 0x15075E2C: nop

    // 0x15075E30: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x15075E34: sb          $v0, 0x232($t9)
    MEM_B(0X232, ctx->r25) = ctx->r2;
L_15075E38:
    // 0x15075E38: jal         0x1507BB28
    // 0x15075E3C: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    func_1507BB28(rdram, ctx);
        goto after_0;
    // 0x15075E3C: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    after_0:
    // 0x15075E40: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15075E44: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15075E48: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x15075E4C: sw          $v0, 0x218($t0)
    MEM_W(0X218, ctx->r8) = ctx->r2;
    // 0x15075E50: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x15075E54: lw          $t1, 0x218($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X218);
    // 0x15075E58: addiu       $t2, $t1, -0x5
    ctx->r10 = ADD32(ctx->r9, -0X5);
    // 0x15075E5C: sw          $t2, 0x218($v1)
    MEM_W(0X218, ctx->r3) = ctx->r10;
    // 0x15075E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075E64: jr          $ra
    // 0x15075E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_100043B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100043B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100043B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100043BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x100043C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x100043C4: jal         0x10024880
    // 0x100043C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x100043C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x100043CC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x100043D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x100043D4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x100043D8: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x100043DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x100043E0: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x100043E4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x100043E8: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x100043EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x100043F0: sw          $t0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r8;
    // 0x100043F4: jal         0x10024880
    // 0x100043F8: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x100043F8: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    after_1:
    // 0x100043FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10004400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10004404: jr          $ra
    // 0x10004408: nop

    return;
    return;
    // 0x10004408: nop

;}
RECOMP_FUNC void func_1517B500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517B500: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1517B504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1517B508: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1517B50C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1517B510: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1517B514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1517B518: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1517B51C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x1517B520: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1517B524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1517B528: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1517B52C: bgez        $t7, L_1517B53C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1517B530: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_1517B53C;
    }
    // 0x1517B530: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x1517B534: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x1517B538: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_1517B53C:
    // 0x1517B53C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x1517B540: lbu         $t9, 0x8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X8);
    // 0x1517B544: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1517B548: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1517B54C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x1517B550: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x1517B554: lbu         $v1, 0x5CE1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5CE1);
    // 0x1517B558: sll         $t1, $v1, 8
    ctx->r9 = S32(ctx->r3 << 8);
    // 0x1517B55C: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1517B560: bne         $at, $zero, L_1517B56C
    if (ctx->r1 != 0) {
        // 0x1517B564: subu        $t2, $t8, $t1
        ctx->r10 = SUB32(ctx->r24, ctx->r9);
            goto L_1517B56C;
    }
    // 0x1517B564: subu        $t2, $t8, $t1
    ctx->r10 = SUB32(ctx->r24, ctx->r9);
    // 0x1517B568: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_1517B56C:
    // 0x1517B56C: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x1517B570: addiu       $t7, $zero, 0x29
    ctx->r15 = ADD32(0, 0X29);
    // 0x1517B574: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
    // 0x1517B578: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x1517B57C: sh          $t4, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r12;
    // 0x1517B580: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x1517B584: sh          $t5, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r13;
    // 0x1517B588: lb          $t6, 0xD($s0)
    ctx->r14 = MEM_B(ctx->r16, 0XD);
    // 0x1517B58C: subu        $v1, $t7, $t6
    ctx->r3 = SUB32(ctx->r15, ctx->r14);
    // 0x1517B590: bne         $v1, $zero, L_1517B5C8
    if (ctx->r3 != 0) {
        // 0x1517B594: nop
    
            goto L_1517B5C8;
    }
    // 0x1517B594: nop

    // 0x1517B598: jal         0x151EF610
    // 0x1517B59C: nop

    func_151EF610(rdram, ctx);
        goto after_0;
    // 0x1517B59C: nop

    after_0:
    // 0x1517B5A0: lb          $t8, 0xD($s0)
    ctx->r24 = MEM_B(ctx->r16, 0XD);
    // 0x1517B5A4: bgez        $v0, L_1517B5B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1517B5A8: andi        $t9, $v0, 0x7
        ctx->r25 = ctx->r2 & 0X7;
            goto L_1517B5B8;
    }
    // 0x1517B5A8: andi        $t9, $v0, 0x7
    ctx->r25 = ctx->r2 & 0X7;
    // 0x1517B5AC: beq         $t9, $zero, L_1517B5B8
    if (ctx->r25 == 0) {
        // 0x1517B5B0: nop
    
            goto L_1517B5B8;
    }
    // 0x1517B5B0: nop

    // 0x1517B5B4: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_1517B5B8:
    // 0x1517B5B8: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1517B5BC: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x1517B5C0: b           L_1517B6B8
    // 0x1517B5C4: sb          $t1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r9;
        goto L_1517B6B8;
    // 0x1517B5C4: sb          $t1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r9;
L_1517B5C8:
    // 0x1517B5C8: bgez        $v1, L_1517B648
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1517B5CC: nop
    
            goto L_1517B648;
    }
    // 0x1517B5CC: nop

    // 0x1517B5D0: jal         0x151EF610
    // 0x1517B5D4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_151EF610(rdram, ctx);
        goto after_1;
    // 0x1517B5D4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x1517B5D8: jal         0x151EF610
    // 0x1517B5DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_151EF610(rdram, ctx);
        goto after_2;
    // 0x1517B5DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x1517B5E0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1517B5E4: lb          $t2, 0xD($s0)
    ctx->r10 = MEM_B(ctx->r16, 0XD);
    // 0x1517B5E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1517B5EC: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x1517B5F0: div         $zero, $v0, $t3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r11)));
    // 0x1517B5F4: mfhi        $t4
    ctx->r12 = hi;
    // 0x1517B5F8: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x1517B5FC: subu        $t7, $t2, $t5
    ctx->r15 = SUB32(ctx->r10, ctx->r13);
    // 0x1517B600: bne         $t3, $zero, L_1517B60C
    if (ctx->r11 != 0) {
        // 0x1517B604: nop
    
            goto L_1517B60C;
    }
    // 0x1517B604: nop

    // 0x1517B608: break       7
    do_break(353875464);
L_1517B60C:
    // 0x1517B60C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517B610: bne         $t3, $at, L_1517B624
    if (ctx->r11 != ctx->r1) {
        // 0x1517B614: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1517B624;
    }
    // 0x1517B614: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517B618: bne         $v0, $at, L_1517B624
    if (ctx->r2 != ctx->r1) {
        // 0x1517B61C: nop
    
            goto L_1517B624;
    }
    // 0x1517B61C: nop

    // 0x1517B620: break       6
    do_break(353875488);
L_1517B624:
    // 0x1517B624: bgez        $t6, L_1517B638
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1517B628: andi        $t8, $t6, 0x7
        ctx->r24 = ctx->r14 & 0X7;
            goto L_1517B638;
    }
    // 0x1517B628: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x1517B62C: beq         $t8, $zero, L_1517B638
    if (ctx->r24 == 0) {
        // 0x1517B630: nop
    
            goto L_1517B638;
    }
    // 0x1517B630: nop

    // 0x1517B634: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_1517B638:
    // 0x1517B638: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1517B63C: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x1517B640: b           L_1517B6B8
    // 0x1517B644: sb          $t0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r8;
        goto L_1517B6B8;
    // 0x1517B644: sb          $t0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r8;
L_1517B648:
    // 0x1517B648: jal         0x151EF610
    // 0x1517B64C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_151EF610(rdram, ctx);
        goto after_3;
    // 0x1517B64C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_3:
    // 0x1517B650: jal         0x151EF610
    // 0x1517B654: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_151EF610(rdram, ctx);
        goto after_4;
    // 0x1517B654: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x1517B658: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1517B65C: lb          $t1, 0xD($s0)
    ctx->r9 = MEM_B(ctx->r16, 0XD);
    // 0x1517B660: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1517B664: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x1517B668: mfhi        $t3
    ctx->r11 = hi;
    // 0x1517B66C: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x1517B670: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x1517B674: bne         $v1, $zero, L_1517B680
    if (ctx->r3 != 0) {
        // 0x1517B678: nop
    
            goto L_1517B680;
    }
    // 0x1517B678: nop

    // 0x1517B67C: break       7
    do_break(353875580);
L_1517B680:
    // 0x1517B680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517B684: bne         $v1, $at, L_1517B698
    if (ctx->r3 != ctx->r1) {
        // 0x1517B688: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1517B698;
    }
    // 0x1517B688: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517B68C: bne         $v0, $at, L_1517B698
    if (ctx->r2 != ctx->r1) {
        // 0x1517B690: nop
    
            goto L_1517B698;
    }
    // 0x1517B690: nop

    // 0x1517B694: break       6
    do_break(353875604);
L_1517B698:
    // 0x1517B698: bgez        $t5, L_1517B6AC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1517B69C: andi        $t6, $t5, 0x7
        ctx->r14 = ctx->r13 & 0X7;
            goto L_1517B6AC;
    }
    // 0x1517B69C: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x1517B6A0: beq         $t6, $zero, L_1517B6AC
    if (ctx->r14 == 0) {
        // 0x1517B6A4: nop
    
            goto L_1517B6AC;
    }
    // 0x1517B6A4: nop

    // 0x1517B6A8: addiu       $t6, $t6, -0x8
    ctx->r14 = ADD32(ctx->r14, -0X8);
L_1517B6AC:
    // 0x1517B6AC: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x1517B6B0: addiu       $t8, $t7, -0x4
    ctx->r24 = ADD32(ctx->r15, -0X4);
    // 0x1517B6B4: sb          $t8, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r24;
L_1517B6B8:
    // 0x1517B6B8: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x1517B6BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1517B6C0: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
    // 0x1517B6C4: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x1517B6C8: sh          $t0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r8;
    // 0x1517B6CC: lh          $t3, 0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4);
    // 0x1517B6D0: sh          $t3, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r11;
    // 0x1517B6D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1517B6D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1517B6DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1517B6E0: jr          $ra
    // 0x1517B6E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1517B6E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}

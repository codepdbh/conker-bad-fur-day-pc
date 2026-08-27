#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15194588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519458C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15194590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15194594: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15194598: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1519459C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151945A0: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x151945A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151945A8: jal         0x150C7020
    // 0x151945AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150C7020(rdram, ctx);
        goto after_0;
    // 0x151945AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x151945B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151945B4: jal         0x15194408
    // 0x151945B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_15194408(rdram, ctx);
        goto after_1;
    // 0x151945B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151945BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151945C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151945C4: jr          $ra
    // 0x151945C8: nop

    return;
    return;
    // 0x151945C8: nop

;}
RECOMP_FUNC void func_151368A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151368A8: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x151368AC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x151368B0: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x151368B4: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x151368B8: beql        $at, $zero, L_151368DC
    if (ctx->r1 == 0) {
        // 0x151368BC: addiu       $v1, $a0, 0x128
        ctx->r3 = ADD32(ctx->r4, 0X128);
            goto L_151368DC;
    }
    goto skip_0;
    // 0x151368BC: addiu       $v1, $a0, 0x128
    ctx->r3 = ADD32(ctx->r4, 0X128);
    skip_0:
    // 0x151368C0: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x151368C4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x151368C8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151368CC: beql        $at, $zero, L_151368DC
    if (ctx->r1 == 0) {
        // 0x151368D0: addiu       $v1, $a0, 0x128
        ctx->r3 = ADD32(ctx->r4, 0X128);
            goto L_151368DC;
    }
    goto skip_1;
    // 0x151368D0: addiu       $v1, $a0, 0x128
    ctx->r3 = ADD32(ctx->r4, 0X128);
    skip_1:
    // 0x151368D4: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x151368D8: addiu       $v1, $a0, 0x128
    ctx->r3 = ADD32(ctx->r4, 0X128);
L_151368DC:
    // 0x151368DC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151368E0: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151368E4: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151368E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151368EC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151368F0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151368F4: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151368F8: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    // 0x151368FC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15136900: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15136904: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15136908: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513690C: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    // 0x15136910: jr          $ra
    // 0x15136914: nop

    return;
    return;
    // 0x15136914: nop

;}
RECOMP_FUNC void func_1501214C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501214C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15012150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15012154: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15012158: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501215C: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15012160: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x15012164: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x15012168: beq         $t6, $at, L_150121A4
    if (ctx->r14 == ctx->r1) {
        // 0x1501216C: addiu       $t9, $zero, 0x12C
        ctx->r25 = ADD32(0, 0X12C);
            goto L_150121A4;
    }
    // 0x1501216C: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x15012170: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15012174: lbu         $t8, 0x3B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B);
    // 0x15012178: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1501217C: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x15012180: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
    // 0x15012184: sb          $zero, 0x25($sp)
    MEM_B(0X25, ctx->r29) = 0;
    // 0x15012188: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x1501218C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15012190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15012194: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15012198: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1501219C: jal         0x15190770
    // 0x150121A0: sb          $t8, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r24;
    func_15190770(rdram, ctx);
        goto after_0;
    // 0x150121A0: sb          $t8, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r24;
    after_0:
L_150121A4:
    // 0x150121A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150121A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150121AC: jr          $ra
    // 0x150121B0: nop

    return;
    return;
    // 0x150121B0: nop

;}
RECOMP_FUNC void func_15101300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15101300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15101304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15101308: lw          $v0, 0x170($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X170);
    // 0x1510130C: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x15101310: jal         0x151411C4
    // 0x15101314: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    func_151411C4(rdram, ctx);
        goto after_0;
    // 0x15101314: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    after_0:
    // 0x15101318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510131C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15101320: jr          $ra
    // 0x15101324: nop

    return;
    return;
    // 0x15101324: nop

;}
RECOMP_FUNC void func_15016850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016850: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15016854: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15016858: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x1501685C: addiu       $s2, $s2, -0x1A70
    ctx->r18 = ADD32(ctx->r18, -0X1A70);
    // 0x15016860: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15016864: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15016868: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1501686C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15016870: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15016874: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15016878: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501687C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x15016880: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15016884: lbu         $a2, 0x2100($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2100);
    // 0x15016888: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x1501688C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15016890: blez        $a2, L_15016978
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15016894: lui         $s6, 0x800C
        ctx->r22 = S32(0X800C << 16);
            goto L_15016978;
    }
    // 0x15016894: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x15016898: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1501689C: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x150168A0: addiu       $s3, $s3, 0x20FC
    ctx->r19 = ADD32(ctx->r19, 0X20FC);
    // 0x150168A4: addiu       $s5, $s5, -0x1A58
    ctx->r21 = ADD32(ctx->r21, -0X1A58);
    // 0x150168A8: addiu       $s6, $s6, -0x1A68
    ctx->r22 = ADD32(ctx->r22, -0X1A68);
    // 0x150168AC: addiu       $s4, $sp, 0x50
    ctx->r20 = ADD32(ctx->r29, 0X50);
    // 0x150168B0: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_150168B4:
    // 0x150168B4: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x150168B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150168BC: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x150168C0: lbu         $s0, 0x4($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X4);
    // 0x150168C4: blez        $a0, L_150168F8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x150168C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150168F8;
    }
    // 0x150168C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150168CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150168D0: addiu       $v1, $v1, -0x1A68
    ctx->r3 = ADD32(ctx->r3, -0X1A68);
L_150168D4:
    // 0x150168D4: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x150168D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150168DC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150168E0: bne         $s0, $t8, L_150168F0
    if (ctx->r16 != ctx->r24) {
        // 0x150168E4: nop
    
            goto L_150168F0;
    }
    // 0x150168E4: nop

    // 0x150168E8: b           L_150168F8
    // 0x150168EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_150168F8;
    // 0x150168EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150168F0:
    // 0x150168F0: bne         $at, $zero, L_150168D4
    if (ctx->r1 != 0) {
        // 0x150168F4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_150168D4;
    }
    // 0x150168F4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_150168F8:
    // 0x150168F8: beq         $a1, $zero, L_15016910
    if (ctx->r5 == 0) {
        // 0x150168FC: slti        $at, $s0, 0xBB
        ctx->r1 = SIGNED(ctx->r16) < 0XBB ? 1 : 0;
            goto L_15016910;
    }
    // 0x150168FC: slti        $at, $s0, 0xBB
    ctx->r1 = SIGNED(ctx->r16) < 0XBB ? 1 : 0;
    // 0x15016900: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x15016904: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x15016908: b           L_15016968
    // 0x1501690C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
        goto L_15016968;
    // 0x1501690C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
L_15016910:
    // 0x15016910: beq         $at, $zero, L_15016930
    if (ctx->r1 == 0) {
        // 0x15016914: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_15016930;
    }
    // 0x15016914: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15016918: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1501691C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x15016920: jal         0x1502B7F0
    // 0x15016924: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_1502B7F0(rdram, ctx);
        goto after_0;
    // 0x15016924: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x15016928: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1501692C: lbu         $a2, 0x2100($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2100);
L_15016930:
    // 0x15016930: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x15016934: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x15016938: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x1501693C: beq         $t9, $zero, L_15016968
    if (ctx->r25 == 0) {
        // 0x15016940: sll         $v1, $v1, 4
        ctx->r3 = S32(ctx->r3 << 4);
            goto L_15016968;
    }
    // 0x15016940: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x15016944: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x15016948: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1501694C: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x15016950: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x15016954: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x15016958: addu        $t3, $s6, $t2
    ctx->r11 = ADD32(ctx->r22, ctx->r10);
    // 0x1501695C: sh          $s0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r16;
    // 0x15016960: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x15016964: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
L_15016968:
    // 0x15016968: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    // 0x1501696C: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15016970: bnel        $at, $zero, L_150168B4
    if (ctx->r1 != 0) {
        // 0x15016974: lw          $t6, 0x0($s3)
        ctx->r14 = MEM_W(ctx->r19, 0X0);
            goto L_150168B4;
    }
    goto skip_0;
    // 0x15016974: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    skip_0:
L_15016978:
    // 0x15016978: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1501697C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15016980: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15016984: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15016988: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1501698C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15016990: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15016994: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15016998: jr          $ra
    // 0x1501699C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1501699C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150026E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150026E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x150026EC: addiu       $v1, $v1, 0xDE4
    ctx->r3 = ADD32(ctx->r3, 0XDE4);
    // 0x150026F0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150026F4: lw          $v0, -0x41C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41C8);
    // 0x150026F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150026FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15002700: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15002704: sw          $v0, -0x41E8($at)
    MEM_W(-0X41E8, ctx->r1) = ctx->r2;
    // 0x15002708: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500270C: sw          $v0, -0x41B4($at)
    MEM_W(-0X41B4, ctx->r1) = ctx->r2;
    // 0x15002710: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15002714: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15002718: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1500271C: jr          $ra
    // 0x15002720: nop

    return;
    return;
    // 0x15002720: nop

;}
RECOMP_FUNC void func_15188810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188810: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15188814: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15188818: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1518881C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15188820: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15188824: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15188828: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1518882C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15188830: lw          $s0, -0x838($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X838);
    // 0x15188834: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x15188838: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x1518883C: beq         $s0, $zero, L_1518887C
    if (ctx->r16 == 0) {
        // 0x15188840: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1518887C;
    }
    // 0x15188840: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15188844: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_15188848:
    // 0x15188848: bnel        $s1, $t6, L_15188874
    if (ctx->r17 != ctx->r14) {
        // 0x1518884C: lw          $s0, 0xC($s0)
        ctx->r16 = MEM_W(ctx->r16, 0XC);
            goto L_15188874;
    }
    goto skip_0;
    // 0x1518884C: lw          $s0, 0xC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x15188850: lh          $t7, 0x6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X6);
    // 0x15188854: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15188858: beql        $at, $zero, L_15188868
    if (ctx->r1 == 0) {
        // 0x1518885C: lw          $t9, 0x40($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X40);
            goto L_15188868;
    }
    goto skip_1;
    // 0x1518885C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x15188860: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
    // 0x15188864: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
L_15188868:
    // 0x15188868: b           L_15188938
    // 0x1518886C: sb          $t9, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r25;
        goto L_15188938;
    // 0x1518886C: sb          $t9, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r25;
    // 0x15188870: lw          $s0, 0xC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XC);
L_15188874:
    // 0x15188874: bnel        $s0, $zero, L_15188848
    if (ctx->r16 != 0) {
        // 0x15188878: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_15188848;
    }
    goto skip_2;
    // 0x15188878: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_2:
L_1518887C:
    // 0x1518887C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15188880: jal         0x10003C40
    // 0x15188884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15188884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15188888: beq         $v0, $zero, L_15188938
    if (ctx->r2 == 0) {
        // 0x1518888C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15188938;
    }
    // 0x1518888C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15188890: jal         0x1502DB20
    // 0x15188894: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    func_1502DB20(rdram, ctx);
        goto after_1;
    // 0x15188894: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    after_1:
    // 0x15188898: bne         $v0, $zero, L_151888B0
    if (ctx->r2 != 0) {
        // 0x1518889C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151888B0;
    }
    // 0x1518889C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151888A0: jal         0x10004074
    // 0x151888A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x151888A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151888A8: b           L_1518893C
    // 0x151888AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1518893C;
    // 0x151888AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151888B0:
    // 0x151888B0: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x151888B4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x151888B8: sll         $t0, $a0, 7
    ctx->r8 = S32(ctx->r4 << 7);
    // 0x151888BC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x151888C0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x151888C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151888C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151888CC: jal         0x10003C40
    // 0x151888D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x151888D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x151888D4: bne         $v0, $zero, L_151888EC
    if (ctx->r2 != 0) {
        // 0x151888D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151888EC;
    }
    // 0x151888D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151888DC: jal         0x10004074
    // 0x151888E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x151888E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x151888E4: b           L_1518893C
    // 0x151888E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1518893C;
    // 0x151888E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151888EC:
    // 0x151888EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151888F0: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x151888F4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x151888F8: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x151888FC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x15188900: sb          $t2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r10;
    // 0x15188904: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x15188908: sb          $t3, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r11;
    // 0x1518890C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x15188910: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    // 0x15188914: sw          $s1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r17;
    // 0x15188918: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x1518891C: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x15188920: jal         0x100226F0
    // 0x15188924: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x15188924: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x15188928: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x1518892C: addiu       $a1, $a1, -0x838
    ctx->r5 = ADD32(ctx->r5, -0X838);
    // 0x15188930: jal         0x15188A58
    // 0x15188934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15188A58(rdram, ctx);
        goto after_6;
    // 0x15188934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_15188938:
    // 0x15188938: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1518893C:
    // 0x1518893C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15188940: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15188944: jr          $ra
    // 0x15188948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15188948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1000F85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000F860: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000F864: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1000F868: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x1000F86C: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x1000F870: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1000F874: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000F878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000F87C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1000F880: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x1000F884: bnel        $at, $zero, L_1000F910
    if (ctx->r1 != 0) {
        // 0x1000F888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1000F910;
    }
    goto skip_0;
    // 0x1000F888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1000F88C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1000F890: jal         0x1000F3D0
    // 0x1000F894: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    func_1000F3D0(rdram, ctx);
        goto after_0;
    // 0x1000F894: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000F898: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1000F89C: beq         $v0, $zero, L_1000F90C
    if (ctx->r2 == 0) {
        // 0x1000F8A0: lh          $a1, 0x26($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X26);
            goto L_1000F90C;
    }
    // 0x1000F8A0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x1000F8A4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x1000F8A8: bne         $a1, $at, L_1000F8D8
    if (ctx->r5 != ctx->r1) {
        // 0x1000F8AC: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_1000F8D8;
    }
    // 0x1000F8AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1000F8B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1000F8B4: jal         0x10019AB0
    // 0x1000F8B8: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    alCents2Ratio(rdram, ctx);
        goto after_1;
    // 0x1000F8B8: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    after_1:
    // 0x1000F8BC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1000F8C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1000F8C4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1000F8C8: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x1000F8CC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1000F8D0: b           L_1000F8EC
    // 0x1000F8D4: andi        $t0, $v1, 0xF
    ctx->r8 = ctx->r3 & 0XF;
        goto L_1000F8EC;
    // 0x1000F8D4: andi        $t0, $v1, 0xF
    ctx->r8 = ctx->r3 & 0XF;
L_1000F8D8:
    // 0x1000F8D8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1000F8DC: bnel        $a1, $at, L_1000F8EC
    if (ctx->r5 != ctx->r1) {
        // 0x1000F8E0: andi        $t0, $v1, 0xF
        ctx->r8 = ctx->r3 & 0XF;
            goto L_1000F8EC;
    }
    goto skip_1;
    // 0x1000F8E0: andi        $t0, $v1, 0xF
    ctx->r8 = ctx->r3 & 0XF;
    skip_1:
    // 0x1000F8E4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x1000F8E8: andi        $t0, $v1, 0xF
    ctx->r8 = ctx->r3 & 0XF;
L_1000F8EC:
    // 0x1000F8EC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1000F8F0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x1000F8F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1000F8F8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000F8FC: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x1000F900: lw          $a0, 0x25E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X25E8);
    // 0x1000F904: jal         0x10017714
    // 0x1000F908: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_10017714(rdram, ctx);
        goto after_2;
    // 0x1000F908: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_2:
L_1000F90C:
    // 0x1000F90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1000F910:
    // 0x1000F910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000F914: jr          $ra
    // 0x1000F918: nop

    return;
    return;
    // 0x1000F918: nop

;}
RECOMP_FUNC void func_15040A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A78: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15040A7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15040A80: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15040A84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15040A88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15040A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15040A90: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x15040A94: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15040A98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15040A9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15040AA0: addiu       $v0, $v0, 0x68A0
    ctx->r2 = ADD32(ctx->r2, 0X68A0);
    // 0x15040AA4: addiu       $v1, $v1, 0x6860
    ctx->r3 = ADD32(ctx->r3, 0X6860);
    // 0x15040AA8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_15040AAC:
    // 0x15040AAC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x15040AB0: sw          $t0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r8;
    // 0x15040AB4: sw          $t0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r8;
    // 0x15040AB8: sw          $t0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r8;
    // 0x15040ABC: bne         $v1, $v0, L_15040AAC
    if (ctx->r3 != ctx->r2) {
        // 0x15040AC0: sw          $t0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r8;
            goto L_15040AAC;
    }
    // 0x15040AC0: sw          $t0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r8;
    // 0x15040AC4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15040AC8: addiu       $t1, $t1, 0x6860
    ctx->r9 = ADD32(ctx->r9, 0X6860);
    // 0x15040ACC: sltu        $at, $s2, $a0
    ctx->r1 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x15040AD0: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x15040AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15040AD8: bne         $at, $zero, L_15040CB0
    if (ctx->r1 != 0) {
        // 0x15040ADC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_15040CB0;
    }
    // 0x15040ADC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15040AE0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
L_15040AE4:
    // 0x15040AE4: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x15040AE8: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x15040AEC: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x15040AF0: bne         $s0, $t6, L_15040AFC
    if (ctx->r16 != ctx->r14) {
        // 0x15040AF4: lui         $t4, 0x8000
        ctx->r12 = S32(0X8000 << 16);
            goto L_15040AFC;
    }
    // 0x15040AF4: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x15040AF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15040AFC:
    // 0x15040AFC: beq         $a2, $zero, L_15040B48
    if (ctx->r6 == 0) {
        // 0x15040B00: lbu         $s1, 0x0($s0)
        ctx->r17 = MEM_BU(ctx->r16, 0X0);
            goto L_15040B48;
    }
    // 0x15040B00: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    // 0x15040B04: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x15040B08: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15040B0C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15040B10: lw          $t9, 0x44B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X44B0);
    // 0x15040B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15040B18: sb          $a2, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r6;
    // 0x15040B1C: jalr        $t9
    // 0x15040B20: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15040B20: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x15040B24: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15040B28: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x15040B2C: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x15040B30: addiu       $t1, $t1, 0x6860
    ctx->r9 = ADD32(ctx->r9, 0X6860);
    // 0x15040B34: lbu         $a2, 0x62($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X62);
    // 0x15040B38: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x15040B3C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15040B40: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x15040B44: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
L_15040B48:
    // 0x15040B48: bne         $s0, $s2, L_15040B54
    if (ctx->r16 != ctx->r18) {
        // 0x15040B4C: slti        $at, $s1, 0x2
        ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_15040B54;
    }
    // 0x15040B4C: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x15040B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_15040B54:
    // 0x15040B54: bne         $at, $zero, L_15040B80
    if (ctx->r1 != 0) {
        // 0x15040B58: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_15040B80;
    }
    // 0x15040B58: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15040B5C: addiu       $t8, $s1, -0xDA
    ctx->r24 = ADD32(ctx->r17, -0XDA);
    // 0x15040B60: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x15040B64: beq         $at, $zero, L_15040C98
    if (ctx->r1 == 0) {
        // 0x15040B68: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15040C98;
    }
    // 0x15040B68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15040B6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15040B70: addu        $at, $at, $t8
    gpr jr_addend_15040B78 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15040B74: lw          $t8, -0x756C($at)
    ctx->r24 = ADD32(ctx->r1, -0X756C);
    // 0x15040B78: jr          $t8
    // 0x15040B7C: nop

    switch (jr_addend_15040B78 >> 2) {
        case 0: goto L_15040C88; break;
        case 1: goto L_15040C04; break;
        case 2: goto L_15040C90; break;
        case 3: goto L_15040C98; break;
        case 4: goto L_15040BA8; break;
        case 5: goto L_15040B94; break;
        default: switch_error(__func__, 0x15040B78, 0x80098A94);
    }
    // 0x15040B7C: nop

L_15040B80:
    // 0x15040B80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15040B84: beq         $v0, $at, L_15040C38
    if (ctx->r2 == ctx->r1) {
        // 0x15040B88: nop
    
            goto L_15040C38;
    }
    // 0x15040B88: nop

    // 0x15040B8C: b           L_15040C9C
    // 0x15040B90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_15040C9C;
    // 0x15040B90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040B94:
    // 0x15040B94: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x15040B98: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x15040B9C: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x15040BA0: b           L_15040C9C
    // 0x15040BA4: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
        goto L_15040C9C;
    // 0x15040BA4: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
L_15040BA8:
    // 0x15040BA8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x15040BAC: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x15040BB0: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x15040BB4: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    // 0x15040BB8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x15040BBC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x15040BC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15040BC4: srl         $v0, $v1, 24
    ctx->r2 = S32(U32(ctx->r3) >> 24);
    // 0x15040BC8: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x15040BCC: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x15040BD0: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x15040BD4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15040BD8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15040BDC: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x15040BE0: beq         $t0, $t7, L_15040BFC
    if (ctx->r8 == ctx->r15) {
        // 0x15040BE4: nop
    
            goto L_15040BFC;
    }
    // 0x15040BE4: nop

    // 0x15040BE8: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x15040BEC: and         $v1, $v1, $t3
    ctx->r3 = ctx->r3 & ctx->r11;
    // 0x15040BF0: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x15040BF4: b           L_15040C9C
    // 0x15040BF8: or          $s0, $v1, $t4
    ctx->r16 = ctx->r3 | ctx->r12;
        goto L_15040C9C;
    // 0x15040BF8: or          $s0, $v1, $t4
    ctx->r16 = ctx->r3 | ctx->r12;
L_15040BFC:
    // 0x15040BFC: b           L_15040C9C
    // 0x15040C00: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
        goto L_15040C9C;
    // 0x15040C00: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_15040C04:
    // 0x15040C04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15040C08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15040C0C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x15040C10: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x15040C14: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x15040C18: bne         $t6, $at, L_15040C30
    if (ctx->r14 != ctx->r1) {
        // 0x15040C1C: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_15040C30;
    }
    // 0x15040C1C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x15040C20: sra         $t7, $a0, 2
    ctx->r15 = S32(SIGNED(ctx->r4) >> 2);
    // 0x15040C24: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15040C28: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x15040C2C: sw          $a1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r5;
L_15040C30:
    // 0x15040C30: b           L_15040C9C
    // 0x15040C34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_15040C9C;
    // 0x15040C34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040C38:
    // 0x15040C38: beq         $a2, $zero, L_15040C80
    if (ctx->r6 == 0) {
        // 0x15040C3C: nop
    
            goto L_15040C80;
    }
    // 0x15040C3C: nop

    // 0x15040C40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15040C44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15040C48: srl         $t5, $a0, 12
    ctx->r13 = S32(U32(ctx->r4) >> 12);
    // 0x15040C4C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x15040C50: blez        $t6, L_15040C80
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15040C54: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_15040C80;
    }
    // 0x15040C54: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15040C58: andi        $a1, $t6, 0x3
    ctx->r5 = ctx->r14 & 0X3;
    // 0x15040C5C: beq         $a1, $zero, L_15040C74
    if (ctx->r5 == 0) {
        // 0x15040C60: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_15040C74;
    }
    // 0x15040C60: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x15040C64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15040C68:
    // 0x15040C68: bnel        $v1, $v0, L_15040C68
    if (ctx->r3 != ctx->r2) {
        // 0x15040C6C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15040C68;
    }
    goto skip_0;
    // 0x15040C6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x15040C70: beq         $v0, $a0, L_15040C80
    if (ctx->r2 == ctx->r4) {
        // 0x15040C74: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_15040C80;
    }
L_15040C74:
    // 0x15040C74: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_15040C78:
    // 0x15040C78: bnel        $v0, $a0, L_15040C78
    if (ctx->r2 != ctx->r4) {
        // 0x15040C7C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_15040C78;
    }
    goto skip_1;
    // 0x15040C7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_1:
L_15040C80:
    // 0x15040C80: b           L_15040C9C
    // 0x15040C84: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_15040C9C;
    // 0x15040C84: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040C88:
    // 0x15040C88: b           L_15040C9C
    // 0x15040C8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_15040C9C;
    // 0x15040C8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040C90:
    // 0x15040C90: b           L_15040C9C
    // 0x15040C94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_15040C9C;
    // 0x15040C94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040C98:
    // 0x15040C98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15040C9C:
    // 0x15040C9C: sltu        $at, $s2, $s0
    ctx->r1 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x15040CA0: beql        $at, $zero, L_15040AE4
    if (ctx->r1 == 0) {
        // 0x15040CA4: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_15040AE4;
    }
    goto skip_2;
    // 0x15040CA4: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    skip_2:
    // 0x15040CA8: bgtzl       $a3, L_15040AE4
    if (SIGNED(ctx->r7) > 0) {
        // 0x15040CAC: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_15040AE4;
    }
    goto skip_3;
    // 0x15040CAC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    skip_3:
L_15040CB0:
    // 0x15040CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15040CB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15040CB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15040CBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15040CC0: jr          $ra
    // 0x15040CC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15040CC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_150FC930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FC930: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150FC934: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150FC938: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x150FC93C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x150FC940: beq         $v0, $at, L_150FC960
    if (ctx->r2 == ctx->r1) {
        // 0x150FC944: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_150FC960;
    }
    // 0x150FC944: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x150FC948: beq         $v0, $at, L_150FC960
    if (ctx->r2 == ctx->r1) {
        // 0x150FC94C: addiu       $at, $zero, 0x73
        ctx->r1 = ADD32(0, 0X73);
            goto L_150FC960;
    }
    // 0x150FC94C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x150FC950: beq         $v0, $at, L_150FC960
    if (ctx->r2 == ctx->r1) {
        // 0x150FC954: addiu       $at, $zero, 0x8A
        ctx->r1 = ADD32(0, 0X8A);
            goto L_150FC960;
    }
    // 0x150FC954: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    // 0x150FC958: bnel        $v0, $at, L_150FC96C
    if (ctx->r2 != ctx->r1) {
        // 0x150FC95C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150FC96C;
    }
    goto skip_0;
    // 0x150FC95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_150FC960:
    // 0x150FC960: jr          $ra
    // 0x150FC964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150FC964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150FC968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150FC96C:
    // 0x150FC96C: jr          $ra
    // 0x150FC970: nop

    return;
    return;
    // 0x150FC970: nop

;}
RECOMP_FUNC void func_15088A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15088A0C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15088A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15088A14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15088A18: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x15088A1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15088A20: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15088A24: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15088A28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15088A2C: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x15088A30: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x15088A34: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15088A38: nop

    // 0x15088A3C: bc1fl       L_15088A94
    if (!c1cs) {
        // 0x15088A40: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_15088A94;
    }
    goto skip_0;
    // 0x15088A40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x15088A44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15088A48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15088A4C: lbu         $t6, 0x2D($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X2D);
    // 0x15088A50: lbu         $t7, 0x2C($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088A54: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x15088A58: lbu         $t8, 0x2B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X2B);
    // 0x15088A5C: lb          $a2, 0x2F($a3)
    ctx->r6 = MEM_B(ctx->r7, 0X2F);
    // 0x15088A60: sb          $t6, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = ctx->r14;
    // 0x15088A64: swc1        $f10, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f10.u32l;
    // 0x15088A68: sb          $t7, 0x2D($a3)
    MEM_B(0X2D, ctx->r7) = ctx->r15;
    // 0x15088A6C: sb          $t8, 0x2C($a3)
    MEM_B(0X2C, ctx->r7) = ctx->r24;
    // 0x15088A70: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x15088A74: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x15088A78: jal         0x150888A8
    // 0x15088A7C: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_150888A8(rdram, ctx);
        goto after_0;
    // 0x15088A7C: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x15088A80: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x15088A84: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15088A88: b           L_15088BD0
    // 0x15088A8C: sb          $v0, 0x2B($a3)
    MEM_B(0X2B, ctx->r7) = ctx->r2;
        goto L_15088BD0;
    // 0x15088A8C: sb          $v0, 0x2B($a3)
    MEM_B(0X2B, ctx->r7) = ctx->r2;
    // 0x15088A90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_15088A94:
    // 0x15088A94: nop

    // 0x15088A98: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x15088A9C: nop

    // 0x15088AA0: bc1f        L_15088BD0
    if (!c1cs) {
        // 0x15088AA4: nop
    
            goto L_15088BD0;
    }
    // 0x15088AA4: nop

    // 0x15088AA8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x15088AAC: lbu         $t9, 0x2C($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088AB0: lbu         $t1, 0x2D($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X2D);
    // 0x15088AB4: lbu         $t2, 0x2E($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X2E);
    // 0x15088AB8: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
    // 0x15088ABC: lb          $a2, 0x2F($a3)
    ctx->r6 = MEM_B(ctx->r7, 0X2F);
    // 0x15088AC0: sb          $t9, 0x2B($a3)
    MEM_B(0X2B, ctx->r7) = ctx->r25;
    // 0x15088AC4: sb          $t1, 0x2C($a3)
    MEM_B(0X2C, ctx->r7) = ctx->r9;
    // 0x15088AC8: sb          $t2, 0x2D($a3)
    MEM_B(0X2D, ctx->r7) = ctx->r10;
    // 0x15088ACC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x15088AD0: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    // 0x15088AD4: jal         0x150888A8
    // 0x15088AD8: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    func_150888A8(rdram, ctx);
        goto after_1;
    // 0x15088AD8: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    after_1:
    // 0x15088ADC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x15088AE0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15088AE4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15088AE8: sb          $v0, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = ctx->r2;
    // 0x15088AEC: lb          $t3, 0x23A8($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X23A8);
    // 0x15088AF0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15088AF4: bnel        $t3, $zero, L_15088B5C
    if (ctx->r11 != 0) {
        // 0x15088AF8: lbu         $t3, 0x2C($a3)
        ctx->r11 = MEM_BU(ctx->r7, 0X2C);
            goto L_15088B5C;
    }
    goto skip_1;
    // 0x15088AF8: lbu         $t3, 0x2C($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X2C);
    skip_1:
    // 0x15088AFC: lbu         $t4, 0x2C($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088B00: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15088B04: lw          $v1, 0x2350($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2350);
    // 0x15088B08: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x15088B0C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15088B10: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x15088B14: lbu         $v0, 0xF($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XF);
    // 0x15088B18: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15088B1C: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, 0X2390);
    // 0x15088B20: bne         $v0, $at, L_15088B3C
    if (ctx->r2 != ctx->r1) {
        // 0x15088B24: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_15088B3C;
    }
    // 0x15088B24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15088B28: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x15088B2C: lbu         $t8, 0x2C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088B30: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15088B34: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x15088B38: lbu         $v0, 0xF($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XF);
L_15088B3C:
    // 0x15088B3C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15088B40: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15088B44: bne         $v0, $at, L_15088BD0
    if (ctx->r2 != ctx->r1) {
        // 0x15088B48: addiu       $a0, $a0, 0x2390
        ctx->r4 = ADD32(ctx->r4, 0X2390);
            goto L_15088BD0;
    }
    // 0x15088B48: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, 0X2390);
    // 0x15088B4C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15088B50: b           L_15088BD0
    // 0x15088B54: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
        goto L_15088BD0;
    // 0x15088B54: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x15088B58: lbu         $t3, 0x2C($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X2C);
L_15088B5C:
    // 0x15088B5C: lw          $v1, 0x2350($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2350);
    // 0x15088B60: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x15088B64: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x15088B68: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x15088B6C: lbu         $v0, 0xF($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0XF);
    // 0x15088B70: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15088B74: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, 0X2390);
    // 0x15088B78: bne         $v0, $at, L_15088B94
    if (ctx->r2 != ctx->r1) {
        // 0x15088B7C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_15088B94;
    }
    // 0x15088B7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15088B80: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x15088B84: lbu         $t7, 0x2C($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088B88: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15088B8C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x15088B90: lbu         $v0, 0xF($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0XF);
L_15088B94:
    // 0x15088B94: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15088B98: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15088B9C: bne         $v0, $at, L_15088BBC
    if (ctx->r2 != ctx->r1) {
        // 0x15088BA0: addiu       $a0, $a0, 0x2390
        ctx->r4 = ADD32(ctx->r4, 0X2390);
            goto L_15088BBC;
    }
    // 0x15088BA0: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, 0X2390);
    // 0x15088BA4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15088BA8: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x15088BAC: lbu         $t2, 0x2C($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X2C);
    // 0x15088BB0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x15088BB4: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x15088BB8: lbu         $v0, 0xF($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XF);
L_15088BBC:
    // 0x15088BBC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15088BC0: bne         $v0, $at, L_15088BD0
    if (ctx->r2 != ctx->r1) {
        // 0x15088BC4: nop
    
            goto L_15088BD0;
    }
    // 0x15088BC4: nop

    // 0x15088BC8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15088BCC: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_15088BD0:
    // 0x15088BD0: beq         $t0, $zero, L_15088D44
    if (ctx->r8 == 0) {
        // 0x15088BD4: lui         $a1, 0x800E
        ctx->r5 = S32(0X800E << 16);
            goto L_15088D44;
    }
    // 0x15088BD4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15088BD8: lh          $t6, 0x24($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X24);
    // 0x15088BDC: lb          $a1, 0xBE7($a1)
    ctx->r5 = MEM_B(ctx->r5, 0XBE7);
    // 0x15088BE0: lb          $t9, 0x26($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X26);
    // 0x15088BE4: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x15088BE8: sh          $t7, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r15;
    // 0x15088BEC: lh          $t8, 0x24($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X24);
    // 0x15088BF0: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15088BF4: lb          $a2, 0x31($a3)
    ctx->r6 = MEM_B(ctx->r7, 0X31);
    // 0x15088BF8: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x15088BFC: mflo        $t1
    ctx->r9 = lo;
    // 0x15088C00: sb          $t1, 0x27($a3)
    MEM_B(0X27, ctx->r7) = ctx->r9;
    // 0x15088C04: lbu         $t2, -0x19EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X19EA);
    // 0x15088C08: bne         $t9, $zero, L_15088C14
    if (ctx->r25 != 0) {
        // 0x15088C0C: nop
    
            goto L_15088C14;
    }
    // 0x15088C0C: nop

    // 0x15088C10: break       7
    do_break(352881680);
L_15088C14:
    // 0x15088C14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15088C18: bne         $t9, $at, L_15088C2C
    if (ctx->r25 != ctx->r1) {
        // 0x15088C1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15088C2C;
    }
    // 0x15088C1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15088C20: bne         $t8, $at, L_15088C2C
    if (ctx->r24 != ctx->r1) {
        // 0x15088C24: nop
    
            goto L_15088C2C;
    }
    // 0x15088C24: nop

    // 0x15088C28: break       6
    do_break(352881704);
L_15088C2C:
    // 0x15088C2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15088C30: beql        $t2, $zero, L_15088C54
    if (ctx->r10 == 0) {
        // 0x15088C34: lb          $v0, 0x27($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X27);
            goto L_15088C54;
    }
    goto skip_2;
    // 0x15088C34: lb          $v0, 0x27($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X27);
    skip_2:
    // 0x15088C38: lb          $t3, 0x27($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X27);
    // 0x15088C3C: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
    // 0x15088C40: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15088C44: beql        $at, $zero, L_15088C54
    if (ctx->r1 == 0) {
        // 0x15088C48: lb          $v0, 0x27($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X27);
            goto L_15088C54;
    }
    goto skip_3;
    // 0x15088C48: lb          $v0, 0x27($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X27);
    skip_3:
    // 0x15088C4C: sb          $t4, 0x27($a3)
    MEM_B(0X27, ctx->r7) = ctx->r12;
    // 0x15088C50: lb          $v0, 0x27($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X27);
L_15088C54:
    // 0x15088C54: lb          $t5, 0x28($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X28);
    // 0x15088C58: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15088C5C: beql        $at, $zero, L_15088D48
    if (ctx->r1 == 0) {
        // 0x15088C60: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_15088D48;
    }
    goto skip_4;
    // 0x15088C60: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    skip_4:
    // 0x15088C64: sb          $v0, 0x28($a3)
    MEM_B(0X28, ctx->r7) = ctx->r2;
    // 0x15088C68: lb          $t6, -0x270($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X270);
    // 0x15088C6C: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15088C70: beql        $at, $zero, L_15088D1C
    if (ctx->r1 == 0) {
        // 0x15088C74: lb          $v0, 0x28($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X28);
            goto L_15088D1C;
    }
    goto skip_5;
    // 0x15088C74: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
    skip_5:
    // 0x15088C78: lb          $t7, 0x30($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X30);
    // 0x15088C7C: bnel        $t7, $zero, L_15088D1C
    if (ctx->r15 != 0) {
        // 0x15088C80: lb          $v0, 0x28($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X28);
            goto L_15088D1C;
    }
    goto skip_6;
    // 0x15088C80: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
    skip_6:
    // 0x15088C84: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x15088C88: blezl       $a0, L_15088D1C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15088C8C: lb          $v0, 0x28($a3)
        ctx->r2 = MEM_B(ctx->r7, 0X28);
            goto L_15088D1C;
    }
    goto skip_7;
    // 0x15088C8C: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
    skip_7:
    // 0x15088C90: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
    // 0x15088C94: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15088C98: addiu       $t1, $t1, 0xC10
    ctx->r9 = ADD32(ctx->r9, 0XC10);
    // 0x15088C9C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15088CA0: bne         $at, $zero, L_15088CE4
    if (ctx->r1 != 0) {
        // 0x15088CA4: sll         $t9, $a2, 1
        ctx->r25 = S32(ctx->r6 << 1);
            goto L_15088CE4;
    }
    // 0x15088CA4: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x15088CA8: lw          $t8, 0x18($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X18);
    // 0x15088CAC: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x15088CB0: subu        $v1, $a0, $t8
    ctx->r3 = SUB32(ctx->r4, ctx->r24);
    // 0x15088CB4: slti        $at, $v1, 0x7D01
    ctx->r1 = SIGNED(ctx->r3) < 0X7D01 ? 1 : 0;
    // 0x15088CB8: bnel        $at, $zero, L_15088CC8
    if (ctx->r1 != 0) {
        // 0x15088CBC: lh          $a0, 0x0($v0)
        ctx->r4 = MEM_H(ctx->r2, 0X0);
            goto L_15088CC8;
    }
    goto skip_8;
    // 0x15088CBC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    skip_8:
    // 0x15088CC0: addiu       $v1, $zero, 0x7D00
    ctx->r3 = ADD32(0, 0X7D00);
    // 0x15088CC4: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
L_15088CC8:
    // 0x15088CC8: blez        $a0, L_15088CD8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15088CCC: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_15088CD8;
    }
    // 0x15088CCC: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15088CD0: beql        $at, $zero, L_15088CE0
    if (ctx->r1 == 0) {
        // 0x15088CD4: sw          $v1, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->r3;
            goto L_15088CE0;
    }
    goto skip_9;
    // 0x15088CD4: sw          $v1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r3;
    skip_9:
L_15088CD8:
    // 0x15088CD8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x15088CDC: sw          $v1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r3;
L_15088CE0:
    // 0x15088CE0: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
L_15088CE4:
    // 0x15088CE4: bne         $a1, $v0, L_15088D18
    if (ctx->r5 != ctx->r2) {
        // 0x15088CE8: sll         $t2, $a2, 2
        ctx->r10 = S32(ctx->r6 << 2);
            goto L_15088D18;
    }
    // 0x15088CE8: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x15088CEC: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x15088CF0: lui         $at, 0x5
    ctx->r1 = S32(0X5 << 16);
    // 0x15088CF4: ori         $at, $at, 0x7E41
    ctx->r1 = ctx->r1 | 0X7E41;
    // 0x15088CF8: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x15088CFC: bne         $at, $zero, L_15088D0C
    if (ctx->r1 != 0) {
        // 0x15088D00: nop
    
            goto L_15088D0C;
    }
    // 0x15088D00: nop

    // 0x15088D04: lui         $v0, 0x5
    ctx->r2 = S32(0X5 << 16);
    // 0x15088D08: ori         $v0, $v0, 0x7E40
    ctx->r2 = ctx->r2 | 0X7E40;
L_15088D0C:
    // 0x15088D0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15088D10: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x15088D14: sw          $v0, 0xC18($at)
    MEM_W(0XC18, ctx->r1) = ctx->r2;
L_15088D18:
    // 0x15088D18: lb          $v0, 0x28($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X28);
L_15088D1C:
    // 0x15088D1C: bne         $a1, $v0, L_15088D34
    if (ctx->r5 != ctx->r2) {
        // 0x15088D20: slt         $at, $v0, $a1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_15088D34;
    }
    // 0x15088D20: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15088D24: lw          $t3, 0x1C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X1C);
    // 0x15088D28: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x15088D2C: b           L_15088D44
    // 0x15088D30: sw          $t4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r12;
        goto L_15088D44;
    // 0x15088D30: sw          $t4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r12;
L_15088D34:
    // 0x15088D34: beql        $at, $zero, L_15088D48
    if (ctx->r1 == 0) {
        // 0x15088D38: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_15088D48;
    }
    goto skip_10;
    // 0x15088D38: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    skip_10:
    // 0x15088D3C: lw          $t5, 0x1C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X1C);
    // 0x15088D40: sw          $t5, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r13;
L_15088D44:
    // 0x15088D44: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_15088D48:
    // 0x15088D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15088D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15088D50: jr          $ra
    // 0x15088D54: nop

    return;
    return;
    // 0x15088D54: nop

;}
RECOMP_FUNC void func_1512317C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512317C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15123180: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15123184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15123188: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1512318C: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123190: lw          $v0, 0x5F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5F0);
    // 0x15123194: lbu         $v1, 0x104($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X104);
    // 0x15123198: andi        $a2, $v0, 0x100
    ctx->r6 = ctx->r2 & 0X100;
    // 0x1512319C: andi        $a3, $v0, 0x200
    ctx->r7 = ctx->r2 & 0X200;
    // 0x151231A0: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231A4: beq         $t6, $zero, L_15123228
    if (ctx->r14 == 0) {
        // 0x151231A8: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15123228;
    }
    // 0x151231A8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x151231AC: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
    // 0x151231B0: xori        $v1, $v0, 0x9
    ctx->r3 = ctx->r2 ^ 0X9;
    // 0x151231B4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231B8: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x151231BC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_0;
    // 0x151231BC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_0:
    // 0x151231C0: xori        $v1, $v0, 0x38
    ctx->r3 = ctx->r2 ^ 0X38;
    // 0x151231C4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231C8: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x151231CC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_1;
    // 0x151231CC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_1:
    // 0x151231D0: xori        $v1, $v0, 0x39
    ctx->r3 = ctx->r2 ^ 0X39;
    // 0x151231D4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231D8: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x151231DC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_2;
    // 0x151231DC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_2:
    // 0x151231E0: xori        $v1, $v0, 0x3B
    ctx->r3 = ctx->r2 ^ 0X3B;
    // 0x151231E4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231E8: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x151231EC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_3;
    // 0x151231EC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_3:
    // 0x151231F0: xori        $v1, $v0, 0x37
    ctx->r3 = ctx->r2 ^ 0X37;
    // 0x151231F4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x151231F8: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x151231FC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_4;
    // 0x151231FC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_4:
    // 0x15123200: xori        $v1, $v0, 0x15
    ctx->r3 = ctx->r2 ^ 0X15;
    // 0x15123204: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x15123208: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x1512320C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_5;
    // 0x1512320C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_5:
    // 0x15123210: xori        $v1, $v0, 0x26
    ctx->r3 = ctx->r2 ^ 0X26;
    // 0x15123214: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x15123218: beql        $v1, $zero, L_1512322C
    if (ctx->r3 == 0) {
        // 0x1512321C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1512322C;
    }
    goto skip_6;
    // 0x1512321C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_6:
    // 0x15123220: xori        $v1, $v0, 0x3A
    ctx->r3 = ctx->r2 ^ 0X3A;
    // 0x15123224: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
L_15123228:
    // 0x15123228: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_1512322C:
    // 0x1512322C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x15123230: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x15123234: sltu        $v1, $zero, $t7
    ctx->r3 = 0 < ctx->r15 ? 1 : 0;
    // 0x15123238: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x1512323C: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_7;
    // 0x1512323C: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_7:
    // 0x15123240: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x15123244: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x15123248: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x1512324C: sltu        $v1, $zero, $t9
    ctx->r3 = 0 < ctx->r25 ? 1 : 0;
    // 0x15123250: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x15123254: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_8;
    // 0x15123254: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_8:
    // 0x15123258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1512325C: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x15123260: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15123264: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15123268: nop

    // 0x1512326C: bc1t        L_15123278
    if (c1cs) {
        // 0x15123270: nop
    
            goto L_15123278;
    }
    // 0x15123270: nop

    // 0x15123274: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15123278:
    // 0x15123278: beql        $v1, $zero, L_151232CC
    if (ctx->r3 == 0) {
        // 0x1512327C: lbu         $v1, 0x65($a1)
        ctx->r3 = MEM_BU(ctx->r5, 0X65);
            goto L_151232CC;
    }
    goto skip_9;
    // 0x1512327C: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
    skip_9:
    // 0x15123280: lbu         $v1, 0xAD($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XAD);
    // 0x15123284: sltiu       $t1, $v1, 0x1
    ctx->r9 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x15123288: beql        $t1, $zero, L_151232CC
    if (ctx->r9 == 0) {
        // 0x1512328C: lbu         $v1, 0x65($a1)
        ctx->r3 = MEM_BU(ctx->r5, 0X65);
            goto L_151232CC;
    }
    goto skip_10;
    // 0x1512328C: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
    skip_10:
    // 0x15123290: lw          $t2, 0x3D4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3D4);
    // 0x15123294: lw          $v1, 0x9C($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X9C);
    // 0x15123298: sltiu       $t3, $v1, 0x1
    ctx->r11 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x1512329C: beql        $t3, $zero, L_151232CC
    if (ctx->r11 == 0) {
        // 0x151232A0: lbu         $v1, 0x65($a1)
        ctx->r3 = MEM_BU(ctx->r5, 0X65);
            goto L_151232CC;
    }
    goto skip_11;
    // 0x151232A0: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
    skip_11:
    // 0x151232A4: bnel        $a2, $zero, L_151232CC
    if (ctx->r6 != 0) {
        // 0x151232A8: lbu         $v1, 0x65($a1)
        ctx->r3 = MEM_BU(ctx->r5, 0X65);
            goto L_151232CC;
    }
    goto skip_12;
    // 0x151232A8: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
    skip_12:
    // 0x151232AC: bnel        $a3, $zero, L_151232CC
    if (ctx->r7 != 0) {
        // 0x151232B0: lbu         $v1, 0x65($a1)
        ctx->r3 = MEM_BU(ctx->r5, 0X65);
            goto L_151232CC;
    }
    goto skip_13;
    // 0x151232B0: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
    skip_13:
    // 0x151232B4: lbu         $v1, 0x23E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X23E);
    // 0x151232B8: xori        $t4, $v1, 0x3
    ctx->r12 = ctx->r3 ^ 0X3;
    // 0x151232BC: sltu        $v1, $zero, $t4
    ctx->r3 = 0 < ctx->r12 ? 1 : 0;
    // 0x151232C0: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x151232C4: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_14;
    // 0x151232C4: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_14:
    // 0x151232C8: lbu         $v1, 0x65($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X65);
L_151232CC:
    // 0x151232CC: sltu        $t5, $zero, $v1
    ctx->r13 = 0 < ctx->r3 ? 1 : 0;
    // 0x151232D0: beql        $t5, $zero, L_151232EC
    if (ctx->r13 == 0) {
        // 0x151232D4: sltu        $v1, $zero, $a0
        ctx->r3 = 0 < ctx->r4 ? 1 : 0;
            goto L_151232EC;
    }
    goto skip_15;
    // 0x151232D4: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    skip_15:
    // 0x151232D8: bne         $a2, $zero, L_151232E8
    if (ctx->r6 != 0) {
        // 0x151232DC: sltiu       $v1, $a3, 0x1
        ctx->r3 = ctx->r7 < 0X1 ? 1 : 0;
            goto L_151232E8;
    }
    // 0x151232DC: sltiu       $v1, $a3, 0x1
    ctx->r3 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x151232E0: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x151232E4: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_16;
    // 0x151232E4: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_16:
L_151232E8:
    // 0x151232E8: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
L_151232EC:
    // 0x151232EC: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x151232F0: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_17;
    // 0x151232F0: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_17:
    // 0x151232F4: jal         0x15125490
    // 0x151232F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15125490(rdram, ctx);
        goto after_0;
    // 0x151232F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151232FC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x15123300: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x15123304: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_18;
    // 0x15123304: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_18:
    // 0x15123308: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512330C: lbu         $v1, 0x1CA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1CA);
    // 0x15123310: sltiu       $t6, $v1, 0x1
    ctx->r14 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x15123314: bne         $t6, $zero, L_1512336C
    if (ctx->r14 != 0) {
        // 0x15123318: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_1512336C;
    }
    // 0x15123318: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x1512331C: lw          $v0, 0x3D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D4);
    // 0x15123320: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15123324: lbu         $v1, 0x4E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4E);
    // 0x15123328: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x1512332C: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x15123330: bnel        $t8, $zero, L_15123364
    if (ctx->r24 != 0) {
        // 0x15123334: lbu         $v1, 0x1AC($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X1AC);
            goto L_15123364;
    }
    goto skip_19;
    // 0x15123334: lbu         $v1, 0x1AC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1AC);
    skip_19:
    // 0x15123338: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512333C: lwc1        $f10, 0x3C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x15123340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15123344: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x15123348: nop

    // 0x1512334C: bc1f        L_15123358
    if (!c1cs) {
        // 0x15123350: nop
    
            goto L_15123358;
    }
    // 0x15123350: nop

    // 0x15123354: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15123358:
    // 0x15123358: bnel        $v1, $zero, L_15123370
    if (ctx->r3 != 0) {
        // 0x1512335C: lw          $t0, 0x36C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X36C);
            goto L_15123370;
    }
    goto skip_20;
    // 0x1512335C: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    skip_20:
    // 0x15123360: lbu         $v1, 0x1AC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1AC);
L_15123364:
    // 0x15123364: sltu        $t9, $zero, $v1
    ctx->r25 = 0 < ctx->r3 ? 1 : 0;
    // 0x15123368: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_1512336C:
    // 0x1512336C: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
L_15123370:
    // 0x15123370: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x15123374: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x15123378: beql        $t2, $zero, L_151233CC
    if (ctx->r10 == 0) {
        // 0x1512337C: lw          $a0, 0x2C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2C);
            goto L_151233CC;
    }
    goto skip_21;
    // 0x1512337C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    skip_21:
    // 0x15123380: bnel        $v1, $zero, L_151233CC
    if (ctx->r3 != 0) {
        // 0x15123384: lw          $a0, 0x2C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2C);
            goto L_151233CC;
    }
    goto skip_22;
    // 0x15123384: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    skip_22:
    // 0x15123388: lhu         $t3, 0x36A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X36A);
    // 0x1512338C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15123390: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x15123394: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x15123398: beq         $t4, $zero, L_151234F4
    if (ctx->r12 == 0) {
        // 0x1512339C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_151234F4;
    }
    // 0x1512339C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x151233A0: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x151233A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151233A8: jal         0x15123934
    // 0x151233AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x151233AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_1:
    // 0x151233B0: beql        $v0, $zero, L_151234F8
    if (ctx->r2 == 0) {
        // 0x151233B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151234F8;
    }
    goto skip_23;
    // 0x151233B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_23:
    // 0x151233B8: jal         0x1511FC60
    // 0x151233BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1511FC60(rdram, ctx);
        goto after_2;
    // 0x151233BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151233C0: b           L_151234F8
    // 0x151233C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151234F8;
    // 0x151233C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151233C8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
L_151233CC:
    // 0x151233CC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x151233D0: bnel        $a0, $at, L_15123434
    if (ctx->r4 != ctx->r1) {
        // 0x151233D4: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_15123434;
    }
    goto skip_24;
    // 0x151233D4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    skip_24:
    // 0x151233D8: lh          $t6, 0x73C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X73C);
    // 0x151233DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151233E0: bnel        $t6, $zero, L_15123434
    if (ctx->r14 != 0) {
        // 0x151233E4: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_15123434;
    }
    goto skip_25;
    // 0x151233E4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    skip_25:
    // 0x151233E8: jal         0x151239CC
    // 0x151233EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x151233EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x151233F0: lw          $t7, 0x3D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3D4);
    // 0x151233F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151233F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151233FC: sb          $zero, 0x198($t7)
    MEM_B(0X198, ctx->r15) = 0;
    // 0x15123400: lw          $t8, 0x3D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D4);
    // 0x15123404: sb          $zero, 0x197($t8)
    MEM_B(0X197, ctx->r24) = 0;
    // 0x15123408: lhu         $t1, 0x36A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X36A);
    // 0x1512340C: lw          $v1, 0x36C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X36C);
    // 0x15123410: sh          $t9, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r25;
    // 0x15123414: andi        $t2, $t1, 0xFFEF
    ctx->r10 = ctx->r9 & 0XFFEF;
    // 0x15123418: sh          $t0, 0x5FC($s0)
    MEM_H(0X5FC, ctx->r16) = ctx->r8;
    // 0x1512341C: sh          $t2, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r10;
    // 0x15123420: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x15123424: andi        $t4, $t3, 0xFFEF
    ctx->r12 = ctx->r11 & 0XFFEF;
    // 0x15123428: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    // 0x1512342C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x15123430: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
L_15123434:
    // 0x15123434: beq         $a0, $at, L_15123448
    if (ctx->r4 == ctx->r1) {
        // 0x15123438: addiu       $a1, $zero, -0x11
        ctx->r5 = ADD32(0, -0X11);
            goto L_15123448;
    }
    // 0x15123438: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    // 0x1512343C: lh          $v0, 0x73C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X73C);
    // 0x15123440: beql        $v0, $zero, L_1512346C
    if (ctx->r2 == 0) {
        // 0x15123444: lw          $t9, 0x3D4($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X3D4);
            goto L_1512346C;
    }
    goto skip_26;
    // 0x15123444: lw          $t9, 0x3D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D4);
    skip_26:
L_15123448:
    // 0x15123448: lhu         $t5, 0x36A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X36A);
    // 0x1512344C: lw          $v1, 0x36C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X36C);
    // 0x15123450: and         $t6, $t5, $a1
    ctx->r14 = ctx->r13 & ctx->r5;
    // 0x15123454: sh          $t6, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r14;
    // 0x15123458: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x1512345C: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x15123460: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x15123464: lh          $v0, 0x73C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X73C);
    // 0x15123468: lw          $t9, 0x3D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D4);
L_1512346C:
    // 0x1512346C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15123470: addiu       $a0, $s0, 0x74C
    ctx->r4 = ADD32(ctx->r16, 0X74C);
    // 0x15123474: sb          $v0, 0x198($t9)
    MEM_B(0X198, ctx->r25) = ctx->r2;
    // 0x15123478: lh          $v0, 0x73C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X73C);
    // 0x1512347C: bnel        $v0, $zero, L_1512348C
    if (ctx->r2 != 0) {
        // 0x15123480: lui         $at, 0x4110
        ctx->r1 = S32(0X4110 << 16);
            goto L_1512348C;
    }
    goto skip_27;
    // 0x15123480: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    skip_27:
    // 0x15123484: bne         $v0, $at, L_151234D4
    if (ctx->r2 != ctx->r1) {
        // 0x15123488: lui         $at, 0x4110
        ctx->r1 = S32(0X4110 << 16);
            goto L_151234D4;
    }
    // 0x15123488: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
L_1512348C:
    // 0x1512348C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15123490: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x15123494: addiu       $a2, $s0, 0x79C
    ctx->r6 = ADD32(ctx->r16, 0X79C);
    // 0x15123498: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x1512349C: lwc1        $f18, 0x7B4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151234A0: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x151234A4: jal         0x150495B0
    // 0x151234A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_150495B0(rdram, ctx);
        goto after_4;
    // 0x151234A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x151234AC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151234B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151234B4: addiu       $a0, $s0, 0x754
    ctx->r4 = ADD32(ctx->r16, 0X754);
    // 0x151234B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x151234BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151234C0: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151234C4: addiu       $a2, $s0, 0x7A0
    ctx->r6 = ADD32(ctx->r16, 0X7A0);
    // 0x151234C8: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x151234CC: jal         0x150495B0
    // 0x151234D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_5;
    // 0x151234D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
L_151234D4:
    // 0x151234D4: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x151234D8: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x151234DC: beql        $t0, $at, L_151234F8
    if (ctx->r8 == ctx->r1) {
        // 0x151234E0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151234F8;
    }
    goto skip_28;
    // 0x151234E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_28:
    // 0x151234E4: lh          $t1, 0x73C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X73C);
    // 0x151234E8: beql        $t1, $zero, L_151234F8
    if (ctx->r9 == 0) {
        // 0x151234EC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151234F8;
    }
    goto skip_29;
    // 0x151234EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_29:
    // 0x151234F0: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
L_151234F4:
    // 0x151234F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151234F8:
    // 0x151234F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151234FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15123500: jr          $ra
    // 0x15123504: nop

    return;
    return;
    // 0x15123504: nop

;}
RECOMP_FUNC void func_150F00EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F00EC: lw          $v0, 0x178($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X178);
    // 0x150F00F0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150F00F4: lbu         $t6, 0x128($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X128);
    // 0x150F00F8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150F00FC: beql        $t7, $zero, L_150F0174
    if (ctx->r15 == 0) {
        // 0x150F0100: lw          $t3, 0x58($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X58);
            goto L_150F0174;
    }
    goto skip_0;
    // 0x150F0100: lw          $t3, 0x58($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X58);
    skip_0:
    // 0x150F0104: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F0108: lw          $at, 0x34($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X34);
    // 0x150F010C: addiu       $v1, $v0, 0x110
    ctx->r3 = ADD32(ctx->r2, 0X110);
    // 0x150F0110: lw          $t1, 0x58($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X58);
    // 0x150F0114: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x150F0118: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x150F011C: ori         $t2, $t1, 0x6
    ctx->r10 = ctx->r9 | 0X6;
    // 0x150F0120: sw          $t0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r8;
    // 0x150F0124: lw          $at, 0x3C($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X3C);
    // 0x150F0128: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    // 0x150F012C: lwc1        $f6, 0x30($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X30);
    // 0x150F0130: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x150F0134: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150F0138: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F013C: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x150F0140: lwc1        $f18, 0x34($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X34);
    // 0x150F0144: lwc1        $f16, 0x38($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
    // 0x150F0148: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150F014C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x150F0150: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x150F0154: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x150F0158: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x150F015C: sw          $t2, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r10;
    // 0x150F0160: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150F0164: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x150F0168: b           L_150F018C
    // 0x150F016C: swc1        $f16, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f16.u32l;
        goto L_150F018C;
    // 0x150F016C: swc1        $f16, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f16.u32l;
    // 0x150F0170: lw          $t3, 0x58($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X58);
L_150F0174:
    // 0x150F0174: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150F0178: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x150F017C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150F0180: sw          $t4, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r12;
    // 0x150F0184: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x150F0188: sw          $t6, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r14;
L_150F018C:
    // 0x150F018C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F0190: jr          $ra
    // 0x150F0194: nop

    return;
    return;
    // 0x150F0194: nop

;}
RECOMP_FUNC void func_1502B8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B8E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1502B8E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502B8E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1502B8EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1502B8F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502B8F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1502B8F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502B8FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1502B900: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502B904: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502B908: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1502B90C: lui         $s0, 0xAB
    ctx->r16 = S32(0XAB << 16);
    // 0x1502B910: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1502B914: addiu       $s0, $s0, 0x1950
    ctx->r16 = ADD32(ctx->r16, 0X1950);
    // 0x1502B918: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x1502B91C: beq         $a2, $zero, L_1502B974
    if (ctx->r6 == 0) {
        // 0x1502B920: sw          $a2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r6;
            goto L_1502B974;
    }
    // 0x1502B920: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502B924: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x1502B928: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x1502B92C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502B930: addiu       $s3, $sp, 0x34
    ctx->r19 = ADD32(ctx->r29, 0X34);
    // 0x1502B934: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_1502B938:
    // 0x1502B938: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x1502B93C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x1502B940: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1502B944: beq         $v1, $zero, L_1502B95C
    if (ctx->r3 == 0) {
        // 0x1502B948: lw          $a1, -0x4($s1)
        ctx->r5 = MEM_W(ctx->r17, -0X4);
            goto L_1502B95C;
    }
    // 0x1502B948: lw          $a1, -0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, -0X4);
    // 0x1502B94C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502B950: jal         0x1502AC88
    // 0x1502B954: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1502AC88(rdram, ctx);
        goto after_0;
    // 0x1502B954: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x1502B958: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_1502B95C:
    // 0x1502B95C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502B960: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1502B964: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x1502B968: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502B96C: bne         $a2, $zero, L_1502B938
    if (ctx->r6 != 0) {
        // 0x1502B970: and         $v1, $t7, $s4
        ctx->r3 = ctx->r15 & ctx->r20;
            goto L_1502B938;
    }
    // 0x1502B970: and         $v1, $t7, $s4
    ctx->r3 = ctx->r15 & ctx->r20;
L_1502B974:
    // 0x1502B974: beq         $v1, $zero, L_1502B990
    if (ctx->r3 == 0) {
        // 0x1502B978: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1502B990;
    }
    // 0x1502B978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502B97C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1502B980: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x1502B984: jal         0x1502B224
    // 0x1502B988: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_1502B224(rdram, ctx);
        goto after_1;
    // 0x1502B988: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_1:
    // 0x1502B98C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1502B990:
    // 0x1502B990: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1502B994: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1502B998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502B99C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1502B9A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1502B9A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1502B9A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1502B9AC: jr          $ra
    // 0x1502B9B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1502B9B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1519F400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519F404: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1519F408: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1519F40C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1519F410: lw          $t6, 0x58($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X58);
    // 0x1519F414: beq         $t6, $zero, L_1519F428
    if (ctx->r14 == 0) {
        // 0x1519F418: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_1519F428;
    }
    // 0x1519F418: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1519F41C: jal         0x1519F48C
    // 0x1519F420: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_1519F48C(rdram, ctx);
        goto after_0;
    // 0x1519F420: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x1519F424: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_1519F428:
    // 0x1519F428: addiu       $s0, $a1, 0x58
    ctx->r16 = ADD32(ctx->r5, 0X58);
    // 0x1519F42C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1519F430: beql        $a0, $zero, L_1519F444
    if (ctx->r4 == 0) {
        // 0x1519F434: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_1519F444;
    }
    goto skip_0;
    // 0x1519F434: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_0:
    // 0x1519F438: jal         0x1519F48C
    // 0x1519F43C: nop

    func_1519F48C(rdram, ctx);
        goto after_1;
    // 0x1519F43C: nop

    after_1:
    // 0x1519F440: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_1519F444:
    // 0x1519F444: beql        $a0, $zero, L_1519F460
    if (ctx->r4 == 0) {
        // 0x1519F448: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_1519F460;
    }
    goto skip_1;
    // 0x1519F448: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x1519F44C: jal         0x151A0928
    // 0x1519F450: nop

    func_151A0928(rdram, ctx);
        goto after_2;
    // 0x1519F450: nop

    after_2:
    // 0x1519F454: jal         0x1516972C
    // 0x1519F458: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x1519F458: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_3:
    // 0x1519F45C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_1519F460:
    // 0x1519F460: beql        $a0, $zero, L_1519F47C
    if (ctx->r4 == 0) {
        // 0x1519F464: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1519F47C;
    }
    goto skip_2;
    // 0x1519F464: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x1519F468: jal         0x151A0928
    // 0x1519F46C: nop

    func_151A0928(rdram, ctx);
        goto after_4;
    // 0x1519F46C: nop

    after_4:
    // 0x1519F470: jal         0x1516972C
    // 0x1519F474: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x1519F474: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_5:
    // 0x1519F478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1519F47C:
    // 0x1519F47C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1519F480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1519F484: jr          $ra
    // 0x1519F488: nop

    return;
    return;
    // 0x1519F488: nop

;}
RECOMP_FUNC void func_1500EE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500EE94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1500EE98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1500EE9C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1500EEA0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1500EEA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1500EEA8: addiu       $t8, $zero, 0x39
    ctx->r24 = ADD32(0, 0X39);
    // 0x1500EEAC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1500EEB0: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1500EEB4: lbu         $t7, 0x14($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X14);
    // 0x1500EEB8: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1500EEBC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1500EEC0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1500EEC4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1500EEC8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1500EECC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1500EED0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1500EED4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EED8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1500EEDC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1500EEE0: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x1500EEE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1500EEE8: jal         0x15149130
    // 0x1500EEEC: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x1500EEEC: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    after_0:
    // 0x1500EEF0: beq         $v0, $zero, L_1500EF04
    if (ctx->r2 == 0) {
        // 0x1500EEF4: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500EF04;
    }
    // 0x1500EEF4: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500EEF8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1500EEFC: jal         0x10022EC0
    // 0x1500EF00: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1500EF00: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_1500EF04:
    // 0x1500EF04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1500EF08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1500EF0C: jr          $ra
    // 0x1500EF10: nop

    return;
    return;
    // 0x1500EF10: nop

;}
RECOMP_FUNC void func_100125CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100125CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100125D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100125D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x100125D8: jal         0x151F2CDC
    // 0x100125DC: nop

    func_151F2CDC(rdram, ctx);
        goto after_0;
    // 0x100125DC: nop

    after_0:
    // 0x100125E0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x100125E4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x100125E8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x100125EC: bnel        $t6, $at, L_10012604
    if (ctx->r14 != ctx->r1) {
        // 0x100125F0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_10012604;
    }
    goto skip_0;
    // 0x100125F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x100125F4: lw          $t7, -0x1608($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1608);
    // 0x100125F8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x100125FC: beq         $t7, $at, L_1001262C
    if (ctx->r15 == ctx->r1) {
        // 0x10012600: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1001262C;
    }
    // 0x10012600: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_10012604:
    // 0x10012604: bne         $v0, $at, L_1001261C
    if (ctx->r2 != ctx->r1) {
        // 0x10012608: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1001261C;
    }
    // 0x10012608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001260C: jal         0x151F2D6C
    // 0x10012610: addiu       $a1, $zero, 0x2B02
    ctx->r5 = ADD32(0, 0X2B02);
    func_151F2D6C(rdram, ctx);
        goto after_1;
    // 0x10012610: addiu       $a1, $zero, 0x2B02
    ctx->r5 = ADD32(0, 0X2B02);
    after_1:
    // 0x10012614: b           L_10012630
    // 0x10012618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_10012630;
    // 0x10012618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1001261C:
    // 0x1001261C: beql        $v0, $zero, L_10012630
    if (ctx->r2 == 0) {
        // 0x10012620: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_10012630;
    }
    goto skip_1;
    // 0x10012620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x10012624: jal         0x151F2BA8
    // 0x10012628: nop

    func_151F2BA8(rdram, ctx);
        goto after_2;
    // 0x10012628: nop

    after_2:
L_1001262C:
    // 0x1001262C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_10012630:
    // 0x10012630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10012634: jr          $ra
    // 0x10012638: nop

    return;
    return;
    // 0x10012638: nop

;}
RECOMP_FUNC void func_150DE458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE458: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150DE45C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x150DE460: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150DE464: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150DE468: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x150DE46C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x150DE470: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x150DE474: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x150DE478: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150DE47C: lbu         $t6, 0x73($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X73);
    // 0x150DE480: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DE484: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150DE488: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150DE48C: bne         $t7, $at, L_150DE634
    if (ctx->r15 != ctx->r1) {
        // 0x150DE490: addiu       $v1, $v1, -0x161C
        ctx->r3 = ADD32(ctx->r3, -0X161C);
            goto L_150DE634;
    }
    // 0x150DE490: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x150DE494: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150DE498: lwc1        $f8, 0x60($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X60);
    // 0x150DE49C: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x150DE4A0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150DE4A4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x150DE4A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150DE4AC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150DE4B0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150DE4B4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150DE4B8: swc1        $f16, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f16.u32l;
    // 0x150DE4BC: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x150DE4C0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150DE4C4: nop

    // 0x150DE4C8: bc1fl       L_150DE4EC
    if (!c1cs) {
        // 0x150DE4CC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150DE4EC;
    }
    goto skip_0;
    // 0x150DE4CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x150DE4D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150DE4D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150DE4D8: nop

    // 0x150DE4DC: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150DE4E0: b           L_150DE508
    // 0x150DE4E4: swc1        $f18, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f18.u32l;
        goto L_150DE508;
    // 0x150DE4E4: swc1        $f18, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f18.u32l;
    // 0x150DE4E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150DE4EC:
    // 0x150DE4EC: nop

    // 0x150DE4F0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x150DE4F4: nop

    // 0x150DE4F8: bc1fl       L_150DE50C
    if (!c1cs) {
        // 0x150DE4FC: lwc1        $f6, 0x64($s3)
        ctx->f6.u32l = MEM_W(ctx->r19, 0X64);
            goto L_150DE50C;
    }
    goto skip_1;
    // 0x150DE4FC: lwc1        $f6, 0x64($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X64);
    skip_1:
    // 0x150DE500: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150DE504: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
L_150DE508:
    // 0x150DE508: lwc1        $f6, 0x64($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X64);
L_150DE50C:
    // 0x150DE50C: lwc1        $f8, 0x4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4);
    // 0x150DE510: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x150DE514: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DE518: swc1        $f16, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f16.u32l;
    // 0x150DE51C: lwc1        $f0, 0x4($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X4);
    // 0x150DE520: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150DE524: nop

    // 0x150DE528: bc1fl       L_150DE540
    if (!c1cs) {
        // 0x150DE52C: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_150DE540;
    }
    goto skip_2;
    // 0x150DE52C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_2:
    // 0x150DE530: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150DE534: b           L_150DE554
    // 0x150DE538: swc1        $f18, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f18.u32l;
        goto L_150DE554;
    // 0x150DE538: swc1        $f18, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f18.u32l;
    // 0x150DE53C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_150DE540:
    // 0x150DE540: nop

    // 0x150DE544: bc1fl       L_150DE558
    if (!c1cs) {
        // 0x150DE548: lwc1        $f8, 0x68($s3)
        ctx->f8.u32l = MEM_W(ctx->r19, 0X68);
            goto L_150DE558;
    }
    goto skip_3;
    // 0x150DE548: lwc1        $f8, 0x68($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X68);
    skip_3:
    // 0x150DE54C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150DE550: swc1        $f4, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f4.u32l;
L_150DE554:
    // 0x150DE554: lwc1        $f8, 0x68($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X68);
L_150DE558:
    // 0x150DE558: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150DE55C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150DE560: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150DE564: swc1        $f16, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f16.u32l;
    // 0x150DE568: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x150DE56C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150DE570: nop

    // 0x150DE574: bc1fl       L_150DE58C
    if (!c1cs) {
        // 0x150DE578: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_150DE58C;
    }
    goto skip_4;
    // 0x150DE578: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_4:
    // 0x150DE57C: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150DE580: b           L_150DE5A0
    // 0x150DE584: swc1        $f18, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f18.u32l;
        goto L_150DE5A0;
    // 0x150DE584: swc1        $f18, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f18.u32l;
    // 0x150DE588: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_150DE58C:
    // 0x150DE58C: nop

    // 0x150DE590: bc1fl       L_150DE5A4
    if (!c1cs) {
        // 0x150DE594: lw          $t9, 0x3C($s3)
        ctx->r25 = MEM_W(ctx->r19, 0X3C);
            goto L_150DE5A4;
    }
    goto skip_5;
    // 0x150DE594: lw          $t9, 0x3C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X3C);
    skip_5:
    // 0x150DE598: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150DE59C: swc1        $f4, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f4.u32l;
L_150DE5A0:
    // 0x150DE5A0: lw          $t9, 0x3C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X3C);
L_150DE5A4:
    // 0x150DE5A4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150DE5A8: lh          $t2, 0x5C($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X5C);
    // 0x150DE5AC: lh          $t4, 0x5A($s3)
    ctx->r12 = MEM_H(ctx->r19, 0X5A);
    // 0x150DE5B0: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DE5B4: lh          $t7, 0x10($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X10);
    // 0x150DE5B8: lbu         $v0, 0x8A($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8A);
    // 0x150DE5BC: mflo        $t1
    ctx->r9 = lo;
    // 0x150DE5C0: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x150DE5C4: sh          $t3, 0x5C($s3)
    MEM_H(0X5C, ctx->r19) = ctx->r11;
    // 0x150DE5C8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x150DE5CC: lh          $t9, 0x5C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X5C);
    // 0x150DE5D0: lh          $t1, 0x12($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X12);
    // 0x150DE5D4: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DE5D8: lh          $t4, 0x5E($s3)
    ctx->r12 = MEM_H(ctx->r19, 0X5E);
    // 0x150DE5DC: mflo        $t6
    ctx->r14 = lo;
    // 0x150DE5E0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x150DE5E4: sh          $t8, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r24;
    // 0x150DE5E8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150DE5EC: lh          $t6, 0x14($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X14);
    // 0x150DE5F0: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DE5F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150DE5F8: mflo        $t2
    ctx->r10 = lo;
    // 0x150DE5FC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x150DE600: sh          $t3, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r11;
    // 0x150DE604: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x150DE608: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DE60C: mflo        $t7
    ctx->r15 = lo;
    // 0x150DE610: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150DE614: sh          $t8, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r24;
    // 0x150DE618: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150DE61C: subu        $v0, $v0, $t9
    ctx->r2 = SUB32(ctx->r2, ctx->r25);
    // 0x150DE620: blezl       $v0, L_150DE634
    if (SIGNED(ctx->r2) <= 0) {
        // 0x150DE624: sb          $t0, 0x6E($s3)
        MEM_B(0X6E, ctx->r19) = ctx->r8;
            goto L_150DE634;
    }
    goto skip_6;
    // 0x150DE624: sb          $t0, 0x6E($s3)
    MEM_B(0X6E, ctx->r19) = ctx->r8;
    skip_6:
    // 0x150DE628: b           L_150DE634
    // 0x150DE62C: sb          $v0, 0x8A($s3)
    MEM_B(0X8A, ctx->r19) = ctx->r2;
        goto L_150DE634;
    // 0x150DE62C: sb          $v0, 0x8A($s3)
    MEM_B(0X8A, ctx->r19) = ctx->r2;
    // 0x150DE630: sb          $t0, 0x6E($s3)
    MEM_B(0X6E, ctx->r19) = ctx->r8;
L_150DE634:
    // 0x150DE634: lhu         $t1, 0x54($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X54);
    // 0x150DE638: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x150DE63C: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x150DE640: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x150DE644: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150DE648: bne         $t2, $at, L_150DE6B4
    if (ctx->r10 != ctx->r1) {
        // 0x150DE64C: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_150DE6B4;
    }
    // 0x150DE64C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150DE650: lw          $t3, 0x7C($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X7C);
    // 0x150DE654: addiu       $t5, $t5, 0x204
    ctx->r13 = ADD32(ctx->r13, 0X204);
    // 0x150DE658: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x150DE65C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x150DE660: addu        $s1, $t4, $t5
    ctx->r17 = ADD32(ctx->r12, ctx->r13);
    // 0x150DE664: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x150DE668: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    // 0x150DE66C: addiu       $s4, $sp, 0x54
    ctx->r20 = ADD32(ctx->r29, 0X54);
L_150DE670:
    // 0x150DE670: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150DE674: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150DE678: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150DE67C: jal         0x1510D0EC
    // 0x150DE680: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x150DE680: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150DE684: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x150DE688: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150DE68C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150DE690: addu        $a2, $t6, $v0
    ctx->r6 = ADD32(ctx->r14, ctx->r2);
    // 0x150DE694: addiu       $a2, $a2, -0x200
    ctx->r6 = ADD32(ctx->r6, -0X200);
    // 0x150DE698: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150DE69C: jal         0x1510D874
    // 0x150DE6A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_1510D874(rdram, ctx);
        goto after_1;
    // 0x150DE6A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x150DE6A4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x150DE6A8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150DE6AC: bne         $s0, $s5, L_150DE670
    if (ctx->r16 != ctx->r21) {
        // 0x150DE6B0: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_150DE670;
    }
    // 0x150DE6B0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_150DE6B4:
    // 0x150DE6B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150DE6B8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x150DE6BC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150DE6C0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x150DE6C4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x150DE6C8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x150DE6CC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x150DE6D0: jr          $ra
    // 0x150DE6D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150DE6D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1508D850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508D850: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1508D854: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1508D858: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1508D85C: addiu       $t4, $t4, 0x23B0
    ctx->r12 = ADD32(ctx->r12, 0X23B0);
    // 0x1508D860: addiu       $a3, $a3, -0x3D30
    ctx->r7 = ADD32(ctx->r7, -0X3D30);
    // 0x1508D864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508D868: addiu       $t3, $zero, 0x32C
    ctx->r11 = ADD32(0, 0X32C);
    // 0x1508D86C: multu       $a0, $t3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508D870: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x1508D874: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x1508D878: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1508D87C: addiu       $v1, $v0, 0x11C
    ctx->r3 = ADD32(ctx->r2, 0X11C);
    // 0x1508D880: addu        $t0, $v1, $a2
    ctx->r8 = ADD32(ctx->r3, ctx->r6);
    // 0x1508D884: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x1508D888: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1508D88C: addiu       $t2, $v0, 0x29C
    ctx->r10 = ADD32(ctx->r2, 0X29C);
    // 0x1508D890: mflo        $t6
    ctx->r14 = lo;
    // 0x1508D894: addu        $t1, $a3, $t6
    ctx->r9 = ADD32(ctx->r7, ctx->r14);
    // 0x1508D898: lw          $t8, 0x31C($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X31C);
    // 0x1508D89C: sb          $t7, 0x129($t8)
    MEM_B(0X129, ctx->r24) = ctx->r15;
    // 0x1508D8A0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x1508D8A4: bgez        $a1, L_1508D8B4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1508D8A8: nop
    
            goto L_1508D8B4;
    }
    // 0x1508D8A8: nop

    // 0x1508D8AC: b           L_1508DA0C
    // 0x1508D8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1508DA0C;
    // 0x1508D8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508D8B4:
    // 0x1508D8B4: multu       $a1, $t3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508D8B8: lwc1        $f6, 0x14($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X14);
    // 0x1508D8BC: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x1508D8C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1508D8C4: mflo        $t9
    ctx->r25 = lo;
    // 0x1508D8C8: addu        $v0, $a3, $t9
    ctx->r2 = ADD32(ctx->r7, ctx->r25);
    // 0x1508D8CC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508D8D0: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508D8D4: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508D8D8: lwc1        $f4, -0x2574($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2574);
    // 0x1508D8DC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x1508D8E0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1508D8E4: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508D8E8: nop

    // 0x1508D8EC: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1508D8F0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1508D8F4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508D8F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1508D8FC: nop

    // 0x1508D900: bc1f        L_1508D910
    if (!c1cs) {
        // 0x1508D904: nop
    
            goto L_1508D910;
    }
    // 0x1508D904: nop

    // 0x1508D908: b           L_1508D930
    // 0x1508D90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1508D930;
    // 0x1508D90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508D910:
    // 0x1508D910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508D914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x1508D918: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1508D91C: nop

    // 0x1508D920: bc1f        L_1508D930
    if (!c1cs) {
        // 0x1508D924: nop
    
            goto L_1508D930;
    }
    // 0x1508D924: nop

    // 0x1508D928: b           L_1508D930
    // 0x1508D92C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1508D930;
    // 0x1508D92C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1508D930:
    // 0x1508D930: lb          $t5, 0xBD0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XBD0);
    // 0x1508D934: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x1508D938: addu        $a3, $t2, $a2
    ctx->r7 = ADD32(ctx->r10, ctx->r6);
    // 0x1508D93C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1508D940: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x1508D944: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x1508D948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1508D94C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x1508D950: lh          $v1, 0x7320($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7320);
    // 0x1508D954: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x1508D958: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1508D95C: beql        $at, $zero, L_1508D9AC
    if (ctx->r1 == 0) {
        // 0x1508D960: lw          $t9, 0x0($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X0);
            goto L_1508D9AC;
    }
    goto skip_0;
    // 0x1508D960: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x1508D964: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x1508D968: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x1508D96C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1508D970: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x1508D974: addu        $t5, $t9, $a2
    ctx->r13 = ADD32(ctx->r25, ctx->r6);
    // 0x1508D978: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x1508D97C: lw          $t7, 0x16C0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X16C0);
    // 0x1508D980: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x1508D984: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    // 0x1508D988: and         $t6, $t8, $t7
    ctx->r14 = ctx->r24 & ctx->r15;
    // 0x1508D98C: beql        $t6, $zero, L_1508D9AC
    if (ctx->r14 == 0) {
        // 0x1508D990: lw          $t9, 0x0($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X0);
            goto L_1508D9AC;
    }
    goto skip_1;
    // 0x1508D990: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x1508D994: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x1508D998: jal         0x1508EB90
    // 0x1508D99C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_1508EB90(rdram, ctx);
        goto after_0;
    // 0x1508D99C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1508D9A0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x1508D9A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1508D9A8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
L_1508D9AC:
    // 0x1508D9AC: bnel        $t9, $zero, L_1508DA10
    if (ctx->r25 != 0) {
        // 0x1508D9B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1508DA10;
    }
    goto skip_2;
    // 0x1508D9B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x1508D9B4: lw          $t5, 0x31C($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X31C);
    // 0x1508D9B8: sb          $zero, 0x12A($t5)
    MEM_B(0X12A, ctx->r13) = 0;
    // 0x1508D9BC: jal         0x150ADA68
    // 0x1508D9C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1508D9C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x1508D9C4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1508D9C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508D9CC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1508D9D0: lb          $t8, 0xBD0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0XBD0);
    // 0x1508D9D4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1508D9D8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1508D9DC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x1508D9E0: lb          $t7, 0x72E8($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X72E8);
    // 0x1508D9E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1508D9E8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508D9EC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x1508D9F0: nop

    // 0x1508D9F4: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1508D9F8: beql        $at, $zero, L_1508DA10
    if (ctx->r1 == 0) {
        // 0x1508D9FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1508DA10;
    }
    goto skip_3;
    // 0x1508D9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x1508DA00: lw          $t8, 0x31C($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X31C);
    // 0x1508DA04: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1508DA08: sb          $t5, 0x12A($t8)
    MEM_B(0X12A, ctx->r24) = ctx->r13;
L_1508DA0C:
    // 0x1508DA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1508DA10:
    // 0x1508DA10: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1508DA14: jr          $ra
    // 0x1508DA18: nop

    return;
    return;
    // 0x1508DA18: nop

;}
RECOMP_FUNC void func_150585F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150585F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150585F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150585F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150585FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15058600: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15058604: lbu         $t6, 0x109($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X109);
    // 0x15058608: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1505860C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15058610: bgez        $t6, L_15058624
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15058614: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15058624;
    }
    // 0x15058614: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15058618: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505861C: nop

    // 0x15058620: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15058624:
    // 0x15058624: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058628: lwc1        $f10, -0x6B88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B88);
    // 0x1505862C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15058630: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15058634: mul.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15058638: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1505863C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x15058640: jal         0x1505A3A8
    // 0x15058644: nop

    func_1505A3A8(rdram, ctx);
        goto after_0;
    // 0x15058644: nop

    after_0:
    // 0x15058648: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505864C: lwc1        $f18, -0x6B84($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B84);
    // 0x15058650: lwc1        $f16, 0x1CC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1CC);
    // 0x15058654: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15058658: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1505865C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x15058660: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15058664: bc1fl       L_15058678
    if (!c1cs) {
        // 0x15058668: lbu         $v0, 0xAD($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XAD);
            goto L_15058678;
    }
    goto skip_0;
    // 0x15058668: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    skip_0:
    // 0x1505866C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15058670: swc1        $f4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f4.u32l;
    // 0x15058674: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
L_15058678:
    // 0x15058678: beq         $v0, $zero, L_150586F8
    if (ctx->r2 == 0) {
        // 0x1505867C: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_150586F8;
    }
    // 0x1505867C: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x15058680: beq         $at, $zero, L_150586F8
    if (ctx->r1 == 0) {
        // 0x15058684: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_150586F8;
    }
    // 0x15058684: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x15058688: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1505868C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15058690: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x15058694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058698: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1505869C: nop

    // 0x150586A0: bc1fl       L_150586B8
    if (!c1cs) {
        // 0x150586A4: lwc1        $f10, 0x118($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
            goto L_150586B8;
    }
    goto skip_1;
    // 0x150586A4: lwc1        $f10, 0x118($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
    skip_1:
    // 0x150586A8: lwc1        $f8, -0x6B80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B80);
    // 0x150586AC: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150586B0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x150586B4: lwc1        $f10, 0x118($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
L_150586B8:
    // 0x150586B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150586BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150586C0: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x150586C4: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150586C8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150586CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150586D0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x150586D4: nop

    // 0x150586D8: bc1f        L_150586F8
    if (!c1cs) {
        // 0x150586DC: nop
    
            goto L_150586F8;
    }
    // 0x150586DC: nop

    // 0x150586E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150586E4: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x150586E8: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
    // 0x150586EC: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x150586F0: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x150586F4: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
L_150586F8:
    // 0x150586F8: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x150586FC: beql        $t7, $zero, L_15058718
    if (ctx->r15 == 0) {
        // 0x15058700: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_15058718;
    }
    goto skip_2;
    // 0x15058700: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_2:
    // 0x15058704: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15058708: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1505870C: beql        $v1, $t8, L_15058720
    if (ctx->r3 == ctx->r24) {
        // 0x15058710: lbu         $v0, 0x104($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X104);
            goto L_15058720;
    }
    goto skip_3;
    // 0x15058710: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
    skip_3:
    // 0x15058714: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15058718:
    // 0x15058718: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x1505871C: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
L_15058720:
    // 0x15058720: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15058724: beq         $v0, $at, L_15058884
    if (ctx->r2 == ctx->r1) {
        // 0x15058728: addiu       $at, $zero, 0xFE
        ctx->r1 = ADD32(0, 0XFE);
            goto L_15058884;
    }
    // 0x15058728: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x1505872C: beq         $v0, $at, L_15058754
    if (ctx->r2 == ctx->r1) {
        // 0x15058730: lui         $a0, 0x800C
        ctx->r4 = S32(0X800C << 16);
            goto L_15058754;
    }
    // 0x15058730: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15058734: lbu         $t9, 0x1CA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1CA);
    // 0x15058738: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x1505873C: bnel        $t9, $zero, L_15058754
    if (ctx->r25 != 0) {
        // 0x15058740: sb          $t1, 0x104($s0)
        MEM_B(0X104, ctx->r16) = ctx->r9;
            goto L_15058754;
    }
    goto skip_4;
    // 0x15058740: sb          $t1, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r9;
    skip_4:
    // 0x15058744: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x15058748: beql        $v1, $t0, L_15058758
    if (ctx->r3 == ctx->r8) {
        // 0x1505874C: lh          $t2, 0x10C($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X10C);
            goto L_15058758;
    }
    goto skip_5;
    // 0x1505874C: lh          $t2, 0x10C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X10C);
    skip_5:
    // 0x15058750: sb          $t1, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r9;
L_15058754:
    // 0x15058754: lh          $t2, 0x10C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X10C);
L_15058758:
    // 0x15058758: lh          $t3, -0x3D9C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3D9C);
    // 0x1505875C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058760: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15058764: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x15058768: sh          $t4, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r12;
    // 0x1505876C: lwc1        $f16, -0x6B7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6B7C);
    // 0x15058770: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15058774: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x15058778: nop

    // 0x1505877C: bc1fl       L_1505879C
    if (!c1cs) {
        // 0x15058780: lh          $t7, 0x10C($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X10C);
            goto L_1505879C;
    }
    goto skip_6;
    // 0x15058780: lh          $t7, 0x10C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10C);
    skip_6:
    // 0x15058784: lw          $t5, 0xF4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF4);
    // 0x15058788: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x1505878C: beql        $t6, $zero, L_1505879C
    if (ctx->r14 == 0) {
        // 0x15058790: lh          $t7, 0x10C($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X10C);
            goto L_1505879C;
    }
    goto skip_7;
    // 0x15058790: lh          $t7, 0x10C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10C);
    skip_7:
    // 0x15058794: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x15058798: lh          $t7, 0x10C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10C);
L_1505879C:
    // 0x1505879C: bgtzl       $t7, L_150587CC
    if (SIGNED(ctx->r15) > 0) {
        // 0x150587A0: lbu         $t8, 0x104($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X104);
            goto L_150587CC;
    }
    goto skip_8;
    // 0x150587A0: lbu         $t8, 0x104($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X104);
    skip_8:
    // 0x150587A4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150587A8: beql        $v0, $zero, L_150587B8
    if (ctx->r2 == 0) {
        // 0x150587AC: sh          $zero, 0x10C($s0)
        MEM_H(0X10C, ctx->r16) = 0;
            goto L_150587B8;
    }
    goto skip_9;
    // 0x150587AC: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    skip_9:
    // 0x150587B0: sb          $zero, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = 0;
    // 0x150587B4: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
L_150587B8:
    // 0x150587B8: jal         0x1505E874
    // 0x150587BC: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_1505E874(rdram, ctx);
        goto after_1;
    // 0x150587BC: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_1:
    // 0x150587C0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150587C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150587C8: lbu         $t8, 0x104($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X104);
L_150587CC:
    // 0x150587CC: bnel        $t8, $zero, L_15058854
    if (ctx->r24 != 0) {
        // 0x150587D0: lbu         $v0, 0x10B($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X10B);
            goto L_15058854;
    }
    goto skip_10;
    // 0x150587D0: lbu         $v0, 0x10B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10B);
    skip_10:
    // 0x150587D4: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
    // 0x150587D8: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    // 0x150587DC: swc1        $f12, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f12.u32l;
    // 0x150587E0: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x150587E4: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x150587E8: beq         $t9, $zero, L_15058810
    if (ctx->r25 == 0) {
        // 0x150587EC: sh          $v0, 0x76($s0)
        MEM_H(0X76, ctx->r16) = ctx->r2;
            goto L_15058810;
    }
    // 0x150587EC: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x150587F0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x150587F4: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x150587F8: bnel        $v1, $t0, L_15058840
    if (ctx->r3 != ctx->r8) {
        // 0x150587FC: lbu         $v0, 0x238($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X238);
            goto L_15058840;
    }
    goto skip_11;
    // 0x150587FC: lbu         $v0, 0x238($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X238);
    skip_11:
    // 0x15058800: jal         0x1506B078
    // 0x15058804: nop

    func_1506B078(rdram, ctx);
        goto after_2;
    // 0x15058804: nop

    after_2:
    // 0x15058808: b           L_15058840
    // 0x1505880C: lbu         $v0, 0x238($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X238);
        goto L_15058840;
    // 0x1505880C: lbu         $v0, 0x238($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X238);
L_15058810:
    // 0x15058810: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15058814: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15058818: bnel        $v1, $t1, L_15058840
    if (ctx->r3 != ctx->r9) {
        // 0x1505881C: lbu         $v0, 0x238($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X238);
            goto L_15058840;
    }
    goto skip_12;
    // 0x1505881C: lbu         $v0, 0x238($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X238);
    skip_12:
    // 0x15058820: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15058824: lw          $t2, 0xF8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XF8);
    // 0x15058828: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1505882C: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x15058830: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x15058834: sw          $t3, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r11;
    // 0x15058838: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x1505883C: lbu         $v0, 0x238($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X238);
L_15058840:
    // 0x15058840: beql        $v0, $zero, L_15058888
    if (ctx->r2 == 0) {
        // 0x15058844: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15058888;
    }
    goto skip_13;
    // 0x15058844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_13:
    // 0x15058848: b           L_15058884
    // 0x1505884C: sb          $v0, 0x23A($s0)
    MEM_B(0X23A, ctx->r16) = ctx->r2;
        goto L_15058884;
    // 0x1505884C: sb          $v0, 0x23A($s0)
    MEM_B(0X23A, ctx->r16) = ctx->r2;
    // 0x15058850: lbu         $v0, 0x10B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X10B);
L_15058854:
    // 0x15058854: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x15058858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505885C: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x15058860: bne         $t4, $zero, L_15058884
    if (ctx->r12 != 0) {
        // 0x15058864: andi        $t5, $v0, 0x4
        ctx->r13 = ctx->r2 & 0X4;
            goto L_15058884;
    }
    // 0x15058864: andi        $t5, $v0, 0x4
    ctx->r13 = ctx->r2 & 0X4;
    // 0x15058868: beq         $t5, $zero, L_15058878
    if (ctx->r13 == 0) {
        // 0x1505886C: lhu         $a2, 0x76($s0)
        ctx->r6 = MEM_HU(ctx->r16, 0X76);
            goto L_15058878;
    }
    // 0x1505886C: lhu         $a2, 0x76($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X76);
    // 0x15058870: xori        $t6, $a2, 0x8000
    ctx->r14 = ctx->r6 ^ 0X8000;
    // 0x15058874: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
L_15058878:
    // 0x15058878: sb          $t8, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r24;
    // 0x1505887C: jal         0x150599C8
    // 0x15058880: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_150599C8(rdram, ctx);
        goto after_3;
    // 0x15058880: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
L_15058884:
    // 0x15058884: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15058888:
    // 0x15058888: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1505888C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15058890: jr          $ra
    // 0x15058894: nop

    return;
    return;
    // 0x15058894: nop

;}
RECOMP_FUNC void func_151F2D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F2D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2D74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151F2D78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151F2D7C: jal         0x10024880
    // 0x151F2D80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2D80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151F2D84: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F2D88: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151F2D8C: bgez        $t6, L_151F2DA0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151F2D90: nop
    
            goto L_151F2DA0;
    }
    // 0x151F2D90: nop

    // 0x151F2D94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2D98: b           L_151F2DD0
    // 0x151F2D9C: sw          $zero, 0xE08($at)
    MEM_W(0XE08, ctx->r1) = 0;
        goto L_151F2DD0;
    // 0x151F2D9C: sw          $zero, 0xE08($at)
    MEM_W(0XE08, ctx->r1) = 0;
L_151F2DA0:
    // 0x151F2DA0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F2DA4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x151F2DA8: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x151F2DAC: bne         $at, $zero, L_151F2DC4
    if (ctx->r1 != 0) {
        // 0x151F2DB0: nop
    
            goto L_151F2DC4;
    }
    // 0x151F2DB0: nop

    // 0x151F2DB4: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x151F2DB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2DBC: b           L_151F2DD0
    // 0x151F2DC0: sw          $t8, 0xE08($at)
    MEM_W(0XE08, ctx->r1) = ctx->r24;
        goto L_151F2DD0;
    // 0x151F2DC0: sw          $t8, 0xE08($at)
    MEM_W(0XE08, ctx->r1) = ctx->r24;
L_151F2DC4:
    // 0x151F2DC4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x151F2DC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2DCC: sw          $t9, 0xE08($at)
    MEM_W(0XE08, ctx->r1) = ctx->r25;
L_151F2DD0:
    // 0x151F2DD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x151F2DD4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2DD8: sw          $t0, 0xE10($at)
    MEM_W(0XE10, ctx->r1) = ctx->r8;
    // 0x151F2DDC: jal         0x10024880
    // 0x151F2DE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x151F2DE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151F2DE4: b           L_151F2DEC
    // 0x151F2DE8: nop

        goto L_151F2DEC;
    // 0x151F2DE8: nop

L_151F2DEC:
    // 0x151F2DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F2DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F2DF4: jr          $ra
    // 0x151F2DF8: nop

    return;
    return;
    // 0x151F2DF8: nop

;}
RECOMP_FUNC void func_15133E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133E3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15133E40: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15133E44: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15133E48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15133E4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15133E50: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x15133E54: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15133E58: addiu       $t6, $t6, 0x3860
    ctx->r14 = ADD32(ctx->r14, 0X3860);
    // 0x15133E5C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15133E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15133E64: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x15133E68: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x15133E6C: jal         0x15169260
    // 0x15133E70: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15133E70: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    after_0:
    // 0x15133E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15133E78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15133E7C: jr          $ra
    // 0x15133E80: nop

    return;
    return;
    // 0x15133E80: nop

;}
RECOMP_FUNC void func_150B648C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B648C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150B6490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150B6494: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x150B6498: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B649C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x150B64A0: bne         $s0, $zero, L_150B6540
    if (ctx->r16 != 0) {
        // 0x150B64A4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_150B6540;
    }
    // 0x150B64A4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150B64A8: jal         0x151423D8
    // 0x150B64AC: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150B64AC: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    after_0:
    // 0x150B64B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B64B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B64B8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150B64BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B64C0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B64C4: addiu       $a0, $zero, 0xEA
    ctx->r4 = ADD32(0, 0XEA);
    // 0x150B64C8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x150B64CC: jal         0x151423D8
    // 0x150B64D0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150B64D0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150B64D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B64D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B64DC: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    // 0x150B64E0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150B64E4: jal         0x151423D8
    // 0x150B64E8: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150B64E8: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x150B64EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B64F0: lwc1        $f18, -0x334($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X334);
    // 0x150B64F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150B64F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B64FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6500: lwc1        $f10, -0x330($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X330);
    // 0x150B6504: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B6508: addiu       $a0, $zero, 0xEA
    ctx->r4 = ADD32(0, 0XEA);
    // 0x150B650C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150B6510: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x150B6514: jal         0x151423D8
    // 0x150B6518: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150B6518: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x150B651C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6520: lwc1        $f16, -0x32C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X32C);
    // 0x150B6524: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150B6528: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B652C: nop

    // 0x150B6530: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B6534: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150B6538: b           L_150B65E4
    // 0x150B653C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_150B65E4;
    // 0x150B653C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_150B6540:
    // 0x150B6540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150B6544: bne         $v0, $at, L_150B659C
    if (ctx->r2 != ctx->r1) {
        // 0x150B6548: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_150B659C;
    }
    // 0x150B6548: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x150B654C: lui         $a2, 0x4115
    ctx->r6 = S32(0X4115 << 16);
    // 0x150B6550: ori         $a2, $a2, 0x9999
    ctx->r6 = ctx->r6 | 0X9999;
    // 0x150B6554: addiu       $a0, $zero, -0x45
    ctx->r4 = ADD32(0, -0X45);
    // 0x150B6558: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x150B655C: jal         0x15143794
    // 0x150B6560: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_15143794(rdram, ctx);
        goto after_4;
    // 0x150B6560: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x150B6564: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x150B6568: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x150B656C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150B6570: addiu       $t8, $t8, -0x3C4
    ctx->r24 = ADD32(ctx->r24, -0X3C4);
    // 0x150B6574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150B6578: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150B657C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x150B6580: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x150B6584: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150B6588: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x150B658C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x150B6590: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x150B6594: b           L_150B65E4
    // 0x150B6598: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
        goto L_150B65E4;
    // 0x150B6598: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
L_150B659C:
    // 0x150B659C: lui         $a2, 0x4115
    ctx->r6 = S32(0X4115 << 16);
    // 0x150B65A0: ori         $a2, $a2, 0x9999
    ctx->r6 = ctx->r6 | 0X9999;
    // 0x150B65A4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x150B65A8: jal         0x15143794
    // 0x150B65AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_15143794(rdram, ctx);
        goto after_5;
    // 0x150B65AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x150B65B0: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x150B65B4: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x150B65B8: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150B65BC: addiu       $t4, $t4, -0x3C4
    ctx->r12 = ADD32(ctx->r12, -0X3C4);
    // 0x150B65C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150B65C4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150B65C8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150B65CC: addiu       $t2, $sp, 0x24
    ctx->r10 = ADD32(ctx->r29, 0X24);
    // 0x150B65D0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150B65D4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x150B65D8: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x150B65DC: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150B65E0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
L_150B65E4:
    // 0x150B65E4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x150B65E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B65EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150B65F0: lwc1        $f8, -0x3A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3A0);
    // 0x150B65F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B65F8: lwc1        $f10, -0x328($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X328);
    // 0x150B65FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6600: lwc1        $f4, -0x324($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X324);
    // 0x150B6604: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6608: lwc1        $f16, -0x320($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X320);
    // 0x150B660C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6610: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150B6614: lwc1        $f18, -0x394($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X394);
    // 0x150B6618: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x150B661C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150B6620: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6624: sb          $t0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r8;
    // 0x150B6628: sb          $t6, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r14;
    // 0x150B662C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150B6630: lwc1        $f6, -0x388($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X388);
    // 0x150B6634: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150B6638: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x150B663C: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x150B6640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6644: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x150B6648: lh          $t6, -0x37C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X37C);
    // 0x150B664C: lwc1        $f8, -0x31C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X31C);
    // 0x150B6650: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150B6654: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x150B6658: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B665C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150B6660: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x150B6664: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x150B6668: addiu       $t2, $zero, 0x33
    ctx->r10 = ADD32(0, 0X33);
    // 0x150B666C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150B6670: addiu       $t8, $zero, 0x55
    ctx->r24 = ADD32(0, 0X55);
    // 0x150B6674: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x150B6678: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x150B667C: sh          $t1, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r9;
    // 0x150B6680: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x150B6684: sb          $t4, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r12;
    // 0x150B6688: sb          $t7, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r15;
    // 0x150B668C: sb          $t2, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r10;
    // 0x150B6690: sb          $t5, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r13;
    // 0x150B6694: sb          $t8, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r24;
    // 0x150B6698: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x150B669C: lh          $a2, -0x372($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X372);
    // 0x150B66A0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x150B66A4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x150B66A8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x150B66AC: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x150B66B0: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x150B66B4: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x150B66B8: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x150B66BC: sh          $t6, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r14;
    // 0x150B66C0: jal         0x150B3F5C
    // 0x150B66C4: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    func_150B3F5C(rdram, ctx);
        goto after_6;
    // 0x150B66C4: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x150B66C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B66CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150B66D0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150B66D4: jr          $ra
    // 0x150B66D8: nop

    return;
    return;
    // 0x150B66D8: nop

;}
RECOMP_FUNC void func_1503E260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503E260: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1503E264: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1503E268: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1503E26C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1503E270: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x1503E274: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1503E278: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1503E27C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1503E280: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1503E284: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1503E288: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1503E28C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503E290: addiu       $t7, $t7, 0x6660
    ctx->r15 = ADD32(ctx->r15, 0X6660);
    // 0x1503E294: sll         $t6, $s2, 4
    ctx->r14 = S32(ctx->r18 << 4);
    // 0x1503E298: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
    // 0x1503E29C: lbu         $t8, 0xF($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0XF);
    // 0x1503E2A0: beql        $t8, $zero, L_1503E39C
    if (ctx->r24 == 0) {
        // 0x1503E2A4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1503E39C;
    }
    goto skip_0;
    // 0x1503E2A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1503E2A8: lbu         $v1, 0xE($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0XE);
    // 0x1503E2AC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1503E2B0: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x1503E2B4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1503E2B8: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x1503E2BC: lw          $v0, 0x4460($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4460);
    // 0x1503E2C0: addu        $s6, $s6, $v1
    ctx->r22 = ADD32(ctx->r22, ctx->r3);
    // 0x1503E2C4: beql        $v0, $zero, L_1503E340
    if (ctx->r2 == 0) {
        // 0x1503E2C8: sll         $t7, $s2, 2
        ctx->r15 = S32(ctx->r18 << 2);
            goto L_1503E340;
    }
    goto skip_1;
    // 0x1503E2C8: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    skip_1:
    // 0x1503E2CC: lbu         $s6, -0x76EC($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X76EC);
    // 0x1503E2D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1503E2D4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1503E2D8: blez        $s6, L_1503E33C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x1503E2DC: addiu       $s5, $zero, 0x32C
        ctx->r21 = ADD32(0, 0X32C);
            goto L_1503E33C;
    }
    // 0x1503E2DC: addiu       $s5, $zero, 0x32C
    ctx->r21 = ADD32(0, 0X32C);
    // 0x1503E2E0: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x1503E2E4: addiu       $s4, $s4, -0x3D30
    ctx->r20 = ADD32(ctx->r20, -0X3D30);
    // 0x1503E2E8: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_1503E2EC:
    // 0x1503E2EC: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x1503E2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503E2F4: beql        $s3, $t0, L_1503E334
    if (ctx->r19 == ctx->r8) {
        // 0x1503E2F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1503E334;
    }
    goto skip_2;
    // 0x1503E2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x1503E2FC: jal         0x1503E1F4
    // 0x1503E300: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1503E1F4(rdram, ctx);
        goto after_0;
    // 0x1503E300: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x1503E304: beql        $v0, $zero, L_1503E334
    if (ctx->r2 == 0) {
        // 0x1503E308: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1503E334;
    }
    goto skip_3;
    // 0x1503E308: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x1503E30C: multu       $s2, $s5
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1503E310: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x1503E314: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1503E318: mflo        $t1
    ctx->r9 = lo;
    // 0x1503E31C: addu        $v0, $s4, $t1
    ctx->r2 = ADD32(ctx->r20, ctx->r9);
    // 0x1503E320: lw          $t2, 0x94($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X94);
    // 0x1503E324: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x1503E328: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1503E32C: sw          $t6, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r14;
    // 0x1503E330: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1503E334:
    // 0x1503E334: bne         $s0, $s6, L_1503E2EC
    if (ctx->r16 != ctx->r22) {
        // 0x1503E338: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1503E2EC;
    }
    // 0x1503E338: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1503E33C:
    // 0x1503E33C: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
L_1503E340:
    // 0x1503E340: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x1503E344: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E348: addu        $t7, $t7, $s2
    ctx->r15 = ADD32(ctx->r15, ctx->r18);
    // 0x1503E34C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E350: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x1503E354: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x1503E358: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E35C: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x1503E360: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1503E364: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1503E368: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E36C: sb          $zero, 0xF($s7)
    MEM_B(0XF, ctx->r23) = 0;
    // 0x1503E370: beq         $v1, $zero, L_1503E388
    if (ctx->r3 == 0) {
        // 0x1503E374: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_1503E388;
    }
    // 0x1503E374: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1503E378: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1503E37C: jal         0x10004074
    // 0x1503E380: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1503E380: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1503E384: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_1503E388:
    // 0x1503E388: lbu         $t9, 0x74($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X74);
    // 0x1503E38C: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
    // 0x1503E390: andi        $t0, $t9, 0xFF7F
    ctx->r8 = ctx->r25 & 0XFF7F;
    // 0x1503E394: sb          $t0, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r8;
    // 0x1503E398: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1503E39C:
    // 0x1503E39C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1503E3A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1503E3A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1503E3A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1503E3AC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1503E3B0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1503E3B4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x1503E3B8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x1503E3BC: jr          $ra
    // 0x1503E3C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1503E3C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_15191A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191A84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15191A88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15191A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15191A90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15191A94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15191A98: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15191A9C: lbu         $v0, 0x33($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X33);
    // 0x15191AA0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15191AA4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x15191AA8: beq         $v0, $at, L_15191ABC
    if (ctx->r2 == ctx->r1) {
        // 0x15191AAC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_15191ABC;
    }
    // 0x15191AAC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x15191AB0: beq         $v0, $at, L_15191ABC
    if (ctx->r2 == ctx->r1) {
        // 0x15191AB4: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_15191ABC;
    }
    // 0x15191AB4: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x15191AB8: bne         $v0, $at, L_15191AF4
    if (ctx->r2 != ctx->r1) {
        // 0x15191ABC: addiu       $a2, $s0, 0x28
        ctx->r6 = ADD32(ctx->r16, 0X28);
            goto L_15191AF4;
    }
L_15191ABC:
    // 0x15191ABC: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x15191AC0: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x15191AC4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x15191AC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x15191ACC: beq         $t6, $t8, L_15191AE4
    if (ctx->r14 == ctx->r24) {
        // 0x15191AD0: nop
    
            goto L_15191AE4;
    }
    // 0x15191AD0: nop

    // 0x15191AD4: lbu         $t9, 0x4($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X4);
    // 0x15191AD8: lbu         $t1, 0x4($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4);
    // 0x15191ADC: bnel        $t9, $t1, L_15191B7C
    if (ctx->r25 != ctx->r9) {
        // 0x15191AE0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15191B7C;
    }
    goto skip_0;
    // 0x15191AE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_15191AE4:
    // 0x15191AE4: jal         0x1516972C
    // 0x15191AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15191AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15191AEC: b           L_15191B7C
    // 0x15191AF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15191B7C;
    // 0x15191AF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15191AF4:
    // 0x15191AF4: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x15191AF8: bnel        $v0, $at, L_15191B14
    if (ctx->r2 != ctx->r1) {
        // 0x15191AFC: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_15191B14;
    }
    goto skip_1;
    // 0x15191AFC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    skip_1:
    // 0x15191B00: jal         0x1516972C
    // 0x15191B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15191B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15191B08: b           L_15191B7C
    // 0x15191B0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15191B7C;
    // 0x15191B0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15191B10: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_15191B14:
    // 0x15191B14: bne         $v0, $at, L_15191B64
    if (ctx->r2 != ctx->r1) {
        // 0x15191B18: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_15191B64;
    }
    // 0x15191B18: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15191B1C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x15191B20: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x15191B24: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x15191B28: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x15191B2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x15191B30: beql        $t2, $t4, L_15191B4C
    if (ctx->r10 == ctx->r12) {
        // 0x15191B34: lbu         $t8, 0xD($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XD);
            goto L_15191B4C;
    }
    goto skip_2;
    // 0x15191B34: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    skip_2:
    // 0x15191B38: lbu         $t5, 0x4($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X4);
    // 0x15191B3C: lbu         $t6, 0x4($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X4);
    // 0x15191B40: bnel        $t5, $t6, L_15191B7C
    if (ctx->r13 != ctx->r14) {
        // 0x15191B44: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15191B7C;
    }
    goto skip_3;
    // 0x15191B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x15191B48: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
L_15191B4C:
    // 0x15191B4C: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x15191B50: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x15191B54: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x15191B58: sb          $t0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r8;
    // 0x15191B5C: b           L_15191B7C
    // 0x15191B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15191B7C;
    // 0x15191B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15191B64:
    // 0x15191B64: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    // 0x15191B68: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x15191B6C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x15191B70: jal         0x15169850
    // 0x15191B74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_15169850(rdram, ctx);
        goto after_2;
    // 0x15191B74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x15191B78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15191B7C:
    // 0x15191B7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15191B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15191B84: jr          $ra
    // 0x15191B88: nop

    return;
    return;
    // 0x15191B88: nop

;}
RECOMP_FUNC void func_1503FB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503FB40: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x1503FB44: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x1503FB48: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x1503FB4C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x1503FB50: andi        $s2, $a2, 0xFFFF
    ctx->r18 = ctx->r6 & 0XFFFF;
    // 0x1503FB54: andi        $s3, $a1, 0xFFFF
    ctx->r19 = ctx->r5 & 0XFFFF;
    // 0x1503FB58: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x1503FB5C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x1503FB60: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x1503FB64: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x1503FB68: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x1503FB6C: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x1503FB70: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x1503FB74: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x1503FB78: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x1503FB7C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x1503FB80: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x1503FB84: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x1503FB88: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x1503FB8C: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x1503FB90: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1503FB94: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1503FB98: lhu         $s1, -0x18F0($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X18F0);
    // 0x1503FB9C: sb          $zero, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = 0;
    // 0x1503FBA0: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x1503FBA4: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x1503FBA8: jal         0x1509CB68
    // 0x1503FBAC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_1509CB68(rdram, ctx);
        goto after_0;
    // 0x1503FBAC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_0:
    // 0x1503FBB0: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x1503FBB4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x1503FBB8: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1503FBBC: addiu       $t8, $t8, 0x59A0
    ctx->r24 = ADD32(ctx->r24, 0X59A0);
    // 0x1503FBC0: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x1503FBC4: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    // 0x1503FBC8: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x1503FBCC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x1503FBD0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x1503FBD4: slti        $at, $v0, 0x13
    ctx->r1 = SIGNED(ctx->r2) < 0X13 ? 1 : 0;
    // 0x1503FBD8: beq         $at, $zero, L_1503FBE8
    if (ctx->r1 == 0) {
        // 0x1503FBDC: lui         $v1, 0x8008
        ctx->r3 = S32(0X8008 << 16);
            goto L_1503FBE8;
    }
    // 0x1503FBDC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1503FBE0: b           L_1503FBEC
    // 0x1503FBE4: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
        goto L_1503FBEC;
    // 0x1503FBE4: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
L_1503FBE8:
    // 0x1503FBE8: addiu       $s4, $zero, 0x13
    ctx->r20 = ADD32(0, 0X13);
L_1503FBEC:
    // 0x1503FBEC: addiu       $v1, $v1, 0x448C
    ctx->r3 = ADD32(ctx->r3, 0X448C);
    // 0x1503FBF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1503FBF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1503FBF8: sw          $t9, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r25;
    // 0x1503FBFC: bne         $v0, $zero, L_1503FC38
    if (ctx->r2 != 0) {
        // 0x1503FC00: andi        $t0, $s1, 0x20
        ctx->r8 = ctx->r17 & 0X20;
            goto L_1503FC38;
    }
    // 0x1503FC00: andi        $t0, $s1, 0x20
    ctx->r8 = ctx->r17 & 0X20;
    // 0x1503FC04: beq         $t0, $zero, L_1503FC38
    if (ctx->r8 == 0) {
        // 0x1503FC08: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1503FC38;
    }
    // 0x1503FC08: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x1503FC0C: andi        $t1, $s0, 0x10
    ctx->r9 = ctx->r16 & 0X10;
    // 0x1503FC10: beq         $t1, $zero, L_1503FC38
    if (ctx->r9 == 0) {
        // 0x1503FC14: addiu       $t2, $zero, 0x3C
        ctx->r10 = ADD32(0, 0X3C);
            goto L_1503FC38;
    }
    // 0x1503FC14: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x1503FC18: jal         0x15017790
    // 0x1503FC1C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    func_15017790(rdram, ctx);
        goto after_1;
    // 0x1503FC1C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    after_1:
    // 0x1503FC20: jal         0x150177F8
    // 0x1503FC24: nop

    func_150177F8(rdram, ctx);
        goto after_2;
    // 0x1503FC24: nop

    after_2:
    // 0x1503FC28: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1503FC2C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1503FC30: addiu       $v1, $v1, 0x448C
    ctx->r3 = ADD32(ctx->r3, 0X448C);
    // 0x1503FC34: lw          $v0, 0x448C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X448C);
L_1503FC38:
    // 0x1503FC38: beq         $v0, $zero, L_1503FC58
    if (ctx->r2 == 0) {
        // 0x1503FC3C: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_1503FC58;
    }
    // 0x1503FC3C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1503FC40: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1503FC44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503FC48: subu        $t4, $v0, $t3
    ctx->r12 = SUB32(ctx->r2, ctx->r11);
    // 0x1503FC4C: bgtz        $t4, L_1503FC58
    if (SIGNED(ctx->r12) > 0) {
        // 0x1503FC50: sw          $t4, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r12;
            goto L_1503FC58;
    }
    // 0x1503FC50: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x1503FC54: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_1503FC58:
    // 0x1503FC58: and         $t6, $s1, $s2
    ctx->r14 = ctx->r17 & ctx->r18;
    // 0x1503FC5C: beq         $t6, $zero, L_1503FCC8
    if (ctx->r14 == 0) {
        // 0x1503FC60: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1503FCC8;
    }
    // 0x1503FC60: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x1503FC64: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1503FC68: lbu         $a0, 0x4498($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4498);
    // 0x1503FC6C: jal         0x1509CA98
    // 0x1503FC70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_1509CA98(rdram, ctx);
        goto after_3;
    // 0x1503FC70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_3:
    // 0x1503FC74: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1503FC78: lbu         $a0, 0x4498($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4498);
    // 0x1503FC7C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1503FC80: jal         0x1509CA98
    // 0x1503FC84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_1509CA98(rdram, ctx);
        goto after_4;
    // 0x1503FC84: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_4:
    // 0x1503FC88: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1503FC8C: lw          $t7, 0x2E4C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2E4C);
    // 0x1503FC90: sra         $t8, $s1, 3
    ctx->r24 = S32(SIGNED(ctx->r17) >> 3);
    // 0x1503FC94: andi        $t1, $v0, 0x7
    ctx->r9 = ctx->r2 & 0X7;
    // 0x1503FC98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1503FC9C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x1503FCA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503FCA4: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x1503FCA8: and         $t4, $t3, $t0
    ctx->r12 = ctx->r11 & ctx->r8;
    // 0x1503FCAC: bne         $t4, $zero, L_1503FCC8
    if (ctx->r12 != 0) {
        // 0x1503FCB0: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_1503FCC8;
    }
    // 0x1503FCB0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1503FCB4: lbu         $a0, 0x4498($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4498);
    // 0x1503FCB8: jal         0x1509CA98
    // 0x1503FCBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_1509CA98(rdram, ctx);
        goto after_5;
    // 0x1503FCBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_5:
    // 0x1503FCC0: b           L_1504030C
    // 0x1503FCC4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
        goto L_1504030C;
    // 0x1503FCC4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_1503FCC8:
    // 0x1503FCC8: and         $t5, $s0, $s3
    ctx->r13 = ctx->r16 & ctx->r19;
    // 0x1503FCCC: bne         $t5, $zero, L_1503FCDC
    if (ctx->r13 != 0) {
        // 0x1503FCD0: andi        $t6, $s0, 0x4000
        ctx->r14 = ctx->r16 & 0X4000;
            goto L_1503FCDC;
    }
    // 0x1503FCD0: andi        $t6, $s0, 0x4000
    ctx->r14 = ctx->r16 & 0X4000;
    // 0x1503FCD4: beq         $t6, $zero, L_1503FCE4
    if (ctx->r14 == 0) {
        // 0x1503FCD8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1503FCE4;
    }
    // 0x1503FCD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1503FCDC:
    // 0x1503FCDC: b           L_15040308
    // 0x1503FCE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15040308;
    // 0x1503FCE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1503FCE4:
    // 0x1503FCE4: addiu       $a1, $sp, 0xE2
    ctx->r5 = ADD32(ctx->r29, 0XE2);
    // 0x1503FCE8: jal         0x1503F9F0
    // 0x1503FCEC: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    func_1503F9F0(rdram, ctx);
        goto after_6;
    // 0x1503FCEC: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    after_6:
    // 0x1503FCF0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x1503FCF4: addiu       $a2, $a2, 0x4488
    ctx->r6 = ADD32(ctx->r6, 0X4488);
    // 0x1503FCF8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x1503FCFC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503FD00: beql        $v0, $zero, L_1503FE78
    if (ctx->r2 == 0) {
        // 0x1503FD04: andi        $t1, $s0, 0x4
        ctx->r9 = ctx->r16 & 0X4;
            goto L_1503FE78;
    }
    goto skip_0;
    // 0x1503FD04: andi        $t1, $s0, 0x4
    ctx->r9 = ctx->r16 & 0X4;
    skip_0:
    // 0x1503FD08: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x1503FD0C: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x1503FD10: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1503FD14: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1503FD18: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x1503FD1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503FD20: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1503FD24: addiu       $a0, $a0, 0x6850
    ctx->r4 = ADD32(ctx->r4, 0X6850);
    // 0x1503FD28: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503FD2C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x1503FD30: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503FD34: mflo        $t8
    ctx->r24 = lo;
    // 0x1503FD38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1503FD3C: nop

    // 0x1503FD40: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503FD44: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1503FD48: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1503FD4C: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x1503FD50: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503FD54: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1503FD58: nop

    // 0x1503FD5C: bc1fl       L_1503FD78
    if (!c1cs) {
        // 0x1503FD60: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_1503FD78;
    }
    goto skip_1;
    // 0x1503FD60: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_1:
    // 0x1503FD64: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x1503FD68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1503FD6C: b           L_1503FD9C
    // 0x1503FD70: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
        goto L_1503FD9C;
    // 0x1503FD70: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x1503FD74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_1503FD78:
    // 0x1503FD78: nop

    // 0x1503FD7C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1503FD80: nop

    // 0x1503FD84: bc1fl       L_1503FD98
    if (!c1cs) {
        // 0x1503FD88: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_1503FD98;
    }
    goto skip_2;
    // 0x1503FD88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x1503FD8C: b           L_1503FD98
    // 0x1503FD90: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_1503FD98;
    // 0x1503FD90: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x1503FD94: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_1503FD98:
    // 0x1503FD98: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_1503FD9C:
    // 0x1503FD9C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1503FDA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503FDA4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1503FDA8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x1503FDAC: nop

    // 0x1503FDB0: bc1f        L_1503FE6C
    if (!c1cs) {
        // 0x1503FDB4: nop
    
            goto L_1503FE6C;
    }
    // 0x1503FDB4: nop

    // 0x1503FDB8: lw          $t9, -0x18D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18D8);
    // 0x1503FDBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1503FDC0: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x1503FDC4: lhu         $t1, 0x0($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0X0);
    // 0x1503FDC8: andi        $t3, $t1, 0x2000
    ctx->r11 = ctx->r9 & 0X2000;
    // 0x1503FDCC: beq         $t3, $zero, L_1503FDDC
    if (ctx->r11 == 0) {
        // 0x1503FDD0: nop
    
            goto L_1503FDDC;
    }
    // 0x1503FDD0: nop

    // 0x1503FDD4: b           L_1503FDDC
    // 0x1503FDD8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_1503FDDC;
    // 0x1503FDD8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_1503FDDC:
    // 0x1503FDDC: bnel        $v0, $at, L_1503FE18
    if (ctx->r2 != ctx->r1) {
        // 0x1503FDE0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_1503FE18;
    }
    goto skip_3;
    // 0x1503FDE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_3:
    // 0x1503FDE4: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x1503FDE8: addiu       $a3, $a3, 0x4498
    ctx->r7 = ADD32(ctx->r7, 0X4498);
    // 0x1503FDEC: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x1503FDF0: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x1503FDF4: subu        $t4, $t0, $v1
    ctx->r12 = SUB32(ctx->r8, ctx->r3);
    // 0x1503FDF8: andi        $v0, $t4, 0xFF
    ctx->r2 = ctx->r12 & 0XFF;
    // 0x1503FDFC: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1503FE00: beq         $at, $zero, L_1503FE60
    if (ctx->r1 == 0) {
        // 0x1503FE04: sb          $t4, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r12;
            goto L_1503FE60;
    }
    // 0x1503FE04: sb          $t4, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r12;
    // 0x1503FE08: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x1503FE0C: b           L_1503FE60
    // 0x1503FE10: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
        goto L_1503FE60;
    // 0x1503FE10: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x1503FE14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1503FE18:
    // 0x1503FE18: bne         $v0, $at, L_1503FE60
    if (ctx->r2 != ctx->r1) {
        // 0x1503FE1C: lui         $t7, 0x8008
        ctx->r15 = S32(0X8008 << 16);
            goto L_1503FE60;
    }
    // 0x1503FE1C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1503FE20: lbu         $t7, 0x4498($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4498);
    // 0x1503FE24: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1503FE28: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1503FE2C: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x1503FE30: bne         $t9, $zero, L_1503FE3C
    if (ctx->r25 != 0) {
        // 0x1503FE34: nop
    
            goto L_1503FE3C;
    }
    // 0x1503FE34: nop

    // 0x1503FE38: break       7
    do_break(352583224);
L_1503FE3C:
    // 0x1503FE3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1503FE40: bne         $t9, $at, L_1503FE54
    if (ctx->r25 != ctx->r1) {
        // 0x1503FE44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1503FE54;
    }
    // 0x1503FE44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1503FE48: bne         $t8, $at, L_1503FE54
    if (ctx->r24 != ctx->r1) {
        // 0x1503FE4C: nop
    
            goto L_1503FE54;
    }
    // 0x1503FE4C: nop

    // 0x1503FE50: break       6
    do_break(352583248);
L_1503FE54:
    // 0x1503FE54: mfhi        $t2
    ctx->r10 = hi;
    // 0x1503FE58: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1503FE5C: sb          $t2, 0x4498($at)
    MEM_B(0X4498, ctx->r1) = ctx->r10;
L_1503FE60:
    // 0x1503FE60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1503FE64: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x1503FE68: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
L_1503FE6C:
    // 0x1503FE6C: b           L_1503FED0
    // 0x1503FE70: nop

        goto L_1503FED0;
    // 0x1503FE70: nop

    // 0x1503FE74: andi        $t1, $s0, 0x4
    ctx->r9 = ctx->r16 & 0X4;
L_1503FE78:
    // 0x1503FE78: bnel        $t1, $zero, L_1503FE98
    if (ctx->r9 != 0) {
        // 0x1503FE7C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_1503FE98;
    }
    goto skip_4;
    // 0x1503FE7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_4:
    // 0x1503FE80: lh          $v0, 0xE0($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XE0);
    // 0x1503FE84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1503FE88: andi        $t0, $s0, 0x8
    ctx->r8 = ctx->r16 & 0X8;
    // 0x1503FE8C: bne         $v0, $at, L_1503FEAC
    if (ctx->r2 != ctx->r1) {
        // 0x1503FE90: nop
    
            goto L_1503FEAC;
    }
    // 0x1503FE90: nop

    // 0x1503FE94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_1503FE98:
    // 0x1503FE98: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1503FE9C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x1503FEA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503FEA4: b           L_1503FED0
    // 0x1503FEA8: swc1        $f4, 0x6850($at)
    MEM_W(0X6850, ctx->r1) = ctx->f4.u32l;
        goto L_1503FED0;
    // 0x1503FEA8: swc1        $f4, 0x6850($at)
    MEM_W(0X6850, ctx->r1) = ctx->f4.u32l;
L_1503FEAC:
    // 0x1503FEAC: bne         $t0, $zero, L_1503FEBC
    if (ctx->r8 != 0) {
        // 0x1503FEB0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1503FEBC;
    }
    // 0x1503FEB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503FEB4: bne         $v0, $at, L_1503FED0
    if (ctx->r2 != ctx->r1) {
        // 0x1503FEB8: nop
    
            goto L_1503FED0;
    }
    // 0x1503FEB8: nop

L_1503FEBC:
    // 0x1503FEBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1503FEC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1503FEC4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x1503FEC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503FECC: swc1        $f8, 0x6850($at)
    MEM_W(0X6850, ctx->r1) = ctx->f8.u32l;
L_1503FED0:
    // 0x1503FED0: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x1503FED4: addiu       $a3, $a3, 0x4498
    ctx->r7 = ADD32(ctx->r7, 0X4498);
    // 0x1503FED8: lbu         $t5, 0x0($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X0);
    // 0x1503FEDC: addiu       $t6, $s4, -0x1
    ctx->r14 = ADD32(ctx->r20, -0X1);
    // 0x1503FEE0: lw          $t2, 0xC4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC4);
    // 0x1503FEE4: sra         $t8, $t6, 1
    ctx->r24 = S32(SIGNED(ctx->r14) >> 1);
    // 0x1503FEE8: subu        $s3, $t5, $t8
    ctx->r19 = SUB32(ctx->r13, ctx->r24);
    // 0x1503FEEC: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x1503FEF0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1503FEF4: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1503FEF8: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x1503FEFC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1503FF00: beq         $at, $zero, L_1503FF14
    if (ctx->r1 == 0) {
        // 0x1503FF04: lw          $v1, -0x161C($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X161C);
            goto L_1503FF14;
    }
    // 0x1503FF04: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1503FF08: addu        $s3, $t9, $t2
    ctx->r19 = ADD32(ctx->r25, ctx->r10);
    // 0x1503FF0C: andi        $t1, $s3, 0xFF
    ctx->r9 = ctx->r19 & 0XFF;
    // 0x1503FF10: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
L_1503FF14:
    // 0x1503FF14: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1503FF18: addiu       $v0, $v0, 0x4490
    ctx->r2 = ADD32(ctx->r2, 0X4490);
    // 0x1503FF1C: lb          $t3, 0x0($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X0);
    // 0x1503FF20: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x1503FF24: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x1503FF28: subu        $t0, $t3, $v1
    ctx->r8 = SUB32(ctx->r11, ctx->r3);
    // 0x1503FF2C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x1503FF30: lb          $t4, 0x0($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X0);
    // 0x1503FF34: addiu       $s7, $s7, -0x76BC
    ctx->r23 = ADD32(ctx->r23, -0X76BC);
    // 0x1503FF38: addiu       $s6, $sp, 0xD0
    ctx->r22 = ADD32(ctx->r29, 0XD0);
    // 0x1503FF3C: bgtz        $t4, L_1503FF5C
    if (SIGNED(ctx->r12) > 0) {
        // 0x1503FF40: addiu       $s4, $sp, 0xC8
        ctx->r20 = ADD32(ctx->r29, 0XC8);
            goto L_1503FF5C;
    }
    // 0x1503FF40: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
    // 0x1503FF44: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x1503FF48: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1503FF4C: lbu         $t7, 0x4494($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4494);
    // 0x1503FF50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1503FF54: xori        $t5, $t7, 0x1
    ctx->r13 = ctx->r15 ^ 0X1;
    // 0x1503FF58: sb          $t5, 0x4494($at)
    MEM_B(0X4494, ctx->r1) = ctx->r13;
L_1503FF5C:
    // 0x1503FF5C: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x1503FF60: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1503FF64: sw          $a1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r5;
L_1503FF68:
    // 0x1503FF68: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x1503FF6C: jal         0x1509CA98
    // 0x1503FF70: addiu       $a0, $s3, 0x1
    ctx->r4 = ADD32(ctx->r19, 0X1);
    func_1509CA98(rdram, ctx);
        goto after_7;
    // 0x1503FF70: addiu       $a0, $s3, 0x1
    ctx->r4 = ADD32(ctx->r19, 0X1);
    after_7:
    // 0x1503FF74: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1503FF78: lw          $t8, 0x448C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X448C);
    // 0x1503FF7C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1503FF80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1503FF84: beq         $t8, $zero, L_1503FFA8
    if (ctx->r24 == 0) {
        // 0x1503FF88: addiu       $a0, $a0, -0x76D0
        ctx->r4 = ADD32(ctx->r4, -0X76D0);
            goto L_1503FFA8;
    }
    // 0x1503FF88: addiu       $a0, $a0, -0x76D0
    ctx->r4 = ADD32(ctx->r4, -0X76D0);
    // 0x1503FF8C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1503FF90: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1503FF94: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x1503FF98: jal         0x150428D4
    // 0x1503FF9C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_150428D4(rdram, ctx);
        goto after_8;
    // 0x1503FF9C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_8:
    // 0x1503FFA0: b           L_1504005C
    // 0x1503FFA4: nop

        goto L_1504005C;
    // 0x1503FFA4: nop

L_1503FFA8:
    // 0x1503FFA8: jal         0x1509CA10
    // 0x1503FFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509CA10(rdram, ctx);
        goto after_9;
    // 0x1503FFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x1503FFB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1503FFB4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1503FFB8: addiu       $a2, $sp, 0xCC
    ctx->r6 = ADD32(ctx->r29, 0XCC);
    // 0x1503FFBC: jal         0x150428D4
    // 0x1503FFC0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_150428D4(rdram, ctx);
        goto after_10;
    // 0x1503FFC0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_10:
    // 0x1503FFC4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1503FFC8: lw          $t2, 0x2E4C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2E4C);
    // 0x1503FFCC: sra         $t9, $s0, 3
    ctx->r25 = S32(SIGNED(ctx->r16) >> 3);
    // 0x1503FFD0: andi        $t0, $s0, 0x7
    ctx->r8 = ctx->r16 & 0X7;
    // 0x1503FFD4: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x1503FFD8: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x1503FFDC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1503FFE0: sllv        $t6, $t4, $t0
    ctx->r14 = S32(ctx->r12 << (ctx->r8 & 31));
    // 0x1503FFE4: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x1503FFE8: beq         $t7, $zero, L_15040050
    if (ctx->r15 == 0) {
        // 0x1503FFEC: lui         $t5, 0x8008
        ctx->r13 = S32(0X8008 << 16);
            goto L_15040050;
    }
    // 0x1503FFEC: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x1503FFF0: lbu         $t5, 0x4498($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4498);
    // 0x1503FFF4: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1503FFF8: bne         $t5, $s2, L_15040040
    if (ctx->r13 != ctx->r18) {
        // 0x1503FFFC: nop
    
            goto L_15040040;
    }
    // 0x1503FFFC: nop

    // 0x15040000: lbu         $t8, 0x4494($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4494);
    // 0x15040004: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x15040008: beq         $t8, $zero, L_15040018
    if (ctx->r24 == 0) {
        // 0x1504000C: nop
    
            goto L_15040018;
    }
    // 0x1504000C: nop

    // 0x15040010: b           L_15040024
    // 0x15040014: addiu       $s1, $s1, -0x76B8
    ctx->r17 = ADD32(ctx->r17, -0X76B8);
        goto L_15040024;
    // 0x15040014: addiu       $s1, $s1, -0x76B8
    ctx->r17 = ADD32(ctx->r17, -0X76B8);
L_15040018:
    // 0x15040018: jal         0x1509CA10
    // 0x1504001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509CA10(rdram, ctx);
        goto after_11;
    // 0x1504001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x15040020: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15040024:
    // 0x15040024: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15040028: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1504002C: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x15040030: jal         0x150428D4
    // 0x15040034: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_150428D4(rdram, ctx);
        goto after_12;
    // 0x15040034: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_12:
    // 0x15040038: b           L_1504005C
    // 0x1504003C: nop

        goto L_1504005C;
    // 0x1504003C: nop

L_15040040:
    // 0x15040040: jal         0x1509CA10
    // 0x15040044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509CA10(rdram, ctx);
        goto after_13;
    // 0x15040044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x15040048: b           L_1504005C
    // 0x1504004C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1504005C;
    // 0x1504004C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15040050:
    // 0x15040050: jal         0x1509CA10
    // 0x15040054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509CA10(rdram, ctx);
        goto after_14;
    // 0x15040054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x15040058: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1504005C:
    // 0x1504005C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15040060: lw          $t9, -0x19E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19E0);
    // 0x15040064: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x15040068: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504006C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15040070: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15040074: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x15040078: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1504007C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x15040080: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x15040084: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15040088: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15040090: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15040094: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15040098: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1504009C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150400A0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150400A4: lwc1        $f4, 0x6850($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6850);
    // 0x150400A8: add.s       $f20, $f10, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150400AC: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150400B0: jal         0x1509CA78
    // 0x150400B4: add.s       $f22, $f20, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f20.fl + ctx->f4.fl;
    func_1509CA78(rdram, ctx);
        goto after_15;
    // 0x150400B4: add.s       $f22, $f20, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f20.fl + ctx->f4.fl;
    after_15:
    // 0x150400B8: sll         $t0, $v0, 0
    ctx->r8 = S32(ctx->r2 << 0);
    // 0x150400BC: bgez        $t0, L_1504017C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x150400C0: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_1504017C;
    }
    // 0x150400C0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150400C4: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x150400C8: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    // 0x150400CC: jal         0x150428D4
    // 0x150400D0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_150428D4(rdram, ctx);
        goto after_16;
    // 0x150400D0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_16:
    // 0x150400D4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150400D8: lw          $t3, -0x19E0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19E0);
    // 0x150400DC: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x150400E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150400E4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150400E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150400EC: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x150400F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150400F4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150400F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150400FC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15040100: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15040104: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15040108: lwc1        $f8, 0x6850($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6850);
    // 0x1504010C: add.s       $f16, $f20, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x15040110: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15040114: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x15040118: jal         0x10022EEC
    // 0x1504011C: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    strlen_recomp(rdram, ctx);
        goto after_17;
    // 0x1504011C: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    after_17:
    // 0x15040120: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x15040124: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15040128: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1504012C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15040130: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15040134: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15040138: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1504013C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15040140: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x15040144: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15040148: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x1504014C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x15040150: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x15040154: jal         0x150417AC
    // 0x15040158: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_150417AC(rdram, ctx);
        goto after_18;
    // 0x15040158: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_18:
    // 0x1504015C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x15040160: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x15040164: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x15040168: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x1504016C: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x15040170: sw          $t4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r12;
    // 0x15040174: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15040178: add.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
L_1504017C:
    // 0x1504017C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
    // 0x15040180: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x15040184: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15040188: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x1504018C: beq         $at, $zero, L_150401A8
    if (ctx->r1 == 0) {
        // 0x15040190: addiu       $t6, $t3, -0x3
        ctx->r14 = ADD32(ctx->r11, -0X3);
            goto L_150401A8;
    }
    // 0x15040190: addiu       $t6, $t3, -0x3
    ctx->r14 = ADD32(ctx->r11, -0X3);
    // 0x15040194: sll         $s5, $v0, 6
    ctx->r21 = S32(ctx->r2 << 6);
    // 0x15040198: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x1504019C: andi        $t0, $s5, 0xFF
    ctx->r8 = ctx->r21 & 0XFF;
    // 0x150401A0: b           L_150401C4
    // 0x150401A4: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
        goto L_150401C4;
    // 0x150401A4: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
L_150401A8:
    // 0x150401A8: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150401AC: beq         $at, $zero, L_150401C4
    if (ctx->r1 == 0) {
        // 0x150401B0: addiu       $s5, $zero, 0xFF
        ctx->r21 = ADD32(0, 0XFF);
            goto L_150401C4;
    }
    // 0x150401B0: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x150401B4: subu        $s5, $t3, $v0
    ctx->r21 = SUB32(ctx->r11, ctx->r2);
    // 0x150401B8: sll         $t7, $s5, 6
    ctx->r15 = S32(ctx->r21 << 6);
    // 0x150401BC: b           L_150401C4
    // 0x150401C0: andi        $s5, $t7, 0xFF
    ctx->r21 = ctx->r15 & 0XFF;
        goto L_150401C4;
    // 0x150401C0: andi        $s5, $t7, 0xFF
    ctx->r21 = ctx->r15 & 0XFF;
L_150401C4:
    // 0x150401C4: bne         $s1, $zero, L_150401D4
    if (ctx->r17 != 0) {
        // 0x150401C8: lui         $t9, 0x8008
        ctx->r25 = S32(0X8008 << 16);
            goto L_150401D4;
    }
    // 0x150401C8: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x150401CC: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x150401D0: addiu       $s1, $s1, 0x449C
    ctx->r17 = ADD32(ctx->r17, 0X449C);
L_150401D4:
    // 0x150401D4: lw          $t8, 0x448C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X448C);
    // 0x150401D8: bne         $t8, $zero, L_15040248
    if (ctx->r24 != 0) {
        // 0x150401DC: nop
    
            goto L_15040248;
    }
    // 0x150401DC: nop

    // 0x150401E0: lbu         $t9, 0x4498($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4498);
    // 0x150401E4: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x150401E8: bne         $t9, $s2, L_150401FC
    if (ctx->r25 != ctx->r18) {
        // 0x150401EC: nop
    
            goto L_150401FC;
    }
    // 0x150401EC: nop

    // 0x150401F0: lw          $t2, 0x4488($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4488);
    // 0x150401F4: beq         $t2, $zero, L_15040248
    if (ctx->r10 == 0) {
        // 0x150401F8: nop
    
            goto L_15040248;
    }
    // 0x150401F8: nop

L_150401FC:
    // 0x150401FC: jal         0x10022EEC
    // 0x15040200: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    strlen_recomp(rdram, ctx);
        goto after_19;
    // 0x15040200: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x15040204: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x15040208: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x1504020C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x15040210: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15040214: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15040218: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1504021C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15040220: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15040224: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15040228: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1504022C: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x15040230: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15040234: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x15040238: jal         0x150417AC
    // 0x1504023C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_150417AC(rdram, ctx);
        goto after_20;
    // 0x1504023C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_20:
    // 0x15040240: b           L_15040288
    // 0x15040244: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
        goto L_15040288;
    // 0x15040244: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
L_15040248:
    // 0x15040248: jal         0x10022EEC
    // 0x1504024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    strlen_recomp(rdram, ctx);
        goto after_21;
    // 0x1504024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x15040250: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x15040254: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x15040258: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x1504025C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15040260: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15040264: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15040268: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x1504026C: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15040270: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x15040274: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15040278: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1504027C: jal         0x150417AC
    // 0x15040280: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_150417AC(rdram, ctx);
        goto after_22;
    // 0x15040280: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_22:
    // 0x15040284: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
L_15040288:
    // 0x15040288: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1504028C: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    // 0x15040290: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x15040294: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x15040298: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x1504029C: div         $zero, $t2, $t4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r12)));
    // 0x150402A0: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x150402A4: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x150402A8: lbu         $v0, 0xDE($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XDE);
    // 0x150402AC: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x150402B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x150402B4: sw          $t5, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r13;
    // 0x150402B8: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
    // 0x150402BC: bne         $t4, $zero, L_150402C8
    if (ctx->r12 != 0) {
        // 0x150402C0: nop
    
            goto L_150402C8;
    }
    // 0x150402C0: nop

    // 0x150402C4: break       7
    do_break(352584388);
L_150402C8:
    // 0x150402C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150402CC: bne         $t4, $at, L_150402E0
    if (ctx->r12 != ctx->r1) {
        // 0x150402D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150402E0;
    }
    // 0x150402D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150402D4: bne         $s3, $at, L_150402E0
    if (ctx->r19 != ctx->r1) {
        // 0x150402D8: nop
    
            goto L_150402E0;
    }
    // 0x150402D8: nop

    // 0x150402DC: break       6
    do_break(352584412);
L_150402E0:
    // 0x150402E0: mfhi        $s3
    ctx->r19 = hi;
    // 0x150402E4: andi        $t1, $s3, 0xFF
    ctx->r9 = ctx->r19 & 0XFF;
    // 0x150402E8: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x150402EC: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x150402F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150402F4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x150402F8: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150402FC: bne         $at, $zero, L_1503FF68
    if (ctx->r1 != 0) {
        // 0x15040300: sb          $t0, 0xDE($sp)
        MEM_B(0XDE, ctx->r29) = ctx->r8;
            goto L_1503FF68;
    }
    // 0x15040300: sb          $t0, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = ctx->r8;
    // 0x15040304: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_15040308:
    // 0x15040308: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_1504030C:
    // 0x1504030C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x15040310: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x15040314: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x15040318: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x1504031C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x15040320: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x15040324: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x15040328: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x1504032C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x15040330: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x15040334: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x15040338: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x1504033C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x15040340: jr          $ra
    // 0x15040344: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x15040344: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_15040890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040890: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040894: jr          $ra
    // 0x15040898: nop

    return;
    return;
    // 0x15040898: nop

;}
RECOMP_FUNC void func_151963B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151963B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151963B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151963BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151963C0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151963C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151963C8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151963CC: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x151963D0: lb          $v1, 0x65($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X65);
    // 0x151963D4: beq         $v1, $at, L_151963F8
    if (ctx->r3 == ctx->r1) {
        // 0x151963D8: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_151963F8;
    }
    // 0x151963D8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x151963DC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x151963E0: lw          $t9, -0x768($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X768);
    // 0x151963E4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151963E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151963EC: jalr        $t9
    // 0x151963F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151963F0: nop

    after_0:
    // 0x151963F4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_151963F8:
    // 0x151963F8: lb          $v1, 0x62($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X62);
    // 0x151963FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15196400: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196404: beq         $v1, $at, L_15196420
    if (ctx->r3 == ctx->r1) {
        // 0x15196408: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_15196420;
    }
    // 0x15196408: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x1519640C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15196410: lw          $t9, -0x774($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X774);
    // 0x15196414: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15196418: jalr        $t9
    // 0x1519641C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1519641C: nop

    after_1:
L_15196420:
    // 0x15196420: jal         0x15147928
    // 0x15196424: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_15147928(rdram, ctx);
        goto after_2;
    // 0x15196424: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x15196428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519642C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15196430: jr          $ra
    // 0x15196434: nop

    return;
    return;
    // 0x15196434: nop

;}
RECOMP_FUNC void func_15070084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507008C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15070090: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070094: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070098: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507009C: jal         0x151AECA0
    // 0x150700A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151AECA0(rdram, ctx);
        goto after_0;
    // 0x150700A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150700A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150700A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150700AC: jr          $ra
    // 0x150700B0: nop

    return;
    return;
    // 0x150700B0: nop

;}
RECOMP_FUNC void func_100126E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100126E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100126EC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x100126F0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x100126F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100126F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x100126FC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10012700: jal         0x15043CA4
    // 0x10012704: addiu       $a0, $a0, 0x27A0
    ctx->r4 = ADD32(ctx->r4, 0X27A0);
    func_15043CA4(rdram, ctx);
        goto after_0;
    // 0x10012704: addiu       $a0, $a0, 0x27A0
    ctx->r4 = ADD32(ctx->r4, 0X27A0);
    after_0:
    // 0x10012708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001270C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10012710: jr          $ra
    // 0x10012714: nop

    return;
    return;
    // 0x10012714: nop

;}
RECOMP_FUNC void func_150C5310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5318: jal         0x150C5280
    // 0x150C531C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150C5280(rdram, ctx);
        goto after_0;
    // 0x150C531C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150C5320: beq         $v0, $zero, L_150C533C
    if (ctx->r2 == 0) {
        // 0x150C5324: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_150C533C;
    }
    // 0x150C5324: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150C5328: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x150C532C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x150C5330: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150C5334: b           L_150C5350
    // 0x150C5338: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
        goto L_150C5350;
    // 0x150C5338: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_150C533C:
    // 0x150C533C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x150C5340: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x150C5344: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150C5348: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150C534C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_150C5350:
    // 0x150C5350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C5354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C535C: jr          $ra
    // 0x150C5360: nop

    return;
    return;
    // 0x150C5360: nop

;}
RECOMP_FUNC void func_1516944C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516944C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15169450: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15169454: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15169458: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1516945C: andi        $s4, $a2, 0xFF
    ctx->r20 = ctx->r6 & 0XFF;
    // 0x15169460: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15169464: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15169468: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1516946C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15169470: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15169474: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15169478: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1516947C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15169480: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15169484: slti        $at, $a0, 0x68
    ctx->r1 = SIGNED(ctx->r4) < 0X68 ? 1 : 0;
    // 0x15169488: bne         $at, $zero, L_15169494
    if (ctx->r1 != 0) {
        // 0x1516948C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_15169494;
    }
    // 0x1516948C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15169490: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
L_15169494:
    // 0x15169494: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15169498: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1516949C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151694A0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x151694A4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151694A8: addiu       $fp, $t8, -0x31B0
    ctx->r30 = ADD32(ctx->r24, -0X31B0);
    // 0x151694AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151694B0: addiu       $t7, $t7, -0x4B58
    ctx->r15 = ADD32(ctx->r15, -0X4B58);
    // 0x151694B4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x151694B8: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151694BC: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x151694C0: addiu       $s2, $s2, -0x2E70
    ctx->r18 = ADD32(ctx->r18, -0X2E70);
    // 0x151694C4: addiu       $s5, $s5, -0x2E68
    ctx->r21 = ADD32(ctx->r21, -0X2E68);
    // 0x151694C8: addu        $s7, $t9, $fp
    ctx->r23 = ADD32(ctx->r25, ctx->r30);
    // 0x151694CC: addu        $s6, $t6, $t7
    ctx->r22 = ADD32(ctx->r14, ctx->r15);
L_151694D0:
    // 0x151694D0: lw          $t0, 0x1C($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X1C);
    // 0x151694D4: beql        $t0, $zero, L_15169554
    if (ctx->r8 == 0) {
        // 0x151694D8: lb          $t1, 0x0($s2)
        ctx->r9 = MEM_B(ctx->r18, 0X0);
            goto L_15169554;
    }
    goto skip_0;
    // 0x151694D8: lb          $t1, 0x0($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X0);
    skip_0:
    // 0x151694DC: lb          $t1, 0x0($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X0);
    // 0x151694E0: lw          $s0, 0x0($s7)
    ctx->r16 = MEM_W(ctx->r23, 0X0);
    // 0x151694E4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x151694E8: beq         $s0, $zero, L_15169540
    if (ctx->r16 == 0) {
        // 0x151694EC: sb          $t2, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r10;
            goto L_15169540;
    }
    // 0x151694EC: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
    // 0x151694F0: lb          $t3, 0x0($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X0);
    // 0x151694F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x151694F8: addu        $s1, $s5, $t4
    ctx->r17 = ADD32(ctx->r21, ctx->r12);
    // 0x151694FC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
L_15169500:
    // 0x15169500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169504: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15169508: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x1516950C: jal         0x1516968C
    // 0x15169510: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    func_1516968C(rdram, ctx);
        goto after_0;
    // 0x15169510: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    after_0:
    // 0x15169514: lw          $t9, 0x1C($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X1C);
    // 0x15169518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1516951C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15169520: jalr        $t9
    // 0x15169524: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15169524: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    after_1:
    // 0x15169528: lb          $t6, 0x0($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X0);
    // 0x1516952C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15169530: addu        $s1, $s5, $t7
    ctx->r17 = ADD32(ctx->r21, ctx->r15);
    // 0x15169534: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15169538: bnel        $s0, $zero, L_15169500
    if (ctx->r16 != 0) {
        // 0x1516953C: lw          $t5, 0x8($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X8);
            goto L_15169500;
    }
    goto skip_1;
    // 0x1516953C: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_15169540:
    // 0x15169540: lb          $t8, 0x0($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X0);
    // 0x15169544: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x15169548: b           L_151695AC
    // 0x1516954C: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
        goto L_151695AC;
    // 0x1516954C: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x15169550: lb          $t1, 0x0($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X0);
L_15169554:
    // 0x15169554: lw          $s0, 0x0($s7)
    ctx->r16 = MEM_W(ctx->r23, 0X0);
    // 0x15169558: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1516955C: beq         $s0, $zero, L_151695A0
    if (ctx->r16 == 0) {
        // 0x15169560: sb          $t2, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r10;
            goto L_151695A0;
    }
    // 0x15169560: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
    // 0x15169564: lb          $t3, 0x0($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X0);
    // 0x15169568: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1516956C: addu        $s1, $s5, $t4
    ctx->r17 = ADD32(ctx->r21, ctx->r12);
    // 0x15169570: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
L_15169574:
    // 0x15169574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169578: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1516957C: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x15169580: jal         0x1516968C
    // 0x15169584: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    func_1516968C(rdram, ctx);
        goto after_2;
    // 0x15169584: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    after_2:
    // 0x15169588: lb          $t9, 0x0($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X0);
    // 0x1516958C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x15169590: addu        $s1, $s5, $t6
    ctx->r17 = ADD32(ctx->r21, ctx->r14);
    // 0x15169594: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15169598: bnel        $s0, $zero, L_15169574
    if (ctx->r16 != 0) {
        // 0x1516959C: lw          $t5, 0x8($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X8);
            goto L_15169574;
    }
    goto skip_2;
    // 0x1516959C: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    skip_2:
L_151695A0:
    // 0x151695A0: lb          $t7, 0x0($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X0);
    // 0x151695A4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x151695A8: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
L_151695AC:
    // 0x151695AC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151695B0: addiu       $t0, $t0, -0x2E70
    ctx->r8 = ADD32(ctx->r8, -0X2E70);
    // 0x151695B4: addiu       $fp, $fp, 0x1A0
    ctx->r30 = ADD32(ctx->r30, 0X1A0);
    // 0x151695B8: bne         $fp, $t0, L_151694D0
    if (ctx->r30 != ctx->r8) {
        // 0x151695BC: addiu       $s7, $s7, 0x1A0
        ctx->r23 = ADD32(ctx->r23, 0X1A0);
            goto L_151694D0;
    }
    // 0x151695BC: addiu       $s7, $s7, 0x1A0
    ctx->r23 = ADD32(ctx->r23, 0X1A0);
    // 0x151695C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151695C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151695C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151695CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151695D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151695D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151695D8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x151695DC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x151695E0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x151695E4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x151695E8: jr          $ra
    // 0x151695EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151695EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1507B8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B8F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B8F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B8FC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1507B900: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x1507B904: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507B908: beql        $t6, $zero, L_1507B94C
    if (ctx->r14 == 0) {
        // 0x1507B90C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B94C;
    }
    goto skip_0;
    // 0x1507B90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507B910: lbu         $t7, 0x1891($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1891);
    // 0x1507B914: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507B918: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B91C: bne         $t7, $zero, L_1507B940
    if (ctx->r15 != 0) {
        // 0x1507B920: nop
    
            goto L_1507B940;
    }
    // 0x1507B920: nop

    // 0x1507B924: lw          $t8, 0x154C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X154C);
    // 0x1507B928: lw          $v0, 0x31C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X31C);
    // 0x1507B92C: beql        $v0, $zero, L_1507B94C
    if (ctx->r2 == 0) {
        // 0x1507B930: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B94C;
    }
    goto skip_1;
    // 0x1507B930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1507B934: lbu         $t9, 0x84($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X84);
    // 0x1507B938: beql        $t9, $zero, L_1507B94C
    if (ctx->r25 == 0) {
        // 0x1507B93C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B94C;
    }
    goto skip_2;
    // 0x1507B93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_1507B940:
    // 0x1507B940: jal         0x15075400
    // 0x1507B944: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507B944: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507B948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507B94C:
    // 0x1507B94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B950: jr          $ra
    // 0x1507B954: nop

    return;
    return;
    // 0x1507B954: nop

;}
RECOMP_FUNC void func_151AB1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB1C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151AB1C8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151AB1CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151AB1D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AB1D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151AB1D8: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x151AB1DC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151AB1E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AB1E4: lwc1        $f6, -0x7014($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7014);
    // 0x151AB1E8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151AB1EC: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x151AB1F0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151AB1F4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151AB1F8: nop

    // 0x151AB1FC: bc1fl       L_151AB220
    if (!c1cs) {
        // 0x151AB200: lwc1        $f16, 0x18($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
            goto L_151AB220;
    }
    goto skip_0;
    // 0x151AB200: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    skip_0:
    // 0x151AB204: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AB208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AB20C: nop

    // 0x151AB210: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151AB214: b           L_151AB230
    // 0x151AB218: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151AB230;
    // 0x151AB218: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151AB21C: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
L_151AB220:
    // 0x151AB220: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151AB224: nop

    // 0x151AB228: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151AB22C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151AB230:
    // 0x151AB230: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151AB234: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AB238: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151AB23C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151AB240: addiu       $a3, $s1, 0x34
    ctx->r7 = ADD32(ctx->r17, 0X34);
    // 0x151AB244: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AB248: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x151AB24C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AB250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AB254: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151AB258: jal         0x15045800
    // 0x151AB25C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151AB25C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151AB260: beq         $v0, $zero, L_151AB2A4
    if (ctx->r2 == 0) {
        // 0x151AB264: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_151AB2A4;
    }
    // 0x151AB264: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AB268: lwc1        $f18, 0x34($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151AB26C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151AB270: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151AB274: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151AB278: lbu         $t6, 0x1($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1);
    // 0x151AB27C: lbu         $a3, 0xC($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0XC);
    // 0x151AB280: jal         0x151ABE40
    // 0x151AB284: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151AB284: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x151AB288: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AB28C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x151AB290: addiu       $a2, $zero, 0x5208
    ctx->r6 = ADD32(0, 0X5208);
    // 0x151AB294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AB298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AB29C: jal         0x10010FFC
    // 0x151AB2A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_10010FFC(rdram, ctx);
        goto after_2;
    // 0x151AB2A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_2:
L_151AB2A4:
    // 0x151AB2A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151AB2A8: jal         0x151AA264
    // 0x151AB2AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_151AA264(rdram, ctx);
        goto after_3;
    // 0x151AB2AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x151AB2B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151AB2B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151AB2B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151AB2BC: jr          $ra
    // 0x151AB2C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151AB2C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151994B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151994B8: addiu       $sp, $sp, -0x1E0
    ctx->r29 = ADD32(ctx->r29, -0X1E0);
    // 0x151994BC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151994C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151994C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151994C8: sw          $a0, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r4;
    // 0x151994CC: sw          $a2, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r6;
    // 0x151994D0: sw          $a3, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r7;
    // 0x151994D4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x151994D8: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x151994DC: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x151994E0: lw          $t6, 0x1D4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D4);
    // 0x151994E4: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x151994E8: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x151994EC: bne         $t6, $zero, L_151994FC
    if (ctx->r14 != 0) {
        // 0x151994F0: addiu       $t5, $sp, 0x188
        ctx->r13 = ADD32(ctx->r29, 0X188);
            goto L_151994FC;
    }
    // 0x151994F0: addiu       $t5, $sp, 0x188
    ctx->r13 = ADD32(ctx->r29, 0X188);
    // 0x151994F4: b           L_15199820
    // 0x151994F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15199820;
    // 0x151994F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151994FC:
    // 0x151994FC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15199500: sh          $t8, 0x1CC($sp)
    MEM_H(0X1CC, ctx->r29) = ctx->r24;
    // 0x15199504: sh          $t9, 0x1CE($sp)
    MEM_H(0X1CE, ctx->r29) = ctx->r25;
    // 0x15199508: sb          $t7, 0x1D5($sp)
    MEM_B(0X1D5, ctx->r29) = ctx->r15;
    // 0x1519950C: sw          $t2, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r10;
    // 0x15199510: sb          $zero, 0x1D4($sp)
    MEM_B(0X1D4, ctx->r29) = 0;
    // 0x15199514: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x15199518: addiu       $t6, $s0, 0x48
    ctx->r14 = ADD32(ctx->r16, 0X48);
L_1519951C:
    // 0x1519951C: lw          $at, 0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X4);
    // 0x15199520: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x15199524: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x15199528: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x1519952C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x15199530: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x15199534: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15199538: bne         $t7, $t6, L_1519951C
    if (ctx->r15 != ctx->r14) {
        // 0x1519953C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_1519951C;
    }
    // 0x1519953C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x15199540: lw          $at, 0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X4);
    // 0x15199544: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x15199548: addiu       $t9, $sp, 0x80
    ctx->r25 = ADD32(ctx->r29, 0X80);
    // 0x1519954C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15199550: lbu         $t6, 0x71($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X71);
    // 0x15199554: addiu       $t2, $sp, 0x17C
    ctx->r10 = ADD32(ctx->r29, 0X17C);
    // 0x15199558: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x1519955C: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x15199560: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x15199564: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x15199568: lw          $t4, 0x1D4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X1D4);
    // 0x1519956C: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x15199570: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x15199574: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x15199578: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1519957C: jal         0x15145EA4
    // 0x15199580: addu        $a2, $t4, $t7
    ctx->r6 = ADD32(ctx->r12, ctx->r15);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x15199580: addu        $a2, $t4, $t7
    ctx->r6 = ADD32(ctx->r12, ctx->r15);
    after_0:
    // 0x15199584: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15199588: addiu       $a0, $sp, 0x1C0
    ctx->r4 = ADD32(ctx->r29, 0X1C0);
    // 0x1519958C: addiu       $t3, $sp, 0x17C
    ctx->r11 = ADD32(ctx->r29, 0X17C);
    // 0x15199590: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x15199594: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x15199598: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x1519959C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151995A0: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x151995A4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x151995A8: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x151995AC: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x151995B0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151995B4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151995B8: lbu         $t5, 0xA6($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA6);
    // 0x151995BC: swc1        $f0, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f0.u32l;
    // 0x151995C0: swc1        $f0, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f0.u32l;
    // 0x151995C4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x151995C8: bgez        $t5, L_151995E0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x151995CC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_151995E0;
    }
    // 0x151995CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151995D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151995D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151995D8: nop

    // 0x151995DC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_151995E0:
    // 0x151995E0: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x151995E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151995E8: swc1        $f6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f6.u32l;
    // 0x151995EC: addiu       $t9, $s0, 0x3C
    ctx->r25 = ADD32(ctx->r16, 0X3C);
    // 0x151995F0: swc1        $f10, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f10.u32l;
L_151995F4:
    // 0x151995F4: lw          $at, 0x58($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X58);
    // 0x151995F8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x151995FC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x15199600: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x15199604: lw          $at, 0x50($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X50);
    // 0x15199608: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x1519960C: lw          $at, 0x54($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X54);
    // 0x15199610: bne         $t8, $t9, L_151995F4
    if (ctx->r24 != ctx->r25) {
        // 0x15199614: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_151995F4;
    }
    // 0x15199614: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x15199618: lw          $at, 0x58($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X58);
    // 0x1519961C: addiu       $t3, $sp, 0xFC
    ctx->r11 = ADD32(ctx->r29, 0XFC);
    // 0x15199620: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15199624: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15199628: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x1519962C: addiu       $t7, $s0, 0x3C
    ctx->r15 = ADD32(ctx->r16, 0X3C);
    // 0x15199630: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15199634: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x15199638: swc1        $f0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f0.u32l;
L_1519963C:
    // 0x1519963C: lw          $at, 0x9C($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X9C);
    // 0x15199640: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x15199644: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x15199648: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x1519964C: lw          $at, 0x94($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X94);
    // 0x15199650: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x15199654: lw          $at, 0x98($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X98);
    // 0x15199658: bne         $t4, $t7, L_1519963C
    if (ctx->r12 != ctx->r15) {
        // 0x1519965C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_1519963C;
    }
    // 0x1519965C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x15199660: lw          $at, 0x9C($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X9C);
    // 0x15199664: addiu       $t9, $sp, 0x140
    ctx->r25 = ADD32(ctx->r29, 0X140);
    // 0x15199668: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x1519966C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15199670: lw          $t7, 0xA0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XA0);
    // 0x15199674: addiu       $t5, $s0, 0x3C
    ctx->r13 = ADD32(ctx->r16, 0X3C);
    // 0x15199678: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1519967C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x15199680: swc1        $f0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f0.u32l;
L_15199684:
    // 0x15199684: lw          $at, 0xE0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0XE0);
    // 0x15199688: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x1519968C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x15199690: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15199694: lw          $at, 0xD8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0XD8);
    // 0x15199698: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x1519969C: lw          $at, 0xDC($t2)
    ctx->r1 = MEM_W(ctx->r10, 0XDC);
    // 0x151996A0: bne         $t2, $t5, L_15199684
    if (ctx->r10 != ctx->r13) {
        // 0x151996A4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_15199684;
    }
    // 0x151996A4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x151996A8: swc1        $f0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f0.u32l;
    // 0x151996AC: swc1        $f0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f0.u32l;
    // 0x151996B0: lbu         $v0, 0x54($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X54);
    // 0x151996B4: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x151996B8: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x151996BC: beq         $t7, $zero, L_151996CC
    if (ctx->r15 == 0) {
        // 0x151996C0: andi        $t4, $v0, 0x4
        ctx->r12 = ctx->r2 & 0X4;
            goto L_151996CC;
    }
    // 0x151996C0: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    // 0x151996C4: b           L_151996CC
    // 0x151996C8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
        goto L_151996CC;
    // 0x151996C8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_151996CC:
    // 0x151996CC: beq         $t4, $zero, L_151996DC
    if (ctx->r12 == 0) {
        // 0x151996D0: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_151996DC;
    }
    // 0x151996D0: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x151996D4: b           L_151996DC
    // 0x151996D8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_151996DC;
    // 0x151996D8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_151996DC:
    // 0x151996DC: beq         $t3, $zero, L_151996EC
    if (ctx->r11 == 0) {
        // 0x151996E0: andi        $t6, $v0, 0x10
        ctx->r14 = ctx->r2 & 0X10;
            goto L_151996EC;
    }
    // 0x151996E0: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x151996E4: b           L_151996F0
    // 0x151996E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
        goto L_151996F0;
    // 0x151996E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_151996EC:
    // 0x151996EC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151996F0:
    // 0x151996F0: beq         $t6, $zero, L_15199700
    if (ctx->r14 == 0) {
        // 0x151996F4: addiu       $t7, $zero, 0xC
        ctx->r15 = ADD32(0, 0XC);
            goto L_15199700;
    }
    // 0x151996F4: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x151996F8: b           L_15199704
    // 0x151996FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_15199704;
    // 0x151996FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_15199700:
    // 0x15199700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15199704:
    // 0x15199704: or          $t8, $v0, $t0
    ctx->r24 = ctx->r2 | ctx->r8;
    // 0x15199708: lw          $a1, 0x1E0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1E0);
    // 0x1519970C: lbu         $t4, 0x1EB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1EB);
    // 0x15199710: lw          $t3, 0x1EC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1EC);
    // 0x15199714: or          $t5, $t8, $v1
    ctx->r13 = ctx->r24 | ctx->r3;
    // 0x15199718: or          $t2, $t5, $t1
    ctx->r10 = ctx->r13 | ctx->r9;
    // 0x1519971C: sb          $t2, 0x1BC($sp)
    MEM_B(0X1BC, ctx->r29) = ctx->r10;
    // 0x15199720: sh          $zero, 0x1BE($sp)
    MEM_H(0X1BE, ctx->r29) = 0;
    // 0x15199724: sb          $zero, 0x1BD($sp)
    MEM_B(0X1BD, ctx->r29) = 0;
    // 0x15199728: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1519972C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15199730: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15199734: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15199738: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519973C: addiu       $a1, $a1, 0x158
    ctx->r5 = ADD32(ctx->r5, 0X158);
    // 0x15199740: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x15199744: jal         0x15147A80
    // 0x15199748: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    func_15147A80(rdram, ctx);
        goto after_1;
    // 0x15199748: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    after_1:
    // 0x1519974C: beq         $v0, $zero, L_1519981C
    if (ctx->r2 == 0) {
        // 0x15199750: sw          $v0, 0x1DC($sp)
        MEM_W(0X1DC, ctx->r29) = ctx->r2;
            goto L_1519981C;
    }
    // 0x15199750: sw          $v0, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r2;
    // 0x15199754: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x15199758: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x1519975C: addiu       $a2, $zero, 0x154
    ctx->r6 = ADD32(0, 0X154);
    // 0x15199760: jal         0x10022EC0
    // 0x15199764: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15199764: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_2:
    // 0x15199768: lb          $v1, 0xA3($sp)
    ctx->r3 = MEM_B(ctx->r29, 0XA3);
    // 0x1519976C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15199770: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x15199774: beq         $v1, $at, L_1519979C
    if (ctx->r3 == ctx->r1) {
        // 0x15199778: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_1519979C;
    }
    // 0x15199778: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x1519977C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15199780: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15199784: lw          $t9, -0x748($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X748);
    // 0x15199788: jalr        $t9
    // 0x1519978C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x1519978C: nop

    after_3:
    // 0x15199790: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x15199794: b           L_151997A0
    // 0x15199798: sh          $v0, 0x130($t5)
    MEM_H(0X130, ctx->r13) = ctx->r2;
        goto L_151997A0;
    // 0x15199798: sh          $v0, 0x130($t5)
    MEM_H(0X130, ctx->r13) = ctx->r2;
L_1519979C:
    // 0x1519979C: sh          $zero, 0x130($t2)
    MEM_H(0X130, ctx->r10) = 0;
L_151997A0:
    // 0x151997A0: lb          $v0, 0xA0($sp)
    ctx->r2 = MEM_B(ctx->r29, 0XA0);
    // 0x151997A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151997A8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151997AC: beq         $v0, $at, L_151997C8
    if (ctx->r2 == ctx->r1) {
        // 0x151997B0: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_151997C8;
    }
    // 0x151997B0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151997B4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x151997B8: lw          $t9, -0x75C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75C);
    // 0x151997BC: lw          $a0, 0x1DC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1DC);
    // 0x151997C0: jalr        $t9
    // 0x151997C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x151997C4: nop

    after_4:
L_151997C8:
    // 0x151997C8: lbu         $t4, 0x54($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X54);
    // 0x151997CC: lw          $a0, 0x1DC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1DC);
    // 0x151997D0: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    // 0x151997D4: andi        $t3, $t4, 0x1
    ctx->r11 = ctx->r12 & 0X1;
    // 0x151997D8: beq         $t3, $zero, L_15199818
    if (ctx->r11 == 0) {
        // 0x151997DC: lw          $t9, 0x54($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X54);
            goto L_15199818;
    }
    // 0x151997DC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x151997E0: lbu         $t6, 0x52($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X52);
    // 0x151997E4: lbu         $a2, 0x50($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X50);
    // 0x151997E8: lbu         $a3, 0x51($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X51);
    // 0x151997EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151997F0: lbu         $t8, 0x53($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X53);
    // 0x151997F4: lbu         $t5, 0x1EB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1EB);
    // 0x151997F8: lw          $t2, 0x1EC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1EC);
    // 0x151997FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15199800: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15199804: jal         0x1519C09C
    // 0x15199808: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_1519C09C(rdram, ctx);
        goto after_5;
    // 0x15199808: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_5:
    // 0x1519980C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x15199810: b           L_1519981C
    // 0x15199814: sw          $v0, 0x148($t7)
    MEM_W(0X148, ctx->r15) = ctx->r2;
        goto L_1519981C;
    // 0x15199814: sw          $v0, 0x148($t7)
    MEM_W(0X148, ctx->r15) = ctx->r2;
L_15199818:
    // 0x15199818: sw          $zero, 0x148($t9)
    MEM_W(0X148, ctx->r25) = 0;
L_1519981C:
    // 0x1519981C: lw          $v0, 0x1DC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1DC);
L_15199820:
    // 0x15199820: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15199824: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15199828: addiu       $sp, $sp, 0x1E0
    ctx->r29 = ADD32(ctx->r29, 0X1E0);
    // 0x1519982C: jr          $ra
    // 0x15199830: nop

    return;
    return;
    // 0x15199830: nop

;}
RECOMP_FUNC void func_1511F3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F3E8: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x1511F3EC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1511F3F0: bnel        $t6, $zero, L_1511F420
    if (ctx->r14 != 0) {
        // 0x1511F3F4: lw          $v0, 0x3C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X3C);
            goto L_1511F420;
    }
    goto skip_0;
    // 0x1511F3F4: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    skip_0:
    // 0x1511F3F8: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x1511F3FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1511F400: sw          $t0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r8;
    // 0x1511F404: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1511F408: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x1511F40C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1511F410: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1511F414: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1511F418: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x1511F41C: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
L_1511F420:
    // 0x1511F420: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x1511F424: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x1511F428: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x1511F42C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x1511F430: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1511F434: beq         $v1, $zero, L_1511F464
    if (ctx->r3 == 0) {
        // 0x1511F438: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_1511F464;
    }
    // 0x1511F438: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1511F43C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1511F440: lw          $a1, -0x161C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X161C);
    // 0x1511F444: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1511F448: beq         $at, $zero, L_1511F458
    if (ctx->r1 == 0) {
        // 0x1511F44C: subu        $t3, $v1, $a1
        ctx->r11 = SUB32(ctx->r3, ctx->r5);
            goto L_1511F458;
    }
    // 0x1511F44C: subu        $t3, $v1, $a1
    ctx->r11 = SUB32(ctx->r3, ctx->r5);
    // 0x1511F450: jr          $ra
    // 0x1511F454: sw          $t3, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r11;
    return;
    return;
    // 0x1511F454: sw          $t3, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r11;
L_1511F458:
    // 0x1511F458: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x1511F45C: jr          $ra
    // 0x1511F460: sw          $v0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r2;
    return;
    return;
    // 0x1511F460: sw          $v0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r2;
L_1511F464:
    // 0x1511F464: lw          $a1, -0x161C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X161C);
    // 0x1511F468: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x1511F46C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1511F470: beq         $at, $zero, L_1511F4C0
    if (ctx->r1 == 0) {
        // 0x1511F474: subu        $t4, $v1, $a1
        ctx->r12 = SUB32(ctx->r3, ctx->r5);
            goto L_1511F4C0;
    }
    // 0x1511F474: subu        $t4, $v1, $a1
    ctx->r12 = SUB32(ctx->r3, ctx->r5);
    // 0x1511F478: sll         $t6, $t4, 8
    ctx->r14 = S32(ctx->r12 << 8);
    // 0x1511F47C: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x1511F480: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x1511F484: mflo        $t7
    ctx->r15 = lo;
    // 0x1511F488: sw          $t4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r12;
    // 0x1511F48C: sb          $t7, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r15;
    // 0x1511F490: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x1511F494: bne         $v0, $zero, L_1511F4A0
    if (ctx->r2 != 0) {
        // 0x1511F498: nop
    
            goto L_1511F4A0;
    }
    // 0x1511F498: nop

    // 0x1511F49C: break       7
    do_break(353498268);
L_1511F4A0:
    // 0x1511F4A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1511F4A4: bne         $v0, $at, L_1511F4B8
    if (ctx->r2 != ctx->r1) {
        // 0x1511F4A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1511F4B8;
    }
    // 0x1511F4A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511F4AC: bne         $t6, $at, L_1511F4B8
    if (ctx->r14 != ctx->r1) {
        // 0x1511F4B0: nop
    
            goto L_1511F4B8;
    }
    // 0x1511F4B0: nop

    // 0x1511F4B4: break       6
    do_break(353498292);
L_1511F4B8:
    // 0x1511F4B8: jr          $ra
    // 0x1511F4BC: nop

    return;
    return;
    // 0x1511F4BC: nop

L_1511F4C0:
    // 0x1511F4C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1511F4C4: sb          $t8, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r24;
    // 0x1511F4C8: jr          $ra
    // 0x1511F4CC: nop

    return;
    return;
    // 0x1511F4CC: nop

;}
RECOMP_FUNC void func_1000F3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F3D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000F3D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1000F3D8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x1000F3DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000F3E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000F3E4: andi        $a1, $a0, 0xF
    ctx->r5 = ctx->r4 & 0XF;
    // 0x1000F3E8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1000F3EC: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1000F3F0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1000F3F4: addiu       $t8, $t8, 0x25E0
    ctx->r24 = ADD32(ctx->r24, 0X25E0);
    // 0x1000F3F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1000F3FC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x1000F400: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x1000F404: beql        $t9, $zero, L_1000F43C
    if (ctx->r25 == 0) {
        // 0x1000F408: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000F43C;
    }
    goto skip_0;
    // 0x1000F408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1000F40C: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x1000F410: beq         $a0, $t0, L_1000F420
    if (ctx->r4 == ctx->r8) {
        // 0x1000F414: nop
    
            goto L_1000F420;
    }
    // 0x1000F414: nop

    // 0x1000F418: bnel        $a1, $a0, L_1000F43C
    if (ctx->r5 != ctx->r4) {
        // 0x1000F41C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000F43C;
    }
    goto skip_1;
    // 0x1000F41C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_1000F420:
    // 0x1000F420: jal         0x100173C4
    // 0x1000F424: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    func_100173C4(rdram, ctx);
        goto after_0;
    // 0x1000F424: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    after_0:
    // 0x1000F428: beql        $v0, $zero, L_1000F43C
    if (ctx->r2 == 0) {
        // 0x1000F42C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000F43C;
    }
    goto skip_2;
    // 0x1000F42C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x1000F430: b           L_1000F43C
    // 0x1000F434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000F43C;
    // 0x1000F434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000F438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000F43C:
    // 0x1000F43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000F440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000F444: jr          $ra
    // 0x1000F448: nop

    return;
    return;
    // 0x1000F448: nop

;}
RECOMP_FUNC void func_151C15FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C15FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C1600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C1604: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151C1608: jal         0x151C1570
    // 0x151C160C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151C1570(rdram, ctx);
        goto after_0;
    // 0x151C160C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151C1610: jal         0x15132570
    // 0x151C1614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15132570(rdram, ctx);
        goto after_1;
    // 0x151C1614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151C1618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C161C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C1620: jr          $ra
    // 0x151C1624: nop

    return;
    return;
    // 0x151C1624: nop

;}
RECOMP_FUNC void func_151CE4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CE4DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151CE4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CE4E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151CE4E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151CE4EC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151CE4F0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x151CE4F4: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x151CE4F8: lw          $t7, 0x48($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X48);
    // 0x151CE4FC: jal         0x151494E0
    // 0x151CE500: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151CE500: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x151CE504: jal         0x15147928
    // 0x151CE508: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x151CE508: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x151CE50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CE510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151CE514: jr          $ra
    // 0x151CE518: nop

    return;
    return;
    // 0x151CE518: nop

;}
RECOMP_FUNC void func_15191BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191BE0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x15191BE4: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x15191BE8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15191BEC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x15191BF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15191BF4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15191BF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15191BFC: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x15191C00: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x15191C04: bnel        $a3, $zero, L_15191C18
    if (ctx->r7 != 0) {
        // 0x15191C08: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_15191C18;
    }
    goto skip_0;
    // 0x15191C08: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    skip_0:
    // 0x15191C0C: b           L_15191D44
    // 0x15191C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15191D44;
    // 0x15191C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15191C14: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
L_15191C18:
    // 0x15191C18: lbu         $t7, 0x3B($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X3B);
    // 0x15191C1C: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x15191C20: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x15191C24: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    // 0x15191C28: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15191C2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15191C30: sll         $t3, $a2, 6
    ctx->r11 = S32(ctx->r6 << 6);
    // 0x15191C34: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15191C38: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x15191C3C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x15191C40: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15191C44: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x15191C48: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x15191C4C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15191C50: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15191C54: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x15191C58: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x15191C5C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15191C60: jal         0x1504715C
    // 0x15191C64: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x15191C64: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15191C68: lh          $v0, 0xBE($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XBE);
    // 0x15191C6C: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15191C70: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15191C74: lh          $t4, 0xCA($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XCA);
    // 0x15191C78: lh          $t5, 0xCE($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XCE);
    // 0x15191C7C: lbu         $t6, 0xD3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XD3);
    // 0x15191C80: lbu         $t7, 0xD7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD7);
    // 0x15191C84: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15191C88: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15191C8C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15191C90: lbu         $t1, 0xE7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE7);
    // 0x15191C94: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x15191C98: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x15191C9C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x15191CA0: sh          $t4, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r12;
    // 0x15191CA4: sh          $t5, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r13;
    // 0x15191CA8: sb          $t6, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r14;
    // 0x15191CAC: sb          $t7, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r15;
    // 0x15191CB0: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x15191CB4: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x15191CB8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15191CBC: bne         $v0, $a0, L_15191CCC
    if (ctx->r2 != ctx->r4) {
        // 0x15191CC0: sb          $t1, 0xA0($sp)
        MEM_B(0XA0, ctx->r29) = ctx->r9;
            goto L_15191CCC;
    }
    // 0x15191CC0: sb          $t1, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r9;
    // 0x15191CC4: b           L_15191CD0
    // 0x15191CC8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
        goto L_15191CD0;
    // 0x15191CC8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
L_15191CCC:
    // 0x15191CCC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15191CD0:
    // 0x15191CD0: bne         $v0, $a0, L_15191CE0
    if (ctx->r2 != ctx->r4) {
        // 0x15191CD4: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_15191CE0;
    }
    // 0x15191CD4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15191CD8: b           L_15191CE4
    // 0x15191CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15191CE4;
    // 0x15191CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15191CE0:
    // 0x15191CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15191CE4:
    // 0x15191CE4: lbu         $t2, 0xEB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XEB);
    // 0x15191CE8: lw          $t3, 0xEC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XEC);
    // 0x15191CEC: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x15191CF0: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15191CF4: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x15191CF8: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x15191CFC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15191D00: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15191D04: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x15191D08: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x15191D0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15191D10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x15191D14: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15191D18: jal         0x15149130
    // 0x15191D1C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x15191D1C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_1:
    // 0x15191D20: beq         $v0, $zero, L_15191D40
    if (ctx->r2 == 0) {
        // 0x15191D24: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15191D40;
    }
    // 0x15191D24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15191D28: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15191D2C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x15191D30: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x15191D34: jal         0x10022EC0
    // 0x15191D38: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15191D38: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    after_2:
    // 0x15191D3C: lw          $v1, 0xA4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA4);
L_15191D40:
    // 0x15191D40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15191D44:
    // 0x15191D44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15191D48: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x15191D4C: jr          $ra
    // 0x15191D50: nop

    return;
    return;
    // 0x15191D50: nop

;}
RECOMP_FUNC void func_151D2F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D2F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D2F08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151D2F0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151D2F10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D2F14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151D2F18: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x151D2F1C: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x151D2F20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D2F24: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D2F28: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    // 0x151D2F2C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151D2F30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151D2F34: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    // 0x151D2F38: jal         0x15167A68
    // 0x151D2F3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151D2F3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151D2F40: bne         $v0, $zero, L_151D2F50
    if (ctx->r2 != 0) {
        // 0x151D2F44: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151D2F50;
    }
    // 0x151D2F44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151D2F48: b           L_151D2F80
    // 0x151D2F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D2F80;
    // 0x151D2F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D2F50:
    // 0x151D2F50: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x151D2F54: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151D2F58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151D2F5C: jal         0x10022EC0
    // 0x151D2F60: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151D2F60: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x151D2F64: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x151D2F68: lbu         $t8, 0x18($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X18);
    // 0x151D2F6C: sh          $zero, 0x20($v0)
    MEM_H(0X20, ctx->r2) = 0;
    // 0x151D2F70: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x151D2F74: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x151D2F78: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x151D2F7C: sb          $t9, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r25;
L_151D2F80:
    // 0x151D2F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2F84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D2F88: jr          $ra
    // 0x151D2F8C: nop

    return;
    return;
    // 0x151D2F8C: nop

;}
RECOMP_FUNC void func_1517685C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517685C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15176860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15176864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15176868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1517686C: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x15176870: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15176874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15176878: lbu         $t7, -0x20A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X20A4);
    // 0x1517687C: beq         $t7, $zero, L_15176B68
    if (ctx->r15 == 0) {
        // 0x15176880: nop
    
            goto L_15176B68;
    }
    // 0x15176880: nop

    // 0x15176884: lbu         $t8, 0xED($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XED);
    // 0x15176888: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517688C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15176890: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15176894: sb          $v1, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = ctx->r3;
    // 0x15176898: lbu         $v0, 0x91($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X91);
    // 0x1517689C: beq         $v0, $zero, L_151768C4
    if (ctx->r2 == 0) {
        // 0x151768A0: nop
    
            goto L_151768C4;
    }
    // 0x151768A0: nop

    // 0x151768A4: beq         $v0, $v1, L_15176A8C
    if (ctx->r2 == ctx->r3) {
        // 0x151768A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15176A8C;
    }
    // 0x151768A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151768AC: beq         $v0, $at, L_15176B08
    if (ctx->r2 == ctx->r1) {
        // 0x151768B0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15176B08;
    }
    // 0x151768B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151768B4: beql        $v0, $at, L_15176B0C
    if (ctx->r2 == ctx->r1) {
        // 0x151768B8: lwc1        $f6, 0x9C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
            goto L_15176B0C;
    }
    goto skip_0;
    // 0x151768B8: lwc1        $f6, 0x9C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x151768BC: b           L_15176B0C
    // 0x151768C0: lwc1        $f6, 0x9C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
        goto L_15176B0C;
    // 0x151768C0: lwc1        $f6, 0x9C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
L_151768C4:
    // 0x151768C4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x151768C8: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x151768CC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151768D0: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151768D4: lwc1        $f16, 0x98($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X98);
    // 0x151768D8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151768DC: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x151768E0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151768E4: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x151768E8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151768EC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151768F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151768F4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151768F8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151768FC: jal         0x150AD960
    // 0x15176900: nop

    func_150AD960(rdram, ctx);
        goto after_0;
    // 0x15176900: nop

    after_0:
    // 0x15176904: slti        $at, $v0, 0x190
    ctx->r1 = SIGNED(ctx->r2) < 0X190 ? 1 : 0;
    // 0x15176908: beq         $at, $zero, L_15176940
    if (ctx->r1 == 0) {
        // 0x1517690C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_15176940;
    }
    // 0x1517690C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15176910: jal         0x150ADA20
    // 0x15176914: sb          $t3, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15176914: sb          $t3, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r11;
    after_1:
    // 0x15176918: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x1517691C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x15176920: subu        $t6, $t5, $t4
    ctx->r14 = SUB32(ctx->r13, ctx->r12);
    // 0x15176924: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15176928: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x1517692C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15176930: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15176934: swc1        $f16, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f16.u32l;
    // 0x15176938: b           L_15176B70
    // 0x1517693C: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
        goto L_15176B70;
    // 0x1517693C: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
L_15176940:
    // 0x15176940: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15176944: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x15176948: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x1517694C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15176950: nop

    // 0x15176954: bc1t        L_15176A28
    if (c1cs) {
        // 0x15176958: nop
    
            goto L_15176A28;
    }
    // 0x15176958: nop

    // 0x1517695C: lwc1        $f18, 0xA8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x15176960: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15176964: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15176968: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x1517696C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x15176970: bc1f        L_15176988
    if (!c1cs) {
        // 0x15176974: swc1        $f4, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
            goto L_15176988;
    }
    // 0x15176974: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
    // 0x15176978: lwc1        $f6, 0xAC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x1517697C: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15176980: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15176984: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
L_15176988:
    // 0x15176988: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x1517698C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15176990: nop

    // 0x15176994: bc1fl       L_151769AC
    if (!c1cs) {
        // 0x15176998: lwc1        $f4, 0xCC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XCC);
            goto L_151769AC;
    }
    goto skip_1;
    // 0x15176998: lwc1        $f4, 0xCC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XCC);
    skip_1:
    // 0x1517699C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151769A0: b           L_15176A04
    // 0x151769A4: swc1        $f18, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f18.u32l;
        goto L_15176A04;
    // 0x151769A4: swc1        $f18, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f18.u32l;
    // 0x151769A8: lwc1        $f4, 0xCC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XCC);
L_151769AC:
    // 0x151769AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151769B0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151769B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151769B8: nop

    // 0x151769BC: bc1fl       L_15176A08
    if (!c1cs) {
        // 0x151769C0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_15176A08;
    }
    goto skip_2;
    // 0x151769C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_2:
    // 0x151769C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151769C8: nop

    // 0x151769CC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x151769D0: nop

    // 0x151769D4: bc1fl       L_15176A08
    if (!c1cs) {
        // 0x151769D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_15176A08;
    }
    goto skip_3;
    // 0x151769D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_3:
    // 0x151769DC: jal         0x150ADA20
    // 0x151769E0: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151769E0: nop

    after_2:
    // 0x151769E4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x151769E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151769EC: slti        $at, $t7, 0x33
    ctx->r1 = SIGNED(ctx->r15) < 0X33 ? 1 : 0;
    // 0x151769F0: beq         $at, $zero, L_15176A04
    if (ctx->r1 == 0) {
        // 0x151769F4: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_15176A04;
    }
    // 0x151769F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151769F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151769FC: nop

    // 0x15176A00: swc1        $f10, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f10.u32l;
L_15176A04:
    // 0x15176A04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_15176A08:
    // 0x15176A08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15176A0C: lwc1        $f18, 0xA8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x15176A10: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x15176A14: nop

    // 0x15176A18: bc1fl       L_15176B74
    if (!c1cs) {
        // 0x15176A1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15176B74;
    }
    goto skip_4;
    // 0x15176A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x15176A20: b           L_15176B70
    // 0x15176A24: swc1        $f2, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f2.u32l;
        goto L_15176B70;
    // 0x15176A24: swc1        $f2, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f2.u32l;
L_15176A28:
    // 0x15176A28: jal         0x150ADA20
    // 0x15176A2C: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15176A2C: nop

    after_3:
    // 0x15176A30: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x15176A34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15176A38: slti        $at, $v1, 0x19
    ctx->r1 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x15176A3C: beq         $at, $zero, L_15176B70
    if (ctx->r1 == 0) {
        // 0x15176A40: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_15176B70;
    }
    // 0x15176A40: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15176A44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15176A48: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x15176A4C: beq         $at, $zero, L_15176A80
    if (ctx->r1 == 0) {
        // 0x15176A50: swc1        $f4, 0xCC($s0)
        MEM_W(0XCC, ctx->r16) = ctx->f4.u32l;
            goto L_15176A80;
    }
    // 0x15176A50: swc1        $f4, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f4.u32l;
    // 0x15176A54: jal         0x150ADA20
    // 0x15176A58: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15176A58: nop

    after_4:
    // 0x15176A5C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15176A60: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15176A64: mfhi        $t8
    ctx->r24 = hi;
    // 0x15176A68: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x15176A6C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15176A70: nop

    // 0x15176A74: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15176A78: b           L_15176B70
    // 0x15176A7C: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
        goto L_15176B70;
    // 0x15176A7C: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
L_15176A80:
    // 0x15176A80: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x15176A84: b           L_15176B74
    // 0x15176A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15176B74;
    // 0x15176A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15176A8C:
    // 0x15176A8C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15176A90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15176A94: lwc1        $f18, 0xC8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x15176A98: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176A9C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15176AA0: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x15176AA4: nop

    // 0x15176AA8: bc1f        L_15176AF8
    if (!c1cs) {
        // 0x15176AAC: nop
    
            goto L_15176AF8;
    }
    // 0x15176AAC: nop

    // 0x15176AB0: lh          $t1, 0x92($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X92);
    // 0x15176AB4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x15176AB8: sb          $t0, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r8;
    // 0x15176ABC: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x15176AC0: sh          $t2, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r10;
    // 0x15176AC4: lh          $t3, 0x92($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X92);
    // 0x15176AC8: ori         $t5, $t3, 0x4
    ctx->r13 = ctx->r11 | 0X4;
    // 0x15176ACC: jal         0x150ADA20
    // 0x15176AD0: sh          $t5, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15176AD0: sh          $t5, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r13;
    after_5:
    // 0x15176AD4: andi        $t4, $v0, 0x7F
    ctx->r12 = ctx->r2 & 0X7F;
    // 0x15176AD8: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x15176ADC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15176AE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15176AE4: lwc1        $f8, 0xC8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x15176AE8: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15176AEC: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15176AF0: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15176AF4: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
L_15176AF8:
    // 0x15176AF8: jal         0x15175958
    // 0x15176AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15175958(rdram, ctx);
        goto after_6;
    // 0x15176AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x15176B00: b           L_15176B74
    // 0x15176B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15176B74;
    // 0x15176B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15176B08:
    // 0x15176B08: lwc1        $f6, 0x9C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
L_15176B0C:
    // 0x15176B0C: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x15176B10: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x15176B14: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15176B18: nop

    // 0x15176B1C: bc1fl       L_15176B34
    if (!c1cs) {
        // 0x15176B20: lwc1        $f10, 0xA8($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
            goto L_15176B34;
    }
    goto skip_5;
    // 0x15176B20: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
    skip_5:
    // 0x15176B24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15176B28: b           L_15176B58
    // 0x15176B2C: swc1        $f18, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f18.u32l;
        goto L_15176B58;
    // 0x15176B2C: swc1        $f18, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f18.u32l;
    // 0x15176B30: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
L_15176B34:
    // 0x15176B34: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15176B38: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x15176B3C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x15176B40: nop

    // 0x15176B44: bc1f        L_15176B58
    if (!c1cs) {
        // 0x15176B48: nop
    
            goto L_15176B58;
    }
    // 0x15176B48: nop

    // 0x15176B4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15176B50: nop

    // 0x15176B54: swc1        $f4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f4.u32l;
L_15176B58:
    // 0x15176B58: jal         0x15175958
    // 0x15176B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15175958(rdram, ctx);
        goto after_7;
    // 0x15176B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x15176B60: b           L_15176B74
    // 0x15176B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15176B74;
    // 0x15176B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15176B68:
    // 0x15176B68: jal         0x1516972C
    // 0x15176B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_8;
    // 0x15176B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_15176B70:
    // 0x15176B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15176B74:
    // 0x15176B74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15176B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15176B7C: jr          $ra
    // 0x15176B80: nop

    return;
    return;
    // 0x15176B80: nop

;}
RECOMP_FUNC void func_1506AC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AC0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506AC10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506AC14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1506AC18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1506AC1C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1506AC20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1506AC24: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x1506AC28: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1506AC2C: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1506AC30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1506AC34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506AC38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1506AC3C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1506AC40: jal         0x151B7328
    // 0x1506AC44: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    func_151B7328(rdram, ctx);
        goto after_0;
    // 0x1506AC44: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x1506AC48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506AC4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506AC50: jr          $ra
    // 0x1506AC54: nop

    return;
    return;
    // 0x1506AC54: nop

;}
RECOMP_FUNC void func_1506E67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E67C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E684: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E688: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E68C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E690: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E694: jal         0x1506E46C
    // 0x1506E698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E69C: beq         $v0, $zero, L_1506E6AC
    if (ctx->r2 == 0) {
        // 0x1506E6A0: addiu       $a0, $zero, 0xBE
        ctx->r4 = ADD32(0, 0XBE);
            goto L_1506E6AC;
    }
    // 0x1506E6A0: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    // 0x1506E6A4: jal         0x1506BA4C
    // 0x1506E6A8: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    func_1506BA4C(rdram, ctx);
        goto after_1;
    // 0x1506E6A8: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    after_1:
L_1506E6AC:
    // 0x1506E6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E6B4: jr          $ra
    // 0x1506E6B8: nop

    return;
    return;
    // 0x1506E6B8: nop

;}
RECOMP_FUNC void func_1519E65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E664: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1519E668: jal         0x1519CF70
    // 0x1519E66C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_1519CF70(rdram, ctx);
        goto after_0;
    // 0x1519E66C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x1519E670: jal         0x1519CF70
    // 0x1519E674: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_1519CF70(rdram, ctx);
        goto after_1;
    // 0x1519E674: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x1519E678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519E67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E680: jr          $ra
    // 0x1519E684: nop

    return;
    return;
    // 0x1519E684: nop

;}
RECOMP_FUNC void func_1504AEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504AEF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1504AEF8: bne         $a0, $zero, L_1504AF08
    if (ctx->r4 != 0) {
        // 0x1504AEFC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1504AF08;
    }
    // 0x1504AEFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1504AF00: jr          $ra
    // 0x1504AF04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1504AF04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1504AF08:
    // 0x1504AF08: jr          $ra
    // 0x1504AF0C: nop

    return;
    return;
    // 0x1504AF0C: nop

;}
RECOMP_FUNC void func_15107700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107700: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x15107704: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x15107708: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x1510770C: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    // 0x15107710: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15107714: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x15107718: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x1510771C: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15107720: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15107724: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15107728: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510772C: lw          $t2, 0x1D4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1D4);
    // 0x15107730: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15107734: bnel        $t2, $zero, L_15107748
    if (ctx->r10 != 0) {
        // 0x15107738: sw          $a0, 0x114($sp)
        MEM_W(0X114, ctx->r29) = ctx->r4;
            goto L_15107748;
    }
    goto skip_0;
    // 0x15107738: sw          $a0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r4;
    skip_0:
    // 0x1510773C: b           L_151078D4
    // 0x15107740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151078D4;
    // 0x15107740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15107744: sw          $a0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r4;
L_15107748:
    // 0x15107748: lbu         $t3, 0x3B($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X3B);
    // 0x1510774C: sh          $a1, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r5;
    // 0x15107750: sh          $a2, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r6;
    // 0x15107754: bne         $a3, $v0, L_15107768
    if (ctx->r7 != ctx->r2) {
        // 0x15107758: sb          $t3, 0x118($sp)
        MEM_B(0X118, ctx->r29) = ctx->r11;
            goto L_15107768;
    }
    // 0x15107758: sb          $t3, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r11;
    // 0x1510775C: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x15107760: b           L_1510776C
    // 0x15107764: sh          $t4, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r12;
        goto L_1510776C;
    // 0x15107764: sh          $t4, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r12;
L_15107768:
    // 0x15107768: sh          $a3, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r7;
L_1510776C:
    // 0x1510776C: bne         $a3, $v0, L_1510777C
    if (ctx->r7 != ctx->r2) {
        // 0x15107770: addiu       $t4, $sp, 0x50
        ctx->r12 = ADD32(ctx->r29, 0X50);
            goto L_1510777C;
    }
    // 0x15107770: addiu       $t4, $sp, 0x50
    ctx->r12 = ADD32(ctx->r29, 0X50);
    // 0x15107774: b           L_15107780
    // 0x15107778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15107780;
    // 0x15107778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510777C:
    // 0x1510777C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15107780:
    // 0x15107780: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x15107784: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x15107788: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x1510778C: lh          $t6, 0x13E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X13E);
    // 0x15107790: lh          $t7, 0x142($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X142);
    // 0x15107794: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x15107798: sb          $v0, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r2;
    // 0x1510779C: sb          $zero, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = 0;
    // 0x151077A0: sw          $t5, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r13;
    // 0x151077A4: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x151077A8: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x151077AC: sh          $t6, 0x104($sp)
    MEM_H(0X104, ctx->r29) = ctx->r14;
    // 0x151077B0: sh          $t7, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r15;
    // 0x151077B4: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x151077B8: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x151077BC: addiu       $t8, $sp, 0x108
    ctx->r24 = ADD32(ctx->r29, 0X108);
    // 0x151077C0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x151077C4: swl         $at, 0x0($t8)
    do_swl(rdram, 0X0, ctx->r24, ctx->r1);
    // 0x151077C8: swr         $at, 0x3($t8)
    do_swr(rdram, 0X3, ctx->r24, ctx->r1);
    // 0x151077CC: sb          $t3, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r11;
    // 0x151077D0: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x151077D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151077D8: jal         0x15107A20
    // 0x151077DC: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    func_15107A20(rdram, ctx);
        goto after_0;
    // 0x151077DC: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    after_0:
    // 0x151077E0: lwc1        $f0, 0xC4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151077E4: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151077E8: lwc1        $f2, 0xC8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151077EC: lwc1        $f12, 0xCC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151077F0: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151077F4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151077F8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x151077FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15107800: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x15107804: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x15107808: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1510780C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15107810: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x15107814: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x15107818: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1510781C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x15107820: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x15107824: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x15107828: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1510782C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x15107830: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x15107834: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x15107838: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x1510783C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15107840: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15107844: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15107848: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1510784C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x15107850: jal         0x15081690
    // 0x15107854: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_15081690(rdram, ctx);
        goto after_1;
    // 0x15107854: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15107858: lbu         $t0, 0xB5($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB5);
    // 0x1510785C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x15107860: bnel        $t0, $zero, L_15107874
    if (ctx->r8 != 0) {
        // 0x15107864: lw          $at, 0x0($t8)
        ctx->r1 = MEM_W(ctx->r24, 0X0);
            goto L_15107874;
    }
    goto skip_1;
    // 0x15107864: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    skip_1:
    // 0x15107868: b           L_151078D4
    // 0x1510786C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151078D4;
    // 0x1510786C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15107870: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
L_15107874:
    // 0x15107874: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x15107878: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x1510787C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x15107880: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x15107884: addiu       $a2, $sp, 0xD0
    ctx->r6 = ADD32(ctx->r29, 0XD0);
    // 0x15107888: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x1510788C: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x15107890: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x15107894: jal         0x15107AE0
    // 0x15107898: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    func_15107AE0(rdram, ctx);
        goto after_2;
    // 0x15107898: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    after_2:
    // 0x1510789C: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x151078A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x151078A4: lbu         $a2, 0x14B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X14B);
    // 0x151078A8: jal         0x15105CE0
    // 0x151078AC: lw          $a3, 0x14C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14C);
    func_15105CE0(rdram, ctx);
        goto after_3;
    // 0x151078AC: lw          $a3, 0x14C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14C);
    after_3:
    // 0x151078B0: beq         $v0, $zero, L_151078D0
    if (ctx->r2 == 0) {
        // 0x151078B4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151078D0;
    }
    // 0x151078B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151078B8: lw          $a0, 0x60($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X60);
    // 0x151078BC: sw          $v0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r2;
    // 0x151078C0: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x151078C4: jal         0x10022EC0
    // 0x151078C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151078C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x151078CC: lw          $v1, 0x110($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X110);
L_151078D0:
    // 0x151078D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151078D4:
    // 0x151078D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151078D8: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    // 0x151078DC: jr          $ra
    // 0x151078E0: nop

    return;
    return;
    // 0x151078E0: nop

;}
RECOMP_FUNC void func_1514462C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514462C: lbu         $v0, 0x15($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15);
    // 0x15144630: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15144634: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x15144638: beql        $t6, $zero, L_15144690
    if (ctx->r14 == 0) {
        // 0x1514463C: lh          $v0, 0x6($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X6);
            goto L_15144690;
    }
    goto skip_0;
    // 0x1514463C: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    skip_0:
    // 0x15144640: beq         $t6, $at, L_151446D0
    if (ctx->r14 == ctx->r1) {
        // 0x15144644: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151446D0;
    }
    // 0x15144644: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15144648: beq         $t6, $at, L_1514465C
    if (ctx->r14 == ctx->r1) {
        // 0x1514464C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1514465C;
    }
    // 0x1514464C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15144650: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15144654: b           L_15144704
    // 0x15144658: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_15144704;
    // 0x15144658: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_1514465C:
    // 0x1514465C: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x15144660: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x15144664: lh          $t0, 0xA($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XA);
    // 0x15144668: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514466C: mflo        $t9
    ctx->r25 = lo;
    // 0x15144670: nop

    // 0x15144674: nop

    // 0x15144678: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514467C: mflo        $t1
    ctx->r9 = lo;
    // 0x15144680: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15144684: b           L_15144700
    // 0x15144688: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
        goto L_15144700;
    // 0x15144688: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1514468C: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
L_15144690:
    // 0x15144690: lh          $t3, 0x8($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X8);
    // 0x15144694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15144698: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514469C: lwc1        $f10, 0x5698($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5698);
    // 0x151446A0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x151446A4: nop

    // 0x151446A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151446AC: mflo        $t2
    ctx->r10 = lo;
    // 0x151446B0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x151446B4: nop

    // 0x151446B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151446BC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151446C0: nop

    // 0x151446C4: mul.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x151446C8: b           L_15144700
    // 0x151446CC: nop

        goto L_15144700;
    // 0x151446CC: nop

L_151446D0:
    // 0x151446D0: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x151446D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151446D8: lwc1        $f8, 0x569C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X569C);
    // 0x151446DC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x151446E0: nop

    // 0x151446E4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151446E8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151446EC: nop

    // 0x151446F0: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151446F4: nop

    // 0x151446F8: mul.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151446FC: nop

L_15144700:
    // 0x15144700: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15144704:
    // 0x15144704: jr          $ra
    // 0x15144708: nop

    return;
    return;
    // 0x15144708: nop

;}
RECOMP_FUNC void func_15040A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A28: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A2C: jr          $ra
    // 0x15040A30: nop

    return;
    return;
    // 0x15040A30: nop

;}
RECOMP_FUNC void func_15049260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15049260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15049264: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15049268: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1504926C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15049270: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15049274: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15049278: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x1504927C: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
    // 0x15049280: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_15049284:
    // 0x15049284: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15049288: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x1504928C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x15049290: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15049294: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x15049298: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x1504929C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x150492A0: bne         $t6, $t8, L_15049284
    if (ctx->r14 != ctx->r24) {
        // 0x150492A4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_15049284;
    }
    // 0x150492A4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x150492A8: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x150492AC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x150492B0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x150492B4: jal         0x150AAD98
    // 0x150492B8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_150AAD98(rdram, ctx);
        goto after_0;
    // 0x150492B8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_0:
    // 0x150492BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150492C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150492C4: jr          $ra
    // 0x150492C8: nop

    return;
    return;
    // 0x150492C8: nop

;}
RECOMP_FUNC void func_150ED748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150ED748: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x150ED74C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150ED750: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150ED754: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150ED758: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150ED75C: lbu         $t5, -0x19EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X19EA);
    // 0x150ED760: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150ED764: sw          $t6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r14;
    // 0x150ED768: beql        $t5, $zero, L_150ED780
    if (ctx->r13 == 0) {
        // 0x150ED76C: sw          $zero, 0x174($sp)
        MEM_W(0X174, ctx->r29) = 0;
            goto L_150ED780;
    }
    goto skip_0;
    // 0x150ED76C: sw          $zero, 0x174($sp)
    MEM_W(0X174, ctx->r29) = 0;
    skip_0:
    // 0x150ED770: lbu         $t8, 0x127($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X127);
    // 0x150ED774: b           L_150ED780
    // 0x150ED778: sw          $t8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r24;
        goto L_150ED780;
    // 0x150ED778: sw          $t8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r24;
    // 0x150ED77C: sw          $zero, 0x174($sp)
    MEM_W(0X174, ctx->r29) = 0;
L_150ED780:
    // 0x150ED780: sb          $zero, 0x2FC($s0)
    MEM_B(0X2FC, ctx->r16) = 0;
    // 0x150ED784: sb          $zero, 0x124($s0)
    MEM_B(0X124, ctx->r16) = 0;
    // 0x150ED788: sb          $zero, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = 0;
    // 0x150ED78C: lbu         $t3, 0x124($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X124);
    // 0x150ED790: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x150ED794: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150ED798: sb          $t3, 0x16A($sp)
    MEM_B(0X16A, ctx->r29) = ctx->r11;
    // 0x150ED79C: lhu         $t4, 0x7A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X7A);
    // 0x150ED7A0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150ED7A4: sh          $t4, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r12;
    // 0x150ED7A8: sb          $t7, 0x247($s0)
    MEM_B(0X247, ctx->r16) = ctx->r15;
    // 0x150ED7AC: sb          $t9, 0x248($s0)
    MEM_B(0X248, ctx->r16) = ctx->r25;
    // 0x150ED7B0: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x150ED7B4: bnel        $t6, $zero, L_150ED820
    if (ctx->r14 != 0) {
        // 0x150ED7B8: lbu         $v0, 0x127($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X127);
            goto L_150ED820;
    }
    goto skip_1;
    // 0x150ED7B8: lbu         $v0, 0x127($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X127);
    skip_1:
    // 0x150ED7BC: lbu         $t5, 0x13C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X13C);
    // 0x150ED7C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150ED7C4: beql        $t5, $zero, L_150ED938
    if (ctx->r13 == 0) {
        // 0x150ED7C8: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_2;
    // 0x150ED7C8: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_2:
    // 0x150ED7CC: sb          $t8, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = ctx->r24;
    // 0x150ED7D0: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150ED7D4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150ED7D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150ED7DC: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x150ED7E0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150ED7E4: nop

    // 0x150ED7E8: bc1fl       L_150ED938
    if (!c1cs) {
        // 0x150ED7EC: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_3;
    // 0x150ED7EC: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_3:
    // 0x150ED7F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150ED7F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150ED7F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150ED7FC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x150ED800: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150ED804: sb          $t3, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r11;
    // 0x150ED808: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150ED80C: bc1f        L_150ED934
    if (!c1cs) {
        // 0x150ED810: swc1        $f4, 0x114($s0)
        MEM_W(0X114, ctx->r16) = ctx->f4.u32l;
            goto L_150ED934;
    }
    // 0x150ED810: swc1        $f4, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f4.u32l;
    // 0x150ED814: b           L_150ED934
    // 0x150ED818: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
        goto L_150ED934;
    // 0x150ED818: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    // 0x150ED81C: lbu         $v0, 0x127($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X127);
L_150ED820:
    // 0x150ED820: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150ED824: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150ED828: beq         $v0, $at, L_150ED934
    if (ctx->r2 == ctx->r1) {
        // 0x150ED82C: sb          $v0, 0x16A($sp)
        MEM_B(0X16A, ctx->r29) = ctx->r2;
            goto L_150ED934;
    }
    // 0x150ED82C: sb          $v0, 0x16A($sp)
    MEM_B(0X16A, ctx->r29) = ctx->r2;
    // 0x150ED830: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150ED834: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150ED838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150ED83C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x150ED840: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150ED844: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150ED848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150ED84C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150ED850: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150ED854: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x150ED858: lw          $t9, -0x3A14($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A14);
    // 0x150ED85C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150ED860: lbu         $t6, 0x84($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X84);
    // 0x150ED864: bnel        $t6, $zero, L_150ED874
    if (ctx->r14 != 0) {
        // 0x150ED868: lbu         $t8, 0x16A($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X16A);
            goto L_150ED874;
    }
    goto skip_4;
    // 0x150ED868: lbu         $t8, 0x16A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X16A);
    skip_4:
    // 0x150ED86C: sb          $t5, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = ctx->r13;
    // 0x150ED870: lbu         $t8, 0x16A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X16A);
L_150ED874:
    // 0x150ED874: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150ED878: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x150ED87C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x150ED880: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x150ED884: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150ED888: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x150ED88C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150ED890: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x150ED894: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150ED898: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x150ED89C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150ED8A0: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x150ED8A4: lbu         $t7, 0x1CA($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X1CA);
    // 0x150ED8A8: beql        $t7, $zero, L_150ED938
    if (ctx->r15 == 0) {
        // 0x150ED8AC: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_5;
    // 0x150ED8AC: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_5:
    // 0x150ED8B0: lw          $v0, 0x31C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X31C);
    // 0x150ED8B4: lbu         $v1, 0x128($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X128);
    // 0x150ED8B8: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x150ED8BC: beq         $t9, $zero, L_150ED914
    if (ctx->r25 == 0) {
        // 0x150ED8C0: andi        $t3, $v1, 0x10
        ctx->r11 = ctx->r3 & 0X10;
            goto L_150ED914;
    }
    // 0x150ED8C0: andi        $t3, $v1, 0x10
    ctx->r11 = ctx->r3 & 0X10;
    // 0x150ED8C4: lhu         $t6, 0x12C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12C);
    // 0x150ED8C8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150ED8CC: beql        $t6, $zero, L_150ED938
    if (ctx->r14 == 0) {
        // 0x150ED8D0: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_6;
    // 0x150ED8D0: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_6:
    // 0x150ED8D4: sb          $t5, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r13;
    // 0x150ED8D8: lw          $v0, 0x31C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X31C);
    // 0x150ED8DC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150ED8E0: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x150ED8E4: lhu         $a0, 0x12C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12C);
    // 0x150ED8E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150ED8EC: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150ED8F0: beq         $at, $zero, L_150ED900
    if (ctx->r1 == 0) {
        // 0x150ED8F4: subu        $t8, $a0, $v1
        ctx->r24 = SUB32(ctx->r4, ctx->r3);
            goto L_150ED900;
    }
    // 0x150ED8F4: subu        $t8, $a0, $v1
    ctx->r24 = SUB32(ctx->r4, ctx->r3);
    // 0x150ED8F8: b           L_150ED934
    // 0x150ED8FC: sh          $t8, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r24;
        goto L_150ED934;
    // 0x150ED8FC: sh          $t8, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r24;
L_150ED900:
    // 0x150ED900: sh          $zero, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = 0;
    // 0x150ED904: jal         0x1508DAEC
    // 0x150ED908: lbu         $a0, 0x16A($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X16A);
    func_1508DAEC(rdram, ctx);
        goto after_0;
    // 0x150ED908: lbu         $a0, 0x16A($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X16A);
    after_0:
    // 0x150ED90C: b           L_150ED934
    // 0x150ED910: sb          $zero, 0x125($s0)
    MEM_B(0X125, ctx->r16) = 0;
        goto L_150ED934;
    // 0x150ED910: sb          $zero, 0x125($s0)
    MEM_B(0X125, ctx->r16) = 0;
L_150ED914:
    // 0x150ED914: beql        $t3, $zero, L_150ED938
    if (ctx->r11 == 0) {
        // 0x150ED918: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_7;
    // 0x150ED918: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_7:
    // 0x150ED91C: lhu         $t4, 0x12C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12C);
    // 0x150ED920: lbu         $a0, 0x16A($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X16A);
    // 0x150ED924: bnel        $t4, $zero, L_150ED938
    if (ctx->r12 != 0) {
        // 0x150ED928: lbu         $t7, 0x16B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16B);
            goto L_150ED938;
    }
    goto skip_8;
    // 0x150ED928: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    skip_8:
    // 0x150ED92C: jal         0x1508DAEC
    // 0x150ED930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1508DAEC(rdram, ctx);
        goto after_1;
    // 0x150ED930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_150ED934:
    // 0x150ED934: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
L_150ED938:
    // 0x150ED938: lbu         $t9, 0x16A($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X16A);
    // 0x150ED93C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150ED940: beq         $t7, $zero, L_150EDCB0
    if (ctx->r15 == 0) {
        // 0x150ED944: sll         $t6, $t9, 2
        ctx->r14 = S32(ctx->r25 << 2);
            goto L_150EDCB0;
    }
    // 0x150ED944: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x150ED948: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150ED94C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150ED950: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x150ED954: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150ED958: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150ED95C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150ED960: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150ED964: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150ED968: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x150ED96C: addu        $a2, $t6, $t5
    ctx->r6 = ADD32(ctx->r14, ctx->r13);
    // 0x150ED970: lbu         $t8, 0x1CA($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X1CA);
    // 0x150ED974: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150ED978: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x150ED97C: beq         $t8, $zero, L_150EDC50
    if (ctx->r24 == 0) {
        // 0x150ED980: sw          $t8, 0x16C($sp)
        MEM_W(0X16C, ctx->r29) = ctx->r24;
            goto L_150EDC50;
    }
    // 0x150ED980: sw          $t8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r24;
    // 0x150ED984: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x150ED988: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x150ED98C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150ED990: addiu       $t7, $t7, -0x18B8
    ctx->r15 = ADD32(ctx->r15, -0X18B8);
    // 0x150ED994: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x150ED998: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150ED99C: addu        $a1, $t4, $t7
    ctx->r5 = ADD32(ctx->r12, ctx->r15);
    // 0x150ED9A0: lwc1        $f0, 0x15AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X15AC);
    // 0x150ED9A4: lb          $a3, 0x2($a1)
    ctx->r7 = MEM_B(ctx->r5, 0X2);
    // 0x150ED9A8: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x150ED9AC: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x150ED9B0: sb          $t6, 0x247($s0)
    MEM_B(0X247, ctx->r16) = ctx->r14;
    // 0x150ED9B4: sb          $t5, 0x248($s0)
    MEM_B(0X248, ctx->r16) = ctx->r13;
    // 0x150ED9B8: lw          $v0, 0x31C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X31C);
    // 0x150ED9BC: lbu         $t8, 0x16A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X16A);
    // 0x150ED9C0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150ED9C4: lbu         $v1, 0x128($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X128);
    // 0x150ED9C8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150ED9CC: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x150ED9D0: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x150ED9D4: beq         $t3, $zero, L_150EDA70
    if (ctx->r11 == 0) {
        // 0x150ED9D8: nop
    
            goto L_150EDA70;
    }
    // 0x150ED9D8: nop

    // 0x150ED9DC: lw          $t9, -0x18D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18D8);
    // 0x150ED9E0: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x150ED9E4: addu        $t7, $t9, $t4
    ctx->r15 = ADD32(ctx->r25, ctx->r12);
    // 0x150ED9E8: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x150ED9EC: lhu         $t5, 0x0($t6)
    ctx->r13 = MEM_HU(ctx->r14, 0X0);
    // 0x150ED9F0: andi        $t3, $t5, 0x8000
    ctx->r11 = ctx->r13 & 0X8000;
    // 0x150ED9F4: beq         $t3, $zero, L_150EDA70
    if (ctx->r11 == 0) {
        // 0x150ED9F8: nop
    
            goto L_150EDA70;
    }
    // 0x150ED9F8: nop

    // 0x150ED9FC: lhu         $t8, 0x12C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12C);
    // 0x150EDA00: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x150EDA04: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x150EDA08: beq         $t8, $zero, L_150EDA70
    if (ctx->r24 == 0) {
        // 0x150EDA0C: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_150EDA70;
    }
    // 0x150EDA0C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150EDA10: sb          $t0, 0x247($s0)
    MEM_B(0X247, ctx->r16) = ctx->r8;
    // 0x150EDA14: sb          $t0, 0x248($s0)
    MEM_B(0X248, ctx->r16) = ctx->r8;
    // 0x150EDA18: lw          $v0, 0x31C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X31C);
    // 0x150EDA1C: sb          $t9, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r25;
    // 0x150EDA20: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x150EDA24: lhu         $a0, 0x12C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X12C);
    // 0x150EDA28: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150EDA2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150EDA30: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150EDA34: beq         $at, $zero, L_150EDA44
    if (ctx->r1 == 0) {
        // 0x150EDA38: subu        $t4, $a0, $v1
        ctx->r12 = SUB32(ctx->r4, ctx->r3);
            goto L_150EDA44;
    }
    // 0x150EDA38: subu        $t4, $a0, $v1
    ctx->r12 = SUB32(ctx->r4, ctx->r3);
    // 0x150EDA3C: b           L_150EDA70
    // 0x150EDA40: sh          $t4, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r12;
        goto L_150EDA70;
    // 0x150EDA40: sh          $t4, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r12;
L_150EDA44:
    // 0x150EDA44: sh          $zero, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = 0;
    // 0x150EDA48: swc1        $f2, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f2.u32l;
    // 0x150EDA4C: sw          $t1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r9;
    // 0x150EDA50: sb          $a3, 0x153($sp)
    MEM_B(0X153, ctx->r29) = ctx->r7;
    // 0x150EDA54: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    // 0x150EDA58: jal         0x1508DAEC
    // 0x150EDA5C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_1508DAEC(rdram, ctx);
        goto after_2;
    // 0x150EDA5C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x150EDA60: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x150EDA64: lb          $a3, 0x153($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X153);
    // 0x150EDA68: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x150EDA6C: lwc1        $f2, 0x154($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X154);
L_150EDA70:
    // 0x150EDA70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EDA74: lwc1        $f6, 0x15B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X15B0);
    // 0x150EDA78: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150EDA7C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x150EDA80: div.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150EDA84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EDA88: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150EDA8C: lbu         $t7, 0x16A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16A);
    // 0x150EDA90: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150EDA94: lw          $t4, -0x18D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X18D8);
    // 0x150EDA98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EDA9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150EDAA0: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150EDAA4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150EDAA8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150EDAAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EDAB0: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150EDAB4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x150EDAB8: nop

    // 0x150EDABC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x150EDAC0: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150EDAC4: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x150EDAC8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x150EDACC: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x150EDAD0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150EDAD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EDAD8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EDADC: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x150EDAE0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150EDAE4: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EDAE8: lhu         $v0, 0x0($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X0);
    // 0x150EDAEC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150EDAF0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150EDAF4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150EDAF8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x150EDAFC: nop

    // 0x150EDB00: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x150EDB04: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150EDB08: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x150EDB0C: beq         $at, $zero, L_150EDB18
    if (ctx->r1 == 0) {
        // 0x150EDB10: andi        $t8, $v0, 0x10
        ctx->r24 = ctx->r2 & 0X10;
            goto L_150EDB18;
    }
    // 0x150EDB10: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x150EDB14: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_150EDB18:
    // 0x150EDB18: beql        $t8, $zero, L_150EDB60
    if (ctx->r24 == 0) {
        // 0x150EDB1C: lb          $v0, 0x22B($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X22B);
            goto L_150EDB60;
    }
    goto skip_9;
    // 0x150EDB1C: lb          $v0, 0x22B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22B);
    skip_9:
    // 0x150EDB20: lw          $t9, 0x31C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X31C);
    // 0x150EDB24: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150EDB28: lbu         $t7, 0x128($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X128);
    // 0x150EDB2C: andi        $t4, $t7, 0x2
    ctx->r12 = ctx->r15 & 0X2;
    // 0x150EDB30: bnel        $t4, $zero, L_150EDB48
    if (ctx->r12 != 0) {
        // 0x150EDB34: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_150EDB48;
    }
    goto skip_10;
    // 0x150EDB34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_10:
    // 0x150EDB38: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x150EDB3C: bnel        $t6, $zero, L_150EDB60
    if (ctx->r14 != 0) {
        // 0x150EDB40: lb          $v0, 0x22B($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X22B);
            goto L_150EDB60;
    }
    goto skip_11;
    // 0x150EDB40: lb          $v0, 0x22B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22B);
    skip_11:
    // 0x150EDB44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_150EDB48:
    // 0x150EDB48: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150EDB4C: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x150EDB50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150EDB54: sb          $zero, 0x22B($s0)
    MEM_B(0X22B, ctx->r16) = 0;
    // 0x150EDB58: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x150EDB5C: lb          $v0, 0x22B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22B);
L_150EDB60:
    // 0x150EDB60: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150EDB64: subu        $t5, $a3, $v0
    ctx->r13 = SUB32(ctx->r7, ctx->r2);
    // 0x150EDB68: bgez        $t5, L_150EDB78
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150EDB6C: sra         $t3, $t5, 2
        ctx->r11 = S32(SIGNED(ctx->r13) >> 2);
            goto L_150EDB78;
    }
    // 0x150EDB6C: sra         $t3, $t5, 2
    ctx->r11 = S32(SIGNED(ctx->r13) >> 2);
    // 0x150EDB70: addiu       $at, $t5, 0x3
    ctx->r1 = ADD32(ctx->r13, 0X3);
    // 0x150EDB74: sra         $t3, $at, 2
    ctx->r11 = S32(SIGNED(ctx->r1) >> 2);
L_150EDB78:
    // 0x150EDB78: addu        $t8, $v0, $t3
    ctx->r24 = ADD32(ctx->r2, ctx->r11);
    // 0x150EDB7C: sb          $t8, 0x22B($s0)
    MEM_B(0X22B, ctx->r16) = ctx->r24;
    // 0x150EDB80: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x150EDB84: beq         $t9, $zero, L_150EDB90
    if (ctx->r25 == 0) {
        // 0x150EDB88: nop
    
            goto L_150EDB90;
    }
    // 0x150EDB88: nop

    // 0x150EDB8C: sb          $a3, 0x22B($s0)
    MEM_B(0X22B, ctx->r16) = ctx->r7;
L_150EDB90:
    // 0x150EDB90: bnel        $a3, $zero, L_150EDBB8
    if (ctx->r7 != 0) {
        // 0x150EDB94: lb          $t4, 0x22B($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X22B);
            goto L_150EDBB8;
    }
    goto skip_12;
    // 0x150EDB94: lb          $t4, 0x22B($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X22B);
    skip_12:
    // 0x150EDB98: lb          $v0, 0x22B($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X22B);
    // 0x150EDB9C: slti        $at, $v0, -0x4
    ctx->r1 = SIGNED(ctx->r2) < -0X4 ? 1 : 0;
    // 0x150EDBA0: bne         $at, $zero, L_150EDBB4
    if (ctx->r1 != 0) {
        // 0x150EDBA4: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_150EDBB4;
    }
    // 0x150EDBA4: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x150EDBA8: beql        $at, $zero, L_150EDBB8
    if (ctx->r1 == 0) {
        // 0x150EDBAC: lb          $t4, 0x22B($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X22B);
            goto L_150EDBB8;
    }
    goto skip_13;
    // 0x150EDBAC: lb          $t4, 0x22B($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X22B);
    skip_13:
    // 0x150EDBB0: sb          $zero, 0x22B($s0)
    MEM_B(0X22B, ctx->r16) = 0;
L_150EDBB4:
    // 0x150EDBB4: lb          $t4, 0x22B($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X22B);
L_150EDBB8:
    // 0x150EDBB8: lhu         $t7, 0x7A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X7A);
    // 0x150EDBBC: lw          $t3, 0xF4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XF4);
    // 0x150EDBC0: multu       $t4, $v1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EDBC4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150EDBC8: ori         $t8, $t3, 0x40
    ctx->r24 = ctx->r11 | 0X40;
    // 0x150EDBCC: sw          $t8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r24;
    // 0x150EDBD0: mflo        $t6
    ctx->r14 = lo;
    // 0x150EDBD4: subu        $t5, $t7, $t6
    ctx->r13 = SUB32(ctx->r15, ctx->r14);
    // 0x150EDBD8: sh          $t5, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r13;
    // 0x150EDBDC: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x150EDBE0: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x150EDBE4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150EDBE8: beq         $t4, $zero, L_150EDC14
    if (ctx->r12 == 0) {
        // 0x150EDBEC: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_150EDC14;
    }
    // 0x150EDBEC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x150EDBF0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x150EDBF4: beq         $at, $zero, L_150EDC14
    if (ctx->r1 == 0) {
        // 0x150EDBF8: lbu         $t7, 0x16A($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X16A);
            goto L_150EDC14;
    }
    // 0x150EDBF8: lbu         $t7, 0x16A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16A);
    // 0x150EDBFC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150EDC00: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x150EDC04: lb          $v1, 0xBCE($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBCE);
    // 0x150EDC08: beql        $v1, $zero, L_150EDC18
    if (ctx->r3 == 0) {
        // 0x150EDC0C: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_150EDC18;
    }
    goto skip_14;
    // 0x150EDC0C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    skip_14:
    // 0x150EDC10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150EDC14:
    // 0x150EDC14: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
L_150EDC18:
    // 0x150EDC18: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x150EDC1C: lhu         $t5, -0x18F0($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X18F0);
    // 0x150EDC20: andi        $t3, $t5, 0x2000
    ctx->r11 = ctx->r13 & 0X2000;
    // 0x150EDC24: beql        $t3, $zero, L_150EDC54
    if (ctx->r11 == 0) {
        // 0x150EDC28: lbu         $t8, 0x16A($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X16A);
            goto L_150EDC54;
    }
    goto skip_15;
    // 0x150EDC28: lbu         $t8, 0x16A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X16A);
    skip_15:
    // 0x150EDC2C: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x150EDC30: swc1        $f2, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f2.u32l;
    // 0x150EDC34: sw          $t1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r9;
    // 0x150EDC38: jal         0x1507BB28
    // 0x150EDC3C: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    func_1507BB28(rdram, ctx);
        goto after_3;
    // 0x150EDC3C: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    after_3:
    // 0x150EDC40: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x150EDC44: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x150EDC48: lwc1        $f2, 0x154($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X154);
    // 0x150EDC4C: sw          $v0, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r2;
L_150EDC50:
    // 0x150EDC50: lbu         $t8, 0x16A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X16A);
L_150EDC54:
    // 0x150EDC54: lbu         $v0, 0x89($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X89);
    // 0x150EDC58: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150EDC5C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x150EDC60: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x150EDC64: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x150EDC68: addiu       $t9, $t9, -0x18B8
    ctx->r25 = ADD32(ctx->r25, -0X18B8);
    // 0x150EDC6C: beq         $v0, $zero, L_150EDC80
    if (ctx->r2 == 0) {
        // 0x150EDC70: addu        $a1, $t4, $t9
        ctx->r5 = ADD32(ctx->r12, ctx->r25);
            goto L_150EDC80;
    }
    // 0x150EDC70: addu        $a1, $t4, $t9
    ctx->r5 = ADD32(ctx->r12, ctx->r25);
    // 0x150EDC74: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x150EDC78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150EDC7C: sb          $t7, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r15;
L_150EDC80:
    // 0x150EDC80: lb          $t6, 0x3($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X3);
    // 0x150EDC84: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150EDC88: nop

    // 0x150EDC8C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150EDC90: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150EDC94: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x150EDC98: lw          $t5, 0x31C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X31C);
    // 0x150EDC9C: sb          $t1, 0x75($t5)
    MEM_B(0X75, ctx->r13) = ctx->r9;
    // 0x150EDCA0: lw          $t3, 0x31C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X31C);
    // 0x150EDCA4: sb          $t1, 0x78($t3)
    MEM_B(0X78, ctx->r11) = ctx->r9;
    // 0x150EDCA8: b           L_150EDD40
    // 0x150EDCAC: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
        goto L_150EDD40;
    // 0x150EDCAC: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
L_150EDCB0:
    // 0x150EDCB0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150EDCB4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x150EDCB8: lb          $t4, -0x274($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X274);
    // 0x150EDCBC: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x150EDCC0: slt         $at, $t8, $t4
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x150EDCC4: beql        $at, $zero, L_150EDD40
    if (ctx->r1 == 0) {
        // 0x150EDCC8: addiu       $t4, $zero, 0x32
        ctx->r12 = ADD32(0, 0X32);
            goto L_150EDD40;
    }
    goto skip_16;
    // 0x150EDCC8: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    skip_16:
    // 0x150EDCCC: lbu         $t9, 0x16A($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X16A);
    // 0x150EDCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EDCD4: jal         0x1504C854
    // 0x150EDCD8: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    func_1504C854(rdram, ctx);
        goto after_4;
    // 0x150EDCD8: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    after_4:
    // 0x150EDCDC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x150EDCE0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150EDCE4: lbu         $t5, 0x16A($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X16A);
    // 0x150EDCE8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x150EDCEC: beq         $at, $zero, L_150EDD20
    if (ctx->r1 == 0) {
        // 0x150EDCF0: nop
    
            goto L_150EDD20;
    }
    // 0x150EDCF0: nop

    // 0x150EDCF4: lw          $t6, -0x18D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18D8);
    // 0x150EDCF8: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x150EDCFC: addiu       $t5, $zero, 0x2000
    ctx->r13 = ADD32(0, 0X2000);
    // 0x150EDD00: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x150EDD04: lw          $t4, 0x0($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X0);
    // 0x150EDD08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150EDD0C: lhu         $t9, 0x0($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X0);
    // 0x150EDD10: andi        $t7, $t9, 0x2000
    ctx->r15 = ctx->r25 & 0X2000;
    // 0x150EDD14: beq         $t7, $zero, L_150EDD20
    if (ctx->r15 == 0) {
        // 0x150EDD18: nop
    
            goto L_150EDD20;
    }
    // 0x150EDD18: nop

    // 0x150EDD1C: sw          $t5, -0x3D78($at)
    MEM_W(-0X3D78, ctx->r1) = ctx->r13;
L_150EDD20:
    // 0x150EDD20: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150EDD24: lw          $t6, -0x3D78($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D78);
    // 0x150EDD28: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150EDD2C: andi        $t3, $t6, 0x2000
    ctx->r11 = ctx->r14 & 0X2000;
    // 0x150EDD30: beql        $t3, $zero, L_150EDD40
    if (ctx->r11 == 0) {
        // 0x150EDD34: addiu       $t4, $zero, 0x32
        ctx->r12 = ADD32(0, 0X32);
            goto L_150EDD40;
    }
    goto skip_17;
    // 0x150EDD34: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    skip_17:
    // 0x150EDD38: sh          $t8, 0x244($s0)
    MEM_H(0X244, ctx->r16) = ctx->r24;
    // 0x150EDD3C: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
L_150EDD40:
    // 0x150EDD40: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x150EDD44: sb          $t4, 0x247($s0)
    MEM_B(0X247, ctx->r16) = ctx->r12;
    // 0x150EDD48: sb          $t9, 0x248($s0)
    MEM_B(0X248, ctx->r16) = ctx->r25;
    // 0x150EDD4C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150EDD50: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x150EDD54: beq         $t7, $zero, L_150EDD84
    if (ctx->r15 == 0) {
        // 0x150EDD58: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_150EDD84;
    }
    // 0x150EDD58: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150EDD5C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150EDD60: lb          $t6, -0x274($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X274);
    // 0x150EDD64: lbu         $t5, 0x3E78($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3E78);
    // 0x150EDD68: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150EDD6C: beq         $at, $zero, L_150EDD84
    if (ctx->r1 == 0) {
        // 0x150EDD70: nop
    
            goto L_150EDD84;
    }
    // 0x150EDD70: nop

    // 0x150EDD74: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x150EDD78: lbu         $t8, 0x120($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X120);
    // 0x150EDD7C: bnel        $t8, $zero, L_150EDD90
    if (ctx->r24 != 0) {
        // 0x150EDD80: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_150EDD90;
    }
    goto skip_18;
    // 0x150EDD80: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_18:
L_150EDD84:
    // 0x150EDD84: jal         0x15052590
    // 0x150EDD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15052590(rdram, ctx);
        goto after_5;
    // 0x150EDD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x150EDD8C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
L_150EDD90:
    // 0x150EDD90: beql        $t4, $zero, L_150EEC74
    if (ctx->r12 == 0) {
        // 0x150EDD94: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_150EEC74;
    }
    goto skip_19;
    // 0x150EDD94: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_19:
    // 0x150EDD98: lbu         $t9, 0x232($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X232);
    // 0x150EDD9C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150EDDA0: bne         $t9, $at, L_150EDDEC
    if (ctx->r25 != ctx->r1) {
        // 0x150EDDA4: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_150EDDEC;
    }
    // 0x150EDDA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EDDA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EDDAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150EDDB0: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150EDDB4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150EDDB8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150EDDBC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150EDDC0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150EDDC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150EDDC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EDDCC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150EDDD0: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    // 0x150EDDD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150EDDD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150EDDDC: jal         0x15052F9C
    // 0x150EDDE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_15052F9C(rdram, ctx);
        goto after_6;
    // 0x150EDDE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x150EDDE4: b           L_150EDF58
    // 0x150EDDE8: nop

        goto L_150EDF58;
    // 0x150EDDE8: nop

L_150EDDEC:
    // 0x150EDDEC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150EDDF0: lbu         $t3, -0x19EA($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X19EA);
    // 0x150EDDF4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150EDDF8: bne         $t3, $zero, L_150EDF58
    if (ctx->r11 != 0) {
        // 0x150EDDFC: nop
    
            goto L_150EDF58;
    }
    // 0x150EDDFC: nop

    // 0x150EDE00: lw          $t8, -0x3D98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3D98);
    // 0x150EDE04: andi        $t4, $t8, 0x1
    ctx->r12 = ctx->r24 & 0X1;
    // 0x150EDE08: beq         $t4, $zero, L_150EDF58
    if (ctx->r12 == 0) {
        // 0x150EDE0C: nop
    
            goto L_150EDF58;
    }
    // 0x150EDE0C: nop

    // 0x150EDE10: lbu         $t9, 0x124($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X124);
    // 0x150EDE14: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150EDE18: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x150EDE1C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x150EDE20: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x150EDE24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EDE28: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x150EDE2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EDE30: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x150EDE34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EDE38: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x150EDE3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EDE40: addu        $a0, $t7, $t5
    ctx->r4 = ADD32(ctx->r15, ctx->r13);
    // 0x150EDE44: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x150EDE48: bne         $t6, $zero, L_150EDF58
    if (ctx->r14 != 0) {
        // 0x150EDE4C: nop
    
            goto L_150EDF58;
    }
    // 0x150EDE4C: nop

    // 0x150EDE50: lw          $t3, 0x31C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X31C);
    // 0x150EDE54: lbu         $t8, 0x78($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X78);
    // 0x150EDE58: bne         $t8, $zero, L_150EDF58
    if (ctx->r24 != 0) {
        // 0x150EDE5C: nop
    
            goto L_150EDF58;
    }
    // 0x150EDE5C: nop

    // 0x150EDE60: lw          $t4, 0x25C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X25C);
    // 0x150EDE64: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150EDE68: andi        $t9, $t4, 0x400
    ctx->r25 = ctx->r12 & 0X400;
    // 0x150EDE6C: beq         $t9, $zero, L_150EDF58
    if (ctx->r25 == 0) {
        // 0x150EDE70: nop
    
            goto L_150EDF58;
    }
    // 0x150EDE70: nop

    // 0x150EDE74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EDE78: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150EDE7C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150EDE80: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x150EDE84: nop

    // 0x150EDE88: bc1fl       L_150EDECC
    if (!c1cs) {
        // 0x150EDE8C: lbu         $t5, 0x89($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X89);
            goto L_150EDECC;
    }
    goto skip_20;
    // 0x150EDE8C: lbu         $t5, 0x89($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X89);
    skip_20:
    // 0x150EDE90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EDE94: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150EDE98: lui         $a1, 0x4288
    ctx->r5 = S32(0X4288 << 16);
    // 0x150EDE9C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x150EDEA0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150EDEA4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x150EDEA8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x150EDEAC: bc1fl       L_150EDECC
    if (!c1cs) {
        // 0x150EDEB0: lbu         $t5, 0x89($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X89);
            goto L_150EDECC;
    }
    goto skip_21;
    // 0x150EDEB0: lbu         $t5, 0x89($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X89);
    skip_21:
    // 0x150EDEB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EDEB8: jal         0x1505327C
    // 0x150EDEBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1505327C(rdram, ctx);
        goto after_7;
    // 0x150EDEBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_7:
    // 0x150EDEC0: b           L_150EDF58
    // 0x150EDEC4: nop

        goto L_150EDF58;
    // 0x150EDEC4: nop

    // 0x150EDEC8: lbu         $t5, 0x89($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X89);
L_150EDECC:
    // 0x150EDECC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150EDED0: bne         $t5, $zero, L_150EDF58
    if (ctx->r13 != 0) {
        // 0x150EDED4: nop
    
            goto L_150EDF58;
    }
    // 0x150EDED4: nop

    // 0x150EDED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EDEDC: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150EDEE0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x150EDEE4: nop

    // 0x150EDEE8: bc1f        L_150EDF58
    if (!c1cs) {
        // 0x150EDEEC: nop
    
            goto L_150EDF58;
    }
    // 0x150EDEEC: nop

    // 0x150EDEF0: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x150EDEF4: bne         $t6, $zero, L_150EDF58
    if (ctx->r14 != 0) {
        // 0x150EDEF8: nop
    
            goto L_150EDF58;
    }
    // 0x150EDEF8: nop

    // 0x150EDEFC: jal         0x1505A6F8
    // 0x150EDF00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1505A6F8(rdram, ctx);
        goto after_8;
    // 0x150EDF00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x150EDF04: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150EDF08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EDF0C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EDF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EDF14: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150EDF18: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150EDF1C: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    // 0x150EDF20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150EDF24: bc1f        L_150EDF58
    if (!c1cs) {
        // 0x150EDF28: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_150EDF58;
    }
    // 0x150EDF28: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150EDF2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EDF30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150EDF34: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150EDF38: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150EDF3C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150EDF40: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150EDF44: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150EDF48: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150EDF4C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150EDF50: jal         0x15052F9C
    // 0x150EDF54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_15052F9C(rdram, ctx);
        goto after_9;
    // 0x150EDF54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_9:
L_150EDF58:
    // 0x150EDF58: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
    // 0x150EDF5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150EDF60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150EDF64: beq         $t7, $zero, L_150EDFF8
    if (ctx->r15 == 0) {
        // 0x150EDF68: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_150EDFF8;
    }
    // 0x150EDF68: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x150EDF6C: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
    // 0x150EDF70: lhu         $t6, 0x168($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X168);
    // 0x150EDF74: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150EDF78: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150EDF7C: subu        $v1, $t5, $t6
    ctx->r3 = SUB32(ctx->r13, ctx->r14);
    // 0x150EDF80: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x150EDF84: sra         $t8, $t3, 16
    ctx->r24 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150EDF88: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x150EDF8C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150EDF90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EDF94: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x150EDF98: mflo        $t4
    ctx->r12 = lo;
    // 0x150EDF9C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150EDFA0: sll         $t9, $t4, 16
    ctx->r25 = S32(ctx->r12 << 16);
    // 0x150EDFA4: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150EDFA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EDFAC: bc1fl       L_150EDFE0
    if (!c1cs) {
        // 0x150EDFB0: trunc.w.s   $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
            goto L_150EDFE0;
    }
    goto skip_22;
    // 0x150EDFB0: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    skip_22:
    // 0x150EDFB4: lwc1        $f8, 0x15B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15B4);
    // 0x150EDFB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EDFBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EDFC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EDFC4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150EDFC8: lwc1        $f8, 0x15B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15B8);
    // 0x150EDFCC: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150EDFD0: nop

    // 0x150EDFD4: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150EDFD8: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150EDFDC: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
L_150EDFE0:
    // 0x150EDFE0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x150EDFE4: nop

    // 0x150EDFE8: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x150EDFEC: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x150EDFF0: b           L_150EDFF8
    // 0x150EDFF4: nop

        goto L_150EDFF8;
    // 0x150EDFF4: nop

L_150EDFF8:
    // 0x150EDFF8: jal         0x150ED638
    // 0x150EDFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150ED638(rdram, ctx);
        goto after_10;
    // 0x150EDFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x150EE000: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EE004: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EE008: nop

    // 0x150EE00C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150EE010: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x150EE014: beq         $v0, $at, L_150EE020
    if (ctx->r2 == ctx->r1) {
        // 0x150EE018: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_150EE020;
    }
    // 0x150EE018: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150EE01C: bne         $v0, $at, L_150EE10C
    if (ctx->r2 != ctx->r1) {
        // 0x150EE020: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_150EE10C;
    }
L_150EE020:
    // 0x150EE020: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150EE024: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE028: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150EE02C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x150EE030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE034: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x150EE038: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x150EE03C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x150EE040: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150EE044: bc1fl       L_150EE070
    if (!c1cs) {
        // 0x150EE048: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150EE070;
    }
    goto skip_23;
    // 0x150EE048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_23:
    // 0x150EE04C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150EE050: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150EE054: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x150EE058: nop

    // 0x150EE05C: bc1fl       L_150EE070
    if (!c1cs) {
        // 0x150EE060: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150EE070;
    }
    goto skip_24;
    // 0x150EE060: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_24:
    // 0x150EE064: b           L_150EE0A8
    // 0x150EE068: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150EE0A8;
    // 0x150EE068: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150EE06C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_150EE070:
    // 0x150EE070: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150EE074: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x150EE078: nop

    // 0x150EE07C: bc1f        L_150EE0A8
    if (!c1cs) {
        // 0x150EE080: nop
    
            goto L_150EE0A8;
    }
    // 0x150EE080: nop

    // 0x150EE084: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150EE088: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150EE08C: nop

    // 0x150EE090: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x150EE094: nop

    // 0x150EE098: bc1f        L_150EE0A8
    if (!c1cs) {
        // 0x150EE09C: nop
    
            goto L_150EE0A8;
    }
    // 0x150EE09C: nop

    // 0x150EE0A0: b           L_150EE0A8
    // 0x150EE0A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150EE0A8;
    // 0x150EE0A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150EE0A8:
    // 0x150EE0A8: beq         $v1, $zero, L_150EE0D8
    if (ctx->r3 == 0) {
        // 0x150EE0AC: nop
    
            goto L_150EE0D8;
    }
    // 0x150EE0AC: nop

    // 0x150EE0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE0B4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x150EE0B8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x150EE0BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150EE0C0: jal         0x1514D3B0
    // 0x150EE0C4: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    func_1514D3B0(rdram, ctx);
        goto after_11;
    // 0x150EE0C4: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    after_11:
    // 0x150EE0C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EE0CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EE0D0: b           L_150EE0EC
    // 0x150EE0D4: lw          $v1, 0x130($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X130);
        goto L_150EE0EC;
    // 0x150EE0D4: lw          $v1, 0x130($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X130);
L_150EE0D8:
    // 0x150EE0D8: jal         0x1514D3B0
    // 0x150EE0DC: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    func_1514D3B0(rdram, ctx);
        goto after_12;
    // 0x150EE0DC: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    after_12:
    // 0x150EE0E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EE0E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EE0E8: lw          $v1, 0x130($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X130);
L_150EE0EC:
    // 0x150EE0EC: beq         $v1, $zero, L_150EE0FC
    if (ctx->r3 == 0) {
        // 0x150EE0F0: addiu       $t3, $zero, 0x13
        ctx->r11 = ADD32(0, 0X13);
            goto L_150EE0FC;
    }
    // 0x150EE0F0: addiu       $t3, $zero, 0x13
    ctx->r11 = ADD32(0, 0X13);
    // 0x150EE0F4: b           L_150EE100
    // 0x150EE0F8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_150EE100;
    // 0x150EE0F8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_150EE0FC:
    // 0x150EE0FC: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_150EE100:
    // 0x150EE100: addiu       $t6, $v1, 0xA
    ctx->r14 = ADD32(ctx->r3, 0XA);
    // 0x150EE104: sb          $t6, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r14;
    // 0x150EE108: sb          $t3, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r11;
L_150EE10C:
    // 0x150EE10C: lw          $t8, 0x174($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X174);
    // 0x150EE110: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150EE114: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x150EE118: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x150EE11C: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x150EE120: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150EE124: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x150EE128: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150EE12C: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x150EE130: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150EE134: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x150EE138: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150EE13C: addu        $t7, $t4, $t9
    ctx->r15 = ADD32(ctx->r12, ctx->r25);
    // 0x150EE140: lw          $t5, 0x31C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X31C);
    // 0x150EE144: lbu         $t7, 0x16B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X16B);
    // 0x150EE148: lbu         $t6, 0x84($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X84);
    // 0x150EE14C: beq         $t6, $zero, L_150EE3C0
    if (ctx->r14 == 0) {
        // 0x150EE150: nop
    
            goto L_150EE3C0;
    }
    // 0x150EE150: nop

    // 0x150EE154: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE158: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE15C: lb          $v1, 0x129($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X129);
    // 0x150EE160: bltz        $v1, L_150EE39C
    if (SIGNED(ctx->r3) < 0) {
        // 0x150EE164: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_150EE39C;
    }
    // 0x150EE164: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x150EE168: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x150EE16C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150EE170: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x150EE174: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150EE178: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x150EE17C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150EE180: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x150EE184: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150EE188: addu        $v0, $t3, $t9
    ctx->r2 = ADD32(ctx->r11, ctx->r25);
    // 0x150EE18C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150EE190: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150EE194: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150EE198: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150EE19C: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x150EE1A0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150EE1A4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EE1A8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150EE1AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EE1B0: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x150EE1B4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150EE1B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE1BC: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150EE1C0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150EE1C4: div.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150EE1C8: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150EE1CC: lwc1        $f8, 0x15BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15BC);
    // 0x150EE1D0: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x150EE1D4: lwc1        $f10, 0x40($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X40);
    // 0x150EE1D8: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x150EE1DC: mul.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150EE1E0: jal         0x15047D60
    // 0x150EE1E4: swc1        $f12, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_13;
    // 0x150EE1E4: swc1        $f12, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x150EE1E8: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150EE1EC: lwc1        $f12, 0x11C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150EE1F0: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EE1F4: jal         0x15047C00
    // 0x150EE1F8: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    cosf_recomp(rdram, ctx);
        goto after_14;
    // 0x150EE1F8: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x150EE1FC: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150EE200: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    // 0x150EE204: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150EE208: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150EE20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE210: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
    // 0x150EE214: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x150EE218: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150EE21C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150EE220: add.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x150EE224: swc1        $f4, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f4.u32l;
    // 0x150EE228: jal         0x150ED234
    // 0x150EE22C: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    func_150ED234(rdram, ctx);
        goto after_15;
    // 0x150EE22C: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    after_15:
    // 0x150EE230: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE234: lwc1        $f6, 0x15C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X15C0);
    // 0x150EE238: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EE23C: jal         0x15047D60
    // 0x150EE240: swc1        $f12, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_16;
    // 0x150EE240: swc1        $f12, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f12.u32l;
    after_16:
    // 0x150EE244: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x150EE248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE24C: lwc1        $f10, 0x15C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15C4);
    // 0x150EE250: lwc1        $f4, 0xC4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150EE254: mul.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150EE258: jal         0x15047C00
    // 0x150EE25C: nop

    cosf_recomp(rdram, ctx);
        goto after_17;
    // 0x150EE25C: nop

    after_17:
    // 0x150EE260: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150EE264: lwc1        $f12, 0x10C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150EE268: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150EE26C: jal         0x15047C00
    // 0x150EE270: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    cosf_recomp(rdram, ctx);
        goto after_18;
    // 0x150EE270: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x150EE274: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x150EE278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE27C: lwc1        $f10, 0x15C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15C8);
    // 0x150EE280: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150EE284: mul.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150EE288: jal         0x15047C00
    // 0x150EE28C: nop

    cosf_recomp(rdram, ctx);
        goto after_19;
    // 0x150EE28C: nop

    after_19:
    // 0x150EE290: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150EE294: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150EE298: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150EE29C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150EE2A0: mul.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150EE2A4: nop

    // 0x150EE2A8: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EE2AC: nop

    // 0x150EE2B0: mul.s       $f14, $f4, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150EE2B4: jal         0x150484A0
    // 0x150EE2B8: nop

    func_150484A0(rdram, ctx);
        goto after_20;
    // 0x150EE2B8: nop

    after_20:
    // 0x150EE2BC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE2C0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x150EE2C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE2C8: lb          $t8, 0x12A($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X12A);
    // 0x150EE2CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE2D0: lwc1        $f4, 0x15CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X15CC);
    // 0x150EE2D4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x150EE2D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150EE2DC: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150EE2E0: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150EE2E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE2E8: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150EE2EC: swc1        $f6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f6.u32l;
    // 0x150EE2F0: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150EE2F4: lwc1        $f14, 0x1BC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EE2F8: jal         0x150ED1D0
    // 0x150EE2FC: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    func_150ED1D0(rdram, ctx);
        goto after_21;
    // 0x150EE2FC: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    after_21:
    // 0x150EE300: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x150EE304: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE308: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE30C: lw          $v1, 0x124($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X124);
    // 0x150EE310: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150EE314: lwc1        $f4, 0x1BC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EE318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE31C: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150EE320: swc1        $f6, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f6.u32l;
    // 0x150EE324: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE328: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150EE32C: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150EE330: lwc1        $f8, 0x1B8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1B8);
    // 0x150EE334: lw          $a3, 0x18($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X18);
    // 0x150EE338: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x150EE33C: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150EE340: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150EE344: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150EE348: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150EE34C: jal         0x150ED298
    // 0x150EE350: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150ED298(rdram, ctx);
        goto after_22;
    // 0x150EE350: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_22:
    // 0x150EE354: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE358: lwc1        $f10, 0x15D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15D0);
    // 0x150EE35C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE360: lw          $v1, 0x124($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X124);
    // 0x150EE364: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150EE368: lwc1        $f4, 0x1B8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EE36C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150EE370: swc1        $f8, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f8.u32l;
    // 0x150EE374: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150EE378: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150EE37C: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150EE380: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150EE384: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x150EE388: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150EE38C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EE390: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x150EE394: b           L_150EEBA4
    // 0x150EE398: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_150EEBA4;
    // 0x150EE398: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150EE39C:
    // 0x150EE39C: lwc1        $f0, 0x15D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X15D4);
    // 0x150EE3A0: lwc1        $f6, 0x1BC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EE3A4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150EE3A8: swc1        $f8, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f8.u32l;
    // 0x150EE3AC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE3B0: lwc1        $f10, 0x1B8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EE3B4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150EE3B8: b           L_150EEBA0
    // 0x150EE3BC: swc1        $f4, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f4.u32l;
        goto L_150EEBA0;
    // 0x150EE3BC: swc1        $f4, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f4.u32l;
L_150EE3C0:
    // 0x150EE3C0: beq         $t7, $zero, L_150EEBA0
    if (ctx->r15 == 0) {
        // 0x150EE3C4: lw          $t5, 0x16C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X16C);
            goto L_150EEBA0;
    }
    // 0x150EE3C4: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
    // 0x150EE3C8: beq         $t5, $zero, L_150EEBA0
    if (ctx->r13 == 0) {
        // 0x150EE3CC: lui         $a3, 0x800C
        ctx->r7 = S32(0X800C << 16);
            goto L_150EEBA0;
    }
    // 0x150EE3CC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x150EE3D0: addiu       $a3, $a3, -0x19EA
    ctx->r7 = ADD32(ctx->r7, -0X19EA);
    // 0x150EE3D4: lbu         $t9, 0x16A($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X16A);
    // 0x150EE3D8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150EE3DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EE3E0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x150EE3E4: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x150EE3E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150EE3EC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x150EE3F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EE3F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150EE3F8: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EE3FC: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x150EE400: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x150EE404: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x150EE408: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150EE40C: lb          $t3, -0x274($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X274);
    // 0x150EE410: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150EE414: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x150EE418: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150EE41C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150EE420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150EE424: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x150EE428: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150EE42C: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x150EE430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150EE434: addu        $a2, $t8, $t4
    ctx->r6 = ADD32(ctx->r24, ctx->r12);
    // 0x150EE438: beq         $t7, $zero, L_150EE470
    if (ctx->r15 == 0) {
        // 0x150EE43C: sw          $t3, 0xE0($sp)
        MEM_W(0XE0, ctx->r29) = ctx->r11;
            goto L_150EE470;
    }
    // 0x150EE43C: sw          $t3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r11;
    // 0x150EE440: lw          $t5, 0x174($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X174);
    // 0x150EE444: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150EE448: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x150EE44C: beq         $at, $zero, L_150EE470
    if (ctx->r1 == 0) {
        // 0x150EE450: addu        $v0, $v0, $t5
        ctx->r2 = ADD32(ctx->r2, ctx->r13);
            goto L_150EE470;
    }
    // 0x150EE450: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x150EE454: lb          $v0, 0xBCE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBCE);
    // 0x150EE458: beql        $v0, $zero, L_150EE474
    if (ctx->r2 == 0) {
        // 0x150EE45C: lw          $t9, 0x174($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X174);
            goto L_150EE474;
    }
    goto skip_25;
    // 0x150EE45C: lw          $t9, 0x174($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X174);
    skip_25:
    // 0x150EE460: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x150EE464: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x150EE468: b           L_150EE4CC
    // 0x150EE46C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
        goto L_150EE4CC;
    // 0x150EE46C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
L_150EE470:
    // 0x150EE470: lw          $t9, 0x174($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X174);
L_150EE474:
    // 0x150EE474: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150EE478: addiu       $t4, $t4, -0x18B8
    ctx->r12 = ADD32(ctx->r12, -0X18B8);
    // 0x150EE47C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x150EE480: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x150EE484: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x150EE488: addu        $a0, $t8, $t4
    ctx->r4 = ADD32(ctx->r24, ctx->r12);
    // 0x150EE48C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x150EE490: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x150EE494: beql        $t7, $zero, L_150EE4B4
    if (ctx->r15 == 0) {
        // 0x150EE498: andi        $t5, $v1, 0x2
        ctx->r13 = ctx->r3 & 0X2;
            goto L_150EE4B4;
    }
    goto skip_26;
    // 0x150EE498: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
    skip_26:
    // 0x150EE49C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE4A0: lwc1        $f10, 0x1BC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EE4A4: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x150EE4A8: swc1        $f4, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f4.u32l;
    // 0x150EE4AC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x150EE4B0: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
L_150EE4B4:
    // 0x150EE4B4: beql        $t5, $zero, L_150EE4D0
    if (ctx->r13 == 0) {
        // 0x150EE4B8: lw          $t6, 0x31C($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X31C);
            goto L_150EE4D0;
    }
    goto skip_27;
    // 0x150EE4B8: lw          $t6, 0x31C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X31C);
    skip_27:
    // 0x150EE4BC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE4C0: lwc1        $f6, 0x1BC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EE4C4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150EE4C8: swc1        $f8, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f8.u32l;
L_150EE4CC:
    // 0x150EE4CC: lw          $t6, 0x31C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X31C);
L_150EE4D0:
    // 0x150EE4D0: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x150EE4D4: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150EE4D8: lbu         $t3, 0x197($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X197);
    // 0x150EE4DC: beq         $t3, $zero, L_150EE4F4
    if (ctx->r11 == 0) {
        // 0x150EE4E0: nop
    
            goto L_150EE4F4;
    }
    // 0x150EE4E0: nop

    // 0x150EE4E4: lw          $a1, 0x174($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X174);
    // 0x150EE4E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x150EE4EC: sll         $t9, $a1, 24
    ctx->r25 = S32(ctx->r5 << 24);
    // 0x150EE4F0: sra         $a1, $t9, 24
    ctx->r5 = S32(SIGNED(ctx->r25) >> 24);
L_150EE4F4:
    // 0x150EE4F4: bne         $v0, $zero, L_150EE500
    if (ctx->r2 != 0) {
        // 0x150EE4F8: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_150EE500;
    }
    // 0x150EE4F8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x150EE4FC: sw          $t4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r12;
L_150EE500:
    // 0x150EE500: bne         $a1, $zero, L_150EE7B0
    if (ctx->r5 != 0) {
        // 0x150EE504: addu        $t6, $t6, $a1
        ctx->r14 = ADD32(ctx->r14, ctx->r5);
            goto L_150EE7B0;
    }
    // 0x150EE504: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x150EE508: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
    // 0x150EE50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EE510: blezl       $t7, L_150EE674
    if (SIGNED(ctx->r15) <= 0) {
        // 0x150EE514: lw          $t6, 0xE4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XE4);
            goto L_150EE674;
    }
    goto skip_28;
    // 0x150EE514: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    skip_28:
    // 0x150EE518: lw          $t5, 0x174($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X174);
L_150EE51C:
    // 0x150EE51C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150EE520: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x150EE524: beq         $v0, $t5, L_150EE658
    if (ctx->r2 == ctx->r13) {
        // 0x150EE528: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_150EE658;
    }
    // 0x150EE528: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE52C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x150EE530: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE534: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x150EE538: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x150EE53C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE540: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x150EE544: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150EE548: addiu       $t3, $t3, -0x3D30
    ctx->r11 = ADD32(ctx->r11, -0X3D30);
    // 0x150EE54C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE550: bne         $t9, $zero, L_150EE564
    if (ctx->r25 != 0) {
        // 0x150EE554: addu        $a1, $t6, $t3
        ctx->r5 = ADD32(ctx->r14, ctx->r11);
            goto L_150EE564;
    }
    // 0x150EE554: addu        $a1, $t6, $t3
    ctx->r5 = ADD32(ctx->r14, ctx->r11);
    // 0x150EE558: lw          $t8, 0xF8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XF8);
    // 0x150EE55C: andi        $t4, $t8, 0x40
    ctx->r12 = ctx->r24 & 0X40;
    // 0x150EE560: beq         $t4, $zero, L_150EE660
    if (ctx->r12 == 0) {
        // 0x150EE564: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150EE660;
    }
L_150EE564:
    // 0x150EE564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE568: sw          $v0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r2;
    // 0x150EE56C: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
    // 0x150EE570: jal         0x150ED234
    // 0x150EE574: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    func_150ED234(rdram, ctx);
        goto after_23;
    // 0x150EE574: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x150EE578: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE57C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150EE580: jal         0x150ED1D0
    // 0x150EE584: lwc1        $f14, 0x1BC($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X1BC);
    func_150ED1D0(rdram, ctx);
        goto after_24;
    // 0x150EE584: lwc1        $f14, 0x1BC($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X1BC);
    after_24:
    // 0x150EE588: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150EE58C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150EE590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EE594: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x150EE598: lw          $v0, 0xE8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE8);
    // 0x150EE59C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x150EE5A0: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150EE5A4: bc1f        L_150EE5B0
    if (!c1cs) {
        // 0x150EE5A8: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_150EE5B0;
    }
    // 0x150EE5A8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x150EE5AC: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_150EE5B0:
    // 0x150EE5B0: sub.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x150EE5B4: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x150EE5B8: nop

    // 0x150EE5BC: bc1fl       L_150EE5CC
    if (!c1cs) {
        // 0x150EE5C0: c.lt.s      $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
            goto L_150EE5CC;
    }
    goto skip_29;
    // 0x150EE5C0: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    skip_29:
    // 0x150EE5C4: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    // 0x150EE5C8: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
L_150EE5CC:
    // 0x150EE5CC: nop

    // 0x150EE5D0: bc1f        L_150EE658
    if (!c1cs) {
        // 0x150EE5D4: nop
    
            goto L_150EE658;
    }
    // 0x150EE5D4: nop

    // 0x150EE5D8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150EE5DC: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x150EE5E0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150EE5E4: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150EE5E8: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150EE5EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE5F0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EE5F4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150EE5F8: lwc1        $f8, 0x15D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15D8);
    // 0x150EE5FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EE600: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150EE604: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150EE608: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150EE60C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150EE610: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150EE614: bc1f        L_150EE658
    if (!c1cs) {
        // 0x150EE618: nop
    
            goto L_150EE658;
    }
    // 0x150EE618: nop

    // 0x150EE61C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EE620: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EE624: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150EE628: nop

    // 0x150EE62C: bc1fl       L_150EE640
    if (!c1cs) {
        // 0x150EE630: div.s       $f14, $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
            goto L_150EE640;
    }
    goto skip_30;
    // 0x150EE630: div.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    skip_30:
    // 0x150EE634: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150EE638: nop

    // 0x150EE63C: div.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
L_150EE640:
    // 0x150EE640: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x150EE644: nop

    // 0x150EE648: bc1f        L_150EE658
    if (!c1cs) {
        // 0x150EE64C: nop
    
            goto L_150EE658;
    }
    // 0x150EE64C: nop

    // 0x150EE650: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x150EE654: sw          $v0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r2;
L_150EE658:
    // 0x150EE658: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x150EE65C: addiu       $a3, $a3, -0x19EA
    ctx->r7 = ADD32(ctx->r7, -0X19EA);
L_150EE660:
    // 0x150EE660: lw          $t5, 0xE0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE0);
    // 0x150EE664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150EE668: bnel        $v0, $t5, L_150EE51C
    if (ctx->r2 != ctx->r13) {
        // 0x150EE66C: lw          $t5, 0x174($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X174);
            goto L_150EE51C;
    }
    goto skip_31;
    // 0x150EE66C: lw          $t5, 0x174($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X174);
    skip_31:
    // 0x150EE670: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
L_150EE674:
    // 0x150EE674: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150EE678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EE67C: beq         $t6, $at, L_150EE790
    if (ctx->r14 == ctx->r1) {
        // 0x150EE680: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_150EE790;
    }
    // 0x150EE680: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x150EE684: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x150EE688: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x150EE68C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150EE690: beq         $t3, $zero, L_150EE6DC
    if (ctx->r11 == 0) {
        // 0x150EE694: sll         $t7, $t4, 2
        ctx->r15 = S32(ctx->r12 << 2);
            goto L_150EE6DC;
    }
    // 0x150EE694: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x150EE698: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150EE69C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150EE6A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150EE6A4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x150EE6A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150EE6AC: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150EE6B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150EE6B4: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150EE6B8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150EE6BC: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150EE6C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150EE6C4: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x150EE6C8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150EE6CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EE6D0: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150EE6D4: b           L_150EE714
    // 0x150EE6D8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_150EE714;
    // 0x150EE6D8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
L_150EE6DC:
    // 0x150EE6DC: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x150EE6E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EE6E4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x150EE6E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EE6EC: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x150EE6F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EE6F4: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x150EE6F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EE6FC: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x150EE700: addu        $v0, $t7, $t5
    ctx->r2 = ADD32(ctx->r15, ctx->r13);
    // 0x150EE704: lh          $t3, 0x1AA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X1AA);
    // 0x150EE708: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x150EE70C: nop

    // 0x150EE710: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
L_150EE714:
    // 0x150EE714: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150EE718: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150EE71C: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    // 0x150EE720: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x150EE724: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150EE728: jal         0x150ED298
    // 0x150EE72C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150ED298(rdram, ctx);
        goto after_25;
    // 0x150EE72C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_25:
    // 0x150EE730: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE734: lwc1        $f6, 0x15DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X15DC);
    // 0x150EE738: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150EE73C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE740: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EE744: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EE748: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EE74C: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150EE750: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x150EE754: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x150EE758: bc1fl       L_150EE768
    if (!c1cs) {
        // 0x150EE75C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_150EE768;
    }
    goto skip_32;
    // 0x150EE75C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_32:
    // 0x150EE760: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x150EE764: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_150EE768:
    // 0x150EE768: nop

    // 0x150EE76C: bc1fl       L_150EE77C
    if (!c1cs) {
        // 0x150EE770: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_150EE77C;
    }
    goto skip_33;
    // 0x150EE770: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_33:
    // 0x150EE774: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150EE778: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150EE77C:
    // 0x150EE77C: lwc1        $f4, 0x1B8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EE780: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x150EE784: swc1        $f6, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f6.u32l;
    // 0x150EE788: b           L_150EEBA4
    // 0x150EE78C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_150EEBA4;
    // 0x150EE78C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150EE790:
    // 0x150EE790: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE794: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE798: lwc1        $f0, 0x15E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X15E0);
    // 0x150EE79C: lwc1        $f8, 0x1B8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EE7A0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150EE7A4: swc1        $f10, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f10.u32l;
    // 0x150EE7A8: b           L_150EEBA4
    // 0x150EE7AC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_150EEBA4;
    // 0x150EE7AC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150EE7B0:
    // 0x150EE7B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE7B4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x150EE7B8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x150EE7BC: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x150EE7C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150EE7C4: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x150EE7C8: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x150EE7CC: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x150EE7D0: lw          $v0, -0x5CC($t1)
    ctx->r2 = MEM_W(ctx->r9, -0X5CC);
    // 0x150EE7D4: addiu       $t1, $t1, -0x9A0
    ctx->r9 = ADD32(ctx->r9, -0X9A0);
    // 0x150EE7D8: lbu         $t8, 0x197($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X197);
    // 0x150EE7DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150EE7E0: beql        $t8, $zero, L_150EE8D0
    if (ctx->r24 == 0) {
        // 0x150EE7E4: lwc1        $f4, 0x2BC($t1)
        ctx->f4.u32l = MEM_W(ctx->r9, 0X2BC);
            goto L_150EE8D0;
    }
    goto skip_34;
    // 0x150EE7E4: lwc1        $f4, 0x2BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2BC);
    skip_34:
    // 0x150EE7E8: lwc1        $f0, 0x170($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X170);
    // 0x150EE7EC: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150EE7F0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x150EE7F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x150EE7F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EE7FC: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x150EE800: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150EE804: lwc1        $f2, 0x16C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X16C);
    // 0x150EE808: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150EE80C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150EE810: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150EE814: bc1f        L_150EE838
    if (!c1cs) {
        // 0x150EE818: sub.s       $f2, $f10, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f2.fl;
            goto L_150EE838;
    }
    // 0x150EE818: sub.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x150EE81C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EE820: nop

    // 0x150EE824: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
L_150EE828:
    // 0x150EE828: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150EE82C: nop

    // 0x150EE830: bc1tl       L_150EE828
    if (c1cs) {
        // 0x150EE834: sub.s       $f0, $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
            goto L_150EE828;
    }
    goto skip_35;
    // 0x150EE834: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    skip_35:
L_150EE838:
    // 0x150EE838: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x150EE83C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150EE840: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150EE844: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EE848: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x150EE84C: nop

    // 0x150EE850: bc1fl       L_150EE870
    if (!c1cs) {
        // 0x150EE854: c.lt.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
            goto L_150EE870;
    }
    goto skip_36;
    // 0x150EE854: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    skip_36:
    // 0x150EE858: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
L_150EE85C:
    // 0x150EE85C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x150EE860: nop

    // 0x150EE864: bc1tl       L_150EE85C
    if (c1cs) {
        // 0x150EE868: add.s       $f0, $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_150EE85C;
    }
    goto skip_37;
    // 0x150EE868: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
    skip_37:
    // 0x150EE86C: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
L_150EE870:
    // 0x150EE870: nop

    // 0x150EE874: bc1fl       L_150EE894
    if (!c1cs) {
        // 0x150EE878: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_150EE894;
    }
    goto skip_38;
    // 0x150EE878: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_38:
    // 0x150EE87C: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
L_150EE880:
    // 0x150EE880: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x150EE884: nop

    // 0x150EE888: bc1tl       L_150EE880
    if (c1cs) {
        // 0x150EE88C: sub.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
            goto L_150EE880;
    }
    goto skip_39;
    // 0x150EE88C: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
    skip_39:
    // 0x150EE890: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_150EE894:
    // 0x150EE894: nop

    // 0x150EE898: bc1fl       L_150EE8B8
    if (!c1cs) {
        // 0x150EE89C: lw          $t4, 0x31C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X31C);
            goto L_150EE8B8;
    }
    goto skip_40;
    // 0x150EE89C: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    skip_40:
    // 0x150EE8A0: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
L_150EE8A4:
    // 0x150EE8A4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150EE8A8: nop

    // 0x150EE8AC: bc1tl       L_150EE8A4
    if (c1cs) {
        // 0x150EE8B0: add.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_150EE8A4;
    }
    goto skip_41;
    // 0x150EE8B0: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    skip_41:
    // 0x150EE8B4: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
L_150EE8B8:
    // 0x150EE8B8: swc1        $f0, 0x1B8($t4)
    MEM_W(0X1B8, ctx->r12) = ctx->f0.u32l;
    // 0x150EE8BC: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE8C0: swc1        $f2, 0x1BC($t7)
    MEM_W(0X1BC, ctx->r15) = ctx->f2.u32l;
    // 0x150EE8C4: b           L_150EEBA4
    // 0x150EE8C8: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_150EEBA4;
    // 0x150EE8C8: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EE8CC: lwc1        $f4, 0x2BC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2BC);
L_150EE8D0:
    // 0x150EE8D0: lwc1        $f6, 0x2F8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X2F8);
    // 0x150EE8D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EE8D8: addiu       $t5, $sp, 0xC8
    ctx->r13 = ADD32(ctx->r29, 0XC8);
    // 0x150EE8DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150EE8E0: addiu       $t3, $sp, 0xC4
    ctx->r11 = ADD32(ctx->r29, 0XC4);
    // 0x150EE8E4: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x150EE8E8: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
    // 0x150EE8EC: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x150EE8F0: lwc1        $f4, 0x2FC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2FC);
    // 0x150EE8F4: lwc1        $f10, 0x2C0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C0);
    // 0x150EE8F8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150EE8FC: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x150EE900: lwc1        $f10, 0x300($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X300);
    // 0x150EE904: lwc1        $f8, 0x2C4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C4);
    // 0x150EE908: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150EE90C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EE910: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x150EE914: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150EE918: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x150EE91C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x150EE920: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150EE924: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150EE928: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150EE92C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x150EE930: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150EE934: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EE938: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150EE93C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EE940: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150EE944: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150EE948: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150EE94C: nop

    // 0x150EE950: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150EE954: nop

    // 0x150EE958: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150EE95C: lwc1        $f4, 0x15E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X15E4);
    // 0x150EE960: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x150EE964: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150EE968: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x150EE96C: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150EE970: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150EE974: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x150EE978: lw          $a2, 0x300($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X300);
    // 0x150EE97C: lwc1        $f14, 0x2FC($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X2FC);
    // 0x150EE980: lwc1        $f12, 0x2F8($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X2F8);
    // 0x150EE984: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x150EE988: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x150EE98C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150EE990: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150EE994: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150EE998: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150EE99C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150EE9A0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150EE9A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150EE9A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150EE9AC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150EE9B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x150EE9B4: jal         0x150AC9C0
    // 0x150EE9B8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_26;
    // 0x150EE9B8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_26:
    // 0x150EE9BC: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x150EE9C0: beq         $v0, $zero, L_150EE9CC
    if (ctx->r2 == 0) {
        // 0x150EE9C4: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_150EE9CC;
    }
    // 0x150EE9C4: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x150EE9C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_150EE9CC:
    // 0x150EE9CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150EE9D0: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x150EE9D4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150EE9D8: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x150EE9DC: blez        $t8, L_150EEAE0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150EE9E0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_150EEAE0;
    }
    // 0x150EE9E0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150EE9E4: lbu         $t4, 0x128($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X128);
L_150EE9E8:
    // 0x150EE9E8: lbu         $t7, 0x128($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X128);
    // 0x150EE9EC: beq         $t4, $t7, L_150EEAC4
    if (ctx->r12 == ctx->r15) {
        // 0x150EE9F0: nop
    
            goto L_150EEAC4;
    }
    // 0x150EE9F0: nop

    // 0x150EE9F4: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150EE9F8: lwc1        $f8, 0x2F8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2F8);
    // 0x150EE9FC: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150EEA00: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150EEA04: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150EEA08: addiu       $a0, $t1, 0x2F8
    ctx->r4 = ADD32(ctx->r9, 0X2F8);
    // 0x150EEA0C: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x150EEA10: addiu       $a2, $v1, 0x14
    ctx->r6 = ADD32(ctx->r3, 0X14);
    // 0x150EEA14: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x150EEA18: lwc1        $f6, 0x300($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X300);
    // 0x150EEA1C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150EEA20: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x150EEA24: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150EEA28: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150EEA2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EEA30: addiu       $t5, $sp, 0xA0
    ctx->r13 = ADD32(ctx->r29, 0XA0);
    // 0x150EEA34: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x150EEA38: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150EEA3C: addiu       $t3, $sp, 0x94
    ctx->r11 = ADD32(ctx->r29, 0X94);
    // 0x150EEA40: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x150EEA44: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x150EEA48: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x150EEA4C: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150EEA50: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150EEA54: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150EEA58: add.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150EEA5C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x150EEA60: nop

    // 0x150EEA64: bc1f        L_150EEAC4
    if (!c1cs) {
        // 0x150EEA68: nop
    
            goto L_150EEAC4;
    }
    // 0x150EEA68: nop

    // 0x150EEA6C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150EEA70: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150EEA74: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150EEA78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150EEA7C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x150EEA80: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x150EEA84: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x150EEA88: jal         0x151452C4
    // 0x150EEA8C: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    func_151452C4(rdram, ctx);
        goto after_27;
    // 0x150EEA8C: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    after_27:
    // 0x150EEA90: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x150EEA94: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x150EEA98: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x150EEA9C: beq         $v0, $zero, L_150EEAC4
    if (ctx->r2 == 0) {
        // 0x150EEAA0: lw          $t2, 0xCC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XCC);
            goto L_150EEAC4;
    }
    // 0x150EEAA0: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x150EEAA4: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150EEAA8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150EEAAC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150EEAB0: nop

    // 0x150EEAB4: bc1f        L_150EEAC4
    if (!c1cs) {
        // 0x150EEAB8: nop
    
            goto L_150EEAC4;
    }
    // 0x150EEAB8: nop

    // 0x150EEABC: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x150EEAC0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_150EEAC4:
    // 0x150EEAC4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150EEAC8: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x150EEACC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150EEAD0: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x150EEAD4: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150EEAD8: bnel        $at, $zero, L_150EE9E8
    if (ctx->r1 != 0) {
        // 0x150EEADC: lbu         $t4, 0x128($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X128);
            goto L_150EE9E8;
    }
    goto skip_42;
    // 0x150EEADC: lbu         $t4, 0x128($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X128);
    skip_42:
L_150EEAE0:
    // 0x150EEAE0: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x150EEAE4: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x150EEAE8: lbu         $t4, 0x128($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X128);
    // 0x150EEAEC: and         $t7, $t4, $at
    ctx->r15 = ctx->r12 & ctx->r1;
    // 0x150EEAF0: beq         $t2, $zero, L_150EEB88
    if (ctx->r10 == 0) {
        // 0x150EEAF4: sb          $t7, 0x128($v0)
        MEM_B(0X128, ctx->r2) = ctx->r15;
            goto L_150EEB88;
    }
    // 0x150EEAF4: sb          $t7, 0x128($v0)
    MEM_B(0X128, ctx->r2) = ctx->r15;
    // 0x150EEAF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150EEAFC: bne         $t2, $at, L_150EEB08
    if (ctx->r10 != ctx->r1) {
        // 0x150EEB00: ori         $t3, $t7, 0x40
        ctx->r11 = ctx->r15 | 0X40;
            goto L_150EEB08;
    }
    // 0x150EEB00: ori         $t3, $t7, 0x40
    ctx->r11 = ctx->r15 | 0X40;
    // 0x150EEB04: sb          $t3, 0x128($v0)
    MEM_B(0X128, ctx->r2) = ctx->r11;
L_150EEB08:
    // 0x150EEB08: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150EEB0C: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150EEB10: lwc1        $f8, 0x2F8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2F8);
    // 0x150EEB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EEB18: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x150EEB1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x150EEB20: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150EEB24: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150EEB28: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150EEB2C: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x150EEB30: lwc1        $f4, 0x2FC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2FC);
    // 0x150EEB34: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150EEB38: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150EEB3C: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150EEB40: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150EEB44: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x150EEB48: lwc1        $f6, 0x300($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X300);
    // 0x150EEB4C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150EEB50: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150EEB54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150EEB58: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x150EEB5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150EEB60: jal         0x150ED298
    // 0x150EEB64: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150ED298(rdram, ctx);
        goto after_28;
    // 0x150EEB64: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x150EEB68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EEB6C: lwc1        $f8, 0x15E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15E8);
    // 0x150EEB70: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEB74: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150EEB78: lwc1        $f10, 0x1B8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EEB7C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150EEB80: b           L_150EEBA0
    // 0x150EEB84: swc1        $f6, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f6.u32l;
        goto L_150EEBA0;
    // 0x150EEB84: swc1        $f6, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f6.u32l;
L_150EEB88:
    // 0x150EEB88: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEB8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EEB90: lwc1        $f0, 0x15EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X15EC);
    // 0x150EEB94: lwc1        $f8, 0x1B8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EEB98: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150EEB9C: swc1        $f10, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f10.u32l;
L_150EEBA0:
    // 0x150EEBA0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150EEBA4:
    // 0x150EEBA4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x150EEBA8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150EEBAC: lwc1        $f0, 0x1B8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EEBB0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150EEBB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EEBB8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150EEBBC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150EEBC0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150EEBC4: bc1fl       L_150EEBDC
    if (!c1cs) {
        // 0x150EEBC8: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150EEBDC;
    }
    goto skip_43;
    // 0x150EEBC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_43:
    // 0x150EEBCC: swc1        $f2, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f2.u32l;
    // 0x150EEBD0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEBD4: lwc1        $f0, 0x1B8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EEBD8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150EEBDC:
    // 0x150EEBDC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150EEBE0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150EEBE4: nop

    // 0x150EEBE8: bc1fl       L_150EEBFC
    if (!c1cs) {
        // 0x150EEBEC: lwc1        $f0, 0x1BC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X1BC);
            goto L_150EEBFC;
    }
    goto skip_44;
    // 0x150EEBEC: lwc1        $f0, 0x1BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1BC);
    skip_44:
    // 0x150EEBF0: swc1        $f2, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->f2.u32l;
    // 0x150EEBF4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEBF8: lwc1        $f0, 0x1BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1BC);
L_150EEBFC:
    // 0x150EEBFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150EEC00: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x150EEC04: nop

    // 0x150EEC08: bc1fl       L_150EEC24
    if (!c1cs) {
        // 0x150EEC0C: c.lt.s      $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
            goto L_150EEC24;
    }
    goto skip_45;
    // 0x150EEC0C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    skip_45:
    // 0x150EEC10: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x150EEC14: swc1        $f4, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f4.u32l;
    // 0x150EEC18: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEC1C: lwc1        $f0, 0x1BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1BC);
    // 0x150EEC20: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
L_150EEC24:
    // 0x150EEC24: nop

    // 0x150EEC28: bc1f        L_150EEC40
    if (!c1cs) {
        // 0x150EEC2C: nop
    
            goto L_150EEC40;
    }
    // 0x150EEC2C: nop

    // 0x150EEC30: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x150EEC34: swc1        $f8, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->f8.u32l;
    // 0x150EEC38: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150EEC3C: lwc1        $f0, 0x1BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1BC);
L_150EEC40:
    // 0x150EEC40: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150EEC44: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150EEC48: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150EEC4C: nop

    // 0x150EEC50: sh          $t9, 0x2E4($s0)
    MEM_H(0X2E4, ctx->r16) = ctx->r25;
    // 0x150EEC54: lwc1        $f6, 0x1B8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1B8);
    // 0x150EEC58: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150EEC5C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150EEC60: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150EEC64: nop

    // 0x150EEC68: negu        $t3, $t5
    ctx->r11 = SUB32(0, ctx->r13);
    // 0x150EEC6C: sh          $t3, 0x2E6($s0)
    MEM_H(0X2E6, ctx->r16) = ctx->r11;
    // 0x150EEC70: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_150EEC74:
    // 0x150EEC74: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150EEC78: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    // 0x150EEC7C: jr          $ra
    // 0x150EEC80: nop

    return;
    return;
    // 0x150EEC80: nop

;}
RECOMP_FUNC void func_15040A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A70: jr          $ra
    // 0x15040A74: nop

    return;
    return;
    // 0x15040A74: nop

;}
RECOMP_FUNC void func_151E9D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E9D18: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x151E9D1C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x151E9D20: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151E9D24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151E9D28: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x151E9D2C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x151E9D30: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x151E9D34: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x151E9D38: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E9D3C: lhu         $t7, -0x240($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X240);
    // 0x151E9D40: addiu       $t6, $a1, -0x10
    ctx->r14 = ADD32(ctx->r5, -0X10);
    // 0x151E9D44: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x151E9D48: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x151E9D4C: bne         $t8, $zero, L_151E9D78
    if (ctx->r24 != 0) {
        // 0x151E9D50: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_151E9D78;
    }
    // 0x151E9D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E9D54: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E9D58: lw          $t9, -0x22C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22C);
    // 0x151E9D5C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E9D60: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E9D64: lb          $t2, 0x42($t9)
    ctx->r10 = MEM_B(ctx->r25, 0X42);
    // 0x151E9D68: addiu       $a0, $a0, 0xD10
    ctx->r4 = ADD32(ctx->r4, 0XD10);
    // 0x151E9D6C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x151E9D70: bne         $t2, $at, L_151E9DB4
    if (ctx->r10 != ctx->r1) {
        // 0x151E9D74: addiu       $t6, $zero, 0x200
        ctx->r14 = ADD32(0, 0X200);
            goto L_151E9DB4;
    }
    // 0x151E9D74: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
L_151E9D78:
    // 0x151E9D78: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151E9D7C: lw          $t3, -0x22C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X22C);
    // 0x151E9D80: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E9D84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E9D88: lb          $t4, 0x42($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X42);
    // 0x151E9D8C: addiu       $a0, $a0, 0xD11
    ctx->r4 = ADD32(ctx->r4, 0XD11);
    // 0x151E9D90: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x151E9D94: bne         $t4, $at, L_151E9DA8
    if (ctx->r12 != ctx->r1) {
        // 0x151E9D98: addiu       $t5, $zero, 0x200
        ctx->r13 = ADD32(0, 0X200);
            goto L_151E9DA8;
    }
    // 0x151E9D98: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x151E9D9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E9DA0: b           L_151E9DA8
    // 0x151E9DA4: addiu       $a0, $a0, 0xD12
    ctx->r4 = ADD32(ctx->r4, 0XD12);
        goto L_151E9DA8;
    // 0x151E9DA4: addiu       $a0, $a0, 0xD12
    ctx->r4 = ADD32(ctx->r4, 0XD12);
L_151E9DA8:
    // 0x151E9DA8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x151E9DAC: b           L_151E9DBC
    // 0x151E9DB0: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
        goto L_151E9DBC;
    // 0x151E9DB0: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
L_151E9DB4:
    // 0x151E9DB4: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x151E9DB8: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
L_151E9DBC:
    // 0x151E9DBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E9DC0: jal         0x1510D0EC
    // 0x151E9DC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x151E9DC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151E9DC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E9DCC: bne         $v0, $at, L_151E9DDC
    if (ctx->r2 != ctx->r1) {
        // 0x151E9DD0: lui         $t0, 0xE700
        ctx->r8 = S32(0XE700 << 16);
            goto L_151E9DDC;
    }
    // 0x151E9DD0: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x151E9DD4: b           L_151EA140
    // 0x151E9DD8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_151EA140;
    // 0x151E9DD8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151E9DDC:
    // 0x151E9DDC: lui         $t1, 0xF518
    ctx->r9 = S32(0XF518 << 16);
    // 0x151E9DE0: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151E9DE4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x151E9DE8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151E9DEC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9DF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151E9DF4: lui         $t7, 0xFD18
    ctx->r15 = S32(0XFD18 << 16);
    // 0x151E9DF8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x151E9DFC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x151E9E00: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9E04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151E9E08: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x151E9E0C: ori         $t8, $t8, 0x4250
    ctx->r24 = ctx->r24 | 0X4250;
    // 0x151E9E10: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x151E9E14: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x151E9E18: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9E1C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x151E9E20: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x151E9E24: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x151E9E28: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x151E9E2C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9E30: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x151E9E34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151E9E38: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x151E9E3C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x151E9E40: lui         $t2, 0xF300
    ctx->r10 = S32(0XF300 << 16);
    // 0x151E9E44: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x151E9E48: beq         $at, $zero, L_151E9E58
    if (ctx->r1 == 0) {
        // 0x151E9E4C: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_151E9E58;
    }
    // 0x151E9E4C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9E50: b           L_151E9E5C
    // 0x151E9E54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_151E9E5C;
    // 0x151E9E54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_151E9E58:
    // 0x151E9E58: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
L_151E9E5C:
    // 0x151E9E5C: andi        $t3, $a2, 0xFFF
    ctx->r11 = ctx->r6 & 0XFFF;
    // 0x151E9E60: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x151E9E64: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x151E9E68: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151E9E6C: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x151E9E70: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151E9E74: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151E9E78: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151E9E7C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9E80: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x151E9E84: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x151E9E88: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x151E9E8C: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x151E9E90: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151E9E94: sll         $t2, $t9, 9
    ctx->r10 = S32(ctx->r25 << 9);
    // 0x151E9E98: lui         $t4, 0x9
    ctx->r12 = S32(0X9 << 16);
    // 0x151E9E9C: ori         $t4, $t4, 0x4250
    ctx->r12 = ctx->r12 | 0X4250;
    // 0x151E9EA0: or          $t3, $t2, $t1
    ctx->r11 = ctx->r10 | ctx->r9;
    // 0x151E9EA4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151E9EA8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x151E9EAC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9EB0: addiu       $t6, $s0, -0x1
    ctx->r14 = ADD32(ctx->r16, -0X1);
    // 0x151E9EB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151E9EB8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x151E9EBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151E9EC0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x151E9EC4: ori         $t2, $t9, 0x7C
    ctx->r10 = ctx->r25 | 0X7C;
    // 0x151E9EC8: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x151E9ECC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x151E9ED0: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x151E9ED4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9ED8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151E9EDC: lui         $t3, 0xEF00
    ctx->r11 = S32(0XEF00 << 16);
    // 0x151E9EE0: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x151E9EE4: ori         $t4, $t4, 0x4244
    ctx->r12 = ctx->r12 | 0X4244;
    // 0x151E9EE8: ori         $t3, $t3, 0xC3F
    ctx->r11 = ctx->r11 | 0XC3F;
    // 0x151E9EEC: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x151E9EF0: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x151E9EF4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9EF8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151E9EFC: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x151E9F00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151E9F04: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151E9F08: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151E9F0C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151E9F10: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x151E9F14: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151E9F18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151E9F1C: beq         $t7, $zero, L_151EA050
    if (ctx->r15 == 0) {
        // 0x151E9F20: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_151EA050;
    }
    // 0x151E9F20: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151E9F24: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E9F28: lhu         $v0, -0x240($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X240);
    // 0x151E9F2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E9F30: andi        $t8, $v0, 0x6040
    ctx->r24 = ctx->r2 & 0X6040;
    // 0x151E9F34: beq         $t8, $zero, L_151E9F5C
    if (ctx->r24 == 0) {
        // 0x151E9F38: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_151E9F5C;
    }
    // 0x151E9F38: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x151E9F3C: jal         0x150859AC
    // 0x151E9F40: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x151E9F40: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x151E9F44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151E9F48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151E9F4C: jal         0x150859AC
    // 0x151E9F50: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_150859AC(rdram, ctx);
        goto after_2;
    // 0x151E9F50: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x151E9F54: b           L_151EA03C
    // 0x151E9F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_151EA03C;
    // 0x151E9F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_151E9F5C:
    // 0x151E9F5C: beq         $t9, $zero, L_151E9FE0
    if (ctx->r25 == 0) {
        // 0x151E9F60: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_151E9FE0;
    }
    // 0x151E9F60: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E9F64: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E9F68: lb          $t2, -0x274($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X274);
    // 0x151E9F6C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151E9F70: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x151E9F74: blez        $t2, L_151EA03C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x151E9F78: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_151EA03C;
    }
    // 0x151E9F78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151E9F7C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_151E9F80:
    // 0x151E9F80: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E9F84: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x151E9F88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151E9F8C: jal         0x150859AC
    // 0x151E9F90: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    func_150859AC(rdram, ctx);
        goto after_3;
    // 0x151E9F90: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    after_3:
    // 0x151E9F94: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x151E9F98: bgez        $v0, L_151E9FA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151E9F9C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151E9FA4;
    }
    // 0x151E9F9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151E9FA0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151E9FA4:
    // 0x151E9FA4: lbu         $t4, 0x128($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X128);
    // 0x151E9FA8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E9FAC: bnel        $t4, $zero, L_151E9FC0
    if (ctx->r12 != 0) {
        // 0x151E9FB0: addu        $s2, $s2, $v1
        ctx->r18 = ADD32(ctx->r18, ctx->r3);
            goto L_151E9FC0;
    }
    goto skip_0;
    // 0x151E9FB0: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    skip_0:
    // 0x151E9FB4: b           L_151E9FC0
    // 0x151E9FB8: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
        goto L_151E9FC0;
    // 0x151E9FB8: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x151E9FBC: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
L_151E9FC0:
    // 0x151E9FC0: lb          $t5, -0x274($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X274);
    // 0x151E9FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E9FC8: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
    // 0x151E9FCC: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x151E9FD0: bnel        $at, $zero, L_151E9F80
    if (ctx->r1 != 0) {
        // 0x151E9FD4: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_151E9F80;
    }
    goto skip_1;
    // 0x151E9FD4: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    skip_1:
    // 0x151E9FD8: b           L_151EA03C
    // 0x151E9FDC: nop

        goto L_151EA03C;
    // 0x151E9FDC: nop

L_151E9FE0:
    // 0x151E9FE0: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x151E9FE4: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x151E9FE8: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x151E9FEC: blez        $v1, L_151EA03C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E9FF0: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_151EA03C;
    }
    // 0x151E9FF0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151E9FF4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E9FF8: addiu       $v0, $t7, 0xC00
    ctx->r2 = ADD32(ctx->r15, 0XC00);
    // 0x151E9FFC: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x151EA000: lw          $a0, -0x22C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X22C);
L_151EA004:
    // 0x151EA004: lh          $v1, 0x46($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X46);
    // 0x151EA008: bgezl       $v1, L_151EA018
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EA00C: lb          $t8, 0x0($v0)
        ctx->r24 = MEM_B(ctx->r2, 0X0);
            goto L_151EA018;
    }
    goto skip_2;
    // 0x151EA00C: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    skip_2:
    // 0x151EA010: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151EA014: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
L_151EA018:
    // 0x151EA018: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151EA01C: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x151EA020: bnel        $t8, $zero, L_151EA034
    if (ctx->r24 != 0) {
        // 0x151EA024: addu        $s2, $s2, $v1
        ctx->r18 = ADD32(ctx->r18, ctx->r3);
            goto L_151EA034;
    }
    goto skip_3;
    // 0x151EA024: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    skip_3:
    // 0x151EA028: b           L_151EA034
    // 0x151EA02C: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
        goto L_151EA034;
    // 0x151EA02C: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x151EA030: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
L_151EA034:
    // 0x151EA034: bne         $at, $zero, L_151EA004
    if (ctx->r1 != 0) {
        // 0x151EA038: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_151EA004;
    }
    // 0x151EA038: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_151EA03C:
    // 0x151EA03C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151EA040: addiu       $v0, $v0, 0xAA0
    ctx->r2 = ADD32(ctx->r2, 0XAA0);
    // 0x151EA044: sh          $s1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r17;
    // 0x151EA048: b           L_151EA060
    // 0x151EA04C: sh          $s2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r18;
        goto L_151EA060;
    // 0x151EA04C: sh          $s2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r18;
L_151EA050:
    // 0x151EA050: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151EA054: addiu       $v0, $v0, 0xAA0
    ctx->r2 = ADD32(ctx->r2, 0XAA0);
    // 0x151EA058: lh          $s1, 0x0($v0)
    ctx->r17 = MEM_H(ctx->r2, 0X0);
    // 0x151EA05C: lh          $s2, 0x2($v0)
    ctx->r18 = MEM_H(ctx->r2, 0X2);
L_151EA060:
    // 0x151EA060: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x151EA064: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x151EA068: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x151EA06C: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x151EA070: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x151EA074: addiu       $s0, $a2, 0x40
    ctx->r16 = ADD32(ctx->r6, 0X40);
    // 0x151EA078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151EA07C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151EA080: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x151EA084: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151EA088: addiu       $a1, $zero, 0x108
    ctx->r5 = ADD32(0, 0X108);
    // 0x151EA08C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    // 0x151EA090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151EA094: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151EA098: jal         0x151E86E4
    // 0x151EA09C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_151E86E4(rdram, ctx);
        goto after_4;
    // 0x151EA09C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_4:
    // 0x151EA0A0: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x151EA0A4: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x151EA0A8: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x151EA0AC: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x151EA0B0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x151EA0B4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151EA0B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151EA0BC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x151EA0C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151EA0C4: addiu       $a1, $zero, 0x318
    ctx->r5 = ADD32(0, 0X318);
    // 0x151EA0C8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x151EA0CC: addiu       $a3, $zero, 0x358
    ctx->r7 = ADD32(0, 0X358);
    // 0x151EA0D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151EA0D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151EA0D8: jal         0x151E86E4
    // 0x151EA0DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_5;
    // 0x151EA0DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_5:
    // 0x151EA0E0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151EA0E4: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x151EA0E8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x151EA0EC: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x151EA0F0: jal         0x1504332C
    // 0x151EA0F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_1504332C(rdram, ctx);
        goto after_6;
    // 0x151EA0F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x151EA0F8: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x151EA0FC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151EA100: addiu       $a3, $a3, -0x4560
    ctx->r7 = ADD32(ctx->r7, -0X4560);
    // 0x151EA104: sra         $t2, $s0, 2
    ctx->r10 = S32(SIGNED(ctx->r16) >> 2);
    // 0x151EA108: addiu       $s0, $t2, 0x1
    ctx->r16 = ADD32(ctx->r10, 0X1);
    // 0x151EA10C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151EA110: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x151EA114: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x151EA118: jal         0x15042D94
    // 0x151EA11C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_15042D94(rdram, ctx);
        goto after_7;
    // 0x151EA11C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_7:
    // 0x151EA120: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151EA124: addiu       $a3, $a3, -0x455C
    ctx->r7 = ADD32(ctx->r7, -0X455C);
    // 0x151EA128: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x151EA12C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151EA130: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x151EA134: jal         0x15042D94
    // 0x151EA138: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_15042D94(rdram, ctx);
        goto after_8;
    // 0x151EA138: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_8:
    // 0x151EA13C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151EA140:
    // 0x151EA140: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151EA144: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x151EA148: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x151EA14C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x151EA150: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x151EA154: jr          $ra
    // 0x151EA158: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x151EA158: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_151BE1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE1E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151BE1E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BE1EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151BE1F0: jal         0x151BE138
    // 0x151BE1F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151BE138(rdram, ctx);
        goto after_0;
    // 0x151BE1F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151BE1F8: jal         0x15149368
    // 0x151BE1FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x151BE1FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151BE200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151BE204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151BE208: jr          $ra
    // 0x151BE20C: nop

    return;
    return;
    // 0x151BE20C: nop

;}
RECOMP_FUNC void func_150BAA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BAA00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150BAA04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150BAA08: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x150BAA0C: jr          $ra
    // 0x150BAA10: nop

    return;
    return;
    // 0x150BAA10: nop

;}
RECOMP_FUNC void func_15077294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077294: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077298: lbu         $v0, 0x1891($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1891);
    // 0x1507729C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150772A0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150772A4: beq         $v0, $zero, L_150772BC
    if (ctx->r2 == 0) {
        // 0x150772A8: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_150772BC;
    }
    // 0x150772A8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150772AC: beq         $v0, $at, L_150772CC
    if (ctx->r2 == ctx->r1) {
        // 0x150772B0: nop
    
            goto L_150772CC;
    }
    // 0x150772B0: nop

    // 0x150772B4: jr          $ra
    // 0x150772B8: nop

    return;
    return;
    // 0x150772B8: nop

L_150772BC:
    // 0x150772BC: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150772C0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150772C4: jr          $ra
    // 0x150772C8: sb          $t6, 0x1CA($t7)
    MEM_B(0X1CA, ctx->r15) = ctx->r14;
    return;
    return;
    // 0x150772C8: sb          $t6, 0x1CA($t7)
    MEM_B(0X1CA, ctx->r15) = ctx->r14;
L_150772CC:
    // 0x150772CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150772D0: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x150772D4: lbu         $t8, 0x1CA($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1CA);
    // 0x150772D8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x150772DC: sb          $t9, 0x1CA($v0)
    MEM_B(0X1CA, ctx->r2) = ctx->r25;
    // 0x150772E0: jr          $ra
    // 0x150772E4: nop

    return;
    return;
    // 0x150772E4: nop

;}
RECOMP_FUNC void func_15169A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169A48: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15169A4C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15169A50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15169A54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15169A58: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15169A5C: lh          $t6, 0x38($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X38);
    // 0x15169A60: beq         $t6, $zero, L_15169A7C
    if (ctx->r14 == 0) {
        // 0x15169A64: nop
    
            goto L_15169A7C;
    }
    // 0x15169A64: nop

    // 0x15169A68: lh          $t7, 0x3A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X3A);
    // 0x15169A6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15169A70: addiu       $a2, $sp, 0x5F
    ctx->r6 = ADD32(ctx->r29, 0X5F);
    // 0x15169A74: bnel        $t7, $zero, L_15169A88
    if (ctx->r15 != 0) {
        // 0x15169A78: sb          $t8, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r24;
            goto L_15169A88;
    }
    goto skip_0;
    // 0x15169A78: sb          $t8, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r24;
    skip_0:
L_15169A7C:
    // 0x15169A7C: b           L_15169C50
    // 0x15169A80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_15169C50;
    // 0x15169A80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15169A84: sb          $t8, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r24;
L_15169A88:
    // 0x15169A88: jal         0x1513F4E4
    // 0x15169A8C: lbu         $a1, 0x47($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X47);
    func_1513F4E4(rdram, ctx);
        goto after_0;
    // 0x15169A8C: lbu         $a1, 0x47($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X47);
    after_0:
    // 0x15169A90: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x15169A94: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x15169A98: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15169A9C: lbu         $t5, 0x43($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X43);
    // 0x15169AA0: lbu         $t2, 0x42($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X42);
    // 0x15169AA4: lbu         $t9, 0x44($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X44);
    // 0x15169AA8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x15169AAC: lbu         $t5, 0x45($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X45);
    // 0x15169AB0: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x15169AB4: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x15169AB8: sll         $t1, $t9, 8
    ctx->r9 = S32(ctx->r25 << 8);
    // 0x15169ABC: or          $t2, $t7, $t1
    ctx->r10 = ctx->r15 | ctx->r9;
    // 0x15169AC0: or          $t3, $t2, $t5
    ctx->r11 = ctx->r10 | ctx->r13;
    // 0x15169AC4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15169AC8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x15169ACC: lbu         $v1, 0x49($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X49);
    // 0x15169AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15169AD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15169AD8: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x15169ADC: beq         $t6, $zero, L_15169B30
    if (ctx->r14 == 0) {
        // 0x15169AE0: andi        $t8, $v1, 0x2
        ctx->r24 = ctx->r3 & 0X2;
            goto L_15169B30;
    }
    // 0x15169AE0: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x15169AE4: beq         $t8, $zero, L_15169AFC
    if (ctx->r24 == 0) {
        // 0x15169AE8: addiu       $t1, $zero, 0x100
        ctx->r9 = ADD32(0, 0X100);
            goto L_15169AFC;
    }
    // 0x15169AE8: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x15169AEC: lh          $v0, 0x34($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34);
    // 0x15169AF0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15169AF4: b           L_15169B00
    // 0x15169AF8: sra         $v0, $t9, 5
    ctx->r2 = S32(SIGNED(ctx->r25) >> 5);
        goto L_15169B00;
    // 0x15169AF8: sra         $v0, $t9, 5
    ctx->r2 = S32(SIGNED(ctx->r25) >> 5);
L_15169AFC:
    // 0x15169AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15169B00:
    // 0x15169B00: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x15169B04: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15169B08: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15169B0C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15169B10: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x15169B14: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15169B18: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15169B1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x15169B20: jal         0x15094F70
    // 0x15169B24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15094F70(rdram, ctx);
        goto after_1;
    // 0x15169B24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x15169B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15169B2C: lbu         $v1, 0x49($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X49);
L_15169B30:
    // 0x15169B30: andi        $t3, $v1, 0x10
    ctx->r11 = ctx->r3 & 0X10;
    // 0x15169B34: beq         $t3, $zero, L_15169B44
    if (ctx->r11 == 0) {
        // 0x15169B38: andi        $t6, $v1, 0x4
        ctx->r14 = ctx->r3 & 0X4;
            goto L_15169B44;
    }
    // 0x15169B38: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
    // 0x15169B3C: b           L_15169B48
    // 0x15169B40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_15169B48;
    // 0x15169B40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_15169B44:
    // 0x15169B44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15169B48:
    // 0x15169B48: beq         $t6, $zero, L_15169B58
    if (ctx->r14 == 0) {
        // 0x15169B4C: andi        $t9, $v1, 0x8
        ctx->r25 = ctx->r3 & 0X8;
            goto L_15169B58;
    }
    // 0x15169B4C: andi        $t9, $v1, 0x8
    ctx->r25 = ctx->r3 & 0X8;
    // 0x15169B50: ori         $t8, $t0, 0x2
    ctx->r24 = ctx->r8 | 0X2;
    // 0x15169B54: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_15169B58:
    // 0x15169B58: beq         $t9, $zero, L_15169B68
    if (ctx->r25 == 0) {
        // 0x15169B5C: andi        $t1, $v1, 0x20
        ctx->r9 = ctx->r3 & 0X20;
            goto L_15169B68;
    }
    // 0x15169B5C: andi        $t1, $v1, 0x20
    ctx->r9 = ctx->r3 & 0X20;
    // 0x15169B60: ori         $t7, $t0, 0x4
    ctx->r15 = ctx->r8 | 0X4;
    // 0x15169B64: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
L_15169B68:
    // 0x15169B68: beq         $t1, $zero, L_15169B88
    if (ctx->r9 == 0) {
        // 0x15169B6C: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_15169B88;
    }
    // 0x15169B6C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15169B70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15169B74: lui         $t4, 0xEE00
    ctx->r12 = S32(0XEE00 << 16);
    // 0x15169B78: lui         $t2, 0x795A
    ctx->r10 = S32(0X795A << 16);
    // 0x15169B7C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15169B80: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x15169B84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_15169B88:
    // 0x15169B88: lbu         $t5, 0x48($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X48);
    // 0x15169B8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15169B90: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x15169B94: bne         $t5, $at, L_15169BA4
    if (ctx->r13 != ctx->r1) {
        // 0x15169B98: addiu       $t2, $t2, 0x4AC8
        ctx->r10 = ADD32(ctx->r10, 0X4AC8);
            goto L_15169BA4;
    }
    // 0x15169B98: addiu       $t2, $t2, 0x4AC8
    ctx->r10 = ADD32(ctx->r10, 0X4AC8);
    // 0x15169B9C: b           L_15169BA8
    // 0x15169BA0: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
        goto L_15169BA8;
    // 0x15169BA0: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
L_15169BA4:
    // 0x15169BA4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15169BA8:
    // 0x15169BA8: lbu         $t1, 0x46($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X46);
    // 0x15169BAC: lw          $t3, 0x2C9C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2C9C);
    // 0x15169BB0: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x15169BB4: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x15169BB8: addu        $v0, $t4, $t2
    ctx->r2 = ADD32(ctx->r12, ctx->r10);
    // 0x15169BBC: or          $t9, $v1, $t3
    ctx->r25 = ctx->r3 | ctx->r11;
    // 0x15169BC0: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15169BC4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x15169BC8: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    // 0x15169BCC: addiu       $a3, $sp, 0x5F
    ctx->r7 = ADD32(ctx->r29, 0X5F);
    // 0x15169BD0: or          $a2, $t5, $t3
    ctx->r6 = ctx->r13 | ctx->r11;
    // 0x15169BD4: ori         $t6, $a2, 0x4
    ctx->r14 = ctx->r6 | 0X4;
    // 0x15169BD8: jal         0x15142FBC
    // 0x15169BDC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_15142FBC(rdram, ctx);
        goto after_2;
    // 0x15169BDC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_2:
    // 0x15169BE0: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15169BE4: lh          $t8, 0x38($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X38);
    // 0x15169BE8: lh          $t9, 0x3A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X3A);
    // 0x15169BEC: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x15169BF0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15169BF4: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15169BF8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x15169BFC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15169C00: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x15169C04: lhu         $t7, 0x3C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X3C);
    // 0x15169C08: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15169C0C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15169C10: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15169C14: lhu         $t1, 0x3E($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X3E);
    // 0x15169C18: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15169C1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15169C20: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15169C24: lh          $t4, 0x34($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X34);
    // 0x15169C28: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15169C2C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15169C30: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x15169C34: lh          $t2, 0x36($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X36);
    // 0x15169C38: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x15169C3C: lh          $t5, 0x26($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X26);
    // 0x15169C40: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15169C44: sra         $t3, $t5, 8
    ctx->r11 = S32(SIGNED(ctx->r13) >> 8);
    // 0x15169C48: jal         0x1509629C
    // 0x15169C4C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    func_1509629C(rdram, ctx);
        goto after_3;
    // 0x15169C4C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    after_3:
L_15169C50:
    // 0x15169C50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15169C54: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15169C58: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15169C5C: jr          $ra
    // 0x15169C60: nop

    return;
    return;
    // 0x15169C60: nop

;}
RECOMP_FUNC void func_15141970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15141974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15141978: jal         0x1514EDF0
    // 0x1514197C: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1514197C: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    after_0:
    // 0x15141980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15141984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15141988: jr          $ra
    // 0x1514198C: nop

    return;
    return;
    // 0x1514198C: nop

;}
RECOMP_FUNC void func_151B6320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B6320: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151B6324: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151B6328: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x151B632C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B6330: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151B6334: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B6338: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x151B633C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151B6340: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151B6344: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151B6348: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151B634C: sb          $t6, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r14;
    // 0x151B6350: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B6354: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151B6358: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151B635C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151B6360: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B6364: addiu       $t0, $sp, 0x4C
    ctx->r8 = ADD32(ctx->r29, 0X4C);
    // 0x151B6368: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x151B636C: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x151B6370: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B6374: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x151B6378: sh          $t8, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r24;
    // 0x151B637C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x151B6380: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151B6384: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B6388: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x151B638C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x151B6390: sb          $t9, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r25;
    // 0x151B6394: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151B6398: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x151B639C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151B63A0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B63A4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x151B63A8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x151B63AC: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x151B63B0: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151B63B4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B63B8: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x151B63BC: lbu         $t7, 0x97($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X97);
    // 0x151B63C0: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x151B63C4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x151B63C8: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x151B63CC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x151B63D0: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x151B63D4: sw          $t4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r12;
    // 0x151B63D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B63DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B63E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151B63E4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151B63E8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151B63EC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151B63F0: jal         0x15147A80
    // 0x151B63F4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x151B63F4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x151B63F8: beq         $v0, $zero, L_151B640C
    if (ctx->r2 == 0) {
        // 0x151B63FC: addiu       $a1, $sp, 0x44
        ctx->r5 = ADD32(ctx->r29, 0X44);
            goto L_151B640C;
    }
    // 0x151B63FC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151B6400: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151B6404: jal         0x10022EC0
    // 0x151B6408: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B6408: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_1:
L_151B640C:
    // 0x151B640C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151B6410: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151B6414: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151B6418: jr          $ra
    // 0x151B641C: nop

    return;
    return;
    // 0x151B641C: nop

;}
RECOMP_FUNC void func_150FDF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDF38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150FDF3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150FDF40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FDF44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FDF48: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150FDF4C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150FDF50: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x150FDF54: beql        $s0, $zero, L_150FE0A8
    if (ctx->r16 == 0) {
        // 0x150FDF58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150FE0A8;
    }
    goto skip_0;
    // 0x150FDF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x150FDF5C: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FDF60: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FDF64: addiu       $t7, $t7, 0x1F70
    ctx->r15 = ADD32(ctx->r15, 0X1F70);
    // 0x150FDF68: beq         $t6, $zero, L_150FDFB8
    if (ctx->r14 == 0) {
        // 0x150FDF6C: lui         $t8, 0x800A
        ctx->r24 = S32(0X800A << 16);
            goto L_150FDFB8;
    }
    // 0x150FDF6C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150FDF70: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150FDF74: lbu         $t2, -0x7480($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X7480);
    // 0x150FDF78: addiu       $t8, $t8, 0x1F88
    ctx->r24 = ADD32(ctx->r24, 0X1F88);
    // 0x150FDF7C: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x150FDF80: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x150FDF84: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150FDF88: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150FDF8C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150FDF90: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150FDF94: lw          $t1, 0x1D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FDF98: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x150FDF9C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x150FDFA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x150FDFA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150FDFA8: jal         0x15145EA4
    // 0x150FDFAC: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150FDFAC: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x150FDFB0: b           L_150FDFFC
    // 0x150FDFB4: nop

        goto L_150FDFFC;
    // 0x150FDFB4: nop

L_150FDFB8:
    // 0x150FDFB8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150FDFBC: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x150FDFC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FDFC4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x150FDFC8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150FDFCC: addiu       $t5, $sp, 0x44
    ctx->r13 = ADD32(ctx->r29, 0X44);
    // 0x150FDFD0: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x150FDFD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FDFD8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x150FDFDC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150FDFE0: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x150FDFE4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FDFE8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150FDFEC: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x150FDFF0: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x150FDFF4: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FDFF8: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
L_150FDFFC:
    // 0x150FDFFC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150FE000: lw          $t9, -0x1610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1610);
    // 0x150FE004: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x150FE008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FE00C: bne         $t9, $at, L_150FE01C
    if (ctx->r25 != ctx->r1) {
        // 0x150FE010: addiu       $a1, $sp, 0x44
        ctx->r5 = ADD32(ctx->r29, 0X44);
            goto L_150FE01C;
    }
    // 0x150FE010: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150FE014: b           L_150FE020
    // 0x150FE018: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
        goto L_150FE020;
    // 0x150FE018: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
L_150FE01C:
    // 0x150FE01C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
L_150FE020:
    // 0x150FE020: jal         0x151D3E6C
    // 0x150FE024: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_151D3E6C(rdram, ctx);
        goto after_1;
    // 0x150FE024: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x150FE028: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150FE02C: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x150FE030: jal         0x151D3F14
    // 0x150FE034: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_151D3F14(rdram, ctx);
        goto after_2;
    // 0x150FE034: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x150FE038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FE03C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150FE040: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    // 0x150FE044: jal         0x150FE0B8
    // 0x150FE048: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    func_150FE0B8(rdram, ctx);
        goto after_3;
    // 0x150FE048: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    after_3:
    // 0x150FE04C: jal         0x150FE288
    // 0x150FE050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150FE288(rdram, ctx);
        goto after_4;
    // 0x150FE050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150FE054: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x150FE058: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x150FE05C: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x150FE060: beql        $t0, $zero, L_150FE084
    if (ctx->r8 == 0) {
        // 0x150FE064: lw          $v0, 0x60($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X60);
            goto L_150FE084;
    }
    goto skip_1;
    // 0x150FE064: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x150FE068: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150FE06C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150FE070: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x150FE074: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150FE078: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150FE07C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150FE080: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_150FE084:
    // 0x150FE084: beql        $v0, $zero, L_150FE0A8
    if (ctx->r2 == 0) {
        // 0x150FE088: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150FE0A8;
    }
    goto skip_2;
    // 0x150FE088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x150FE08C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150FE090: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150FE094: lw          $t4, 0x4($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X4);
    // 0x150FE098: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x150FE09C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150FE0A0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150FE0A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150FE0A8:
    // 0x150FE0A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150FE0AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150FE0B0: jr          $ra
    // 0x150FE0B4: nop

    return;
    return;
    // 0x150FE0B4: nop

;}
RECOMP_FUNC void func_15181D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15181D70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15181D74: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x15181D78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15181D7C: lwc1        $f4, 0x72B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X72B0);
    // 0x15181D80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181D84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15181D88: swc1        $f4, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f4.u32l;
    // 0x15181D8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181D90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15181D94: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15181D98: swc1        $f0, -0x2238($at)
    MEM_W(-0X2238, ctx->r1) = ctx->f0.u32l;
    // 0x15181D9C: addiu       $t7, $t7, -0x2218
    ctx->r15 = ADD32(ctx->r15, -0X2218);
    // 0x15181DA0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x15181DA4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x15181DA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181DAC: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x15181DB0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x15181DB4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x15181DB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15181DBC: sb          $t8, -0x21E0($at)
    MEM_B(-0X21E0, ctx->r1) = ctx->r24;
    // 0x15181DC0: jr          $ra
    // 0x15181DC4: nop

    return;
    return;
    // 0x15181DC4: nop

;}
RECOMP_FUNC void func_1506C32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506C32C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1506C330: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506C334: addiu       $a2, $a2, 0x187C
    ctx->r6 = ADD32(ctx->r6, 0X187C);
    // 0x1506C338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506C33C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x1506C340: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506C344: beq         $v1, $zero, L_1506C408
    if (ctx->r3 == 0) {
        // 0x1506C348: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_1506C408;
    }
    // 0x1506C348: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x1506C34C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x1506C350: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x1506C354: andi        $t8, $t6, 0x7FF
    ctx->r24 = ctx->r14 & 0X7FF;
    // 0x1506C358: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1506C35C: sra         $t0, $v0, 11
    ctx->r8 = S32(SIGNED(ctx->r2) >> 11);
    // 0x1506C360: sra         $a0, $v0, 22
    ctx->r4 = S32(SIGNED(ctx->r2) >> 22);
    // 0x1506C364: andi        $t1, $t0, 0x7FF
    ctx->r9 = ctx->r8 & 0X7FF;
    // 0x1506C368: andi        $t2, $a0, 0x7FF
    ctx->r10 = ctx->r4 & 0X7FF;
    // 0x1506C36C: andi        $t9, $v0, 0x7FF
    ctx->r25 = ctx->r2 & 0X7FF;
    // 0x1506C370: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1506C374: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x1506C378: beq         $t2, $zero, L_1506C388
    if (ctx->r10 == 0) {
        // 0x1506C37C: sw          $t2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r10;
            goto L_1506C388;
    }
    // 0x1506C37C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x1506C380: b           L_1506C3B0
    // 0x1506C384: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_1506C3B0;
    // 0x1506C384: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_1506C388:
    // 0x1506C388: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1506C38C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1506C390: beq         $t3, $zero, L_1506C3A0
    if (ctx->r11 == 0) {
        // 0x1506C394: nop
    
            goto L_1506C3A0;
    }
    // 0x1506C394: nop

    // 0x1506C398: b           L_1506C3B0
    // 0x1506C39C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_1506C3B0;
    // 0x1506C39C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_1506C3A0:
    // 0x1506C3A0: beq         $t4, $zero, L_1506C3B0
    if (ctx->r12 == 0) {
        // 0x1506C3A4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1506C3B0;
    }
    // 0x1506C3A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506C3A8: b           L_1506C3B0
    // 0x1506C3AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_1506C3B0;
    // 0x1506C3AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_1506C3B0:
    // 0x1506C3B0: beql        $a1, $zero, L_1506C3D4
    if (ctx->r5 == 0) {
        // 0x1506C3B4: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_1506C3D4;
    }
    goto skip_0;
    // 0x1506C3B4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    skip_0:
    // 0x1506C3B8: jal         0x1000F568
    // 0x1506C3BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_1000F568(rdram, ctx);
        goto after_0;
    // 0x1506C3BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x1506C3C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1506C3C4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506C3C8: addiu       $a2, $a2, 0x187C
    ctx->r6 = ADD32(ctx->r6, 0X187C);
    // 0x1506C3CC: subu        $a1, $v0, $t5
    ctx->r5 = SUB32(ctx->r2, ctx->r13);
    // 0x1506C3D0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
L_1506C3D4:
    // 0x1506C3D4: addu        $v0, $sp, $t6
    ctx->r2 = ADD32(ctx->r29, ctx->r14);
    // 0x1506C3D8: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x1506C3DC: beql        $v0, $zero, L_1506C40C
    if (ctx->r2 == 0) {
        // 0x1506C3E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506C40C;
    }
    goto skip_1;
    // 0x1506C3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1506C3E4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1506C3E8: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x1506C3EC: ori         $at, $at, 0xF800
    ctx->r1 = ctx->r1 | 0XF800;
    // 0x1506C3F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1506C3F4: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x1506C3F8: or          $t0, $v0, $t8
    ctx->r8 = ctx->r2 | ctx->r24;
    // 0x1506C3FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506C400: jal         0x1506BF5C
    // 0x1506C404: sw          $t0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r8;
    func_1506BF5C(rdram, ctx);
        goto after_1;
    // 0x1506C404: sw          $t0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r8;
    after_1:
L_1506C408:
    // 0x1506C408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506C40C:
    // 0x1506C40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1506C410: jr          $ra
    // 0x1506C414: nop

    return;
    return;
    // 0x1506C414: nop

;}
RECOMP_FUNC void func_15141818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141818: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514181C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15141820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15141824: jr          $ra
    // 0x15141828: nop

    return;
    return;
    // 0x15141828: nop

;}
RECOMP_FUNC void func_1519F108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519F10C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519F110: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1519F114: lw          $v0, 0x98($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X98);
    // 0x1519F118: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519F11C: beq         $v1, $zero, L_1519F150
    if (ctx->r3 == 0) {
        // 0x1519F120: nop
    
            goto L_1519F150;
    }
    // 0x1519F120: nop

    // 0x1519F124: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x1519F128: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1519F12C: addiu       $a0, $v1, 0x58
    ctx->r4 = ADD32(ctx->r3, 0X58);
    // 0x1519F130: bnel        $v0, $at, L_1519F144
    if (ctx->r2 != ctx->r1) {
        // 0x1519F134: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_1519F144;
    }
    goto skip_0;
    // 0x1519F134: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_0:
    // 0x1519F138: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x1519F13C: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x1519F140: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_1519F144:
    // 0x1519F144: bne         $v0, $at, L_1519F150
    if (ctx->r2 != ctx->r1) {
        // 0x1519F148: nop
    
            goto L_1519F150;
    }
    // 0x1519F148: nop

    // 0x1519F14C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
L_1519F150:
    // 0x1519F150: jal         0x151478F4
    // 0x1519F154: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151478F4(rdram, ctx);
        goto after_0;
    // 0x1519F154: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x1519F158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519F15C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519F160: jr          $ra
    // 0x1519F164: nop

    return;
    return;
    // 0x1519F164: nop

;}
RECOMP_FUNC void func_151B7C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B7C38: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x151B7C3C: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x151B7C40: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x151B7C44: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x151B7C48: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x151B7C4C: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x151B7C50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151B7C54: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151B7C58: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x151B7C5C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151B7C60: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x151B7C64: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151B7C68: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151B7C6C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151B7C70: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151B7C74: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151B7C78: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151B7C7C: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x151B7C80: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x151B7C84: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x151B7C88: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151B7C8C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x151B7C90: beq         $at, $zero, L_151B7CA0
    if (ctx->r1 == 0) {
        // 0x151B7C94: addiu       $a0, $s1, 0x84
        ctx->r4 = ADD32(ctx->r17, 0X84);
            goto L_151B7CA0;
    }
    // 0x151B7C94: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x151B7C98: b           L_151B8298
    // 0x151B7C9C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B8298;
    // 0x151B7C9C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B7CA0:
    // 0x151B7CA0: lbu         $t9, 0x25($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X25);
    // 0x151B7CA4: lw          $t1, 0x94($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X94);
    // 0x151B7CA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B7CAC: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x151B7CB0: addiu       $a2, $t6, 0xA0
    ctx->r6 = ADD32(ctx->r14, 0XA0);
    // 0x151B7CB4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x151B7CB8: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x151B7CBC: jal         0x151D5D60
    // 0x151B7CC0: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151B7CC0: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    after_0:
    // 0x151B7CC4: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B7CC8: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x151B7CCC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151B7CD0: bne         $t7, $zero, L_151B7CE0
    if (ctx->r15 != 0) {
        // 0x151B7CD4: nop
    
            goto L_151B7CE0;
    }
    // 0x151B7CD4: nop

    // 0x151B7CD8: b           L_151B8298
    // 0x151B7CDC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151B8298;
    // 0x151B7CDC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B7CE0:
    // 0x151B7CE0: jal         0x15144B34
    // 0x151B7CE4: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    func_15144B34(rdram, ctx);
        goto after_1;
    // 0x151B7CE4: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    after_1:
    // 0x151B7CE8: addiu       $s2, $sp, 0x97
    ctx->r18 = ADD32(ctx->r29, 0X97);
    // 0x151B7CEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B7CF0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151B7CF4: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x151B7CF8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151B7CFC: sb          $t8, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r24;
    // 0x151B7D00: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151B7D04: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151B7D08: addiu       $a1, $a1, 0x1100
    ctx->r5 = ADD32(ctx->r5, 0X1100);
    // 0x151B7D0C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151B7D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B7D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B7D18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B7D1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B7D20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151B7D24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B7D28: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B7D2C: jal         0x15142E24
    // 0x151B7D30: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    func_15142E24(rdram, ctx);
        goto after_2;
    // 0x151B7D30: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    after_2:
    // 0x151B7D34: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x151B7D38: lui         $a2, 0x1F
    ctx->r6 = S32(0X1F << 16);
    // 0x151B7D3C: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151B7D40: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x151B7D44: jal         0x15142B7C
    // 0x151B7D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_3;
    // 0x151B7D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x151B7D4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B7D50: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    // 0x151B7D54: jal         0x1513F4E4
    // 0x151B7D58: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x151B7D58: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x151B7D5C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151B7D60: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151B7D64: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151B7D68: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151B7D6C: lw          $t8, 0x1C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C);
    // 0x151B7D70: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x151B7D74: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151B7D78: or          $t6, $a1, $at
    ctx->r14 = ctx->r5 | ctx->r1;
    // 0x151B7D7C: ori         $a1, $t6, 0x2CA0
    ctx->r5 = ctx->r14 | 0X2CA0;
    // 0x151B7D80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B7D84: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151B7D88: jal         0x15142FBC
    // 0x151B7D8C: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    func_15142FBC(rdram, ctx);
        goto after_5;
    // 0x151B7D8C: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    after_5:
    // 0x151B7D90: lb          $a0, 0x2E($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X2E);
    // 0x151B7D94: lw          $t0, 0xC4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC4);
    // 0x151B7D98: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x151B7D9C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151B7DA0: bgez        $a0, L_151B7DB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151B7DA4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151B7DB0;
    }
    // 0x151B7DA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151B7DA8: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x151B7DAC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_151B7DB0:
    // 0x151B7DB0: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
    // 0x151B7DB4: bgez        $a1, L_151B7DC4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B7DB8: addiu       $a3, $zero, 0x14
        ctx->r7 = ADD32(0, 0X14);
            goto L_151B7DC4;
    }
    // 0x151B7DB8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x151B7DBC: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151B7DC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_151B7DC4:
    // 0x151B7DC4: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B7DC8: addiu       $s2, $sp, 0xD0
    ctx->r18 = ADD32(ctx->r29, 0XD0);
    // 0x151B7DCC: addiu       $s3, $sp, 0xDC
    ctx->r19 = ADD32(ctx->r29, 0XDC);
    // 0x151B7DD0: mflo        $t6
    ctx->r14 = lo;
    // 0x151B7DD4: addu        $v0, $t1, $t6
    ctx->r2 = ADD32(ctx->r9, ctx->r14);
    // 0x151B7DD8: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B7DDC: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B7DE0: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151B7DE4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x151B7DE8: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x151B7DEC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B7DF0: mflo        $t9
    ctx->r25 = lo;
    // 0x151B7DF4: addu        $v1, $t1, $t9
    ctx->r3 = ADD32(ctx->r9, ctx->r25);
    // 0x151B7DF8: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151B7DFC: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151B7E00: lbu         $t4, 0x10($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X10);
    // 0x151B7E04: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151B7E08: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x151B7E0C: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x151B7E10: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151B7E14: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151B7E18: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151B7E1C: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151B7E20: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151B7E24: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151B7E28: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B7E2C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B7E30: lbu         $a2, 0x10($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X10);
    // 0x151B7E34: sub.s       $f26, $f8, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B7E38: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151B7E3C: sub.s       $f28, $f6, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151B7E40: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B7E44: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B7E48: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B7E4C: sub.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B7E50: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x151B7E54: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B7E58: mul.s       $f6, $f26, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x151B7E5C: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151B7E60: sub.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B7E64: mul.s       $f10, $f22, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x151B7E68: nop

    // 0x151B7E6C: mul.s       $f6, $f28, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x151B7E70: nop

    // 0x151B7E74: mul.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x151B7E78: nop

    // 0x151B7E7C: mul.s       $f8, $f24, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x151B7E80: sub.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B7E84: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151B7E88: nop

    // 0x151B7E8C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151B7E90: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151B7E94: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151B7E98: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151B7E9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151B7EA0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151B7EA4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151B7EA8: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x151B7EAC: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x151B7EB0: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x151B7EB4: bc1t        L_151B7EF0
    if (c1cs) {
        // 0x151B7EB8: nop
    
            goto L_151B7EF0;
    }
    // 0x151B7EB8: nop

    // 0x151B7EBC: sqrt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = sqrtf(ctx->f10.fl);
    // 0x151B7EC0: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x151B7EC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B7EC8: nop

    // 0x151B7ECC: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B7ED0: mul.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x151B7ED4: nop

    // 0x151B7ED8: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x151B7EDC: nop

    // 0x151B7EE0: mul.s       $f30, $f16, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x151B7EE4: nop

    // 0x151B7EE8: b           L_151B7F04
    // 0x151B7EEC: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
        goto L_151B7F04;
    // 0x151B7EEC: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
L_151B7EF0:
    // 0x151B7EF0: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x151B7EF4: nop

    // 0x151B7EF8: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x151B7EFC: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x151B7F00: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
L_151B7F04:
    // 0x151B7F04: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F08: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x151B7F0C: addiu       $t3, $zero, 0x1FA4
    ctx->r11 = ADD32(0, 0X1FA4);
    // 0x151B7F10: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B7F14: lui         $ra, 0x2
    ctx->r31 = S32(0X2 << 16);
    // 0x151B7F18: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x151B7F1C: ori         $t5, $t5, 0x204
    ctx->r13 = ctx->r13 | 0X204;
    // 0x151B7F20: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151B7F24: ori         $ra, $ra, 0x604
    ctx->r31 = ctx->r31 | 0X604;
    // 0x151B7F28: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x151B7F2C: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151B7F30: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F34: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151B7F38: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B7F3C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151B7F40: nop

    // 0x151B7F44: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x151B7F48: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B7F4C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F50: add.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x151B7F54: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B7F58: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B7F5C: nop

    // 0x151B7F60: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x151B7F64: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F68: sh          $t2, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r10;
    // 0x151B7F6C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F70: sh          $zero, 0xA($t6)
    MEM_H(0XA, ctx->r14) = 0;
    // 0x151B7F74: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F78: sb          $t4, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r12;
    // 0x151B7F7C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F80: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151B7F84: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151B7F88: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B7F8C: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151B7F90: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x151B7F94: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x151B7F98: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B7F9C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151B7FA0: nop

    // 0x151B7FA4: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x151B7FA8: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151B7FAC: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FB0: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x151B7FB4: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B7FB8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151B7FBC: nop

    // 0x151B7FC0: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151B7FC4: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B7FC8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FCC: sub.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f30.fl;
    // 0x151B7FD0: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B7FD4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B7FD8: nop

    // 0x151B7FDC: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x151B7FE0: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FE4: sh          $t3, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r11;
    // 0x151B7FE8: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FEC: sh          $zero, 0xA($t6)
    MEM_H(0XA, ctx->r14) = 0;
    // 0x151B7FF0: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FF4: sb          $t4, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r12;
    // 0x151B7FF8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B7FFC: lui         $t4, 0x100
    ctx->r12 = S32(0X100 << 16);
    // 0x151B8000: ori         $t4, $t4, 0x4008
    ctx->r12 = ctx->r12 | 0X4008;
    // 0x151B8004: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x151B8008: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B800C: addiu       $t6, $t8, 0x10
    ctx->r14 = ADD32(ctx->r24, 0X10);
    // 0x151B8010: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x151B8014: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
L_151B8018:
    // 0x151B8018: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151B801C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B8020: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151B8024: sub.s       $f24, $f10, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B8028: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B802C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x151B8030: sub.s       $f26, $f8, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B8034: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151B8038: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B803C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B8040: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B8044: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151B8048: sub.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B804C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B8050: sub.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151B8054: mul.s       $f8, $f20, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x151B8058: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151B805C: mul.s       $f6, $f26, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x151B8060: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B8064: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B8068: mul.s       $f8, $f22, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x151B806C: nop

    // 0x151B8070: mul.s       $f6, $f28, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x151B8074: nop

    // 0x151B8078: mul.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x151B807C: nop

    // 0x151B8080: mul.s       $f10, $f24, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x151B8084: sub.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B8088: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151B808C: nop

    // 0x151B8090: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151B8094: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B8098: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151B809C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151B80A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151B80A4: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151B80A8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B80AC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x151B80B0: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151B80B4: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x151B80B8: bc1t        L_151B80F4
    if (c1cs) {
        // 0x151B80BC: nop
    
            goto L_151B80F4;
    }
    // 0x151B80BC: nop

    // 0x151B80C0: sqrt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = sqrtf(ctx->f8.fl);
    // 0x151B80C4: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x151B80C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B80CC: nop

    // 0x151B80D0: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B80D4: mul.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x151B80D8: nop

    // 0x151B80DC: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x151B80E0: nop

    // 0x151B80E4: mul.s       $f30, $f16, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x151B80E8: nop

    // 0x151B80EC: b           L_151B8108
    // 0x151B80F0: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
        goto L_151B8108;
    // 0x151B80F0: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
L_151B80F4:
    // 0x151B80F4: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x151B80F8: nop

    // 0x151B80FC: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x151B8100: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x151B8104: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
L_151B8108:
    // 0x151B8108: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B810C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B8110: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B8114: nop

    // 0x151B8118: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x151B811C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B8120: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B8124: add.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151B8128: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B812C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B8130: nop

    // 0x151B8134: sh          $t9, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r25;
    // 0x151B8138: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B813C: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B8140: add.s       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x151B8144: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B8148: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151B814C: nop

    // 0x151B8150: sh          $t6, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r14;
    // 0x151B8154: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B8158: sh          $t2, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r10;
    // 0x151B815C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B8160: sh          $zero, 0xA($t8)
    MEM_H(0XA, ctx->r24) = 0;
    // 0x151B8164: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B8168: sb          $a2, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r6;
    // 0x151B816C: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B8170: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x151B8174: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B8178: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B817C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151B8180: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x151B8184: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x151B8188: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B818C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151B8190: nop

    // 0x151B8194: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
    // 0x151B8198: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B819C: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B81A0: sub.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x151B81A4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B81A8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151B81AC: nop

    // 0x151B81B0: sh          $t6, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r14;
    // 0x151B81B4: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B81B8: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B81BC: sub.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f30.fl;
    // 0x151B81C0: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B81C4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151B81C8: nop

    // 0x151B81CC: sh          $t7, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r15;
    // 0x151B81D0: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B81D4: sh          $t3, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r11;
    // 0x151B81D8: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151B81DC: sh          $zero, 0xA($t8)
    MEM_H(0XA, ctx->r24) = 0;
    // 0x151B81E0: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B81E4: sb          $a2, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r6;
    // 0x151B81E8: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151B81EC: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x151B81F0: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x151B81F4: addiu       $t8, $t9, 0x10
    ctx->r24 = ADD32(ctx->r25, 0X10);
    // 0x151B81F8: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x151B81FC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151B8200: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x151B8204: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B8208: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151B820C: addiu       $t6, $t7, -0x40
    ctx->r14 = ADD32(ctx->r15, -0X40);
    // 0x151B8210: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151B8214: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B8218: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151B821C: sw          $ra, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r31;
    // 0x151B8220: bgezl       $a1, L_151B8234
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B8224: lb          $v0, 0x2D($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X2D);
            goto L_151B8234;
    }
    goto skip_0;
    // 0x151B8224: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    skip_0:
    // 0x151B8228: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151B822C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B8230: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
L_151B8234:
    // 0x151B8234: beq         $a0, $v0, L_151B828C
    if (ctx->r4 == ctx->r2) {
        // 0x151B8238: nop
    
            goto L_151B828C;
    }
    // 0x151B8238: nop

    // 0x151B823C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B8240: mflo        $t9
    ctx->r25 = lo;
    // 0x151B8244: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x151B8248: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151B824C: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B8250: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151B8254: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x151B8258: sw          $t6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r14;
    // 0x151B825C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151B8260: mflo        $t9
    ctx->r25 = lo;
    // 0x151B8264: addu        $v1, $t1, $t9
    ctx->r3 = ADD32(ctx->r9, ctx->r25);
    // 0x151B8268: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151B826C: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151B8270: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151B8274: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x151B8278: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x151B827C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151B8280: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151B8284: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    // 0x151B8288: lbu         $a2, 0x10($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X10);
L_151B828C:
    // 0x151B828C: bnel        $a0, $v0, L_151B8018
    if (ctx->r4 != ctx->r2) {
        // 0x151B8290: lwc1        $f10, 0xDC($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_151B8018;
    }
    goto skip_1;
    // 0x151B8290: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    skip_1:
    // 0x151B8294: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B8298:
    // 0x151B8298: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151B829C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151B82A0: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151B82A4: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151B82A8: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151B82AC: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151B82B0: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151B82B4: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x151B82B8: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x151B82BC: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x151B82C0: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x151B82C4: jr          $ra
    // 0x151B82C8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x151B82C8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_15048A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048A70: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x15048A74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15048A78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15048A7C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x15048A80: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x15048A84: nop

    // 0x15048A88: bc1fl       L_15048AA4
    if (!c1cs) {
        // 0x15048A8C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15048AA4;
    }
    goto skip_0;
    // 0x15048A8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x15048A90: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15048A94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15048A98: b           L_15048AC4
    // 0x15048A9C: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
        goto L_15048AC4;
    // 0x15048A9C: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x15048AA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15048AA4:
    // 0x15048AA4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15048AA8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x15048AAC: nop

    // 0x15048AB0: bc1fl       L_15048AC8
    if (!c1cs) {
        // 0x15048AB4: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_15048AC8;
    }
    goto skip_1;
    // 0x15048AB4: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_1:
    // 0x15048AB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15048ABC: nop

    // 0x15048AC0: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
L_15048AC4:
    // 0x15048AC4: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_15048AC8:
    // 0x15048AC8: jr          $ra
    // 0x15048ACC: nop

    return;
    return;
    // 0x15048ACC: nop

;}
RECOMP_FUNC void func_151DDB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DDB94: nor         $v0, $a0, $zero
    ctx->r2 = ~(ctx->r4 | 0);
    // 0x151DDB98: jr          $ra
    // 0x151DDB9C: nop

    return;
    return;
    // 0x151DDB9C: nop

;}
RECOMP_FUNC void func_15044DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15044DA4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15044DA8: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15044DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044DB0: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x15044DB4: bnel        $t6, $zero, L_15044DDC
    if (ctx->r14 != 0) {
        // 0x15044DB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044DDC;
    }
    goto skip_0;
    // 0x15044DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15044DBC: lbu         $t7, 0x125($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X125);
    // 0x15044DC0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15044DC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15044DC8: bnel        $t7, $zero, L_15044DDC
    if (ctx->r15 != 0) {
        // 0x15044DCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044DDC;
    }
    goto skip_1;
    // 0x15044DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15044DD0: jal         0x1505D024
    // 0x15044DD4: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x15044DD4: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    after_0:
    // 0x15044DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15044DDC:
    // 0x15044DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15044DE0: jr          $ra
    // 0x15044DE4: nop

    return;
    return;
    // 0x15044DE4: nop

;}
RECOMP_FUNC void func_15043A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043A00: beq         $a0, $zero, L_15043A18
    if (ctx->r4 == 0) {
        // 0x15043A04: nop
    
            goto L_15043A18;
    }
    // 0x15043A04: nop

    // 0x15043A08: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x15043A0C: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x15043A10: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x15043A14: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
L_15043A18:
    // 0x15043A18: jr          $ra
    // 0x15043A1C: nop

    return;
    return;
    // 0x15043A1C: nop

;}
RECOMP_FUNC void func_1000F568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000F56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000F570: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1000F574: jal         0x150ADA20
    // 0x1000F578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1000F578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000F57C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1000F580: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x1000F584: divu        $zero, $v0, $a1
    lo = S32(U32(ctx->r2) / U32(ctx->r5)); hi = S32(U32(ctx->r2) % U32(ctx->r5));
    // 0x1000F588: mfhi        $a3
    ctx->r7 = hi;
    // 0x1000F58C: slti        $at, $t1, 0x6E2
    ctx->r1 = SIGNED(ctx->r9) < 0X6E2 ? 1 : 0;
    // 0x1000F590: bne         $a1, $zero, L_1000F59C
    if (ctx->r5 != 0) {
        // 0x1000F594: nop
    
            goto L_1000F59C;
    }
    // 0x1000F594: nop

    // 0x1000F598: break       7
    do_break(268498328);
L_1000F59C:
    // 0x1000F59C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x1000F5A0: bnel        $at, $zero, L_1000F5B4
    if (ctx->r1 != 0) {
        // 0x1000F5A4: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_1000F5B4;
    }
    goto skip_0;
    // 0x1000F5A4: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    skip_0:
    // 0x1000F5A8: b           L_1000F6A8
    // 0x1000F5AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000F6A8;
    // 0x1000F5AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000F5B0: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
L_1000F5B4:
    // 0x1000F5B4: beq         $at, $zero, L_1000F5C4
    if (ctx->r1 == 0) {
        // 0x1000F5B8: lui         $t2, 0x8004
        ctx->r10 = S32(0X8004 << 16);
            goto L_1000F5C4;
    }
    // 0x1000F5B8: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x1000F5BC: b           L_1000F6A8
    // 0x1000F5C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_1000F6A8;
    // 0x1000F5C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_1000F5C4:
    // 0x1000F5C4: addiu       $t2, $t2, 0x1F5C
    ctx->r10 = ADD32(ctx->r10, 0X1F5C);
    // 0x1000F5C8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x1000F5CC: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x1000F5D0: beq         $v0, $zero, L_1000F6A4
    if (ctx->r2 == 0) {
        // 0x1000F5D4: addu        $t0, $v0, $t1
        ctx->r8 = ADD32(ctx->r2, ctx->r9);
            goto L_1000F6A4;
    }
    // 0x1000F5D4: addu        $t0, $v0, $t1
    ctx->r8 = ADD32(ctx->r2, ctx->r9);
    // 0x1000F5D8: beq         $at, $zero, L_1000F69C
    if (ctx->r1 == 0) {
        // 0x1000F5DC: lbu         $a0, 0x0($t0)
        ctx->r4 = MEM_BU(ctx->r8, 0X0);
            goto L_1000F69C;
    }
    // 0x1000F5DC: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x1000F5E0: andi        $t6, $a0, 0x80
    ctx->r14 = ctx->r4 & 0X80;
    // 0x1000F5E4: beq         $t6, $zero, L_1000F604
    if (ctx->r14 == 0) {
        // 0x1000F5E8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1000F604;
    }
    // 0x1000F5E8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1000F5EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1000F5F0: sllv        $a2, $t7, $a1
    ctx->r6 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x1000F5F4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x1000F5F8: and         $t8, $a0, $a2
    ctx->r24 = ctx->r4 & ctx->r6;
    // 0x1000F5FC: bnel        $t8, $zero, L_1000F61C
    if (ctx->r24 != 0) {
        // 0x1000F600: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_1000F61C;
    }
    goto skip_1;
    // 0x1000F600: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_1:
L_1000F604:
    // 0x1000F604: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1000F608: sllv        $a2, $t9, $a1
    ctx->r6 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x1000F60C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x1000F610: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1000F614: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1000F618: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_1000F61C:
    // 0x1000F61C: sllv        $t4, $t3, $a3
    ctx->r12 = S32(ctx->r11 << (ctx->r7 & 31));
    // 0x1000F620: and         $t5, $v0, $t4
    ctx->r13 = ctx->r2 & ctx->r12;
    // 0x1000F624: bne         $t5, $zero, L_1000F670
    if (ctx->r13 != 0) {
        // 0x1000F628: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_1000F670;
    }
    // 0x1000F628: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1000F62C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
L_1000F630:
    // 0x1000F630: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x1000F634: mfhi        $v1
    ctx->r3 = hi;
    // 0x1000F638: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1000F63C: sllv        $t8, $t7, $v1
    ctx->r24 = S32(ctx->r15 << (ctx->r3 & 31));
    // 0x1000F640: and         $t9, $v0, $t8
    ctx->r25 = ctx->r2 & ctx->r24;
    // 0x1000F644: bne         $a1, $zero, L_1000F650
    if (ctx->r5 != 0) {
        // 0x1000F648: nop
    
            goto L_1000F650;
    }
    // 0x1000F648: nop

    // 0x1000F64C: break       7
    do_break(268498508);
L_1000F650:
    // 0x1000F650: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000F654: bne         $a1, $at, L_1000F668
    if (ctx->r5 != ctx->r1) {
        // 0x1000F658: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000F668;
    }
    // 0x1000F658: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1000F65C: bne         $t6, $at, L_1000F668
    if (ctx->r14 != ctx->r1) {
        // 0x1000F660: nop
    
            goto L_1000F668;
    }
    // 0x1000F660: nop

    // 0x1000F664: break       6
    do_break(268498532);
L_1000F668:
    // 0x1000F668: beql        $t9, $zero, L_1000F630
    if (ctx->r25 == 0) {
        // 0x1000F66C: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_1000F630;
    }
    goto skip_2;
    // 0x1000F66C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    skip_2:
L_1000F670:
    // 0x1000F670: sllv        $t4, $t3, $v1
    ctx->r12 = S32(ctx->r11 << (ctx->r3 & 31));
    // 0x1000F674: xor         $a0, $v0, $t4
    ctx->r4 = ctx->r2 ^ ctx->r12;
    // 0x1000F678: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x1000F67C: and         $t6, $t5, $a2
    ctx->r14 = ctx->r13 & ctx->r6;
    // 0x1000F680: bne         $t6, $zero, L_1000F6A4
    if (ctx->r14 != 0) {
        // 0x1000F684: sb          $a0, 0x0($t0)
        MEM_B(0X0, ctx->r8) = ctx->r4;
            goto L_1000F6A4;
    }
    // 0x1000F684: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x1000F688: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x1000F68C: xor         $t7, $v0, $a2
    ctx->r15 = ctx->r2 ^ ctx->r6;
    // 0x1000F690: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x1000F694: b           L_1000F6A4
    // 0x1000F698: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
        goto L_1000F6A4;
    // 0x1000F698: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_1000F69C:
    // 0x1000F69C: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x1000F6A0: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
L_1000F6A4:
    // 0x1000F6A4: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
L_1000F6A8:
    // 0x1000F6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000F6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000F6B0: jr          $ra
    // 0x1000F6B4: nop

    return;
    return;
    // 0x1000F6B4: nop

;}
RECOMP_FUNC void func_15071764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071764: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15071768: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1507176C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15071770: jal         0x15083E90
    // 0x15071774: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x15071774: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x15071778: beq         $v0, $zero, L_150717D0
    if (ctx->r2 == 0) {
        // 0x1507177C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150717D0;
    }
    // 0x1507177C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15071780: jal         0x150F0BEC
    // 0x15071784: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_150F0BEC(rdram, ctx);
        goto after_1;
    // 0x15071784: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x15071788: jal         0x150F10D4
    // 0x1507178C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_150F10D4(rdram, ctx);
        goto after_2;
    // 0x1507178C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x15071790: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x15071794: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15071798: addiu       $t8, $zero, 0x82
    ctx->r24 = ADD32(0, 0X82);
    // 0x1507179C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150717A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150717A4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150717A8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150717AC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150717B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150717B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150717B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x150717BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150717C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150717C4: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x150717C8: jal         0x15161E24
    // 0x150717CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_15161E24(rdram, ctx);
        goto after_3;
    // 0x150717CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
L_150717D0:
    // 0x150717D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150717D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150717D8: jr          $ra
    // 0x150717DC: nop

    return;
    return;
    // 0x150717DC: nop

;}
RECOMP_FUNC void func_15010538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010538: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1501053C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15010540: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15010544: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x15010548: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x1501054C: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x15010550: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15010554: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15010558: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1501055C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x15010560: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15010564: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15010568: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1501056C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15010570: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15010574: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x15010578: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1501057C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15010580: jal         0x15161E24
    // 0x15010584: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_15161E24(rdram, ctx);
        goto after_0;
    // 0x15010584: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_0:
    // 0x15010588: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x1501058C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x15010590: lbu         $t2, 0x3B($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3B);
    // 0x15010594: addiu       $t3, $zero, 0x3D
    ctx->r11 = ADD32(0, 0X3D);
    // 0x15010598: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x1501059C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150105A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150105A4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150105A8: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150105AC: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x150105B0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150105B4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150105B8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150105BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150105C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150105C4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150105C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150105CC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x150105D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150105D4: jal         0x15149130
    // 0x150105D8: sb          $t2, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r10;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x150105D8: sb          $t2, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r10;
    after_1:
    // 0x150105DC: beq         $v0, $zero, L_150105F0
    if (ctx->r2 == 0) {
        // 0x150105E0: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150105F0;
    }
    // 0x150105E0: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150105E4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150105E8: jal         0x10022EC0
    // 0x150105EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150105EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_150105F0:
    // 0x150105F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150105F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150105F8: jr          $ra
    // 0x150105FC: nop

    return;
    return;
    // 0x150105FC: nop

;}
RECOMP_FUNC void func_15102D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102D90: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15102D94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15102D98: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15102D9C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15102DA0: lbu         $t6, 0x124($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X124);
    // 0x15102DA4: lw          $s1, 0x110($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X110);
    // 0x15102DA8: lbu         $t8, 0x114($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X114);
    // 0x15102DAC: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x15102DB0: sb          $t7, 0x124($a0)
    MEM_B(0X124, ctx->r4) = ctx->r15;
    // 0x15102DB4: lbu         $t9, 0x3B($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X3B);
    // 0x15102DB8: bne         $t8, $t9, L_15102DCC
    if (ctx->r24 != ctx->r25) {
        // 0x15102DBC: nop
    
            goto L_15102DCC;
    }
    // 0x15102DBC: nop

    // 0x15102DC0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x15102DC4: bnel        $t0, $zero, L_15102DD8
    if (ctx->r8 != 0) {
        // 0x15102DC8: lw          $t1, 0x1D4($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X1D4);
            goto L_15102DD8;
    }
    goto skip_0;
    // 0x15102DC8: lw          $t1, 0x1D4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1D4);
    skip_0:
L_15102DCC:
    // 0x15102DCC: b           L_15102EA4
    // 0x15102DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102EA4;
    // 0x15102DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15102DD4: lw          $t1, 0x1D4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X1D4);
L_15102DD8:
    // 0x15102DD8: beq         $t1, $zero, L_15102DF8
    if (ctx->r9 == 0) {
        // 0x15102DDC: nop
    
            goto L_15102DF8;
    }
    // 0x15102DDC: nop

    // 0x15102DE0: lbu         $t2, 0x74($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X74);
    // 0x15102DE4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15102DE8: addiu       $t4, $a0, 0x34
    ctx->r12 = ADD32(ctx->r4, 0X34);
    // 0x15102DEC: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x15102DF0: bne         $t3, $at, L_15102E00
    if (ctx->r11 != ctx->r1) {
        // 0x15102DF4: addiu       $t5, $a0, 0x40
        ctx->r13 = ADD32(ctx->r4, 0X40);
            goto L_15102E00;
    }
    // 0x15102DF4: addiu       $t5, $a0, 0x40
    ctx->r13 = ADD32(ctx->r4, 0X40);
L_15102DF8:
    // 0x15102DF8: b           L_15102EA4
    // 0x15102DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15102EA4;
    // 0x15102DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15102E00:
    // 0x15102E00: addiu       $s0, $a0, 0x110
    ctx->r16 = ADD32(ctx->r4, 0X110);
    // 0x15102E04: addiu       $t6, $s0, 0x18
    ctx->r14 = ADD32(ctx->r16, 0X18);
    // 0x15102E08: addiu       $t7, $s0, 0x24
    ctx->r15 = ADD32(ctx->r16, 0X24);
    // 0x15102E0C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x15102E10: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x15102E14: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x15102E18: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x15102E1C: lh          $a1, 0xC($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XC);
    // 0x15102E20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15102E24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15102E28: beql        $a1, $at, L_15102E7C
    if (ctx->r5 == ctx->r1) {
        // 0x15102E2C: lw          $t0, 0x1D4($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X1D4);
            goto L_15102E7C;
    }
    goto skip_1;
    // 0x15102E2C: lw          $t0, 0x1D4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1D4);
    skip_1:
    // 0x15102E30: jal         0x1503195C
    // 0x15102E34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x15102E34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15102E38: bne         $v0, $zero, L_15102E48
    if (ctx->r2 != 0) {
        // 0x15102E3C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_15102E48;
    }
    // 0x15102E3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15102E40: b           L_15102EA4
    // 0x15102E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102EA4;
    // 0x15102E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15102E48:
    // 0x15102E48: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x15102E4C: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x15102E50: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x15102E54: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15102E58: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15102E5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15102E60: jal         0x1514654C
    // 0x15102E64: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_1514654C(rdram, ctx);
        goto after_1;
    // 0x15102E64: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x15102E68: bnel        $v0, $zero, L_15102E98
    if (ctx->r2 != 0) {
        // 0x15102E6C: lbu         $t2, 0x14($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X14);
            goto L_15102E98;
    }
    goto skip_2;
    // 0x15102E6C: lbu         $t2, 0x14($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X14);
    skip_2:
    // 0x15102E70: b           L_15102EA4
    // 0x15102E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15102EA4;
    // 0x15102E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15102E78: lw          $t0, 0x1D4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1D4);
L_15102E7C:
    // 0x15102E7C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x15102E80: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15102E84: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x15102E88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15102E8C: jal         0x15145EA4
    // 0x15102E90: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    func_15145EA4(rdram, ctx);
        goto after_2;
    // 0x15102E90: addu        $a2, $t0, $t1
    ctx->r6 = ADD32(ctx->r8, ctx->r9);
    after_2:
    // 0x15102E94: lbu         $t2, 0x14($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X14);
L_15102E98:
    // 0x15102E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15102E9C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x15102EA0: sb          $t3, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r11;
L_15102EA4:
    // 0x15102EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15102EA8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15102EAC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15102EB0: jr          $ra
    // 0x15102EB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15102EB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_10010344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010344: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x10010348: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1001034C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x10010350: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x10010354: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x10010358: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1001035C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x10010360: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x10010364: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x10010368: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1001036C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x10010370: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x10010374: beq         $v0, $zero, L_10010384
    if (ctx->r2 == 0) {
        // 0x10010378: nop
    
            goto L_10010384;
    }
    // 0x10010378: nop

    // 0x1001037C: bne         $v0, $at, L_1001038C
    if (ctx->r2 != ctx->r1) {
        // 0x10010380: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_1001038C;
    }
    // 0x10010380: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_10010384:
    // 0x10010384: b           L_10010544
    // 0x10010388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10010544;
    // 0x10010388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001038C:
    // 0x1001038C: bgez        $t8, L_1001039C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x10010390: negu        $t9, $t8
        ctx->r25 = SUB32(0, ctx->r24);
            goto L_1001039C;
    }
    // 0x10010390: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x10010394: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x10010398: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
L_1001039C:
    // 0x1001039C: lw          $t1, 0x318($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X318);
    // 0x100103A0: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x100103A4: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x100103A8: beq         $t1, $zero, L_10010418
    if (ctx->r9 == 0) {
        // 0x100103AC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_10010418;
    }
    // 0x100103AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x100103B0: lw          $t0, 0x184($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X184);
    // 0x100103B4: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x100103B8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x100103BC: srl         $t2, $t0, 3
    ctx->r10 = S32(U32(ctx->r8) >> 3);
    // 0x100103C0: andi        $t3, $t2, 0x30
    ctx->r11 = ctx->r10 & 0X30;
    // 0x100103C4: lbu         $v0, 0x1FD9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1FD9);
    // 0x100103C8: beq         $v1, $zero, L_100103EC
    if (ctx->r3 == 0) {
        // 0x100103CC: sll         $t0, $t3, 1
        ctx->r8 = S32(ctx->r11 << 1);
            goto L_100103EC;
    }
    // 0x100103CC: sll         $t0, $t3, 1
    ctx->r8 = S32(ctx->r11 << 1);
    // 0x100103D0: lbu         $t5, 0x94($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X94);
    // 0x100103D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x100103D8: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x100103DC: bnel        $t5, $at, L_100103F0
    if (ctx->r13 != ctx->r1) {
        // 0x100103E0: lhu         $a0, 0x8C($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8C);
            goto L_100103F0;
    }
    goto skip_0;
    // 0x100103E0: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    skip_0:
    // 0x100103E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x100103E8: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
L_100103EC:
    // 0x100103EC: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
L_100103F0:
    // 0x100103F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x100103F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x100103F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x100103FC: lhu         $a1, 0x5A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5A);
    // 0x10010400: lhu         $a2, 0x62($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X62);
    // 0x10010404: jal         0x10010BE8
    // 0x10010408: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_10010BE8(rdram, ctx);
        goto after_0;
    // 0x10010408: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x1001040C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x10010410: b           L_10010540
    // 0x10010414: sh          $v1, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r3;
        goto L_10010540;
    // 0x10010414: sh          $v1, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r3;
L_10010418:
    // 0x10010418: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x1001041C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x10010420: or          $t7, $a3, $zero
    ctx->r15 = ctx->r7 | 0;
    // 0x10010424: bnel        $v0, $at, L_10010458
    if (ctx->r2 != ctx->r1) {
        // 0x10010428: addiu       $at, $zero, 0x8A
        ctx->r1 = ADD32(0, 0X8A);
            goto L_10010458;
    }
    goto skip_1;
    // 0x10010428: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    skip_1:
    // 0x1001042C: lhu         $v0, 0x6A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X6A);
    // 0x10010430: sll         $t8, $t7, 17
    ctx->r24 = S32(ctx->r15 << 17);
    // 0x10010434: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x10010438: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x1001043C: beql        $at, $zero, L_10010498
    if (ctx->r1 == 0) {
        // 0x10010440: lbu         $a2, 0x3B($s0)
        ctx->r6 = MEM_BU(ctx->r16, 0X3B);
            goto L_10010498;
    }
    goto skip_2;
    // 0x10010440: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    skip_2:
    // 0x10010444: addiu       $a3, $v0, -0xC8
    ctx->r7 = ADD32(ctx->r2, -0XC8);
    // 0x10010448: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x1001044C: b           L_10010494
    // 0x10010450: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
        goto L_10010494;
    // 0x10010450: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x10010454: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
L_10010458:
    // 0x10010458: bnel        $v0, $at, L_1001047C
    if (ctx->r2 != ctx->r1) {
        // 0x1001045C: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_1001047C;
    }
    goto skip_3;
    // 0x1001045C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    skip_3:
    // 0x10010460: lbu         $t3, 0x13C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X13C);
    // 0x10010464: ori         $t4, $v1, 0x100
    ctx->r12 = ctx->r3 | 0X100;
    // 0x10010468: beql        $t3, $zero, L_1001047C
    if (ctx->r11 == 0) {
        // 0x1001046C: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_1001047C;
    }
    goto skip_4;
    // 0x1001046C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    skip_4:
    // 0x10010470: b           L_10010494
    // 0x10010474: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_10010494;
    // 0x10010474: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x10010478: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
L_1001047C:
    // 0x1001047C: beq         $v0, $at, L_10010490
    if (ctx->r2 == ctx->r1) {
        // 0x10010480: ori         $t5, $v1, 0x4
        ctx->r13 = ctx->r3 | 0X4;
            goto L_10010490;
    }
    // 0x10010480: ori         $t5, $v1, 0x4
    ctx->r13 = ctx->r3 | 0X4;
    // 0x10010484: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x10010488: bnel        $v0, $at, L_10010498
    if (ctx->r2 != ctx->r1) {
        // 0x1001048C: lbu         $a2, 0x3B($s0)
        ctx->r6 = MEM_BU(ctx->r16, 0X3B);
            goto L_10010498;
    }
    goto skip_5;
    // 0x1001048C: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    skip_5:
L_10010490:
    // 0x10010490: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_10010494:
    // 0x10010494: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
L_10010498:
    // 0x10010498: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1001049C: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    // 0x100104A0: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x100104A4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x100104A8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x100104AC: jal         0x1000FD38
    // 0x100104B0: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x100104B0: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    after_1:
    // 0x100104B4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x100104B8: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x100104BC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x100104C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x100104C4: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x100104C8: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x100104CC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x100104D0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x100104D4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x100104D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x100104DC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x100104E0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x100104E4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x100104E8: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x100104EC: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x100104F0: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x100104F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x100104F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x100104FC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x10010500: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x10010504: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x10010508: lbu         $t2, 0x3B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3B);
    // 0x1001050C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x10010510: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x10010514: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x10010518: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x1001051C: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x10010520: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x10010524: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x10010528: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1001052C: lhu         $a0, 0x5A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5A);
    // 0x10010530: jal         0x1000FA64
    // 0x10010534: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_1000FA64(rdram, ctx);
        goto after_2;
    // 0x10010534: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x10010538: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1001053C: sh          $v1, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r3;
L_10010540:
    // 0x10010540: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_10010544:
    // 0x10010544: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x10010548: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1001054C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x10010550: jr          $ra
    // 0x10010554: nop

    return;
    return;
    // 0x10010554: nop

;}
RECOMP_FUNC void func_1506EEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EEAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506EEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506EEB4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506EEB8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506EEBC: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x1506EEC0: jal         0x151898C0
    // 0x1506EEC4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_151898C0(rdram, ctx);
        goto after_0;
    // 0x1506EEC4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506EEC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506EED0: jr          $ra
    // 0x1506EED4: nop

    return;
    return;
    // 0x1506EED4: nop

;}
RECOMP_FUNC void func_150028BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150028BC: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x150028C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150028C4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150028C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150028CC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150028D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150028D4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150028D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150028DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150028E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150028E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150028E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150028EC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150028F0: addiu       $t6, $t6, 0x5C08
    ctx->r14 = ADD32(ctx->r14, 0X5C08);
    // 0x150028F4: sll         $s3, $s4, 2
    ctx->r19 = S32(ctx->r20 << 2);
    // 0x150028F8: addu        $fp, $s3, $t6
    ctx->r30 = ADD32(ctx->r19, ctx->r14);
    // 0x150028FC: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x15002900: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15002904: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x15002908: beq         $t7, $zero, L_15002918
    if (ctx->r15 == 0) {
        // 0x1500290C: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_15002918;
    }
    // 0x1500290C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15002910: b           L_15002F10
    // 0x15002914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15002F10;
    // 0x15002914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15002918:
    // 0x15002918: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1500291C: addiu       $t8, $t8, 0x4488
    ctx->r24 = ADD32(ctx->r24, 0X4488);
    // 0x15002920: addu        $s7, $s3, $t8
    ctx->r23 = ADD32(ctx->r19, ctx->r24);
    // 0x15002924: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x15002928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500292C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15002930: addiu       $s1, $zero, -0x21
    ctx->r17 = ADD32(0, -0X21);
    // 0x15002934: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_15002938:
    // 0x15002938: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1500293C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15002940: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x15002944: lb          $t9, 0x0($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X0);
    // 0x15002948: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1500294C: beq         $s1, $t9, L_15002978
    if (ctx->r17 == ctx->r25) {
        // 0x15002950: nop
    
            goto L_15002978;
    }
    // 0x15002950: nop

    // 0x15002954: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
L_15002958:
    // 0x15002958: bne         $s0, $v0, L_15002964
    if (ctx->r16 != ctx->r2) {
        // 0x1500295C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_15002964;
    }
    // 0x1500295C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15002960: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_15002964:
    // 0x15002964: sll         $t6, $s5, 3
    ctx->r14 = S32(ctx->r21 << 3);
    // 0x15002968: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1500296C: lb          $v0, 0x0($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X0);
    // 0x15002970: bne         $s1, $v0, L_15002958
    if (ctx->r17 != ctx->r2) {
        // 0x15002974: nop
    
            goto L_15002958;
    }
    // 0x15002974: nop

L_15002978:
    // 0x15002978: bne         $at, $zero, L_15002938
    if (ctx->r1 != 0) {
        // 0x1500297C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_15002938;
    }
    // 0x1500297C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15002980: sll         $a0, $t5, 2
    ctx->r4 = S32(ctx->r13 << 2);
    // 0x15002984: subu        $a0, $a0, $t5
    ctx->r4 = SUB32(ctx->r4, ctx->r13);
    // 0x15002988: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x1500298C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15002990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15002994: jal         0x10003C40
    // 0x15002998: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15002998: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1500299C: bne         $v0, $zero, L_150029AC
    if (ctx->r2 != 0) {
        // 0x150029A0: sw          $v0, 0x0($fp)
        MEM_W(0X0, ctx->r30) = ctx->r2;
            goto L_150029AC;
    }
    // 0x150029A0: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x150029A4: b           L_15002F10
    // 0x150029A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15002F10;
    // 0x150029A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150029AC:
    // 0x150029AC: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x150029B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150029B4: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x150029B8: lhu         $a0, 0x5918($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5918);
    // 0x150029BC: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x150029C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150029C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150029C8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150029CC: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    // 0x150029D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150029D4: jal         0x10003C40
    // 0x150029D8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x150029D8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x150029DC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150029E0: addiu       $t7, $t7, 0x6070
    ctx->r15 = ADD32(ctx->r15, 0X6070);
    // 0x150029E4: addu        $t2, $s3, $t7
    ctx->r10 = ADD32(ctx->r19, ctx->r15);
    // 0x150029E8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x150029EC: sw          $s2, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r18;
    // 0x150029F0: bne         $v0, $zero, L_15002A0C
    if (ctx->r2 != 0) {
        // 0x150029F4: sw          $s7, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r23;
            goto L_15002A0C;
    }
    // 0x150029F4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150029F8: jal         0x10004074
    // 0x150029FC: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x150029FC: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    after_2:
    // 0x15002A00: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
    // 0x15002A04: b           L_15002F10
    // 0x15002A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15002F10;
    // 0x15002A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15002A0C:
    // 0x15002A0C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15002A10: addu        $t8, $t8, $s3
    ctx->r24 = ADD32(ctx->r24, ctx->r19);
    // 0x15002A14: lw          $t8, 0x19A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X19A0);
    // 0x15002A18: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15002A1C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15002A20: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x15002A24: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x15002A28: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x15002A2C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x15002A30: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x15002A34: addiu       $t4, $sp, 0x84
    ctx->r12 = ADD32(ctx->r29, 0X84);
    // 0x15002A38: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15002A3C: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x15002A40: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
L_15002A44:
    // 0x15002A44: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x15002A48: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x15002A4C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x15002A50: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x15002A54: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x15002A58: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15002A5C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15002A60: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x15002A64: sw          $v0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r2;
    // 0x15002A68: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x15002A6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15002A70: beql        $t8, $at, L_15002E38
    if (ctx->r24 == ctx->r1) {
        // 0x15002A74: lw          $t8, 0x13C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X13C);
            goto L_15002E38;
    }
    goto skip_0;
    // 0x15002A74: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    skip_0:
    // 0x15002A78: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
L_15002A7C:
    // 0x15002A7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15002A80: sll         $ra, $s7, 2
    ctx->r31 = S32(ctx->r23 << 2);
    // 0x15002A84: bne         $v0, $s0, L_15002BE8
    if (ctx->r2 != ctx->r16) {
        // 0x15002A88: addiu       $at, $zero, 0xDA
        ctx->r1 = ADD32(0, 0XDA);
            goto L_15002BE8;
    }
    // 0x15002A88: addiu       $at, $zero, 0xDA
    ctx->r1 = ADD32(0, 0XDA);
    // 0x15002A8C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x15002A90: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x15002A94: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x15002A98: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15002A9C: sra         $t5, $v0, 12
    ctx->r13 = S32(SIGNED(ctx->r2) >> 12);
    // 0x15002AA0: andi        $t9, $t5, 0xFF
    ctx->r25 = ctx->r13 & 0XFF;
    // 0x15002AA4: sra         $a2, $v0, 1
    ctx->r6 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15002AA8: addiu       $s4, $a1, -0x38
    ctx->r20 = ADD32(ctx->r5, -0X38);
    // 0x15002AAC: andi        $t6, $a2, 0x7F
    ctx->r14 = ctx->r6 & 0X7F;
    // 0x15002AB0: and         $t7, $s4, $at
    ctx->r15 = ctx->r20 & ctx->r1;
    // 0x15002AB4: subu        $ra, $ra, $s7
    ctx->r31 = SUB32(ctx->r31, ctx->r23);
    // 0x15002AB8: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    // 0x15002ABC: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x15002AC0: subu        $a2, $t6, $t9
    ctx->r6 = SUB32(ctx->r14, ctx->r25);
    // 0x15002AC4: addiu       $a0, $a0, -0x38
    ctx->r4 = ADD32(ctx->r4, -0X38);
    // 0x15002AC8: srl         $s4, $t7, 4
    ctx->r20 = S32(U32(ctx->r15) >> 4);
    // 0x15002ACC: blez        $t9, L_15002B64
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15002AD0: sll         $ra, $ra, 2
        ctx->r31 = S32(ctx->r31 << 2);
            goto L_15002B64;
    }
    // 0x15002AD0: sll         $ra, $ra, 2
    ctx->r31 = S32(ctx->r31 << 2);
    // 0x15002AD4: andi        $a3, $t9, 0x3
    ctx->r7 = ctx->r25 & 0X3;
    // 0x15002AD8: beq         $a3, $zero, L_15002B0C
    if (ctx->r7 == 0) {
        // 0x15002ADC: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_15002B0C;
    }
    // 0x15002ADC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15002AE0: sll         $t9, $zero, 2
    ctx->r25 = S32(0 << 2);
    // 0x15002AE4: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x15002AE8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x15002AEC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_15002AF0:
    // 0x15002AF0: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x15002AF4: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x15002AF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15002AFC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15002B00: bne         $a1, $v1, L_15002AF0
    if (ctx->r5 != ctx->r3) {
        // 0x15002B04: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_15002AF0;
    }
    // 0x15002B04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15002B08: beq         $v1, $t5, L_15002B64
    if (ctx->r3 == ctx->r13) {
        // 0x15002B0C: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_15002B64;
    }
L_15002B0C:
    // 0x15002B0C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15002B10: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x15002B14: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15002B18: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_15002B1C:
    // 0x15002B1C: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x15002B20: addu        $t6, $t9, $a0
    ctx->r14 = ADD32(ctx->r25, ctx->r4);
    // 0x15002B24: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x15002B28: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15002B2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15002B30: addiu       $t6, $v1, 0x2
    ctx->r14 = ADD32(ctx->r3, 0X2);
    // 0x15002B34: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x15002B38: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x15002B3C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x15002B40: addiu       $t9, $v1, 0x3
    ctx->r25 = ADD32(ctx->r3, 0X3);
    // 0x15002B44: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x15002B48: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x15002B4C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x15002B50: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15002B54: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x15002B58: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x15002B5C: bne         $v1, $t5, L_15002B1C
    if (ctx->r3 != ctx->r13) {
        // 0x15002B60: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15002B1C;
    }
    // 0x15002B60: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_15002B64:
    // 0x15002B64: beq         $s7, $zero, L_15002BAC
    if (ctx->r23 == 0) {
        // 0x15002B68: lw          $t9, 0x110($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X110);
            goto L_15002BAC;
    }
    // 0x15002B68: lw          $t9, 0x110($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X110);
    // 0x15002B6C: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x15002B70: sll         $t6, $s4, 4
    ctx->r14 = S32(ctx->r20 << 4);
    // 0x15002B74: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x15002B78: addu        $v0, $t8, $ra
    ctx->r2 = ADD32(ctx->r24, ctx->r31);
    // 0x15002B7C: lw          $v1, -0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X8);
    // 0x15002B80: lw          $t9, -0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, -0XC);
    // 0x15002B84: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x15002B88: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x15002B8C: bnel        $t7, $t6, L_15002BB0
    if (ctx->r15 != ctx->r14) {
        // 0x15002B90: lw          $t6, 0x110($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X110);
            goto L_15002BB0;
    }
    goto skip_1;
    // 0x15002B90: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    skip_1:
    // 0x15002B94: lw          $t8, -0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X4);
    // 0x15002B98: addu        $t9, $v1, $t5
    ctx->r25 = ADD32(ctx->r3, ctx->r13);
    // 0x15002B9C: bnel        $s6, $t8, L_15002BB0
    if (ctx->r22 != ctx->r24) {
        // 0x15002BA0: lw          $t6, 0x110($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X110);
            goto L_15002BB0;
    }
    goto skip_2;
    // 0x15002BA0: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    skip_2:
    // 0x15002BA4: b           L_15002E0C
    // 0x15002BA8: sw          $t9, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r25;
        goto L_15002E0C;
    // 0x15002BA8: sw          $t9, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r25;
L_15002BAC:
    // 0x15002BAC: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
L_15002BB0:
    // 0x15002BB0: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x15002BB4: sll         $t7, $s4, 4
    ctx->r15 = S32(ctx->r20 << 4);
    // 0x15002BB8: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x15002BBC: addu        $t7, $t9, $ra
    ctx->r15 = ADD32(ctx->r25, ctx->r31);
    // 0x15002BC0: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x15002BC4: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x15002BC8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x15002BCC: addu        $t9, $t6, $ra
    ctx->r25 = ADD32(ctx->r14, ctx->r31);
    // 0x15002BD0: sw          $s6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r22;
    // 0x15002BD4: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x15002BD8: addu        $t7, $t8, $ra
    ctx->r15 = ADD32(ctx->r24, ctx->r31);
    // 0x15002BDC: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x15002BE0: b           L_15002E10
    // 0x15002BE4: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
        goto L_15002E10;
    // 0x15002BE4: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
L_15002BE8:
    // 0x15002BE8: bnel        $v0, $at, L_15002C0C
    if (ctx->r2 != ctx->r1) {
        // 0x15002BEC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_15002C0C;
    }
    goto skip_3;
    // 0x15002BEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_3:
    // 0x15002BF0: lw          $s6, 0x4($a3)
    ctx->r22 = MEM_W(ctx->r7, 0X4);
    // 0x15002BF4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x15002BF8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15002BFC: and         $t6, $s6, $at
    ctx->r14 = ctx->r22 & ctx->r1;
    // 0x15002C00: b           L_15002E0C
    // 0x15002C04: srl         $s6, $t6, 6
    ctx->r22 = S32(U32(ctx->r14) >> 6);
        goto L_15002E0C;
    // 0x15002C04: srl         $s6, $t6, 6
    ctx->r22 = S32(U32(ctx->r14) >> 6);
    // 0x15002C08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_15002C0C:
    // 0x15002C0C: bne         $v0, $at, L_15002C60
    if (ctx->r2 != ctx->r1) {
        // 0x15002C10: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15002C60;
    }
    // 0x15002C10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15002C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15002C18:
    // 0x15002C18: addu        $t8, $a3, $v1
    ctx->r24 = ADD32(ctx->r7, ctx->r3);
    // 0x15002C1C: lbu         $a0, 0x1($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X1);
    // 0x15002C20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15002C24: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x15002C28: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x15002C2C: addu        $t9, $t1, $t6
    ctx->r25 = ADD32(ctx->r9, ctx->r14);
    // 0x15002C30: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x15002C34: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x15002C38: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x15002C3C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x15002C40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15002C44: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x15002C48: addu        $t7, $t9, $v0
    ctx->r15 = ADD32(ctx->r25, ctx->r2);
    // 0x15002C4C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15002C50: bne         $v1, $t3, L_15002C18
    if (ctx->r3 != ctx->r11) {
        // 0x15002C54: sw          $t8, 0x0($t7)
        MEM_W(0X0, ctx->r15) = ctx->r24;
            goto L_15002C18;
    }
    // 0x15002C54: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x15002C58: b           L_15002E0C
    // 0x15002C5C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
        goto L_15002E0C;
    // 0x15002C5C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_15002C60:
    // 0x15002C60: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15002C64: bne         $v0, $at, L_15002CD0
    if (ctx->r2 != ctx->r1) {
        // 0x15002C68: sra         $t8, $v0, 4
        ctx->r24 = S32(SIGNED(ctx->r2) >> 4);
            goto L_15002CD0;
    }
    // 0x15002C68: sra         $t8, $v0, 4
    ctx->r24 = S32(SIGNED(ctx->r2) >> 4);
    // 0x15002C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_15002C70:
    // 0x15002C70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15002C74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15002C78: addu        $a1, $a3, $a2
    ctx->r5 = ADD32(ctx->r7, ctx->r6);
L_15002C7C:
    // 0x15002C7C: addu        $t6, $a1, $v1
    ctx->r14 = ADD32(ctx->r5, ctx->r3);
    // 0x15002C80: lbu         $a0, 0x1($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X1);
    // 0x15002C84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15002C88: sra         $t9, $a0, 1
    ctx->r25 = S32(SIGNED(ctx->r4) >> 1);
    // 0x15002C8C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x15002C90: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x15002C94: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x15002C98: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x15002C9C: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x15002CA0: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x15002CA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15002CA8: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x15002CAC: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x15002CB0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15002CB4: bne         $v1, $t3, L_15002C7C
    if (ctx->r3 != ctx->r11) {
        // 0x15002CB8: sw          $t6, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->r14;
            goto L_15002C7C;
    }
    // 0x15002CB8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x15002CBC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x15002CC0: bne         $a2, $s1, L_15002C70
    if (ctx->r6 != ctx->r17) {
        // 0x15002CC4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_15002C70;
    }
    // 0x15002CC4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15002CC8: b           L_15002E10
    // 0x15002CCC: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
        goto L_15002E10;
    // 0x15002CCC: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
L_15002CD0:
    // 0x15002CD0: bne         $s0, $t8, L_15002E0C
    if (ctx->r16 != ctx->r24) {
        // 0x15002CD4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15002E0C;
    }
    // 0x15002CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15002CD8:
    // 0x15002CD8: bne         $a0, $zero, L_15002D14
    if (ctx->r4 != 0) {
        // 0x15002CDC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15002D14;
    }
    // 0x15002CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15002CE0: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x15002CE4: sra         $t6, $t7, 25
    ctx->r14 = S32(SIGNED(ctx->r15) >> 25);
    // 0x15002CE8: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x15002CEC: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x15002CF0: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x15002CF4: sra         $t7, $t8, 20
    ctx->r15 = S32(SIGNED(ctx->r24) >> 20);
    // 0x15002CF8: andi        $t6, $t7, 0x1F
    ctx->r14 = ctx->r15 & 0X1F;
    // 0x15002CFC: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x15002D00: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x15002D04: sra         $t8, $t9, 15
    ctx->r24 = S32(SIGNED(ctx->r25) >> 15);
    // 0x15002D08: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x15002D0C: b           L_15002DC4
    // 0x15002D10: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
        goto L_15002DC4;
    // 0x15002D10: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
L_15002D14:
    // 0x15002D14: bne         $a0, $s0, L_15002D4C
    if (ctx->r4 != ctx->r16) {
        // 0x15002D18: nop
    
            goto L_15002D4C;
    }
    // 0x15002D18: nop

    // 0x15002D1C: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x15002D20: sra         $t9, $t6, 10
    ctx->r25 = S32(SIGNED(ctx->r14) >> 10);
    // 0x15002D24: andi        $t8, $t9, 0x1F
    ctx->r24 = ctx->r25 & 0X1F;
    // 0x15002D28: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x15002D2C: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x15002D30: sra         $t6, $t7, 5
    ctx->r14 = S32(SIGNED(ctx->r15) >> 5);
    // 0x15002D34: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x15002D38: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x15002D3C: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x15002D40: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x15002D44: b           L_15002DC4
    // 0x15002D48: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
        goto L_15002DC4;
    // 0x15002D48: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
L_15002D4C:
    // 0x15002D4C: bnel        $a0, $s3, L_15002D88
    if (ctx->r4 != ctx->r19) {
        // 0x15002D50: lw          $t6, 0x0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0X0);
            goto L_15002D88;
    }
    goto skip_4;
    // 0x15002D50: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    skip_4:
    // 0x15002D54: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x15002D58: sra         $t9, $t6, 10
    ctx->r25 = S32(SIGNED(ctx->r14) >> 10);
    // 0x15002D5C: andi        $t8, $t9, 0x1F
    ctx->r24 = ctx->r25 & 0X1F;
    // 0x15002D60: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x15002D64: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x15002D68: sra         $t6, $t7, 5
    ctx->r14 = S32(SIGNED(ctx->r15) >> 5);
    // 0x15002D6C: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x15002D70: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x15002D74: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x15002D78: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x15002D7C: b           L_15002DC4
    // 0x15002D80: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
        goto L_15002DC4;
    // 0x15002D80: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x15002D84: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
L_15002D88:
    // 0x15002D88: sra         $t9, $t6, 23
    ctx->r25 = S32(SIGNED(ctx->r14) >> 23);
    // 0x15002D8C: andi        $t8, $t9, 0x1F
    ctx->r24 = ctx->r25 & 0X1F;
    // 0x15002D90: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x15002D94: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x15002D98: sra         $t6, $t7, 18
    ctx->r14 = S32(SIGNED(ctx->r15) >> 18);
    // 0x15002D9C: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x15002DA0: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x15002DA4: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x15002DA8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x15002DAC: sra         $t7, $t8, 30
    ctx->r15 = S32(SIGNED(ctx->r24) >> 30);
    // 0x15002DB0: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x15002DB4: sra         $t8, $t9, 13
    ctx->r24 = S32(SIGNED(ctx->r25) >> 13);
    // 0x15002DB8: andi        $t7, $t8, 0x1C
    ctx->r15 = ctx->r24 & 0X1C;
    // 0x15002DBC: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x15002DC0: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
L_15002DC4:
    // 0x15002DC4: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_15002DC8:
    // 0x15002DC8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15002DCC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15002DD0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15002DD4: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x15002DD8: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x15002DDC: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x15002DE0: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x15002DE4: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x15002DE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15002DEC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x15002DF0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15002DF4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15002DF8: bne         $v1, $t4, L_15002DC8
    if (ctx->r3 != ctx->r12) {
        // 0x15002DFC: sw          $t9, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r25;
            goto L_15002DC8;
    }
    // 0x15002DFC: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x15002E00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15002E04: bne         $a0, $s2, L_15002CD8
    if (ctx->r4 != ctx->r18) {
        // 0x15002E08: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_15002CD8;
    }
    // 0x15002E08: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_15002E0C:
    // 0x15002E0C: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
L_15002E10:
    // 0x15002E10: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15002E14: sll         $t6, $s5, 3
    ctx->r14 = S32(ctx->r21 << 3);
    // 0x15002E18: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x15002E1C: lb          $t9, 0x0($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X0);
    // 0x15002E20: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x15002E24: bnel        $t9, $at, L_15002A7C
    if (ctx->r25 != ctx->r1) {
        // 0x15002E28: lbu         $v0, 0x0($a3)
        ctx->r2 = MEM_BU(ctx->r7, 0X0);
            goto L_15002A7C;
    }
    goto skip_5;
    // 0x15002E28: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    skip_5:
    // 0x15002E2C: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x15002E30: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x15002E34: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
L_15002E38:
    // 0x15002E38: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15002E3C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15002E40: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x15002E44: bne         $a0, $t8, L_15002A44
    if (ctx->r4 != ctx->r24) {
        // 0x15002E48: sw          $a0, 0x134($sp)
        MEM_W(0X134, ctx->r29) = ctx->r4;
            goto L_15002A44;
    }
    // 0x15002E48: sw          $a0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r4;
    // 0x15002E4C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x15002E50: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15002E54: addiu       $t7, $t7, 0x5EF8
    ctx->r15 = ADD32(ctx->r15, 0X5EF8);
    // 0x15002E58: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x15002E5C: sh          $s7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r23;
    // 0x15002E60: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x15002E64: andi        $a0, $s7, 0xFFFF
    ctx->r4 = ctx->r23 & 0XFFFF;
    // 0x15002E68: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x15002E6C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
L_15002E70:
    // 0x15002E70: slt         $at, $s5, $a0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15002E74: beql        $at, $zero, L_15002F10
    if (ctx->r1 == 0) {
        // 0x15002E78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15002F10;
    }
    goto skip_6;
    // 0x15002E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x15002E7C: multu       $s5, $a3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15002E80: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x15002E84: mflo        $v1
    ctx->r3 = lo;
    // 0x15002E88: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15002E8C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15002E90: lw          $t6, -0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, -0XC);
    // 0x15002E94: sltu        $at, $t8, $t6
    ctx->r1 = ctx->r24 < ctx->r14 ? 1 : 0;
    // 0x15002E98: beq         $at, $zero, L_15002F04
    if (ctx->r1 == 0) {
        // 0x15002E9C: nop
    
            goto L_15002F04;
    }
    // 0x15002E9C: nop

    // 0x15002EA0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15002EA4: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x15002EA8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x15002EAC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15002EB0: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x15002EB4: lw          $at, -0xC($v0)
    ctx->r1 = MEM_W(ctx->r2, -0XC);
    // 0x15002EB8: lw          $t6, -0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X8);
    // 0x15002EBC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15002EC0: lw          $at, -0x4($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X4);
    // 0x15002EC4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15002EC8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x15002ECC: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x15002ED0: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x15002ED4: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15002ED8: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15002EDC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15002EE0: sw          $t6, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r14;
    // 0x15002EE4: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x15002EE8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x15002EEC: slti        $at, $s5, 0x2
    ctx->r1 = SIGNED(ctx->r21) < 0X2 ? 1 : 0;
    // 0x15002EF0: bne         $at, $zero, L_15002EFC
    if (ctx->r1 != 0) {
        // 0x15002EF4: nop
    
            goto L_15002EFC;
    }
    // 0x15002EF4: nop

    // 0x15002EF8: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_15002EFC:
    // 0x15002EFC: b           L_15002E70
    // 0x15002F00: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
        goto L_15002E70;
    // 0x15002F00: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
L_15002F04:
    // 0x15002F04: b           L_15002E70
    // 0x15002F08: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_15002E70;
    // 0x15002F08: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15002F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15002F10:
    // 0x15002F10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15002F14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15002F18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15002F1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15002F20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15002F24: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15002F28: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15002F2C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15002F30: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15002F34: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15002F38: jr          $ra
    // 0x15002F3C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x15002F3C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_151C6290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C6290: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151C6294: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151C6298: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x151C629C: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x151C62A0: beq         $v0, $at, L_151C62B8
    if (ctx->r2 == ctx->r1) {
        // 0x151C62A4: addiu       $at, $zero, 0x74
        ctx->r1 = ADD32(0, 0X74);
            goto L_151C62B8;
    }
    // 0x151C62A4: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
    // 0x151C62A8: beq         $v0, $at, L_151C62B8
    if (ctx->r2 == ctx->r1) {
        // 0x151C62AC: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_151C62B8;
    }
    // 0x151C62AC: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x151C62B0: bnel        $v0, $at, L_151C62C4
    if (ctx->r2 != ctx->r1) {
        // 0x151C62B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151C62C4;
    }
    goto skip_0;
    // 0x151C62B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_151C62B8:
    // 0x151C62B8: jr          $ra
    // 0x151C62BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151C62BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C62C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C62C4:
    // 0x151C62C4: jr          $ra
    // 0x151C62C8: nop

    return;
    return;
    // 0x151C62C8: nop

;}
RECOMP_FUNC void func_151555AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151555AC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151555B0: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x151555B4: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x151555B8: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x151555BC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x151555C0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151555C4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151555C8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x151555CC: addiu       $t7, $t7, 0x6030
    ctx->r15 = ADD32(ctx->r15, 0X6030);
    // 0x151555D0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151555D4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x151555D8: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    // 0x151555DC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151555E0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151555E4: addiu       $t5, $t5, -0x2E70
    ctx->r13 = ADD32(ctx->r13, -0X2E70);
    // 0x151555E8: addiu       $t0, $t0, -0x31B0
    ctx->r8 = ADD32(ctx->r8, -0X31B0);
    // 0x151555EC: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x151555F0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151555F4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
L_151555F8:
    // 0x151555F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151555FC:
    // 0x151555FC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x15155600: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x15155604: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15155608: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1515560C: addu        $t8, $t0, $t9
    ctx->r24 = ADD32(ctx->r8, ctx->r25);
    // 0x15155610: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x15155614: beql        $v1, $zero, L_151556FC
    if (ctx->r3 == 0) {
        // 0x15155618: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151556FC;
    }
    goto skip_0;
    // 0x15155618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_1515561C:
    // 0x1515561C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x15155620: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15155624: blez        $a3, L_15155668
    if (SIGNED(ctx->r7) <= 0) {
        // 0x15155628: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15155668;
    }
    // 0x15155628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1515562C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x15155630: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x15155634: lbu         $t1, 0x2A($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2A);
    // 0x15155638: lw          $t6, -0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, -0X4);
L_1515563C:
    // 0x1515563C: bnel        $t1, $t6, L_15155650
    if (ctx->r9 != ctx->r14) {
        // 0x15155640: addiu       $t2, $t2, -0x4
        ctx->r10 = ADD32(ctx->r10, -0X4);
            goto L_15155650;
    }
    goto skip_1;
    // 0x15155640: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
    skip_1:
    // 0x15155644: b           L_15155654
    // 0x15155648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15155654;
    // 0x15155648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1515564C: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
L_15155650:
    // 0x15155650: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_15155654:
    // 0x15155654: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x15155658: bne         $at, $zero, L_15155668
    if (ctx->r1 != 0) {
        // 0x1515565C: nop
    
            goto L_15155668;
    }
    // 0x1515565C: nop

    // 0x15155660: beql        $a2, $zero, L_1515563C
    if (ctx->r6 == 0) {
        // 0x15155664: lw          $t6, -0x4($t3)
        ctx->r14 = MEM_W(ctx->r11, -0X4);
            goto L_1515563C;
    }
    goto skip_2;
    // 0x15155664: lw          $t6, -0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, -0X4);
    skip_2:
L_15155668:
    // 0x15155668: beq         $a2, $zero, L_151556F0
    if (ctx->r6 == 0) {
        // 0x1515566C: nop
    
            goto L_151556F0;
    }
    // 0x1515566C: nop

    // 0x15155670: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15155674: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15155678: lwc1        $f14, 0x0($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1515567C: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15155680: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15155684: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15155688: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1515568C: sub.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x15155690: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15155694: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x15155698: nop

    // 0x1515569C: bc1f        L_151556F0
    if (!c1cs) {
        // 0x151556A0: nop
    
            goto L_151556F0;
    }
    // 0x151556A0: nop

    // 0x151556A4: add.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x151556A8: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x151556AC: nop

    // 0x151556B0: bc1f        L_151556F0
    if (!c1cs) {
        // 0x151556B4: nop
    
            goto L_151556F0;
    }
    // 0x151556B4: nop

    // 0x151556B8: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x151556BC: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151556C0: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x151556C4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x151556C8: nop

    // 0x151556CC: bc1f        L_151556F0
    if (!c1cs) {
        // 0x151556D0: nop
    
            goto L_151556F0;
    }
    // 0x151556D0: nop

    // 0x151556D4: add.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x151556D8: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x151556DC: nop

    // 0x151556E0: bc1f        L_151556F0
    if (!c1cs) {
        // 0x151556E4: nop
    
            goto L_151556F0;
    }
    // 0x151556E4: nop

    // 0x151556E8: b           L_15155718
    // 0x151556EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15155718;
    // 0x151556EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151556F0:
    // 0x151556F0: bne         $a0, $zero, L_1515561C
    if (ctx->r4 != 0) {
        // 0x151556F4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_1515561C;
    }
    // 0x151556F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151556F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151556FC:
    // 0x151556FC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x15155700: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x15155704: bne         $at, $zero, L_151555FC
    if (ctx->r1 != 0) {
        // 0x15155708: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_151555FC;
    }
    // 0x15155708: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x1515570C: addiu       $t0, $t0, 0x1A0
    ctx->r8 = ADD32(ctx->r8, 0X1A0);
    // 0x15155710: bne         $t0, $t5, L_151555F8
    if (ctx->r8 != ctx->r13) {
        // 0x15155714: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151555F8;
    }
    // 0x15155714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15155718:
    // 0x15155718: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1515571C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x15155720: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x15155724: jr          $ra
    // 0x15155728: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15155728: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1001BD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001BD34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001BD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001BD3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001BD40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001BD44: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1001BD48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1001BD4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001BD50: lw          $t9, 0x28($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X28);
    // 0x1001BD54: jalr        $t9
    // 0x1001BD58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1001BD58: nop

    after_0:
    // 0x1001BD5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001BD60: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BD64: beq         $t7, $zero, L_1001BDF4
    if (ctx->r15 == 0) {
        // 0x1001BD68: nop
    
            goto L_1001BDF4;
    }
    // 0x1001BD68: nop

    // 0x1001BD6C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001BD70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1001BD74: bne         $t8, $at, L_1001BD98
    if (ctx->r24 != ctx->r1) {
        // 0x1001BD78: nop
    
            goto L_1001BD98;
    }
    // 0x1001BD78: nop

    // 0x1001BD7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BD80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1001BD84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1001BD88: jalr        $t9
    // 0x1001BD8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1001BD8C: nop

    after_1:
    // 0x1001BD90: b           L_1001BDC0
    // 0x1001BD94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
        goto L_1001BDC0;
    // 0x1001BD94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_1001BD98:
    // 0x1001BD98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001BD9C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001BDA0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BDA4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001BDA8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1001BDAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001BDB0: addu        $a0, $t1, $t3
    ctx->r4 = ADD32(ctx->r9, ctx->r11);
    // 0x1001BDB4: jalr        $t9
    // 0x1001BDB8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1001BDB8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x1001BDBC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_1001BDC0:
    // 0x1001BDC0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x1001BDC4: beq         $t4, $zero, L_1001BDEC
    if (ctx->r12 == 0) {
        // 0x1001BDC8: nop
    
            goto L_1001BDEC;
    }
    // 0x1001BDC8: nop

    // 0x1001BDCC: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x1001BDD0: ori         $at, $at, 0x3
    ctx->r1 = ctx->r1 | 0X3;
    // 0x1001BDD4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x1001BDD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1001BDDC: beq         $t5, $at, L_1001BDEC
    if (ctx->r13 == ctx->r1) {
        // 0x1001BDE0: nop
    
            goto L_1001BDEC;
    }
    // 0x1001BDE0: nop

    // 0x1001BDE4: b           L_1001BE0C
    // 0x1001BDE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001BE0C;
    // 0x1001BDE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001BDEC:
    // 0x1001BDEC: b           L_1001BDFC
    // 0x1001BDF0: nop

        goto L_1001BDFC;
    // 0x1001BDF0: nop

L_1001BDF4:
    // 0x1001BDF4: b           L_1001BE0C
    // 0x1001BDF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001BE0C;
    // 0x1001BDF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001BDFC:
    // 0x1001BDFC: b           L_1001BE0C
    // 0x1001BE00: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
        goto L_1001BE0C;
    // 0x1001BE00: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1001BE04: b           L_1001BE0C
    // 0x1001BE08: nop

        goto L_1001BE0C;
    // 0x1001BE08: nop

L_1001BE0C:
    // 0x1001BE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001BE10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001BE14: jr          $ra
    // 0x1001BE18: nop

    return;
    return;
    // 0x1001BE18: nop

;}
RECOMP_FUNC void func_15009D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009D6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009D70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009D74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009D78: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15009D7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15009D80: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15009D84: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15009D88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15009D8C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15009D90: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x15009D94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15009D98: jal         0x15163604
    // 0x15009D9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x15009D9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x15009DA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009DA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009DA8: jr          $ra
    // 0x15009DAC: nop

    return;
    return;
    // 0x15009DAC: nop

;}
RECOMP_FUNC void func_150EC6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EC6B0: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150EC6B4: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150EC6B8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150EC6BC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150EC6C0: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150EC6C4: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150EC6C8: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150EC6CC: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150EC6D0: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150EC6D4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150EC6D8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150EC6DC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150EC6E0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150EC6E4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150EC6E8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150EC6EC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150EC6F0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150EC6F4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150EC6F8: jal         0x150ADA68
    // 0x150EC6FC: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150EC6FC: nop

    after_0:
    // 0x150EC700: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EC704: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150EC708: lui         $at, 0x44A9
    ctx->r1 = S32(0X44A9 << 16);
    // 0x150EC70C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EC710: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC714: lwc1        $f6, 0x1578($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1578);
    // 0x150EC718: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC71C: lwc1        $f16, 0x157C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X157C);
    // 0x150EC720: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EC724: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EC728: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EC72C: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x150EC730: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150EC734: lui         $t1, 0x80
    ctx->r9 = S32(0X80 << 16);
    // 0x150EC738: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC73C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150EC740: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150EC744: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x150EC748: addiu       $t7, $zero, 0x5103
    ctx->r15 = ADD32(0, 0X5103);
    // 0x150EC74C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150EC750: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150EC754: addiu       $t9, $zero, 0x46
    ctx->r25 = ADD32(0, 0X46);
    // 0x150EC758: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150EC75C: ori         $t1, $t1, 0xDE07
    ctx->r9 = ctx->r9 | 0XDE07;
    // 0x150EC760: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150EC764: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150EC768: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150EC76C: addiu       $t4, $zero, 0x16
    ctx->r12 = ADD32(0, 0X16);
    // 0x150EC770: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150EC774: addiu       $fp, $sp, 0x8C
    ctx->r30 = ADD32(ctx->r29, 0X8C);
    // 0x150EC778: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150EC77C: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x150EC780: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150EC784: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x150EC788: nop

    // 0x150EC78C: bc1fl       L_150ECA24
    if (!c1cs) {
        // 0x150EC790: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150ECA24;
    }
    goto skip_0;
    // 0x150EC790: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x150EC794: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150EC798: nop

    // 0x150EC79C: lwc1        $f18, 0x1580($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1580);
    // 0x150EC7A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC7A4: lwc1        $f6, 0x1584($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1584);
    // 0x150EC7A8: sb          $t6, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r14;
    // 0x150EC7AC: sh          $t7, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r15;
    // 0x150EC7B0: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x150EC7B4: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x150EC7B8: sh          $t0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r8;
    // 0x150EC7BC: sw          $t1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r9;
    // 0x150EC7C0: sb          $t2, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r10;
    // 0x150EC7C4: sb          $t3, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r11;
    // 0x150EC7C8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150EC7CC: addiu       $t7, $zero, 0x46
    ctx->r15 = ADD32(0, 0X46);
    // 0x150EC7D0: addiu       $t8, $zero, 0x47
    ctx->r24 = ADD32(0, 0X47);
    // 0x150EC7D4: addiu       $t9, $zero, 0xC2
    ctx->r25 = ADD32(0, 0XC2);
    // 0x150EC7D8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150EC7DC: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x150EC7E0: addiu       $t2, $zero, 0x49
    ctx->r10 = ADD32(0, 0X49);
    // 0x150EC7E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150EC7E8: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150EC7EC: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150EC7F0: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150EC7F4: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150EC7F8: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150EC7FC: sb          $t4, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r12;
    // 0x150EC800: sb          $t5, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r13;
    // 0x150EC804: sb          $t6, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r14;
    // 0x150EC808: sb          $zero, 0x101($sp)
    MEM_B(0X101, ctx->r29) = 0;
    // 0x150EC80C: sh          $t7, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r15;
    // 0x150EC810: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
    // 0x150EC814: sb          $t9, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r25;
    // 0x150EC818: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x150EC81C: sb          $t0, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r8;
    // 0x150EC820: sb          $t1, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r9;
    // 0x150EC824: sb          $t2, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r10;
    // 0x150EC828: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x150EC82C: sb          $t3, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r11;
    // 0x150EC830: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x150EC834: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x150EC838: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150EC83C: addiu       $t4, $sp, 0xCC
    ctx->r12 = ADD32(ctx->r29, 0XCC);
    // 0x150EC840: addiu       $s7, $sp, 0x9C
    ctx->r23 = ADD32(ctx->r29, 0X9C);
    // 0x150EC844: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150EC848: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x150EC84C: addiu       $s6, $zero, 0x33
    ctx->r22 = ADD32(0, 0X33);
    // 0x150EC850: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    // 0x150EC854: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150EC858: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150EC85C: addiu       $s4, $zero, -0xC1
    ctx->r20 = ADD32(0, -0XC1);
    // 0x150EC860: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x150EC864: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150EC868: lui         $at, 0x42B8
    ctx->r1 = S32(0X42B8 << 16);
    // 0x150EC86C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150EC870: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150EC874: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150EC878: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC87C: lwc1        $f26, 0x1588($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X1588);
    // 0x150EC880: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EC884: lwc1        $f24, 0x158C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X158C);
    // 0x150EC888: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x150EC88C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150EC890: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150EC894: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150EC898: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x150EC89C: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x150EC8A0: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150EC8A4: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
L_150EC8A8:
    // 0x150EC8A8: jal         0x150ADA20
    // 0x150EC8AC: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150EC8AC: nop

    after_1:
    // 0x150EC8B0: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150EC8B4: mfhi        $t8
    ctx->r24 = hi;
    // 0x150EC8B8: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x150EC8BC: bne         $s2, $zero, L_150EC8C8
    if (ctx->r18 != 0) {
        // 0x150EC8C0: nop
    
            goto L_150EC8C8;
    }
    // 0x150EC8C0: nop

    // 0x150EC8C4: break       7
    do_break(353290436);
L_150EC8C8:
    // 0x150EC8C8: sb          $t9, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r25;
    // 0x150EC8CC: jal         0x150ADA20
    // 0x150EC8D0: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150EC8D0: nop

    after_2:
    // 0x150EC8D4: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150EC8D8: mfhi        $t0
    ctx->r8 = hi;
    // 0x150EC8DC: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x150EC8E0: bne         $s2, $zero, L_150EC8EC
    if (ctx->r18 != 0) {
        // 0x150EC8E4: nop
    
            goto L_150EC8EC;
    }
    // 0x150EC8E4: nop

    // 0x150EC8E8: break       7
    do_break(353290472);
L_150EC8EC:
    // 0x150EC8EC: sb          $t1, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r9;
    // 0x150EC8F0: jal         0x150ADA68
    // 0x150EC8F4: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150EC8F4: nop

    after_3:
    // 0x150EC8F8: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EC8FC: jal         0x150ADA68
    // 0x150EC900: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150EC900: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x150EC904: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EC908: jal         0x150ADA68
    // 0x150EC90C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150EC90C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x150EC910: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150EC914: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x150EC918: and         $t3, $t2, $s4
    ctx->r11 = ctx->r10 & ctx->r20;
    // 0x150EC91C: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x150EC920: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x150EC924: jal         0x150ADA20
    // 0x150EC928: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150EC928: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150EC92C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x150EC930: beq         $t6, $zero, L_150EC940
    if (ctx->r14 == 0) {
        // 0x150EC934: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150EC940;
    }
    // 0x150EC934: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150EC938: b           L_150EC940
    // 0x150EC93C: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150EC940;
    // 0x150EC93C: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150EC940:
    // 0x150EC940: jal         0x150ADA20
    // 0x150EC944: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150EC944: nop

    after_7:
    // 0x150EC948: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x150EC94C: beq         $t5, $zero, L_150EC95C
    if (ctx->r13 == 0) {
        // 0x150EC950: lw          $t4, 0xF4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XF4);
            goto L_150EC95C;
    }
    // 0x150EC950: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x150EC954: b           L_150EC960
    // 0x150EC958: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150EC960;
    // 0x150EC958: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150EC95C:
    // 0x150EC95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EC960:
    // 0x150EC960: or          $t7, $v0, $s0
    ctx->r15 = ctx->r2 | ctx->r16;
    // 0x150EC964: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x150EC968: jal         0x150ADA20
    // 0x150EC96C: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150EC96C: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    after_8:
    // 0x150EC970: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150EC974: mfhi        $t9
    ctx->r25 = hi;
    // 0x150EC978: addiu       $t0, $t9, 0x64
    ctx->r8 = ADD32(ctx->r25, 0X64);
    // 0x150EC97C: bne         $s5, $zero, L_150EC988
    if (ctx->r21 != 0) {
        // 0x150EC980: nop
    
            goto L_150EC988;
    }
    // 0x150EC980: nop

    // 0x150EC984: break       7
    do_break(353290628);
L_150EC988:
    // 0x150EC988: sb          $t0, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r8;
    // 0x150EC98C: jal         0x150ADA20
    // 0x150EC990: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150EC990: nop

    after_9:
    // 0x150EC994: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150EC998: mfhi        $t1
    ctx->r9 = hi;
    // 0x150EC99C: addiu       $t2, $t1, 0x50
    ctx->r10 = ADD32(ctx->r9, 0X50);
    // 0x150EC9A0: bne         $s6, $zero, L_150EC9AC
    if (ctx->r22 != 0) {
        // 0x150EC9A4: nop
    
            goto L_150EC9AC;
    }
    // 0x150EC9A4: nop

    // 0x150EC9A8: break       7
    do_break(353290664);
L_150EC9AC:
    // 0x150EC9AC: sh          $t2, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r10;
    // 0x150EC9B0: jal         0x150ADA68
    // 0x150EC9B4: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150EC9B4: nop

    after_10:
    // 0x150EC9B8: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150EC9BC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150EC9C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150EC9C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150EC9C8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x150EC9CC: add.s       $f6, $f18, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150EC9D0: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x150EC9D4: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x150EC9D8: lbu         $t3, 0xC($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0XC);
    // 0x150EC9DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150EC9E0: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x150EC9E4: jal         0x15130280
    // 0x150EC9E8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15130280(rdram, ctx);
        goto after_11;
    // 0x150EC9E8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_11:
    // 0x150EC9EC: beq         $v0, $zero, L_150ECA00
    if (ctx->r2 == 0) {
        // 0x150EC9F0: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150ECA00;
    }
    // 0x150EC9F0: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150EC9F4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x150EC9F8: jal         0x10022EC0
    // 0x150EC9FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x150EC9FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
L_150ECA00:
    // 0x150ECA00: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150ECA04: sub.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x150ECA08: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x150ECA0C: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150ECA10: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x150ECA14: nop

    // 0x150ECA18: bc1t        L_150EC8A8
    if (c1cs) {
        // 0x150ECA1C: nop
    
            goto L_150EC8A8;
    }
    // 0x150ECA1C: nop

    // 0x150ECA20: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150ECA24:
    // 0x150ECA24: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150ECA28: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150ECA2C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150ECA30: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150ECA34: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150ECA38: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150ECA3C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150ECA40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150ECA44: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150ECA48: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150ECA4C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150ECA50: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150ECA54: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150ECA58: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150ECA5C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150ECA60: jr          $ra
    // 0x150ECA64: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150ECA64: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_1514ED8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514ED8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514ED90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514ED94: lw          $t6, 0x2F4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2F4);
    // 0x1514ED98: bnel        $a0, $t6, L_1514EDAC
    if (ctx->r4 != ctx->r14) {
        // 0x1514ED9C: lw          $v0, 0x14($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X14);
            goto L_1514EDAC;
    }
    goto skip_0;
    // 0x1514ED9C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    skip_0:
    // 0x1514EDA0: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x1514EDA4: sw          $t7, 0x2F4($a1)
    MEM_W(0X2F4, ctx->r5) = ctx->r15;
    // 0x1514EDA8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
L_1514EDAC:
    // 0x1514EDAC: beql        $v0, $zero, L_1514EDC0
    if (ctx->r2 == 0) {
        // 0x1514EDB0: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_1514EDC0;
    }
    goto skip_1;
    // 0x1514EDB0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    skip_1:
    // 0x1514EDB4: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x1514EDB8: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x1514EDBC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
L_1514EDC0:
    // 0x1514EDC0: beql        $v0, $zero, L_1514EDD4
    if (ctx->r2 == 0) {
        // 0x1514EDC4: lw          $t0, 0x10($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X10);
            goto L_1514EDD4;
    }
    goto skip_2;
    // 0x1514EDC4: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    skip_2:
    // 0x1514EDC8: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x1514EDCC: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x1514EDD0: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
L_1514EDD4:
    // 0x1514EDD4: jal         0x1516972C
    // 0x1514EDD8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1514EDD8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x1514EDDC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x1514EDE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514EDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514EDE8: jr          $ra
    // 0x1514EDEC: nop

    return;
    return;
    // 0x1514EDEC: nop

;}
RECOMP_FUNC void func_150738E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150738E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150738EC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150738F0: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x150738F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150738F8: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x150738FC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15073900: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x15073904: lbu         $v0, 0x13C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X13C);
    // 0x15073908: ori         $t9, $zero, 0x8200
    ctx->r25 = 0 | 0X8200;
    // 0x1507390C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x15073910: addiu       $v1, $v0, -0x64
    ctx->r3 = ADD32(ctx->r2, -0X64);
    // 0x15073914: beq         $v0, $zero, L_15073994
    if (ctx->r2 == 0) {
        // 0x15073918: andi        $t6, $v1, 0xFF
        ctx->r14 = ctx->r3 & 0XFF;
            goto L_15073994;
    }
    // 0x15073918: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x1507391C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15073920: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15073924: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15073928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1507392C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15073930: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15073934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15073938: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1507393C: sb          $zero, 0x13C($a0)
    MEM_B(0X13C, ctx->r4) = 0;
    // 0x15073940: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15073944: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x15073948: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1507394C: sw          $t9, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r25;
    // 0x15073950: sb          $zero, 0x13D($v0)
    MEM_B(0X13D, ctx->r2) = 0;
    // 0x15073954: lhu         $t1, 0x7A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X7A);
    // 0x15073958: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1507395C: ori         $t3, $zero, 0xE000
    ctx->r11 = 0 | 0XE000;
    // 0x15073960: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x15073964: sb          $t2, 0x232($v0)
    MEM_B(0X232, ctx->r2) = ctx->r10;
    // 0x15073968: sw          $zero, 0x218($v0)
    MEM_W(0X218, ctx->r2) = 0;
    // 0x1507396C: sb          $zero, 0x104($v0)
    MEM_B(0X104, ctx->r2) = 0;
    // 0x15073970: sh          $t3, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r11;
    // 0x15073974: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15073978: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x1507397C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15073980: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x15073984: sh          $t1, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r9;
    // 0x15073988: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1507398C: jal         0x1505E650
    // 0x15073990: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15073990: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
L_15073994:
    // 0x15073994: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15073998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507399C: jr          $ra
    // 0x150739A0: nop

    return;
    return;
    // 0x150739A0: nop

;}
RECOMP_FUNC void func_1506FD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FD30: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506FD34: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1506FD38: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1506FD3C: jal         0x150ADA68
    // 0x1506FD40: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1506FD40: nop

    after_0:
    // 0x1506FD44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506FD48: lwc1        $f4, -0x6160($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6160);
    // 0x1506FD4C: lui         $at, 0x43CF
    ctx->r1 = S32(0X43CF << 16);
    // 0x1506FD50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506FD54: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1506FD58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FD5C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FD60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506FD64: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1506FD68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506FD6C: lbu         $a1, 0x3B($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3B);
    // 0x1506FD70: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1506FD74: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1506FD78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506FD7C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x1506FD80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1506FD84: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1506FD88: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1506FD8C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x1506FD90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1506FD94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506FD98: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1506FD9C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1506FDA0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1506FDA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1506FDA8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x1506FDAC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1506FDB0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1506FDB4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1506FDB8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1506FDBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506FDC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1506FDC4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x1506FDC8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1506FDCC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x1506FDD0: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x1506FDD4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1506FDD8: jal         0x150E2EA4
    // 0x1506FDDC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    func_150E2EA4(rdram, ctx);
        goto after_1;
    // 0x1506FDDC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x1506FDE0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1506FDE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1506FDE8: jr          $ra
    // 0x1506FDEC: nop

    return;
    return;
    // 0x1506FDEC: nop

;}
RECOMP_FUNC void func_150C73E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C73E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150C73E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C73E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C73EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C73F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150C73F4: lw          $t6, 0x3C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3C);
    // 0x150C73F8: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x150C73FC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150C7400: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150C7404: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C7408: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x150C740C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C7410: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x150C7414: bne         $v1, $zero, L_150C7450
    if (ctx->r3 != 0) {
        // 0x150C7418: div.s       $f0, $f6, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
            goto L_150C7450;
    }
    // 0x150C7418: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C741C: sb          $t7, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r15;
    // 0x150C7420: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x150C7424: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x150C7428: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x150C742C: lw          $t9, 0x2E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2E4);
    // 0x150C7430: beq         $t9, $zero, L_150C7448
    if (ctx->r25 == 0) {
        // 0x150C7434: nop
    
            goto L_150C7448;
    }
    // 0x150C7434: nop

    // 0x150C7438: jal         0x151616D0
    // 0x150C743C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_0;
    // 0x150C743C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x150C7440: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x150C7444: sw          $zero, 0x2E4($t0)
    MEM_W(0X2E4, ctx->r8) = 0;
L_150C7448:
    // 0x150C7448: b           L_150C7650
    // 0x150C744C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C7650;
    // 0x150C744C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C7450:
    // 0x150C7450: beql        $at, $zero, L_150C74B8
    if (ctx->r1 == 0) {
        // 0x150C7454: slti        $at, $v1, 0x12C
        ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
            goto L_150C74B8;
    }
    goto skip_0;
    // 0x150C7454: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    skip_0:
    // 0x150C7458: jal         0x150ADA20
    // 0x150C745C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150C745C: nop

    after_1:
    // 0x150C7460: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x150C7464: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150C7468: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C746C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x150C7470: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C7474: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C7478: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150C747C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150C7480: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x150C7484: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150C7488: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150C748C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150C7490: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C7494: bgez        $t1, L_150C74A8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150C7498: nop
    
            goto L_150C74A8;
    }
    // 0x150C7498: nop

    // 0x150C749C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C74A0: nop

    // 0x150C74A4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_150C74A8:
    // 0x150C74A8: mul.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x150C74AC: b           L_150C7568
    // 0x150C74B0: nop

        goto L_150C7568;
    // 0x150C74B0: nop

    // 0x150C74B4: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
L_150C74B8:
    // 0x150C74B8: beq         $at, $zero, L_150C74F0
    if (ctx->r1 == 0) {
        // 0x150C74BC: addiu       $t2, $v1, -0x3C
        ctx->r10 = ADD32(ctx->r3, -0X3C);
            goto L_150C74F0;
    }
    // 0x150C74BC: addiu       $t2, $v1, -0x3C
    ctx->r10 = ADD32(ctx->r3, -0X3C);
    // 0x150C74C0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150C74C4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x150C74C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C74CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C74D0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150C74D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C74D8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C74DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C74E0: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150C74E4: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x150C74E8: b           L_150C7568
    // 0x150C74EC: add.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f8.fl;
        goto L_150C7568;
    // 0x150C74EC: add.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f8.fl;
L_150C74F0:
    // 0x150C74F0: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x150C74F4: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x150C74F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C74FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C7500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C7504: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x150C7508: nop

    // 0x150C750C: bc1fl       L_150C7554
    if (!c1cs) {
        // 0x150C7510: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_150C7554;
    }
    goto skip_1;
    // 0x150C7510: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_1:
    // 0x150C7514: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C7518: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C751C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C7520: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C7524: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C7528: sub.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x150C752C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x150C7530: nop

    // 0x150C7534: bc1f        L_150C7548
    if (!c1cs) {
        // 0x150C7538: nop
    
            goto L_150C7548;
    }
    // 0x150C7538: nop

    // 0x150C753C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C7540: b           L_150C7568
    // 0x150C7544: nop

        goto L_150C7568;
    // 0x150C7544: nop

L_150C7548:
    // 0x150C7548: b           L_150C7568
    // 0x150C754C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
        goto L_150C7568;
    // 0x150C754C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150C7550: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_150C7554:
    // 0x150C7554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C7558: lwc1        $f6, 0x4B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B0);
    // 0x150C755C: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150C7560: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C7564: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_150C7568:
    // 0x150C7568: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150C756C: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x150C7570: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x150C7574: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150C7578: bne         $at, $zero, L_150C7588
    if (ctx->r1 != 0) {
        // 0x150C757C: subu        $t3, $v1, $v0
        ctx->r11 = SUB32(ctx->r3, ctx->r2);
            goto L_150C7588;
    }
    // 0x150C757C: subu        $t3, $v1, $v0
    ctx->r11 = SUB32(ctx->r3, ctx->r2);
    // 0x150C7580: b           L_150C758C
    // 0x150C7584: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
        goto L_150C758C;
    // 0x150C7584: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
L_150C7588:
    // 0x150C7588: sw          $t3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r11;
L_150C758C:
    // 0x150C758C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150C7590: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C7594: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150C7598: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C759C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x150C75A0: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C75A4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x150C75A8: bc1t        L_150C7620
    if (c1cs) {
        // 0x150C75AC: sw          $t5, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r13;
            goto L_150C7620;
    }
    // 0x150C75AC: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x150C75B0: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x150C75B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150C75B8: beql        $t6, $at, L_150C75E8
    if (ctx->r14 == ctx->r1) {
        // 0x150C75BC: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_150C75E8;
    }
    goto skip_2;
    // 0x150C75BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    skip_2:
    // 0x150C75C0: jal         0x150ADA20
    // 0x150C75C4: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150C75C4: nop

    after_2:
    // 0x150C75C8: andi        $a0, $v0, 0x7
    ctx->r4 = ctx->r2 & 0X7;
    // 0x150C75CC: addiu       $a0, $a0, 0x44B
    ctx->r4 = ADD32(ctx->r4, 0X44B);
    // 0x150C75D0: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x150C75D4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150C75D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C75DC: jal         0x10010F30
    // 0x150C75E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_3;
    // 0x150C75E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x150C75E4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_150C75E8:
    // 0x150C75E8: sb          $t7, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r15;
    // 0x150C75EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x150C75F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C75F4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x150C75F8: lw          $t9, 0x2E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2E4);
    // 0x150C75FC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x150C7600: beql        $t9, $at, L_150C7650
    if (ctx->r25 == ctx->r1) {
        // 0x150C7604: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150C7650;
    }
    goto skip_3;
    // 0x150C7604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x150C7608: jal         0x151616D0
    // 0x150C760C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_4;
    // 0x150C760C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x150C7610: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x150C7614: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150C7618: b           L_150C764C
    // 0x150C761C: sw          $t0, 0x2E4($t1)
    MEM_W(0X2E4, ctx->r9) = ctx->r8;
        goto L_150C764C;
    // 0x150C761C: sw          $t0, 0x2E4($t1)
    MEM_W(0X2E4, ctx->r9) = ctx->r8;
L_150C7620:
    // 0x150C7620: sb          $t2, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r10;
    // 0x150C7624: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x150C7628: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x150C762C: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x150C7630: lw          $t4, 0x2E4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2E4);
    // 0x150C7634: beql        $t4, $zero, L_150C7650
    if (ctx->r12 == 0) {
        // 0x150C7638: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150C7650;
    }
    goto skip_4;
    // 0x150C7638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x150C763C: jal         0x151616D0
    // 0x150C7640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_5;
    // 0x150C7640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x150C7644: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x150C7648: sw          $zero, 0x2E4($t5)
    MEM_W(0X2E4, ctx->r13) = 0;
L_150C764C:
    // 0x150C764C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C7650:
    // 0x150C7650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150C7654: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C7658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150C765C: jr          $ra
    // 0x150C7660: nop

    return;
    return;
    // 0x150C7660: nop

;}
RECOMP_FUNC void func_151669A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151669A0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151669A4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x151669A8: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x151669AC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151669B0: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x151669B4: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x151669B8: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x151669BC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x151669C0: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x151669C4: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x151669C8: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x151669CC: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x151669D0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151669D4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x151669D8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x151669DC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x151669E0: lbu         $t6, 0x8B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X8B);
    // 0x151669E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151669E8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151669EC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x151669F0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x151669F4: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x151669F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151669FC: jal         0x15167A68
    // 0x15166A00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15166A00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15166A04: beq         $v0, $zero, L_15166B1C
    if (ctx->r2 == 0) {
        // 0x15166A08: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_15166B1C;
    }
    // 0x15166A08: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x15166A0C: sb          $t8, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r24;
    // 0x15166A10: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x15166A14: sh          $t9, 0xD2($v0)
    MEM_H(0XD2, ctx->r2) = ctx->r25;
    // 0x15166A18: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x15166A1C: sh          $t0, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r8;
    // 0x15166A20: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x15166A24: swc1        $f22, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f22.u32l;
    // 0x15166A28: sh          $t1, 0xD6($v0)
    MEM_H(0XD6, ctx->r2) = ctx->r9;
    // 0x15166A2C: jal         0x150ADA20
    // 0x15166A30: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15166A30: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    after_1:
    // 0x15166A34: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x15166A38: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x15166A3C: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x15166A40: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x15166A44: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x15166A48: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15166A4C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15166A50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15166A54: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x15166A58: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15166A5C: andi        $s0, $v0, 0x7F
    ctx->r16 = ctx->r2 & 0X7F;
    // 0x15166A60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15166A64: addiu       $s3, $zero, 0xC0
    ctx->r19 = ADD32(0, 0XC0);
    // 0x15166A68: addiu       $s1, $v1, 0x10
    ctx->r17 = ADD32(ctx->r3, 0X10);
    // 0x15166A6C: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15166A70: cvt.s.w     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    ctx->f26.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15166A74: cvt.s.w     $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    ctx->f28.fl = CVT_S_W(ctx->f8.u32l);
L_15166A78:
    // 0x15166A78: c.eq.s      $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f22.fl == ctx->f30.fl;
    // 0x15166A7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15166A80: bc1tl       L_15166AC4
    if (c1cs) {
        // 0x15166A84: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_15166AC4;
    }
    goto skip_0;
    // 0x15166A84: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x15166A88: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x15166A8C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x15166A90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15166A94: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15166A98: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x15166A9C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x15166AA0: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x15166AA4: swc1        $f24, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f24.u32l;
    // 0x15166AA8: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15166AAC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15166AB0: jal         0x15043D90
    // 0x15166AB4: swc1        $f28, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f28.u32l;
    func_15043D90(rdram, ctx);
        goto after_2;
    // 0x15166AB4: swc1        $f28, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f28.u32l;
    after_2:
    // 0x15166AB8: b           L_15166AEC
    // 0x15166ABC: nop

        goto L_15166AEC;
    // 0x15166ABC: nop

    // 0x15166AC0: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_15166AC4:
    // 0x15166AC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x15166AC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15166ACC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15166AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15166AD4: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x15166AD8: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x15166ADC: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x15166AE0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x15166AE4: jal         0x15043E68
    // 0x15166AE8: nop

    func_15043E68(rdram, ctx);
        goto after_3;
    // 0x15166AE8: nop

    after_3:
L_15166AEC:
    // 0x15166AEC: jal         0x150ADA20
    // 0x15166AF0: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15166AF0: nop

    after_4:
    // 0x15166AF4: andi        $t5, $v0, 0x3F
    ctx->r13 = ctx->r2 & 0X3F;
    // 0x15166AF8: addiu       $s2, $s2, 0x40
    ctx->r18 = ADD32(ctx->r18, 0X40);
    // 0x15166AFC: addu        $s0, $s0, $t5
    ctx->r16 = ADD32(ctx->r16, ctx->r13);
    // 0x15166B00: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x15166B04: bne         $s2, $s3, L_15166A78
    if (ctx->r18 != ctx->r19) {
        // 0x15166B08: addiu       $s0, $s0, 0x5A
        ctx->r16 = ADD32(ctx->r16, 0X5A);
            goto L_15166A78;
    }
    // 0x15166B08: addiu       $s0, $s0, 0x5A
    ctx->r16 = ADD32(ctx->r16, 0X5A);
    // 0x15166B0C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x15166B10: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x15166B14: jal         0x1517E05C
    // 0x15166B18: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    func_1517E05C(rdram, ctx);
        goto after_5;
    // 0x15166B18: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_5:
L_15166B1C:
    // 0x15166B1C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x15166B20: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x15166B24: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x15166B28: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x15166B2C: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x15166B30: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x15166B34: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x15166B38: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x15166B3C: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x15166B40: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x15166B44: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x15166B48: jr          $ra
    // 0x15166B4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x15166B4C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_151F3C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F3C1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F3C20: sw          $a0, 0xE00($at)
    MEM_W(0XE00, ctx->r1) = ctx->r4;
    // 0x151F3C24: jr          $ra
    // 0x151F3C28: nop

    return;
    return;
    // 0x151F3C28: nop

    // 0x151F3C2C: jr          $ra
    // 0x151F3C30: nop

    return;
    return;
    // 0x151F3C30: nop

;}
RECOMP_FUNC void func_150379DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150379DC: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x150379E0: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x150379E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150379E8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150379EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150379F0: lwc1        $f0, -0x79D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X79D0);
    // 0x150379F4: addiu       $v1, $v1, 0x35EA
    ctx->r3 = ADD32(ctx->r3, 0X35EA);
    // 0x150379F8: addiu       $v0, $v0, 0x3FD0
    ctx->r2 = ADD32(ctx->r2, 0X3FD0);
    // 0x150379FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15037A00: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x15037A04: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x15037A08: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x15037A0C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x15037A10: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x15037A14: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x15037A18: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x15037A1C: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x15037A20: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x15037A24: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x15037A28: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x15037A2C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x15037A30: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x15037A34: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x15037A38: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x15037A3C: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x15037A40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15037A44: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x15037A48: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x15037A4C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x15037A50: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15037A54: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x15037A58: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x15037A5C: beq         $t0, $t6, L_1503807C
    if (ctx->r8 == ctx->r14) {
        // 0x15037A60: swc1        $f0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
            goto L_1503807C;
    }
    // 0x15037A60: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x15037A64: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    // 0x15037A68: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x15037A6C: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15037A70: beq         $t0, $t7, L_1503807C
    if (ctx->r8 == ctx->r15) {
        // 0x15037A74: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_1503807C;
    }
    // 0x15037A74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15037A78: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x15037A7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15037A80: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15037A84: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15037A88: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15037A8C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15037A90: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15037A94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15037A98: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x15037A9C: lw          $v0, 0x318($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X318);
    // 0x15037AA0: beql        $v0, $zero, L_15037B00
    if (ctx->r2 == 0) {
        // 0x15037AA4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_15037B00;
    }
    goto skip_0;
    // 0x15037AA4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x15037AA8: lw          $t1, 0x2C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2C);
    // 0x15037AAC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x15037AB0: bnel        $t1, $at, L_15037B00
    if (ctx->r9 != ctx->r1) {
        // 0x15037AB4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_15037B00;
    }
    goto skip_1;
    // 0x15037AB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_1:
    // 0x15037AB8: lh          $t2, 0x73C($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X73C);
    // 0x15037ABC: beql        $t2, $zero, L_15037B00
    if (ctx->r10 == 0) {
        // 0x15037AC0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_15037B00;
    }
    goto skip_2;
    // 0x15037AC0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_2:
    // 0x15037AC4: lw          $at, 0x740($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X740);
    // 0x15037AC8: addiu       $t3, $sp, 0x108
    ctx->r11 = ADD32(ctx->r29, 0X108);
    // 0x15037ACC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15037AD0: lw          $t5, 0x744($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X744);
    // 0x15037AD4: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x15037AD8: lw          $at, 0x748($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X748);
    // 0x15037ADC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x15037AE0: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x15037AE4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15037AE8: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x15037AEC: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x15037AF0: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x15037AF4: b           L_1503807C
    // 0x15037AF8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_1503807C;
    // 0x15037AF8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x15037AFC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_15037B00:
    // 0x15037B00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15037B04: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x15037B08: jal         0x15037880
    // 0x15037B0C: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    func_15037880(rdram, ctx);
        goto after_0;
    // 0x15037B0C: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    after_0:
    // 0x15037B10: bnel        $v0, $zero, L_15038080
    if (ctx->r2 != 0) {
        // 0x15037B14: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_15038080;
    }
    goto skip_3;
    // 0x15037B14: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_3:
    // 0x15037B18: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x15037B1C: bnel        $t6, $zero, L_15037C10
    if (ctx->r14 != 0) {
        // 0x15037B20: lwc1        $f4, 0x14($s4)
        ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
            goto L_15037C10;
    }
    goto skip_4;
    // 0x15037B20: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
    skip_4:
    // 0x15037B24: lhu         $t7, 0x84($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X84);
    // 0x15037B28: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x15037B2C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x15037B30: bnel        $t7, $at, L_15037C10
    if (ctx->r15 != ctx->r1) {
        // 0x15037B34: lwc1        $f4, 0x14($s4)
        ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
            goto L_15037C10;
    }
    goto skip_5;
    // 0x15037B34: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
    skip_5:
    // 0x15037B38: jal         0x150319CC
    // 0x15037B3C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_150319CC(rdram, ctx);
        goto after_1;
    // 0x15037B3C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x15037B40: beq         $v0, $zero, L_15037C0C
    if (ctx->r2 == 0) {
        // 0x15037B44: nop
    
            goto L_15037C0C;
    }
    // 0x15037B44: nop

    // 0x15037B48: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x15037B4C: beq         $v1, $zero, L_15037C0C
    if (ctx->r3 == 0) {
        // 0x15037B50: nop
    
            goto L_15037C0C;
    }
    // 0x15037B50: nop

    // 0x15037B54: lbu         $t8, 0x3F6($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3F6);
    // 0x15037B58: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15037B5C: beq         $t8, $zero, L_15037C0C
    if (ctx->r24 == 0) {
        // 0x15037B60: nop
    
            goto L_15037C0C;
    }
    // 0x15037B60: nop

    // 0x15037B64: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x15037B68: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x15037B6C: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x15037B70: lw          $s0, 0x3E8($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X3E8);
    // 0x15037B74: beq         $s0, $zero, L_15037C0C
    if (ctx->r16 == 0) {
        // 0x15037B78: nop
    
            goto L_15037C0C;
    }
    // 0x15037B78: nop

    // 0x15037B7C: jal         0x15083E90
    // 0x15037B80: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    func_15083E90(rdram, ctx);
        goto after_2;
    // 0x15037B80: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    after_2:
    // 0x15037B84: beq         $v0, $zero, L_15037C0C
    if (ctx->r2 == 0) {
        // 0x15037B88: nop
    
            goto L_15037C0C;
    }
    // 0x15037B88: nop

    // 0x15037B8C: lbu         $t4, 0x5($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5);
    // 0x15037B90: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15037B94: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x15037B98: bne         $t4, $at, L_15037BBC
    if (ctx->r12 != ctx->r1) {
        // 0x15037B9C: nop
    
            goto L_15037BBC;
    }
    // 0x15037B9C: nop

    // 0x15037BA0: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15037BA4: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x15037BA8: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15037BAC: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x15037BB0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15037BB4: b           L_15037BC4
    // 0x15037BB8: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
        goto L_15037BC4;
    // 0x15037BB8: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
L_15037BBC:
    // 0x15037BBC: jal         0x15043FF0
    // 0x15037BC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15043FF0(rdram, ctx);
        goto after_3;
    // 0x15037BC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_15037BC4:
    // 0x15037BC4: lw          $s6, 0x168($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X168);
    // 0x15037BC8: lwc1        $f28, 0x160($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X160);
    // 0x15037BCC: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15037BD0: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15037BD4: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x15037BD8: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x15037BDC: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x15037BE0: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x15037BE4: lw          $a3, 0xF0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF0);
    // 0x15037BE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15037BEC: sw          $s6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r22;
    // 0x15037BF0: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x15037BF4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15037BF8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x15037BFC: jal         0x15037698
    // 0x15037C00: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_15037698(rdram, ctx);
        goto after_4;
    // 0x15037C00: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_4:
    // 0x15037C04: bnel        $v0, $zero, L_15038080
    if (ctx->r2 != 0) {
        // 0x15037C08: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_15038080;
    }
    goto skip_6;
    // 0x15037C08: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_6:
L_15037C0C:
    // 0x15037C0C: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
L_15037C10:
    // 0x15037C10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15037C14: lwc1        $f20, -0x79CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X79CC);
    // 0x15037C18: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15037C1C: lw          $s6, 0x168($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X168);
    // 0x15037C20: lwc1        $f28, 0x160($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X160);
    // 0x15037C24: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x15037C28: mfc1        $s5, $f6
    ctx->r21 = (int32_t)ctx->f6.u32l;
    // 0x15037C2C: addiu       $t9, $sp, 0x11C
    ctx->r25 = ADD32(ctx->r29, 0X11C);
    // 0x15037C30: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15037C34: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x15037C38: sra         $s5, $t6, 16
    ctx->r21 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15037C3C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15037C40: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x15037C44: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x15037C48: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x15037C4C: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x15037C50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15037C54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15037C58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15037C5C: swc1        $f20, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f20.u32l;
    // 0x15037C60: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x15037C64: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x15037C68: jal         0x150380C0
    // 0x15037C6C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_150380C0(rdram, ctx);
        goto after_5;
    // 0x15037C6C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_5:
    // 0x15037C70: beq         $v0, $zero, L_15037C90
    if (ctx->r2 == 0) {
        // 0x15037C74: sw          $v0, 0x148($sp)
        MEM_W(0X148, ctx->r29) = ctx->r2;
            goto L_15037C90;
    }
    // 0x15037C74: sw          $v0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r2;
    // 0x15037C78: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x15037C7C: c.eq.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl == ctx->f20.fl;
    // 0x15037C80: nop

    // 0x15037C84: bc1t        L_15037C90
    if (c1cs) {
        // 0x15037C88: nop
    
            goto L_15037C90;
    }
    // 0x15037C88: nop

    // 0x15037C8C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_15037C90:
    // 0x15037C90: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x15037C94: addiu       $s1, $s1, 0x6654
    ctx->r17 = ADD32(ctx->r17, 0X6654);
    // 0x15037C98: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15037C9C: lw          $t1, 0x4400($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4400);
    // 0x15037CA0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x15037CA4: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x15037CA8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15037CAC: sltu        $at, $t1, $v0
    ctx->r1 = ctx->r9 < ctx->r2 ? 1 : 0;
    // 0x15037CB0: bne         $at, $zero, L_15037CBC
    if (ctx->r1 != 0) {
        // 0x15037CB4: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_15037CBC;
    }
    // 0x15037CB4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15037CB8: sw          $zero, 0x4400($at)
    MEM_W(0X4400, ctx->r1) = 0;
L_15037CBC:
    // 0x15037CBC: beq         $v0, $zero, L_15037E2C
    if (ctx->r2 == 0) {
        // 0x15037CC0: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_15037E2C;
    }
    // 0x15037CC0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15037CC4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15037CC8: lw          $s0, 0x4400($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4400);
    // 0x15037CCC: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
L_15037CD0:
    // 0x15037CD0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15037CD4: lw          $t4, 0x6650($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6650);
    // 0x15037CD8: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x15037CDC: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x15037CE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15037CE4: addu        $v0, $t4, $t3
    ctx->r2 = ADD32(ctx->r12, ctx->r11);
    // 0x15037CE8: lh          $t5, 0xE($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XE);
    // 0x15037CEC: slt         $at, $s5, $t5
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x15037CF0: beql        $at, $zero, L_15037DF4
    if (ctx->r1 == 0) {
        // 0x15037CF4: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_15037DF4;
    }
    goto skip_7;
    // 0x15037CF4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x15037CF8: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x15037CFC: slt         $at, $t6, $s5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x15037D00: beql        $at, $zero, L_15037DF4
    if (ctx->r1 == 0) {
        // 0x15037D04: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_15037DF4;
    }
    goto skip_8;
    // 0x15037D04: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_8:
    // 0x15037D08: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x15037D0C: bnel        $t7, $zero, L_15037DF4
    if (ctx->r15 != 0) {
        // 0x15037D10: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_15037DF4;
    }
    goto skip_9;
    // 0x15037D10: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_9:
    // 0x15037D14: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x15037D18: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15037D1C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15037D20: bgez        $t8, L_15037D34
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15037D24: cvt.s.w     $f14, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15037D34;
    }
    // 0x15037D24: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15037D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15037D2C: nop

    // 0x15037D30: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
L_15037D34:
    // 0x15037D34: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x15037D38: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x15037D3C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15037D40: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15037D44: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x15037D48: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15037D4C: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15037D50: lwc1        $f4, 0x1C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x15037D54: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15037D58: mtc1        $s5, $f8
    ctx->f8.u32l = ctx->r21;
    // 0x15037D5C: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15037D60: lwc1        $f6, 0x18($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X18);
    // 0x15037D64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15037D68: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x15037D6C: sub.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x15037D70: sub.s       $f2, $f6, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x15037D74: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15037D78: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15037D7C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15037D80: nop

    // 0x15037D84: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15037D88: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x15037D8C: add.s       $f22, $f6, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15037D90: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
    // 0x15037D94: nop

    // 0x15037D98: bc1f        L_15037DF0
    if (!c1cs) {
        // 0x15037D9C: nop
    
            goto L_15037DF0;
    }
    // 0x15037D9C: nop

    // 0x15037DA0: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x15037DA4: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x15037DA8: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x15037DAC: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x15037DB0: bc1fl       L_15037DF4
    if (!c1cs) {
        // 0x15037DB4: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_15037DF4;
    }
    goto skip_10;
    // 0x15037DB4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_10:
    // 0x15037DB8: add.s       $f10, $f18, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x15037DBC: lw          $t4, 0x150($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X150);
    // 0x15037DC0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x15037DC4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x15037DC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15037DCC: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x15037DD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15037DD4: sw          $s6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r22;
    // 0x15037DD8: jal         0x15037698
    // 0x15037DDC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_15037698(rdram, ctx);
        goto after_6;
    // 0x15037DDC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_6:
    // 0x15037DE0: beql        $v0, $zero, L_15037DF4
    if (ctx->r2 == 0) {
        // 0x15037DE4: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_15037DF4;
    }
    goto skip_11;
    // 0x15037DE4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_11:
    // 0x15037DE8: sw          $s0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r16;
    // 0x15037DEC: swc1        $f22, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f22.u32l;
L_15037DF0:
    // 0x15037DF0: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
L_15037DF4:
    // 0x15037DF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15037DF8: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15037DFC: bne         $s0, $t3, L_15037E08
    if (ctx->r16 != ctx->r11) {
        // 0x15037E00: nop
    
            goto L_15037E08;
    }
    // 0x15037E00: nop

    // 0x15037E04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15037E08:
    // 0x15037E08: lw          $t5, 0x4400($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4400);
    // 0x15037E0C: bne         $s0, $t5, L_15037CD0
    if (ctx->r16 != ctx->r13) {
        // 0x15037E10: nop
    
            goto L_15037CD0;
    }
    // 0x15037E10: nop

    // 0x15037E14: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x15037E18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15037E1C: beq         $t6, $at, L_15037E2C
    if (ctx->r14 == ctx->r1) {
        // 0x15037E20: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_15037E2C;
    }
    // 0x15037E20: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15037E24: sw          $t6, 0x4400($at)
    MEM_W(0X4400, ctx->r1) = ctx->r14;
    // 0x15037E28: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_15037E2C:
    // 0x15037E2C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15037E30: addiu       $t8, $t8, 0x43E0
    ctx->r24 = ADD32(ctx->r24, 0X43E0);
    // 0x15037E34: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15037E38: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x15037E3C: addiu       $t7, $sp, 0xBC
    ctx->r15 = ADD32(ctx->r29, 0XBC);
    // 0x15037E40: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15037E44: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x15037E48: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x15037E4C: lw          $t2, 0xC($t8)
    ctx->r10 = MEM_W(ctx->r24, 0XC);
    // 0x15037E50: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15037E54: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x15037E58: sw          $t2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r10;
    // 0x15037E5C: lw          $t2, 0x14($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X14);
    // 0x15037E60: sw          $at, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r1;
    // 0x15037E64: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x15037E68: sw          $t2, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r10;
    // 0x15037E6C: lw          $t2, 0x1C($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X1C);
    // 0x15037E70: sw          $at, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->r1;
    // 0x15037E74: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15037E78: sw          $t2, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r10;
    // 0x15037E7C: addiu       $t4, $t4, -0x31B0
    ctx->r12 = ADD32(ctx->r12, -0X31B0);
    // 0x15037E80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15037E84: lwc1        $f26, -0x79C8($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X79C8);
    // 0x15037E88: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x15037E8C: lwc1        $f24, 0xDC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15037E90: addiu       $s3, $zero, 0x120
    ctx->r19 = ADD32(0, 0X120);
    // 0x15037E94: addiu       $s2, $zero, 0x64
    ctx->r18 = ADD32(0, 0X64);
L_15037E98:
    // 0x15037E98: addiu       $fp, $sp, 0xBC
    ctx->r30 = ADD32(ctx->r29, 0XBC);
    // 0x15037E9C: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
L_15037EA0:
    // 0x15037EA0: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x15037EA4: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x15037EA8: addu        $t5, $t3, $s1
    ctx->r13 = ADD32(ctx->r11, ctx->r17);
    // 0x15037EAC: lw          $s0, 0x0($t5)
    ctx->r16 = MEM_W(ctx->r13, 0X0);
    // 0x15037EB0: beql        $s0, $zero, L_15037FF0
    if (ctx->r16 == 0) {
        // 0x15037EB4: addiu       $fp, $fp, 0x4
        ctx->r30 = ADD32(ctx->r30, 0X4);
            goto L_15037FF0;
    }
    goto skip_12;
    // 0x15037EB4: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    skip_12:
L_15037EB8:
    // 0x15037EB8: beql        $s1, $s2, L_15037ECC
    if (ctx->r17 == ctx->r18) {
        // 0x15037EBC: lhu         $t6, 0x66($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X66);
            goto L_15037ECC;
    }
    goto skip_13;
    // 0x15037EBC: lhu         $t6, 0x66($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X66);
    skip_13:
    // 0x15037EC0: bnel        $s1, $s3, L_15037F08
    if (ctx->r17 != ctx->r19) {
        // 0x15037EC4: lwc1        $f10, 0x98($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
            goto L_15037F08;
    }
    goto skip_14;
    // 0x15037EC4: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    skip_14:
    // 0x15037EC8: lhu         $t6, 0x66($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X66);
L_15037ECC:
    // 0x15037ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15037ED0: bne         $t6, $zero, L_15037EFC
    if (ctx->r14 != 0) {
        // 0x15037ED4: nop
    
            goto L_15037EFC;
    }
    // 0x15037ED4: nop

    // 0x15037ED8: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15037EDC: mov.s       $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
    // 0x15037EE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15037EE4: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x15037EE8: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15037EEC: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x15037EF0: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15037EF4: b           L_15037F24
    // 0x15037EF8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
        goto L_15037F24;
    // 0x15037EF8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
L_15037EFC:
    // 0x15037EFC: b           L_15037F24
    // 0x15037F00: nop

        goto L_15037F24;
    // 0x15037F00: nop

    // 0x15037F04: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
L_15037F08:
    // 0x15037F08: mov.s       $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
    // 0x15037F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15037F10: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x15037F14: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15037F18: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x15037F1C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15037F20: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
L_15037F24:
    // 0x15037F24: beq         $v0, $zero, L_15037FE0
    if (ctx->r2 == 0) {
        // 0x15037F28: lwc1        $f20, 0xE8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
            goto L_15037FE0;
    }
    // 0x15037F28: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x15037F2C: lwc1        $f10, 0x1C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x15037F30: mtc1        $s5, $f6
    ctx->f6.u32l = ctx->r21;
    // 0x15037F34: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x15037F38: sub.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x15037F3C: lwc1        $f4, 0x18($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X18);
    // 0x15037F40: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15037F44: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15037F48: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15037F4C: mov.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = ctx->f8.fl;
    // 0x15037F50: sub.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x15037F54: sub.s       $f12, $f14, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x15037F58: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15037F5C: nop

    // 0x15037F60: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15037F64: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x15037F68: add.s       $f22, $f4, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x15037F6C: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x15037F70: nop

    // 0x15037F74: bc1f        L_15037FE0
    if (!c1cs) {
        // 0x15037F78: nop
    
            goto L_15037FE0;
    }
    // 0x15037F78: nop

    // 0x15037F7C: sub.s       $f12, $f14, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x15037F80: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x15037F84: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x15037F88: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x15037F8C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15037F90: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x15037F94: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x15037F98: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15037F9C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x15037FA0: nop

    // 0x15037FA4: bc1fl       L_15037FE4
    if (!c1cs) {
        // 0x15037FA8: lw          $s0, 0x8($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X8);
            goto L_15037FE4;
    }
    goto skip_15;
    // 0x15037FA8: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
    skip_15:
    // 0x15037FAC: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x15037FB0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x15037FB4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x15037FB8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x15037FBC: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x15037FC0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15037FC4: sw          $s6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r22;
    // 0x15037FC8: jal         0x15037698
    // 0x15037FCC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_15037698(rdram, ctx);
        goto after_7;
    // 0x15037FCC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_7:
    // 0x15037FD0: beql        $v0, $zero, L_15037FE4
    if (ctx->r2 == 0) {
        // 0x15037FD4: lw          $s0, 0x8($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X8);
            goto L_15037FE4;
    }
    goto skip_16;
    // 0x15037FD4: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
    skip_16:
    // 0x15037FD8: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x15037FDC: swc1        $f22, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f22.u32l;
L_15037FE0:
    // 0x15037FE0: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
L_15037FE4:
    // 0x15037FE4: bne         $s0, $zero, L_15037EB8
    if (ctx->r16 != 0) {
        // 0x15037FE8: nop
    
            goto L_15037EB8;
    }
    // 0x15037FE8: nop

    // 0x15037FEC: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
L_15037FF0:
    // 0x15037FF0: addiu       $t9, $sp, 0xDC
    ctx->r25 = ADD32(ctx->r29, 0XDC);
    // 0x15037FF4: bnel        $fp, $t9, L_15037EA0
    if (ctx->r30 != ctx->r25) {
        // 0x15037FF8: lw          $v0, 0x0($fp)
        ctx->r2 = MEM_W(ctx->r30, 0X0);
            goto L_15037EA0;
    }
    goto skip_17;
    // 0x15037FF8: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    skip_17:
    // 0x15037FFC: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x15038000: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15038004: addiu       $t2, $t2, -0x2E70
    ctx->r10 = ADD32(ctx->r10, -0X2E70);
    // 0x15038008: addiu       $t8, $t7, 0x1A0
    ctx->r24 = ADD32(ctx->r15, 0X1A0);
    // 0x1503800C: bne         $t8, $t2, L_15037E98
    if (ctx->r24 != ctx->r10) {
        // 0x15038010: sw          $t8, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r24;
            goto L_15037E98;
    }
    // 0x15038010: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x15038014: swc1        $f24, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f24.u32l;
    // 0x15038018: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1503801C: bne         $s7, $at, L_15038038
    if (ctx->r23 != ctx->r1) {
        // 0x15038020: lw          $a1, 0x148($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X148);
            goto L_15038038;
    }
    // 0x15038020: lw          $a1, 0x148($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X148);
    // 0x15038024: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15038028: jal         0x1507E9E8
    // 0x1503802C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_1507E9E8(rdram, ctx);
        goto after_8;
    // 0x1503802C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_8:
    // 0x15038030: b           L_15038080
    // 0x15038034: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
        goto L_15038080;
    // 0x15038034: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_15038038:
    // 0x15038038: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1503803C: bne         $s7, $at, L_1503807C
    if (ctx->r23 != ctx->r1) {
        // 0x15038040: lw          $t3, 0x120($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X120);
            goto L_1503807C;
    }
    // 0x15038040: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x15038044: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15038048: lw          $t4, 0x6650($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6650);
    // 0x1503804C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x15038050: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x15038054: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15038058: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1503805C: lh          $v0, 0x12($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X12);
    // 0x15038060: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15038064: beql        $v0, $zero, L_15038080
    if (ctx->r2 == 0) {
        // 0x15038068: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_15038080;
    }
    goto skip_18;
    // 0x15038068: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_18:
    // 0x1503806C: jal         0x1507E9E8
    // 0x15038070: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    func_1507E9E8(rdram, ctx);
        goto after_9;
    // 0x15038070: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    after_9:
    // 0x15038074: b           L_15038080
    // 0x15038078: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
        goto L_15038080;
    // 0x15038078: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1503807C:
    // 0x1503807C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_15038080:
    // 0x15038080: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x15038084: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x15038088: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x1503808C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x15038090: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x15038094: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x15038098: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1503809C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x150380A0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x150380A4: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x150380A8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x150380AC: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x150380B0: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x150380B4: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x150380B8: jr          $ra
    // 0x150380BC: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    return;
    // 0x150380BC: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_1514F808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F808: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514F80C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514F810: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514F814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514F818: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1514F81C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1514F820: jal         0x150ADA20
    // 0x1514F824: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514F824: nop

    after_0:
    // 0x1514F828: jal         0x150ADA68
    // 0x1514F82C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1514F82C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x1514F830: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1514F834: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1514F838: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x1514F83C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1514F840: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1514F844: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x1514F848: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1514F84C: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x1514F850: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1514F854: jal         0x15143874
    // 0x1514F858: nop

    func_15143874(rdram, ctx);
        goto after_2;
    // 0x1514F858: nop

    after_2:
    // 0x1514F85C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1514F860: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1514F864: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1514F868: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1514F86C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514F870: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514F874: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1514F878: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514F87C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x1514F880: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1514F884: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1514F888: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1514F88C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1514F890: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1514F894: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1514F898: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1514F89C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1514F8A0: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1514F8A4: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514F8A8: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1514F8AC: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1514F8B0: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1514F8B4: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514F8B8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x1514F8BC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1514F8C0: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1514F8C4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1514F8C8: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1514F8CC: mul.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1514F8D0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1514F8D4: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1514F8D8: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514F8DC: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1514F8E0: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514F8E4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x1514F8E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514F8EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514F8F0: jr          $ra
    // 0x1514F8F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1514F8F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1506E9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E9DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E9E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E9E4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E9E8: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E9EC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E9F0: jal         0x1506E46C
    // 0x1506E9F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E9F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506E9F8: beq         $v0, $zero, L_1506EA08
    if (ctx->r2 == 0) {
        // 0x1506E9FC: addiu       $a0, $zero, 0x2BC
        ctx->r4 = ADD32(0, 0X2BC);
            goto L_1506EA08;
    }
    // 0x1506E9FC: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x1506EA00: jal         0x1506BAD8
    // 0x1506EA04: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    func_1506BAD8(rdram, ctx);
        goto after_1;
    // 0x1506EA04: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    after_1:
L_1506EA08:
    // 0x1506EA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506EA0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506EA10: jr          $ra
    // 0x1506EA14: nop

    return;
    return;
    // 0x1506EA14: nop

;}
RECOMP_FUNC void func_15134908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15134908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1513490C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15134910: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15134914: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15134918: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1513491C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15134920: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15134924: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x15134928: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1513492C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15134930: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x15134934: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x15134938: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513493C: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x15134940: jal         0x15167A68
    // 0x15134944: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15134944: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15134948: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1513494C: bne         $v0, $zero, L_1513495C
    if (ctx->r2 != 0) {
        // 0x15134950: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1513495C;
    }
    // 0x15134950: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15134954: b           L_151349C0
    // 0x15134958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151349C0;
    // 0x15134958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513495C:
    // 0x1513495C: lbu         $t8, 0x16($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X16);
    // 0x15134960: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x15134964: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x15134968: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x1513496C: sb          $t9, 0x16($a1)
    MEM_B(0X16, ctx->r5) = ctx->r25;
    // 0x15134970: jal         0x10022EC0
    // 0x15134974: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15134974: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x15134978: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x1513497C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15134980: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15134984: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15134988: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x1513498C: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x15134990: add.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15134994: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15134998: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x1513499C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151349A0: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x151349A4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151349A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151349AC: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x151349B0: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151349B4: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x151349B8: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x151349BC: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
L_151349C0:
    // 0x151349C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151349C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151349C8: jr          $ra
    // 0x151349CC: nop

    return;
    return;
    // 0x151349CC: nop

;}
RECOMP_FUNC void func_1509F5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F5F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1509F5F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509F5FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1509F600: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1509F604: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1509F608: jal         0x1505EEF4
    // 0x1509F60C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x1509F60C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x1509F610: beq         $v0, $zero, L_1509F650
    if (ctx->r2 == 0) {
        // 0x1509F614: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1509F650;
    }
    // 0x1509F614: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1509F618: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x1509F61C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1509F620: bnel        $t6, $zero, L_1509F63C
    if (ctx->r14 != 0) {
        // 0x1509F624: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_1509F63C;
    }
    goto skip_0;
    // 0x1509F624: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x1509F628: jal         0x10010894
    // 0x1509F62C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_10010894(rdram, ctx);
        goto after_1;
    // 0x1509F62C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x1509F630: bne         $v0, $zero, L_1509F650
    if (ctx->r2 != 0) {
        // 0x1509F634: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_1509F650;
    }
    // 0x1509F634: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1509F638: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_1509F63C:
    // 0x1509F63C: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x1509F640: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x1509F644: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x1509F648: jal         0x10010344
    // 0x1509F64C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_10010344(rdram, ctx);
        goto after_2;
    // 0x1509F64C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
L_1509F650:
    // 0x1509F650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509F654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1509F658: jr          $ra
    // 0x1509F65C: nop

    return;
    return;
    // 0x1509F65C: nop

;}
RECOMP_FUNC void func_150C68C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C68C4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150C68C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150C68CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C68D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C68D4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150C68D8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x150C68DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C68E0: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x150C68E4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150C68E8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C68EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C68F0: lwc1        $f8, 0x450($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X450);
    // 0x150C68F4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150C68F8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C68FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C6900: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C6904: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C6908: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150C690C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C6910: addiu       $a3, $t6, 0x34
    ctx->r7 = ADD32(ctx->r14, 0X34);
    // 0x150C6914: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150C6918: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C691C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x150C6920: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C6924: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150C6928: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C692C: jal         0x15045800
    // 0x150C6930: nop

    func_15045800(rdram, ctx);
        goto after_0;
    // 0x150C6930: nop

    after_0:
    // 0x150C6934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C6938: beq         $v0, $zero, L_150C6950
    if (ctx->r2 == 0) {
        // 0x150C693C: addiu       $t0, $zero, 0x12C
        ctx->r8 = ADD32(0, 0X12C);
            goto L_150C6950;
    }
    // 0x150C693C: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x150C6940: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x150C6944: lwc1        $f8, 0x34($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X34);
    // 0x150C6948: b           L_150C6964
    // 0x150C694C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
        goto L_150C6964;
    // 0x150C694C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_150C6950:
    // 0x150C6950: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C6954: lwc1        $f16, 0x454($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X454);
    // 0x150C6958: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C695C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C6960: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
L_150C6964:
    // 0x150C6964: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150C6968: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150C696C: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x150C6970: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150C6974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C6978: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C697C: lwc1        $f6, 0x458($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X458);
    // 0x150C6980: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150C6984: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x150C6988: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150C698C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150C6990: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150C6994: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x150C6998: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150C699C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x150C69A0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x150C69A4: sh          $t0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r8;
    // 0x150C69A8: sb          $t1, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r9;
    // 0x150C69AC: sb          $t2, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r10;
    // 0x150C69B0: sb          $t3, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r11;
    // 0x150C69B4: sb          $t4, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r12;
    // 0x150C69B8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150C69BC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x150C69C0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150C69C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C69C8: sb          $t9, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r25;
    // 0x150C69CC: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150C69D0: jal         0x1513418C
    // 0x150C69D4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    func_1513418C(rdram, ctx);
        goto after_1;
    // 0x150C69D4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150C69D8: beq         $v0, $zero, L_150C69F0
    if (ctx->r2 == 0) {
        // 0x150C69DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_150C69F0;
    }
    // 0x150C69DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150C69E0: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x150C69E4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150C69E8: jal         0x10022EC0
    // 0x150C69EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150C69EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_150C69F0:
    // 0x150C69F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150C69F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150C69F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150C69FC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150C6A00: jr          $ra
    // 0x150C6A04: nop

    return;
    return;
    // 0x150C6A04: nop

;}
RECOMP_FUNC void func_1516441C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516441C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15164420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15164424: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15164428: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1516442C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x15164430: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x15164434: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15164438: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1516443C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x15164440: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15164444: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15164448: jal         0x15145CD0
    // 0x1516444C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    func_15145CD0(rdram, ctx);
        goto after_0;
    // 0x1516444C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    after_0:
    // 0x15164450: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15164454: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x15164458: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1516445C: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x15164460: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15164464: nop

    // 0x15164468: sh          $t9, 0xE($t0)
    MEM_H(0XE, ctx->r8) = ctx->r25;
    // 0x1516446C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15164470: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x15164474: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15164478: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1516447C: nop

    // 0x15164480: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x15164484: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15164488: lw          $t7, 0x14($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X14);
    // 0x1516448C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15164490: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x15164494: nop

    // 0x15164498: sh          $t5, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r13;
    // 0x1516449C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151644A0: jr          $ra
    // 0x151644A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151644A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150C5D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5D10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150C5D14: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150C5D18: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150C5D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5D20: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150C5D24: bne         $a2, $zero, L_150C5D60
    if (ctx->r6 != 0) {
        // 0x150C5D28: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150C5D60;
    }
    // 0x150C5D28: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150C5D2C: addiu       $v0, $a3, 0xC8
    ctx->r2 = ADD32(ctx->r7, 0XC8);
    // 0x150C5D30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150C5D34: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x150C5D38: beq         $t7, $t8, L_150C5D50
    if (ctx->r15 == ctx->r24) {
        // 0x150C5D3C: nop
    
            goto L_150C5D50;
    }
    // 0x150C5D3C: nop

    // 0x150C5D40: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x150C5D44: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x150C5D48: bnel        $t9, $t0, L_150C5DAC
    if (ctx->r25 != ctx->r8) {
        // 0x150C5D4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C5DAC;
    }
    goto skip_0;
    // 0x150C5D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150C5D50:
    // 0x150C5D50: jal         0x1516972C
    // 0x150C5D54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150C5D54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x150C5D58: b           L_150C5DAC
    // 0x150C5D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C5DAC;
    // 0x150C5D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5D60:
    // 0x150C5D60: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150C5D64: bne         $v0, $at, L_150C5DA8
    if (ctx->r2 != ctx->r1) {
        // 0x150C5D68: addiu       $v0, $a3, 0xC8
        ctx->r2 = ADD32(ctx->r7, 0XC8);
            goto L_150C5DA8;
    }
    // 0x150C5D68: addiu       $v0, $a3, 0xC8
    ctx->r2 = ADD32(ctx->r7, 0XC8);
    // 0x150C5D6C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150C5D70: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150C5D74: bnel        $v1, $a0, L_150C5D94
    if (ctx->r3 != ctx->r4) {
        // 0x150C5D78: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_150C5D94;
    }
    goto skip_1;
    // 0x150C5D78: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x150C5D7C: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x150C5D80: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x150C5D84: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x150C5D88: b           L_150C5DA8
    // 0x150C5D8C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
        goto L_150C5DA8;
    // 0x150C5D8C: sb          $t2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r10;
    // 0x150C5D90: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_150C5D94:
    // 0x150C5D94: bnel        $t3, $a0, L_150C5DAC
    if (ctx->r11 != ctx->r4) {
        // 0x150C5D98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C5DAC;
    }
    goto skip_2;
    // 0x150C5D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150C5D9C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150C5DA0: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x150C5DA4: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
L_150C5DA8:
    // 0x150C5DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5DAC:
    // 0x150C5DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5DB0: jr          $ra
    // 0x150C5DB4: nop

    return;
    return;
    // 0x150C5DB4: nop

;}
RECOMP_FUNC void func_1507FEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507FEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507FEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507FEA8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1507FEAC: lw          $a1, 0x31C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X31C);
    // 0x1507FEB0: beql        $a1, $zero, L_1507FF88
    if (ctx->r5 == 0) {
        // 0x1507FEB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507FF88;
    }
    goto skip_0;
    // 0x1507FEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507FEB8: lbu         $t6, 0x127($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X127);
    // 0x1507FEBC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1507FEC0: beql        $t6, $at, L_1507FF88
    if (ctx->r14 == ctx->r1) {
        // 0x1507FEC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507FF88;
    }
    goto skip_1;
    // 0x1507FEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1507FEC8: lbu         $v1, 0x13A($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X13A);
    // 0x1507FECC: addiu       $v0, $a1, 0x58
    ctx->r2 = ADD32(ctx->r5, 0X58);
    // 0x1507FED0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1507FED4: beq         $v1, $zero, L_1507FEE0
    if (ctx->r3 == 0) {
        // 0x1507FED8: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_1507FEE0;
    }
    // 0x1507FED8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x1507FEDC: sb          $t7, 0x13A($a2)
    MEM_B(0X13A, ctx->r6) = ctx->r15;
L_1507FEE0:
    // 0x1507FEE0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1507FEE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1507FEE8: bnel        $v1, $t8, L_1507FF28
    if (ctx->r3 != ctx->r24) {
        // 0x1507FEEC: sh          $zero, 0x2($v0)
        MEM_H(0X2, ctx->r2) = 0;
            goto L_1507FF28;
    }
    goto skip_2;
    // 0x1507FEEC: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    skip_2:
    // 0x1507FEF0: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x1507FEF4: beq         $v1, $t9, L_1507FF24
    if (ctx->r3 == ctx->r25) {
        // 0x1507FEF8: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_1507FF24;
    }
    // 0x1507FEF8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1507FEFC: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1507FF00: lhu         $a1, 0x2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2);
    // 0x1507FF04: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x1507FF08: subu        $a0, $t0, $v1
    ctx->r4 = SUB32(ctx->r8, ctx->r3);
    // 0x1507FF0C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1507FF10: beq         $at, $zero, L_1507FF1C
    if (ctx->r1 == 0) {
        // 0x1507FF14: addu        $t1, $a1, $v1
        ctx->r9 = ADD32(ctx->r5, ctx->r3);
            goto L_1507FF1C;
    }
    // 0x1507FF14: addu        $t1, $a1, $v1
    ctx->r9 = ADD32(ctx->r5, ctx->r3);
    // 0x1507FF18: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_1507FF1C:
    // 0x1507FF1C: b           L_1507FF3C
    // 0x1507FF20: lw          $a1, 0x31C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X31C);
        goto L_1507FF3C;
    // 0x1507FF20: lw          $a1, 0x31C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X31C);
L_1507FF24:
    // 0x1507FF24: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_1507FF28:
    // 0x1507FF28: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x1507FF2C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x1507FF30: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x1507FF34: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x1507FF38: lw          $a1, 0x31C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X31C);
L_1507FF3C:
    // 0x1507FF3C: lh          $v0, 0x66($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X66);
    // 0x1507FF40: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1507FF44: beq         $v0, $zero, L_1507FF7C
    if (ctx->r2 == 0) {
        // 0x1507FF48: nop
    
            goto L_1507FF7C;
    }
    // 0x1507FF48: nop

    // 0x1507FF4C: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1507FF50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1507FF54: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507FF58: beq         $at, $zero, L_1507FF68
    if (ctx->r1 == 0) {
        // 0x1507FF5C: subu        $t2, $v0, $v1
        ctx->r10 = SUB32(ctx->r2, ctx->r3);
            goto L_1507FF68;
    }
    // 0x1507FF5C: subu        $t2, $v0, $v1
    ctx->r10 = SUB32(ctx->r2, ctx->r3);
    // 0x1507FF60: b           L_1507FF7C
    // 0x1507FF64: sh          $t2, 0x66($a1)
    MEM_H(0X66, ctx->r5) = ctx->r10;
        goto L_1507FF7C;
    // 0x1507FF64: sh          $t2, 0x66($a1)
    MEM_H(0X66, ctx->r5) = ctx->r10;
L_1507FF68:
    // 0x1507FF68: jal         0x1507FF94
    // 0x1507FF6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_1507FF94(rdram, ctx);
        goto after_0;
    // 0x1507FF6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x1507FF70: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1507FF74: lw          $t3, 0x31C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X31C);
    // 0x1507FF78: sh          $zero, 0x66($t3)
    MEM_H(0X66, ctx->r11) = 0;
L_1507FF7C:
    // 0x1507FF7C: jal         0x1507FC2C
    // 0x1507FF80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1507FC2C(rdram, ctx);
        goto after_1;
    // 0x1507FF80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x1507FF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507FF88:
    // 0x1507FF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507FF8C: jr          $ra
    // 0x1507FF90: nop

    return;
    return;
    // 0x1507FF90: nop

;}
RECOMP_FUNC void func_15010880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010880: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15010884: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15010888: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1501088C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15010890: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x15010894: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15010898: addiu       $t6, $zero, -0xCBF
    ctx->r14 = ADD32(0, -0XCBF);
    // 0x1501089C: addiu       $t7, $zero, 0x3A98
    ctx->r15 = ADD32(0, 0X3A98);
    // 0x150108A0: addiu       $t8, $zero, 0x4D
    ctx->r24 = ADD32(0, 0X4D);
    // 0x150108A4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x150108A8: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x150108AC: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x150108B0: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x150108B4: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x150108B8: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x150108BC: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x150108C0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x150108C4: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x150108C8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x150108CC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150108D0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x150108D4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150108D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150108DC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x150108E0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150108E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150108E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x150108EC: addiu       $a1, $zero, 0xE9
    ctx->r5 = ADD32(0, 0XE9);
    // 0x150108F0: addiu       $a2, $zero, -0x1B5
    ctx->r6 = ADD32(0, -0X1B5);
    // 0x150108F4: addiu       $a3, $zero, 0x463
    ctx->r7 = ADD32(0, 0X463);
    // 0x150108F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x150108FC: jal         0x15177410
    // 0x15010900: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_15177410(rdram, ctx);
        goto after_0;
    // 0x15010900: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15010904: lui         $t6, 0x150E
    ctx->r14 = S32(0X150E << 16);
    // 0x15010908: addiu       $t6, $t6, -0x1CD4
    ctx->r14 = ADD32(ctx->r14, -0X1CD4);
    // 0x1501090C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15010910: sw          $t6, 0x934($at)
    MEM_W(0X934, ctx->r1) = ctx->r14;
    // 0x15010914: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15010918: lw          $v0, 0x3098($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3098);
    // 0x1501091C: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x15010920: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15010924: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15010928: addiu       $t7, $v0, 0xEA0
    ctx->r15 = ADD32(ctx->r2, 0XEA0);
    // 0x1501092C: addiu       $t8, $v0, 0xED4
    ctx->r24 = ADD32(ctx->r2, 0XED4);
    // 0x15010930: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x15010934: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x15010938: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x1501093C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15010940: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15010944: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15010948: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1501094C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15010950: addiu       $a2, $zero, 0x5E
    ctx->r6 = ADD32(0, 0X5E);
    // 0x15010954: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501095C: jal         0x15149130
    // 0x15010960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x15010960: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x15010964: beq         $v0, $zero, L_15010978
    if (ctx->r2 == 0) {
        // 0x15010968: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15010978;
    }
    // 0x15010968: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1501096C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x15010970: jal         0x10022EC0
    // 0x15010974: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15010974: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_15010978:
    // 0x15010978: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1501097C: lw          $t2, 0x2E4C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2E4C);
    // 0x15010980: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x15010984: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x15010988: lbu         $t3, 0x12($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X12);
    // 0x1501098C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15010990: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010994: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x15010998: beq         $t4, $zero, L_150109C0
    if (ctx->r12 == 0) {
        // 0x1501099C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_150109C0;
    }
    // 0x1501099C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150109A0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150109A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150109A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150109AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150109B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150109B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150109B8: jal         0x15149130
    // 0x150109BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_3;
    // 0x150109BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
L_150109C0:
    // 0x150109C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150109C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150109C8: jr          $ra
    // 0x150109CC: nop

    return;
    return;
    // 0x150109CC: nop

;}
RECOMP_FUNC void func_151B498C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B498C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151B4990: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151B4994: lui         $t6, 0x22
    ctx->r14 = S32(0X22 << 16);
    // 0x151B4998: ori         $t6, $t6, 0x5
    ctx->r14 = ctx->r14 | 0X5;
    // 0x151B499C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x151B49A0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x151B49A4: ori         $t7, $t7, 0x600
    ctx->r15 = ctx->r15 | 0X600;
    // 0x151B49A8: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x151B49AC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x151B49B0: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x151B49B4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151B49B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B49BC: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x151B49C0: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x151B49C4: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x151B49C8: sw          $v1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r3;
    // 0x151B49CC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x151B49D0: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x151B49D4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x151B49D8: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x151B49DC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x151B49E0: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x151B49E4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x151B49E8: sw          $v1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r3;
    // 0x151B49EC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x151B49F0: sw          $v1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r3;
    // 0x151B49F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x151B49F8: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x151B49FC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x151B4A00: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x151B4A04: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x151B4A08: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x151B4A0C: jr          $ra
    // 0x151B4A10: nop

    return;
    return;
    // 0x151B4A10: nop

;}
RECOMP_FUNC void func_15074BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074BEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15074BF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15074BF4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15074BF8: jr          $ra
    // 0x15074BFC: nop

    return;
    return;
    // 0x15074BFC: nop

;}
RECOMP_FUNC void func_15087E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15087E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15087E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15087E5C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15087E60: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15087E64: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x15087E68: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x15087E6C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15087E70: beq         $v1, $zero, L_15087EE0
    if (ctx->r3 == 0) {
        // 0x15087E74: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15087EE0;
    }
    // 0x15087E74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15087E78: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15087E7C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15087E80: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15087E84: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x15087E88: jal         0x1505A630
    // 0x15087E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15087E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15087E90: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x15087E94: addiu       $a0, $v0, 0x4000
    ctx->r4 = ADD32(ctx->r2, 0X4000);
    // 0x15087E98: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x15087E9C: lhu         $t8, 0x76($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X76);
    // 0x15087EA0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15087EA4: ori         $at, $zero, 0xDBFF
    ctx->r1 = 0 | 0XDBFF;
    // 0x15087EA8: subu        $v1, $t7, $t8
    ctx->r3 = SUB32(ctx->r15, ctx->r24);
    // 0x15087EAC: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x15087EB0: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x15087EB4: beq         $t0, $zero, L_15087ED0
    if (ctx->r8 == 0) {
        // 0x15087EB8: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_15087ED0;
    }
    // 0x15087EB8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15087EBC: slt         $at, $t9, $at
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x15087EC0: beq         $at, $zero, L_15087EE0
    if (ctx->r1 == 0) {
        // 0x15087EC4: addiu       $t1, $t7, 0x2400
        ctx->r9 = ADD32(ctx->r15, 0X2400);
            goto L_15087EE0;
    }
    // 0x15087EC4: addiu       $t1, $t7, 0x2400
    ctx->r9 = ADD32(ctx->r15, 0X2400);
    // 0x15087EC8: b           L_15087EE0
    // 0x15087ECC: sh          $t1, 0x76($a3)
    MEM_H(0X76, ctx->r7) = ctx->r9;
        goto L_15087EE0;
    // 0x15087ECC: sh          $t1, 0x76($a3)
    MEM_H(0X76, ctx->r7) = ctx->r9;
L_15087ED0:
    // 0x15087ED0: slti        $at, $a1, 0x2401
    ctx->r1 = SIGNED(ctx->r5) < 0X2401 ? 1 : 0;
    // 0x15087ED4: bne         $at, $zero, L_15087EE0
    if (ctx->r1 != 0) {
        // 0x15087ED8: addiu       $t2, $a0, -0x2400
        ctx->r10 = ADD32(ctx->r4, -0X2400);
            goto L_15087EE0;
    }
    // 0x15087ED8: addiu       $t2, $a0, -0x2400
    ctx->r10 = ADD32(ctx->r4, -0X2400);
    // 0x15087EDC: sh          $t2, 0x76($a3)
    MEM_H(0X76, ctx->r7) = ctx->r10;
L_15087EE0:
    // 0x15087EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15087EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15087EE8: jr          $ra
    // 0x15087EEC: nop

    return;
    return;
    // 0x15087EEC: nop

;}

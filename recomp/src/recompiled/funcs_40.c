#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1517D7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517D7B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1517D7B4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1517D7B8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1517D7BC: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x1517D7C0: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x1517D7C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1517D7C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1517D7CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1517D7D0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1517D7D4: addiu       $s7, $s7, -0x1640
    ctx->r23 = ADD32(ctx->r23, -0X1640);
    // 0x1517D7D8: addiu       $s6, $s6, -0x22F0
    ctx->r22 = ADD32(ctx->r22, -0X22F0);
    // 0x1517D7DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1517D7E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1517D7E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1517D7E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1517D7EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1517D7F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1517D7F4: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x1517D7F8: ori         $s2, $zero, 0xFFFF
    ctx->r18 = 0 | 0XFFFF;
    // 0x1517D7FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x1517D800: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1517D804: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x1517D808: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1517D80C: beql        $t9, $zero, L_1517DE30
    if (ctx->r25 == 0) {
        // 0x1517D810: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_1517DE30;
    }
    goto skip_0;
    // 0x1517D810: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1517D814: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1517D818: jal         0x1517D690
    // 0x1517D81C: lw          $a1, -0x22DC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X22DC);
    func_1517D690(rdram, ctx);
        goto after_0;
    // 0x1517D81C: lw          $a1, -0x22DC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X22DC);
    after_0:
    // 0x1517D820: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x1517D824: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517D828: lw          $t6, -0x22E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22E0);
    // 0x1517D82C: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1517D830: addiu       $s3, $s3, -0x22A8
    ctx->r19 = ADD32(ctx->r19, -0X22A8);
    // 0x1517D834: beql        $t6, $zero, L_1517DE30
    if (ctx->r14 == 0) {
        // 0x1517D838: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_1517DE30;
    }
    goto skip_1;
    // 0x1517D838: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x1517D83C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x1517D840: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1517D844: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x1517D848: beq         $t7, $zero, L_1517DE2C
    if (ctx->r15 == 0) {
        // 0x1517D84C: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_1517DE2C;
    }
    // 0x1517D84C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1517D850: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517D854: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1517D858: addiu       $t6, $t6, -0x3060
    ctx->r14 = ADD32(ctx->r14, -0X3060);
    // 0x1517D85C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x1517D860: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x1517D864: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1517D868: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1517D86C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1517D870: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x1517D874: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1517D878: jal         0x1510CDB8
    // 0x1517D87C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510CDB8(rdram, ctx);
        goto after_1;
    // 0x1517D87C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1517D880: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x1517D884: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x1517D888: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x1517D88C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1517D890: beql        $a0, $zero, L_1517DDF8
    if (ctx->r4 == 0) {
        // 0x1517D894: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1517DDF8;
    }
    goto skip_2;
    // 0x1517D894: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_2:
L_1517D898:
    // 0x1517D898: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1517D89C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x1517D8A0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1517D8A4: subu        $v0, $a0, $t7
    ctx->r2 = SUB32(ctx->r4, ctx->r15);
    // 0x1517D8A8: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x1517D8AC: bne         $at, $zero, L_1517D8BC
    if (ctx->r1 != 0) {
        // 0x1517D8B0: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_1517D8BC;
    }
    // 0x1517D8B0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x1517D8B4: b           L_1517D8BC
    // 0x1517D8B8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
        goto L_1517D8BC;
    // 0x1517D8B8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
L_1517D8BC:
    // 0x1517D8BC: beql        $t5, $zero, L_1517D914
    if (ctx->r13 == 0) {
        // 0x1517D8C0: addiu       $at, $zero, 0x1111
        ctx->r1 = ADD32(0, 0X1111);
            goto L_1517D914;
    }
    goto skip_3;
    // 0x1517D8C0: addiu       $at, $zero, 0x1111
    ctx->r1 = ADD32(0, 0X1111);
    skip_3:
    // 0x1517D8C4: lbu         $t8, 0x0($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X0);
    // 0x1517D8C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1517D8CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1517D8D0: addu        $t6, $s6, $t9
    ctx->r14 = ADD32(ctx->r22, ctx->r25);
    // 0x1517D8D4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x1517D8D8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1517D8DC: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x1517D8E0: addu        $a0, $t7, $t6
    ctx->r4 = ADD32(ctx->r15, ctx->r14);
L_1517D8E4:
    // 0x1517D8E4: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x1517D8E8: lhu         $t9, 0x16($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X16);
    // 0x1517D8EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517D8F0: sllv        $t6, $t7, $s5
    ctx->r14 = S32(ctx->r15 << (ctx->r21 & 31));
    // 0x1517D8F4: beql        $s1, $t9, L_1517D904
    if (ctx->r17 == ctx->r25) {
        // 0x1517D8F8: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_1517D904;
    }
    goto skip_4;
    // 0x1517D8F8: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    skip_4:
    // 0x1517D8FC: or          $t3, $t3, $t6
    ctx->r11 = ctx->r11 | ctx->r14;
    // 0x1517D900: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_1517D904:
    // 0x1517D904: sltu        $at, $s5, $t5
    ctx->r1 = ctx->r21 < ctx->r13 ? 1 : 0;
    // 0x1517D908: bne         $at, $zero, L_1517D8E4
    if (ctx->r1 != 0) {
        // 0x1517D90C: addiu       $v0, $v0, 0x40
        ctx->r2 = ADD32(ctx->r2, 0X40);
            goto L_1517D8E4;
    }
    // 0x1517D90C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x1517D910: addiu       $at, $zero, 0x1111
    ctx->r1 = ADD32(0, 0X1111);
L_1517D914:
    // 0x1517D914: beq         $t3, $at, L_1517DDD0
    if (ctx->r11 == ctx->r1) {
        // 0x1517D918: sw          $s1, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r17;
            goto L_1517DDD0;
    }
    // 0x1517D918: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1517D91C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517D920: andi        $t9, $t5, 0xFF
    ctx->r25 = ctx->r13 & 0XFF;
    // 0x1517D924: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x1517D928: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x1517D92C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x1517D930: andi        $t8, $t5, 0x7F
    ctx->r24 = ctx->r13 & 0X7F;
    // 0x1517D934: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x1517D938: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x1517D93C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1517D940: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x1517D944: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1517D948: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x1517D94C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1517D950: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x1517D954: sll         $t8, $fp, 2
    ctx->r24 = S32(ctx->r30 << 2);
    // 0x1517D958: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x1517D95C: addu        $t7, $s6, $t9
    ctx->r15 = ADD32(ctx->r22, ctx->r25);
    // 0x1517D960: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1517D964: sll         $t6, $fp, 4
    ctx->r14 = S32(ctx->r30 << 4);
    // 0x1517D968: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x1517D96C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1517D970: beq         $t5, $zero, L_1517DDD0
    if (ctx->r13 == 0) {
        // 0x1517D974: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_1517DDD0;
    }
    // 0x1517D974: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1517D978: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
L_1517D97C:
    // 0x1517D97C: beq         $at, $zero, L_1517D9F4
    if (ctx->r1 == 0) {
        // 0x1517D980: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_1517D9F4;
    }
    // 0x1517D980: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x1517D984: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x1517D988: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x1517D98C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1517D990: addu        $t6, $s6, $t8
    ctx->r14 = ADD32(ctx->r22, ctx->r24);
    // 0x1517D994: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x1517D998: sll         $t7, $fp, 4
    ctx->r15 = S32(ctx->r30 << 4);
    // 0x1517D99C: addu        $a0, $t9, $t7
    ctx->r4 = ADD32(ctx->r25, ctx->r15);
    // 0x1517D9A0: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x1517D9A4: lhu         $t6, 0x6($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X6);
    // 0x1517D9A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1517D9AC: sllv        $t7, $t9, $v1
    ctx->r15 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x1517D9B0: bne         $s2, $t6, L_1517D9C0
    if (ctx->r18 != ctx->r14) {
        // 0x1517D9B4: and         $t8, $t7, $t3
        ctx->r24 = ctx->r15 & ctx->r11;
            goto L_1517D9C0;
    }
    // 0x1517D9B4: and         $t8, $t7, $t3
    ctx->r24 = ctx->r15 & ctx->r11;
    // 0x1517D9B8: beql        $t8, $zero, L_1517D9F8
    if (ctx->r24 == 0) {
        // 0x1517D9BC: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_1517D9F8;
    }
    goto skip_5;
    // 0x1517D9BC: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    skip_5:
L_1517D9C0:
    // 0x1517D9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1517D9C4:
    // 0x1517D9C4: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x1517D9C8: beq         $at, $zero, L_1517D9F4
    if (ctx->r1 == 0) {
        // 0x1517D9CC: addiu       $v0, $v0, 0x40
        ctx->r2 = ADD32(ctx->r2, 0X40);
            goto L_1517D9F4;
    }
    // 0x1517D9CC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x1517D9D0: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x1517D9D4: lhu         $t9, 0x6($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X6);
    // 0x1517D9D8: bnel        $s2, $t9, L_1517D9C4
    if (ctx->r18 != ctx->r25) {
        // 0x1517D9DC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1517D9C4;
    }
    goto skip_6;
    // 0x1517D9DC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_6:
    // 0x1517D9E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517D9E4: sllv        $t8, $t7, $v1
    ctx->r24 = S32(ctx->r15 << (ctx->r3 & 31));
    // 0x1517D9E8: and         $t6, $t8, $t3
    ctx->r14 = ctx->r24 & ctx->r11;
    // 0x1517D9EC: bnel        $t6, $zero, L_1517D9C4
    if (ctx->r14 != 0) {
        // 0x1517D9F0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1517D9C4;
    }
    goto skip_7;
    // 0x1517D9F0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_7:
L_1517D9F4:
    // 0x1517D9F4: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
L_1517D9F8:
    // 0x1517D9F8: bne         $at, $zero, L_1517DCBC
    if (ctx->r1 != 0) {
        // 0x1517D9FC: addiu       $at, $zero, 0x1111
        ctx->r1 = ADD32(0, 0X1111);
            goto L_1517DCBC;
    }
    // 0x1517D9FC: addiu       $at, $zero, 0x1111
    ctx->r1 = ADD32(0, 0X1111);
    // 0x1517DA00: beql        $t3, $at, L_1517DCC0
    if (ctx->r11 == ctx->r1) {
        // 0x1517DA04: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_1517DCC0;
    }
    goto skip_8;
    // 0x1517DA04: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    skip_8:
    // 0x1517DA08: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x1517DA0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1517DA10: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x1517DA14: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x1517DA18: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x1517DA1C: andi        $t7, $t3, 0x1
    ctx->r15 = ctx->r11 & 0X1;
    // 0x1517DA20: sll         $t9, $fp, 4
    ctx->r25 = S32(ctx->r30 << 4);
    // 0x1517DA24: beq         $t7, $zero, L_1517DA44
    if (ctx->r15 == 0) {
        // 0x1517DA28: addu        $a0, $t6, $t9
        ctx->r4 = ADD32(ctx->r14, ctx->r25);
            goto L_1517DA44;
    }
    // 0x1517DA28: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
    // 0x1517DA2C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1517DA30:
    // 0x1517DA30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1517DA34: sllv        $t6, $t8, $v1
    ctx->r14 = S32(ctx->r24 << (ctx->r3 & 31));
    // 0x1517DA38: and         $t9, $t6, $t3
    ctx->r25 = ctx->r14 & ctx->r11;
    // 0x1517DA3C: bnel        $t9, $zero, L_1517DA30
    if (ctx->r25 != 0) {
        // 0x1517DA40: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1517DA30;
    }
    goto skip_9;
    // 0x1517DA40: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_9:
L_1517DA44:
    // 0x1517DA44: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x1517DA48: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x1517DA4C: lhu         $a3, 0x6($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X6);
    // 0x1517DA50: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x1517DA54: beql        $s2, $a3, L_1517DCC0
    if (ctx->r18 == ctx->r7) {
        // 0x1517DA58: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_1517DCC0;
    }
    goto skip_10;
    // 0x1517DA58: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    skip_10:
    // 0x1517DA5C: beql        $at, $zero, L_1517DCC0
    if (ctx->r1 == 0) {
        // 0x1517DA60: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_1517DCC0;
    }
    goto skip_11;
    // 0x1517DA60: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    skip_11:
    // 0x1517DA64: lh          $t0, 0x28($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X28);
    // 0x1517DA68: lh          $t2, 0x2A($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X2A);
    // 0x1517DA6C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x1517DA70: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1517DA74: sra         $t8, $t0, 5
    ctx->r24 = S32(SIGNED(ctx->r8) >> 5);
    // 0x1517DA78: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x1517DA7C: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x1517DA80: sra         $t7, $t2, 5
    ctx->r15 = S32(SIGNED(ctx->r10) >> 5);
    // 0x1517DA84: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x1517DA88: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1517DA8C: sra         $t2, $t8, 16
    ctx->r10 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1517DA90: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DA94: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x1517DA98: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x1517DA9C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x1517DAA0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x1517DAA4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517DAA8: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1517DAAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1517DAB0: lw          $t6, -0x2B88($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2B88);
    // 0x1517DAB4: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x1517DAB8: sll         $s4, $t2, 2
    ctx->r20 = S32(ctx->r10 << 2);
    // 0x1517DABC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1517DAC0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x1517DAC4: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x1517DAC8: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x1517DACC: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x1517DAD0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x1517DAD4: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x1517DAD8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x1517DADC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x1517DAE0: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x1517DAE4: addu        $s4, $s4, $t2
    ctx->r20 = ADD32(ctx->r20, ctx->r10);
    // 0x1517DAE8: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x1517DAEC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x1517DAF0: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x1517DAF4: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x1517DAF8: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
    // 0x1517DAFC: sra         $t6, $s4, 2
    ctx->r14 = S32(SIGNED(ctx->r20) >> 2);
    // 0x1517DB00: multu       $t0, $t6
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517DB04: lw          $s3, 0x0($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X0);
    // 0x1517DB08: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x1517DB0C: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x1517DB10: addiu       $t7, $s3, 0x8
    ctx->r15 = ADD32(ctx->r19, 0X8);
    // 0x1517DB14: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x1517DB18: sll         $ra, $t0, 1
    ctx->r31 = S32(ctx->r8 << 1);
    // 0x1517DB1C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x1517DB20: addiu       $t4, $zero, 0x7FF
    ctx->r12 = ADD32(0, 0X7FF);
    // 0x1517DB24: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x1517DB28: mflo        $a0
    ctx->r4 = lo;
    // 0x1517DB2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1517DB30: slti        $at, $a0, 0x7FF
    ctx->r1 = SIGNED(ctx->r4) < 0X7FF ? 1 : 0;
    // 0x1517DB34: beq         $at, $zero, L_1517DB44
    if (ctx->r1 == 0) {
        // 0x1517DB38: nop
    
            goto L_1517DB44;
    }
    // 0x1517DB38: nop

    // 0x1517DB3C: b           L_1517DB44
    // 0x1517DB40: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
        goto L_1517DB44;
    // 0x1517DB40: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
L_1517DB44:
    // 0x1517DB44: bgez        $ra, L_1517DB54
    if (SIGNED(ctx->r31) >= 0) {
        // 0x1517DB48: sra         $v0, $ra, 3
        ctx->r2 = S32(SIGNED(ctx->r31) >> 3);
            goto L_1517DB54;
    }
    // 0x1517DB48: sra         $v0, $ra, 3
    ctx->r2 = S32(SIGNED(ctx->r31) >> 3);
    // 0x1517DB4C: addiu       $at, $ra, 0x7
    ctx->r1 = ADD32(ctx->r31, 0X7);
    // 0x1517DB50: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_1517DB54:
    // 0x1517DB54: bgtz        $v0, L_1517DB64
    if (SIGNED(ctx->r2) > 0) {
        // 0x1517DB58: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1517DB64;
    }
    // 0x1517DB58: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1517DB5C: b           L_1517DB64
    // 0x1517DB60: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_1517DB64;
    // 0x1517DB60: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_1517DB64:
    // 0x1517DB64: bgtz        $v0, L_1517DB74
    if (SIGNED(ctx->r2) > 0) {
        // 0x1517DB68: addiu       $t9, $s1, 0x7FF
        ctx->r25 = ADD32(ctx->r17, 0X7FF);
            goto L_1517DB74;
    }
    // 0x1517DB68: addiu       $t9, $s1, 0x7FF
    ctx->r25 = ADD32(ctx->r17, 0X7FF);
    // 0x1517DB6C: b           L_1517DB78
    // 0x1517DB70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_1517DB78;
    // 0x1517DB70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1517DB74:
    // 0x1517DB74: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1517DB78:
    // 0x1517DB78: div         $zero, $t9, $a3
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r7)));
    // 0x1517DB7C: bne         $a3, $zero, L_1517DB88
    if (ctx->r7 != 0) {
        // 0x1517DB80: nop
    
            goto L_1517DB88;
    }
    // 0x1517DB80: nop

    // 0x1517DB84: break       7
    do_break(353885060);
L_1517DB88:
    // 0x1517DB88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517DB8C: bne         $a3, $at, L_1517DBA0
    if (ctx->r7 != ctx->r1) {
        // 0x1517DB90: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1517DBA0;
    }
    // 0x1517DB90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517DB94: bne         $t9, $at, L_1517DBA0
    if (ctx->r25 != ctx->r1) {
        // 0x1517DB98: nop
    
            goto L_1517DBA0;
    }
    // 0x1517DB98: nop

    // 0x1517DB9C: break       6
    do_break(353885084);
L_1517DBA0:
    // 0x1517DBA0: mflo        $t7
    ctx->r15 = lo;
    // 0x1517DBA4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1517DBA8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x1517DBAC: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x1517DBB0: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x1517DBB4: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x1517DBB8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x1517DBBC: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x1517DBC0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DBC4: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1517DBC8: addiu       $t8, $ra, 0x7
    ctx->r24 = ADD32(ctx->r31, 0X7);
    // 0x1517DBCC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x1517DBD0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x1517DBD4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517DBD8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1517DBDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DBE0: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x1517DBE4: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x1517DBE8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x1517DBEC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x1517DBF0: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x1517DBF4: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x1517DBF8: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x1517DBFC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x1517DC00: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x1517DC04: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1517DC08: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1517DC0C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DC10: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x1517DC14: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x1517DC18: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x1517DC1C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x1517DC20: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x1517DC24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1517DC28: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x1517DC2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1517DC30: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x1517DC34: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x1517DC38: or          $t6, $t1, $t9
    ctx->r14 = ctx->r9 | ctx->r25;
    // 0x1517DC3C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1517DC40: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517DC44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DC48: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x1517DC4C: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x1517DC50: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x1517DC54: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x1517DC58: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x1517DC5C: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x1517DC60: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x1517DC64: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x1517DC68: mflo        $t6
    ctx->r14 = lo;
    // 0x1517DC6C: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x1517DC70: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1517DC74: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x1517DC78: lui         $t7, 0x108
    ctx->r15 = S32(0X108 << 16);
    // 0x1517DC7C: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x1517DC80: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x1517DC84: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1517DC88: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1517DC8C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DC90: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x1517DC94: addiu       $t7, $t2, -0x1
    ctx->r15 = ADD32(ctx->r10, -0X1);
    // 0x1517DC98: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x1517DC9C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x1517DCA0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1517DCA4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x1517DCA8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1517DCAC: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x1517DCB0: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x1517DCB4: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x1517DCB8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_1517DCBC:
    // 0x1517DCBC: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
L_1517DCC0:
    // 0x1517DCC0: beq         $at, $zero, L_1517DDC4
    if (ctx->r1 == 0) {
        // 0x1517DCC4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_1517DDC4;
    }
    // 0x1517DCC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1517DCC8: sllv        $t4, $t9, $v1
    ctx->r12 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x1517DCCC: and         $t6, $t4, $t3
    ctx->r14 = ctx->r12 & ctx->r11;
    // 0x1517DCD0: bne         $t6, $zero, L_1517DDC4
    if (ctx->r14 != 0) {
        // 0x1517DCD4: addu        $a0, $fp, $v1
        ctx->r4 = ADD32(ctx->r30, ctx->r3);
            goto L_1517DDC4;
    }
    // 0x1517DCD4: addu        $a0, $fp, $v1
    ctx->r4 = ADD32(ctx->r30, ctx->r3);
    // 0x1517DCD8: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x1517DCDC: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x1517DCE0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1517DCE4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1517DCE8: addu        $t6, $s6, $t9
    ctx->r14 = ADD32(ctx->r22, ctx->r25);
    // 0x1517DCEC: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x1517DCF0: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x1517DCF4: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x1517DCF8: addu        $t7, $t8, $a0
    ctx->r15 = ADD32(ctx->r24, ctx->r4);
    // 0x1517DCFC: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
    // 0x1517DD00: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x1517DD04: addiu       $t2, $a1, 0x4
    ctx->r10 = ADD32(ctx->r5, 0X4);
    // 0x1517DD08: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x1517DD0C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1517DD10: addu        $t8, $s6, $t6
    ctx->r24 = ADD32(ctx->r22, ctx->r14);
    // 0x1517DD14: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x1517DD18: or          $t3, $t3, $t4
    ctx->r11 = ctx->r11 | ctx->r12;
    // 0x1517DD1C: addu        $a3, $t7, $a0
    ctx->r7 = ADD32(ctx->r15, ctx->r4);
    // 0x1517DD20: lhu         $a2, 0x36($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X36);
    // 0x1517DD24: sh          $a2, 0x26($a3)
    MEM_H(0X26, ctx->r7) = ctx->r6;
    // 0x1517DD28: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x1517DD2C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1517DD30: addu        $t8, $s6, $t6
    ctx->r24 = ADD32(ctx->r22, ctx->r14);
    // 0x1517DD34: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x1517DD38: addu        $t9, $t7, $a0
    ctx->r25 = ADD32(ctx->r15, ctx->r4);
    // 0x1517DD3C: sh          $a2, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r6;
    // 0x1517DD40: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x1517DD44: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x1517DD48: addu        $t7, $s6, $t8
    ctx->r15 = ADD32(ctx->r22, ctx->r24);
    // 0x1517DD4C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x1517DD50: sll         $t7, $t1, 16
    ctx->r15 = S32(ctx->r9 << 16);
    // 0x1517DD54: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x1517DD58: addu        $t6, $t9, $a0
    ctx->r14 = ADD32(ctx->r25, ctx->r4);
    // 0x1517DD5C: sh          $a2, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r6;
    // 0x1517DD60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DD64: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x1517DD68: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x1517DD6C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x1517DD70: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x1517DD74: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x1517DD78: addiu       $t7, $a1, 0x2
    ctx->r15 = ADD32(ctx->r5, 0X2);
    // 0x1517DD7C: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x1517DD80: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x1517DD84: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x1517DD88: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x1517DD8C: addiu       $t8, $a1, 0x6
    ctx->r24 = ADD32(ctx->r5, 0X6);
    // 0x1517DD90: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1517DD94: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x1517DD98: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1517DD9C: or          $t7, $t1, $t6
    ctx->r15 = ctx->r9 | ctx->r14;
    // 0x1517DDA0: or          $ra, $t7, $t2
    ctx->r31 = ctx->r15 | ctx->r10;
    // 0x1517DDA4: or          $t8, $ra, $at
    ctx->r24 = ctx->r31 | ctx->r1;
    // 0x1517DDA8: or          $ra, $t8, $zero
    ctx->r31 = ctx->r24 | 0;
    // 0x1517DDAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517DDB0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DDB4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x1517DDB8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x1517DDBC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517DDC0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
L_1517DDC4:
    // 0x1517DDC4: sltu        $at, $s5, $t5
    ctx->r1 = ctx->r21 < ctx->r13 ? 1 : 0;
    // 0x1517DDC8: bnel        $at, $zero, L_1517D97C
    if (ctx->r1 != 0) {
        // 0x1517DDCC: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_1517D97C;
    }
    goto skip_12;
    // 0x1517DDCC: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    skip_12:
L_1517DDD0:
    // 0x1517DDD0: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1517DDD4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1517DDD8: addiu       $s3, $s3, -0x22A8
    ctx->r19 = ADD32(ctx->r19, -0X22A8);
    // 0x1517DDDC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x1517DDE0: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x1517DDE4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1517DDE8: sltu        $at, $t7, $a0
    ctx->r1 = ctx->r15 < ctx->r4 ? 1 : 0;
    // 0x1517DDEC: bne         $at, $zero, L_1517D898
    if (ctx->r1 != 0) {
        // 0x1517DDF0: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_1517D898;
    }
    // 0x1517DDF0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x1517DDF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_1517DDF8:
    // 0x1517DDF8: lui         $t9, 0xD9FF
    ctx->r25 = S32(0XD9FF << 16);
    // 0x1517DDFC: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x1517DE00: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x1517DE04: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x1517DE08: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x1517DE0C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1517DE10: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1517DE14: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1517DE18: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x1517DE1C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x1517DE20: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x1517DE24: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517DE28: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_1517DE2C:
    // 0x1517DE2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_1517DE30:
    // 0x1517DE30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1517DE34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1517DE38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1517DE3C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1517DE40: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1517DE44: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1517DE48: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1517DE4C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1517DE50: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1517DE54: jr          $ra
    // 0x1517DE58: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1517DE58: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1505EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505EFD0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1505EFD4: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x1505EFD8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505EFDC: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x1505EFE0: beq         $t6, $zero, L_1505F000
    if (ctx->r14 == 0) {
        // 0x1505EFE4: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_1505F000;
    }
    // 0x1505EFE4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1505EFE8: lbu         $t7, -0x3C09($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3C09);
    // 0x1505EFEC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1505EFF0: bnel        $a0, $t7, L_1505F004
    if (ctx->r4 != ctx->r15) {
        // 0x1505EFF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1505F004;
    }
    goto skip_0;
    // 0x1505EFF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1505EFF8: jr          $ra
    // 0x1505EFFC: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    return;
    return;
    // 0x1505EFFC: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
L_1505F000:
    // 0x1505F000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1505F004:
    // 0x1505F004: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
L_1505F008:
    // 0x1505F008: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1505F00C: beql        $t8, $zero, L_1505F02C
    if (ctx->r24 == 0) {
        // 0x1505F010: lw          $t0, 0x32C($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F02C;
    }
    goto skip_1;
    // 0x1505F010: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
    skip_1:
    // 0x1505F014: lbu         $t9, 0x127($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X127);
    // 0x1505F018: bnel        $a0, $t9, L_1505F02C
    if (ctx->r4 != ctx->r25) {
        // 0x1505F01C: lw          $t0, 0x32C($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F02C;
    }
    goto skip_2;
    // 0x1505F01C: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
    skip_2:
    // 0x1505F020: jr          $ra
    // 0x1505F024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F028: lw          $t0, 0x32C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X32C);
L_1505F02C:
    // 0x1505F02C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F030: beql        $t0, $zero, L_1505F050
    if (ctx->r8 == 0) {
        // 0x1505F034: lw          $t2, 0x32C($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F050;
    }
    goto skip_3;
    // 0x1505F034: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
    skip_3:
    // 0x1505F038: lbu         $t1, 0x127($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X127);
    // 0x1505F03C: bnel        $a0, $t1, L_1505F050
    if (ctx->r4 != ctx->r9) {
        // 0x1505F040: lw          $t2, 0x32C($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F050;
    }
    goto skip_4;
    // 0x1505F040: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
    skip_4:
    // 0x1505F044: jr          $ra
    // 0x1505F048: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F048: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F04C: lw          $t2, 0x32C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X32C);
L_1505F050:
    // 0x1505F050: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F054: beql        $t2, $zero, L_1505F074
    if (ctx->r10 == 0) {
        // 0x1505F058: lw          $t4, 0x32C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F074;
    }
    goto skip_5;
    // 0x1505F058: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
    skip_5:
    // 0x1505F05C: lbu         $t3, 0x127($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X127);
    // 0x1505F060: bnel        $a0, $t3, L_1505F074
    if (ctx->r4 != ctx->r11) {
        // 0x1505F064: lw          $t4, 0x32C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X32C);
            goto L_1505F074;
    }
    goto skip_6;
    // 0x1505F064: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
    skip_6:
    // 0x1505F068: jr          $ra
    // 0x1505F06C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F06C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505F070: lw          $t4, 0x32C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X32C);
L_1505F074:
    // 0x1505F074: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F078: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1505F07C: beq         $t4, $zero, L_1505F098
    if (ctx->r12 == 0) {
        // 0x1505F080: nop
    
            goto L_1505F098;
    }
    // 0x1505F080: nop

    // 0x1505F084: lbu         $t5, 0x127($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X127);
    // 0x1505F088: bne         $a0, $t5, L_1505F098
    if (ctx->r4 != ctx->r13) {
        // 0x1505F08C: nop
    
            goto L_1505F098;
    }
    // 0x1505F08C: nop

    // 0x1505F090: jr          $ra
    // 0x1505F094: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1505F094: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1505F098:
    // 0x1505F098: bne         $v0, $a1, L_1505F008
    if (ctx->r2 != ctx->r5) {
        // 0x1505F09C: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1505F008;
    }
    // 0x1505F09C: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
    // 0x1505F0A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1505F0A4: jr          $ra
    // 0x1505F0A8: nop

    return;
    return;
    // 0x1505F0A8: nop

;}
RECOMP_FUNC void func_1001A030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001A030: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1001A034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001A038: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1001A03C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1001A040: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1001A044: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1001A048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1001A04C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001A050: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001A054: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1001A058: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x1001A05C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1001A060: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1001A064: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001A068: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1001A06C: sb          $t6, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r14;
    // 0x1001A070: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001A074: lw          $t3, 0x64($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X64);
    // 0x1001A078: beq         $t3, $zero, L_1001A208
    if (ctx->r11 == 0) {
        // 0x1001A07C: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_1001A208;
    }
    // 0x1001A07C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_1001A080:
    // 0x1001A080: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001A084: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1001A088: lbu         $t5, 0x35($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X35);
    // 0x1001A08C: bne         $t5, $t7, L_1001A1F8
    if (ctx->r13 != ctx->r15) {
        // 0x1001A090: nop
    
            goto L_1001A1F8;
    }
    // 0x1001A090: nop

    // 0x1001A094: lbu         $t9, 0x39($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X39);
    // 0x1001A098: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1001A09C: beq         $t9, $at, L_1001A1F8
    if (ctx->r25 == ctx->r1) {
        // 0x1001A0A0: nop
    
            goto L_1001A1F8;
    }
    // 0x1001A0A0: nop

    // 0x1001A0A4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001A0A8: sltiu       $at, $t8, 0x40
    ctx->r1 = ctx->r24 < 0X40 ? 1 : 0;
    // 0x1001A0AC: bne         $at, $zero, L_1001A0D8
    if (ctx->r1 != 0) {
        // 0x1001A0B0: nop
    
            goto L_1001A0D8;
    }
    // 0x1001A0B0: nop

    // 0x1001A0B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001A0B8: lbu         $t6, 0x39($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X39);
    // 0x1001A0BC: bne         $t6, $zero, L_1001A0D0
    if (ctx->r14 != 0) {
        // 0x1001A0C0: nop
    
            goto L_1001A0D0;
    }
    // 0x1001A0C0: nop

    // 0x1001A0C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001A0C8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1001A0CC: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
L_1001A0D0:
    // 0x1001A0D0: b           L_1001A1F8
    // 0x1001A0D4: nop

        goto L_1001A1F8;
    // 0x1001A0D4: nop

L_1001A0D8:
    // 0x1001A0D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001A0DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1001A0E0: lbu         $t5, 0x39($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X39);
    // 0x1001A0E4: bne         $t5, $at, L_1001A0F8
    if (ctx->r13 != ctx->r1) {
        // 0x1001A0E8: nop
    
            goto L_1001A0F8;
    }
    // 0x1001A0E8: nop

    // 0x1001A0EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001A0F0: b           L_1001A1F8
    // 0x1001A0F4: sb          $zero, 0x39($t7)
    MEM_B(0X39, ctx->r15) = 0;
        goto L_1001A1F8;
    // 0x1001A0F4: sb          $zero, 0x39($t7)
    MEM_B(0X39, ctx->r15) = 0;
L_1001A0F8:
    // 0x1001A0F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001A0FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1001A100: lbu         $t9, 0x39($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X39);
    // 0x1001A104: bne         $t9, $at, L_1001A1F8
    if (ctx->r25 != ctx->r1) {
        // 0x1001A108: nop
    
            goto L_1001A1F8;
    }
    // 0x1001A108: nop

    // 0x1001A10C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001A110: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x1001A114: sb          $t8, 0x39($t0)
    MEM_B(0X39, ctx->r8) = ctx->r24;
    // 0x1001A118: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001A11C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001A120: lw          $t1, 0x60($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X60);
    // 0x1001A124: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x1001A128: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1001A12C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001A130: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x1001A134: lbu         $t7, 0x28($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X28);
    // 0x1001A138: beq         $t7, $zero, L_1001A1B0
    if (ctx->r15 == 0) {
        // 0x1001A13C: nop
    
            goto L_1001A1B0;
    }
    // 0x1001A13C: nop

    // 0x1001A140: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001A144: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001A148: lw          $t9, 0x60($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X60);
    // 0x1001A14C: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x1001A150: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x1001A154: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001A158: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x1001A15C: lw          $t2, 0x24($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X24);
    // 0x1001A160: slti        $at, $t2, 0x3E80
    ctx->r1 = SIGNED(ctx->r10) < 0X3E80 ? 1 : 0;
    // 0x1001A164: beq         $at, $zero, L_1001A174
    if (ctx->r1 == 0) {
        // 0x1001A168: nop
    
            goto L_1001A174;
    }
    // 0x1001A168: nop

    // 0x1001A16C: b           L_1001A194
    // 0x1001A170: addiu       $s0, $zero, 0x3E80
    ctx->r16 = ADD32(0, 0X3E80);
        goto L_1001A194;
    // 0x1001A170: addiu       $s0, $zero, 0x3E80
    ctx->r16 = ADD32(0, 0X3E80);
L_1001A174:
    // 0x1001A174: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001A178: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001A17C: lw          $t3, 0x60($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X60);
    // 0x1001A180: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x1001A184: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x1001A188: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001A18C: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x1001A190: lw          $s0, 0x24($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X24);
L_1001A194:
    // 0x1001A194: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1001A198: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1001A19C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1001A1A0: jal         0x1001ABA0
    // 0x1001A1A4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    __n_seqpReleaseVoice(rdram, ctx);
        goto after_0;
    // 0x1001A1A4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x1001A1A8: b           L_1001A1F8
    // 0x1001A1AC: nop

        goto L_1001A1F8;
    // 0x1001A1AC: nop

L_1001A1B0:
    // 0x1001A1B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001A1B4: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x1001A1B8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001A1BC: lw          $t6, 0x8($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X8);
    // 0x1001A1C0: slti        $at, $t6, 0x3E80
    ctx->r1 = SIGNED(ctx->r14) < 0X3E80 ? 1 : 0;
    // 0x1001A1C4: beq         $at, $zero, L_1001A1D4
    if (ctx->r1 == 0) {
        // 0x1001A1C8: nop
    
            goto L_1001A1D4;
    }
    // 0x1001A1C8: nop

    // 0x1001A1CC: b           L_1001A1E4
    // 0x1001A1D0: addiu       $s0, $zero, 0x3E80
    ctx->r16 = ADD32(0, 0X3E80);
        goto L_1001A1E4;
    // 0x1001A1D0: addiu       $s0, $zero, 0x3E80
    ctx->r16 = ADD32(0, 0X3E80);
L_1001A1D4:
    // 0x1001A1D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001A1D8: lw          $t1, 0x24($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X24);
    // 0x1001A1DC: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x1001A1E0: lw          $s0, 0x8($t5)
    ctx->r16 = MEM_W(ctx->r13, 0X8);
L_1001A1E4:
    // 0x1001A1E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1001A1E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1001A1EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1001A1F0: jal         0x1001ABA0
    // 0x1001A1F4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    __n_seqpReleaseVoice(rdram, ctx);
        goto after_1;
    // 0x1001A1F4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
L_1001A1F8:
    // 0x1001A1F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001A1FC: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x1001A200: bne         $t7, $zero, L_1001A080
    if (ctx->r15 != 0) {
        // 0x1001A204: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_1001A080;
    }
    // 0x1001A204: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_1001A208:
    // 0x1001A208: b           L_1001A210
    // 0x1001A20C: nop

        goto L_1001A210;
    // 0x1001A20C: nop

L_1001A210:
    // 0x1001A210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001A214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1001A218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1001A21C: jr          $ra
    // 0x1001A220: nop

    return;
    return;
    // 0x1001A220: nop

;}
RECOMP_FUNC void func_151B8370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B8374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B8378: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151B837C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x151B8380: beql        $a1, $zero, L_151B8394
    if (ctx->r5 == 0) {
        // 0x151B8384: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B8394;
    }
    goto skip_0;
    // 0x151B8384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151B8388: jal         0x1516972C
    // 0x151B838C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151B838C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x151B8390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B8394:
    // 0x151B8394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B8398: jr          $ra
    // 0x151B839C: nop

    return;
    return;
    // 0x151B839C: nop

;}
RECOMP_FUNC void func_15080738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1508073C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15080740: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x15080744: jal         0x15080718
    // 0x15080748: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_15080718(rdram, ctx);
        goto after_0;
    // 0x15080748: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x1508074C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x15080750: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15080754: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x15080758: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1508075C: lbu         $t7, -0x1A80($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1A80);
    // 0x15080760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15080764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15080768: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x1508076C: beq         $t9, $zero, L_1508077C
    if (ctx->r25 == 0) {
        // 0x15080770: nop
    
            goto L_1508077C;
    }
    // 0x15080770: nop

    // 0x15080774: b           L_1508077C
    // 0x15080778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1508077C;
    // 0x15080778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1508077C:
    // 0x1508077C: jr          $ra
    // 0x15080780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15080780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150061B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150061B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150061B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150061B8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150061BC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150061C0: addiu       $a1, $a1, -0x1D30
    ctx->r5 = ADD32(ctx->r5, -0X1D30);
    // 0x150061C4: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x150061C8: jal         0x10023790
    // 0x150061CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x150061CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x150061D0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150061D4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x150061D8: lw          $a2, -0x1620($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1620);
    // 0x150061DC: addiu       $a1, $a1, -0x1700
    ctx->r5 = ADD32(ctx->r5, -0X1700);
    // 0x150061E0: jal         0x100237C0
    // 0x150061E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x150061E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x150061E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150061EC: addiu       $v0, $v0, -0x18D0
    ctx->r2 = ADD32(ctx->r2, -0X18D0);
    // 0x150061F0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150061F4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150061F8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150061FC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15006200: addiu       $t6, $t6, -0x18B8
    ctx->r14 = ADD32(ctx->r14, -0X18B8);
    // 0x15006204: addiu       $t7, $t7, -0x18B2
    ctx->r15 = ADD32(ctx->r15, -0X18B2);
    // 0x15006208: addiu       $t8, $t8, -0x18AC
    ctx->r24 = ADD32(ctx->r24, -0X18AC);
    // 0x1500620C: addiu       $t9, $t9, -0x18A6
    ctx->r25 = ADD32(ctx->r25, -0X18A6);
    // 0x15006210: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15006214: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15006218: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x1500621C: jal         0x15007644
    // 0x15006220: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    func_15007644(rdram, ctx);
        goto after_2;
    // 0x15006220: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    after_2:
    // 0x15006224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15006228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500622C: jr          $ra
    // 0x15006230: nop

    return;
    return;
    // 0x15006230: nop

;}
RECOMP_FUNC void func_15143834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15143838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514383C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15143840: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15143844: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x15143848: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1514384C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15143850: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15143854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15143858: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1514385C: jal         0x15143794
    // 0x15143860: nop

    func_15143794(rdram, ctx);
        goto after_0;
    // 0x15143860: nop

    after_0:
    // 0x15143864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15143868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514386C: jr          $ra
    // 0x15143870: nop

    return;
    return;
    // 0x15143870: nop

;}
RECOMP_FUNC void func_15070300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070300: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15070304: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15070308: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x1507030C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070310: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070314: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x15070318: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x1507031C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15070320: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15070324: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x15070328: bne         $v0, $at, L_150703BC
    if (ctx->r2 != ctx->r1) {
        // 0x1507032C: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_150703BC;
    }
    // 0x1507032C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15070330: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x15070334: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15070338: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x1507033C: mflo        $t6
    ctx->r14 = lo;
    // 0x15070340: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15070344: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x15070348: beq         $at, $zero, L_15070394
    if (ctx->r1 == 0) {
        // 0x1507034C: sw          $a0, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r4;
            goto L_15070394;
    }
    // 0x1507034C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x15070350: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15070354: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x15070358: lb          $v1, 0xBCE($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBCE);
    // 0x1507035C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15070360: beq         $v1, $zero, L_15070394
    if (ctx->r3 == 0) {
        // 0x15070364: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_15070394;
    }
    // 0x15070364: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15070368: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1507036C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15070370: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x15070374: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15070378: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1507037C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15070380: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x15070384: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15070388: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x1507038C: b           L_150703F4
    // 0x15070390: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
        goto L_150703F4;
    // 0x15070390: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
L_15070394:
    // 0x15070394: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x15070398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507039C: lw          $t1, 0x31C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X31C);
    // 0x150703A0: lbu         $t2, 0x197($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X197);
    // 0x150703A4: beq         $t2, $zero, L_150703B4
    if (ctx->r10 == 0) {
        // 0x150703A8: nop
    
            goto L_150703B4;
    }
    // 0x150703A8: nop

    // 0x150703AC: b           L_150703F4
    // 0x150703B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_150703F4;
    // 0x150703B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150703B4:
    // 0x150703B4: b           L_150703F8
    // 0x150703B8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
        goto L_150703F8;
    // 0x150703B8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
L_150703BC:
    // 0x150703BC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150703C0: bnel        $v0, $at, L_15070684
    if (ctx->r2 != ctx->r1) {
        // 0x150703C4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15070684;
    }
    goto skip_0;
    // 0x150703C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x150703C8: jal         0x1507515C
    // 0x150703CC: nop

    func_1507515C(rdram, ctx);
        goto after_0;
    // 0x150703CC: nop

    after_0:
    // 0x150703D0: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x150703D4: lw          $t3, 0x31C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X31C);
    // 0x150703D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150703DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150703E0: lbu         $t4, 0x197($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X197);
    // 0x150703E4: beq         $t4, $zero, L_150703F4
    if (ctx->r12 == 0) {
        // 0x150703E8: nop
    
            goto L_150703F4;
    }
    // 0x150703E8: nop

    // 0x150703EC: b           L_150703F4
    // 0x150703F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_150703F4;
    // 0x150703F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150703F4:
    // 0x150703F4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
L_150703F8:
    // 0x150703F8: sb          $a1, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r5;
    // 0x150703FC: jal         0x151C1FB8
    // 0x15070400: sb          $a3, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r7;
    func_151C1FB8(rdram, ctx);
        goto after_1;
    // 0x15070400: sb          $a3, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r7;
    after_1:
    // 0x15070404: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x15070408: lbu         $a1, 0xAF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XAF);
    // 0x1507040C: lbu         $a3, 0xA7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XA7);
    // 0x15070410: beq         $t5, $zero, L_1507042C
    if (ctx->r13 == 0) {
        // 0x15070414: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_1507042C;
    }
    // 0x15070414: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x15070418: sb          $a1, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r5;
    // 0x1507041C: jal         0x151C1FB8
    // 0x15070420: sb          $a3, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r7;
    func_151C1FB8(rdram, ctx);
        goto after_2;
    // 0x15070420: sb          $a3, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r7;
    after_2:
    // 0x15070424: lbu         $a1, 0xAF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XAF);
    // 0x15070428: lbu         $a3, 0xA7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XA7);
L_1507042C:
    // 0x1507042C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15070430: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15070434: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070438: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x1507043C: beq         $t6, $zero, L_15070490
    if (ctx->r14 == 0) {
        // 0x15070440: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_15070490;
    }
    // 0x15070440: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15070444: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070448: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x1507044C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x15070450: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x15070454: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15070458: lbu         $t8, 0x128($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X128);
    // 0x1507045C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x15070460: beq         $t9, $zero, L_15070488
    if (ctx->r25 == 0) {
        // 0x15070464: nop
    
            goto L_15070488;
    }
    // 0x15070464: nop

    // 0x15070468: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507046C: sw          $t0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r8;
    // 0x15070470: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x15070474: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15070478: lhu         $t1, 0x12C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X12C);
    // 0x1507047C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x15070480: b           L_15070494
    // 0x15070484: sh          $t2, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r10;
        goto L_15070494;
    // 0x15070484: sh          $t2, 0x12C($v0)
    MEM_H(0X12C, ctx->r2) = ctx->r10;
L_15070488:
    // 0x15070488: b           L_15070494
    // 0x1507048C: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
        goto L_15070494;
    // 0x1507048C: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
L_15070490:
    // 0x15070490: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
L_15070494:
    // 0x15070494: beq         $a1, $zero, L_150704DC
    if (ctx->r5 == 0) {
        // 0x15070498: lw          $a0, 0xA8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA8);
            goto L_150704DC;
    }
    // 0x15070498: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x1507049C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150704A0: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x150704A4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150704A8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150704AC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150704B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150704B4: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x150704B8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x150704BC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150704C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150704C4: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x150704C8: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150704CC: jal         0x151C0698
    // 0x150704D0: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    func_151C0698(rdram, ctx);
        goto after_3;
    // 0x150704D0: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    after_3:
    // 0x150704D4: b           L_150704E4
    // 0x150704D8: nop

        goto L_150704E4;
    // 0x150704D8: nop

L_150704DC:
    // 0x150704DC: jal         0x1506CE6C
    // 0x150704E0: nop

    func_1506CE6C(rdram, ctx);
        goto after_4;
    // 0x150704E0: nop

    after_4:
L_150704E4:
    // 0x150704E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150704E8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150704EC: lw          $t0, 0x1D4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1D4);
    // 0x150704F0: beql        $t0, $zero, L_15070684
    if (ctx->r8 == 0) {
        // 0x150704F4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15070684;
    }
    goto skip_1;
    // 0x150704F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x150704F8: lbu         $t1, 0x74($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X74);
    // 0x150704FC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15070500: addiu       $t3, $sp, 0x80
    ctx->r11 = ADD32(ctx->r29, 0X80);
    // 0x15070504: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x15070508: beq         $t2, $at, L_15070680
    if (ctx->r10 == ctx->r1) {
        // 0x1507050C: lui         $t4, 0x800A
        ctx->r12 = S32(0X800A << 16);
            goto L_15070680;
    }
    // 0x1507050C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15070510: addiu       $t4, $t4, -0x6490
    ctx->r12 = ADD32(ctx->r12, -0X6490);
    // 0x15070514: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x15070518: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x1507051C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15070520: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15070524: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x15070528: addiu       $t8, $t8, -0x6484
    ctx->r24 = ADD32(ctx->r24, -0X6484);
    // 0x1507052C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x15070530: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x15070534: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15070538: addiu       $t6, $sp, 0x74
    ctx->r14 = ADD32(ctx->r29, 0X74);
    // 0x1507053C: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x15070540: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15070544: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x15070548: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x1507054C: jal         0x150ADA68
    // 0x15070550: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15070550: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_5:
    // 0x15070554: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15070558: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1507055C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15070560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15070564: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15070568: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1507056C: jal         0x150ADA68
    // 0x15070570: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x15070570: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x15070574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15070578: lwc1        $f16, -0x615C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X615C);
    // 0x1507057C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15070580: lwc1        $f4, -0x6158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6158);
    // 0x15070584: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15070588: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1507058C: lw          $t5, 0x154C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X154C);
    // 0x15070590: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
    // 0x15070594: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x15070598: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x1507059C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x150705A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150705A4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x150705A8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x150705AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150705B0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x150705B4: lw          $a2, 0x1D4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X1D4);
    // 0x150705B8: jal         0x15145EA4
    // 0x150705BC: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    func_15145EA4(rdram, ctx);
        goto after_7;
    // 0x150705BC: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    after_7:
    // 0x150705C0: jal         0x150ADA20
    // 0x150705C4: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150705C4: nop

    after_8:
    // 0x150705C8: jal         0x150ADA20
    // 0x150705CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150705CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_9:
    // 0x150705D0: jal         0x150ADA68
    // 0x150705D4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150705D4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_10:
    // 0x150705D8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x150705DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150705E0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x150705E4: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x150705E8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150705EC: mfhi        $t7
    ctx->r15 = hi;
    // 0x150705F0: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x150705F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150705F8: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x150705FC: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x15070600: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15070604: lui         $at, 0x44A2
    ctx->r1 = S32(0X44A2 << 16);
    // 0x15070608: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1507060C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15070610: mfhi        $t8
    ctx->r24 = hi;
    // 0x15070614: addiu       $t0, $t8, 0xC8
    ctx->r8 = ADD32(ctx->r24, 0XC8);
    // 0x15070618: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1507061C: addiu       $t9, $t7, 0x5
    ctx->r25 = ADD32(ctx->r15, 0X5);
    // 0x15070620: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15070624: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070628: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1507062C: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x15070630: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15070634: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x15070638: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x1507063C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15070640: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15070644: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x15070648: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507064C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x15070650: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15070654: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x15070658: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1507065C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15070660: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x15070664: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x15070668: jal         0x15102B38
    // 0x1507066C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_15102B38(rdram, ctx);
        goto after_11;
    // 0x1507066C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_11:
    // 0x15070670: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x15070674: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15070678: jal         0x151C1860
    // 0x1507067C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151C1860(rdram, ctx);
        goto after_12;
    // 0x1507067C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
L_15070680:
    // 0x15070680: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15070684:
    // 0x15070684: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x15070688: jr          $ra
    // 0x1507068C: nop

    return;
    return;
    // 0x1507068C: nop

;}
RECOMP_FUNC void func_15167B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15167B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15167B4C: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
    // 0x15167B50: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15167B54: beq         $v0, $zero, L_15167B74
    if (ctx->r2 == 0) {
        // 0x15167B58: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15167B74;
    }
    // 0x15167B58: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15167B5C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15167B60: lw          $t9, -0x35E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X35E0);
    // 0x15167B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15167B68: jalr        $t9
    // 0x15167B6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15167B6C: nop

    after_0:
    // 0x15167B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_15167B74:
    // 0x15167B74: lb          $v1, 0x22($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X22);
    // 0x15167B78: blez        $v1, L_15167BAC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15167B7C: nop
    
            goto L_15167BAC;
    }
    // 0x15167B7C: nop

    // 0x15167B80: lbu         $v0, 0x23($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X23);
    // 0x15167B84: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15167B88: beq         $at, $zero, L_15167B98
    if (ctx->r1 == 0) {
        // 0x15167B8C: subu        $t7, $v0, $v1
        ctx->r15 = SUB32(ctx->r2, ctx->r3);
            goto L_15167B98;
    }
    // 0x15167B8C: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x15167B90: b           L_15167C08
    // 0x15167B94: sb          $t7, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r15;
        goto L_15167C08;
    // 0x15167B94: sb          $t7, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r15;
L_15167B98:
    // 0x15167B98: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x15167B9C: lbu         $t0, 0x4($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X4);
    // 0x15167BA0: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x15167BA4: b           L_15167C08
    // 0x15167BA8: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
        goto L_15167C08;
    // 0x15167BA8: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
L_15167BAC:
    // 0x15167BAC: bgezl       $v1, L_15167C0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15167BB0: lh          $t8, 0x14($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X14);
            goto L_15167C0C;
    }
    goto skip_0;
    // 0x15167BB0: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    skip_0:
    // 0x15167BB4: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
    // 0x15167BB8: lh          $a2, 0x14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X14);
    // 0x15167BBC: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x15167BC0: bgez        $a2, L_15167BD0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x15167BC4: sra         $t2, $a2, 8
        ctx->r10 = S32(SIGNED(ctx->r6) >> 8);
            goto L_15167BD0;
    }
    // 0x15167BC4: sra         $t2, $a2, 8
    ctx->r10 = S32(SIGNED(ctx->r6) >> 8);
    // 0x15167BC8: addiu       $at, $a2, 0xFF
    ctx->r1 = ADD32(ctx->r6, 0XFF);
    // 0x15167BCC: sra         $t2, $at, 8
    ctx->r10 = S32(SIGNED(ctx->r1) >> 8);
L_15167BD0:
    // 0x15167BD0: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x15167BD4: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x15167BD8: bnel        $at, $zero, L_15167C0C
    if (ctx->r1 != 0) {
        // 0x15167BDC: lh          $t8, 0x14($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X14);
            goto L_15167C0C;
    }
    goto skip_1;
    // 0x15167BDC: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    skip_1:
    // 0x15167BE0: lbu         $v0, 0x23($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X23);
    // 0x15167BE4: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
    // 0x15167BE8: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15167BEC: beql        $at, $zero, L_15167C0C
    if (ctx->r1 == 0) {
        // 0x15167BF0: lh          $t8, 0x14($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X14);
            goto L_15167C0C;
    }
    goto skip_2;
    // 0x15167BF0: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    skip_2:
    // 0x15167BF4: lh          $t9, 0x16($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X16);
    // 0x15167BF8: subu        $t6, $v0, $a1
    ctx->r14 = SUB32(ctx->r2, ctx->r5);
    // 0x15167BFC: sb          $t6, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r14;
    // 0x15167C00: subu        $t7, $a2, $t9
    ctx->r15 = SUB32(ctx->r6, ctx->r25);
    // 0x15167C04: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
L_15167C08:
    // 0x15167C08: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
L_15167C0C:
    // 0x15167C0C: lh          $t0, 0x16($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X16);
    // 0x15167C10: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x15167C14: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x15167C18: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
    // 0x15167C1C: lh          $t3, 0x14($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X14);
    // 0x15167C20: lbu         $t5, 0x4($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X4);
    // 0x15167C24: bgez        $t3, L_15167C34
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15167C28: sra         $t4, $t3, 8
        ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
            goto L_15167C34;
    }
    // 0x15167C28: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x15167C2C: addiu       $at, $t3, 0xFF
    ctx->r1 = ADD32(ctx->r11, 0XFF);
    // 0x15167C30: sra         $t4, $at, 8
    ctx->r12 = S32(SIGNED(ctx->r1) >> 8);
L_15167C34:
    // 0x15167C34: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x15167C38: bnel        $at, $zero, L_15167C4C
    if (ctx->r1 != 0) {
        // 0x15167C3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15167C4C;
    }
    goto skip_3;
    // 0x15167C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15167C40: jal         0x1516972C
    // 0x15167C44: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15167C44: nop

    after_1:
    // 0x15167C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15167C4C:
    // 0x15167C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15167C50: jr          $ra
    // 0x15167C54: nop

    return;
    return;
    // 0x15167C54: nop

;}
RECOMP_FUNC void func_1507F54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507F54C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507F550: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1507F554: lbu         $v1, 0x13C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X13C);
    // 0x1507F558: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x1507F55C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1507F560: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x1507F564: bne         $at, $zero, L_1507F618
    if (ctx->r1 != 0) {
        // 0x1507F568: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_1507F618;
    }
    // 0x1507F568: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1507F56C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1507F570: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507F574: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x1507F578: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507F57C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1507F580: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507F584: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1507F588: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507F58C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1507F590: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1507F594: lbu         $v0, -0x7A5C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7A5C);
    // 0x1507F598: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x1507F59C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1507F5A0: beq         $v0, $at, L_1507F5DC
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5A4: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_1507F5DC;
    }
    // 0x1507F5A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1507F5A8: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x1507F5AC: beq         $v0, $at, L_1507F5F4
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5B0: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_1507F5F4;
    }
    // 0x1507F5B0: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x1507F5B4: beq         $v0, $at, L_1507F5E4
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5B8: addiu       $at, $zero, 0xA8
        ctx->r1 = ADD32(0, 0XA8);
            goto L_1507F5E4;
    }
    // 0x1507F5B8: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
    // 0x1507F5BC: beq         $v0, $at, L_1507F5EC
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5C0: addiu       $at, $zero, 0xA9
        ctx->r1 = ADD32(0, 0XA9);
            goto L_1507F5EC;
    }
    // 0x1507F5C0: addiu       $at, $zero, 0xA9
    ctx->r1 = ADD32(0, 0XA9);
    // 0x1507F5C4: beq         $v0, $at, L_1507F5EC
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5C8: addiu       $at, $zero, 0xBA
        ctx->r1 = ADD32(0, 0XBA);
            goto L_1507F5EC;
    }
    // 0x1507F5C8: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x1507F5CC: beql        $v0, $at, L_1507F5F8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F5D0: addiu       $v0, $zero, 0x1FA
        ctx->r2 = ADD32(0, 0X1FA);
            goto L_1507F5F8;
    }
    goto skip_0;
    // 0x1507F5D0: addiu       $v0, $zero, 0x1FA
    ctx->r2 = ADD32(0, 0X1FA);
    skip_0:
    // 0x1507F5D4: b           L_1507F5F8
    // 0x1507F5D8: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
        goto L_1507F5F8;
    // 0x1507F5D8: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
L_1507F5DC:
    // 0x1507F5DC: b           L_1507F5F8
    // 0x1507F5E0: addiu       $v0, $zero, 0x115
    ctx->r2 = ADD32(0, 0X115);
        goto L_1507F5F8;
    // 0x1507F5E0: addiu       $v0, $zero, 0x115
    ctx->r2 = ADD32(0, 0X115);
L_1507F5E4:
    // 0x1507F5E4: b           L_1507F5F8
    // 0x1507F5E8: addiu       $v0, $zero, 0x1A5
    ctx->r2 = ADD32(0, 0X1A5);
        goto L_1507F5F8;
    // 0x1507F5E8: addiu       $v0, $zero, 0x1A5
    ctx->r2 = ADD32(0, 0X1A5);
L_1507F5EC:
    // 0x1507F5EC: b           L_1507F5F8
    // 0x1507F5F0: addiu       $v0, $zero, 0x1AF
    ctx->r2 = ADD32(0, 0X1AF);
        goto L_1507F5F8;
    // 0x1507F5F0: addiu       $v0, $zero, 0x1AF
    ctx->r2 = ADD32(0, 0X1AF);
L_1507F5F4:
    // 0x1507F5F4: addiu       $v0, $zero, 0x1FA
    ctx->r2 = ADD32(0, 0X1FA);
L_1507F5F8:
    // 0x1507F5F8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x1507F5FC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x1507F600: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1507F604: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1507F608: jal         0x1505E650
    // 0x1507F60C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1507F60C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1507F610: b           L_1507F634
    // 0x1507F614: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1507F634;
    // 0x1507F614: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1507F618:
    // 0x1507F618: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1507F61C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1507F620: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1507F624: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1507F628: jal         0x1505E650
    // 0x1507F62C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_1;
    // 0x1507F62C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1507F630: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1507F634:
    // 0x1507F634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507F638: jr          $ra
    // 0x1507F63C: nop

    return;
    return;
    // 0x1507F63C: nop

;}
RECOMP_FUNC void func_1515D5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515D5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515D600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515D604: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515D608: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1515D60C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1515D610: jal         0x1515D520
    // 0x1515D614: nop

    func_1515D520(rdram, ctx);
        goto after_0;
    // 0x1515D614: nop

    after_0:
    // 0x1515D618: beq         $v0, $zero, L_1515D688
    if (ctx->r2 == 0) {
        // 0x1515D61C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1515D688;
    }
    // 0x1515D61C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1515D620: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x1515D624: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1515D628: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
    // 0x1515D62C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1515D630: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x1515D634: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x1515D638: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1515D63C: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    // 0x1515D640: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1515D644: sb          $t9, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r25;
    // 0x1515D648: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1515D64C: sb          $t0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r8;
    // 0x1515D650: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x1515D654: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x1515D658: sb          $t1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r9;
    // 0x1515D65C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1515D660: sh          $t2, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r10;
    // 0x1515D664: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x1515D668: sh          $t3, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r11;
    // 0x1515D66C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1515D670: sh          $t4, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r12;
    // 0x1515D674: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1515D678: sb          $t6, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r14;
    // 0x1515D67C: sb          $zero, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = 0;
    // 0x1515D680: sb          $zero, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = 0;
    // 0x1515D684: sb          $t5, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r13;
L_1515D688:
    // 0x1515D688: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1515D68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515D690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515D694: jr          $ra
    // 0x1515D698: nop

    return;
    return;
    // 0x1515D698: nop

;}
RECOMP_FUNC void func_151696DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151696DC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151696E0: lb          $v1, -0x2E70($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X2E70);
    // 0x151696E4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151696E8: addiu       $a2, $a2, -0x2E68
    ctx->r6 = ADD32(ctx->r6, -0X2E68);
    // 0x151696EC: blez        $v1, L_15169724
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151696F0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15169724;
    }
    // 0x151696F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151696F4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_151696F8:
    // 0x151696F8: addu        $a1, $a2, $t6
    ctx->r5 = ADD32(ctx->r6, ctx->r14);
    // 0x151696FC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x15169700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15169704: sll         $t9, $v0, 24
    ctx->r25 = S32(ctx->r2 << 24);
    // 0x15169708: bne         $a0, $t7, L_15169718
    if (ctx->r4 != ctx->r15) {
        // 0x1516970C: sra         $v0, $t9, 24
        ctx->r2 = S32(SIGNED(ctx->r25) >> 24);
            goto L_15169718;
    }
    // 0x1516970C: sra         $v0, $t9, 24
    ctx->r2 = S32(SIGNED(ctx->r25) >> 24);
    // 0x15169710: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x15169714: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_15169718:
    // 0x15169718: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1516971C: bnel        $at, $zero, L_151696F8
    if (ctx->r1 != 0) {
        // 0x15169720: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_151696F8;
    }
    goto skip_0;
    // 0x15169720: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_0:
L_15169724:
    // 0x15169724: jr          $ra
    // 0x15169728: nop

    return;
    return;
    // 0x15169728: nop

;}
RECOMP_FUNC void func_15078900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15078900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15078904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15078908: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507890C: lbu         $t6, 0x1893($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1893);
    // 0x15078910: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15078914: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15078918: beq         $t6, $zero, L_15078944
    if (ctx->r14 == 0) {
        // 0x1507891C: nop
    
            goto L_15078944;
    }
    // 0x1507891C: nop

    // 0x15078920: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15078924: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078928: lbu         $t8, 0x222($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X222);
    // 0x1507892C: bnel        $t8, $zero, L_150789FC
    if (ctx->r24 != 0) {
        // 0x15078930: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150789FC;
    }
    goto skip_0;
    // 0x15078930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15078934: jal         0x15075400
    // 0x15078938: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x15078938: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507893C: b           L_150789FC
    // 0x15078940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150789FC;
    // 0x15078940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15078944:
    // 0x15078944: lbu         $v0, 0x1892($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1892);
    // 0x15078948: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507894C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15078950: bne         $v0, $zero, L_150789A0
    if (ctx->r2 != 0) {
        // 0x15078954: nop
    
            goto L_150789A0;
    }
    // 0x15078954: nop

    // 0x15078958: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x1507895C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15078960: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15078964: lbu         $t1, 0x222($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X222);
    // 0x15078968: lbu         $t9, 0x1891($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1891);
    // 0x1507896C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15078970: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x15078974: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15078978: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1507897C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15078980: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x15078984: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15078988: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x1507898C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15078990: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15078994: lbu         $t3, -0x3ADF($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3ADF);
    // 0x15078998: beq         $t9, $t3, L_150789EC
    if (ctx->r25 == ctx->r11) {
        // 0x1507899C: nop
    
            goto L_150789EC;
    }
    // 0x1507899C: nop

L_150789A0:
    // 0x150789A0: bne         $v0, $at, L_150789F8
    if (ctx->r2 != ctx->r1) {
        // 0x150789A4: lui         $t5, 0x800D
        ctx->r13 = S32(0X800D << 16);
            goto L_150789F8;
    }
    // 0x150789A4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150789A8: lw          $t5, 0x154C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X154C);
    // 0x150789AC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150789B0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150789B4: lbu         $t6, 0x222($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X222);
    // 0x150789B8: lbu         $t4, 0x1891($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1891);
    // 0x150789BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150789C0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150789C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150789C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150789CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150789D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150789D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150789D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150789DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150789E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150789E4: lbu         $t8, -0x3ADF($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3ADF);
    // 0x150789E8: beq         $t4, $t8, L_150789F8
    if (ctx->r12 == ctx->r24) {
        // 0x150789EC: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_150789F8;
    }
L_150789EC:
    // 0x150789EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150789F0: jal         0x15075400
    // 0x150789F4: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_1;
    // 0x150789F4: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_1:
L_150789F8:
    // 0x150789F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150789FC:
    // 0x150789FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15078A00: jr          $ra
    // 0x15078A04: nop

    return;
    return;
    // 0x15078A04: nop

;}
RECOMP_FUNC void func_15071FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071FB0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15071FB4: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15071FB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15071FBC: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15071FC0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15071FC4: nop

    // 0x15071FC8: bc1f        L_15071FD4
    if (!c1cs) {
        // 0x15071FCC: nop
    
            goto L_15071FD4;
    }
    // 0x15071FCC: nop

    // 0x15071FD0: sh          $zero, 0x10C($v0)
    MEM_H(0X10C, ctx->r2) = 0;
L_15071FD4:
    // 0x15071FD4: jr          $ra
    // 0x15071FD8: nop

    return;
    return;
    // 0x15071FD8: nop

;}
RECOMP_FUNC void func_15077364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15077368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507736C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077370: lbu         $t6, 0x1893($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1893);
    // 0x15077374: beq         $t6, $zero, L_150773B4
    if (ctx->r14 == 0) {
        // 0x15077378: nop
    
            goto L_150773B4;
    }
    // 0x15077378: nop

    // 0x1507737C: jal         0x150ADA20
    // 0x15077380: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15077380: nop

    after_0:
    // 0x15077384: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077388: lbu         $t8, 0x1893($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1893);
    // 0x1507738C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15077390: addiu       $v1, $v1, 0x1890
    ctx->r3 = ADD32(ctx->r3, 0X1890);
    // 0x15077394: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x15077398: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x1507739C: mfhi        $t9
    ctx->r25 = hi;
    // 0x150773A0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150773A4: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x150773A8: bne         $t8, $zero, L_150773B4
    if (ctx->r24 != 0) {
        // 0x150773AC: nop
    
            goto L_150773B4;
    }
    // 0x150773AC: nop

    // 0x150773B0: break       7
    do_break(352809904);
L_150773B4:
    // 0x150773B4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150773B8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150773BC: addiu       $v1, $v1, 0x1890
    ctx->r3 = ADD32(ctx->r3, 0X1890);
    // 0x150773C0: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x150773C4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150773C8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x150773CC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150773D0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150773D4: sb          $t1, 0x246($t2)
    MEM_B(0X246, ctx->r10) = ctx->r9;
    // 0x150773D8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x150773DC: sb          $zero, 0x249($t3)
    MEM_B(0X249, ctx->r11) = 0;
    // 0x150773E0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x150773E4: lbu         $t4, 0x1891($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1891);
    // 0x150773E8: sb          $t4, 0x247($t5)
    MEM_B(0X247, ctx->r13) = ctx->r12;
    // 0x150773EC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x150773F0: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x150773F4: sb          $t6, 0x248($t8)
    MEM_B(0X248, ctx->r24) = ctx->r14;
    // 0x150773F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150773FC: jr          $ra
    // 0x15077400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15077400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151C9ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9ED4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151C9ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151C9EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151C9EE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151C9EE4: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x151C9EE8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x151C9EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9EF0: jal         0x15160274
    // 0x151C9EF4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_15160274(rdram, ctx);
        goto after_0;
    // 0x151C9EF4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_0:
    // 0x151C9EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9EFC: jal         0x1515572C
    // 0x151C9F00: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_1515572C(rdram, ctx);
        goto after_1;
    // 0x151C9F00: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_1:
    // 0x151C9F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9F08: jal         0x151A561C
    // 0x151C9F0C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_151A561C(rdram, ctx);
        goto after_2;
    // 0x151C9F0C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_2:
    // 0x151C9F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9F14: jal         0x151494E0
    // 0x151C9F18: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_151494E0(rdram, ctx);
        goto after_3;
    // 0x151C9F18: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_3:
    // 0x151C9F1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151C9F20: sb          $zero, -0x3300($at)
    MEM_B(-0X3300, ctx->r1) = 0;
    // 0x151C9F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151C9F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151C9F2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151C9F30: jr          $ra
    // 0x151C9F34: nop

    return;
    return;
    // 0x151C9F34: nop

;}
RECOMP_FUNC void func_1506D4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D4F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506D4F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506D4FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506D500: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506D504: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506D508: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x1506D50C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1506D510: lhu         $a1, 0x84($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X84);
    // 0x1506D514: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1506D518: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506D51C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506D520: jal         0x1505E650
    // 0x1506D524: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506D524: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    after_0:
    // 0x1506D528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506D52C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506D530: jr          $ra
    // 0x1506D534: nop

    return;
    return;
    // 0x1506D534: nop

;}
RECOMP_FUNC void func_1506B944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B948: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B94C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B954: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B958: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    // 0x1506B95C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x1506B960: sb          $zero, 0x89($t6)
    MEM_B(0X89, ctx->r14) = 0;
    // 0x1506B964: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B968: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x1506B96C: jal         0x1506B100
    // 0x1506B970: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    func_1506B100(rdram, ctx);
        goto after_0;
    // 0x1506B970: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    after_0:
    // 0x1506B974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B97C: jr          $ra
    // 0x1506B980: nop

    return;
    return;
    // 0x1506B980: nop

;}
RECOMP_FUNC void func_15171D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15171D4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15171D50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15171D54: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x15171D58: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15171D5C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15171D60: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15171D64: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15171D68: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    // 0x15171D6C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x15171D70: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x15171D74: lhu         $a1, 0x42($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X42);
    // 0x15171D78: lbu         $a2, 0x47($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X47);
    // 0x15171D7C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x15171D80: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x15171D84: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15171D88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15171D8C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15171D90: jal         0x15171CA0
    // 0x15171D94: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_15171CA0(rdram, ctx);
        goto after_0;
    // 0x15171D94: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x15171D98: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15171D9C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15171DA0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15171DA4: beq         $v0, $zero, L_15171EF4
    if (ctx->r2 == 0) {
        // 0x15171DA8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15171EF4;
    }
    // 0x15171DA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15171DAC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x15171DB0: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x15171DB4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15171DB8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x15171DBC: bne         $t2, $zero, L_15171E20
    if (ctx->r10 != 0) {
        // 0x15171DC0: lw          $t9, 0x50($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X50);
            goto L_15171E20;
    }
    // 0x15171DC0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x15171DC4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15171DC8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15171DCC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15171DD0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15171DD4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15171DD8: lbu         $t5, 0x58($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X58);
    // 0x15171DDC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15171DE0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15171DE4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15171DE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15171DEC: lw          $t7, -0x35B4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X35B4);
    // 0x15171DF0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15171DF4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x15171DF8: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x15171DFC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x15171E00: jal         0x15172B20
    // 0x15171E04: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_15172B20(rdram, ctx);
        goto after_1;
    // 0x15171E04: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_1:
    // 0x15171E08: bnel        $v0, $zero, L_15171EF8
    if (ctx->r2 != 0) {
        // 0x15171E0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15171EF8;
    }
    goto skip_0;
    // 0x15171E0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15171E10: jal         0x1516972C
    // 0x15171E14: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15171E14: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x15171E18: b           L_15171EF8
    // 0x15171E1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15171EF8;
    // 0x15171E1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15171E20:
    // 0x15171E20: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15171E24: trunc.w.s   $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x15171E28: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15171E2C: addiu       $t1, $t1, -0x35B4
    ctx->r9 = ADD32(ctx->r9, -0X35B4);
    // 0x15171E30: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15171E34: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x15171E38: nop

    // 0x15171E3C: sh          $v1, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r3;
    // 0x15171E40: sh          $v1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r3;
    // 0x15171E44: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x15171E48: sh          $v1, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r3;
    // 0x15171E4C: sh          $v1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r3;
    // 0x15171E50: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x15171E54: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15171E58: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x15171E5C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15171E60: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x15171E64: sh          $a1, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r5;
    // 0x15171E68: sh          $a1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r5;
    // 0x15171E6C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15171E70: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x15171E74: sh          $a1, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r5;
    // 0x15171E78: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15171E7C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15171E80: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    // 0x15171E84: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15171E88: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15171E8C: sh          $a2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r6;
    // 0x15171E90: sh          $a2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r6;
    // 0x15171E94: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x15171E98: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
    // 0x15171E9C: sh          $a3, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r7;
    // 0x15171EA0: sh          $a3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r7;
    // 0x15171EA4: sh          $t0, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r8;
    // 0x15171EA8: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
    // 0x15171EAC: lbu         $t8, 0x47($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X47);
    // 0x15171EB0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15171EB4: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x15171EB8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15171EBC: lhu         $a0, 0x6($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X6);
    // 0x15171EC0: sh          $a1, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r5;
    // 0x15171EC4: lh          $t6, 0x2A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2A);
    // 0x15171EC8: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x15171ECC: sll         $t5, $a0, 5
    ctx->r13 = S32(ctx->r4 << 5);
    // 0x15171ED0: sh          $t5, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r13;
    // 0x15171ED4: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x15171ED8: sh          $t6, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r14;
    // 0x15171EDC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15171EE0: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    // 0x15171EE4: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x15171EE8: sll         $t1, $a0, 5
    ctx->r9 = S32(ctx->r4 << 5);
    // 0x15171EEC: sh          $t1, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r9;
    // 0x15171EF0: sh          $t1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r9;
L_15171EF4:
    // 0x15171EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15171EF8:
    // 0x15171EF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15171EFC: jr          $ra
    // 0x15171F00: nop

    return;
    return;
    // 0x15171F00: nop

;}
RECOMP_FUNC void func_15179CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15179CB0: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x15179CB4: lh          $t7, 0x9C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X9C);
    // 0x15179CB8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15179CBC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15179CC0: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x15179CC4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15179CC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15179CCC: lwc1        $f8, 0x300($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15179CD0: lwc1        $f18, 0x2F8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x15179CD4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x15179CD8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15179CDC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15179CE0: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15179CE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15179CE8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15179CEC: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15179CF0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15179CF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15179CF8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15179CFC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15179D00: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15179D04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15179D08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15179D0C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15179D10: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15179D14: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15179D18: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x15179D1C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15179D20: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15179D24: nop

    // 0x15179D28: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15179D2C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15179D30: nop

    // 0x15179D34: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15179D38: beql        $t9, $zero, L_15179D88
    if (ctx->r25 == 0) {
        // 0x15179D3C: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_15179D88;
    }
    goto skip_0;
    // 0x15179D3C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x15179D40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15179D44: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15179D48: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15179D4C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15179D50: nop

    // 0x15179D54: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x15179D58: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15179D5C: nop

    // 0x15179D60: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15179D64: bne         $t9, $zero, L_15179D7C
    if (ctx->r25 != 0) {
        // 0x15179D68: nop
    
            goto L_15179D7C;
    }
    // 0x15179D68: nop

    // 0x15179D6C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15179D70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15179D74: b           L_15179D94
    // 0x15179D78: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_15179D94;
    // 0x15179D78: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_15179D7C:
    // 0x15179D7C: b           L_15179D94
    // 0x15179D80: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_15179D94;
    // 0x15179D80: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15179D84: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_15179D88:
    // 0x15179D88: nop

    // 0x15179D8C: bltz        $t9, L_15179D7C
    if (SIGNED(ctx->r25) < 0) {
        // 0x15179D90: nop
    
            goto L_15179D7C;
    }
    // 0x15179D90: nop

L_15179D94:
    // 0x15179D94: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15179D98: sb          $t9, 0xB4($a0)
    MEM_B(0XB4, ctx->r4) = ctx->r25;
    // 0x15179D9C: nop

    // 0x15179DA0: jr          $ra
    // 0x15179DA4: nop

    return;
    return;
    // 0x15179DA4: nop

;}
RECOMP_FUNC void func_15194A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15194A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15194A70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15194A74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15194A78: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15194A7C: jal         0x1507DE4C
    // 0x15194A80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_1507DE4C(rdram, ctx);
        goto after_0;
    // 0x15194A80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x15194A84: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15194A88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15194A8C: jal         0x15138BC0
    // 0x15194A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15138BC0(rdram, ctx);
        goto after_1;
    // 0x15194A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x15194A94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15194A98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15194A9C: jal         0x151949F4
    // 0x15194AA0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_151949F4(rdram, ctx);
        goto after_2;
    // 0x15194AA0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x15194AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15194AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15194AAC: jr          $ra
    // 0x15194AB0: nop

    return;
    return;
    // 0x15194AB0: nop

;}
RECOMP_FUNC void func_1513B83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B83C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513B840: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1513B844: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1513B848: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1513B84C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1513B850: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1513B854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1513B858: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1513B85C: lbu         $t8, 0x10($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X10);
    // 0x1513B860: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x1513B864: beql        $t9, $zero, L_1513B890
    if (ctx->r25 == 0) {
        // 0x1513B868: lb          $v0, 0x12($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X12);
            goto L_1513B890;
    }
    goto skip_0;
    // 0x1513B868: lb          $v0, 0x12($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X12);
    skip_0:
    // 0x1513B86C: lbu         $t1, 0x49($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X49);
    // 0x1513B870: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1513B874: sllv        $t3, $t2, $a2
    ctx->r11 = S32(ctx->r10 << (ctx->r6 & 31));
    // 0x1513B878: and         $t4, $t1, $t3
    ctx->r12 = ctx->r9 & ctx->r11;
    // 0x1513B87C: bnel        $t4, $zero, L_1513B890
    if (ctx->r12 != 0) {
        // 0x1513B880: lb          $v0, 0x12($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X12);
            goto L_1513B890;
    }
    goto skip_1;
    // 0x1513B880: lb          $v0, 0x12($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X12);
    skip_1:
    // 0x1513B884: b           L_1513B954
    // 0x1513B888: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_1513B954;
    // 0x1513B888: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x1513B88C: lb          $v0, 0x12($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X12);
L_1513B890:
    // 0x1513B890: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1513B894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513B898: beq         $v0, $at, L_1513B8D8
    if (ctx->r2 == ctx->r1) {
        // 0x1513B89C: sll         $a1, $a2, 16
        ctx->r5 = S32(ctx->r6 << 16);
            goto L_1513B8D8;
    }
    // 0x1513B89C: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x1513B8A0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1513B8A4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513B8A8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1513B8AC: lw          $t9, -0x63D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X63D8);
    // 0x1513B8B0: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1513B8B4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x1513B8B8: sh          $a2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r6;
    // 0x1513B8BC: jalr        $t9
    // 0x1513B8C0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513B8C0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x1513B8C4: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x1513B8C8: bne         $v0, $zero, L_1513B8D8
    if (ctx->r2 != 0) {
        // 0x1513B8CC: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_1513B8D8;
    }
    // 0x1513B8CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x1513B8D0: b           L_1513B954
    // 0x1513B8D4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_1513B954;
    // 0x1513B8D4: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_1513B8D8:
    // 0x1513B8D8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1513B8DC: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x1513B8E0: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x1513B8E4: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x1513B8E8: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x1513B8EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1513B8F0: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x1513B8F4: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1513B8F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1513B8FC: sll         $t2, $t8, 6
    ctx->r10 = S32(ctx->r24 << 6);
    // 0x1513B900: addu        $t1, $s0, $t2
    ctx->r9 = ADD32(ctx->r16, ctx->r10);
    // 0x1513B904: addiu       $t3, $t1, 0x78
    ctx->r11 = ADD32(ctx->r9, 0X78);
    // 0x1513B908: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x1513B90C: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x1513B910: ori         $t4, $t4, 0x4
    ctx->r12 = ctx->r12 | 0X4;
    // 0x1513B914: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x1513B918: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x1513B91C: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1513B920: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1513B924: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x1513B928: addu        $t9, $s0, $t6
    ctx->r25 = ADD32(ctx->r16, ctx->r14);
    // 0x1513B92C: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x1513B930: lw          $t2, 0x58($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X58);
    // 0x1513B934: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x1513B938: lui         $t1, 0xDE00
    ctx->r9 = S32(0XDE00 << 16);
    // 0x1513B93C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x1513B940: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x1513B944: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x1513B948: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1513B94C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x1513B950: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
L_1513B954:
    // 0x1513B954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1513B958: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1513B95C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1513B960: jr          $ra
    // 0x1513B964: nop

    return;
    return;
    // 0x1513B964: nop

;}
RECOMP_FUNC void func_15141478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141478: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514147C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15141480: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15141484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15141488: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1514148C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15141490: lwc1        $f4, 0x180($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X180);
    // 0x15141494: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15141498: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1514149C: swc1        $f8, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f8.u32l;
    // 0x151414A0: lwc1        $f10, 0x180($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X180);
    // 0x151414A4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151414A8: nop

    // 0x151414AC: bc1fl       L_15141530
    if (!c1cs) {
        // 0x151414B0: addiu       $a0, $s0, 0x110
        ctx->r4 = ADD32(ctx->r16, 0X110);
            goto L_15141530;
    }
    goto skip_0;
    // 0x151414B0: addiu       $a0, $s0, 0x110
    ctx->r4 = ADD32(ctx->r16, 0X110);
    skip_0:
    // 0x151414B4: jal         0x150ADA68
    // 0x151414B8: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151414B8: nop

    after_0:
    // 0x151414BC: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
    // 0x151414C0: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151414C4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151414C8: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x151414CC: jal         0x150ADA20
    // 0x151414D0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151414D0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x151414D4: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x151414D8: beq         $t6, $zero, L_15141508
    if (ctx->r14 == 0) {
        // 0x151414DC: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_15141508;
    }
    // 0x151414DC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151414E0: jal         0x150ADA68
    // 0x151414E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151414E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x151414E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151414EC: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151414F0: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151414F4: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151414F8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151414FC: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15141500: b           L_1514152C
    // 0x15141504: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
        goto L_1514152C;
    // 0x15141504: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
L_15141508:
    // 0x15141508: jal         0x150ADA68
    // 0x1514150C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1514150C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x15141510: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x15141514: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15141518: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1514151C: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x15141520: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15141524: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15141528: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
L_1514152C:
    // 0x1514152C: addiu       $a0, $s0, 0x110
    ctx->r4 = ADD32(ctx->r16, 0X110);
L_15141530:
    // 0x15141530: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
    // 0x15141534: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15141538: lwc1        $f0, 0x48($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1514153C: lwc1        $f18, 0x18($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15141540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15141544: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15141548: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514154C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15141550: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x15141554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15141558: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514155C: jr          $ra
    // 0x15141560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15141560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1511D394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511D394: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1511D398: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1511D39C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511D3A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511D3A4: lw          $t6, 0x3C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3C);
    // 0x1511D3A8: jal         0x151149AC
    // 0x1511D3AC: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x1511D3AC: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x1511D3B0: beql        $v0, $zero, L_1511D7AC
    if (ctx->r2 == 0) {
        // 0x1511D3B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1511D7AC;
    }
    goto skip_0;
    // 0x1511D3B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1511D3B8: lw          $t0, 0x7C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X7C);
    // 0x1511D3BC: beql        $t0, $zero, L_1511D7AC
    if (ctx->r8 == 0) {
        // 0x1511D3C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1511D7AC;
    }
    goto skip_1;
    // 0x1511D3C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1511D3C4: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x1511D3C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1511D3CC: addiu       $t6, $t6, -0x6BBC
    ctx->r14 = ADD32(ctx->r14, -0X6BBC);
    // 0x1511D3D0: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x1511D3D4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1511D3D8: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x1511D3DC: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x1511D3E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1511D3E4: addu        $t2, $t5, $t6
    ctx->r10 = ADD32(ctx->r13, ctx->r14);
    // 0x1511D3E8: lhu         $t7, 0xA($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0XA);
    // 0x1511D3EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1511D3F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511D3F4: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x1511D3F8: lhu         $t8, 0x8($t2)
    ctx->r24 = MEM_HU(ctx->r10, 0X8);
    // 0x1511D3FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511D400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511D404: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x1511D408: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x1511D40C: lbu         $t3, 0xC($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XC);
    // 0x1511D410: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1511D414: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x1511D418: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x1511D41C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x1511D420: lhu         $t1, 0xE($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0XE);
    // 0x1511D424: bne         $v0, $zero, L_1511D4B8
    if (ctx->r2 != 0) {
        // 0x1511D428: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_1511D4B8;
    }
    // 0x1511D428: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x1511D42C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x1511D430: sb          $t3, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r11;
    // 0x1511D434: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x1511D438: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x1511D43C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1511D440: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x1511D444: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x1511D448: jal         0x10003C40
    // 0x1511D44C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1511D44C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1511D450: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x1511D454: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x1511D458: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1511D45C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1511D460: lbu         $t3, 0x6B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6B);
    // 0x1511D464: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x1511D468: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x1511D46C: blez        $t5, L_1511D4AC
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1511D470: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1511D4AC;
    }
    // 0x1511D470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511D474: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511D478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1511D47C: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
L_1511D480:
    // 0x1511D480: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1511D484: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x1511D488: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1511D48C: lh          $t8, 0x8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8);
    // 0x1511D490: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511D494: sh          $t8, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r24;
    // 0x1511D498: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x1511D49C: slt         $at, $a3, $t9
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1511D4A0: bnel        $at, $zero, L_1511D480
    if (ctx->r1 != 0) {
        // 0x1511D4A4: lw          $t6, 0x28($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X28);
            goto L_1511D480;
    }
    goto skip_2;
    // 0x1511D4A4: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    skip_2:
    // 0x1511D4A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1511D4AC:
    // 0x1511D4AC: sb          $zero, 0x11($t2)
    MEM_B(0X11, ctx->r10) = 0;
    // 0x1511D4B0: b           L_1511D4B8
    // 0x1511D4B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1511D4B8;
    // 0x1511D4B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1511D4B8:
    // 0x1511D4B8: lhu         $v0, 0x4($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X4);
    // 0x1511D4BC: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x1511D4C0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x1511D4C4: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1511D4C8: addu        $a0, $t6, $t3
    ctx->r4 = ADD32(ctx->r14, ctx->r11);
    // 0x1511D4CC: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1511D4D0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1511D4D4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x1511D4D8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x1511D4DC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x1511D4E0: jal         0x150489B0
    // 0x1511D4E4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_150489B0(rdram, ctx);
        goto after_2;
    // 0x1511D4E4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_2:
    // 0x1511D4E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1511D4EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511D4F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511D4F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511D4F8: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1511D4FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1511D500: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1511D504: jal         0x15048A40
    // 0x1511D508: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x1511D508: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x1511D50C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511D510: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511D514: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x1511D518: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1511D51C: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x1511D520: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1511D524: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1511D528: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1511D52C: mul.s       $f12, $f18, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1511D530: beq         $v1, $zero, L_1511D548
    if (ctx->r3 == 0) {
        // 0x1511D534: lwc1        $f2, 0x60($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
            goto L_1511D548;
    }
    // 0x1511D534: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1511D538: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1511D53C: swc1        $f2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f2.u32l;
    // 0x1511D540: b           L_1511D5D4
    // 0x1511D544: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
        goto L_1511D5D4;
    // 0x1511D544: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
L_1511D548:
    // 0x1511D548: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511D54C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511D550: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1511D554: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x1511D558: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1511D55C: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511D560: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1511D564: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x1511D568: nop

    // 0x1511D56C: bc1fl       L_1511D5A4
    if (!c1cs) {
        // 0x1511D570: lwc1        $f8, 0x80($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
            goto L_1511D5A4;
    }
    goto skip_3;
    // 0x1511D570: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    skip_3:
    // 0x1511D574: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511D578: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1511D57C: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x1511D580: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511D584: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1511D588: nop

    // 0x1511D58C: bc1fl       L_1511D5CC
    if (!c1cs) {
        // 0x1511D590: lwc1        $f18, 0x84($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
            goto L_1511D5CC;
    }
    goto skip_4;
    // 0x1511D590: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    skip_4:
    // 0x1511D594: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x1511D598: b           L_1511D5C8
    // 0x1511D59C: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
        goto L_1511D5C8;
    // 0x1511D59C: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511D5A0: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
L_1511D5A4:
    // 0x1511D5A4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1511D5A8: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x1511D5AC: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511D5B0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511D5B4: nop

    // 0x1511D5B8: bc1fl       L_1511D5CC
    if (!c1cs) {
        // 0x1511D5BC: lwc1        $f18, 0x84($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
            goto L_1511D5CC;
    }
    goto skip_5;
    // 0x1511D5BC: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    skip_5:
    // 0x1511D5C0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x1511D5C4: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
L_1511D5C8:
    // 0x1511D5C8: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
L_1511D5CC:
    // 0x1511D5CC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x1511D5D0: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
L_1511D5D4:
    // 0x1511D5D4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x1511D5D8: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511D5DC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1511D5E0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1511D5E4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1511D5E8: addiu       $a2, $a2, -0x1640
    ctx->r6 = ADD32(ctx->r6, -0X1640);
    // 0x1511D5EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511D5F0: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x1511D5F4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x1511D5F8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x1511D5FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1511D600: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511D604: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1511D608: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x1511D60C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511D610: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1511D614: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511D618: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511D61C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x1511D620: nop

    // 0x1511D624: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x1511D628: lw          $t5, 0x20($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X20);
    // 0x1511D62C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1511D630: lh          $t6, 0xA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA);
    // 0x1511D634: slti        $at, $t6, 0x801
    ctx->r1 = SIGNED(ctx->r14) < 0X801 ? 1 : 0;
    // 0x1511D638: bnel        $at, $zero, L_1511D648
    if (ctx->r1 != 0) {
        // 0x1511D63C: lhu         $t7, 0x16($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X16);
            goto L_1511D648;
    }
    goto skip_6;
    // 0x1511D63C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    skip_6:
    // 0x1511D640: addiu       $t1, $t1, -0x800
    ctx->r9 = ADD32(ctx->r9, -0X800);
    // 0x1511D644: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
L_1511D648:
    // 0x1511D648: blez        $t7, L_1511D6C0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1511D64C: nop
    
            goto L_1511D6C0;
    }
    // 0x1511D64C: nop

    // 0x1511D650: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
L_1511D654:
    // 0x1511D654: lh          $t8, 0x0($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X0);
    // 0x1511D658: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1511D65C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1511D660: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x1511D664: subu        $t9, $t8, $t0
    ctx->r25 = SUB32(ctx->r24, ctx->r8);
    // 0x1511D668: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x1511D66C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x1511D670: addu        $t5, $t8, $v1
    ctx->r13 = ADD32(ctx->r24, ctx->r3);
    // 0x1511D674: sh          $t9, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r25;
    // 0x1511D678: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x1511D67C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1511D680: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1511D684: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x1511D688: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x1511D68C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1511D690: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1511D694: lh          $t5, 0xA($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XA);
    // 0x1511D698: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x1511D69C: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x1511D6A0: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x1511D6A4: addu        $t5, $t9, $v1
    ctx->r13 = ADD32(ctx->r25, ctx->r3);
    // 0x1511D6A8: sh          $t6, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r14;
    // 0x1511D6AC: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x1511D6B0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511D6B4: slt         $at, $a3, $t7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1511D6B8: bnel        $at, $zero, L_1511D654
    if (ctx->r1 != 0) {
        // 0x1511D6BC: lbu         $t5, 0x0($a2)
        ctx->r13 = MEM_BU(ctx->r6, 0X0);
            goto L_1511D654;
    }
    goto skip_7;
    // 0x1511D6BC: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    skip_7:
L_1511D6C0:
    // 0x1511D6C0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1511D6C4: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1511D6C8: lbu         $t8, 0x11($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X11);
    // 0x1511D6CC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x1511D6D0: lbu         $t9, 0x10($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X10);
    // 0x1511D6D4: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x1511D6D8: sb          $t7, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r15;
    // 0x1511D6DC: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x1511D6E0: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x1511D6E4: jal         0x150489B0
    // 0x1511D6E8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x1511D6E8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_4:
    // 0x1511D6EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511D6F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511D6F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1511D6F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511D6FC: lui         $at, 0x434D
    ctx->r1 = S32(0X434D << 16);
    // 0x1511D700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511D704: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x1511D708: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1511D70C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511D710: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511D714: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1511D718: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1511D71C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1511D720: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1511D724: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1511D728: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x1511D72C: nop

    // 0x1511D730: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1511D734: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x1511D738: nop

    // 0x1511D73C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x1511D740: beql        $t5, $zero, L_1511D790
    if (ctx->r13 == 0) {
        // 0x1511D744: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_1511D790;
    }
    goto skip_8;
    // 0x1511D744: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_8:
    // 0x1511D748: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511D74C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511D750: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1511D754: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x1511D758: nop

    // 0x1511D75C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1511D760: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x1511D764: nop

    // 0x1511D768: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x1511D76C: bne         $t5, $zero, L_1511D784
    if (ctx->r13 != 0) {
        // 0x1511D770: nop
    
            goto L_1511D784;
    }
    // 0x1511D770: nop

    // 0x1511D774: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x1511D778: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511D77C: b           L_1511D79C
    // 0x1511D780: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_1511D79C;
    // 0x1511D780: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_1511D784:
    // 0x1511D784: b           L_1511D79C
    // 0x1511D788: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_1511D79C;
    // 0x1511D788: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1511D78C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_1511D790:
    // 0x1511D790: nop

    // 0x1511D794: bltz        $t5, L_1511D784
    if (SIGNED(ctx->r13) < 0) {
        // 0x1511D798: nop
    
            goto L_1511D784;
    }
    // 0x1511D798: nop

L_1511D79C:
    // 0x1511D79C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1511D7A0: sb          $t5, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r13;
    // 0x1511D7A4: nop

    // 0x1511D7A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1511D7AC:
    // 0x1511D7AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1511D7B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1511D7B4: jr          $ra
    // 0x1511D7B8: nop

    return;
    return;
    // 0x1511D7B8: nop

;}
RECOMP_FUNC void func_151D223C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D223C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151D2240: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151D2244: beq         $v1, $zero, L_151D2250
    if (ctx->r3 == 0) {
        // 0x151D2248: nop
    
            goto L_151D2250;
    }
    // 0x151D2248: nop

    // 0x151D224C: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
L_151D2250:
    // 0x151D2250: jr          $ra
    // 0x151D2254: nop

    return;
    return;
    // 0x151D2254: nop

;}
RECOMP_FUNC void func_150F10D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F10D4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150F10D8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150F10DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F10E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150F10E4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150F10E8: lbu         $t6, 0x3B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3B);
    // 0x150F10EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150F10F0: addiu       $t7, $zero, 0x3A
    ctx->r15 = ADD32(0, 0X3A);
    // 0x150F10F4: sb          $t6, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r14;
    // 0x150F10F8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x150F10FC: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150F1100: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x150F1104: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F1108: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x150F110C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F1110: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F1114: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150F1118: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x150F111C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150F1120: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150F1124: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150F1128: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150F112C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F1130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F1134: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150F1138: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x150F113C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150F1140: jal         0x15149130
    // 0x150F1144: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150F1144: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150F1148: beq         $v0, $zero, L_150F115C
    if (ctx->r2 == 0) {
        // 0x150F114C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150F115C;
    }
    // 0x150F114C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150F1150: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x150F1154: jal         0x10022EC0
    // 0x150F1158: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150F1158: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
L_150F115C:
    // 0x150F115C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150F1160: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150F1164: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150F1168: jr          $ra
    // 0x150F116C: nop

    return;
    return;
    // 0x150F116C: nop

;}
RECOMP_FUNC void func_1500A4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A4D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A4D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A4DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A4E0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A4E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A4E8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1500A4EC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500A4F0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1500A4F4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x1500A4F8: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x1500A4FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500A500: jal         0x15163604
    // 0x1500A504: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x1500A504: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1500A508: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A50C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A510: jr          $ra
    // 0x1500A514: nop

    return;
    return;
    // 0x1500A514: nop

;}
RECOMP_FUNC void func_151A4900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4900: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151A4904: lh          $a1, 0x1A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X1A);
    // 0x151A4908: lh          $t6, 0xAC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XAC);
    // 0x151A490C: addiu       $v1, $a0, 0xA8
    ctx->r3 = ADD32(ctx->r4, 0XA8);
    // 0x151A4910: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151A4914: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151A4918: beql        $at, $zero, L_151A4938
    if (ctx->r1 == 0) {
        // 0x151A491C: lh          $t9, 0x8($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X8);
            goto L_151A4938;
    }
    goto skip_0;
    // 0x151A491C: lh          $t9, 0x8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8);
    skip_0:
    // 0x151A4920: lh          $t7, 0xAE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XAE);
    // 0x151A4924: multu       $a1, $t7
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A4928: mflo        $t8
    ctx->r24 = lo;
    // 0x151A492C: sb          $t8, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r24;
    // 0x151A4930: nop

    // 0x151A4934: lh          $t9, 0x8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8);
L_151A4938:
    // 0x151A4938: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151A493C: beql        $at, $zero, L_151A4980
    if (ctx->r1 == 0) {
        // 0x151A4940: lh          $t3, 0x2($v1)
        ctx->r11 = MEM_H(ctx->r3, 0X2);
            goto L_151A4980;
    }
    goto skip_1;
    // 0x151A4940: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    skip_1:
    // 0x151A4944: lh          $t0, 0xA($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XA);
    // 0x151A4948: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x151A494C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151A4950: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151A4954: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A4958: mflo        $t2
    ctx->r10 = lo;
    // 0x151A495C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x151A4960: nop

    // 0x151A4964: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151A4968: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x151A496C: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x151A4970: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x151A4974: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x151A4978: lh          $a1, 0x1A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X1A);
    // 0x151A497C: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
L_151A4980:
    // 0x151A4980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A4984: multu       $a1, $t3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A4988: mflo        $t4
    ctx->r12 = lo;
    // 0x151A498C: sb          $t4, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r12;
    // 0x151A4990: nop

    // 0x151A4994: jr          $ra
    // 0x151A4998: nop

    return;
    return;
    // 0x151A4998: nop

;}
RECOMP_FUNC void func_15102EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15102EB8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15102EBC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15102EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15102EC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15102EC8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15102ECC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x15102ED0: jal         0x15144B34
    // 0x15102ED4: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x15102ED4: lh          $a0, 0x9E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9E);
    after_0:
    // 0x15102ED8: lbu         $t6, 0x124($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X124);
    // 0x15102EDC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15102EE0: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x15102EE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15102EE8: bne         $t7, $zero, L_15102EF8
    if (ctx->r15 != 0) {
        // 0x15102EEC: lh          $a1, 0x9E($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X9E);
            goto L_15102EF8;
    }
    // 0x15102EEC: lh          $a1, 0x9E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X9E);
    // 0x15102EF0: b           L_15103240
    // 0x15102EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15103240;
    // 0x15102EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15102EF8:
    // 0x15102EF8: addiu       $t8, $sp, 0x43
    ctx->r24 = ADD32(ctx->r29, 0X43);
    // 0x15102EFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15102F00: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15102F04: jal         0x151D5D60
    // 0x15102F08: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_151D5D60(rdram, ctx);
        goto after_1;
    // 0x15102F08: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x15102F0C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x15102F10: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x15102F14: beq         $v0, $zero, L_15102F64
    if (ctx->r2 == 0) {
        // 0x15102F18: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_15102F64;
    }
    // 0x15102F18: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x15102F1C: beq         $t9, $zero, L_15102F6C
    if (ctx->r25 == 0) {
        // 0x15102F20: lh          $t0, 0x9E($sp)
        ctx->r8 = MEM_H(ctx->r29, 0X9E);
            goto L_15102F6C;
    }
    // 0x15102F20: lh          $t0, 0x9E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X9E);
    // 0x15102F24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15102F28: addu        $v1, $s0, $t1
    ctx->r3 = ADD32(ctx->r16, ctx->r9);
    // 0x15102F2C: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x15102F30: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x15102F34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15102F38: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x15102F3C: jal         0x10022EC0
    // 0x15102F40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15102F40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_2:
    // 0x15102F44: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x15102F48: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x15102F4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15102F50: lw          $a0, 0x100($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X100);
    // 0x15102F54: jal         0x10022EC0
    // 0x15102F58: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15102F58: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_3:
    // 0x15102F5C: b           L_15102F70
    // 0x15102F60: addiu       $v0, $s0, 0x110
    ctx->r2 = ADD32(ctx->r16, 0X110);
        goto L_15102F70;
    // 0x15102F60: addiu       $v0, $s0, 0x110
    ctx->r2 = ADD32(ctx->r16, 0X110);
L_15102F64:
    // 0x15102F64: b           L_15103240
    // 0x15102F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15103240;
    // 0x15102F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15102F6C:
    // 0x15102F6C: addiu       $v0, $s0, 0x110
    ctx->r2 = ADD32(ctx->r16, 0X110);
L_15102F70:
    // 0x15102F70: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15102F74: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15102F78: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15102F7C: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15102F80: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x15102F84: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15102F88: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15102F8C: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x15102F90: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15102F94: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15102F98: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15102F9C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x15102FA0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15102FA4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15102FA8: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x15102FAC: add.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x15102FB0: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15102FB4: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x15102FB8: add.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x15102FBC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15102FC0: sub.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x15102FC4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x15102FC8: add.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x15102FCC: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x15102FD0: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15102FD4: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15102FD8: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x15102FDC: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x15102FE0: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15102FE4: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x15102FE8: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x15102FEC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15102FF0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x15102FF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15102FF8: jal         0x15145548
    // 0x15102FFC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    func_15145548(rdram, ctx);
        goto after_4;
    // 0x15102FFC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x15103000: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15103004: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15103008: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1510300C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15103010: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15103014: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15103018: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1510301C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15103020: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15103024: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x15103028: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1510302C: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15103030: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15103034: nop

    // 0x15103038: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1510303C: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15103040: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15103044: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15103048: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1510304C: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15103050: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15103054: nop

    // 0x15103058: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1510305C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x15103060: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15103064: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x15103068: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x1510306C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15103070: nop

    // 0x15103074: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15103078: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1510307C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15103080: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15103084: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    // 0x15103088: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x1510308C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15103090: bc1f        L_151030AC
    if (!c1cs) {
        // 0x15103094: nop
    
            goto L_151030AC;
    }
    // 0x15103094: nop

    // 0x15103098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1510309C: nop

    // 0x151030A0: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x151030A4: b           L_151030D8
    // 0x151030A8: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
        goto L_151030D8;
    // 0x151030A8: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_151030AC:
    // 0x151030AC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151030B0: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151030B4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151030B8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151030BC: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151030C0: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151030C4: nop

    // 0x151030C8: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151030CC: nop

    // 0x151030D0: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151030D4: nop

L_151030D8:
    // 0x151030D8: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151030DC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x151030E0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151030E4: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x151030E8: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151030EC: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151030F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151030F4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151030F8: nop

    // 0x151030FC: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x15103100: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15103104: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x15103108: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1510310C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15103110: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15103114: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x15103118: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x1510311C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15103120: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15103124: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x15103128: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1510312C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15103130: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15103134: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x15103138: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1510313C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15103140: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x15103144: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x15103148: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1510314C: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x15103150: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x15103154: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15103158: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1510315C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x15103160: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x15103164: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x15103168: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1510316C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15103170: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x15103174: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x15103178: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x1510317C: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x15103180: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x15103184: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x15103188: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1510318C: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x15103190: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x15103194: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15103198: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1510319C: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x151031A0: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x151031A4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x151031A8: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
    // 0x151031AC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x151031B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151031B4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151031B8: nop

    // 0x151031BC: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x151031C0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x151031C4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151031C8: nop

    // 0x151031CC: sh          $t2, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r10;
    // 0x151031D0: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x151031D4: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x151031D8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x151031DC: addiu       $t7, $t4, 0x10
    ctx->r15 = ADD32(ctx->r12, 0X10);
    // 0x151031E0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x151031E4: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151031E8: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x151031EC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151031F0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151031F4: nop

    // 0x151031F8: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151031FC: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15103200: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15103204: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x15103208: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1510320C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x15103210: nop

    // 0x15103214: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x15103218: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1510321C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x15103220: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x15103224: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15103228: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1510322C: nop

    // 0x15103230: sh          $t3, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r11;
    // 0x15103234: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15103238: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1510323C: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_15103240:
    // 0x15103240: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15103244: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15103248: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1510324C: jr          $ra
    // 0x15103250: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15103250: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_1507B7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B7E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B7F0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B7F4: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507B7F8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507B7FC: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1507B800: lbu         $t7, 0x222($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X222);
    // 0x1507B804: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B808: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1507B80C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507B810: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507B814: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1507B818: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507B81C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507B820: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507B824: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507B828: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507B82C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x1507B830: lbu         $t0, 0x104($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X104);
    // 0x1507B834: bne         $t0, $zero, L_1507B844
    if (ctx->r8 != 0) {
        // 0x1507B838: nop
    
            goto L_1507B844;
    }
    // 0x1507B838: nop

    // 0x1507B83C: lbu         $t1, 0x1CA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1CA);
    // 0x1507B840: bne         $t1, $zero, L_1507B858
    if (ctx->r9 != 0) {
        // 0x1507B844: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1507B858;
    }
L_1507B844:
    // 0x1507B844: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B848: addiu       $v0, $v0, 0x1891
    ctx->r2 = ADD32(ctx->r2, 0X1891);
    // 0x1507B84C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x1507B850: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x1507B854: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_1507B858:
    // 0x1507B858: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B85C: addiu       $v0, $v0, 0x1891
    ctx->r2 = ADD32(ctx->r2, 0X1891);
    // 0x1507B860: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x1507B864: beql        $t4, $zero, L_1507B878
    if (ctx->r12 == 0) {
        // 0x1507B868: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B878;
    }
    goto skip_0;
    // 0x1507B868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507B86C: jal         0x15075400
    // 0x1507B870: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507B870: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507B874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507B878:
    // 0x1507B878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B87C: jr          $ra
    // 0x1507B880: nop

    return;
    return;
    // 0x1507B880: nop

;}
RECOMP_FUNC void func_15147EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147EB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15147EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15147EC0: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x15147EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15147EC8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147ECC: lbu         $v0, 0x20($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X20);
    // 0x15147ED0: beq         $v0, $zero, L_15147F04
    if (ctx->r2 == 0) {
        // 0x15147ED4: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15147F04;
    }
    // 0x15147ED4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15147ED8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15147EDC: lw          $t9, -0x5C20($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C20);
    // 0x15147EE0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x15147EE4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15147EE8: jalr        $t9
    // 0x15147EEC: sb          $zero, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15147EEC: sb          $zero, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = 0;
    after_0:
    // 0x15147EF0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x15147EF4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15147EF8: bne         $v0, $zero, L_15147F04
    if (ctx->r2 != 0) {
        // 0x15147EFC: lb          $a2, 0x2B($sp)
        ctx->r6 = MEM_B(ctx->r29, 0X2B);
            goto L_15147F04;
    }
    // 0x15147EFC: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x15147F00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15147F04:
    // 0x15147F04: lbu         $v0, 0x21($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X21);
    // 0x15147F08: beql        $v0, $zero, L_15147F4C
    if (ctx->r2 == 0) {
        // 0x15147F0C: lbu         $t8, 0x18($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X18);
            goto L_15147F4C;
    }
    goto skip_0;
    // 0x15147F0C: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
    skip_0:
    // 0x15147F10: bne         $a2, $zero, L_15147F48
    if (ctx->r6 != 0) {
        // 0x15147F14: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15147F48;
    }
    // 0x15147F14: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15147F18: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147F1C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15147F20: lw          $t9, -0x5C08($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C08);
    // 0x15147F24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x15147F28: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15147F2C: jalr        $t9
    // 0x15147F30: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15147F30: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    after_1:
    // 0x15147F34: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x15147F38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15147F3C: bne         $v0, $zero, L_15147F48
    if (ctx->r2 != 0) {
        // 0x15147F40: lb          $a2, 0x2B($sp)
        ctx->r6 = MEM_B(ctx->r29, 0X2B);
            goto L_15147F48;
    }
    // 0x15147F40: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x15147F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15147F48:
    // 0x15147F48: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
L_15147F4C:
    // 0x15147F4C: andi        $t0, $t8, 0x40
    ctx->r8 = ctx->r24 & 0X40;
    // 0x15147F50: beq         $t0, $zero, L_15147F94
    if (ctx->r8 == 0) {
        // 0x15147F54: nop
    
            goto L_15147F94;
    }
    // 0x15147F54: nop

    // 0x15147F58: bne         $a2, $zero, L_15147F94
    if (ctx->r6 != 0) {
        // 0x15147F5C: nop
    
            goto L_15147F94;
    }
    // 0x15147F5C: nop

    // 0x15147F60: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15147F64: lh          $t1, 0x1C($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X1C);
    // 0x15147F68: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15147F6C: beq         $at, $zero, L_15147F94
    if (ctx->r1 == 0) {
        // 0x15147F70: nop
    
            goto L_15147F94;
    }
    // 0x15147F70: nop

    // 0x15147F74: lh          $t2, 0x1E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1E);
    // 0x15147F78: lbu         $t3, 0x1B($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X1B);
    // 0x15147F7C: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15147F80: mflo        $a1
    ctx->r5 = lo;
    // 0x15147F84: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15147F88: beq         $at, $zero, L_15147F94
    if (ctx->r1 == 0) {
        // 0x15147F8C: nop
    
            goto L_15147F94;
    }
    // 0x15147F8C: nop

    // 0x15147F90: sb          $a1, 0x1B($v1)
    MEM_B(0X1B, ctx->r3) = ctx->r5;
L_15147F94:
    // 0x15147F94: beq         $a2, $zero, L_15147FCC
    if (ctx->r6 == 0) {
        // 0x15147F98: sltiu       $a1, $a2, 0x1
        ctx->r5 = ctx->r6 < 0X1 ? 1 : 0;
            goto L_15147FCC;
    }
    // 0x15147F98: sltiu       $a1, $a2, 0x1
    ctx->r5 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x15147F9C: lbu         $v0, 0x22($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X22);
    // 0x15147FA0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147FA4: beq         $v0, $zero, L_15147FCC
    if (ctx->r2 == 0) {
        // 0x15147FA8: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_15147FCC;
    }
    // 0x15147FA8: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x15147FAC: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x15147FB0: lw          $t9, -0x5BD4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5BD4);
    // 0x15147FB4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15147FB8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x15147FBC: jalr        $t9
    // 0x15147FC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15147FC0: nop

    after_2:
    // 0x15147FC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15147FC8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_15147FCC:
    // 0x15147FCC: lb          $t5, 0x2C($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X2C);
    // 0x15147FD0: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x15147FD4: blezl       $t5, L_15148010
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15147FD8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15148010;
    }
    goto skip_1;
    // 0x15147FD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x15147FDC: lb          $t6, 0x2D($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2D);
    // 0x15147FE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15147FE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15147FE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15147FEC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x15147FF0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15147FF4: sw          $at, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r1;
    // 0x15147FF8: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x15147FFC: sw          $t1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r9;
    // 0x15148000: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x15148004: b           L_15148020
    // 0x15148008: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
        goto L_15148020;
    // 0x15148008: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
    // 0x1514800C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15148010:
    // 0x15148010: nop

    // 0x15148014: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    // 0x15148018: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x1514801C: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
L_15148020:
    // 0x15148020: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x15148024: sra         $t2, $v0, 24
    ctx->r10 = S32(SIGNED(ctx->r2) >> 24);
    // 0x15148028: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1514802C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15148030: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15148034: jr          $ra
    // 0x15148038: nop

    return;
    return;
    // 0x15148038: nop

;}
RECOMP_FUNC void func_1000CC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000CC58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000CC5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000CC60: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1000CC64: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000CC68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1000CC6C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1000CC70: lw          $v0, 0x17B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X17B0);
    // 0x1000CC74: beql        $v0, $zero, L_1000CD34
    if (ctx->r2 == 0) {
        // 0x1000CC78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1000CD34;
    }
    goto skip_0;
    // 0x1000CC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1000CC7C: lhu         $t8, 0x4C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4C);
    // 0x1000CC80: lhu         $t9, 0x52($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X52);
    // 0x1000CC84: lhu         $t2, 0x58($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X58);
    // 0x1000CC88: lw          $t5, 0x2C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X2C);
    // 0x1000CC8C: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000CC90: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x1000CC94: mflo        $t0
    ctx->r8 = lo;
    // 0x1000CC98: srl         $t1, $t0, 15
    ctx->r9 = S32(U32(ctx->r8) >> 15);
    // 0x1000CC9C: nop

    // 0x1000CCA0: multu       $t2, $t1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000CCA4: mflo        $t3
    ctx->r11 = lo;
    // 0x1000CCA8: srl         $t4, $t3, 15
    ctx->r12 = S32(U32(ctx->r11) >> 15);
    // 0x1000CCAC: nop

    // 0x1000CCB0: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000CCB4: mflo        $a3
    ctx->r7 = lo;
    // 0x1000CCB8: srl         $t6, $a3, 15
    ctx->r14 = S32(U32(ctx->r7) >> 15);
    // 0x1000CCBC: beq         $t6, $v1, L_1000CD30
    if (ctx->r14 == ctx->r3) {
        // 0x1000CCC0: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_1000CD30;
    }
    // 0x1000CCC0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1000CCC4: bne         $v1, $zero, L_1000CCF4
    if (ctx->r3 != 0) {
        // 0x1000CCC8: lbu         $a0, 0x23($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X23);
            goto L_1000CCF4;
    }
    // 0x1000CCC8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x1000CCCC: lw          $a1, 0x38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X38);
    // 0x1000CCD0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1000CCD4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x1000CCD8: xori        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 ^ 0XFFFF;
    // 0x1000CCDC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x1000CCE0: jal         0x10008988
    // 0x1000CCE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_10008988(rdram, ctx);
        goto after_0;
    // 0x1000CCE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1000CCE8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1000CCEC: b           L_1000CD20
    // 0x1000CCF0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_1000CD20;
    // 0x1000CCF0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_1000CCF4:
    // 0x1000CCF4: bne         $a3, $zero, L_1000CD20
    if (ctx->r7 != 0) {
        // 0x1000CCF8: lbu         $a0, 0x23($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X23);
            goto L_1000CD20;
    }
    // 0x1000CCF8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x1000CCFC: lw          $a1, 0x38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X38);
    // 0x1000CD00: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x1000CD04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x1000CD08: xori        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 ^ 0XFFFF;
    // 0x1000CD0C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1000CD10: jal         0x10008988
    // 0x1000CD14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_10008988(rdram, ctx);
        goto after_1;
    // 0x1000CD14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1000CD18: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1000CD1C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_1000CD20:
    // 0x1000CD20: sw          $a3, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r7;
    // 0x1000CD24: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x1000CD28: jal         0x10008EE0
    // 0x1000CD2C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_10008EE0(rdram, ctx);
        goto after_2;
    // 0x1000CD2C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
L_1000CD30:
    // 0x1000CD30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1000CD34:
    // 0x1000CD34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000CD38: jr          $ra
    // 0x1000CD3C: nop

    return;
    return;
    // 0x1000CD3C: nop

;}
RECOMP_FUNC void func_150AD78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AD78C: mfc1        $t0, $f12
    ctx->r8 = (int32_t)ctx->f12.u32l;
    // 0x150AD790: sra         $t0, $t0, 22
    ctx->r8 = S32(SIGNED(ctx->r8) >> 22);
    // 0x150AD794: andi        $t0, $t0, 0x1FF
    ctx->r8 = ctx->r8 & 0X1FF;
    // 0x150AD798: slti        $at, $t0, 0xFF
    ctx->r1 = SIGNED(ctx->r8) < 0XFF ? 1 : 0;
    // 0x150AD79C: beq         $at, $zero, L_150AD800
    if (ctx->r1 == 0) {
        // 0x150AD7A0: nop
    
            goto L_150AD800;
    }
    // 0x150AD7A0: nop

    // 0x150AD7A4: slti        $at, $t0, 0xE6
    ctx->r1 = SIGNED(ctx->r8) < 0XE6 ? 1 : 0;
    // 0x150AD7A8: bne         $at, $zero, L_150AD89C
    if (ctx->r1 != 0) {
        // 0x150AD7AC: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_150AD89C;
    }
    // 0x150AD7AC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x150AD7B0: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150AD7B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD7B8: lwc1        $f18, -0x8EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X8EC);
    // 0x150AD7BC: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD7C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD7C4: lwc1        $f10, -0x8E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8E8);
    // 0x150AD7C8: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD7CC: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD7D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD7D4: lwc1        $f10, -0x8E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8E4);
    // 0x150AD7D8: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD7DC: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD7E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD7E4: lwc1        $f10, -0x8E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8E0);
    // 0x150AD7E8: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD7EC: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x150AD7F0: nop

    // 0x150AD7F4: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150AD7F8: j           L_150AD89C
    // 0x150AD7FC: add.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f12.fl;
        goto L_150AD89C;
    // 0x150AD7FC: add.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f12.fl;
L_150AD800:
    // 0x150AD800: slti        $at, $t0, 0x136
    ctx->r1 = SIGNED(ctx->r8) < 0X136 ? 1 : 0;
    // 0x150AD804: beql        $at, $zero, L_150AD89C
    if (ctx->r1 == 0) {
        // 0x150AD808: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_150AD89C;
    }
    goto skip_0;
    // 0x150AD808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x150AD80C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD810: lwc1        $f16, -0x8DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X8DC);
    // 0x150AD814: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x150AD818: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150AD81C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x150AD820: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150AD824: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD828: lwc1        $f18, -0x8D8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X8D8);
    // 0x150AD82C: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD830: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x150AD834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD838: lwc1        $f18, -0x8D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X8D4);
    // 0x150AD83C: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD840: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x150AD844: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150AD848: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD84C: lwc1        $f18, -0x8D0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X8D0);
    // 0x150AD850: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD854: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD858: lwc1        $f10, -0x8CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8CC);
    // 0x150AD85C: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD860: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD864: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD868: lwc1        $f10, -0x8C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8C8);
    // 0x150AD86C: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD870: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AD878: lwc1        $f10, -0x8C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X8C4);
    // 0x150AD87C: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150AD880: mul.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150AD884: nop

    // 0x150AD888: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x150AD88C: add.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x150AD890: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x150AD894: bnel        $t1, $zero, L_150AD89C
    if (ctx->r9 != 0) {
        // 0x150AD898: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_150AD89C;
    }
    goto skip_1;
    // 0x150AD898: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
L_150AD89C:
    // 0x150AD89C: jr          $ra
    // 0x150AD8A0: nop

    return;
    return;
    // 0x150AD8A0: nop

;}
RECOMP_FUNC void func_151D61B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D61B0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151D61B4: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x151D61B8: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x151D61BC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x151D61C0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151D61C4: lw          $v1, -0x19DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X19DC);
    // 0x151D61C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151D61CC: lw          $v0, -0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19E0);
    // 0x151D61D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D61D4: blez        $v1, L_151D6404
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151D61D8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151D6404;
    }
    // 0x151D61D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D61DC: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x151D61E0: sll         $s2, $v0, 1
    ctx->r18 = S32(ctx->r2 << 1);
L_151D61E4:
    // 0x151D61E4: addiu       $a3, $a1, 0x2
    ctx->r7 = ADD32(ctx->r5, 0X2);
    // 0x151D61E8: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x151D61EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x151D61F0: lhu         $t0, 0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2);
    // 0x151D61F4: lhu         $t1, 0x4($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X4);
    // 0x151D61F8: bne         $at, $zero, L_151D63F8
    if (ctx->r1 != 0) {
        // 0x151D61FC: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_151D63F8;
    }
    // 0x151D61FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151D6200: addiu       $t4, $v0, -0x2
    ctx->r12 = ADD32(ctx->r2, -0X2);
    // 0x151D6204: andi        $t6, $t4, 0x1
    ctx->r14 = ctx->r12 & 0X1;
    // 0x151D6208: beq         $t6, $zero, L_151D62B4
    if (ctx->r14 == 0) {
        // 0x151D620C: or          $t4, $t0, $zero
        ctx->r12 = ctx->r8 | 0;
            goto L_151D62B4;
    }
    // 0x151D620C: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
    // 0x151D6210: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x151D6214: sra         $t7, $t0, 11
    ctx->r15 = S32(SIGNED(ctx->r8) >> 11);
    // 0x151D6218: lhu         $t1, 0x4($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X4);
    // 0x151D621C: andi        $t9, $t7, 0x1F
    ctx->r25 = ctx->r15 & 0X1F;
    // 0x151D6220: sra         $t6, $t4, 12
    ctx->r14 = S32(SIGNED(ctx->r12) >> 12);
    // 0x151D6224: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x151D6228: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x151D622C: sra         $t9, $t1, 12
    ctx->r25 = S32(SIGNED(ctx->r9) >> 12);
    // 0x151D6230: andi        $t7, $t9, 0xF
    ctx->r15 = ctx->r25 & 0XF;
    // 0x151D6234: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x151D6238: andi        $t6, $t9, 0x3E
    ctx->r14 = ctx->r25 & 0X3E;
    // 0x151D623C: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x151D6240: sra         $t8, $t0, 6
    ctx->r24 = S32(SIGNED(ctx->r8) >> 6);
    // 0x151D6244: andi        $t6, $t8, 0x1F
    ctx->r14 = ctx->r24 & 0X1F;
    // 0x151D6248: sra         $t8, $t4, 7
    ctx->r24 = S32(SIGNED(ctx->r12) >> 7);
    // 0x151D624C: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x151D6250: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x151D6254: or          $t6, $t8, $zero
    ctx->r14 = ctx->r24 | 0;
    // 0x151D6258: sra         $t9, $t1, 7
    ctx->r25 = S32(SIGNED(ctx->r9) >> 7);
    // 0x151D625C: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x151D6260: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151D6264: or          $t6, $t9, $zero
    ctx->r14 = ctx->r25 | 0;
    // 0x151D6268: andi        $t8, $t6, 0x3E
    ctx->r24 = ctx->r14 & 0X3E;
    // 0x151D626C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x151D6270: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x151D6274: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x151D6278: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x151D627C: sra         $t8, $t4, 2
    ctx->r24 = S32(SIGNED(ctx->r12) >> 2);
    // 0x151D6280: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x151D6284: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x151D6288: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x151D628C: sra         $t7, $t1, 2
    ctx->r15 = S32(SIGNED(ctx->r9) >> 2);
    // 0x151D6290: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x151D6294: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x151D6298: andi        $t8, $t7, 0x3E
    ctx->r24 = ctx->r15 & 0X3E;
    // 0x151D629C: or          $t4, $t6, $t8
    ctx->r12 = ctx->r14 | ctx->r24;
    // 0x151D62A0: ori         $t9, $t4, 0x1
    ctx->r25 = ctx->r12 | 0X1;
    // 0x151D62A4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151D62A8: sh          $t9, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r25;
    // 0x151D62AC: beq         $t2, $t3, L_151D63F8
    if (ctx->r10 == ctx->r11) {
        // 0x151D62B0: addiu       $a0, $a3, 0x2
        ctx->r4 = ADD32(ctx->r7, 0X2);
            goto L_151D63F8;
    }
    // 0x151D62B0: addiu       $a0, $a3, 0x2
    ctx->r4 = ADD32(ctx->r7, 0X2);
L_151D62B4:
    // 0x151D62B4: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
    // 0x151D62B8: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x151D62BC: sra         $t6, $t0, 11
    ctx->r14 = S32(SIGNED(ctx->r8) >> 11);
    // 0x151D62C0: lhu         $t1, 0x4($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X4);
    // 0x151D62C4: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x151D62C8: sra         $t9, $t4, 12
    ctx->r25 = S32(SIGNED(ctx->r12) >> 12);
    // 0x151D62CC: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x151D62D0: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x151D62D4: sra         $t7, $t1, 12
    ctx->r15 = S32(SIGNED(ctx->r9) >> 12);
    // 0x151D62D8: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x151D62DC: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x151D62E0: andi        $t9, $t7, 0x3E
    ctx->r25 = ctx->r15 & 0X3E;
    // 0x151D62E4: sll         $t6, $t9, 10
    ctx->r14 = S32(ctx->r25 << 10);
    // 0x151D62E8: sra         $t8, $t0, 6
    ctx->r24 = S32(SIGNED(ctx->r8) >> 6);
    // 0x151D62EC: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x151D62F0: sra         $t8, $t4, 7
    ctx->r24 = S32(SIGNED(ctx->r12) >> 7);
    // 0x151D62F4: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x151D62F8: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x151D62FC: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x151D6300: sra         $t7, $t1, 7
    ctx->r15 = S32(SIGNED(ctx->r9) >> 7);
    // 0x151D6304: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x151D6308: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x151D630C: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x151D6310: andi        $t8, $t9, 0x3E
    ctx->r24 = ctx->r25 & 0X3E;
    // 0x151D6314: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x151D6318: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x151D631C: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x151D6320: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x151D6324: sra         $t8, $t4, 2
    ctx->r24 = S32(SIGNED(ctx->r12) >> 2);
    // 0x151D6328: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x151D632C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x151D6330: or          $t7, $t8, $zero
    ctx->r15 = ctx->r24 | 0;
    // 0x151D6334: sra         $t6, $t1, 2
    ctx->r14 = S32(SIGNED(ctx->r9) >> 2);
    // 0x151D6338: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x151D633C: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x151D6340: andi        $t8, $t6, 0x3E
    ctx->r24 = ctx->r14 & 0X3E;
    // 0x151D6344: or          $t4, $t9, $t8
    ctx->r12 = ctx->r25 | ctx->r24;
    // 0x151D6348: ori         $t7, $t4, 0x1
    ctx->r15 = ctx->r12 | 0X1;
    // 0x151D634C: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
    // 0x151D6350: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
    // 0x151D6354: sra         $t9, $t0, 11
    ctx->r25 = S32(SIGNED(ctx->r8) >> 11);
    // 0x151D6358: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x151D635C: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x151D6360: sra         $t7, $t4, 12
    ctx->r15 = S32(SIGNED(ctx->r12) >> 12);
    // 0x151D6364: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x151D6368: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x151D636C: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x151D6370: sra         $t6, $t1, 12
    ctx->r14 = S32(SIGNED(ctx->r9) >> 12);
    // 0x151D6374: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x151D6378: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x151D637C: andi        $t7, $t6, 0x3E
    ctx->r15 = ctx->r14 & 0X3E;
    // 0x151D6380: sll         $t9, $t7, 10
    ctx->r25 = S32(ctx->r15 << 10);
    // 0x151D6384: sra         $t8, $t0, 6
    ctx->r24 = S32(SIGNED(ctx->r8) >> 6);
    // 0x151D6388: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x151D638C: sra         $t8, $t4, 7
    ctx->r24 = S32(SIGNED(ctx->r12) >> 7);
    // 0x151D6390: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x151D6394: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x151D6398: or          $t7, $t8, $zero
    ctx->r15 = ctx->r24 | 0;
    // 0x151D639C: sra         $t6, $t1, 7
    ctx->r14 = S32(SIGNED(ctx->r9) >> 7);
    // 0x151D63A0: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x151D63A4: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x151D63A8: or          $t7, $t6, $zero
    ctx->r15 = ctx->r14 | 0;
    // 0x151D63AC: andi        $t8, $t7, 0x3E
    ctx->r24 = ctx->r15 & 0X3E;
    // 0x151D63B0: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x151D63B4: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x151D63B8: sra         $t8, $t0, 1
    ctx->r24 = S32(SIGNED(ctx->r8) >> 1);
    // 0x151D63BC: andi        $t6, $t8, 0x1F
    ctx->r14 = ctx->r24 & 0X1F;
    // 0x151D63C0: sra         $t8, $t4, 2
    ctx->r24 = S32(SIGNED(ctx->r12) >> 2);
    // 0x151D63C4: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x151D63C8: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x151D63CC: or          $t6, $t8, $zero
    ctx->r14 = ctx->r24 | 0;
    // 0x151D63D0: sra         $t9, $t1, 2
    ctx->r25 = S32(SIGNED(ctx->r9) >> 2);
    // 0x151D63D4: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x151D63D8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151D63DC: andi        $t8, $t9, 0x3E
    ctx->r24 = ctx->r25 & 0X3E;
    // 0x151D63E0: or          $t4, $t7, $t8
    ctx->r12 = ctx->r15 | ctx->r24;
    // 0x151D63E4: ori         $t6, $t4, 0x1
    ctx->r14 = ctx->r12 | 0X1;
    // 0x151D63E8: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x151D63EC: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x151D63F0: bne         $t2, $t3, L_151D62B4
    if (ctx->r10 != ctx->r11) {
        // 0x151D63F4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_151D62B4;
    }
    // 0x151D63F4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_151D63F8:
    // 0x151D63F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x151D63FC: bne         $a2, $v1, L_151D61E4
    if (ctx->r6 != ctx->r3) {
        // 0x151D6400: addu        $a1, $a1, $s2
        ctx->r5 = ADD32(ctx->r5, ctx->r18);
            goto L_151D61E4;
    }
    // 0x151D6400: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
L_151D6404:
    // 0x151D6404: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x151D6408: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x151D640C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x151D6410: jr          $ra
    // 0x151D6414: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x151D6414: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150707F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150707F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150707FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15070800: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15070804: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070808: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507080C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15070810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15070814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15070818: jal         0x150FDF38
    // 0x1507081C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_150FDF38(rdram, ctx);
        goto after_0;
    // 0x1507081C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15070820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15070824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15070828: jr          $ra
    // 0x1507082C: nop

    return;
    return;
    // 0x1507082C: nop

;}
RECOMP_FUNC void func_150B12FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B12FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150B1300: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150B1304: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B1308: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150B130C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150B1310: lh          $v0, 0x76($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X76);
    // 0x150B1314: sb          $t6, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r14;
    // 0x150B1318: lbu         $t8, 0x13F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13F);
    // 0x150B131C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150B1320: lw          $t7, 0x2104($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2104);
    // 0x150B1324: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150B1328: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B132C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150B1330: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x150B1334: lwc1        $f6, -0x744($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X744);
    // 0x150B1338: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150B133C: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x150B1340: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B1344: lui         $at, 0xC180
    ctx->r1 = S32(0XC180 << 16);
    // 0x150B1348: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150B134C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B1350: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x150B1354: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B1358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B135C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x150B1360: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150B1364: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150B1368: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x150B136C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150B1370: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150B1374: jal         0x15058EA4
    // 0x150B1378: nop

    func_15058EA4(rdram, ctx);
        goto after_0;
    // 0x150B1378: nop

    after_0:
    // 0x150B137C: jal         0x15056B08
    // 0x150B1380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15056B08(rdram, ctx);
        goto after_1;
    // 0x150B1380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x150B1384: lh          $v0, 0x34($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X34);
    // 0x150B1388: lhu         $t3, 0x76($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X76);
    // 0x150B138C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150B1390: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B1394: subu        $t5, $v0, $t3
    ctx->r13 = SUB32(ctx->r2, ctx->r11);
    // 0x150B1398: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150B139C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150B13A0: sll         $t8, $t6, 17
    ctx->r24 = S32(ctx->r14 << 17);
    // 0x150B13A4: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B13A8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x150B13AC: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x150B13B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B13B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B13B8: lwc1        $f12, 0xC4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150B13BC: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x150B13C0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B13C4: sub.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x150B13C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150B13CC: nop

    // 0x150B13D0: bc1fl       L_150B13E4
    if (!c1cs) {
        // 0x150B13D4: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150B13E4;
    }
    goto skip_0;
    // 0x150B13D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x150B13D8: b           L_150B13FC
    // 0x150B13DC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_150B13FC;
    // 0x150B13DC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x150B13E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150B13E4:
    // 0x150B13E4: nop

    // 0x150B13E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150B13EC: nop

    // 0x150B13F0: bc1fl       L_150B1400
    if (!c1cs) {
        // 0x150B13F4: lwc1        $f2, 0x148($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X148);
            goto L_150B1400;
    }
    goto skip_1;
    // 0x150B13F4: lwc1        $f2, 0x148($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X148);
    skip_1:
    // 0x150B13F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_150B13FC:
    // 0x150B13FC: lwc1        $f2, 0x148($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X148);
L_150B1400:
    // 0x150B1400: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1404: lwc1        $f10, -0x740($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X740);
    // 0x150B1408: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150B140C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150B1410: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x150B1414: swc1        $f18, 0x148($s0)
    MEM_W(0X148, ctx->r16) = ctx->f18.u32l;
    // 0x150B1418: lwc1        $f4, 0x148($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X148);
    // 0x150B141C: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x150B1420: swc1        $f6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f6.u32l;
    // 0x150B1424: lhu         $t9, 0x7A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X7A);
    // 0x150B1428: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150B142C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B1430: addiu       $t0, $t9, 0x4000
    ctx->r8 = ADD32(ctx->r25, 0X4000);
    // 0x150B1434: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x150B1438: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150B143C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x150B1440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B1444: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B1448: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150B144C: jal         0x15059140
    // 0x150B1450: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    func_15059140(rdram, ctx);
        goto after_2;
    // 0x150B1450: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    after_2:
    // 0x150B1454: jal         0x150535F4
    // 0x150B1458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150535F4(rdram, ctx);
        goto after_3;
    // 0x150B1458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x150B145C: bne         $v0, $zero, L_150B1470
    if (ctx->r2 != 0) {
        // 0x150B1460: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150B1470;
    }
    // 0x150B1460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B1464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B1468: jal         0x1502178C
    // 0x150B146C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1502178C(rdram, ctx);
        goto after_4;
    // 0x150B146C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
L_150B1470:
    // 0x150B1470: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150B1474: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150B1478: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150B147C: jr          $ra
    // 0x150B1480: nop

    return;
    return;
    // 0x150B1480: nop

;}
RECOMP_FUNC void func_10008BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008BC4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x10008BC8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x10008BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008BD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008BD4: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x10008BD8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x10008BDC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008BE0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x10008BE4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x10008BE8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x10008BEC: jal         0x10017DF0
    // 0x10008BF0: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    func_10017DF0(rdram, ctx);
        goto after_0;
    // 0x10008BF0: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    after_0:
    // 0x10008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008BFC: jr          $ra
    // 0x10008C00: nop

    return;
    return;
    // 0x10008C00: nop

;}
RECOMP_FUNC void func_151F6970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F6970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151F6974: lw          $t6, 0x3BA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3BA4);
    // 0x151F6978: lw          $t8, 0x3BB4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3BB4);
    // 0x151F697C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F6980: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x151F6984: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x151F6988: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F698C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x151F6990: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x151F6994: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151F6998: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x151F699C: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x151F69A0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x151F69A4: addiu       $t1, $t1, -0x1484
    ctx->r9 = ADD32(ctx->r9, -0X1484);
    // 0x151F69A8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x151F69AC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151F69B0: addiu       $t3, $a0, 0x4F64
    ctx->r11 = ADD32(ctx->r4, 0X4F64);
    // 0x151F69B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151F69B8: addiu       $t4, $a0, 0x4664
    ctx->r12 = ADD32(ctx->r4, 0X4664);
    // 0x151F69BC: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x151F69C0: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x151F69C4: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x151F69C8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x151F69CC: lw          $t8, 0x3C98($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X3C98);
    // 0x151F69D0: beq         $t8, $zero, L_151F6AC0
    if (ctx->r24 == 0) {
        // 0x151F69D4: nop
    
            goto L_151F6AC0;
    }
    // 0x151F69D4: nop

    // 0x151F69D8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x151F69DC: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x151F69E0: lw          $t0, 0x3CA0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3CA0);
    // 0x151F69E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F69E8: bne         $t0, $at, L_151F6AC0
    if (ctx->r8 != ctx->r1) {
        // 0x151F69EC: nop
    
            goto L_151F6AC0;
    }
    // 0x151F69EC: nop

    // 0x151F69F0: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x151F69F4: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x151F69F8: lw          $t3, 0x3CA8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X3CA8);
    // 0x151F69FC: beq         $t3, $zero, L_151F6A54
    if (ctx->r11 == 0) {
        // 0x151F6A00: nop
    
            goto L_151F6A54;
    }
    // 0x151F6A00: nop

    // 0x151F6A04: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6A08: slti        $a2, $t4, 0x24
    ctx->r6 = SIGNED(ctx->r12) < 0X24 ? 1 : 0;
    // 0x151F6A0C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F6A10: beq         $a2, $zero, L_151F6A54
    if (ctx->r6 == 0) {
        // 0x151F6A14: sw          $t5, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r13;
            goto L_151F6A54;
    }
    // 0x151F6A14: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
L_151F6A18:
    // 0x151F6A18: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x151F6A1C: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x151F6A20: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151F6A24: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x151F6A28: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x151F6A2C: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x151F6A30: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x151F6A34: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x151F6A38: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151F6A3C: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x151F6A40: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F6A44: slti        $a2, $t2, 0x24
    ctx->r6 = SIGNED(ctx->r10) < 0X24 ? 1 : 0;
    // 0x151F6A48: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151F6A4C: bne         $a2, $zero, L_151F6A18
    if (ctx->r6 != 0) {
        // 0x151F6A50: sw          $t3, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r11;
            goto L_151F6A18;
    }
    // 0x151F6A50: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
L_151F6A54:
    // 0x151F6A54: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6A58: slti        $at, $t4, 0x240
    ctx->r1 = SIGNED(ctx->r12) < 0X240 ? 1 : 0;
    // 0x151F6A5C: beq         $at, $zero, L_151F6AB8
    if (ctx->r1 == 0) {
        // 0x151F6A60: nop
    
            goto L_151F6AB8;
    }
    // 0x151F6A60: nop

L_151F6A64:
    // 0x151F6A64: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x151F6A68: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x151F6A6C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x151F6A70: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x151F6A74: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x151F6A78: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x151F6A7C: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x151F6A80: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x151F6A84: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x151F6A88: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x151F6A8C: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x151F6A90: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x151F6A94: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6A98: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x151F6A9C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F6AA0: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x151F6AA4: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x151F6AA8: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x151F6AAC: slti        $at, $t7, 0x240
    ctx->r1 = SIGNED(ctx->r15) < 0X240 ? 1 : 0;
    // 0x151F6AB0: bne         $at, $zero, L_151F6A64
    if (ctx->r1 != 0) {
        // 0x151F6AB4: nop
    
            goto L_151F6A64;
    }
    // 0x151F6AB4: nop

L_151F6AB8:
    // 0x151F6AB8: b           L_151F6B10
    // 0x151F6ABC: nop

        goto L_151F6B10;
    // 0x151F6ABC: nop

L_151F6AC0:
    // 0x151F6AC0: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x151F6AC4: slti        $a2, $t9, 0x240
    ctx->r6 = SIGNED(ctx->r25) < 0X240 ? 1 : 0;
    // 0x151F6AC8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x151F6ACC: beq         $a2, $zero, L_151F6B10
    if (ctx->r6 == 0) {
        // 0x151F6AD0: sw          $t0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r8;
            goto L_151F6B10;
    }
    // 0x151F6AD0: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
L_151F6AD4:
    // 0x151F6AD4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x151F6AD8: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x151F6ADC: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151F6AE0: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x151F6AE4: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x151F6AE8: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x151F6AEC: addiu       $t8, $t5, 0x4
    ctx->r24 = ADD32(ctx->r13, 0X4);
    // 0x151F6AF0: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x151F6AF4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151F6AF8: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x151F6AFC: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F6B00: slti        $a2, $t6, 0x240
    ctx->r6 = SIGNED(ctx->r14) < 0X240 ? 1 : 0;
    // 0x151F6B04: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151F6B08: bne         $a2, $zero, L_151F6AD4
    if (ctx->r6 != 0) {
        // 0x151F6B0C: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_151F6AD4;
    }
    // 0x151F6B0C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
L_151F6B10:
    // 0x151F6B10: b           L_151F6B20
    // 0x151F6B14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F6B20;
    // 0x151F6B14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151F6B18: b           L_151F6B20
    // 0x151F6B1C: nop

        goto L_151F6B20;
    // 0x151F6B1C: nop

L_151F6B20:
    // 0x151F6B20: jr          $ra
    // 0x151F6B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151F6B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151707E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151707E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151707E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151707E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151707EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151707F0: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
    // 0x151707F4: lbu         $v1, 0x1F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1F);
    // 0x151707F8: beq         $v0, $zero, L_1517085C
    if (ctx->r2 == 0) {
        // 0x151707FC: nop
    
            goto L_1517085C;
    }
    // 0x151707FC: nop

    // 0x15170800: bnel        $v1, $zero, L_1517082C
    if (ctx->r3 != 0) {
        // 0x15170804: addiu       $at, $zero, 0xFE
        ctx->r1 = ADD32(0, 0XFE);
            goto L_1517082C;
    }
    goto skip_0;
    // 0x15170804: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    skip_0:
    // 0x15170808: jal         0x150ADA20
    // 0x1517080C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1517080C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x15170810: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x15170814: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15170818: mfhi        $t6
    ctx->r14 = hi;
    // 0x1517081C: addiu       $t7, $t6, 0xC8
    ctx->r15 = ADD32(ctx->r14, 0XC8);
    // 0x15170820: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15170824: sb          $t7, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r15;
    // 0x15170828: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
L_1517082C:
    // 0x1517082C: beq         $v1, $at, L_15170854
    if (ctx->r3 == ctx->r1) {
        // 0x15170830: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15170854;
    }
    // 0x15170830: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15170834: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15170838: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x1517083C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x15170840: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x15170844: bnel        $at, $zero, L_15170854
    if (ctx->r1 != 0) {
        // 0x15170848: sb          $v1, 0x1F($s0)
        MEM_B(0X1F, ctx->r16) = ctx->r3;
            goto L_15170854;
    }
    goto skip_1;
    // 0x15170848: sb          $v1, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = ctx->r3;
    skip_1:
    // 0x1517084C: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
    // 0x15170850: sb          $v1, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = ctx->r3;
L_15170854:
    // 0x15170854: b           L_15170884
    // 0x15170858: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
        goto L_15170884;
    // 0x15170858: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
L_1517085C:
    // 0x1517085C: beq         $v1, $zero, L_15170884
    if (ctx->r3 == 0) {
        // 0x15170860: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_15170884;
    }
    // 0x15170860: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15170864: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x15170868: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x1517086C: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x15170870: bgezl       $v1, L_15170880
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15170874: sb          $v1, 0x1F($s0)
        MEM_B(0X1F, ctx->r16) = ctx->r3;
            goto L_15170880;
    }
    goto skip_2;
    // 0x15170874: sb          $v1, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = ctx->r3;
    skip_2:
    // 0x15170878: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1517087C: sb          $v1, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = ctx->r3;
L_15170880:
    // 0x15170880: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
L_15170884:
    // 0x15170884: bne         $v0, $zero, L_1517089C
    if (ctx->r2 != 0) {
        // 0x15170888: nop
    
            goto L_1517089C;
    }
    // 0x15170888: nop

    // 0x1517088C: bne         $v1, $zero, L_1517089C
    if (ctx->r3 != 0) {
        // 0x15170890: nop
    
            goto L_1517089C;
    }
    // 0x15170890: nop

    // 0x15170894: b           L_151709A0
    // 0x15170898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151709A0;
    // 0x15170898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1517089C:
    // 0x1517089C: jal         0x1516F864
    // 0x151708A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516F864(rdram, ctx);
        goto after_1;
    // 0x151708A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x151708A4: lbu         $t2, 0x2F($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2F);
    // 0x151708A8: beql        $t2, $zero, L_1517090C
    if (ctx->r10 == 0) {
        // 0x151708AC: lb          $a0, 0x26($s0)
        ctx->r4 = MEM_B(ctx->r16, 0X26);
            goto L_1517090C;
    }
    goto skip_3;
    // 0x151708AC: lb          $a0, 0x26($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X26);
    skip_3:
    // 0x151708B0: jal         0x151EF610
    // 0x151708B4: nop

    func_151EF610(rdram, ctx);
        goto after_2;
    // 0x151708B4: nop

    after_2:
    // 0x151708B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151708BC: bgez        $v0, L_151708D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151708C0: andi        $a1, $v0, 0x1F
        ctx->r5 = ctx->r2 & 0X1F;
            goto L_151708D0;
    }
    // 0x151708C0: andi        $a1, $v0, 0x1F
    ctx->r5 = ctx->r2 & 0X1F;
    // 0x151708C4: beq         $a1, $zero, L_151708D0
    if (ctx->r5 == 0) {
        // 0x151708C8: nop
    
            goto L_151708D0;
    }
    // 0x151708C8: nop

    // 0x151708CC: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
L_151708D0:
    // 0x151708D0: jal         0x1516F8EC
    // 0x151708D4: addiu       $a1, $a1, 0xE6
    ctx->r5 = ADD32(ctx->r5, 0XE6);
    func_1516F8EC(rdram, ctx);
        goto after_3;
    // 0x151708D4: addiu       $a1, $a1, 0xE6
    ctx->r5 = ADD32(ctx->r5, 0XE6);
    after_3:
    // 0x151708D8: jal         0x151EF610
    // 0x151708DC: nop

    func_151EF610(rdram, ctx);
        goto after_4;
    // 0x151708DC: nop

    after_4:
    // 0x151708E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151708E4: bgez        $v0, L_151708F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151708E8: andi        $a1, $v0, 0x1F
        ctx->r5 = ctx->r2 & 0X1F;
            goto L_151708F8;
    }
    // 0x151708E8: andi        $a1, $v0, 0x1F
    ctx->r5 = ctx->r2 & 0X1F;
    // 0x151708EC: beq         $a1, $zero, L_151708F8
    if (ctx->r5 == 0) {
        // 0x151708F0: nop
    
            goto L_151708F8;
    }
    // 0x151708F0: nop

    // 0x151708F4: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
L_151708F8:
    // 0x151708F8: jal         0x1516F91C
    // 0x151708FC: addiu       $a1, $a1, 0xE6
    ctx->r5 = ADD32(ctx->r5, 0XE6);
    func_1516F91C(rdram, ctx);
        goto after_5;
    // 0x151708FC: addiu       $a1, $a1, 0xE6
    ctx->r5 = ADD32(ctx->r5, 0XE6);
    after_5:
    // 0x15170900: b           L_1517099C
    // 0x15170904: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
        goto L_1517099C;
    // 0x15170904: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x15170908: lb          $a0, 0x26($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X26);
L_1517090C:
    // 0x1517090C: lbu         $a1, 0x27($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X27);
    // 0x15170910: sll         $t3, $a0, 8
    ctx->r11 = S32(ctx->r4 << 8);
    // 0x15170914: addu        $v0, $t3, $a1
    ctx->r2 = ADD32(ctx->r11, ctx->r5);
    // 0x15170918: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517091C: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x15170920: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x15170924: mflo        $t4
    ctx->r12 = lo;
    // 0x15170928: nop

    // 0x1517092C: nop

    // 0x15170930: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15170934: mflo        $t5
    ctx->r13 = lo;
    // 0x15170938: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1517093C: slti        $at, $t6, 0x7D1
    ctx->r1 = SIGNED(ctx->r14) < 0X7D1 ? 1 : 0;
    // 0x15170940: bnel        $at, $zero, L_1517099C
    if (ctx->r1 != 0) {
        // 0x15170944: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_1517099C;
    }
    goto skip_4;
    // 0x15170944: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    skip_4:
    // 0x15170948: jal         0x151EF610
    // 0x1517094C: nop

    func_151EF610(rdram, ctx);
        goto after_6;
    // 0x1517094C: nop

    after_6:
    // 0x15170950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15170954: bgez        $v0, L_15170968
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15170958: andi        $a1, $v0, 0x1F
        ctx->r5 = ctx->r2 & 0X1F;
            goto L_15170968;
    }
    // 0x15170958: andi        $a1, $v0, 0x1F
    ctx->r5 = ctx->r2 & 0X1F;
    // 0x1517095C: beq         $a1, $zero, L_15170968
    if (ctx->r5 == 0) {
        // 0x15170960: nop
    
            goto L_15170968;
    }
    // 0x15170960: nop

    // 0x15170964: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
L_15170968:
    // 0x15170968: jal         0x1516F8EC
    // 0x1517096C: addiu       $a1, $a1, 0xDC
    ctx->r5 = ADD32(ctx->r5, 0XDC);
    func_1516F8EC(rdram, ctx);
        goto after_7;
    // 0x1517096C: addiu       $a1, $a1, 0xDC
    ctx->r5 = ADD32(ctx->r5, 0XDC);
    after_7:
    // 0x15170970: jal         0x151EF610
    // 0x15170974: nop

    func_151EF610(rdram, ctx);
        goto after_8;
    // 0x15170974: nop

    after_8:
    // 0x15170978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1517097C: bgez        $v0, L_15170990
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15170980: andi        $a1, $v0, 0x1F
        ctx->r5 = ctx->r2 & 0X1F;
            goto L_15170990;
    }
    // 0x15170980: andi        $a1, $v0, 0x1F
    ctx->r5 = ctx->r2 & 0X1F;
    // 0x15170984: beq         $a1, $zero, L_15170990
    if (ctx->r5 == 0) {
        // 0x15170988: nop
    
            goto L_15170990;
    }
    // 0x15170988: nop

    // 0x1517098C: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
L_15170990:
    // 0x15170990: jal         0x1516F91C
    // 0x15170994: addiu       $a1, $a1, 0xDC
    ctx->r5 = ADD32(ctx->r5, 0XDC);
    func_1516F91C(rdram, ctx);
        goto after_9;
    // 0x15170994: addiu       $a1, $a1, 0xDC
    ctx->r5 = ADD32(ctx->r5, 0XDC);
    after_9:
    // 0x15170998: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
L_1517099C:
    // 0x1517099C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151709A0:
    // 0x151709A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151709A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151709A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151709AC: jr          $ra
    // 0x151709B0: nop

    return;
    return;
    // 0x151709B0: nop

;}
RECOMP_FUNC void func_1507B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B3B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B3B8: jal         0x1507A3E8
    // 0x1507B3BC: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B3BC: nop

    after_0:
    // 0x1507B3C0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B3C4: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B3C8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B3CC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B3D0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B3D4: jal         0x1506E46C
    // 0x1507B3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1507B3DC: beq         $v0, $zero, L_1507B3EC
    if (ctx->r2 == 0) {
        // 0x1507B3E0: addiu       $a0, $zero, 0x2BC
        ctx->r4 = ADD32(0, 0X2BC);
            goto L_1507B3EC;
    }
    // 0x1507B3E0: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x1507B3E4: jal         0x1506BA4C
    // 0x1507B3E8: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1507B3E8: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    after_2:
L_1507B3EC:
    // 0x1507B3EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B3F4: jr          $ra
    // 0x1507B3F8: nop

    return;
    return;
    // 0x1507B3F8: nop

;}
RECOMP_FUNC void func_151AB788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB788: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151AB78C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB790: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AB794: lhu         $t6, 0x5E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X5E);
    // 0x151AB798: lw          $v0, 0x58($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X58);
    // 0x151AB79C: beq         $t6, $zero, L_151AB7BC
    if (ctx->r14 == 0) {
        // 0x151AB7A0: addiu       $v0, $v0, 0x58
        ctx->r2 = ADD32(ctx->r2, 0X58);
            goto L_151AB7BC;
    }
    // 0x151AB7A0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x151AB7A4: lhu         $a0, 0x5E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X5E);
    // 0x151AB7A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x151AB7AC: jal         0x100111C8
    // 0x151AB7B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151AB7B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x151AB7B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151AB7B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_151AB7BC:
    // 0x151AB7BC: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x151AB7C0: jal         0x151346EC
    // 0x151AB7C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_151346EC(rdram, ctx);
        goto after_1;
    // 0x151AB7C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151AB7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AB7CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151AB7D0: jr          $ra
    // 0x151AB7D4: nop

    return;
    return;
    // 0x151AB7D4: nop

;}
RECOMP_FUNC void func_1502DB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502DB84: addiu       $sp, $sp, -0x420
    ctx->r29 = ADD32(ctx->r29, -0X420);
    // 0x1502DB88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502DB8C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1502DB90: sw          $a0, 0x420($sp)
    MEM_W(0X420, ctx->r29) = ctx->r4;
    // 0x1502DB94: sw          $a1, 0x424($sp)
    MEM_W(0X424, ctx->r29) = ctx->r5;
    // 0x1502DB98: lw          $t6, 0x424($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X424);
    // 0x1502DB9C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1502DBA0: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1502DBA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502DBA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DBAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DBB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1502DBB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DBB8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DBBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DBC0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DBC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DBC8: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x1502DBCC: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x1502DBD0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1502DBD4: addiu       $t2, $t2, 0x19A0
    ctx->r10 = ADD32(ctx->r10, 0X19A0);
    // 0x1502DBD8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x1502DBDC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x1502DBE0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1502DBE4: sw          $zero, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = 0;
    // 0x1502DBE8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x1502DBEC: bne         $t3, $zero, L_1502DC38
    if (ctx->r11 != 0) {
        // 0x1502DBF0: sw          $t9, 0x3C8($sp)
        MEM_W(0X3C8, ctx->r29) = ctx->r25;
            goto L_1502DC38;
    }
    // 0x1502DBF0: sw          $t9, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->r25;
    // 0x1502DBF4: lbu         $t4, 0xAC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XAC);
    // 0x1502DBF8: lw          $a2, 0x144($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X144);
    // 0x1502DBFC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1502DC00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502DC04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1502DC08: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x1502DC0C: jal         0x1503CF20
    // 0x1502DC10: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1503CF20(rdram, ctx);
        goto after_0;
    // 0x1502DC10: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x1502DC14: beq         $v0, $zero, L_1502DC24
    if (ctx->r2 == 0) {
        // 0x1502DC18: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_1502DC24;
    }
    // 0x1502DC18: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1502DC1C: b           L_1502DF24
    // 0x1502DC20: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
        goto L_1502DF24;
    // 0x1502DC20: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
L_1502DC24:
    // 0x1502DC24: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1502DC28: bnel        $t5, $zero, L_1502DC3C
    if (ctx->r13 != 0) {
        // 0x1502DC2C: lw          $t6, 0x2D0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2D0);
            goto L_1502DC3C;
    }
    goto skip_0;
    // 0x1502DC2C: lw          $t6, 0x2D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2D0);
    skip_0:
    // 0x1502DC30: b           L_1502DF24
    // 0x1502DC34: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
        goto L_1502DF24;
    // 0x1502DC34: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
L_1502DC38:
    // 0x1502DC38: lw          $t6, 0x2D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2D0);
L_1502DC3C:
    // 0x1502DC3C: bne         $t6, $zero, L_1502DC5C
    if (ctx->r14 != 0) {
        // 0x1502DC40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1502DC5C;
    }
    // 0x1502DC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502DC44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502DC48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502DC4C: jal         0x150838EC
    // 0x1502DC50: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_150838EC(rdram, ctx);
        goto after_1;
    // 0x1502DC50: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x1502DC54: bnel        $v0, $zero, L_1502DF28
    if (ctx->r2 != 0) {
        // 0x1502DC58: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502DF28;
    }
    goto skip_1;
    // 0x1502DC58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
L_1502DC5C:
    // 0x1502DC5C: lw          $t7, 0x3C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C8);
    // 0x1502DC60: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1502DC64: addiu       $t9, $t9, 0x4ED0
    ctx->r25 = ADD32(ctx->r25, 0X4ED0);
    // 0x1502DC68: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x1502DC6C: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x1502DC70: lhu         $t1, 0x0($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X0);
    // 0x1502DC74: lw          $a0, 0x3C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C8);
    // 0x1502DC78: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x1502DC7C: bne         $at, $zero, L_1502DC90
    if (ctx->r1 != 0) {
        // 0x1502DC80: nop
    
            goto L_1502DC90;
    }
    // 0x1502DC80: nop

    // 0x1502DC84: lw          $t2, 0x2D0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2D0);
    // 0x1502DC88: beql        $t2, $zero, L_1502DF28
    if (ctx->r10 == 0) {
        // 0x1502DC8C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502DF28;
    }
    goto skip_2;
    // 0x1502DC8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
L_1502DC90:
    // 0x1502DC90: jal         0x1502DB20
    // 0x1502DC94: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_1502DB20(rdram, ctx);
        goto after_2;
    // 0x1502DC94: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_2:
    // 0x1502DC98: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1502DC9C: lw          $t4, 0x3E88($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3E88);
    // 0x1502DCA0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1502DCA4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502DCA8: lw          $t7, 0x3E8C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3E8C);
    // 0x1502DCAC: lhu         $t3, 0x3E7C($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3E7C);
    // 0x1502DCB0: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x1502DCB4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1502DCB8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x1502DCBC: sll         $t0, $t3, 6
    ctx->r8 = S32(ctx->r11 << 6);
    // 0x1502DCC0: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x1502DCC4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x1502DCC8: beq         $at, $zero, L_1502DCD8
    if (ctx->r1 == 0) {
        // 0x1502DCCC: sw          $v0, 0x3BC($sp)
        MEM_W(0X3BC, ctx->r29) = ctx->r2;
            goto L_1502DCD8;
    }
    // 0x1502DCCC: sw          $v0, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = ctx->r2;
    // 0x1502DCD0: b           L_1502DF24
    // 0x1502DCD4: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
        goto L_1502DF24;
    // 0x1502DCD4: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
L_1502DCD8:
    // 0x1502DCD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502DCDC: jal         0x1502FD70
    // 0x1502DCE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_1502FD70(rdram, ctx);
        goto after_3;
    // 0x1502DCE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_3:
    // 0x1502DCE4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1502DCE8: lw          $t9, 0x3E88($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3E88);
    // 0x1502DCEC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x1502DCF0: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1502DCF4: sw          $t9, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r25;
    // 0x1502DCF8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1502DCFC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1502DD00: addiu       $t2, $t2, 0x1C90
    ctx->r10 = ADD32(ctx->r10, 0X1C90);
    // 0x1502DD04: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x1502DD08: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1502DD0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502DD10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1502DD14: lbu         $t4, 0x29($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X29);
    // 0x1502DD18: beql        $t4, $zero, L_1502DD84
    if (ctx->r12 == 0) {
        // 0x1502DD1C: addiu       $a0, $sp, 0x3CC
        ctx->r4 = ADD32(ctx->r29, 0X3CC);
            goto L_1502DD84;
    }
    goto skip_3;
    // 0x1502DD1C: addiu       $a0, $sp, 0x3CC
    ctx->r4 = ADD32(ctx->r29, 0X3CC);
    skip_3:
    // 0x1502DD20: sb          $zero, 0x3FFA($at)
    MEM_B(0X3FFA, ctx->r1) = 0;
    // 0x1502DD24: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x1502DD28: jal         0x100226F0
    // 0x1502DD2C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x1502DD2C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_4:
    // 0x1502DD30: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1502DD34: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1502DD38: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1502DD3C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1502DD40: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1502DD44: lbu         $t6, 0x29($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X29);
    // 0x1502DD48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502DD4C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1502DD50: lw          $v0, 0x422C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X422C);
    // 0x1502DD54: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x1502DD58: beql        $a1, $a0, L_1502DD80
    if (ctx->r5 == ctx->r4) {
        // 0x1502DD5C: sw          $a2, 0x3C4($sp)
        MEM_W(0X3C4, ctx->r29) = ctx->r6;
            goto L_1502DD80;
    }
    goto skip_4;
    // 0x1502DD5C: sw          $a2, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->r6;
    skip_4:
    // 0x1502DD60: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
L_1502DD64:
    // 0x1502DD64: addu        $t8, $a2, $a0
    ctx->r24 = ADD32(ctx->r6, ctx->r4);
    // 0x1502DD68: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x1502DD6C: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
    // 0x1502DD70: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x1502DD74: bnel        $a1, $a0, L_1502DD64
    if (ctx->r5 != ctx->r4) {
        // 0x1502DD78: lbu         $t0, 0x1($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X1);
            goto L_1502DD64;
    }
    goto skip_5;
    // 0x1502DD78: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    skip_5:
    // 0x1502DD7C: sw          $a2, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->r6;
L_1502DD80:
    // 0x1502DD80: addiu       $a0, $sp, 0x3CC
    ctx->r4 = ADD32(ctx->r29, 0X3CC);
L_1502DD84:
    // 0x1502DD84: jal         0x15033FE0
    // 0x1502DD88: lw          $a1, 0x424($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X424);
    func_15033FE0(rdram, ctx);
        goto after_5;
    // 0x1502DD88: lw          $a1, 0x424($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X424);
    after_5:
    // 0x1502DD8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1502DD90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502DD94: jal         0x1502D824
    // 0x1502DD98: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_1502D824(rdram, ctx);
        goto after_6;
    // 0x1502DD98: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_6:
    // 0x1502DD9C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1502DDA0: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x1502DDA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502DDA8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1502DDAC: beq         $t9, $at, L_1502DDE4
    if (ctx->r25 == ctx->r1) {
        // 0x1502DDB0: addiu       $a0, $a0, 0x3E88
        ctx->r4 = ADD32(ctx->r4, 0X3E88);
            goto L_1502DDE4;
    }
    // 0x1502DDB0: addiu       $a0, $a0, 0x3E88
    ctx->r4 = ADD32(ctx->r4, 0X3E88);
    // 0x1502DDB4: lh          $t1, 0xCC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCC);
    // 0x1502DDB8: lwc1        $f4, 0x150($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X150);
    // 0x1502DDBC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1502DDC0: nop

    // 0x1502DDC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1502DDC8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1502DDCC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1502DDD0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x1502DDD4: nop

    // 0x1502DDD8: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x1502DDDC: b           L_1502DDE8
    // 0x1502DDE0: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
        goto L_1502DDE8;
    // 0x1502DDE0: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_1502DDE4:
    // 0x1502DDE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502DDE8:
    // 0x1502DDE8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1502DDEC: lw          $t6, 0x3BC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3BC);
    // 0x1502DDF0: lw          $t0, 0x3C4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C4);
    // 0x1502DDF4: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1502DDF8: addiu       $t7, $sp, 0x3CC
    ctx->r15 = ADD32(ctx->r29, 0X3CC);
    // 0x1502DDFC: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x1502DE00: lw          $a3, 0x4BE0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4BE0);
    // 0x1502DE04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1502DE08: lw          $a1, 0x420($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X420);
    // 0x1502DE0C: lw          $a2, 0x2D0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2D0);
    // 0x1502DE10: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1502DE14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1502DE18: jal         0x150A81D0
    // 0x1502DE1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_150A81D0(rdram, ctx);
        goto after_7;
    // 0x1502DE1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_7:
    // 0x1502DE20: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1502DE24: lw          $t8, -0x7A84($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7A84);
    // 0x1502DE28: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1502DE2C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1502DE30: sh          $t8, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r24;
    // 0x1502DE34: lw          $v1, -0x7AA8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7AA8);
    // 0x1502DE38: beq         $v1, $zero, L_1502DF0C
    if (ctx->r3 == 0) {
        // 0x1502DE3C: nop
    
            goto L_1502DF0C;
    }
    // 0x1502DE3C: nop

    // 0x1502DE40: lw          $t9, -0x7AAC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7AAC);
    // 0x1502DE44: lbu         $v0, 0x1FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
    // 0x1502DE48: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1502DE4C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1502DE50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502DE54: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x1502DE58: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1502DE5C: beq         $t1, $zero, L_1502DE88
    if (ctx->r9 == 0) {
        // 0x1502DE60: div.s       $f0, $f6, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
            goto L_1502DE88;
    }
    // 0x1502DE60: div.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1502DE64: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x1502DE68: lui         $at, 0x3D00
    ctx->r1 = S32(0X3D00 << 16);
    // 0x1502DE6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1502DE70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1502DE74: lwc1        $f6, 0x1F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1F8);
    // 0x1502DE78: lbu         $v0, 0x1FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
    // 0x1502DE7C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1502DE80: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x1502DE84: swc1        $f4, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->f4.u32l;
L_1502DE88:
    // 0x1502DE88: lwc1        $f8, 0x1F8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1F8);
    // 0x1502DE8C: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x1502DE90: swc1        $f0, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->f0.u32l;
    // 0x1502DE94: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x1502DE98: andi        $t3, $v0, 0xFFFC
    ctx->r11 = ctx->r2 & 0XFFFC;
    // 0x1502DE9C: ori         $t4, $v0, 0x1
    ctx->r12 = ctx->r2 | 0X1;
    // 0x1502DEA0: beq         $t2, $zero, L_1502DEB8
    if (ctx->r10 == 0) {
        // 0x1502DEA4: swc1        $f10, 0x1F4($s0)
        MEM_W(0X1F4, ctx->r16) = ctx->f10.u32l;
            goto L_1502DEB8;
    }
    // 0x1502DEA4: swc1        $f10, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f10.u32l;
    // 0x1502DEA8: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1502DEAC: sb          $t3, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r11;
    // 0x1502DEB0: b           L_1502DEBC
    // 0x1502DEB4: swc1        $f16, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f16.u32l;
        goto L_1502DEBC;
    // 0x1502DEB4: swc1        $f16, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f16.u32l;
L_1502DEB8:
    // 0x1502DEB8: sb          $t4, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r12;
L_1502DEBC:
    // 0x1502DEBC: lbu         $t5, 0x246($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X246);
    // 0x1502DEC0: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x1502DEC4: beq         $t6, $zero, L_1502DF0C
    if (ctx->r14 == 0) {
        // 0x1502DEC8: nop
    
            goto L_1502DF0C;
    }
    // 0x1502DEC8: nop

    // 0x1502DECC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x1502DED0: lui         $at, 0x3D00
    ctx->r1 = S32(0X3D00 << 16);
    // 0x1502DED4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502DED8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1502DEDC: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x1502DEE0: lw          $v0, 0x2D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2D0);
    // 0x1502DEE4: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1502DEE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1502DEEC: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1502DEF0: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1502DEF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1502DEF8: mul.s       $f0, $f8, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1502DEFC: div.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1502DF00: div.s       $f0, $f16, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1502DF04: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1502DF08: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
L_1502DF0C:
    // 0x1502DF0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1502DF10: addiu       $v0, $v0, 0x3E7A
    ctx->r2 = ADD32(ctx->r2, 0X3E7A);
    // 0x1502DF14: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x1502DF18: lw          $t0, 0x3BC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3BC);
    // 0x1502DF1C: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x1502DF20: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_1502DF24:
    // 0x1502DF24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1502DF28:
    // 0x1502DF28: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1502DF2C: addiu       $sp, $sp, 0x420
    ctx->r29 = ADD32(ctx->r29, 0X420);
    // 0x1502DF30: jr          $ra
    // 0x1502DF34: nop

    return;
    return;
    // 0x1502DF34: nop

;}
RECOMP_FUNC void func_15044E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15044E8C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15044E90: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15044E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044E98: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x15044E9C: bnel        $t6, $zero, L_15044EC4
    if (ctx->r14 != 0) {
        // 0x15044EA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044EC4;
    }
    goto skip_0;
    // 0x15044EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15044EA4: lbu         $t7, 0x125($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X125);
    // 0x15044EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15044EAC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15044EB0: bnel        $t7, $zero, L_15044EC4
    if (ctx->r15 != 0) {
        // 0x15044EB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044EC4;
    }
    goto skip_1;
    // 0x15044EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15044EB8: jal         0x1505D024
    // 0x15044EBC: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x15044EBC: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    after_0:
    // 0x15044EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15044EC4:
    // 0x15044EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15044EC8: jr          $ra
    // 0x15044ECC: nop

    return;
    return;
    // 0x15044ECC: nop

;}
RECOMP_FUNC void func_10012718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012718: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1001271C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x10012720: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x10012724: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x10012728: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1001272C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x10012730: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x10012734: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x10012738: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1001273C: lw          $t7, 0x318($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X318);
    // 0x10012740: lhu         $t2, 0x52($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X52);
    // 0x10012744: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x10012748: beq         $t7, $zero, L_10012768
    if (ctx->r15 == 0) {
        // 0x1001274C: addiu       $t5, $sp, 0x38
        ctx->r13 = ADD32(ctx->r29, 0X38);
            goto L_10012768;
    }
    // 0x1001274C: addiu       $t5, $sp, 0x38
    ctx->r13 = ADD32(ctx->r29, 0X38);
    // 0x10012750: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x10012754: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x10012758: jal         0x1001263C
    // 0x1001275C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1001263C(rdram, ctx);
        goto after_0;
    // 0x1001275C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x10012760: b           L_100127C0
    // 0x10012764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_100127C0;
    // 0x10012764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_10012768:
    // 0x10012768: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x1001276C: lwc1        $f8, 0x18($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X18);
    // 0x10012770: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x10012774: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x10012778: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x1001277C: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x10012780: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x10012784: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x10012788: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1001278C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x10012790: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x10012794: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x10012798: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1001279C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x100127A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x100127A4: jal         0x100114D0
    // 0x100127A8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_100114D0(rdram, ctx);
        goto after_1;
    // 0x100127A8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x100127AC: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x100127B0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x100127B4: jal         0x1001263C
    // 0x100127B8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_1001263C(rdram, ctx);
        goto after_2;
    // 0x100127B8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x100127BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_100127C0:
    // 0x100127C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x100127C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100127C8: jr          $ra
    // 0x100127CC: nop

    return;
    return;
    // 0x100127CC: nop

;}
RECOMP_FUNC void func_15093878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15093878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509387C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15093880: jal         0x1518C900
    // 0x15093884: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    func_1518C900(rdram, ctx);
        goto after_0;
    // 0x15093884: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    after_0:
    // 0x15093888: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509388C: sw          $v0, 0x2448($at)
    MEM_W(0X2448, ctx->r1) = ctx->r2;
    // 0x15093890: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x15093894: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15093898: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509389C: jal         0x10003C40
    // 0x150938A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x150938A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x150938A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150938A8: sw          $v0, 0x244C($at)
    MEM_W(0X244C, ctx->r1) = ctx->r2;
    // 0x150938AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150938B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150938B4: jr          $ra
    // 0x150938B8: nop

    return;
    return;
    // 0x150938B8: nop

;}
RECOMP_FUNC void func_151E5034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E5034: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E5038: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151E503C: addiu       $v0, $v0, -0x22C
    ctx->r2 = ADD32(ctx->r2, -0X22C);
    // 0x151E5040: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151E5044: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x151E5048: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151E504C: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x151E5050: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x151E5054: sb          $zero, 0x2B($t8)
    MEM_B(0X2B, ctx->r24) = 0;
    // 0x151E5058: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x151E505C: sh          $zero, 0x20($t9)
    MEM_H(0X20, ctx->r25) = 0;
    // 0x151E5060: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x151E5064: sb          $zero, 0x3E($t0)
    MEM_B(0X3E, ctx->r8) = 0;
    // 0x151E5068: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151E506C: sb          $zero, 0x3F($t1)
    MEM_B(0X3F, ctx->r9) = 0;
    // 0x151E5070: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x151E5074: sb          $zero, 0x41($t2)
    MEM_B(0X41, ctx->r10) = 0;
    // 0x151E5078: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x151E507C: sb          $zero, 0x43($t3)
    MEM_B(0X43, ctx->r11) = 0;
    // 0x151E5080: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x151E5084: sb          $zero, 0x44($t4)
    MEM_B(0X44, ctx->r12) = 0;
    // 0x151E5088: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x151E508C: swc1        $f0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f0.u32l;
    // 0x151E5090: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151E5094: sb          $zero, 0x2A($t6)
    MEM_B(0X2A, ctx->r14) = 0;
    // 0x151E5098: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151E509C: swc1        $f0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f0.u32l;
    // 0x151E50A0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x151E50A4: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x151E50A8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x151E50AC: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x151E50B0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x151E50B4: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x151E50B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151E50BC: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x151E50C0: jr          $ra
    // 0x151E50C4: nop

    return;
    return;
    // 0x151E50C4: nop

;}
RECOMP_FUNC void func_1600288C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1600288C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x16002890: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x16002894: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x16002898: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x1600289C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x160028A0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x160028A4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x160028A8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x160028AC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x160028B0: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x160028B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x160028B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x160028BC: ldc1        $f20, 0x0($a2)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r6, 0X0);
    // 0x160028C0: addiu       $s2, $sp, 0xB8
    ctx->r18 = ADD32(ctx->r29, 0XB8);
    // 0x160028C4: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x160028C8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x160028CC: sdc1        $f2, 0xA0($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0XA0, ctx->r29);
    // 0x160028D0: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x160028D4: addiu       $a0, $sp, 0x8E
    ctx->r4 = ADD32(ctx->r29, 0X8E);
    // 0x160028D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x160028DC: bgez        $v0, L_160028EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x160028E0: nop
    
            goto L_160028EC;
    }
    // 0x160028E0: nop

    // 0x160028E4: b           L_16002910
    // 0x160028E8: sw          $t6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r14;
        goto L_16002910;
    // 0x160028E8: sw          $t6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r14;
L_160028EC:
    // 0x160028EC: bne         $v0, $zero, L_16002910
    if (ctx->r2 != 0) {
        // 0x160028F0: lbu         $t7, 0xDF($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0XDF);
            goto L_16002910;
    }
    // 0x160028F0: lbu         $t7, 0xDF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XDF);
    // 0x160028F4: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x160028F8: beq         $t7, $at, L_16002908
    if (ctx->r15 == ctx->r1) {
        // 0x160028FC: sw          $t7, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r15;
            goto L_16002908;
    }
    // 0x160028FC: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x16002900: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x16002904: bne         $t7, $at, L_16002910
    if (ctx->r15 != ctx->r1) {
        // 0x16002908: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_16002910;
    }
L_16002908:
    // 0x16002908: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1600290C: sw          $t8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r24;
L_16002910:
    // 0x16002910: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x16002914: jal         0x16002D2C
    // 0x16002918: sdc1        $f2, 0x48($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0X48, ctx->r29);
    func_16002D2C(rdram, ctx);
        goto after_0;
    // 0x16002918: sdc1        $f2, 0x48($sp)
    CHECK_FR(ctx, 2);
    SD(ctx->f2.u64, 0X48, ctx->r29);
    after_0:
    // 0x1600291C: blez        $v0, L_16002960
    if (SIGNED(ctx->r2) <= 0) {
        // 0x16002920: ldc1        $f2, 0x48($sp)
        CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r29, 0X48);
            goto L_16002960;
    }
    // 0x16002920: ldc1        $f2, 0x48($sp)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r29, 0X48);
    // 0x16002924: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x16002928: bne         $v0, $at, L_1600293C
    if (ctx->r2 != ctx->r1) {
        // 0x1600292C: lui         $a1, 0x1600
        ctx->r5 = S32(0X1600 << 16);
            goto L_1600293C;
    }
    // 0x1600292C: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16002930: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16002934: b           L_16002940
    // 0x16002938: addiu       $a1, $a1, 0x4870
    ctx->r5 = ADD32(ctx->r5, 0X4870);
        goto L_16002940;
    // 0x16002938: addiu       $a1, $a1, 0x4870
    ctx->r5 = ADD32(ctx->r5, 0X4870);
L_1600293C:
    // 0x1600293C: addiu       $a1, $a1, 0x4874
    ctx->r5 = ADD32(ctx->r5, 0X4874);
L_16002940:
    // 0x16002940: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x16002944: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x16002948: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x1600294C: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x16002950: jal         0x16001AD0
    // 0x16002954: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    func_16001AD0(rdram, ctx);
        goto after_1;
    // 0x16002954: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    after_1:
    // 0x16002958: b           L_16002D08
    // 0x1600295C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_16002D08;
    // 0x1600295C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_16002960:
    // 0x16002960: bne         $v0, $zero, L_16002970
    if (ctx->r2 != 0) {
        // 0x16002964: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_16002970;
    }
    // 0x16002964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x16002968: b           L_16002CEC
    // 0x1600296C: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
        goto L_16002CEC;
    // 0x1600296C: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
L_16002970:
    // 0x16002970: c.lt.d      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.d < ctx->f2.d;
    // 0x16002974: lbu         $t0, 0xDF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XDF);
    // 0x16002978: lh          $t1, 0x8E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8E);
    // 0x1600297C: addiu       $at, $zero, 0x7597
    ctx->r1 = ADD32(0, 0X7597);
    // 0x16002980: bc1f        L_1600298C
    if (!c1cs) {
        // 0x16002984: sw          $t0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r8;
            goto L_1600298C;
    }
    // 0x16002984: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x16002988: neg.d       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
L_1600298C:
    // 0x1600298C: multu       $t1, $at
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x16002990: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x16002994: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x16002998: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1600299C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x160029A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x160029A4: addiu       $s2, $sp, 0xB9
    ctx->r18 = ADD32(ctx->r29, 0XB9);
    // 0x160029A8: mflo        $t2
    ctx->r10 = lo;
    // 0x160029AC: nop

    // 0x160029B0: nop

    // 0x160029B4: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x160029B8: mflo        $t3
    ctx->r11 = lo;
    // 0x160029BC: addiu       $t4, $t3, -0x4
    ctx->r12 = ADD32(ctx->r11, -0X4);
    // 0x160029C0: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x160029C4: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x160029C8: bgez        $t6, L_16002A2C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x160029CC: sh          $t4, 0x8E($sp)
        MEM_H(0X8E, ctx->r29) = ctx->r12;
            goto L_16002A2C;
    }
    // 0x160029CC: sh          $t4, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r12;
    // 0x160029D0: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x160029D4: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x160029D8: subu        $a0, $t7, $t9
    ctx->r4 = SUB32(ctx->r15, ctx->r25);
    // 0x160029DC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x160029E0: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x160029E4: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
    // 0x160029E8: blez        $v0, L_16002A9C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x160029EC: sh          $t1, 0x8E($sp)
        MEM_H(0X8E, ctx->r29) = ctx->r9;
            goto L_16002A9C;
    }
    // 0x160029EC: sh          $t1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r9;
    // 0x160029F0: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x160029F4: addiu       $a0, $a0, 0x4828
    ctx->r4 = ADD32(ctx->r4, 0X4828);
L_160029F8:
    // 0x160029F8: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x160029FC: beq         $t2, $zero, L_16002A18
    if (ctx->r10 == 0) {
        // 0x16002A00: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_16002A18;
    }
    // 0x16002A00: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x16002A04: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x16002A08: addu        $t5, $a0, $t3
    ctx->r13 = ADD32(ctx->r4, ctx->r11);
    // 0x16002A0C: ldc1        $f6, 0x0($t5)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r13, 0X0);
    // 0x16002A10: mul.d       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f6.d);
    // 0x16002A14: nop

L_16002A18:
    // 0x16002A18: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x16002A1C: bgtz        $t6, L_160029F8
    if (SIGNED(ctx->r14) > 0) {
        // 0x16002A20: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_160029F8;
    }
    // 0x16002A20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x16002A24: b           L_16002AA0
    // 0x16002A28: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
        goto L_16002AA0;
    // 0x16002A28: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_16002A2C:
    // 0x16002A2C: lh          $t4, 0x8E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8E);
    // 0x16002A30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x16002A34: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x16002A38: blez        $t4, L_16002A9C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x16002A3C: andi        $t8, $t4, 0xFFFC
        ctx->r24 = ctx->r12 & 0XFFFC;
            goto L_16002A9C;
    }
    // 0x16002A3C: andi        $t8, $t4, 0xFFFC
    ctx->r24 = ctx->r12 & 0XFFFC;
    // 0x16002A40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x16002A44: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x16002A48: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x16002A4C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x16002A50: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x16002A54: sh          $t8, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r24;
    // 0x16002A58: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x16002A5C: blez        $t0, L_16002A98
    if (SIGNED(ctx->r8) <= 0) {
        // 0x16002A60: cvt.d.s     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
            goto L_16002A98;
    }
    // 0x16002A60: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x16002A64: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x16002A68: addiu       $a0, $a0, 0x4828
    ctx->r4 = ADD32(ctx->r4, 0X4828);
L_16002A6C:
    // 0x16002A6C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x16002A70: beq         $t1, $zero, L_16002A8C
    if (ctx->r9 == 0) {
        // 0x16002A74: sra         $t5, $v0, 1
        ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
            goto L_16002A8C;
    }
    // 0x16002A74: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x16002A78: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x16002A7C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x16002A80: ldc1        $f10, 0x0($t3)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r11, 0X0);
    // 0x16002A84: mul.d       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x16002A88: nop

L_16002A8C:
    // 0x16002A8C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x16002A90: bgtz        $t5, L_16002A6C
    if (SIGNED(ctx->r13) > 0) {
        // 0x16002A94: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_16002A6C;
    }
    // 0x16002A94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_16002A98:
    // 0x16002A98: div.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = DIV_D(ctx->f20.d, ctx->f0.d);
L_16002A9C:
    // 0x16002A9C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_16002AA0:
    // 0x16002AA0: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x16002AA4: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x16002AA8: bne         $t6, $at, L_16002ABC
    if (ctx->r14 != ctx->r1) {
        // 0x16002AAC: addiu       $t8, $zero, 0x30
        ctx->r24 = ADD32(0, 0X30);
            goto L_16002ABC;
    }
    // 0x16002AAC: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x16002AB0: lh          $a1, 0x8E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X8E);
    // 0x16002AB4: b           L_16002ABC
    // 0x16002AB8: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
        goto L_16002ABC;
    // 0x16002AB8: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
L_16002ABC:
    // 0x16002ABC: lw          $t7, 0x24($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X24);
    // 0x16002AC0: addu        $s5, $a1, $t7
    ctx->r21 = ADD32(ctx->r5, ctx->r15);
    // 0x16002AC4: slti        $at, $s5, 0x14
    ctx->r1 = SIGNED(ctx->r21) < 0X14 ? 1 : 0;
    // 0x16002AC8: bne         $at, $zero, L_16002AD4
    if (ctx->r1 != 0) {
        // 0x16002ACC: nop
    
            goto L_16002AD4;
    }
    // 0x16002ACC: nop

    // 0x16002AD0: addiu       $s5, $zero, 0x13
    ctx->r21 = ADD32(0, 0X13);
L_16002AD4:
    // 0x16002AD4: blez        $s5, L_16002BA4
    if (SIGNED(ctx->r21) <= 0) {
        // 0x16002AD8: sb          $t8, 0xB8($sp)
        MEM_B(0XB8, ctx->r29) = ctx->r24;
            goto L_16002BA4;
    }
    // 0x16002AD8: sb          $t8, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r24;
    // 0x16002ADC: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x16002AE0: addiu       $s4, $zero, 0x30
    ctx->r20 = ADD32(0, 0X30);
    // 0x16002AE4: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x16002AE8: bc1fl       L_16002BA8
    if (!c1cs) {
        // 0x16002AEC: lh          $t5, 0x8E($sp)
        ctx->r13 = MEM_H(ctx->r29, 0X8E);
            goto L_16002BA8;
    }
    goto skip_0;
    // 0x16002AEC: lh          $t5, 0x8E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X8E);
    skip_0:
    // 0x16002AF0: trunc.w.d   $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = TRUNC_W_D(ctx->f20.d);
L_16002AF4:
    // 0x16002AF4: addiu       $s5, $s5, -0x8
    ctx->r21 = ADD32(ctx->r21, -0X8);
    // 0x16002AF8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x16002AFC: mfc1        $s1, $f16
    ctx->r17 = (int32_t)ctx->f16.u32l;
    // 0x16002B00: blez        $s5, L_16002B24
    if (SIGNED(ctx->r21) <= 0) {
        // 0x16002B04: nop
    
            goto L_16002B24;
    }
    // 0x16002B04: nop

    // 0x16002B08: mtc1        $s1, $f18
    ctx->f18.u32l = ctx->r17;
    // 0x16002B0C: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16002B10: ldc1        $f8, 0x4950($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X4950);
    // 0x16002B14: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x16002B18: sub.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f20.d - ctx->f4.d;
    // 0x16002B1C: mul.d       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f20.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x16002B20: nop

L_16002B24:
    // 0x16002B24: blez        $s1, L_16002B70
    if (SIGNED(ctx->r17) <= 0) {
        // 0x16002B28: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_16002B70;
    }
    // 0x16002B28: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x16002B2C: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x16002B30: bltz        $s0, L_16002B70
    if (SIGNED(ctx->r16) < 0) {
        // 0x16002B34: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_16002B70;
    }
    // 0x16002B34: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_16002B38:
    // 0x16002B38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x16002B3C: jal         0x10023060
    // 0x16002B40: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x16002B40: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x16002B44: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x16002B48: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x16002B4C: addiu       $t1, $t0, 0x30
    ctx->r9 = ADD32(ctx->r8, 0X30);
    // 0x16002B50: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
    // 0x16002B54: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x16002B58: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x16002B5C: blezl       $t2, L_16002B74
    if (SIGNED(ctx->r10) <= 0) {
        // 0x16002B60: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_16002B74;
    }
    goto skip_1;
    // 0x16002B60: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_1:
    // 0x16002B64: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x16002B68: bgezl       $s0, L_16002B38
    if (SIGNED(ctx->r16) >= 0) {
        // 0x16002B6C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_16002B38;
    }
    goto skip_2;
    // 0x16002B6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_2:
L_16002B70:
    // 0x16002B70: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_16002B74:
    // 0x16002B74: bltz        $s0, L_16002B88
    if (SIGNED(ctx->r16) < 0) {
        // 0x16002B78: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_16002B88;
    }
L_16002B78:
    // 0x16002B78: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x16002B7C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x16002B80: bgez        $s0, L_16002B78
    if (SIGNED(ctx->r16) >= 0) {
        // 0x16002B84: sb          $s4, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r20;
            goto L_16002B78;
    }
    // 0x16002B84: sb          $s4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r20;
L_16002B88:
    // 0x16002B88: blez        $s5, L_16002BA4
    if (SIGNED(ctx->r21) <= 0) {
        // 0x16002B8C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_16002BA4;
    }
    // 0x16002B8C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x16002B90: ldc1        $f10, 0xA0($sp)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r29, 0XA0);
    // 0x16002B94: c.lt.d      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.d < ctx->f20.d;
    // 0x16002B98: nop

    // 0x16002B9C: bc1tl       L_16002AF4
    if (c1cs) {
        // 0x16002BA0: trunc.w.d   $f16, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = TRUNC_W_D(ctx->f20.d);
            goto L_16002AF4;
    }
    goto skip_3;
    // 0x16002BA0: trunc.w.d   $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = TRUNC_W_D(ctx->f20.d);
    skip_3:
L_16002BA4:
    // 0x16002BA4: lh          $t5, 0x8E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X8E);
L_16002BA8:
    // 0x16002BA8: lbu         $t4, 0xB9($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB9);
    // 0x16002BAC: addiu       $t3, $sp, 0xB8
    ctx->r11 = ADD32(ctx->r29, 0XB8);
    // 0x16002BB0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x16002BB4: subu        $s5, $s2, $t3
    ctx->r21 = SUB32(ctx->r18, ctx->r11);
    // 0x16002BB8: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x16002BBC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x16002BC0: sh          $t6, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r14;
    // 0x16002BC4: bne         $v0, $t4, L_16002BEC
    if (ctx->r2 != ctx->r12) {
        // 0x16002BC8: addiu       $s2, $sp, 0xB9
        ctx->r18 = ADD32(ctx->r29, 0XB9);
            goto L_16002BEC;
    }
    // 0x16002BC8: addiu       $s2, $sp, 0xB9
    ctx->r18 = ADD32(ctx->r29, 0XB9);
    // 0x16002BCC: lh          $t7, 0x8E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8E);
L_16002BD0:
    // 0x16002BD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16002BD4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x16002BD8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x16002BDC: sh          $t8, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r24;
    // 0x16002BE0: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x16002BE4: beql        $v0, $t9, L_16002BD0
    if (ctx->r2 == ctx->r25) {
        // 0x16002BE8: lh          $t7, 0x8E($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X8E);
            goto L_16002BD0;
    }
    goto skip_4;
    // 0x16002BE8: lh          $t7, 0x8E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8E);
    skip_4:
L_16002BEC:
    // 0x16002BEC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x16002BF0: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x16002BF4: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x16002BF8: bne         $t0, $at, L_16002C0C
    if (ctx->r8 != ctx->r1) {
        // 0x16002BFC: lw          $t1, 0x44($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X44);
            goto L_16002C0C;
    }
    // 0x16002BFC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x16002C00: lh          $a1, 0x8E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X8E);
    // 0x16002C04: b           L_16002C2C
    // 0x16002C08: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_16002C2C;
    // 0x16002C08: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_16002C0C:
    // 0x16002C0C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x16002C10: beq         $t1, $at, L_16002C20
    if (ctx->r9 == ctx->r1) {
        // 0x16002C14: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_16002C20;
    }
    // 0x16002C14: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x16002C18: bne         $t1, $at, L_16002C28
    if (ctx->r9 != ctx->r1) {
        // 0x16002C1C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_16002C28;
    }
    // 0x16002C1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16002C20:
    // 0x16002C20: b           L_16002C28
    // 0x16002C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_16002C28;
    // 0x16002C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_16002C28:
    // 0x16002C28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_16002C2C:
    // 0x16002C2C: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x16002C30: addu        $a3, $a1, $t3
    ctx->r7 = ADD32(ctx->r5, ctx->r11);
    // 0x16002C34: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x16002C38: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x16002C3C: slt         $at, $s5, $a3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x16002C40: beq         $at, $zero, L_16002C54
    if (ctx->r1 == 0) {
        // 0x16002C44: nop
    
            goto L_16002C54;
    }
    // 0x16002C44: nop

    // 0x16002C48: sll         $a3, $s5, 16
    ctx->r7 = S32(ctx->r21 << 16);
    // 0x16002C4C: sra         $t4, $a3, 16
    ctx->r12 = S32(SIGNED(ctx->r7) >> 16);
    // 0x16002C50: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
L_16002C54:
    // 0x16002C54: blez        $a3, L_16002CEC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x16002C58: slt         $at, $a3, $s5
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_16002CEC;
    }
    // 0x16002C58: slt         $at, $a3, $s5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x16002C5C: beq         $at, $zero, L_16002C7C
    if (ctx->r1 == 0) {
        // 0x16002C60: addu        $v0, $a3, $s2
        ctx->r2 = ADD32(ctx->r7, ctx->r18);
            goto L_16002C7C;
    }
    // 0x16002C60: addu        $v0, $a3, $s2
    ctx->r2 = ADD32(ctx->r7, ctx->r18);
    // 0x16002C64: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x16002C68: slti        $at, $t7, 0x35
    ctx->r1 = SIGNED(ctx->r15) < 0X35 ? 1 : 0;
    // 0x16002C6C: bnel        $at, $zero, L_16002C80
    if (ctx->r1 != 0) {
        // 0x16002C70: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_16002C80;
    }
    goto skip_5;
    // 0x16002C70: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    skip_5:
    // 0x16002C74: b           L_16002C84
    // 0x16002C78: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_16002C84;
    // 0x16002C78: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_16002C7C:
    // 0x16002C7C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_16002C80:
    // 0x16002C80: addu        $v0, $a3, $s2
    ctx->r2 = ADD32(ctx->r7, ctx->r18);
L_16002C84:
    // 0x16002C84: lbu         $t8, -0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X1);
    // 0x16002C88: addiu       $v1, $a3, -0x1
    ctx->r3 = ADD32(ctx->r7, -0X1);
    // 0x16002C8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x16002C90: bne         $a1, $t8, L_16002CB8
    if (ctx->r5 != ctx->r24) {
        // 0x16002C94: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_16002CB8;
    }
    // 0x16002C94: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x16002C98: addu        $v0, $v1, $s2
    ctx->r2 = ADD32(ctx->r3, ctx->r18);
L_16002C9C:
    // 0x16002C9C: lbu         $t1, -0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, -0X1);
    // 0x16002CA0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x16002CA4: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x16002CA8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x16002CAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x16002CB0: beq         $a0, $t1, L_16002C9C
    if (ctx->r4 == ctx->r9) {
        // 0x16002CB4: sra         $a3, $t9, 16
        ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
            goto L_16002C9C;
    }
    // 0x16002CB4: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
L_16002CB8:
    // 0x16002CB8: bne         $a0, $at, L_16002CCC
    if (ctx->r4 != ctx->r1) {
        // 0x16002CBC: addu        $v0, $s2, $v1
        ctx->r2 = ADD32(ctx->r18, ctx->r3);
            goto L_16002CCC;
    }
    // 0x16002CBC: addu        $v0, $s2, $v1
    ctx->r2 = ADD32(ctx->r18, ctx->r3);
    // 0x16002CC0: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x16002CC4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x16002CC8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_16002CCC:
    // 0x16002CCC: bgez        $v1, L_16002CEC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x16002CD0: lh          $t4, 0x8E($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X8E);
            goto L_16002CEC;
    }
    // 0x16002CD0: lh          $t4, 0x8E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8E);
    // 0x16002CD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x16002CD8: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x16002CDC: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x16002CE0: sh          $t7, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r15;
    // 0x16002CE4: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x16002CE8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_16002CEC:
    // 0x16002CEC: lh          $t8, 0x8E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X8E);
    // 0x16002CF0: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x16002CF4: lbu         $a1, 0xDF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XDF);
    // 0x16002CF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x16002CFC: jal         0x16002DE4
    // 0x16002D00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_16002DE4(rdram, ctx);
        goto after_3;
    // 0x16002D00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x16002D04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_16002D08:
    // 0x16002D08: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x16002D0C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x16002D10: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x16002D14: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x16002D18: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x16002D1C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x16002D20: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x16002D24: jr          $ra
    // 0x16002D28: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x16002D28: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_1501C730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501C734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1501C738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1501C73C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1501C740: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1501C744: jal         0x1501C53C
    // 0x1501C748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1501C53C(rdram, ctx);
        goto after_0;
    // 0x1501C748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1501C74C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1501C750: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1501C754: addiu       $v0, $v0, 0x2132
    ctx->r2 = ADD32(ctx->r2, 0X2132);
    // 0x1501C758: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x1501C75C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x1501C760: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1501C764: beq         $at, $zero, L_1501C848
    if (ctx->r1 == 0) {
        // 0x1501C768: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_1501C848;
    }
    // 0x1501C768: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x1501C76C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1501C770: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501C774: addu        $at, $at, $t6
    gpr jr_addend_1501C77C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1501C778: lw          $t6, 0x69A0($at)
    ctx->r14 = ADD32(ctx->r1, 0X69A0);
    // 0x1501C77C: jr          $t6
    // 0x1501C780: nop

    switch (jr_addend_1501C77C >> 2) {
        case 0: goto L_1501C848; break;
        case 1: goto L_1501C7BC; break;
        case 2: goto L_1501C7E0; break;
        case 3: goto L_1501C80C; break;
        case 4: goto L_1501C784; break;
        case 5: goto L_1501C830; break;
        case 6: goto L_1501C784; break;
        default: switch_error(__func__, 0x1501C77C, 0x800969A0);
    }
    // 0x1501C780: nop

L_1501C784:
    // 0x1501C784: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1501C788: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1501C78C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C790: sw          $t7, -0x1600($at)
    MEM_W(-0X1600, ctx->r1) = ctx->r15;
    // 0x1501C794: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C798: sw          $t8, -0x15FC($at)
    MEM_W(-0X15FC, ctx->r1) = ctx->r24;
    // 0x1501C79C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7A0: sw          $a1, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r5;
    // 0x1501C7A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501C7A8: sb          $v1, -0x2D40($at)
    MEM_B(-0X2D40, ctx->r1) = ctx->r3;
    // 0x1501C7AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7B0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1501C7B4: b           L_1501C848
    // 0x1501C7B8: sb          $t9, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r25;
        goto L_1501C848;
    // 0x1501C7B8: sb          $t9, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r25;
L_1501C7BC:
    // 0x1501C7BC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1501C7C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7C4: sb          $t0, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r8;
    // 0x1501C7C8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1501C7CC: lhu         $t1, -0x3C7E($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X3C7E);
    // 0x1501C7D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7D4: sw          $a1, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r5;
    // 0x1501C7D8: b           L_1501C848
    // 0x1501C7DC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
        goto L_1501C848;
    // 0x1501C7DC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
L_1501C7E0:
    // 0x1501C7E0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x1501C7E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7E8: sb          $t2, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r10;
    // 0x1501C7EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C7F0: sw          $a1, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r5;
    // 0x1501C7F4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1501C7F8: lhu         $t3, -0x3C7E($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X3C7E);
    // 0x1501C7FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501C800: sb          $v1, -0x2D40($at)
    MEM_B(-0X2D40, ctx->r1) = ctx->r3;
    // 0x1501C804: b           L_1501C848
    // 0x1501C808: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
        goto L_1501C848;
    // 0x1501C808: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
L_1501C80C:
    // 0x1501C80C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501C810: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x1501C814: bne         $t4, $zero, L_1501C848
    if (ctx->r12 != 0) {
        // 0x1501C818: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_1501C848;
    }
    // 0x1501C818: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1501C81C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C820: jal         0x15016680
    // 0x1501C824: sb          $t5, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r13;
    func_15016680(rdram, ctx);
        goto after_1;
    // 0x1501C824: sb          $t5, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r13;
    after_1:
    // 0x1501C828: b           L_1501C84C
    // 0x1501C82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1501C84C;
    // 0x1501C82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1501C830:
    // 0x1501C830: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1501C834: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C838: sw          $t6, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r14;
    // 0x1501C83C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C840: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1501C844: sb          $t7, -0x19EB($at)
    MEM_B(-0X19EB, ctx->r1) = ctx->r15;
L_1501C848:
    // 0x1501C848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1501C84C:
    // 0x1501C84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1501C850: jr          $ra
    // 0x1501C854: nop

    return;
    return;
    // 0x1501C854: nop

;}
RECOMP_FUNC void func_15052458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052458: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1505245C: jr          $ra
    // 0x15052460: nop

    return;
    return;
    // 0x15052460: nop

;}
RECOMP_FUNC void func_150D4C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D4C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150D4C30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150D4C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150D4C38: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150D4C3C: lb          $t6, -0x274($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X274);
    // 0x150D4C40: lw          $s0, 0x98($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X98);
    // 0x150D4C44: lui         $a0, 0x150D
    ctx->r4 = S32(0X150D << 16);
    // 0x150D4C48: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x150D4C4C: beq         $at, $zero, L_150D4C60
    if (ctx->r1 == 0) {
        // 0x150D4C50: addiu       $a0, $a0, 0x5124
        ctx->r4 = ADD32(ctx->r4, 0X5124);
            goto L_150D4C60;
    }
    // 0x150D4C50: addiu       $a0, $a0, 0x5124
    ctx->r4 = ADD32(ctx->r4, 0X5124);
    // 0x150D4C54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D4C58: jal         0x1000FD38
    // 0x150D4C5C: addiu       $a2, $zero, 0x5B3
    ctx->r6 = ADD32(0, 0X5B3);
    func_1000FD38(rdram, ctx);
        goto after_0;
    // 0x150D4C5C: addiu       $a2, $zero, 0x5B3
    ctx->r6 = ADD32(0, 0X5B3);
    after_0:
L_150D4C60:
    // 0x150D4C60: lui         $a0, 0x150D
    ctx->r4 = S32(0X150D << 16);
    // 0x150D4C64: addiu       $a0, $a0, 0x5124
    ctx->r4 = ADD32(ctx->r4, 0X5124);
    // 0x150D4C68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150D4C6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D4C70: jal         0x1000FD38
    // 0x150D4C74: addiu       $a2, $zero, 0x5B4
    ctx->r6 = ADD32(0, 0X5B4);
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x150D4C74: addiu       $a2, $zero, 0x5B4
    ctx->r6 = ADD32(0, 0X5B4);
    after_1:
    // 0x150D4C78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x150D4C7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D4C80: jal         0x1000FD38
    // 0x150D4C84: addiu       $a2, $zero, 0x5BC
    ctx->r6 = ADD32(0, 0X5BC);
    func_1000FD38(rdram, ctx);
        goto after_2;
    // 0x150D4C84: addiu       $a2, $zero, 0x5BC
    ctx->r6 = ADD32(0, 0X5BC);
    after_2:
    // 0x150D4C88: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x150D4C8C: beql        $a0, $zero, L_150D4CA0
    if (ctx->r4 == 0) {
        // 0x150D4C90: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_150D4CA0;
    }
    goto skip_0;
    // 0x150D4C90: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x150D4C94: jal         0x1516972C
    // 0x150D4C98: nop

    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x150D4C98: nop

    after_3:
    // 0x150D4C9C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_150D4CA0:
    // 0x150D4CA0: beql        $a0, $zero, L_150D4CB4
    if (ctx->r4 == 0) {
        // 0x150D4CA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150D4CB4;
    }
    goto skip_1;
    // 0x150D4CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x150D4CA8: jal         0x1516972C
    // 0x150D4CAC: nop

    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x150D4CAC: nop

    after_4:
    // 0x150D4CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150D4CB4:
    // 0x150D4CB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150D4CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150D4CBC: jr          $ra
    // 0x150D4CC0: nop

    return;
    return;
    // 0x150D4CC0: nop

;}
RECOMP_FUNC void func_1513B9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B9A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513B9AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513B9B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1513B9B4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1513B9B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1513B9BC: jal         0x100043B4
    // 0x1513B9C0: lw          $a0, 0x4C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4C);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1513B9C0: lw          $a0, 0x4C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4C);
    after_0:
    // 0x1513B9C4: jal         0x15169804
    // 0x1513B9C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x1513B9C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1513B9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513B9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513B9D4: jr          $ra
    // 0x1513B9D8: nop

    return;
    return;
    // 0x1513B9D8: nop

;}
RECOMP_FUNC void func_1001E530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001E530: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1001E534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001E538: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x1001E53C: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x1001E540: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x1001E544: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x1001E548: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x1001E54C: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x1001E550: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x1001E554: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x1001E558: lw          $t8, 0x48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X48);
    // 0x1001E55C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1001E560: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1001E564: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001E568: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1001E56C: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    // 0x1001E570: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x1001E574: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1001E578: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x1001E57C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x1001E580: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x1001E584: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x1001E588: jal         0x100210C0
    // 0x1001E58C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    func_100210C0(rdram, ctx);
        goto after_0;
    // 0x1001E58C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x1001E590: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x1001E594: addiu       $t3, $zero, 0x7C0
    ctx->r11 = ADD32(0, 0X7C0);
    // 0x1001E598: sh          $t3, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r11;
    // 0x1001E59C: addiu       $t4, $zero, 0x930
    ctx->r12 = ADD32(0, 0X930);
    // 0x1001E5A0: sh          $t4, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r12;
    // 0x1001E5A4: sh          $zero, 0x74($sp)
    MEM_H(0X74, ctx->r29) = 0;
    // 0x1001E5A8: addiu       $t5, $zero, 0x170
    ctx->r13 = ADD32(0, 0X170);
    // 0x1001E5AC: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x1001E5B0: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x1001E5B4: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1001E5B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1001E5BC: lbu         $t7, 0x28C4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X28C4);
    // 0x1001E5C0: bne         $t7, $zero, L_1001E638
    if (ctx->r15 != 0) {
        // 0x1001E5C4: nop
    
            goto L_1001E638;
    }
    // 0x1001E5C4: nop

    // 0x1001E5C8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E5CC: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x1001E5D0: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x1001E5D4: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x1001E5D8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1001E5DC: lui         $t0, 0xC00
    ctx->r8 = S32(0XC00 << 16);
    // 0x1001E5E0: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x1001E5E4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001E5E8: lh          $t2, 0x70($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X70);
    // 0x1001E5EC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x1001E5F0: lui         $at, 0x7C0
    ctx->r1 = S32(0X7C0 << 16);
    // 0x1001E5F4: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x1001E5F8: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x1001E5FC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001E600: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E604: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x1001E608: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x1001E60C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x1001E610: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x1001E614: lui         $t9, 0xC00
    ctx->r25 = S32(0XC00 << 16);
    // 0x1001E618: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x1001E61C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x1001E620: lh          $t0, 0x70($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X70);
    // 0x1001E624: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x1001E628: lui         $at, 0x930
    ctx->r1 = S32(0X930 << 16);
    // 0x1001E62C: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x1001E630: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x1001E634: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
L_1001E638:
    // 0x1001E638: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x1001E63C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001E644: lw          $a2, 0x28($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X28);
    // 0x1001E648: lh          $a3, 0x70($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X70);
    // 0x1001E64C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x1001E650: jal         0x1001F79C
    // 0x1001E654: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_1001F79C(rdram, ctx);
        goto after_1;
    // 0x1001E654: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_1:
    // 0x1001E658: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x1001E65C: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x1001E660: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1001E664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1001E668: lbu         $t7, 0x28C4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X28C4);
    // 0x1001E66C: beq         $t7, $zero, L_1001E698
    if (ctx->r15 == 0) {
        // 0x1001E670: nop
    
            goto L_1001E698;
    }
    // 0x1001E670: nop

    // 0x1001E674: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x1001E678: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E67C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1001E680: lw          $a2, 0x2C($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X2C);
    // 0x1001E684: addiu       $a3, $zero, 0x930
    ctx->r7 = ADD32(0, 0X930);
    // 0x1001E688: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1001E68C: jal         0x1001F79C
    // 0x1001E690: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1001F79C(rdram, ctx);
        goto after_2;
    // 0x1001E690: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x1001E694: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E698:
    // 0x1001E698: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x1001E69C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x1001E6A0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x1001E6A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1001E6A8: lbu         $t1, 0x28C4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X28C4);
L_1001E6AC:
    // 0x1001E6AC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E6B0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x1001E6B4: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x1001E6B8: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x1001E6BC: lh          $t4, 0x6E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6E);
    // 0x1001E6C0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1001E6C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1001E6C8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1001E6CC: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x1001E6D0: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x1001E6D4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x1001E6D8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x1001E6DC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x1001E6E0: addiu       $t9, $zero, 0x170
    ctx->r25 = ADD32(0, 0X170);
    // 0x1001E6E4: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x1001E6E8: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x1001E6EC: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x1001E6F0: lbu         $t1, 0x8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8);
    // 0x1001E6F4: blez        $t1, L_1001EB8C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x1001E6F8: nop
    
            goto L_1001EB8C;
    }
    // 0x1001E6F8: nop

L_1001E6FC:
    // 0x1001E6FC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x1001E700: lh          $t4, 0x76($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X76);
    // 0x1001E704: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x1001E708: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1001E70C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1001E710: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1001E714: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1001E718: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x1001E71C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x1001E720: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E724: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x1001E728: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x1001E72C: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1001E730: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x1001E734: lw          $t1, 0x28($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X28);
    // 0x1001E738: negu        $t3, $t4
    ctx->r11 = SUB32(0, ctx->r12);
    // 0x1001E73C: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x1001E740: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x1001E744: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x1001E748: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1001E74C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E750: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x1001E754: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1001E758: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x1001E75C: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x1001E760: lw          $t2, 0x28($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X28);
    // 0x1001E764: negu        $t1, $t3
    ctx->r9 = SUB32(0, ctx->r11);
    // 0x1001E768: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x1001E76C: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x1001E770: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x1001E774: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1001E778: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1001E77C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1001E780: lbu         $t9, 0x28C6($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X28C6);
    // 0x1001E784: beq         $t9, $zero, L_1001E7C0
    if (ctx->r25 == 0) {
        // 0x1001E788: nop
    
            goto L_1001E7C0;
    }
    // 0x1001E788: nop

    // 0x1001E78C: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1001E790: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1001E794: lbu         $t8, 0x28C4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X28C4);
    // 0x1001E798: beq         $t8, $zero, L_1001E7C0
    if (ctx->r24 == 0) {
        // 0x1001E79C: nop
    
            goto L_1001E7C0;
    }
    // 0x1001E79C: nop

    // 0x1001E7A0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E7A4: lh          $t4, 0x8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X8);
    // 0x1001E7A8: negu        $t3, $t4
    ctx->r11 = SUB32(0, ctx->r12);
    // 0x1001E7AC: sh          $t3, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r11;
    // 0x1001E7B0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E7B4: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x1001E7B8: negu        $t5, $t2
    ctx->r13 = SUB32(0, ctx->r10);
    // 0x1001E7BC: sh          $t5, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r13;
L_1001E7C0:
    // 0x1001E7C0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x1001E7C4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x1001E7C8: bne         $t6, $t9, L_1001E7F0
    if (ctx->r14 != ctx->r25) {
        // 0x1001E7CC: nop
    
            goto L_1001E7F0;
    }
    // 0x1001E7CC: nop

    // 0x1001E7D0: lh          $t7, 0x72($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X72);
    // 0x1001E7D4: sh          $t7, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r15;
    // 0x1001E7D8: lh          $t8, 0x74($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X74);
    // 0x1001E7DC: sh          $t8, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r24;
    // 0x1001E7E0: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x1001E7E4: sh          $t4, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r12;
    // 0x1001E7E8: b           L_1001E818
    // 0x1001E7EC: nop

        goto L_1001E818;
    // 0x1001E7EC: nop

L_1001E7F0:
    // 0x1001E7F0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E7F4: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x1001E7F8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1001E7FC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1001E800: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1001E804: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1001E808: lh          $a3, 0x74($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X74);
    // 0x1001E80C: jal         0x1001F5A4
    // 0x1001E810: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1001F5A4(rdram, ctx);
        goto after_3;
    // 0x1001E810: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x1001E814: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E818:
    // 0x1001E818: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E81C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1001E820: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E824: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x1001E828: lh          $a3, 0x72($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X72);
    // 0x1001E82C: jal         0x1001F28C
    // 0x1001E830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1001F28C(rdram, ctx);
        goto after_4;
    // 0x1001E830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_4:
    // 0x1001E834: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x1001E838: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E83C: lh          $t1, 0x8($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X8);
    // 0x1001E840: beq         $t1, $zero, L_1001E8D0
    if (ctx->r9 == 0) {
        // 0x1001E844: nop
    
            goto L_1001E8D0;
    }
    // 0x1001E844: nop

    // 0x1001E848: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E84C: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x1001E850: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x1001E854: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x1001E858: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E85C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1001E860: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x1001E864: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x1001E868: andi        $t4, $t8, 0xFFFF
    ctx->r12 = ctx->r24 & 0XFFFF;
    // 0x1001E86C: or          $t3, $t4, $at
    ctx->r11 = ctx->r12 | ctx->r1;
    // 0x1001E870: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x1001E874: lh          $t2, 0x74($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X74);
    // 0x1001E878: lh          $t6, 0x72($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X72);
    // 0x1001E87C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1001E880: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1001E884: sll         $t1, $t5, 16
    ctx->r9 = S32(ctx->r13 << 16);
    // 0x1001E888: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x1001E88C: or          $t7, $t1, $t9
    ctx->r15 = ctx->r9 | ctx->r25;
    // 0x1001E890: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x1001E894: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E898: lw          $t3, 0x24($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X24);
    // 0x1001E89C: bne         $t3, $zero, L_1001E8D0
    if (ctx->r11 != 0) {
        // 0x1001E8A0: nop
    
            goto L_1001E8D0;
    }
    // 0x1001E8A0: nop

    // 0x1001E8A4: lw          $t0, 0x20($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X20);
    // 0x1001E8A8: bne         $t0, $zero, L_1001E8D0
    if (ctx->r8 != 0) {
        // 0x1001E8AC: nop
    
            goto L_1001E8D0;
    }
    // 0x1001E8AC: nop

    // 0x1001E8B0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E8B4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1001E8B8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1001E8BC: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1001E8C0: lh          $a3, 0x72($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X72);
    // 0x1001E8C4: jal         0x1001F79C
    // 0x1001E8C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1001F79C(rdram, ctx);
        goto after_5;
    // 0x1001E8C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x1001E8CC: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E8D0:
    // 0x1001E8D0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E8D4: lh          $t6, 0xA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA);
    // 0x1001E8D8: beq         $t6, $zero, L_1001E94C
    if (ctx->r14 == 0) {
        // 0x1001E8DC: nop
    
            goto L_1001E94C;
    }
    // 0x1001E8DC: nop

    // 0x1001E8E0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E8E4: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x1001E8E8: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x1001E8EC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x1001E8F0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E8F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1001E8F8: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x1001E8FC: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x1001E900: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x1001E904: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x1001E908: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x1001E90C: lh          $t2, 0x72($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X72);
    // 0x1001E910: lh          $t1, 0x74($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X74);
    // 0x1001E914: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001E918: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1001E91C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x1001E920: andi        $t9, $t1, 0xFFFF
    ctx->r25 = ctx->r9 & 0XFFFF;
    // 0x1001E924: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x1001E928: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x1001E92C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E930: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1001E934: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1001E938: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1001E93C: lh          $a3, 0x74($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X74);
    // 0x1001E940: jal         0x1001F79C
    // 0x1001E944: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_1001F79C(rdram, ctx);
        goto after_6;
    // 0x1001E944: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
    // 0x1001E948: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E94C:
    // 0x1001E94C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E950: lw          $t0, 0x20($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X20);
    // 0x1001E954: beq         $t0, $zero, L_1001E978
    if (ctx->r8 == 0) {
        // 0x1001E958: nop
    
            goto L_1001E978;
    }
    // 0x1001E958: nop

    // 0x1001E95C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E960: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1001E964: lh          $a2, 0x72($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X72);
    // 0x1001E968: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E96C: jal         0x1001F978
    // 0x1001E970: lw          $a0, 0x20($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X20);
    func_1001F978(rdram, ctx);
        goto after_7;
    // 0x1001E970: lw          $a0, 0x20($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X20);
    after_7:
    // 0x1001E974: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E978:
    // 0x1001E978: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E97C: lw          $t1, 0x24($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X24);
    // 0x1001E980: bne         $t1, $zero, L_1001E9A8
    if (ctx->r9 != 0) {
        // 0x1001E984: nop
    
            goto L_1001E9A8;
    }
    // 0x1001E984: nop

    // 0x1001E988: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E98C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1001E990: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1001E994: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1001E998: lh          $a3, 0x72($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X72);
    // 0x1001E99C: jal         0x1001F79C
    // 0x1001E9A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1001F79C(rdram, ctx);
        goto after_8;
    // 0x1001E9A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_8:
    // 0x1001E9A4: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
L_1001E9A8:
    // 0x1001E9A8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E9AC: lh          $t7, 0xC($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XC);
    // 0x1001E9B0: beq         $t7, $zero, L_1001EB3C
    if (ctx->r15 == 0) {
        // 0x1001E9B4: nop
    
            goto L_1001EB3C;
    }
    // 0x1001E9B4: nop

    // 0x1001E9B8: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x1001E9BC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x1001E9C0: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x1001E9C4: lbu         $t3, 0x28C4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X28C4);
    // 0x1001E9C8: beq         $t3, $zero, L_1001EA24
    if (ctx->r11 == 0) {
        // 0x1001E9CC: nop
    
            goto L_1001EA24;
    }
    // 0x1001E9CC: nop

    // 0x1001E9D0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x1001E9D4: addiu       $t0, $t4, 0x8
    ctx->r8 = ADD32(ctx->r12, 0X8);
    // 0x1001E9D8: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x1001E9DC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1001E9E0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1001E9E4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1001E9E8: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x1001E9EC: lhu         $t5, 0xC($t2)
    ctx->r13 = MEM_HU(ctx->r10, 0XC);
    // 0x1001E9F0: andi        $t1, $t5, 0xFFFF
    ctx->r9 = ctx->r13 & 0XFFFF;
    // 0x1001E9F4: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x1001E9F8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x1001E9FC: lh          $t7, 0x72($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X72);
    // 0x1001EA00: lh          $t4, 0x6E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6E);
    // 0x1001EA04: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1001EA08: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x1001EA0C: sll         $t3, $t8, 16
    ctx->r11 = S32(ctx->r24 << 16);
    // 0x1001EA10: andi        $t0, $t4, 0xFFFF
    ctx->r8 = ctx->r12 & 0XFFFF;
    // 0x1001EA14: or          $t2, $t3, $t0
    ctx->r10 = ctx->r11 | ctx->r8;
    // 0x1001EA18: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
    // 0x1001EA1C: b           L_1001EB3C
    // 0x1001EA20: nop

        goto L_1001EB3C;
    // 0x1001EA20: nop

L_1001EA24:
    // 0x1001EA24: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1001EA28: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001EA2C: lwc1        $f8, -0x3860($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3860);
    // 0x1001EA30: lh          $t6, 0xC($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XC);
    // 0x1001EA34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1001EA38: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1001EA3C: nop

    // 0x1001EA40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001EA44: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1001EA48: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1001EA4C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1001EA50: nop

    // 0x1001EA54: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1001EA58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1001EA5C: nop

    // 0x1001EA60: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x1001EA64: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1001EA68: beq         $t7, $zero, L_1001EABC
    if (ctx->r15 == 0) {
        // 0x1001EA6C: nop
    
            goto L_1001EABC;
    }
    // 0x1001EA6C: nop

    // 0x1001EA70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1001EA74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001EA78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1001EA7C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1001EA80: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1001EA84: nop

    // 0x1001EA88: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1001EA8C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1001EA90: nop

    // 0x1001EA94: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x1001EA98: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1001EA9C: bne         $t7, $zero, L_1001EAB4
    if (ctx->r15 != 0) {
        // 0x1001EAA0: nop
    
            goto L_1001EAB4;
    }
    // 0x1001EAA0: nop

    // 0x1001EAA4: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1001EAA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1001EAAC: b           L_1001EACC
    // 0x1001EAB0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_1001EACC;
    // 0x1001EAB0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_1001EAB4:
    // 0x1001EAB4: b           L_1001EACC
    // 0x1001EAB8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_1001EACC;
    // 0x1001EAB8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_1001EABC:
    // 0x1001EABC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1001EAC0: nop

    // 0x1001EAC4: bltz        $t7, L_1001EAB4
    if (SIGNED(ctx->r15) < 0) {
        // 0x1001EAC8: nop
    
            goto L_1001EAB4;
    }
    // 0x1001EAC8: nop

L_1001EACC:
    // 0x1001EACC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1001EAD0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x1001EAD4: nop

    // 0x1001EAD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001EADC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x1001EAE0: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x1001EAE4: bne         $at, $zero, L_1001EAF4
    if (ctx->r1 != 0) {
        // 0x1001EAE8: nop
    
            goto L_1001EAF4;
    }
    // 0x1001EAE8: nop

    // 0x1001EAEC: addiu       $t4, $zero, 0x7FFF
    ctx->r12 = ADD32(0, 0X7FFF);
    // 0x1001EAF0: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_1001EAF4:
    // 0x1001EAF4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x1001EAF8: addiu       $t0, $t3, 0x8
    ctx->r8 = ADD32(ctx->r11, 0X8);
    // 0x1001EAFC: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x1001EB00: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x1001EB04: lhu         $t2, 0x36($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X36);
    // 0x1001EB08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001EB0C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x1001EB10: andi        $t5, $t2, 0xFFFF
    ctx->r13 = ctx->r10 & 0XFFFF;
    // 0x1001EB14: or          $t1, $t5, $at
    ctx->r9 = ctx->r13 | ctx->r1;
    // 0x1001EB18: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x1001EB1C: lh          $t9, 0x72($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X72);
    // 0x1001EB20: lh          $t4, 0x6E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6E);
    // 0x1001EB24: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001EB28: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x1001EB2C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x1001EB30: andi        $t3, $t4, 0xFFFF
    ctx->r11 = ctx->r12 & 0XFFFF;
    // 0x1001EB34: or          $t0, $t8, $t3
    ctx->r8 = ctx->r24 | ctx->r11;
    // 0x1001EB38: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
L_1001EB3C:
    // 0x1001EB3C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1001EB40: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x1001EB44: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001EB48: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x1001EB4C: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x1001EB50: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x1001EB54: lw          $t7, 0x28($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X28);
    // 0x1001EB58: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x1001EB5C: addu        $t0, $t7, $t3
    ctx->r8 = ADD32(ctx->r15, ctx->r11);
    // 0x1001EB60: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x1001EB64: lh          $t2, 0x76($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X76);
    // 0x1001EB68: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x1001EB6C: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x1001EB70: sh          $t1, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r9;
    // 0x1001EB74: lbu         $t4, 0x8($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X8);
    // 0x1001EB78: sll         $t5, $t1, 16
    ctx->r13 = S32(ctx->r9 << 16);
    // 0x1001EB7C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1001EB80: slt         $at, $t6, $t4
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1001EB84: bne         $at, $zero, L_1001E6FC
    if (ctx->r1 != 0) {
        // 0x1001EB88: nop
    
            goto L_1001E6FC;
    }
    // 0x1001EB88: nop

L_1001EB8C:
    // 0x1001EB8C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x1001EB90: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1001EB94: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x1001EB98: lbu         $t7, 0x28C4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X28C4);
    // 0x1001EB9C: beq         $t7, $zero, L_1001EC74
    if (ctx->r15 == 0) {
        // 0x1001EBA0: nop
    
            goto L_1001EC74;
    }
    // 0x1001EBA0: nop

    // 0x1001EBA4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x1001EBA8: bne         $t3, $zero, L_1001EC74
    if (ctx->r11 != 0) {
        // 0x1001EBAC: nop
    
            goto L_1001EC74;
    }
    // 0x1001EBAC: nop

    // 0x1001EBB0: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x1001EBB4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x1001EBB8: addiu       $t2, $zero, 0xB8
    ctx->r10 = ADD32(0, 0XB8);
    // 0x1001EBBC: lw          $a2, 0x2C($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X2C);
    // 0x1001EBC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1001EBC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1001EBC8: lh          $a3, 0x70($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X70);
    // 0x1001EBCC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x1001EBD0: jal         0x1001F5A4
    // 0x1001EBD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_1001F5A4(rdram, ctx);
        goto after_9;
    // 0x1001EBD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_9:
    // 0x1001EBD8: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x1001EBDC: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x1001EBE0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1001EBE4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x1001EBE8: lbu         $t9, 0x28C6($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X28C6);
    // 0x1001EBEC: beq         $t9, $zero, L_1001EC34
    if (ctx->r25 == 0) {
        // 0x1001EBF0: nop
    
            goto L_1001EC34;
    }
    // 0x1001EBF0: nop

    // 0x1001EBF4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x1001EBF8: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x1001EBFC: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x1001EC00: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1001EC04: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EC08: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x1001EC0C: ori         $t8, $t8, 0x5A82
    ctx->r24 = ctx->r24 | 0X5A82;
    // 0x1001EC10: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x1001EC14: lh          $t3, 0x6E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6E);
    // 0x1001EC18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1001EC1C: andi        $t0, $t3, 0xFFFF
    ctx->r8 = ctx->r11 & 0XFFFF;
    // 0x1001EC20: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x1001EC24: ori         $t1, $t2, 0x650
    ctx->r9 = ctx->r10 | 0X650;
    // 0x1001EC28: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
    // 0x1001EC2C: b           L_1001EC6C
    // 0x1001EC30: nop

        goto L_1001EC6C;
    // 0x1001EC30: nop

L_1001EC34:
    // 0x1001EC34: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x1001EC38: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x1001EC3C: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x1001EC40: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1001EC44: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001EC48: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x1001EC4C: ori         $t4, $t4, 0x5A82
    ctx->r12 = ctx->r12 | 0X5A82;
    // 0x1001EC50: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x1001EC54: lh          $t7, 0x6E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6E);
    // 0x1001EC58: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001EC5C: andi        $t3, $t7, 0xFFFF
    ctx->r11 = ctx->r15 & 0XFFFF;
    // 0x1001EC60: sll         $t0, $t3, 16
    ctx->r8 = S32(ctx->r11 << 16);
    // 0x1001EC64: ori         $t2, $t0, 0x4E0
    ctx->r10 = ctx->r8 | 0X4E0;
    // 0x1001EC68: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
L_1001EC6C:
    // 0x1001EC6C: b           L_1001EC74
    // 0x1001EC70: nop

        goto L_1001EC74;
    // 0x1001EC70: nop

L_1001EC74:
    // 0x1001EC74: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x1001EC78: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x1001EC7C: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x1001EC80: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1001EC84: lh          $t6, 0x6E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6E);
    // 0x1001EC88: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1001EC8C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1001EC90: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001EC94: and         $t4, $t6, $at
    ctx->r12 = ctx->r14 & ctx->r1;
    // 0x1001EC98: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x1001EC9C: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x1001ECA0: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x1001ECA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001ECA8: lui         $t3, 0x7C0
    ctx->r11 = S32(0X7C0 << 16);
    // 0x1001ECAC: ori         $t3, $t3, 0x170
    ctx->r11 = ctx->r11 | 0X170;
    // 0x1001ECB0: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1001ECB4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1001ECB8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x1001ECBC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x1001ECC0: addu        $t9, $t2, $t5
    ctx->r25 = ADD32(ctx->r10, ctx->r13);
    // 0x1001ECC4: lw          $t6, 0x28($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X28);
    // 0x1001ECC8: addiu       $t4, $t6, 0x170
    ctx->r12 = ADD32(ctx->r14, 0X170);
    // 0x1001ECCC: sw          $t4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r12;
    // 0x1001ECD0: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x1001ECD4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1001ECD8: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x1001ECDC: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x1001ECE0: addu        $t0, $t8, $t3
    ctx->r8 = ADD32(ctx->r24, ctx->r11);
    // 0x1001ECE4: lw          $t2, 0x20($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X20);
    // 0x1001ECE8: lw          $t1, 0x28($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X28);
    // 0x1001ECEC: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x1001ECF0: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x1001ECF4: sltu        $at, $t4, $t1
    ctx->r1 = ctx->r12 < ctx->r9 ? 1 : 0;
    // 0x1001ECF8: beq         $at, $zero, L_1001ED24
    if (ctx->r1 == 0) {
        // 0x1001ECFC: nop
    
            goto L_1001ED24;
    }
    // 0x1001ECFC: nop

    // 0x1001ED00: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x1001ED04: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1001ED08: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x1001ED0C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x1001ED10: addu        $t0, $t9, $t3
    ctx->r8 = ADD32(ctx->r25, ctx->r11);
    // 0x1001ED14: lw          $t8, 0x28($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X28);
    // 0x1001ED18: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x1001ED1C: subu        $t6, $t8, $t2
    ctx->r14 = SUB32(ctx->r24, ctx->r10);
    // 0x1001ED20: sw          $t6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r14;
L_1001ED24:
    // 0x1001ED24: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1001ED28: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x1001ED2C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1001ED30: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x1001ED34: lbu         $t3, 0x28C4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X28C4);
    // 0x1001ED38: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x1001ED3C: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x1001ED40: sltu        $at, $t3, $t4
    ctx->r1 = ctx->r11 < ctx->r12 ? 1 : 0;
    // 0x1001ED44: beq         $at, $zero, L_1001E6AC
    if (ctx->r1 == 0) {
        // 0x1001ED48: nop
    
            goto L_1001E6AC;
    }
    // 0x1001ED48: nop

    // 0x1001ED4C: b           L_1001ED5C
    // 0x1001ED50: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_1001ED5C;
    // 0x1001ED50: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x1001ED54: b           L_1001ED5C
    // 0x1001ED58: nop

        goto L_1001ED5C;
    // 0x1001ED58: nop

L_1001ED5C:
    // 0x1001ED5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001ED60: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x1001ED64: jr          $ra
    // 0x1001ED68: nop

    return;
    return;
    // 0x1001ED68: nop

;}
RECOMP_FUNC void func_1503F800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503F804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1503F808: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1503F80C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1503F810: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x1503F814: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1503F818: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1503F81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503F820: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1503F824: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1503F828: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    // 0x1503F82C: sh          $a2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r6;
    // 0x1503F830: jal         0x1510F800
    // 0x1503F834: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x1503F834: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x1503F838: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1503F83C: lw          $v1, -0x41B8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B8);
    // 0x1503F840: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x1503F844: lh          $a2, 0x22($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X22);
    // 0x1503F848: beq         $v1, $zero, L_1503F8F0
    if (ctx->r3 == 0) {
        // 0x1503F84C: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_1503F8F0;
    }
    // 0x1503F84C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1503F850: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
L_1503F854:
    // 0x1503F854: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x1503F858: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
    // 0x1503F85C: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1503F860: bne         $at, $zero, L_1503F8D0
    if (ctx->r1 != 0) {
        // 0x1503F864: subu        $t1, $a0, $v0
        ctx->r9 = SUB32(ctx->r4, ctx->r2);
            goto L_1503F8D0;
    }
    // 0x1503F864: subu        $t1, $a0, $v0
    ctx->r9 = SUB32(ctx->r4, ctx->r2);
    // 0x1503F868: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1503F86C: bnel        $at, $zero, L_1503F8D4
    if (ctx->r1 != 0) {
        // 0x1503F870: lh          $v0, 0x4($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X4);
            goto L_1503F8D4;
    }
    goto skip_0;
    // 0x1503F870: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    skip_0:
    // 0x1503F874: lh          $a0, 0xA($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XA);
    // 0x1503F878: addu        $t2, $a0, $v0
    ctx->r10 = ADD32(ctx->r4, ctx->r2);
    // 0x1503F87C: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1503F880: bne         $at, $zero, L_1503F8D0
    if (ctx->r1 != 0) {
        // 0x1503F884: subu        $t3, $a0, $v0
        ctx->r11 = SUB32(ctx->r4, ctx->r2);
            goto L_1503F8D0;
    }
    // 0x1503F884: subu        $t3, $a0, $v0
    ctx->r11 = SUB32(ctx->r4, ctx->r2);
    // 0x1503F888: slt         $at, $a2, $t3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1503F88C: bnel        $at, $zero, L_1503F8D4
    if (ctx->r1 != 0) {
        // 0x1503F890: lh          $v0, 0x4($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X4);
            goto L_1503F8D4;
    }
    goto skip_1;
    // 0x1503F890: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    skip_1:
    // 0x1503F894: lh          $t4, 0x2($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X2);
    // 0x1503F898: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1503F89C: sllv        $t6, $t5, $a3
    ctx->r14 = S32(ctx->r13 << (ctx->r7 & 31));
    // 0x1503F8A0: and         $t7, $t4, $t6
    ctx->r15 = ctx->r12 & ctx->r14;
    // 0x1503F8A4: bnel        $t7, $zero, L_1503F8B8
    if (ctx->r15 != 0) {
        // 0x1503F8A8: lh          $a0, 0xC($v1)
        ctx->r4 = MEM_H(ctx->r3, 0XC);
            goto L_1503F8B8;
    }
    goto skip_2;
    // 0x1503F8A8: lh          $a0, 0xC($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XC);
    skip_2:
    // 0x1503F8AC: b           L_1503F8F4
    // 0x1503F8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503F8F4;
    // 0x1503F8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503F8B4: lh          $a0, 0xC($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XC);
L_1503F8B8:
    // 0x1503F8B8: beq         $a0, $zero, L_1503F8C8
    if (ctx->r4 == 0) {
        // 0x1503F8BC: nop
    
            goto L_1503F8C8;
    }
    // 0x1503F8BC: nop

    // 0x1503F8C0: b           L_1503F8D4
    // 0x1503F8C4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_1503F8D4;
    // 0x1503F8C4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1503F8C8:
    // 0x1503F8C8: b           L_1503F8F4
    // 0x1503F8CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1503F8F4;
    // 0x1503F8CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503F8D0:
    // 0x1503F8D0: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
L_1503F8D4:
    // 0x1503F8D4: beql        $v0, $zero, L_1503F8E8
    if (ctx->r2 == 0) {
        // 0x1503F8D8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1503F8E8;
    }
    goto skip_3;
    // 0x1503F8D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_3:
    // 0x1503F8DC: b           L_1503F8E8
    // 0x1503F8E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_1503F8E8;
    // 0x1503F8E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x1503F8E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1503F8E8:
    // 0x1503F8E8: bnel        $v1, $zero, L_1503F854
    if (ctx->r3 != 0) {
        // 0x1503F8EC: lh          $a0, 0x8($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X8);
            goto L_1503F854;
    }
    goto skip_4;
    // 0x1503F8EC: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    skip_4:
L_1503F8F0:
    // 0x1503F8F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503F8F4:
    // 0x1503F8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503F8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503F8FC: jr          $ra
    // 0x1503F900: nop

    return;
    return;
    // 0x1503F900: nop

;}
RECOMP_FUNC void func_150150A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150150A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150150A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150150AC: jal         0x1515F1B0
    // 0x150150B0: nop

    func_1515F1B0(rdram, ctx);
        goto after_0;
    // 0x150150B0: nop

    after_0:
    // 0x150150B4: bne         $v0, $zero, L_150150C4
    if (ctx->r2 != 0) {
        // 0x150150B8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_150150C4;
    }
    // 0x150150B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150150BC: b           L_150150F4
    // 0x150150C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150150F4;
    // 0x150150C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150150C4:
    // 0x150150C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150150C8: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    // 0x150150CC: jal         0x1515F25C
    // 0x150150D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1515F25C(rdram, ctx);
        goto after_1;
    // 0x150150D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x150150D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x150150D8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150150DC: addiu       $v1, $v1, -0x3270
    ctx->r3 = ADD32(ctx->r3, -0X3270);
    // 0x150150E0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150150E4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x150150E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150150EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150150F0: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_150150F4:
    // 0x150150F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150150F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150150FC: jr          $ra
    // 0x15015100: nop

    return;
    return;
    // 0x15015100: nop

;}
RECOMP_FUNC void func_1517A958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517A958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1517A95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517A960: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1517A964: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1517A968: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1517A96C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517A970: sh          $t6, -0x2BB0($at)
    MEM_H(-0X2BB0, ctx->r1) = ctx->r14;
    // 0x1517A974: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1517A978: beq         $a1, $at, L_1517A988
    if (ctx->r5 == ctx->r1) {
        // 0x1517A97C: addiu       $at, $zero, 0x59
        ctx->r1 = ADD32(0, 0X59);
            goto L_1517A988;
    }
    // 0x1517A97C: addiu       $at, $zero, 0x59
    ctx->r1 = ADD32(0, 0X59);
    // 0x1517A980: bnel        $a1, $at, L_1517A998
    if (ctx->r5 != ctx->r1) {
        // 0x1517A984: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1517A998;
    }
    goto skip_0;
    // 0x1517A984: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
L_1517A988:
    // 0x1517A988: jal         0x1517A394
    // 0x1517A98C: nop

    func_1517A394(rdram, ctx);
        goto after_0;
    // 0x1517A98C: nop

    after_0:
    // 0x1517A990: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1517A994: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1517A998:
    // 0x1517A998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1517A99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1517A9A0: jr          $ra
    // 0x1517A9A4: nop

    return;
    return;
    // 0x1517A9A4: nop

;}
RECOMP_FUNC void func_1500A1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A1E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1500A1E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500A1E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1500A1EC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A1F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A1F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A1F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A1FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1500A200: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x1500A204: jal         0x151615F8
    // 0x1500A208: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x1500A208: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x1500A20C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500A210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1500A214: jr          $ra
    // 0x1500A218: nop

    return;
    return;
    // 0x1500A218: nop

;}
RECOMP_FUNC void func_1511F31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F31C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1511F320: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1511F324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511F328: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1511F32C: lhu         $t6, 0x54($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X54);
    // 0x1511F330: ori         $at, $zero, 0x8005
    ctx->r1 = 0 | 0X8005;
    // 0x1511F334: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x1511F338: bne         $t6, $at, L_1511F3D4
    if (ctx->r14 != ctx->r1) {
        // 0x1511F33C: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1511F3D4;
    }
    // 0x1511F33C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1511F340: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x1511F344: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x1511F348: bnel        $t7, $at, L_1511F3D8
    if (ctx->r15 != ctx->r1) {
        // 0x1511F34C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1511F3D8;
    }
    goto skip_0;
    // 0x1511F34C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1511F350: jal         0x151149AC
    // 0x1511F354: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x1511F354: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_0:
    // 0x1511F358: beq         $v0, $zero, L_1511F3D4
    if (ctx->r2 == 0) {
        // 0x1511F35C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1511F3D4;
    }
    // 0x1511F35C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1511F360: jal         0x1511490C
    // 0x1511F364: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_1511490C(rdram, ctx);
        goto after_1;
    // 0x1511F364: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x1511F368: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x1511F36C: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x1511F370: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x1511F374: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x1511F378: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1511F37C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1511F380: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1511F384: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x1511F388: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1511F38C: lui         $a1, 0xC040
    ctx->r5 = S32(0XC040 << 16);
    // 0x1511F390: jal         0x150A7960
    // 0x1511F394: lui         $a2, 0x435F
    ctx->r6 = S32(0X435F << 16);
    func_150A7960(rdram, ctx);
        goto after_2;
    // 0x1511F394: lui         $a2, 0x435F
    ctx->r6 = S32(0X435F << 16);
    after_2:
    // 0x1511F398: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1511F39C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511F3A0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1511F3A4: nop

    // 0x1511F3A8: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
    // 0x1511F3AC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1511F3B0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1511F3B4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1511F3B8: nop

    // 0x1511F3BC: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
    // 0x1511F3C0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511F3C4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511F3C8: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1511F3CC: nop

    // 0x1511F3D0: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_1511F3D4:
    // 0x1511F3D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1511F3D8:
    // 0x1511F3D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1511F3DC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x1511F3E0: jr          $ra
    // 0x1511F3E4: nop

    return;
    return;
    // 0x1511F3E4: nop

;}
RECOMP_FUNC void func_151D87E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D87E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151D87E4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151D87E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151D87EC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x151D87F0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x151D87F4: addiu       $a2, $a2, 0x4060
    ctx->r6 = ADD32(ctx->r6, 0X4060);
    // 0x151D87F8: addiu       $a3, $a3, -0x16BC
    ctx->r7 = ADD32(ctx->r7, -0X16BC);
    // 0x151D87FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D8800: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D8804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_151D8808:
    // 0x151D8808: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D880C: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x151D8810: and         $t9, $v1, $t8
    ctx->r25 = ctx->r3 & ctx->r24;
    // 0x151D8814: beq         $t9, $zero, L_151D8848
    if (ctx->r25 == 0) {
        // 0x151D8818: addu        $t0, $a2, $v0
        ctx->r8 = ADD32(ctx->r6, ctx->r2);
            goto L_151D8848;
    }
    // 0x151D8818: addu        $t0, $a2, $v0
    ctx->r8 = ADD32(ctx->r6, ctx->r2);
    // 0x151D881C: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x151D8820: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x151D8824: bne         $at, $zero, L_151D8834
    if (ctx->r1 != 0) {
        // 0x151D8828: addu        $t1, $a3, $a0
        ctx->r9 = ADD32(ctx->r7, ctx->r4);
            goto L_151D8834;
    }
    // 0x151D8828: addu        $t1, $a3, $a0
    ctx->r9 = ADD32(ctx->r7, ctx->r4);
    // 0x151D882C: jr          $ra
    // 0x151D8830: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151D8830: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D8834:
    // 0x151D8834: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x151D8838: beql        $t2, $zero, L_151D884C
    if (ctx->r10 == 0) {
        // 0x151D883C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151D884C;
    }
    goto skip_0;
    // 0x151D883C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x151D8840: jr          $ra
    // 0x151D8844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x151D8844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D8848:
    // 0x151D8848: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151D884C:
    // 0x151D884C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151D8850: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x151D8854: bne         $at, $zero, L_151D8808
    if (ctx->r1 != 0) {
        // 0x151D8858: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_151D8808;
    }
    // 0x151D8858: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x151D885C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D8860: jr          $ra
    // 0x151D8864: nop

    return;
    return;
    // 0x151D8864: nop

;}
RECOMP_FUNC void func_150EB1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EB1C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150EB1C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150EB1C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150EB1CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150EB1D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB1D4: addiu       $a1, $zero, 0x2006
    ctx->r5 = ADD32(0, 0X2006);
    // 0x150EB1D8: jal         0x1509BE40
    // 0x150EB1DC: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150EB1DC: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_0:
    // 0x150EB1E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB1E4: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150EB1E8: jal         0x1509BE40
    // 0x150EB1EC: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x150EB1EC: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    after_1:
    // 0x150EB1F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x150EB1F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB1F8: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150EB1FC: jal         0x1509BE40
    // 0x150EB200: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x150EB200: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    after_2:
    // 0x150EB204: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x150EB208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB20C: beq         $t6, $zero, L_150EB338
    if (ctx->r14 == 0) {
        // 0x150EB210: nop
    
            goto L_150EB338;
    }
    // 0x150EB210: nop

    // 0x150EB214: beq         $v0, $zero, L_150EB338
    if (ctx->r2 == 0) {
        // 0x150EB218: addiu       $a1, $zero, 0x405D
        ctx->r5 = ADD32(0, 0X405D);
            goto L_150EB338;
    }
    // 0x150EB218: addiu       $a1, $zero, 0x405D
    ctx->r5 = ADD32(0, 0X405D);
    // 0x150EB21C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB220: jal         0x1509BFB0
    // 0x150EB224: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_3;
    // 0x150EB224: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x150EB228: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB22C: addiu       $a1, $zero, 0x405E
    ctx->r5 = ADD32(0, 0X405E);
    // 0x150EB230: jal         0x1509BFB0
    // 0x150EB234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_4;
    // 0x150EB234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x150EB238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB23C: addiu       $a1, $zero, 0x405F
    ctx->r5 = ADD32(0, 0X405F);
    // 0x150EB240: jal         0x1509BFB0
    // 0x150EB244: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_5;
    // 0x150EB244: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x150EB248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB24C: addiu       $a1, $zero, 0x4060
    ctx->r5 = ADD32(0, 0X4060);
    // 0x150EB250: jal         0x1509BFB0
    // 0x150EB254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_6;
    // 0x150EB254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x150EB258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB25C: addiu       $a1, $zero, 0x4061
    ctx->r5 = ADD32(0, 0X4061);
    // 0x150EB260: jal         0x1509BFB0
    // 0x150EB264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_7;
    // 0x150EB264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x150EB268: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x150EB26C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x150EB270: beql        $t7, $at, L_150EB418
    if (ctx->r15 == ctx->r1) {
        // 0x150EB274: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150EB418;
    }
    goto skip_0;
    // 0x150EB274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150EB278: lw          $t8, 0x6C8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C8);
    // 0x150EB27C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB280: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150EB284: bne         $t8, $zero, L_150EB414
    if (ctx->r24 != 0) {
        // 0x150EB288: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150EB414;
    }
    // 0x150EB288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150EB28C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150EB290: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150EB294: jal         0x15123934
    // 0x150EB298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_8;
    // 0x150EB298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x150EB29C: beq         $v0, $zero, L_150EB2E8
    if (ctx->r2 == 0) {
        // 0x150EB2A0: lui         $at, 0x110
        ctx->r1 = S32(0X110 << 16);
            goto L_150EB2E8;
    }
    // 0x150EB2A0: lui         $at, 0x110
    ctx->r1 = S32(0X110 << 16);
    // 0x150EB2A4: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150EB2A8: ori         $at, $at, 0x4
    ctx->r1 = ctx->r1 | 0X4;
    // 0x150EB2AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150EB2B0: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150EB2B4: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x150EB2B8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150EB2BC: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150EB2C0: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x150EB2C4: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
    // 0x150EB2C8: swc1        $f4, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f4.u32l;
    // 0x150EB2CC: lbu         $a1, 0x65($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X65);
    // 0x150EB2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB2D4: jal         0x151254F4
    // 0x150EB2D8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_151254F4(rdram, ctx);
        goto after_9;
    // 0x150EB2D8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_9:
    // 0x150EB2DC: lw          $t5, 0x5F0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5F0);
    // 0x150EB2E0: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x150EB2E4: sw          $t6, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r14;
L_150EB2E8:
    // 0x150EB2E8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x150EB2EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150EB2F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EB2F4: lwc1        $f6, 0x1480($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1480);
    // 0x150EB2F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150EB2FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EB300: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x150EB304: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150EB308: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150EB30C: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150EB310: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150EB314: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x150EB318: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
    // 0x150EB31C: sw          $t7, -0x7570($at)
    MEM_W(-0X7570, ctx->r1) = ctx->r15;
    // 0x150EB320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB324: addiu       $a1, $zero, 0x405C
    ctx->r5 = ADD32(0, 0X405C);
    // 0x150EB328: jal         0x1509BFB0
    // 0x150EB32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_10;
    // 0x150EB32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x150EB330: b           L_150EB418
    // 0x150EB334: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_150EB418;
    // 0x150EB334: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150EB338:
    // 0x150EB338: jal         0x151239CC
    // 0x150EB33C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_11;
    // 0x150EB33C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x150EB340: beq         $v0, $zero, L_150EB378
    if (ctx->r2 == 0) {
        // 0x150EB344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150EB378;
    }
    // 0x150EB344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB348: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150EB34C: lbu         $a1, 0x23D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X23D);
    // 0x150EB350: jal         0x151254F4
    // 0x150EB354: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
    func_151254F4(rdram, ctx);
        goto after_12;
    // 0x150EB354: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
    after_12:
    // 0x150EB358: lw          $t8, 0x5F0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5F0);
    // 0x150EB35C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150EB360: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x150EB364: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150EB368: sw          $t9, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r25;
    // 0x150EB36C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150EB370: swc1        $f16, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f16.u32l;
    // 0x150EB374: sw          $zero, -0x7570($at)
    MEM_W(-0X7570, ctx->r1) = 0;
L_150EB378:
    // 0x150EB378: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB37C: addiu       $a1, $zero, 0x405C
    ctx->r5 = ADD32(0, 0X405C);
    // 0x150EB380: jal         0x1509BFB0
    // 0x150EB384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_13;
    // 0x150EB384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x150EB388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB38C: addiu       $a1, $zero, 0x405D
    ctx->r5 = ADD32(0, 0X405D);
    // 0x150EB390: jal         0x1509BFB0
    // 0x150EB394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_14;
    // 0x150EB394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x150EB398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB39C: addiu       $a1, $zero, 0x405E
    ctx->r5 = ADD32(0, 0X405E);
    // 0x150EB3A0: jal         0x1509BFB0
    // 0x150EB3A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_15;
    // 0x150EB3A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x150EB3A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB3AC: addiu       $a1, $zero, 0x405F
    ctx->r5 = ADD32(0, 0X405F);
    // 0x150EB3B0: jal         0x1509BFB0
    // 0x150EB3B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_16;
    // 0x150EB3B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x150EB3B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB3BC: addiu       $a1, $zero, 0x4060
    ctx->r5 = ADD32(0, 0X4060);
    // 0x150EB3C0: jal         0x1509BFB0
    // 0x150EB3C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_17;
    // 0x150EB3C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x150EB3C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150EB3CC: addiu       $a1, $zero, 0x4061
    ctx->r5 = ADD32(0, 0X4061);
    // 0x150EB3D0: jal         0x1509BFB0
    // 0x150EB3D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_18;
    // 0x150EB3D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x150EB3D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150EB3DC: addiu       $a1, $zero, 0x4040
    ctx->r5 = ADD32(0, 0X4040);
    // 0x150EB3E0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150EB3E4: jal         0x1509BE40
    // 0x150EB3E8: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_19;
    // 0x150EB3E8: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_19:
    // 0x150EB3EC: beql        $v0, $zero, L_150EB408
    if (ctx->r2 == 0) {
        // 0x150EB3F0: lw          $t2, 0x84($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X84);
            goto L_150EB408;
    }
    goto skip_1;
    // 0x150EB3F0: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    skip_1:
    // 0x150EB3F4: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150EB3F8: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x150EB3FC: b           L_150EB414
    // 0x150EB400: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_150EB414;
    // 0x150EB400: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150EB404: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
L_150EB408:
    // 0x150EB408: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x150EB40C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150EB410: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150EB414:
    // 0x150EB414: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150EB418:
    // 0x150EB418: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150EB41C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150EB420: jr          $ra
    // 0x150EB424: nop

    return;
    return;
    // 0x150EB424: nop

;}
RECOMP_FUNC void func_1506EBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EBC0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506EBC4: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x1506EBC8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1506EBCC: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1506EBD0: lbu         $a0, 0x13C($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X13C);
    // 0x1506EBD4: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x1506EBD8: beq         $a0, $zero, L_1506EC48
    if (ctx->r4 == 0) {
        // 0x1506EBDC: andi        $t6, $v0, 0xFF
        ctx->r14 = ctx->r2 & 0XFF;
            goto L_1506EC48;
    }
    // 0x1506EBDC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x1506EBE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1506EBE4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1506EBE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1506EBEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1506EBF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1506EBF4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1506EBF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1506EBFC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1506EC00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1506EC04: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1506EC08: lbu         $t9, 0x13D($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X13D);
    // 0x1506EC0C: slti        $at, $t9, 0x64
    ctx->r1 = SIGNED(ctx->r25) < 0X64 ? 1 : 0;
    // 0x1506EC10: bnel        $at, $zero, L_1506EC48
    if (ctx->r1 != 0) {
        // 0x1506EC14: sb          $zero, 0x13C($v1)
        MEM_B(0X13C, ctx->r3) = 0;
            goto L_1506EC48;
    }
    goto skip_0;
    // 0x1506EC14: sb          $zero, 0x13C($v1)
    MEM_B(0X13C, ctx->r3) = 0;
    skip_0:
    // 0x1506EC18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506EC1C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1506EC20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506EC24: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x1506EC28: sb          $zero, 0x13D($a0)
    MEM_B(0X13D, ctx->r4) = 0;
    // 0x1506EC2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506EC30: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x1506EC34: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x1506EC38: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x1506EC3C: lwc1        $f6, -0x625C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X625C);
    // 0x1506EC40: swc1        $f6, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->f6.u32l;
    // 0x1506EC44: sb          $zero, 0x13C($v1)
    MEM_B(0X13C, ctx->r3) = 0;
L_1506EC48:
    // 0x1506EC48: jr          $ra
    // 0x1506EC4C: nop

    return;
    return;
    // 0x1506EC4C: nop

;}
RECOMP_FUNC void func_15125C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125C40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15125C44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15125C48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15125C4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15125C50: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15125C54: lbu         $v0, 0x1940($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1940);
    // 0x15125C58: lbu         $a1, 0x23E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X23E);
    // 0x15125C5C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x15125C60: xori        $t6, $v0, 0x42
    ctx->r14 = ctx->r2 ^ 0X42;
    // 0x15125C64: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x15125C68: beq         $v0, $zero, L_15125C78
    if (ctx->r2 == 0) {
        // 0x15125C6C: xori        $v1, $a1, 0x3
        ctx->r3 = ctx->r5 ^ 0X3;
            goto L_15125C78;
    }
    // 0x15125C6C: xori        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 ^ 0X3;
    // 0x15125C70: xor         $v0, $a1, $a2
    ctx->r2 = ctx->r5 ^ ctx->r6;
    // 0x15125C74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_15125C78:
    // 0x15125C78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15125C7C: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x15125C80: bne         $v0, $zero, L_15125C9C
    if (ctx->r2 != 0) {
        // 0x15125C84: addiu       $a2, $zero, 0x1A
        ctx->r6 = ADD32(0, 0X1A);
            goto L_15125C9C;
    }
    // 0x15125C84: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x15125C88: xor         $v1, $a1, $a2
    ctx->r3 = ctx->r5 ^ ctx->r6;
    // 0x15125C8C: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x15125C90: bnel        $v0, $zero, L_15125CA0
    if (ctx->r2 != 0) {
        // 0x15125C94: lw          $t7, 0x7CC($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X7CC);
            goto L_15125CA0;
    }
    goto skip_0;
    // 0x15125C94: lw          $t7, 0x7CC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7CC);
    skip_0:
    // 0x15125C98: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
L_15125C9C:
    // 0x15125C9C: lw          $t7, 0x7CC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7CC);
L_15125CA0:
    // 0x15125CA0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x15125CA4: beq         $v0, $zero, L_15125D4C
    if (ctx->r2 == 0) {
        // 0x15125CA8: sw          $t8, 0x7CC($s0)
        MEM_W(0X7CC, ctx->r16) = ctx->r24;
            goto L_15125D4C;
    }
    // 0x15125CA8: sw          $t8, 0x7CC($s0)
    MEM_W(0X7CC, ctx->r16) = ctx->r24;
    // 0x15125CAC: bnel        $t8, $zero, L_15125DA4
    if (ctx->r24 != 0) {
        // 0x15125CB0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125DA4;
    }
    goto skip_1;
    // 0x15125CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x15125CB4: beq         $a0, $zero, L_15125CF4
    if (ctx->r4 == 0) {
        // 0x15125CB8: nop
    
            goto L_15125CF4;
    }
    // 0x15125CB8: nop

    // 0x15125CBC: lw          $t0, 0x3D0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D0);
    // 0x15125CC0: addiu       $t2, $zero, 0xFA
    ctx->r10 = ADD32(0, 0XFA);
    // 0x15125CC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15125CC8: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x15125CCC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15125CD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15125CD4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15125CD8: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x15125CDC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15125CE0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15125CE4: jal         0x1509BFB0
    // 0x15125CE8: nop

    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x15125CE8: nop

    after_0:
    // 0x15125CEC: b           L_15125D1C
    // 0x15125CF0: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
        goto L_15125D1C;
    // 0x15125CF0: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
L_15125CF4:
    // 0x15125CF4: bne         $a1, $a2, L_15125D18
    if (ctx->r5 != ctx->r6) {
        // 0x15125CF8: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_15125D18;
    }
    // 0x15125CF8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15125CFC: addiu       $t3, $zero, 0xFA
    ctx->r11 = ADD32(0, 0XFA);
    // 0x15125D00: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15125D04: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x15125D08: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15125D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15125D10: jal         0x1509BFB0
    // 0x15125D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1509BFB0(rdram, ctx);
        goto after_1;
    // 0x15125D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_15125D18:
    // 0x15125D18: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
L_15125D1C:
    // 0x15125D1C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125D20: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15125D24: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x15125D28: sw          $t5, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r13;
    // 0x15125D2C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x15125D30: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x15125D34: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x15125D38: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125D3C: sw          $t0, 0x7CC($s0)
    MEM_W(0X7CC, ctx->r16) = ctx->r8;
    // 0x15125D40: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x15125D44: b           L_15125DA0
    // 0x15125D48: sh          $t9, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r25;
        goto L_15125DA0;
    // 0x15125D48: sh          $t9, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r25;
L_15125D4C:
    // 0x15125D4C: lw          $t1, 0x5F0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5F0);
    // 0x15125D50: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x15125D54: beql        $t2, $zero, L_15125D9C
    if (ctx->r10 == 0) {
        // 0x15125D58: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_15125D9C;
    }
    goto skip_2;
    // 0x15125D58: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    skip_2:
    // 0x15125D5C: bne         $v0, $zero, L_15125D98
    if (ctx->r2 != 0) {
        // 0x15125D60: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15125D98;
    }
    // 0x15125D60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15125D64: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x15125D68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15125D6C: jal         0x1509BFB0
    // 0x15125D70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_2;
    // 0x15125D70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15125D74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15125D78: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x15125D7C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x15125D80: jal         0x1509BFB0
    // 0x15125D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_3;
    // 0x15125D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x15125D88: lw          $t3, 0x5F0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5F0);
    // 0x15125D8C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x15125D90: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x15125D94: sw          $t4, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r12;
L_15125D98:
    // 0x15125D98: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
L_15125D9C:
    // 0x15125D9C: sw          $t5, 0x7CC($s0)
    MEM_W(0X7CC, ctx->r16) = ctx->r13;
L_15125DA0:
    // 0x15125DA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15125DA4:
    // 0x15125DA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15125DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15125DAC: jr          $ra
    // 0x15125DB0: nop

    return;
    return;
    // 0x15125DB0: nop

;}
RECOMP_FUNC void func_15085430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15085430: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15085434: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15085438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1508543C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15085440: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x15085444: lbu         $a0, 0x127($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X127);
    // 0x15085448: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x1508544C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15085450: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x15085454: addiu       $t7, $sp, 0x6B
    ctx->r15 = ADD32(ctx->r29, 0X6B);
    // 0x15085458: addiu       $t8, $sp, 0x6A
    ctx->r24 = ADD32(ctx->r29, 0X6A);
    // 0x1508545C: addiu       $t9, $sp, 0x60
    ctx->r25 = ADD32(ctx->r29, 0X60);
    // 0x15085460: addiu       $t0, $sp, 0x64
    ctx->r8 = ADD32(ctx->r29, 0X64);
    // 0x15085464: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15085468: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1508546C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15085470: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15085474: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15085478: lbu         $a2, 0x18A8($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X18A8);
    // 0x1508547C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15085480: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x15085484: jal         0x15084D70
    // 0x15085488: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_15084D70(rdram, ctx);
        goto after_0;
    // 0x15085488: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1508548C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15085490: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x15085494: subu        $a3, $s0, $t4
    ctx->r7 = SUB32(ctx->r16, ctx->r12);
    // 0x15085498: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1508549C: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x150854A0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150854A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150854A8: addiu       $v1, $v1, 0x3E78
    ctx->r3 = ADD32(ctx->r3, 0X3E78);
    // 0x150854AC: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x150854B0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150854B4: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x150854B8: mflo        $t5
    ctx->r13 = lo;
    // 0x150854BC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x150854C0: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x150854C4: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x150854C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150854CC: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x150854D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150854D4: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x150854D8: jal         0x1506AD30
    // 0x150854DC: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    func_1506AD30(rdram, ctx);
        goto after_1;
    // 0x150854DC: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    after_1:
    // 0x150854E0: lh          $t8, 0x78($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X78);
    // 0x150854E4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x150854E8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x150854EC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150854F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150854F4: sw          $t6, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r14;
    // 0x150854F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150854FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15085500: sb          $t7, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r15;
    // 0x15085504: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15085508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1508550C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x15085510: lh          $t9, 0x7A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X7A);
    // 0x15085514: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15085518: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1508551C: nop

    // 0x15085520: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15085524: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x15085528: lh          $t0, 0x7C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X7C);
    // 0x1508552C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15085530: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x15085534: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x15085538: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x1508553C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15085540: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x15085544: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15085548: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508554C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15085550: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x15085554: lbu         $v1, 0x6A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6A);
    // 0x15085558: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1508555C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15085560: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x15085564: addiu       $t3, $v0, 0x4000
    ctx->r11 = ADD32(ctx->r2, 0X4000);
    // 0x15085568: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x1508556C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15085570: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15085574: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x15085578: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x1508557C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15085580: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x15085584: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15085588: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x1508558C: lbu         $t6, 0x6B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6B);
    // 0x15085590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15085594: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15085598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1508559C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150855A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150855A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150855A8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x150855AC: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x150855B0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x150855B4: nop

    // 0x150855B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150855BC: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x150855C0: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150855C4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150855C8: nop

    // 0x150855CC: bc1fl       L_150855FC
    if (!c1cs) {
        // 0x150855D0: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_150855FC;
    }
    goto skip_0;
    // 0x150855D0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_0:
    // 0x150855D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150855D8: nop

    // 0x150855DC: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
L_150855E0:
    // 0x150855E0: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x150855E4: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150855E8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150855EC: nop

    // 0x150855F0: bc1tl       L_150855E0
    if (c1cs) {
        // 0x150855F4: sub.s       $f10, $f0, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_150855E0;
    }
    goto skip_1;
    // 0x150855F4: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
    // 0x150855F8: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150855FC:
    // 0x150855FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15085600: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15085604: addiu       $a1, $v0, 0x114
    ctx->r5 = ADD32(ctx->r2, 0X114);
    // 0x15085608: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x1508560C: beq         $v0, $zero, L_15085628
    if (ctx->r2 == 0) {
        // 0x15085610: swc1        $f0, 0x180($s0)
        MEM_W(0X180, ctx->r16) = ctx->f0.u32l;
            goto L_15085628;
    }
    // 0x15085610: swc1        $f0, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f0.u32l;
    // 0x15085614: addiu       $a2, $v0, 0x116
    ctx->r6 = ADD32(ctx->r2, 0X116);
    // 0x15085618: jal         0x1507C3E0
    // 0x1508561C: addiu       $a3, $v0, 0x118
    ctx->r7 = ADD32(ctx->r2, 0X118);
    func_1507C3E0(rdram, ctx);
        goto after_2;
    // 0x1508561C: addiu       $a3, $v0, 0x118
    ctx->r7 = ADD32(ctx->r2, 0X118);
    after_2:
    // 0x15085620: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15085624: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
L_15085628:
    // 0x15085628: lhu         $t9, 0x2F8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2F8);
    // 0x1508562C: lhu         $t1, 0x22C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X22C);
    // 0x15085630: lbu         $t3, 0x127($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X127);
    // 0x15085634: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15085638: andi        $t0, $t9, 0xFFEF
    ctx->r8 = ctx->r25 & 0XFFEF;
    // 0x1508563C: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x15085640: swc1        $f0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f0.u32l;
    // 0x15085644: sh          $t0, 0x2F8($s0)
    MEM_H(0X2F8, ctx->r16) = ctx->r8;
    // 0x15085648: sh          $t2, 0x22C($s0)
    MEM_H(0X22C, ctx->r16) = ctx->r10;
    // 0x1508564C: swc1        $f2, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f2.u32l;
    // 0x15085650: swc1        $f2, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f2.u32l;
    // 0x15085654: swc1        $f2, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f2.u32l;
    // 0x15085658: beq         $t3, $at, L_150856C8
    if (ctx->r11 == ctx->r1) {
        // 0x1508565C: swc1        $f2, 0x170($s0)
        MEM_W(0X170, ctx->r16) = ctx->f2.u32l;
            goto L_150856C8;
    }
    // 0x1508565C: swc1        $f2, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f2.u32l;
    // 0x15085660: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x15085664: lw          $t5, 0x31C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X31C);
    // 0x15085668: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1508566C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15085670: sb          $t4, 0x23($t5)
    MEM_B(0X23, ctx->r13) = ctx->r12;
    // 0x15085674: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15085678: beql        $t6, $zero, L_1508569C
    if (ctx->r14 == 0) {
        // 0x1508567C: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_1508569C;
    }
    goto skip_2;
    // 0x1508567C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_2:
    // 0x15085680: lbu         $t7, 0x18A8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X18A8);
    // 0x15085684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15085688: beql        $t7, $zero, L_1508569C
    if (ctx->r15 == 0) {
        // 0x1508568C: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_1508569C;
    }
    goto skip_3;
    // 0x1508568C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_3:
    // 0x15085690: jal         0x1505D6F0
    // 0x15085694: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_1505D6F0(rdram, ctx);
        goto after_3;
    // 0x15085694: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x15085698: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_1508569C:
    // 0x1508569C: lbu         $t8, 0x78($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X78);
    // 0x150856A0: bnel        $t8, $zero, L_150856D0
    if (ctx->r24 != 0) {
        // 0x150856A4: lw          $a0, 0x318($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X318);
            goto L_150856D0;
    }
    goto skip_4;
    // 0x150856A4: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    skip_4:
    // 0x150856A8: lbu         $v1, 0x19B($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19B);
    // 0x150856AC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150856B0: beq         $v1, $at, L_150856CC
    if (ctx->r3 == ctx->r1) {
        // 0x150856B4: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_150856CC;
    }
    // 0x150856B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150856B8: beql        $v1, $at, L_150856D0
    if (ctx->r3 == ctx->r1) {
        // 0x150856BC: lw          $a0, 0x318($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X318);
            goto L_150856D0;
    }
    goto skip_5;
    // 0x150856BC: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
    skip_5:
    // 0x150856C0: b           L_150856CC
    // 0x150856C4: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
        goto L_150856CC;
    // 0x150856C4: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
L_150856C8:
    // 0x150856C8: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
L_150856CC:
    // 0x150856CC: lw          $a0, 0x318($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X318);
L_150856D0:
    // 0x150856D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150856D4: beql        $a0, $zero, L_150856E8
    if (ctx->r4 == 0) {
        // 0x150856D8: sw          $s0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r16;
            goto L_150856E8;
    }
    goto skip_6;
    // 0x150856D8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    skip_6:
    // 0x150856DC: jal         0x15005818
    // 0x150856E0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_15005818(rdram, ctx);
        goto after_4;
    // 0x150856E0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x150856E4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
L_150856E8:
    // 0x150856E8: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x150856EC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x150856F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x150856F4: jal         0x15169040
    // 0x150856F8: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    func_15169040(rdram, ctx);
        goto after_5;
    // 0x150856F8: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    after_5:
    // 0x150856FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15085700: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15085704: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x15085708: jr          $ra
    // 0x1508570C: nop

    return;
    return;
    // 0x1508570C: nop

;}
RECOMP_FUNC void func_151106A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151106A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151106AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151106B0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x151106B4: lw          $t6, 0x2FA4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA4);
    // 0x151106B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151106BC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151106C0: bne         $t6, $zero, L_151108B0
    if (ctx->r14 != 0) {
        // 0x151106C4: lui         $t8, 0xEF30
        ctx->r24 = S32(0XEF30 << 16);
            goto L_151108B0;
    }
    // 0x151106C4: lui         $t8, 0xEF30
    ctx->r24 = S32(0XEF30 << 16);
    // 0x151106C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151106CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151106D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151106D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151106D8: ori         $t8, $t8, 0x2C0F
    ctx->r24 = ctx->r24 | 0X2C0F;
    // 0x151106DC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151106E0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x151106E4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x151106E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151106EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151106F0: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x151106F4: lui         $t1, 0xFFFE
    ctx->r9 = S32(0XFFFE << 16);
    // 0x151106F8: ori         $t1, $t1, 0x793C
    ctx->r9 = ctx->r9 | 0X793C;
    // 0x151106FC: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x15110700: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x15110704: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x15110708: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1511070C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15110710: lw          $t2, -0x19E0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19E0);
    // 0x15110714: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x15110718: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1511071C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x15110720: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x15110724: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x15110728: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x1511072C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15110730: lw          $t6, -0x163C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X163C);
    // 0x15110734: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15110738: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1511073C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x15110740: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x15110744: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x15110748: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x1511074C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x15110750: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x15110754: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15110758: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1511075C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15110760: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15110764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15110768: jal         0x1501A490
    // 0x1511076C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_0;
    // 0x1511076C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x15110770: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15110774: lw          $t9, -0x19E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19E0);
    // 0x15110778: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1511077C: lw          $t4, -0x19DC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X19DC);
    // 0x15110780: addiu       $t0, $t9, -0x2
    ctx->r8 = ADD32(ctx->r25, -0X2);
    // 0x15110784: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x15110788: sll         $t2, $t1, 14
    ctx->r10 = S32(ctx->r9 << 14);
    // 0x1511078C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x15110790: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x15110794: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15110798: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x1511079C: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x151107A0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x151107A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151107A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151107AC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151107B0: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x151107B4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x151107B8: jal         0x1501A680
    // 0x151107BC: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    func_1501A680(rdram, ctx);
        goto after_1;
    // 0x151107BC: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    after_1:
    // 0x151107C0: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x151107C4: lw          $t0, 0x2FA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2FA0);
    // 0x151107C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151107CC: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x151107D0: beq         $t0, $zero, L_151108B0
    if (ctx->r8 == 0) {
        // 0x151107D4: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_151108B0;
    }
    // 0x151107D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151107D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151107DC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151107E0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151107E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151107E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151107EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151107F0: jal         0x1501A490
    // 0x151107F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_2;
    // 0x151107F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x151107F8: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x151107FC: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x15110800: lui         $t2, 0xF700
    ctx->r10 = S32(0XF700 << 16);
    // 0x15110804: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x15110808: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x1511080C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15110810: lw          $v1, -0x19DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X19DC);
    // 0x15110814: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15110818: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x1511081C: sra         $t5, $v1, 1
    ctx->r13 = S32(SIGNED(ctx->r3) >> 1);
    // 0x15110820: addiu       $t3, $t5, 0x6
    ctx->r11 = ADD32(ctx->r13, 0X6);
    // 0x15110824: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15110828: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x1511082C: addiu       $a2, $t5, -0x6
    ctx->r6 = ADD32(ctx->r13, -0X6);
    // 0x15110830: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x15110834: jal         0x1501A6CC
    // 0x15110838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1501A6CC(rdram, ctx);
        goto after_3;
    // 0x15110838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x1511083C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15110840: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15110844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15110848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511084C: beq         $t6, $at, L_15110880
    if (ctx->r14 == ctx->r1) {
        // 0x15110850: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15110880;
    }
    // 0x15110850: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15110854: lw          $v0, -0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19E0);
    // 0x15110858: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1511085C: lw          $t8, -0x19DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19DC);
    // 0x15110860: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15110864: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x15110868: addiu       $a1, $t7, -0x1
    ctx->r5 = ADD32(ctx->r15, -0X1);
    // 0x1511086C: addiu       $a3, $t7, 0x1
    ctx->r7 = ADD32(ctx->r15, 0X1);
    // 0x15110870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15110874: jal         0x1501A6CC
    // 0x15110878: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1501A6CC(rdram, ctx);
        goto after_4;
    // 0x15110878: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_4:
    // 0x1511087C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15110880:
    // 0x15110880: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15110884: lbu         $t9, -0x153E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X153E);
    // 0x15110888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511088C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15110890: beq         $t9, $zero, L_151108B0
    if (ctx->r25 == 0) {
        // 0x15110894: lui         $a3, 0x800C
        ctx->r7 = S32(0X800C << 16);
            goto L_151108B0;
    }
    // 0x15110894: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15110898: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1511089C: lw          $t0, -0x19DC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19DC);
    // 0x151108A0: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x151108A4: jal         0x1501A6CC
    // 0x151108A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_1501A6CC(rdram, ctx);
        goto after_5;
    // 0x151108A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x151108AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_151108B0:
    // 0x151108B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151108B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151108B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151108BC: jr          $ra
    // 0x151108C0: nop

    return;
    return;
    // 0x151108C0: nop

;}
RECOMP_FUNC void func_1000696C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000696C: beq         $a1, $zero, L_10006DE8
    if (ctx->r5 == 0) {
        // 0x10006970: mtc1        $s0, $f2
        ctx->f2.u32l = ctx->r16;
            goto L_10006DE8;
    }
    // 0x10006970: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x10006974: mtc1        $s1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r17;
    // 0x10006978: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x1000697C: mtc1        $s3, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r19;
    // 0x10006980: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x10006984: mtc1        $s5, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r21;
    // 0x10006988: mtc1        $s6, $f8
    ctx->f8.u32l = ctx->r22;
    // 0x1000698C: mtc1        $s7, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r23;
    // 0x10006990: mtc1        $fp, $f10
    ctx->f10.u32l = ctx->r30;
    // 0x10006994: mtc1        $gp, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r28;
    // 0x10006998: mfc1        $s3, $f19
    ctx->r19 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x1000699C: sd          $zero, 0x0($sp)
    SD(0, 0X0, ctx->r29);
    // 0x100069A0: sd          $zero, 0x8($sp)
    SD(0, 0X8, ctx->r29);
    // 0x100069A4: sd          $zero, 0x10($sp)
    SD(0, 0X10, ctx->r29);
    // 0x100069A8: sd          $zero, 0x18($sp)
    SD(0, 0X18, ctx->r29);
    // 0x100069AC: sd          $zero, 0x20($sp)
    SD(0, 0X20, ctx->r29);
    // 0x100069B0: sd          $zero, 0x28($sp)
    SD(0, 0X28, ctx->r29);
    // 0x100069B4: sd          $zero, 0x30($sp)
    SD(0, 0X30, ctx->r29);
    // 0x100069B8: sd          $zero, 0x38($sp)
    SD(0, 0X38, ctx->r29);
    // 0x100069BC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x100069C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x100069C4: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
L_100069C8:
    // 0x100069C8: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x100069CC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x100069D0: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x100069D4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x100069D8: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x100069DC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x100069E0: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x100069E4: bne         $t1, $zero, L_100069C8
    if (ctx->r9 != 0) {
        // 0x100069E8: sw          $at, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r1;
            goto L_100069C8;
    }
    // 0x100069E8: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x100069EC: lw          $s7, 0x0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X0);
    // 0x100069F0: beq         $s7, $a1, L_10006DF0
    if (ctx->r23 == ctx->r5) {
        // 0x100069F4: lw          $t2, 0x0($t9)
        ctx->r10 = MEM_W(ctx->r25, 0X0);
            goto L_10006DF0;
    }
    // 0x100069F4: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x100069F8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x100069FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x10006A00: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
L_10006A04:
    // 0x10006A04: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x10006A08: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x10006A0C: bne         $s7, $zero, L_10006A1C
    if (ctx->r23 != 0) {
        // 0x10006A10: nop
    
            goto L_10006A1C;
    }
    // 0x10006A10: nop

    // 0x10006A14: bne         $t3, $at, L_10006A04
    if (ctx->r11 != ctx->r1) {
        // 0x10006A18: addiu       $t3, $t3, 0x4
        ctx->r11 = ADD32(ctx->r11, 0X4);
            goto L_10006A04;
    }
    // 0x10006A18: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
L_10006A1C:
    // 0x10006A1C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x10006A20: beq         $at, $zero, L_10006A2C
    if (ctx->r1 == 0) {
        // 0x10006A24: or          $t4, $t3, $zero
        ctx->r12 = ctx->r11 | 0;
            goto L_10006A2C;
    }
    // 0x10006A24: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x10006A28: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
L_10006A2C:
    // 0x10006A2C: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
L_10006A30:
    // 0x10006A30: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x10006A34: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x10006A38: bne         $s7, $zero, L_10006A4C
    if (ctx->r23 != 0) {
        // 0x10006A3C: nop
    
            goto L_10006A4C;
    }
    // 0x10006A3C: nop

    // 0x10006A40: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x10006A44: bne         $t1, $zero, L_10006A30
    if (ctx->r9 != 0) {
        // 0x10006A48: nop
    
            goto L_10006A30;
    }
    // 0x10006A48: nop

L_10006A4C:
    // 0x10006A4C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x10006A50: beq         $at, $zero, L_10006A5C
    if (ctx->r1 == 0) {
        // 0x10006A54: or          $t5, $t1, $zero
        ctx->r13 = ctx->r9 | 0;
            goto L_10006A5C;
    }
    // 0x10006A54: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x10006A58: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
L_10006A5C:
    // 0x10006A5C: srl         $t2, $t2, 2
    ctx->r10 = S32(U32(ctx->r10) >> 2);
    // 0x10006A60: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x10006A64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x10006A68: srl         $s7, $t3, 2
    ctx->r23 = S32(U32(ctx->r11) >> 2);
    // 0x10006A6C: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x10006A70: beq         $at, $zero, L_10006A94
    if (ctx->r1 == 0) {
        // 0x10006A74: sllv        $t9, $t9, $s7
        ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
            goto L_10006A94;
    }
    // 0x10006A74: sllv        $t9, $t9, $s7
    ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
L_10006A78:
    // 0x10006A78: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x10006A7C: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x10006A80: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x10006A84: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x10006A88: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x10006A8C: bne         $at, $zero, L_10006A78
    if (ctx->r1 != 0) {
        // 0x10006A90: sll         $t9, $t9, 1
        ctx->r25 = S32(ctx->r25 << 1);
            goto L_10006A78;
    }
    // 0x10006A90: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
L_10006A94:
    // 0x10006A94: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x10006A98: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x10006A9C: sw          $t9, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r25;
    // 0x10006AA0: subu        $t9, $t9, $at
    ctx->r25 = SUB32(ctx->r25, ctx->r1);
    // 0x10006AA4: sw          $zero, 0x508($sp)
    MEM_W(0X508, ctx->r29) = 0;
    // 0x10006AA8: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x10006AAC: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x10006AB0: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x10006AB4: beq         $t1, $zero, L_10006AD8
    if (ctx->r9 == 0) {
        // 0x10006AB8: addiu       $t6, $sp, 0x50C
        ctx->r14 = ADD32(ctx->r29, 0X50C);
            goto L_10006AD8;
    }
    // 0x10006AB8: addiu       $t6, $sp, 0x50C
    ctx->r14 = ADD32(ctx->r29, 0X50C);
L_10006ABC:
    // 0x10006ABC: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x10006AC0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x10006AC4: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x10006AC8: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x10006ACC: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x10006AD0: bne         $t1, $zero, L_10006ABC
    if (ctx->r9 != 0) {
        // 0x10006AD4: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_10006ABC;
    }
    // 0x10006AD4: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
L_10006AD8:
    // 0x10006AD8: srl         $t5, $t5, 2
    ctx->r13 = S32(U32(ctx->r13) >> 2);
    // 0x10006ADC: srl         $t4, $t4, 2
    ctx->r12 = S32(U32(ctx->r12) >> 2);
    // 0x10006AE0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x10006AE4: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x10006AE8: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
L_10006AEC:
    // 0x10006AEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x10006AF0: beq         $t3, $zero, L_10006B14
    if (ctx->r11 == 0) {
        // 0x10006AF4: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_10006B14;
    }
    // 0x10006AF4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x10006AF8: addu        $t3, $t3, $sp
    ctx->r11 = ADD32(ctx->r11, ctx->r29);
    // 0x10006AFC: lw          $s7, 0x504($t3)
    ctx->r23 = MEM_W(ctx->r11, 0X504);
    // 0x10006B00: sll         $fp, $s7, 2
    ctx->r30 = S32(ctx->r23 << 2);
    // 0x10006B04: addiu       $at, $s7, 0x1
    ctx->r1 = ADD32(ctx->r23, 0X1);
    // 0x10006B08: sw          $at, 0x504($t3)
    MEM_W(0X504, ctx->r11) = ctx->r1;
    // 0x10006B0C: addu        $fp, $fp, $sp
    ctx->r30 = ADD32(ctx->r30, ctx->r29);
    // 0x10006B10: sw          $t1, 0x84($fp)
    MEM_W(0X84, ctx->r30) = ctx->r9;
L_10006B14:
    // 0x10006B14: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x10006B18: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x10006B1C: bnel        $at, $zero, L_10006AEC
    if (ctx->r1 != 0) {
        // 0x10006B20: lw          $t3, 0x0($t0)
        ctx->r11 = MEM_W(ctx->r8, 0X0);
            goto L_10006AEC;
    }
    goto skip_0;
    // 0x10006B20: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x10006B24: sw          $zero, 0x504($sp)
    MEM_W(0X504, ctx->r29) = 0;
    // 0x10006B28: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x10006B2C: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x10006B30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x10006B34: negu        $s1, $t2
    ctx->r17 = SUB32(0, ctx->r10);
    // 0x10006B38: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x10006B3C: j           L_10006D74
    // 0x10006B40: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
        goto L_10006D74;
    // 0x10006B40: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
    // 0x10006B44: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
L_10006B48:
    // 0x10006B48: subu        $s0, $t5, $s1
    ctx->r16 = SUB32(ctx->r13, ctx->r17);
    // 0x10006B4C: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x10006B50: beq         $at, $zero, L_10006B5C
    if (ctx->r1 == 0) {
        // 0x10006B54: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_10006B5C;
    }
    // 0x10006B54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x10006B58: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_10006B5C:
    // 0x10006B5C: subu        $t3, $t4, $s1
    ctx->r11 = SUB32(ctx->r12, ctx->r17);
    // 0x10006B60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x10006B64: sllv        $s2, $s2, $t3
    ctx->r18 = S32(ctx->r18 << (ctx->r11 & 31));
    // 0x10006B68: addiu       $s7, $a0, 0x1
    ctx->r23 = ADD32(ctx->r4, 0X1);
    // 0x10006B6C: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x10006B70: beq         $at, $zero, L_10006BBC
    if (ctx->r1 == 0) {
        // 0x10006B74: nop
    
            goto L_10006BBC;
    }
    // 0x10006B74: nop

    // 0x10006B78: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
    // 0x10006B7C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x10006B80: addu        $t6, $t6, $sp
    ctx->r14 = ADD32(ctx->r14, ctx->r29);
    // 0x10006B84: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x10006B88: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x10006B8C: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x10006B90: beq         $at, $zero, L_10006BBC
    if (ctx->r1 == 0) {
        // 0x10006B94: nop
    
            goto L_10006BBC;
    }
    // 0x10006B94: nop

L_10006B98:
    // 0x10006B98: lw          $s7, 0x4($t6)
    ctx->r23 = MEM_W(ctx->r14, 0X4);
    // 0x10006B9C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x10006BA0: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x10006BA4: beq         $at, $zero, L_10006BBC
    if (ctx->r1 == 0) {
        // 0x10006BA8: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_10006BBC;
    }
    // 0x10006BA8: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x10006BAC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x10006BB0: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x10006BB4: bne         $at, $zero, L_10006B98
    if (ctx->r1 != 0) {
        // 0x10006BB8: subu        $s2, $s2, $s7
        ctx->r18 = SUB32(ctx->r18, ctx->r23);
            goto L_10006B98;
    }
    // 0x10006BB8: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
L_10006BBC:
    // 0x10006BBC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x10006BC0: sllv        $s0, $s0, $t3
    ctx->r16 = S32(ctx->r16 << (ctx->r11 & 31));
    // 0x10006BC4: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x10006BC8: addu        $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x10006BCC: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    // 0x10006BD0: sh          $s7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r23;
    // 0x10006BD4: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x10006BD8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x10006BDC: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x10006BE0: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x10006BE4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x10006BE8: beq         $v0, $zero, L_10006C34
    if (ctx->r2 == 0) {
        // 0x10006BEC: sw          $t6, 0x44($s7)
        MEM_W(0X44, ctx->r23) = ctx->r14;
            goto L_10006C34;
    }
    // 0x10006BEC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
    // 0x10006BF0: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x10006BF4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x10006BF8: sw          $t1, 0x504($s7)
    MEM_W(0X504, ctx->r23) = ctx->r9;
    // 0x10006BFC: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x10006C00: addiu       $s4, $t3, 0x10
    ctx->r20 = ADD32(ctx->r11, 0X10);
    // 0x10006C04: addiu       $gp, $s3, 0x1
    ctx->r28 = ADD32(ctx->r19, 0X1);
    // 0x10006C08: subu        $t3, $s1, $t2
    ctx->r11 = SUB32(ctx->r17, ctx->r10);
    // 0x10006C0C: srlv        $t3, $t1, $t3
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r11 & 31));
    // 0x10006C10: addiu       $s7, $v0, -0x1
    ctx->r23 = ADD32(ctx->r2, -0X1);
    // 0x10006C14: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x10006C18: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x10006C1C: lw          $s7, 0x44($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X44);
    // 0x10006C20: sll         $at, $t3, 2
    ctx->r1 = S32(ctx->r11 << 2);
    // 0x10006C24: addu        $s7, $s7, $at
    ctx->r23 = ADD32(ctx->r23, ctx->r1);
    // 0x10006C28: sb          $s4, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r20;
    // 0x10006C2C: sb          $s5, 0x1($s7)
    MEM_B(0X1, ctx->r23) = ctx->r21;
    // 0x10006C30: sh          $gp, 0x2($s7)
    MEM_H(0X2, ctx->r23) = ctx->r28;
L_10006C34:
    // 0x10006C34: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x10006C38: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_10006C3C:
    // 0x10006C3C: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_10006C40:
    // 0x10006C40: slt         $at, $s7, $t4
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x10006C44: bnel        $at, $zero, L_10006B48
    if (ctx->r1 != 0) {
        // 0x10006C48: addu        $s1, $s1, $t2
        ctx->r17 = ADD32(ctx->r17, ctx->r10);
            goto L_10006B48;
    }
    goto skip_1;
    // 0x10006C48: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    skip_1:
    // 0x10006C4C: subu        $s5, $t4, $s1
    ctx->r21 = SUB32(ctx->r12, ctx->r17);
    // 0x10006C50: sll         $s7, $a1, 2
    ctx->r23 = S32(ctx->r5 << 2);
    // 0x10006C54: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x10006C58: addiu       $s7, $s7, 0x84
    ctx->r23 = ADD32(ctx->r23, 0X84);
    // 0x10006C5C: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x10006C60: bne         $at, $zero, L_10006C70
    if (ctx->r1 != 0) {
        // 0x10006C64: addiu       $s4, $zero, 0x63
        ctx->r20 = ADD32(0, 0X63);
            goto L_10006C70;
    }
    // 0x10006C64: addiu       $s4, $zero, 0x63
    ctx->r20 = ADD32(0, 0X63);
    // 0x10006C68: j           L_10006CBC
    // 0x10006C6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_10006CBC;
    // 0x10006C6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_10006C70:
    // 0x10006C70: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x10006C74: slt         $at, $s7, $a2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x10006C78: beq         $at, $zero, L_10006C9C
    if (ctx->r1 == 0) {
        // 0x10006C7C: nop
    
            goto L_10006C9C;
    }
    // 0x10006C7C: nop

    // 0x10006C80: or          $gp, $s7, $zero
    ctx->r28 = ctx->r23 | 0;
    // 0x10006C84: slti        $at, $s7, 0x100
    ctx->r1 = SIGNED(ctx->r23) < 0X100 ? 1 : 0;
    // 0x10006C88: bnel        $at, $zero, L_10006C94
    if (ctx->r1 != 0) {
        // 0x10006C8C: addiu       $s4, $zero, 0x10
        ctx->r20 = ADD32(0, 0X10);
            goto L_10006C94;
    }
    goto skip_2;
    // 0x10006C8C: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    skip_2:
    // 0x10006C90: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
L_10006C94:
    // 0x10006C94: j           L_10006CB8
    // 0x10006C98: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
        goto L_10006CB8;
    // 0x10006C98: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_10006C9C:
    // 0x10006C9C: subu        $s7, $s7, $a2
    ctx->r23 = SUB32(ctx->r23, ctx->r6);
    // 0x10006CA0: addu        $s4, $s7, $t7
    ctx->r20 = ADD32(ctx->r23, ctx->r15);
    // 0x10006CA4: lbu         $s4, 0x0($s4)
    ctx->r20 = MEM_BU(ctx->r20, 0X0);
    // 0x10006CA8: sll         $s7, $s7, 1
    ctx->r23 = S32(ctx->r23 << 1);
    // 0x10006CAC: addu        $s7, $s7, $a3
    ctx->r23 = ADD32(ctx->r23, ctx->r7);
    // 0x10006CB0: lhu         $gp, 0x0($s7)
    ctx->r28 = MEM_HU(ctx->r23, 0X0);
    // 0x10006CB4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_10006CB8:
    // 0x10006CB8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_10006CBC:
    // 0x10006CBC: subu        $s7, $t4, $s1
    ctx->r23 = SUB32(ctx->r12, ctx->r17);
    // 0x10006CC0: sllv        $s2, $s2, $s7
    ctx->r18 = S32(ctx->r18 << (ctx->r23 & 31));
    // 0x10006CC4: srlv        $t3, $t1, $s1
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r17 & 31));
    // 0x10006CC8: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x10006CCC: beq         $at, $zero, L_10006D10
    if (ctx->r1 == 0) {
        // 0x10006CD0: sll         $s7, $s4, 24
        ctx->r23 = S32(ctx->r20 << 24);
            goto L_10006D10;
    }
    // 0x10006CD0: sll         $s7, $s4, 24
    ctx->r23 = S32(ctx->r20 << 24);
    // 0x10006CD4: andi        $s5, $s5, 0xFF
    ctx->r21 = ctx->r21 & 0XFF;
    // 0x10006CD8: sll         $s5, $s5, 16
    ctx->r21 = S32(ctx->r21 << 16);
    // 0x10006CDC: or          $s7, $s7, $s5
    ctx->r23 = ctx->r23 | ctx->r21;
    // 0x10006CE0: andi        $s5, $gp, 0xFFFF
    ctx->r21 = ctx->r28 & 0XFFFF;
    // 0x10006CE4: or          $s5, $s5, $s7
    ctx->r21 = ctx->r21 | ctx->r23;
    // 0x10006CE8: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x10006CEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x10006CF0: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x10006CF4: sll         $s7, $s0, 2
    ctx->r23 = S32(ctx->r16 << 2);
    // 0x10006CF8: addu        $s7, $s7, $t6
    ctx->r23 = ADD32(ctx->r23, ctx->r14);
    // 0x10006CFC: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
L_10006D00:
    // 0x10006D00: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x10006D04: slt         $at, $t3, $s7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x10006D08: bnel        $at, $zero, L_10006D00
    if (ctx->r1 != 0) {
        // 0x10006D0C: sw          $s5, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r21;
            goto L_10006D00;
    }
    goto skip_3;
    // 0x10006D0C: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
    skip_3:
L_10006D10:
    // 0x10006D10: addiu       $s7, $t4, -0x1
    ctx->r23 = ADD32(ctx->r12, -0X1);
    // 0x10006D14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10006D18: sllv        $t3, $t3, $s7
    ctx->r11 = S32(ctx->r11 << (ctx->r23 & 31));
    // 0x10006D1C: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x10006D20: beq         $s7, $zero, L_10006D38
    if (ctx->r23 == 0) {
        // 0x10006D24: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_10006D38;
    }
    // 0x10006D24: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_10006D28:
    // 0x10006D28: srl         $t3, $t3, 1
    ctx->r11 = S32(U32(ctx->r11) >> 1);
    // 0x10006D2C: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x10006D30: bne         $s7, $zero, L_10006D28
    if (ctx->r23 != 0) {
        // 0x10006D34: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_10006D28;
    }
    // 0x10006D34: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_10006D38:
    // 0x10006D38: j           L_10006D48
    // 0x10006D3C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
        goto L_10006D48;
    // 0x10006D3C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x10006D40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_10006D44:
    // 0x10006D44: subu        $s1, $s1, $t2
    ctx->r17 = SUB32(ctx->r17, ctx->r10);
L_10006D48:
    // 0x10006D48: sllv        $s7, $fp, $s1
    ctx->r23 = S32(ctx->r30 << (ctx->r17 & 31));
    // 0x10006D4C: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x10006D50: sll         $at, $v0, 2
    ctx->r1 = S32(ctx->r2 << 2);
    // 0x10006D54: addu        $at, $at, $sp
    ctx->r1 = ADD32(ctx->r1, ctx->r29);
    // 0x10006D58: lw          $at, 0x504($at)
    ctx->r1 = MEM_W(ctx->r1, 0X504);
    // 0x10006D5C: and         $s7, $s7, $t1
    ctx->r23 = ctx->r23 & ctx->r9;
    // 0x10006D60: bnel        $s7, $at, L_10006D44
    if (ctx->r23 != ctx->r1) {
        // 0x10006D64: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_10006D44;
    }
    goto skip_4;
    // 0x10006D64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_4:
    // 0x10006D68: bne         $a0, $zero, L_10006C3C
    if (ctx->r4 != 0) {
        // 0x10006D6C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_10006C3C;
    }
    // 0x10006D6C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_10006D70:
    // 0x10006D70: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_10006D74:
    // 0x10006D74: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x10006D78: bne         $at, $zero, L_10006D98
    if (ctx->r1 != 0) {
        // 0x10006D7C: sll         $a0, $t4, 2
        ctx->r4 = S32(ctx->r12 << 2);
            goto L_10006D98;
    }
    // 0x10006D7C: sll         $a0, $t4, 2
    ctx->r4 = S32(ctx->r12 << 2);
    // 0x10006D80: addu        $a0, $a0, $sp
    ctx->r4 = ADD32(ctx->r4, ctx->r29);
    // 0x10006D84: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x10006D88: beq         $a0, $zero, L_10006D70
    if (ctx->r4 == 0) {
        // 0x10006D8C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_10006D70;
    }
    // 0x10006D8C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10006D90: j           L_10006C40
    // 0x10006D94: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
        goto L_10006C40;
    // 0x10006D94: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_10006D98:
    // 0x10006D98: bnel        $t9, $zero, L_10006DA4
    if (ctx->r25 != 0) {
        // 0x10006D9C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_10006DA4;
    }
    goto skip_5;
    // 0x10006D9C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    skip_5:
    // 0x10006DA0: addiu       $s7, $zero, 0x0
    ctx->r23 = ADD32(0, 0X0);
L_10006DA4:
    // 0x10006DA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10006DA8: bnel        $t5, $at, L_10006DB4
    if (ctx->r13 != ctx->r1) {
        // 0x10006DAC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_10006DB4;
    }
    goto skip_6;
    // 0x10006DAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_6:
    // 0x10006DB0: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
L_10006DB4:
    // 0x10006DB4: and         $v0, $s7, $at
    ctx->r2 = ctx->r23 & ctx->r1;
    // 0x10006DB8: mtc1        $s3, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r19;
L_10006DBC:
    // 0x10006DBC: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x10006DC0: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x10006DC4: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x10006DC8: mfc1        $s3, $f5
    ctx->r19 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x10006DCC: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x10006DD0: mfc1        $s5, $f7
    ctx->r21 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x10006DD4: mfc1        $s6, $f8
    ctx->r22 = (int32_t)ctx->f8.u32l;
    // 0x10006DD8: mfc1        $s7, $f9
    ctx->r23 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x10006DDC: mfc1        $fp, $f10
    ctx->r30 = (int32_t)ctx->f10.u32l;
    // 0x10006DE0: jr          $ra
    // 0x10006DE4: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    return;
    return;
    // 0x10006DE4: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
L_10006DE8:
    // 0x10006DE8: jr          $ra
    // 0x10006DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x10006DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_10006DF0:
    // 0x10006DF0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x10006DF4: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x10006DF8: j           L_10006DBC
    // 0x10006DFC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_10006DBC;
    // 0x10006DFC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_15190400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15190404: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15190408: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1519040C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15190410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190414: bnel        $a2, $zero, L_15190448
    if (ctx->r6 != 0) {
        // 0x15190418: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15190448;
    }
    goto skip_0;
    // 0x15190418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1519041C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x15190420: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15190424: lbu         $a2, 0x1C($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X1C);
    // 0x15190428: lbu         $a3, 0x4($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X4);
    // 0x1519042C: beq         $v0, $v1, L_1519043C
    if (ctx->r2 == ctx->r3) {
        // 0x15190430: nop
    
            goto L_1519043C;
    }
    // 0x15190430: nop

    // 0x15190434: bnel        $a3, $a2, L_15190448
    if (ctx->r7 != ctx->r6) {
        // 0x15190438: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15190448;
    }
    goto skip_1;
    // 0x15190438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_1519043C:
    // 0x1519043C: jal         0x1516972C
    // 0x15190440: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15190440: nop

    after_0:
    // 0x15190444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15190448:
    // 0x15190448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519044C: jr          $ra
    // 0x15190450: nop

    return;
    return;
    // 0x15190450: nop

;}
RECOMP_FUNC void func_15075B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075B68: jal         0x15075548
    // 0x15075B6C: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075B6C: nop

    after_0:
    // 0x15075B70: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075B74: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075B78: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x15075B7C: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075B84: jr          $ra
    // 0x15075B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1506ED68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506ED68: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506ED6C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506ED70: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506ED74: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1506ED78: sb          $t6, 0xA9($t7)
    MEM_B(0XA9, ctx->r15) = ctx->r14;
    // 0x1506ED7C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1506ED80: lw          $t9, 0x31C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X31C);
    // 0x1506ED84: sb          $zero, 0x31($t9)
    MEM_B(0X31, ctx->r25) = 0;
    // 0x1506ED88: jr          $ra
    // 0x1506ED8C: nop

    return;
    return;
    // 0x1506ED8C: nop

;}
RECOMP_FUNC void func_151E50C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E50C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E50CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151E50D0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E50D4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E50D8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E50DC: lb          $t8, -0x1AA($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1AA);
    // 0x151E50E0: lb          $t7, -0x1AB($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1AB);
    // 0x151E50E4: lb          $t6, -0x1AC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1AC);
    // 0x151E50E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E50EC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E50F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E50F4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151E50F8: addiu       $a0, $a0, -0x195
    ctx->r4 = ADD32(ctx->r4, -0X195);
    // 0x151E50FC: addiu       $v0, $v0, -0x1A9
    ctx->r2 = ADD32(ctx->r2, -0X1A9);
    // 0x151E5100: addiu       $v1, $v1, 0xBE3
    ctx->r3 = ADD32(ctx->r3, 0XBE3);
    // 0x151E5104: sb          $t8, 0xBE2($at)
    MEM_B(0XBE2, ctx->r1) = ctx->r24;
    // 0x151E5108: sb          $t7, 0xBE1($at)
    MEM_B(0XBE1, ctx->r1) = ctx->r15;
    // 0x151E510C: sb          $t6, 0xBE0($at)
    MEM_B(0XBE0, ctx->r1) = ctx->r14;
L_151E5110:
    // 0x151E5110: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x151E5114: lb          $t0, 0x1($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X1);
    // 0x151E5118: lb          $t1, 0x2($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X2);
    // 0x151E511C: lb          $t2, 0x3($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3);
    // 0x151E5120: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151E5124: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151E5128: sb          $t9, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r25;
    // 0x151E512C: sb          $t0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r8;
    // 0x151E5130: sb          $t1, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r9;
    // 0x151E5134: bne         $v0, $a0, L_151E5110
    if (ctx->r2 != ctx->r4) {
        // 0x151E5138: sb          $t2, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r10;
            goto L_151E5110;
    }
    // 0x151E5138: sb          $t2, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r10;
    // 0x151E513C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5140: jal         0x151E6BFC
    // 0x151E5144: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    func_151E6BFC(rdram, ctx);
        goto after_0;
    // 0x151E5144: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    after_0:
    // 0x151E5148: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E514C: addiu       $v0, $v0, -0x22C
    ctx->r2 = ADD32(ctx->r2, -0X22C);
    // 0x151E5150: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x151E5154: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E5158: addiu       $t4, $t4, 0xAF0
    ctx->r12 = ADD32(ctx->r12, 0XAF0);
    // 0x151E515C: bne         $t3, $zero, L_151E5198
    if (ctx->r11 != 0) {
        // 0x151E5160: nop
    
            goto L_151E5198;
    }
    // 0x151E5160: nop

    // 0x151E5164: jal         0x151E5034
    // 0x151E5168: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    func_151E5034(rdram, ctx);
        goto after_1;
    // 0x151E5168: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    after_1:
    // 0x151E516C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E5170: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151E5174: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151E5178: lb          $t5, 0x3E($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X3E);
    // 0x151E517C: bne         $t5, $at, L_151E5198
    if (ctx->r13 != ctx->r1) {
        // 0x151E5180: nop
    
            goto L_151E5198;
    }
    // 0x151E5180: nop

    // 0x151E5184: lb          $t6, 0x2C($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2C);
    // 0x151E5188: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151E518C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151E5190: lbu         $t7, -0x4A90($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X4A90);
    // 0x151E5194: sb          $t7, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r15;
L_151E5198:
    // 0x151E5198: jal         0x15017790
    // 0x151E519C: nop

    func_15017790(rdram, ctx);
        goto after_2;
    // 0x151E519C: nop

    after_2:
    // 0x151E51A0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x151E51A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E51A8: sb          $t8, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r24;
    // 0x151E51AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151E51B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E51B4: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151E51B8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151E51BC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151E51C0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x151E51C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E51C8: jal         0x1501C730
    // 0x151E51CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_3;
    // 0x151E51CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x151E51D0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151E51D4: lbu         $t0, 0xB94($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XB94);
    // 0x151E51D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E51DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151E51E0: sb          $t0, 0xB95($at)
    MEM_B(0XB95, ctx->r1) = ctx->r8;
    // 0x151E51E4: jr          $ra
    // 0x151E51E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151E51E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_10017B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017B30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10017B34: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x10017B38: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x10017B3C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x10017B40: lbu         $t7, 0x34($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X34);
    // 0x10017B44: blez        $t7, L_10017BA8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x10017B48: nop
    
            goto L_10017BA8;
    }
    // 0x10017B48: nop

L_10017B4C:
    // 0x10017B4C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x10017B50: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x10017B54: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x10017B58: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x10017B5C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x10017B60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x10017B64: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x10017B68: sb          $t8, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r24;
    // 0x10017B6C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x10017B70: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x10017B74: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x10017B78: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x10017B7C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x10017B80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x10017B84: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x10017B88: sb          $t3, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r11;
    // 0x10017B8C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x10017B90: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x10017B94: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x10017B98: lbu         $t1, 0x34($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X34);
    // 0x10017B9C: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x10017BA0: bne         $at, $zero, L_10017B4C
    if (ctx->r1 != 0) {
        // 0x10017BA4: nop
    
            goto L_10017B4C;
    }
    // 0x10017BA4: nop

L_10017BA8:
    // 0x10017BA8: b           L_10017BB0
    // 0x10017BAC: nop

        goto L_10017BB0;
    // 0x10017BAC: nop

L_10017BB0:
    // 0x10017BB0: jr          $ra
    // 0x10017BB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x10017BB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15072F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072F10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15072F14: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15072F18: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15072F1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15072F20: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15072F24: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x15072F28: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15072F2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15072F30: lb          $v1, 0x1D1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1D1);
    // 0x15072F34: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15072F38: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x15072F3C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15072F40: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15072F44: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15072F48: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x15072F4C: sll         $t7, $t6, 19
    ctx->r15 = S32(ctx->r14 << 19);
    // 0x15072F50: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15072F54: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15072F58: lh          $t9, 0x24($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X24);
    // 0x15072F5C: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x15072F60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15072F64: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x15072F68: sh          $t1, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r9;
    // 0x15072F6C: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x15072F70: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x15072F74: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x15072F78: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15072F7C: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x15072F80: lhu         $t2, 0x7A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X7A);
    // 0x15072F84: lh          $t4, 0x12($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X12);
    // 0x15072F88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15072F8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15072F90: subu        $a0, $t2, $t4
    ctx->r4 = SUB32(ctx->r10, ctx->r12);
    // 0x15072F94: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x15072F98: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15072F9C: jal         0x1505A184
    // 0x15072FA0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_1505A184(rdram, ctx);
        goto after_0;
    // 0x15072FA0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_0:
    // 0x15072FA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15072FA8: lwc1        $f0, -0x5F6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5F6C);
    // 0x15072FAC: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15072FB0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15072FB4: lw          $a0, 0x154C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X154C);
    // 0x15072FB8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15072FBC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15072FC0: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15072FC4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15072FC8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15072FCC: lbu         $t9, 0x3E78($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3E78);
    // 0x15072FD0: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x15072FD4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15072FD8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15072FDC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x15072FE0: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15072FE4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15072FE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15072FEC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x15072FF0: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15072FF4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15072FF8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15072FFC: lh          $t8, 0xD6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD6);
    // 0x15073000: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15073004: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x15073008: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1507300C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x15073010: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15073014: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15073018: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1507301C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x15073020: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15073024: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15073028: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1507302C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x15073030: jal         0x150E1570
    // 0x15073034: nop

    func_150E1570(rdram, ctx);
        goto after_1;
    // 0x15073034: nop

    after_1:
    // 0x15073038: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1507303C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15073040: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15073044: jr          $ra
    // 0x15073048: nop

    return;
    return;
    // 0x15073048: nop

    // 0x1507304C: jr          $ra
    // 0x15073050: nop

    return;
    return;
    // 0x15073050: nop

;}
RECOMP_FUNC void func_10012BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012BD0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10012BD4: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x10012BD8: beq         $t6, $zero, L_10012BE8
    if (ctx->r14 == 0) {
        // 0x10012BDC: nop
    
            goto L_10012BE8;
    }
    // 0x10012BDC: nop

    // 0x10012BE0: b           L_10012C54
    // 0x10012BE4: nop

        goto L_10012C54;
    // 0x10012BE4: nop

L_10012BE8:
    // 0x10012BE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x10012BEC: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    // 0x10012BF0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10012BF4: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x10012BF8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x10012BFC: sll         $t9, $a1, 5
    ctx->r25 = S32(ctx->r5 << 5);
    // 0x10012C00: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x10012C04: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x10012C08: lh          $t0, 0xE($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XE);
    // 0x10012C0C: blez        $t0, L_10012C4C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x10012C10: nop
    
            goto L_10012C4C;
    }
    // 0x10012C10: nop

L_10012C14:
    // 0x10012C14: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x10012C18: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x10012C1C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x10012C20: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x10012C24: addu        $t6, $a0, $t2
    ctx->r14 = ADD32(ctx->r4, ctx->r10);
    // 0x10012C28: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x10012C2C: sw          $t5, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r13;
    // 0x10012C30: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x10012C34: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x10012C38: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x10012C3C: lh          $t9, 0xE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE);
    // 0x10012C40: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x10012C44: bne         $at, $zero, L_10012C14
    if (ctx->r1 != 0) {
        // 0x10012C48: nop
    
            goto L_10012C14;
    }
    // 0x10012C48: nop

L_10012C4C:
    // 0x10012C4C: b           L_10012C54
    // 0x10012C50: nop

        goto L_10012C54;
    // 0x10012C50: nop

L_10012C54:
    // 0x10012C54: jr          $ra
    // 0x10012C58: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x10012C58: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15141564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141564: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15141568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514156C: lwc1        $f12, 0x178($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X178);
    // 0x15141570: jal         0x15047D60
    // 0x15141574: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15141574: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x15141578: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1514157C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15141580: addiu       $v1, $a0, 0x170
    ctx->r3 = ADD32(ctx->r4, 0X170);
    // 0x15141584: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15141588: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514158C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15141590: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15141594: swc1        $f10, 0x158($a0)
    MEM_W(0X158, ctx->r4) = ctx->f10.u32l;
    // 0x15141598: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1514159C: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151415A0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151415A4: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151415A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151415AC: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x151415B0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151415B4: jal         0x15144B68
    // 0x151415B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x151415B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x151415BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x151415C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151415C4: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x151415C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151415CC: jr          $ra
    // 0x151415D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151415D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15194408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194408: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1519440C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15194410: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15194414: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15194418: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x1519441C: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x15194420: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x15194424: beq         $at, $zero, L_15194574
    if (ctx->r1 == 0) {
        // 0x15194428: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15194574;
    }
    // 0x15194428: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1519442C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15194430: addu        $at, $at, $t6
    gpr jr_addend_15194438 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15194434: lw          $t6, -0x7D80($at)
    ctx->r14 = ADD32(ctx->r1, -0X7D80);
    // 0x15194438: jr          $t6
    // 0x1519443C: nop

    switch (jr_addend_15194438 >> 2) {
        case 0: goto L_15194440; break;
        case 1: goto L_15194440; break;
        case 2: goto L_15194440; break;
        case 3: goto L_15194440; break;
        case 4: goto L_15194440; break;
        default: switch_error(__func__, 0x15194438, 0x800A8280);
    }
    // 0x1519443C: nop

L_15194440:
    // 0x15194440: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x15194444: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15194448: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1519444C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x15194450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15194454: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x15194458: jal         0x151AE7B0
    // 0x1519445C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151AE7B0(rdram, ctx);
        goto after_0;
    // 0x1519445C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x15194460: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15194464: jal         0x1504715C
    // 0x15194468: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x15194468: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x1519446C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15194470: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15194474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15194478: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x1519447C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15194480: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15194484: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15194488: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519448C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15194490: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15194494: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15194498: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x1519449C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151944A0: lwc1        $f6, -0x7D6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7D6C);
    // 0x151944A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151944A8: lwc1        $f8, -0x7D68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7D68);
    // 0x151944AC: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x151944B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151944B4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151944B8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x151944BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151944C0: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x151944C4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x151944C8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151944CC: addiu       $t1, $zero, -0x3F
    ctx->r9 = ADD32(0, -0X3F);
    // 0x151944D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151944D4: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x151944D8: lwc1        $f18, -0x7D64($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7D64);
    // 0x151944DC: sh          $t8, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r24;
    // 0x151944E0: sh          $t9, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r25;
    // 0x151944E4: sh          $t0, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r8;
    // 0x151944E8: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x151944EC: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x151944F0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151944F4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151944F8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x151944FC: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x15194500: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x15194504: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x15194508: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x1519450C: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x15194510: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15194514: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
    // 0x15194518: sh          $t2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r10;
    // 0x1519451C: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
    // 0x15194520: sh          $t4, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r12;
    // 0x15194524: sh          $t5, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r13;
    // 0x15194528: sh          $t6, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r14;
    // 0x1519452C: sh          $t7, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r15;
    // 0x15194530: sh          $t8, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r24;
    // 0x15194534: sh          $t9, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r25;
    // 0x15194538: sh          $t0, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r8;
    // 0x1519453C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x15194540: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x15194544: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15194548: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x1519454C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x15194550: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15194554: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15194558: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x1519455C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x15194560: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x15194564: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x15194568: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x1519456C: jal         0x15153F18
    // 0x15194570: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    func_15153F18(rdram, ctx);
        goto after_2;
    // 0x15194570: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    after_2:
L_15194574:
    // 0x15194574: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15194578: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1519457C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x15194580: jr          $ra
    // 0x15194584: nop

    return;
    return;
    // 0x15194584: nop

;}
RECOMP_FUNC void func_1506DCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DCA4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DCA8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506DCAC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506DCB0: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DCB4: sw          $t6, 0x2E8($t7)
    MEM_W(0X2E8, ctx->r15) = ctx->r14;
    // 0x1506DCB8: jr          $ra
    // 0x1506DCBC: nop

    return;
    return;
    // 0x1506DCBC: nop

;}
RECOMP_FUNC void func_1506FEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FEF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FEFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FF00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FF04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FF08: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FF0C: jal         0x151AB920
    // 0x1506FF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151AB920(rdram, ctx);
        goto after_0;
    // 0x1506FF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1506FF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FF18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FF1C: jr          $ra
    // 0x1506FF20: nop

    return;
    return;
    // 0x1506FF20: nop

;}
RECOMP_FUNC void func_150A7C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7C10: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150A7C14: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150A7C18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150A7C1C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x150A7C20: sd          $zero, 0x0($a0)
    SD(0, 0X0, ctx->r4);
    // 0x150A7C24: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7C28: sd          $zero, 0x8($a0)
    SD(0, 0X8, ctx->r4);
    // 0x150A7C2C: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7C30: sd          $zero, 0x10($a0)
    SD(0, 0X10, ctx->r4);
    // 0x150A7C34: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150A7C38: sd          $zero, 0x18($a0)
    SD(0, 0X18, ctx->r4);
    // 0x150A7C3C: srl         $t1, $a1, 16
    ctx->r9 = S32(U32(ctx->r5) >> 16);
    // 0x150A7C40: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x150A7C44: sd          $zero, 0x20($a0)
    SD(0, 0X20, ctx->r4);
    // 0x150A7C48: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7C4C: sd          $zero, 0x28($a0)
    SD(0, 0X28, ctx->r4);
    // 0x150A7C50: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7C54: sd          $zero, 0x30($a0)
    SD(0, 0X30, ctx->r4);
    // 0x150A7C58: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150A7C5C: sd          $zero, 0x38($a0)
    SD(0, 0X38, ctx->r4);
    // 0x150A7C60: srl         $t2, $a2, 16
    ctx->r10 = S32(U32(ctx->r6) >> 16);
    // 0x150A7C64: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x150A7C68: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x150A7C6C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7C70: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
    // 0x150A7C74: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7C78: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x150A7C7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150A7C80: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    // 0x150A7C84: srl         $t3, $a3, 16
    ctx->r11 = S32(U32(ctx->r7) >> 16);
    // 0x150A7C88: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x150A7C8C: sh          $t2, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r10;
    // 0x150A7C90: sh          $t3, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r11;
    // 0x150A7C94: sh          $a1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r5;
    // 0x150A7C98: sh          $a2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r6;
    // 0x150A7C9C: jr          $ra
    // 0x150A7CA0: sh          $a3, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r7;
    return;
    return;
    // 0x150A7CA0: sh          $a3, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_1511898C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511898C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15118990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15118994: jal         0x151189AC
    // 0x15118998: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151189AC(rdram, ctx);
        goto after_0;
    // 0x15118998: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x1511899C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151189A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151189A4: jr          $ra
    // 0x151189A8: nop

    return;
    return;
    // 0x151189A8: nop

;}
RECOMP_FUNC void func_1506E7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E7FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E804: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506E808: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506E80C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506E810: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1506E814: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1506E818: nop

    // 0x1506E81C: bc1fl       L_1506E83C
    if (!c1cs) {
        // 0x1506E820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506E83C;
    }
    goto skip_0;
    // 0x1506E820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506E824: lbu         $t6, 0x107($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X107);
    // 0x1506E828: bnel        $t6, $zero, L_1506E83C
    if (ctx->r14 != 0) {
        // 0x1506E82C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506E83C;
    }
    goto skip_1;
    // 0x1506E82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1506E830: jal         0x1506E5FC
    // 0x1506E834: nop

    func_1506E5FC(rdram, ctx);
        goto after_0;
    // 0x1506E834: nop

    after_0:
    // 0x1506E838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506E83C:
    // 0x1506E83C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E840: jr          $ra
    // 0x1506E844: nop

    return;
    return;
    // 0x1506E844: nop

;}
RECOMP_FUNC void func_150B768C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B768C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B7690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B7694: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    // 0x150B7698: jal         0x150B76BC
    // 0x150B769C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_150B76BC(rdram, ctx);
        goto after_0;
    // 0x150B769C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x150B76A0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B76A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B76A8: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
    // 0x150B76AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B76B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B76B4: jr          $ra
    // 0x150B76B8: nop

    return;
    return;
    // 0x150B76B8: nop

;}
RECOMP_FUNC void func_1507A3B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A3B4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507A3B8: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507A3BC: lbu         $t6, 0xA8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA8);
    // 0x1507A3C0: sb          $t6, 0x222($v0)
    MEM_B(0X222, ctx->r2) = ctx->r14;
    // 0x1507A3C4: jr          $ra
    // 0x1507A3C8: nop

    return;
    return;
    // 0x1507A3C8: nop

;}
RECOMP_FUNC void func_15192800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15192800: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15192804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15192808: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1519280C: beq         $a0, $zero, L_151928A0
    if (ctx->r4 == 0) {
        // 0x15192810: addiu       $a1, $sp, 0x2C
        ctx->r5 = ADD32(ctx->r29, 0X2C);
            goto L_151928A0;
    }
    // 0x15192810: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x15192814: jal         0x151928B0
    // 0x15192818: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_151928B0(rdram, ctx);
        goto after_0;
    // 0x15192818: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x1519281C: beq         $v0, $zero, L_151928A0
    if (ctx->r2 == 0) {
        // 0x15192820: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_151928A0;
    }
    // 0x15192820: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15192824: jal         0x1510F8CC
    // 0x15192828: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_1510F8CC(rdram, ctx);
        goto after_1;
    // 0x15192828: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x1519282C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15192830: beq         $v0, $at, L_1519284C
    if (ctx->r2 == ctx->r1) {
        // 0x15192834: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_1519284C;
    }
    // 0x15192834: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x15192838: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1519283C: beql        $v0, $at, L_15192874
    if (ctx->r2 == ctx->r1) {
        // 0x15192840: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_15192874;
    }
    goto skip_0;
    // 0x15192840: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x15192844: b           L_15192874
    // 0x15192848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15192874;
    // 0x15192848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519284C:
    // 0x1519284C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15192850: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x15192854: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x15192858: bne         $t7, $at, L_15192868
    if (ctx->r15 != ctx->r1) {
        // 0x1519285C: nop
    
            goto L_15192868;
    }
    // 0x1519285C: nop

    // 0x15192860: b           L_15192874
    // 0x15192864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15192874;
    // 0x15192864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15192868:
    // 0x15192868: b           L_15192874
    // 0x1519286C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15192874;
    // 0x1519286C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15192870: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_15192874:
    // 0x15192874: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15192878: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1519287C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15192880: lw          $t0, -0x7A0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7A0);
    // 0x15192884: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x15192888: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1519288C: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x15192890: beql        $v1, $zero, L_151928A4
    if (ctx->r3 == 0) {
        // 0x15192894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151928A4;
    }
    goto skip_1;
    // 0x15192894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15192898: jalr        $v1
    // 0x1519289C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x1519289C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
L_151928A0:
    // 0x151928A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151928A4:
    // 0x151928A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151928A8: jr          $ra
    // 0x151928AC: nop

    return;
    return;
    // 0x151928AC: nop

;}
RECOMP_FUNC void func_15145A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145A0C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15145A10: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x15145A14: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15145A18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15145A1C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x15145A20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15145A24: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15145A28: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15145A2C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x15145A30: nop

    // 0x15145A34: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15145A38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15145A3C: lwc1        $f18, 0x548C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X548C);
    // 0x15145A40: mul.s       $f0, $f18, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15145A44: nop

    // 0x15145A48: jr          $ra
    // 0x15145A4C: nop

    return;
    return;
    // 0x15145A4C: nop

;}
RECOMP_FUNC void func_15008870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008870: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15008874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15008878: bne         $a0, $at, L_1500888C
    if (ctx->r4 != ctx->r1) {
        // 0x1500887C: addiu       $v1, $zero, 0x68
        ctx->r3 = ADD32(0, 0X68);
            goto L_1500888C;
    }
    // 0x1500887C: addiu       $v1, $zero, 0x68
    ctx->r3 = ADD32(0, 0X68);
    // 0x15008880: addiu       $v1, $zero, 0x65
    ctx->r3 = ADD32(0, 0X65);
    // 0x15008884: b           L_1500889C
    // 0x15008888: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
        goto L_1500889C;
    // 0x15008888: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_1500888C:
    // 0x1500888C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15008890: bnel        $a0, $t2, L_150088A0
    if (ctx->r4 != ctx->r10) {
        // 0x15008894: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150088A0;
    }
    goto skip_0;
    // 0x15008894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x15008898: addiu       $v0, $zero, 0x65
    ctx->r2 = ADD32(0, 0X65);
L_1500889C:
    // 0x1500889C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150088A0:
    // 0x150088A0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_150088A4:
    // 0x150088A4: beq         $at, $zero, L_1500891C
    if (ctx->r1 == 0) {
        // 0x150088A8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1500891C;
    }
    // 0x150088A8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150088AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150088B0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150088B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150088B8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150088BC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150088C0: subu        $t1, $v1, $v0
    ctx->r9 = SUB32(ctx->r3, ctx->r2);
    // 0x150088C4: andi        $t8, $t1, 0x3
    ctx->r24 = ctx->r9 & 0X3;
    // 0x150088C8: addiu       $t7, $t7, -0x31B0
    ctx->r15 = ADD32(ctx->r15, -0X31B0);
    // 0x150088CC: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x150088D0: beq         $t8, $zero, L_150088F8
    if (ctx->r24 == 0) {
        // 0x150088D4: addu        $a2, $t6, $t7
        ctx->r6 = ADD32(ctx->r14, ctx->r15);
            goto L_150088F8;
    }
    // 0x150088D4: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x150088D8: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x150088DC: addu        $a3, $a2, $t9
    ctx->r7 = ADD32(ctx->r6, ctx->r25);
    // 0x150088E0: addu        $t0, $t8, $v0
    ctx->r8 = ADD32(ctx->r24, ctx->r2);
L_150088E4:
    // 0x150088E4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x150088E8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x150088EC: bne         $t0, $a1, L_150088E4
    if (ctx->r8 != ctx->r5) {
        // 0x150088F0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_150088E4;
    }
    // 0x150088F0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x150088F4: beq         $a1, $v1, L_1500891C
    if (ctx->r5 == ctx->r3) {
        // 0x150088F8: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_1500891C;
    }
L_150088F8:
    // 0x150088F8: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x150088FC: addu        $a3, $a2, $t3
    ctx->r7 = ADD32(ctx->r6, ctx->r11);
L_15008900:
    // 0x15008900: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15008904: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15008908: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x1500890C: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x15008910: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x15008914: bne         $a1, $v1, L_15008900
    if (ctx->r5 != ctx->r3) {
        // 0x15008918: sw          $zero, -0x10($a3)
        MEM_W(-0X10, ctx->r7) = 0;
            goto L_15008900;
    }
    // 0x15008918: sw          $zero, -0x10($a3)
    MEM_W(-0X10, ctx->r7) = 0;
L_1500891C:
    // 0x1500891C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15008920: bnel        $a0, $t2, L_150088A4
    if (ctx->r4 != ctx->r10) {
        // 0x15008924: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_150088A4;
    }
    goto skip_1;
    // 0x15008924: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x15008928: jr          $ra
    // 0x1500892C: nop

    return;
    return;
    // 0x1500892C: nop

;}
RECOMP_FUNC void n_alSynSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001CB40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001CB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001CB48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001CB4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001CB50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001CB54: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001CB58: beq         $t7, $zero, L_1001CBD8
    if (ctx->r15 == 0) {
        // 0x1001CB5C: nop
    
            goto L_1001CBD8;
    }
    // 0x1001CB5C: nop

    // 0x1001CB60: jal         0x100196E4
    // 0x1001CB64: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001CB64: nop

    after_0:
    // 0x1001CB68: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001CB6C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CB70: bne         $t8, $zero, L_1001CB80
    if (ctx->r24 != 0) {
        // 0x1001CB74: nop
    
            goto L_1001CB80;
    }
    // 0x1001CB74: nop

    // 0x1001CB78: b           L_1001CBE0
    // 0x1001CB7C: nop

        goto L_1001CBE0;
    // 0x1001CB7C: nop

L_1001CB80:
    // 0x1001CB80: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001CB84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001CB88: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001CB8C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001CB90: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CB94: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x1001CB98: lw          $t3, 0x90($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X90);
    // 0x1001CB9C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x1001CBA0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001CBA4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CBA8: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x1001CBAC: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001CBB0: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x1001CBB4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CBB8: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x1001CBBC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CBC0: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x1001CBC4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001CBC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001CBCC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CBD0: jal         0x10020978
    // 0x1001CBD4: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_1;
    // 0x1001CBD4: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_1:
L_1001CBD8:
    // 0x1001CBD8: b           L_1001CBE0
    // 0x1001CBDC: nop

        goto L_1001CBE0;
    // 0x1001CBDC: nop

L_1001CBE0:
    // 0x1001CBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001CBE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001CBE8: jr          $ra
    // 0x1001CBEC: nop

    return;
    return;
    // 0x1001CBEC: nop

;}
RECOMP_FUNC void func_15113E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15113E54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15113E58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15113E5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15113E60: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15113E64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15113E68: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15113E6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15113E70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15113E74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15113E78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15113E7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15113E80: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15113E84: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15113E88: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15113E8C: lw          $t7, -0x4068($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4068);
    // 0x15113E90: lw          $t6, -0x4110($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4110);
    // 0x15113E94: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15113E98: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15113E9C: subu        $s2, $t6, $t7
    ctx->r18 = SUB32(ctx->r14, ctx->r15);
    // 0x15113EA0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15113EA4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15113EA8: blez        $s2, L_15113F00
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15113EAC: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_15113F00;
    }
    // 0x15113EAC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x15113EB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15113EB4:
    // 0x15113EB4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15113EB8: lw          $t8, -0x410C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X410C);
    // 0x15113EBC: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x15113EC0: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x15113EC4: lbu         $t9, 0x6F($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6F);
    // 0x15113EC8: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x15113ECC: bnel        $t0, $at, L_15113EF4
    if (ctx->r8 != ctx->r1) {
        // 0x15113ED0: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_15113EF4;
    }
    goto skip_0;
    // 0x15113ED0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    skip_0:
    // 0x15113ED4: lbu         $t1, 0x6E($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X6E);
    // 0x15113ED8: bnel        $t1, $zero, L_15113EF4
    if (ctx->r9 != 0) {
        // 0x15113EDC: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_15113EF4;
    }
    goto skip_1;
    // 0x15113EDC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    skip_1:
    // 0x15113EE0: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x15113EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15113EE8: jalr        $t9
    // 0x15113EEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15113EEC: nop

    after_0:
    // 0x15113EF0: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_15113EF4:
    // 0x15113EF4: bne         $fp, $s2, L_15113EB4
    if (ctx->r30 != ctx->r18) {
        // 0x15113EF8: addiu       $s1, $s1, 0xA0
        ctx->r17 = ADD32(ctx->r17, 0XA0);
            goto L_15113EB4;
    }
    // 0x15113EF8: addiu       $s1, $s1, 0xA0
    ctx->r17 = ADD32(ctx->r17, 0XA0);
    // 0x15113EFC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_15113F00:
    // 0x15113F00: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15113F04: lw          $v0, 0x7380($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7380);
    // 0x15113F08: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15113F0C: blezl       $v0, L_15114024
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15113F10: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15114024;
    }
    goto skip_2;
    // 0x15113F10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x15113F14: lw          $v1, 0x23C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X23C0);
    // 0x15113F18: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15113F1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15113F20: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_15113F24:
    // 0x15113F24: lhu         $t2, 0x8($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X8);
    // 0x15113F28: sra         $t3, $t2, 12
    ctx->r11 = S32(SIGNED(ctx->r10) >> 12);
    // 0x15113F2C: bnel        $a2, $t3, L_15114010
    if (ctx->r6 != ctx->r11) {
        // 0x15113F30: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_15114010;
    }
    goto skip_3;
    // 0x15113F30: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    skip_3:
    // 0x15113F34: lhu         $a0, 0x2($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X2);
    // 0x15113F38: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15113F3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15113F40: blez        $a0, L_1511400C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15113F44: sll         $t4, $fp, 2
        ctx->r12 = S32(ctx->r30 << 2);
            goto L_1511400C;
    }
L_15113F44:
    // 0x15113F44: sll         $t4, $fp, 2
    ctx->r12 = S32(ctx->r30 << 2);
    // 0x15113F48: subu        $t4, $t4, $fp
    ctx->r12 = SUB32(ctx->r12, ctx->r30);
    // 0x15113F4C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x15113F50: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x15113F54: addu        $t6, $t5, $s2
    ctx->r14 = ADD32(ctx->r13, ctx->r18);
    // 0x15113F58: lhu         $v0, 0x8($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8);
    // 0x15113F5C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15113F60: sra         $t7, $v0, 12
    ctx->r15 = S32(SIGNED(ctx->r2) >> 12);
    // 0x15113F64: bne         $a2, $t7, L_15113FF4
    if (ctx->r6 != ctx->r15) {
        // 0x15113F68: andi        $t8, $v0, 0xFFF
        ctx->r24 = ctx->r2 & 0XFFF;
            goto L_15113FF4;
    }
    // 0x15113F68: andi        $t8, $v0, 0xFFF
    ctx->r24 = ctx->r2 & 0XFFF;
    // 0x15113F6C: lw          $t1, -0x410C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X410C);
    // 0x15113F70: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x15113F74: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x15113F78: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x15113F7C: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x15113F80: lbu         $t9, 0x6F($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6F);
    // 0x15113F84: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x15113F88: andi        $t2, $t9, 0x40
    ctx->r10 = ctx->r25 & 0X40;
    // 0x15113F8C: bne         $t2, $at, L_15113FDC
    if (ctx->r10 != ctx->r1) {
        // 0x15113F90: nop
    
            goto L_15113FDC;
    }
    // 0x15113F90: nop

    // 0x15113F94: lbu         $t3, 0x6E($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X6E);
    // 0x15113F98: bne         $t3, $zero, L_15113FDC
    if (ctx->r11 != 0) {
        // 0x15113F9C: nop
    
            goto L_15113FDC;
    }
    // 0x15113F9C: nop

    // 0x15113FA0: beql        $s1, $zero, L_15113FBC
    if (ctx->r17 == 0) {
        // 0x15113FA4: lw          $t9, 0x38($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X38);
            goto L_15113FBC;
    }
    goto skip_4;
    // 0x15113FA4: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    skip_4:
    // 0x15113FA8: sh          $s3, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r19;
    // 0x15113FAC: sh          $s4, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r20;
    // 0x15113FB0: sh          $s5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r21;
    // 0x15113FB4: sw          $s6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r22;
    // 0x15113FB8: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
L_15113FBC:
    // 0x15113FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15113FC0: jalr        $t9
    // 0x15113FC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15113FC4: nop

    after_1:
    // 0x15113FC8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15113FCC: lw          $v1, 0x23C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X23C0);
    // 0x15113FD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15113FD4: addu        $a1, $v1, $s7
    ctx->r5 = ADD32(ctx->r3, ctx->r23);
    // 0x15113FD8: lhu         $a0, 0x2($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X2);
L_15113FDC:
    // 0x15113FDC: bnel        $s1, $zero, L_15113FF8
    if (ctx->r17 != 0) {
        // 0x15113FE0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15113FF8;
    }
    goto skip_5;
    // 0x15113FE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x15113FE4: lh          $s3, 0x5A($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X5A);
    // 0x15113FE8: lh          $s4, 0x5C($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X5C);
    // 0x15113FEC: lh          $s5, 0x5E($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X5E);
    // 0x15113FF0: lw          $s6, 0x80($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X80);
L_15113FF4:
    // 0x15113FF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15113FF8:
    // 0x15113FF8: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15113FFC: bne         $at, $zero, L_15113F44
    if (ctx->r1 != 0) {
        // 0x15114000: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_15113F44;
    }
    // 0x15114000: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x15114004: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15114008: lw          $v0, 0x7380($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7380);
L_1511400C:
    // 0x1511400C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_15114010:
    // 0x15114010: slt         $at, $fp, $v0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15114014: addiu       $s7, $s7, 0x18
    ctx->r23 = ADD32(ctx->r23, 0X18);
    // 0x15114018: bne         $at, $zero, L_15113F24
    if (ctx->r1 != 0) {
        // 0x1511401C: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_15113F24;
    }
    // 0x1511401C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x15114020: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15114024:
    // 0x15114024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15114028: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1511402C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15114030: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15114034: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15114038: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1511403C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15114040: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15114044: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15114048: jr          $ra
    // 0x1511404C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1511404C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15073CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15073CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073CC0: jal         0x1505F0AC
    // 0x15073CC4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    func_1505F0AC(rdram, ctx);
        goto after_0;
    // 0x15073CC4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    after_0:
    // 0x15073CC8: beql        $v0, $zero, L_15073CE8
    if (ctx->r2 == 0) {
        // 0x15073CCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15073CE8;
    }
    goto skip_0;
    // 0x15073CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15073CD0: lhu         $t6, 0x244($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X244);
    // 0x15073CD4: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x15073CD8: bnel        $t6, $at, L_15073CE8
    if (ctx->r14 != ctx->r1) {
        // 0x15073CDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15073CE8;
    }
    goto skip_1;
    // 0x15073CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15073CE0: sh          $zero, 0x21C($v0)
    MEM_H(0X21C, ctx->r2) = 0;
    // 0x15073CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15073CE8:
    // 0x15073CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15073CEC: jr          $ra
    // 0x15073CF0: nop

    return;
    return;
    // 0x15073CF0: nop

;}
RECOMP_FUNC void func_1001CBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001CBF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1001CBF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001CBF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1001CBFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1001CC00: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x1001CC04: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x1001CC08: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1001CC0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1001CC10: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1001CC14: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1001CC18: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1001CC1C: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x1001CC20: nop

    // 0x1001CC24: bc1f        L_1001CC40
    if (!c1cs) {
        // 0x1001CC28: nop
    
            goto L_1001CC40;
    }
    // 0x1001CC28: nop

    // 0x1001CC2C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1001CC30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001CC34: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1001CC38: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1001CC3C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_1001CC40:
    // 0x1001CC40: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001CC44: lwc1        $f4, -0x3890($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3890);
    // 0x1001CC48: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1001CC4C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1001CC50: mul.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1001CC54: jal         0x150484A0
    // 0x1001CC58: nop

    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x1001CC58: nop

    after_0:
    // 0x1001CC5C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1001CC60: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1001CC64: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1001CC68: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x1001CC6C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001CC70: lwc1        $f6, -0x388C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X388C);
    // 0x1001CC74: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1001CC78: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1001CC7C: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1001CC80: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1001CC84: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1001CC88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001CC8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001CC90: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1001CC94: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1001CC98: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1001CC9C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1001CCA0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1001CCA4: div.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1001CCA8: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x1001CCAC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001CCB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001CCB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001CCB8: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x1001CCBC: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1001CCC0: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x1001CCC4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001CCC8: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x1001CCCC: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x1001CCD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001CCD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1001CCD8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1001CCDC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001CCE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001CCE4: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1001CCE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001CCEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001CCF0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1001CCF4: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1001CCF8: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1001CCFC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1001CD00: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1001CD04: div.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1001CD08: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x1001CD0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001CD10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001CD14: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1001CD18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001CD1C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1001CD20: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1001CD24: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1001CD28: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1001CD2C: sub.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x1001CD30: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1001CD34: div.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x1001CD38: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x1001CD3C: b           L_1001CD44
    // 0x1001CD40: nop

        goto L_1001CD44;
    // 0x1001CD40: nop

L_1001CD44:
    // 0x1001CD44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001CD48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1001CD4C: jr          $ra
    // 0x1001CD50: nop

    return;
    return;
    // 0x1001CD50: nop

;}
RECOMP_FUNC void func_15077404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077404: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077408: lbu         $t6, 0x1893($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1893);
    // 0x1507740C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15077410: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15077414: beq         $t6, $zero, L_150774A0
    if (ctx->r14 == 0) {
        // 0x15077418: lui         $t5, 0x800D
        ctx->r13 = S32(0X800D << 16);
            goto L_150774A0;
    }
    // 0x15077418: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1507741C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15077420: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15077424: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15077428: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507742C: lbu         $t3, 0x1891($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1891);
    // 0x15077430: lbu         $t7, 0x246($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X246);
    // 0x15077434: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15077438: lbu         $t5, 0x1892($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1892);
    // 0x1507743C: andi        $t8, $t7, 0x1F
    ctx->r24 = ctx->r15 & 0X1F;
    // 0x15077440: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x15077444: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15077448: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x1507744C: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15077450: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x15077454: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15077458: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1507745C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15077460: lbu         $t0, 0x249($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X249);
    // 0x15077464: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x15077468: mflo        $t9
    ctx->r25 = lo;
    // 0x1507746C: addu        $v0, $t2, $t9
    ctx->r2 = ADD32(ctx->r10, ctx->r25);
    // 0x15077470: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x15077474: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15077478: bgezl       $v0, L_15077488
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1507747C: sra         $t2, $v0, 8
        ctx->r10 = S32(SIGNED(ctx->r2) >> 8);
            goto L_15077488;
    }
    goto skip_0;
    // 0x1507747C: sra         $t2, $v0, 8
    ctx->r10 = S32(SIGNED(ctx->r2) >> 8);
    skip_0:
    // 0x15077480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15077484: sra         $t2, $v0, 8
    ctx->r10 = S32(SIGNED(ctx->r2) >> 8);
L_15077488:
    // 0x15077488: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x1507748C: sb          $t3, 0x246($v1)
    MEM_B(0X246, ctx->r3) = ctx->r11;
    // 0x15077490: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x15077494: sb          $v0, 0x249($t4)
    MEM_B(0X249, ctx->r12) = ctx->r2;
    // 0x15077498: jr          $ra
    // 0x1507749C: nop

    return;
    return;
    // 0x1507749C: nop

L_150774A0:
    // 0x150774A0: lbu         $t5, 0x1890($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1890);
    // 0x150774A4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x150774A8: sb          $t5, 0x246($t6)
    MEM_B(0X246, ctx->r14) = ctx->r13;
    // 0x150774AC: jr          $ra
    // 0x150774B0: nop

    return;
    return;
    // 0x150774B0: nop

;}
RECOMP_FUNC void func_15136698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15136698: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1513669C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151366A0: swc1        $f12, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f12.u32l;
    // 0x151366A4: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x151366A8: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x151366AC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151366B0: addiu       $t7, $t7, -0x6454
    ctx->r15 = ADD32(ctx->r15, -0X6454);
    // 0x151366B4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151366B8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151366BC: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x151366C0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151366C4: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151366C8: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x151366CC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151366D0: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x151366D4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151366D8: jal         0x150ADA20
    // 0x151366DC: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151366DC: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x151366E0: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x151366E4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151366E8: lbu         $t4, 0xF7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XF7);
    // 0x151366EC: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x151366F0: lw          $t3, 0x68($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X68);
    // 0x151366F4: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151366F8: beq         $t4, $zero, L_15136708
    if (ctx->r12 == 0) {
        // 0x151366FC: sb          $t3, 0x7C($sp)
        MEM_B(0X7C, ctx->r29) = ctx->r11;
            goto L_15136708;
    }
    // 0x151366FC: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    // 0x15136700: b           L_1513670C
    // 0x15136704: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1513670C;
    // 0x15136704: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15136708:
    // 0x15136708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1513670C:
    // 0x1513670C: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x15136710: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15136714: addiu       $t5, $v0, 0x300
    ctx->r13 = ADD32(ctx->r2, 0X300);
    // 0x15136718: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1513671C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15136720: sh          $t5, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r13;
    // 0x15136724: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x15136728: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x1513672C: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x15136730: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x15136734: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x15136738: sb          $t9, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r25;
    // 0x1513673C: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x15136740: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x15136744: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15136748: lh          $v1, 0xEA($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XEA);
    // 0x1513674C: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
    // 0x15136750: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15136754: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x15136758: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1513675C: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x15136760: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x15136764: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x15136768: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1513676C: addiu       $t3, $v1, 0x20
    ctx->r11 = ADD32(ctx->r3, 0X20);
    // 0x15136770: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15136774: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15136778: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x1513677C: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x15136780: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x15136784: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    // 0x15136788: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x1513678C: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x15136790: bne         $v1, $at, L_151367A0
    if (ctx->r3 != ctx->r1) {
        // 0x15136794: swc1        $f0, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
            goto L_151367A0;
    }
    // 0x15136794: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x15136798: b           L_151367A8
    // 0x1513679C: sh          $t2, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r10;
        goto L_151367A8;
    // 0x1513679C: sh          $t2, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r10;
L_151367A0:
    // 0x151367A0: sh          $t3, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r11;
    // 0x151367A4: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
L_151367A8:
    // 0x151367A8: lbu         $t0, 0xFB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XFB);
    // 0x151367AC: lbu         $t5, 0xE3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE3);
    // 0x151367B0: lbu         $t9, 0xE7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE7);
    // 0x151367B4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151367B8: sb          $t5, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r13;
    // 0x151367BC: beq         $t0, $zero, L_151367D4
    if (ctx->r8 == 0) {
        // 0x151367C0: sb          $t9, 0xC1($sp)
        MEM_B(0XC1, ctx->r29) = ctx->r25;
            goto L_151367D4;
    }
    // 0x151367C0: sb          $t9, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r25;
    // 0x151367C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151367C8: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x151367CC: b           L_151367DC
    // 0x151367D0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
        goto L_151367DC;
    // 0x151367D0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
L_151367D4:
    // 0x151367D4: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x151367D8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
L_151367DC:
    // 0x151367DC: jal         0x150ADA20
    // 0x151367E0: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151367E0: nop

    after_1:
    // 0x151367E4: jal         0x150ADA20
    // 0x151367E8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151367E8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_2:
    // 0x151367EC: jal         0x150ADA20
    // 0x151367F0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151367F0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_3:
    // 0x151367F4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x151367F8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x151367FC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15136800: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15136804: andi        $t1, $t6, 0x1
    ctx->r9 = ctx->r14 & 0X1;
    // 0x15136808: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x1513680C: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x15136810: lbu         $t6, 0xFF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XFF);
    // 0x15136814: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x15136818: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x1513681C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x15136820: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x15136824: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x15136828: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1513682C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x15136830: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15136834: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15136838: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x1513683C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15136840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15136844: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    // 0x15136848: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513684C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15136850: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15136854: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x15136858: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x1513685C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x15136860: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x15136864: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x15136868: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x1513686C: jal         0x1513D594
    // 0x15136870: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    func_1513D594(rdram, ctx);
        goto after_4;
    // 0x15136870: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_4:
    // 0x15136874: beq         $v0, $zero, L_15136894
    if (ctx->r2 == 0) {
        // 0x15136878: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15136894;
    }
    // 0x15136878: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1513687C: addiu       $a0, $v0, 0x128
    ctx->r4 = ADD32(ctx->r2, 0X128);
    // 0x15136880: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x15136884: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15136888: jal         0x10022EC0
    // 0x1513688C: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x1513688C: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    after_5:
    // 0x15136890: lw          $v1, 0xD4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XD4);
L_15136894:
    // 0x15136894: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15136898: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1513689C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x151368A0: jr          $ra
    // 0x151368A4: nop

    return;
    return;
    // 0x151368A4: nop

;}
RECOMP_FUNC void func_150E1060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E1060: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150E1064: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150E1068: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150E106C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150E1070: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150E1074: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x150E1078: bgez        $a3, L_150E1088
    if (SIGNED(ctx->r7) >= 0) {
        // 0x150E107C: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_150E1088;
    }
    // 0x150E107C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x150E1080: b           L_150E113C
    // 0x150E1084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E113C;
    // 0x150E1084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E1088:
    // 0x150E1088: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x150E108C: bne         $at, $zero, L_150E109C
    if (ctx->r1 != 0) {
        // 0x150E1090: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_150E109C;
    }
    // 0x150E1090: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150E1094: b           L_150E113C
    // 0x150E1098: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E113C;
    // 0x150E1098: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E109C:
    // 0x150E109C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x150E10A0: sb          $a3, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r7;
    // 0x150E10A4: jal         0x151149AC
    // 0x150E10A8: lbu         $a0, 0xFE0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XFE0);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150E10A8: lbu         $a0, 0xFE0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XFE0);
    after_0:
    // 0x150E10AC: bne         $v0, $zero, L_150E10BC
    if (ctx->r2 != 0) {
        // 0x150E10B0: sw          $v0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r2;
            goto L_150E10BC;
    }
    // 0x150E10B0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x150E10B4: b           L_150E113C
    // 0x150E10B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E113C;
    // 0x150E10B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E10BC:
    // 0x150E10BC: jal         0x1510F800
    // 0x150E10C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_1;
    // 0x150E10C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x150E10C4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x150E10C8: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    // 0x150E10CC: jal         0x1510FD20
    // 0x150E10D0: lh          $a1, 0x14($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X14);
    func_1510FD20(rdram, ctx);
        goto after_2;
    // 0x150E10D0: lh          $a1, 0x14($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X14);
    after_2:
    // 0x150E10D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150E10D8: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x150E10DC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x150E10E0: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x150E10E4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150E10E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x150E10EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150E10F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150E10F4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150E10F8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150E10FC: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x150E1100: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150E1104: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E1108: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150E110C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150E1110: jal         0x15149130
    // 0x150E1114: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_15149130(rdram, ctx);
        goto after_3;
    // 0x150E1114: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_3:
    // 0x150E1118: beq         $v0, $zero, L_150E1138
    if (ctx->r2 == 0) {
        // 0x150E111C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150E1138;
    }
    // 0x150E111C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150E1120: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150E1124: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150E1128: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150E112C: jal         0x10022EC0
    // 0x150E1130: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x150E1130: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_4:
    // 0x150E1134: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_150E1138:
    // 0x150E1138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150E113C:
    // 0x150E113C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150E1140: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150E1144: jr          $ra
    // 0x150E1148: nop

    return;
    return;
    // 0x150E1148: nop

;}
RECOMP_FUNC void func_1000B1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000B1FC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1000B200: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000B204: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000B208: addiu       $v0, $v0, 0x17BC
    ctx->r2 = ADD32(ctx->r2, 0X17BC);
    // 0x1000B20C: addiu       $v1, $v1, 0x17B0
    ctx->r3 = ADD32(ctx->r3, 0X17B0);
    // 0x1000B210: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_1000B214:
    // 0x1000B214: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1000B218: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x1000B21C: beq         $a0, $zero, L_1000B238
    if (ctx->r4 == 0) {
        // 0x1000B220: nop
    
            goto L_1000B238;
    }
    // 0x1000B220: nop

    // 0x1000B224: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x1000B228: bne         $a1, $t6, L_1000B238
    if (ctx->r5 != ctx->r14) {
        // 0x1000B22C: nop
    
            goto L_1000B238;
    }
    // 0x1000B22C: nop

    // 0x1000B230: jr          $ra
    // 0x1000B234: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x1000B234: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1000B238:
    // 0x1000B238: bnel        $at, $zero, L_1000B214
    if (ctx->r1 != 0) {
        // 0x1000B23C: lw          $a0, 0x0($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X0);
            goto L_1000B214;
    }
    goto skip_0;
    // 0x1000B23C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x1000B240: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000B244: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000B248: addiu       $v0, $v0, 0x17BC
    ctx->r2 = ADD32(ctx->r2, 0X17BC);
    // 0x1000B24C: addiu       $v1, $v1, 0x17B0
    ctx->r3 = ADD32(ctx->r3, 0X17B0);
    // 0x1000B250: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_1000B254:
    // 0x1000B254: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1000B258: beq         $a0, $zero, L_1000B280
    if (ctx->r4 == 0) {
        // 0x1000B25C: nop
    
            goto L_1000B280;
    }
    // 0x1000B25C: nop

    // 0x1000B260: lw          $a2, 0x60($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X60);
    // 0x1000B264: beq         $a2, $zero, L_1000B280
    if (ctx->r6 == 0) {
        // 0x1000B268: nop
    
            goto L_1000B280;
    }
    // 0x1000B268: nop

    // 0x1000B26C: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x1000B270: bne         $a1, $t7, L_1000B280
    if (ctx->r5 != ctx->r15) {
        // 0x1000B274: nop
    
            goto L_1000B280;
    }
    // 0x1000B274: nop

    // 0x1000B278: jr          $ra
    // 0x1000B27C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    return;
    // 0x1000B27C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_1000B280:
    // 0x1000B280: bnel        $v1, $v0, L_1000B254
    if (ctx->r3 != ctx->r2) {
        // 0x1000B284: lw          $a0, 0x0($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X0);
            goto L_1000B254;
    }
    goto skip_1;
    // 0x1000B284: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x1000B288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000B28C: jr          $ra
    // 0x1000B290: nop

    return;
    return;
    // 0x1000B290: nop

;}
RECOMP_FUNC void func_1512B630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512B630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1512B634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1512B638: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1512B63C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1512B640: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1512B644: bnel        $t6, $zero, L_1512B674
    if (ctx->r14 != 0) {
        // 0x1512B648: lbu         $t2, 0x23D($a0)
        ctx->r10 = MEM_BU(ctx->r4, 0X23D);
            goto L_1512B674;
    }
    goto skip_0;
    // 0x1512B648: lbu         $t2, 0x23D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X23D);
    skip_0:
    // 0x1512B64C: lbu         $t7, 0x23D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512B650: lh          $t9, 0x1B4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1B4);
    // 0x1512B654: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512B658: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x1512B65C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x1512B660: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1512B664: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x1512B668: b           L_1512B690
    // 0x1512B66C: lh          $v0, -0x3DFC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DFC);
        goto L_1512B690;
    // 0x1512B66C: lh          $v0, -0x3DFC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DFC);
    // 0x1512B670: lbu         $t2, 0x23D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X23D);
L_1512B674:
    // 0x1512B674: lh          $t4, 0x1B4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X1B4);
    // 0x1512B678: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512B67C: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x1512B680: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x1512B684: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1512B688: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1512B68C: lh          $v0, -0x3DFA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DFA);
L_1512B690:
    // 0x1512B690: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x1512B694: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x1512B698: sll         $t0, $t8, 17
    ctx->r8 = S32(ctx->r24 << 17);
    // 0x1512B69C: andi        $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 & 0X8000;
    // 0x1512B6A0: beq         $t9, $zero, L_1512B6AC
    if (ctx->r25 == 0) {
        // 0x1512B6A4: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_1512B6AC;
    }
    // 0x1512B6A4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1512B6A8: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
L_1512B6AC:
    // 0x1512B6AC: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1512B6B0: beq         $at, $zero, L_1512B6D8
    if (ctx->r1 == 0) {
        // 0x1512B6B4: slt         $at, $a3, $t2
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_1512B6D8;
    }
    // 0x1512B6B4: slt         $at, $a3, $t2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1512B6B8: beq         $at, $zero, L_1512B6D8
    if (ctx->r1 == 0) {
        // 0x1512B6BC: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_1512B6D8;
    }
    // 0x1512B6BC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1512B6C0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x1512B6C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512B6C8: jal         0x1512B5FC
    // 0x1512B6CC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_1512B5FC(rdram, ctx);
        goto after_0;
    // 0x1512B6CC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x1512B6D0: b           L_1512B71C
    // 0x1512B6D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512B71C;
    // 0x1512B6D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1512B6D8:
    // 0x1512B6D8: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1512B6DC: beq         $at, $zero, L_1512B708
    if (ctx->r1 == 0) {
        // 0x1512B6E0: lw          $t3, 0x30($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X30);
            goto L_1512B708;
    }
    // 0x1512B6E0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x1512B6E4: slt         $at, $t3, $a3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x1512B6E8: beq         $at, $zero, L_1512B708
    if (ctx->r1 == 0) {
        // 0x1512B6EC: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_1512B708;
    }
    // 0x1512B6EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1512B6F0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x1512B6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512B6F8: jal         0x1512B5FC
    // 0x1512B6FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_1512B5FC(rdram, ctx);
        goto after_1;
    // 0x1512B6FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x1512B700: b           L_1512B71C
    // 0x1512B704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512B71C;
    // 0x1512B704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1512B708:
    // 0x1512B708: ori         $t6, $zero, 0xFFFC
    ctx->r14 = 0 | 0XFFFC;
    // 0x1512B70C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x1512B710: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x1512B714: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    // 0x1512B718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1512B71C:
    // 0x1512B71C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1512B720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1512B724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1512B728: jr          $ra
    // 0x1512B72C: nop

    return;
    return;
    // 0x1512B72C: nop

;}
RECOMP_FUNC void func_151D0128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D0128: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x151D012C: lhu         $t7, 0x2E($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2E);
    // 0x151D0130: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151D0134: lhu         $t6, 0x84($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X84);
    // 0x151D0138: beq         $t6, $t7, L_151D0144
    if (ctx->r14 == ctx->r15) {
        // 0x151D013C: nop
    
            goto L_151D0144;
    }
    // 0x151D013C: nop

    // 0x151D0140: sh          $t8, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r24;
L_151D0144:
    // 0x151D0144: jr          $ra
    // 0x151D0148: nop

    return;
    return;
    // 0x151D0148: nop

;}
RECOMP_FUNC void func_150ADAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150ADAF0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150ADAF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ADAF8: sw          $sp, 0x3858($at)
    MEM_W(0X3858, ctx->r1) = ctx->r29;
    // 0x150ADAFC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150ADB00: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150ADB04: sw          $gp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r28;
    // 0x150ADB08: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x150ADB0C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x150ADB10: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x150ADB14: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x150ADB18: swc1        $f26, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f26.u32l;
    // 0x150ADB1C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x150ADB20: swc1        $f30, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f30.u32l;
    // 0x150ADB24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150ADB28: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x150ADB2C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150ADB30: addiu       $v1, $v1, 0x3860
    ctx->r3 = ADD32(ctx->r3, 0X3860);
    // 0x150ADB34: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x150ADB38: addiu       $s5, $v1, 0x17FC
    ctx->r21 = ADD32(ctx->r3, 0X17FC);
    // 0x150ADB3C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x150ADB40: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x150ADB44: lhu         $v1, 0xA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA);
    // 0x150ADB48: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x150ADB4C: addu        $s2, $v1, $a0
    ctx->r18 = ADD32(ctx->r3, ctx->r4);
    // 0x150ADB50: lhu         $t1, 0x8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8);
    // 0x150ADB54: addu        $s3, $t1, $a0
    ctx->r19 = ADD32(ctx->r9, ctx->r4);
    // 0x150ADB58: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x150ADB5C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x150ADB60: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADB64: addiu       $v1, $v1, -0x7A40
    ctx->r3 = ADD32(ctx->r3, -0X7A40);
    // 0x150ADB68: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x150ADB6C: addu        $v1, $v1, $a1
    gpr jr_addend_150ADB88 = ctx->r5;
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x150ADB70: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x150ADB74: lw          $v1, 0x0($v1)
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x150ADB78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ADB7C: sw          $zero, 0x3840($at)
    MEM_W(0X3840, ctx->r1) = 0;
    // 0x150ADB80: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150ADB84: addiu       $t1, $t1, 0x3844
    ctx->r9 = ADD32(ctx->r9, 0X3844);
    // 0x150ADB88: jr          $v1
    // 0x150ADB8C: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    switch (jr_addend_150ADB88 >> 2) {
        case 0: goto L_150ADB90; break;
        case 1: goto L_150ADB98; break;
        case 2: goto L_150ADBA4; break;
        case 3: goto L_150ADBB0; break;
        case 4: goto L_150ADBBC; break;
        default: switch_error(__func__, 0x150ADB88, 0x800885C0);
    }
    // 0x150ADB8C: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_150ADB90:
    // 0x150ADB90: b           L_150ADBC4
    // 0x150ADB94: addiu       $s1, $a0, 0x20
    ctx->r17 = ADD32(ctx->r4, 0X20);
        goto L_150ADBC4;
    // 0x150ADB94: addiu       $s1, $a0, 0x20
    ctx->r17 = ADD32(ctx->r4, 0X20);
L_150ADB98:
    // 0x150ADB98: lhu         $t2, 0xE($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XE);
    // 0x150ADB9C: b           L_150ADBC4
    // 0x150ADBA0: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
        goto L_150ADBC4;
    // 0x150ADBA0: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
L_150ADBA4:
    // 0x150ADBA4: lhu         $t2, 0x10($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X10);
    // 0x150ADBA8: b           L_150ADBC4
    // 0x150ADBAC: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
        goto L_150ADBC4;
    // 0x150ADBAC: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
L_150ADBB0:
    // 0x150ADBB0: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x150ADBB4: b           L_150ADBC4
    // 0x150ADBB8: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
        goto L_150ADBC4;
    // 0x150ADBB8: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
L_150ADBBC:
    // 0x150ADBBC: lhu         $t2, 0x14($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X14);
    // 0x150ADBC0: addu        $s1, $t2, $a0
    ctx->r17 = ADD32(ctx->r10, ctx->r4);
L_150ADBC4:
    // 0x150ADBC4: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x150ADBC8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150ADBCC: addiu       $v1, $v1, 0x7358
    ctx->r3 = ADD32(ctx->r3, 0X7358);
    // 0x150ADBD0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADBD4: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x150ADBD8: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x150ADBDC: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x150ADBE0: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x150ADBE4: lbu         $t8, 0x0($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X0);
    // 0x150ADBE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150ADBEC: beql        $t8, $at, L_150ADE08
    if (ctx->r24 == ctx->r1) {
        // 0x150ADBF0: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_150ADE08;
    }
    goto skip_0;
    // 0x150ADBF0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    skip_0:
    // 0x150ADBF4: andi        $t9, $t7, 0xE000
    ctx->r25 = ctx->r15 & 0XE000;
    // 0x150ADBF8: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x150ADBFC: srlv        $t9, $t9, $t2
    ctx->r25 = S32(U32(ctx->r25) >> (ctx->r10 & 31));
    // 0x150ADC00: andi        $s6, $t7, 0x40
    ctx->r22 = ctx->r15 & 0X40;
    // 0x150ADC04: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150ADC08: srlv        $s6, $s6, $t2
    ctx->r22 = S32(U32(ctx->r22) >> (ctx->r10 & 31));
    // 0x150ADC0C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x150ADC10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150ADC14: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADC18: addiu       $v1, $v1, -0x7A2C
    ctx->r3 = ADD32(ctx->r3, -0X7A2C);
    // 0x150ADC1C: addu        $v1, $v1, $t9
    gpr jr_addend_150ADC24 = ctx->r25;
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x150ADC20: lw          $v1, 0x0($v1)
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x150ADC24: jr          $v1
    // 0x150ADC28: nop

    switch (jr_addend_150ADC24 >> 2) {
        case 0: goto L_150ADC74; break;
        case 1: goto L_150ADC88; break;
        case 2: goto L_150ADC9C; break;
        case 3: goto L_150ADC2C; break;
        case 4: goto L_150ADC2C; break;
        case 5: goto L_150ADC58; break;
        case 6: goto L_150ADC2C; break;
        default: switch_error(__func__, 0x150ADC24, 0x800885D4);
    }
    // 0x150ADC28: nop

L_150ADC2C:
    // 0x150ADC2C: addiu       $a2, $s1, 0x0
    ctx->r6 = ADD32(ctx->r17, 0X0);
    // 0x150ADC30: bne         $s6, $zero, L_150ADC44
    if (ctx->r22 != 0) {
        // 0x150ADC34: nop
    
            goto L_150ADC44;
    }
    // 0x150ADC34: nop

    // 0x150ADC38: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADC3C: b           L_150ADCA8
    // 0x150ADC40: lh          $t2, 0x0($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X0);
        goto L_150ADCA8;
    // 0x150ADC40: lh          $t2, 0x0($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X0);
L_150ADC44:
    // 0x150ADC44: lwl         $t2, 0x0($a2)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r6, 0X0);
    // 0x150ADC48: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150ADC4C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x150ADC50: b           L_150ADCA8
    // 0x150ADC54: lwr         $t2, 0x3($a2)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r6, 0X3);
        goto L_150ADCA8;
    // 0x150ADC54: lwr         $t2, 0x3($a2)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r6, 0X3);
L_150ADC58:
    // 0x150ADC58: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150ADC5C: addiu       $a2, $a2, 0x3848
    ctx->r6 = ADD32(ctx->r6, 0X3848);
    // 0x150ADC60: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150ADC64: addiu       $v1, $v1, 0x384C
    ctx->r3 = ADD32(ctx->r3, 0X384C);
    // 0x150ADC68: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADC6C: b           L_150ADCA8
    // 0x150ADC70: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
        goto L_150ADCA8;
    // 0x150ADC70: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
L_150ADC74:
    // 0x150ADC74: lh          $t2, 0x0($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X0);
    // 0x150ADC78: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADC7C: addu        $a2, $s4, $t2
    ctx->r6 = ADD32(ctx->r20, ctx->r10);
    // 0x150ADC80: b           L_150ADCA8
    // 0x150ADC84: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
        goto L_150ADCA8;
    // 0x150ADC84: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
L_150ADC88:
    // 0x150ADC88: lh          $t2, 0x0($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X0);
    // 0x150ADC8C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADC90: addu        $a2, $s2, $t2
    ctx->r6 = ADD32(ctx->r18, ctx->r10);
    // 0x150ADC94: b           L_150ADCA8
    // 0x150ADC98: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
        goto L_150ADCA8;
    // 0x150ADC98: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
L_150ADC9C:
    // 0x150ADC9C: lh          $t2, 0x0($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X0);
    // 0x150ADCA0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADCA4: addu        $a2, $s3, $t2
    ctx->r6 = ADD32(ctx->r19, ctx->r10);
L_150ADCA8:
    // 0x150ADCA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150ADCAC: beql        $t8, $at, L_150ADE08
    if (ctx->r24 == ctx->r1) {
        // 0x150ADCB0: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_150ADE08;
    }
    goto skip_1;
    // 0x150ADCB0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    skip_1:
    // 0x150ADCB4: andi        $t9, $t7, 0x1C00
    ctx->r25 = ctx->r15 & 0X1C00;
    // 0x150ADCB8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x150ADCBC: srlv        $t9, $t9, $t4
    ctx->r25 = S32(U32(ctx->r25) >> (ctx->r12 & 31));
    // 0x150ADCC0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADCC4: addiu       $v1, $v1, -0x7A10
    ctx->r3 = ADD32(ctx->r3, -0X7A10);
    // 0x150ADCC8: addu        $v1, $v1, $t9
    gpr jr_addend_150ADCD0 = ctx->r25;
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x150ADCCC: lw          $v1, 0x0($v1)
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x150ADCD0: jr          $v1
    // 0x150ADCD4: nop

    switch (jr_addend_150ADCD0 >> 2) {
        case 0: goto L_150ADD24; break;
        case 1: goto L_150ADD38; break;
        case 2: goto L_150ADD4C; break;
        case 3: goto L_150ADCD8; break;
        case 4: goto L_150ADCD8; break;
        case 5: goto L_150ADD04; break;
        case 6: goto L_150ADCD8; break;
        default: switch_error(__func__, 0x150ADCD0, 0x800885F0);
    }
    // 0x150ADCD4: nop

L_150ADCD8:
    // 0x150ADCD8: addiu       $a3, $s1, 0x0
    ctx->r7 = ADD32(ctx->r17, 0X0);
    // 0x150ADCDC: bne         $s6, $zero, L_150ADCF0
    if (ctx->r22 != 0) {
        // 0x150ADCE0: nop
    
            goto L_150ADCF0;
    }
    // 0x150ADCE0: nop

    // 0x150ADCE4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADCE8: b           L_150ADD58
    // 0x150ADCEC: lh          $t3, 0x0($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X0);
        goto L_150ADD58;
    // 0x150ADCEC: lh          $t3, 0x0($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X0);
L_150ADCF0:
    // 0x150ADCF0: lwl         $t3, 0x0($a3)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r7, 0X0);
    // 0x150ADCF4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150ADCF8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x150ADCFC: b           L_150ADD58
    // 0x150ADD00: lwr         $t3, 0x3($a3)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r7, 0X3);
        goto L_150ADD58;
    // 0x150ADD00: lwr         $t3, 0x3($a3)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r7, 0X3);
L_150ADD04:
    // 0x150ADD04: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x150ADD08: addiu       $a3, $a3, 0x3848
    ctx->r7 = ADD32(ctx->r7, 0X3848);
    // 0x150ADD0C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150ADD10: addiu       $v1, $v1, 0x384C
    ctx->r3 = ADD32(ctx->r3, 0X384C);
    // 0x150ADD14: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADD18: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x150ADD1C: b           L_150ADD58
    // 0x150ADD20: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
        goto L_150ADD58;
    // 0x150ADD20: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
L_150ADD24:
    // 0x150ADD24: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x150ADD28: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADD2C: addu        $a3, $s4, $t3
    ctx->r7 = ADD32(ctx->r20, ctx->r11);
    // 0x150ADD30: b           L_150ADD58
    // 0x150ADD34: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
        goto L_150ADD58;
    // 0x150ADD34: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
L_150ADD38:
    // 0x150ADD38: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x150ADD3C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADD40: addu        $a3, $s2, $t3
    ctx->r7 = ADD32(ctx->r18, ctx->r11);
    // 0x150ADD44: b           L_150ADD58
    // 0x150ADD48: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
        goto L_150ADD58;
    // 0x150ADD48: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
L_150ADD4C:
    // 0x150ADD4C: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x150ADD50: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADD54: addu        $a3, $s3, $t3
    ctx->r7 = ADD32(ctx->r19, ctx->r11);
L_150ADD58:
    // 0x150ADD58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150ADD5C: beql        $t8, $at, L_150ADE08
    if (ctx->r24 == ctx->r1) {
        // 0x150ADD60: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_150ADE08;
    }
    goto skip_2;
    // 0x150ADD60: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    skip_2:
    // 0x150ADD64: andi        $t9, $t7, 0x380
    ctx->r25 = ctx->r15 & 0X380;
    // 0x150ADD68: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x150ADD6C: srlv        $t9, $t9, $t4
    ctx->r25 = S32(U32(ctx->r25) >> (ctx->r12 & 31));
    // 0x150ADD70: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADD74: addiu       $v1, $v1, -0x79F4
    ctx->r3 = ADD32(ctx->r3, -0X79F4);
    // 0x150ADD78: addu        $v1, $v1, $t9
    gpr jr_addend_150ADD80 = ctx->r25;
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x150ADD7C: lw          $v1, 0x0($v1)
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x150ADD80: jr          $v1
    // 0x150ADD84: nop

    switch (jr_addend_150ADD80 >> 2) {
        case 0: goto L_150ADDD4; break;
        case 1: goto L_150ADDE8; break;
        case 2: goto L_150ADDFC; break;
        case 3: goto L_150ADD88; break;
        case 4: goto L_150ADD88; break;
        case 5: goto L_150ADDB4; break;
        case 6: goto L_150ADD88; break;
        default: switch_error(__func__, 0x150ADD80, 0x8008860C);
    }
    // 0x150ADD84: nop

L_150ADD88:
    // 0x150ADD88: addiu       $t0, $s1, 0x0
    ctx->r8 = ADD32(ctx->r17, 0X0);
    // 0x150ADD8C: bne         $s6, $zero, L_150ADDA0
    if (ctx->r22 != 0) {
        // 0x150ADD90: nop
    
            goto L_150ADDA0;
    }
    // 0x150ADD90: nop

    // 0x150ADD94: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADD98: b           L_150ADE04
    // 0x150ADD9C: lh          $t4, 0x0($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X0);
        goto L_150ADE04;
    // 0x150ADD9C: lh          $t4, 0x0($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X0);
L_150ADDA0:
    // 0x150ADDA0: lwl         $t4, 0x0($t0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r8, 0X0);
    // 0x150ADDA4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150ADDA8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x150ADDAC: b           L_150ADE04
    // 0x150ADDB0: lwr         $t4, 0x3($t0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r8, 0X3);
        goto L_150ADE04;
    // 0x150ADDB0: lwr         $t4, 0x3($t0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r8, 0X3);
L_150ADDB4:
    // 0x150ADDB4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150ADDB8: addiu       $t0, $t0, 0x3848
    ctx->r8 = ADD32(ctx->r8, 0X3848);
    // 0x150ADDBC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150ADDC0: addiu       $v1, $v1, 0x384C
    ctx->r3 = ADD32(ctx->r3, 0X384C);
    // 0x150ADDC4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADDC8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x150ADDCC: b           L_150ADE04
    // 0x150ADDD0: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
        goto L_150ADE04;
    // 0x150ADDD0: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
L_150ADDD4:
    // 0x150ADDD4: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x150ADDD8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADDDC: addu        $t0, $s4, $t4
    ctx->r8 = ADD32(ctx->r20, ctx->r12);
    // 0x150ADDE0: b           L_150ADE04
    // 0x150ADDE4: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
        goto L_150ADE04;
    // 0x150ADDE4: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
L_150ADDE8:
    // 0x150ADDE8: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x150ADDEC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADDF0: addu        $t0, $s2, $t4
    ctx->r8 = ADD32(ctx->r18, ctx->r12);
    // 0x150ADDF4: b           L_150ADE04
    // 0x150ADDF8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
        goto L_150ADE04;
    // 0x150ADDF8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
L_150ADDFC:
    // 0x150ADDFC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x150ADE00: addu        $t0, $s3, $t4
    ctx->r8 = ADD32(ctx->r19, ctx->r12);
L_150ADE04:
    // 0x150ADE04: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
L_150ADE08:
    // 0x150ADE08: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADE0C: addiu       $v1, $v1, -0x79D8
    ctx->r3 = ADD32(ctx->r3, -0X79D8);
    // 0x150ADE10: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x150ADE14: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x150ADE18: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x150ADE1C: jr          $v1
    // 0x150ADE20: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
    return;
    // 0x150ADE20: nop

    // 0x150ADE24: add         $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x150ADE28: b           L_150ADBC4
    // 0x150ADE2C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE2C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE30: sub         $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x150ADE34: b           L_150ADBC4
    // 0x150ADE38: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE38: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE3C: mult        $t3, $t4
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150ADE40: mflo        $t3
    ctx->r11 = lo;
    // 0x150ADE44: b           L_150ADBC4
    // 0x150ADE48: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE48: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE4C: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x150ADE50: mflo        $t3
    ctx->r11 = lo;
    // 0x150ADE54: b           L_150ADBC4
    // 0x150ADE58: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE58: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE5C: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x150ADE60: mfhi        $t3
    ctx->r11 = hi;
    // 0x150ADE64: b           L_150ADBC4
    // 0x150ADE68: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE68: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE6C: sub         $t3, $zero, $t3
    ctx->r11 = SUB32(0, ctx->r11);
    // 0x150ADE70: b           L_150ADBC4
    // 0x150ADE74: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE74: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE78: xor         $t3, $t3, $zero
    ctx->r11 = ctx->r11 ^ 0;
    // 0x150ADE7C: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x150ADE80: b           L_150ADBC4
    // 0x150ADE84: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE84: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE88: nor         $t3, $t3, $zero
    ctx->r11 = ~(ctx->r11 | 0);
    // 0x150ADE8C: b           L_150ADBC4
    // 0x150ADE90: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE90: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADE94: and         $t3, $t3, $t4
    ctx->r11 = ctx->r11 & ctx->r12;
    // 0x150ADE98: b           L_150ADBC4
    // 0x150ADE9C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADE9C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADEA0: or          $t3, $t3, $t4
    ctx->r11 = ctx->r11 | ctx->r12;
    // 0x150ADEA4: b           L_150ADBC4
    // 0x150ADEA8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADEA8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADEAC: xor         $t3, $t3, $t4
    ctx->r11 = ctx->r11 ^ ctx->r12;
    // 0x150ADEB0: b           L_150ADBC4
    // 0x150ADEB4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADEB4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADEB8: sllv        $t3, $t3, $t4
    ctx->r11 = S32(ctx->r11 << (ctx->r12 & 31));
    // 0x150ADEBC: b           L_150ADBC4
    // 0x150ADEC0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADEC0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADEC4: srav        $t3, $t3, $t4
    ctx->r11 = S32(SIGNED(ctx->r11) >> (ctx->r12 & 31));
    // 0x150ADEC8: b           L_150ADBC4
    // 0x150ADECC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADECC: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADED0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150ADED4: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x150ADED8: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x150ADEDC: b           L_150ADBC4
    // 0x150ADEE0: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
        goto L_150ADBC4;
    // 0x150ADEE0: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x150ADEE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150ADEE8: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x150ADEEC: b           L_150ADBC4
    // 0x150ADEF0: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
        goto L_150ADBC4;
    // 0x150ADEF0: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x150ADEF4: b           L_150ADBC4
    // 0x150ADEF8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADEF8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADEFC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x150ADF00: b           L_150ADBC4
    // 0x150ADF04: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
        goto L_150ADBC4;
    // 0x150ADF04: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150ADF08: bne         $t2, $zero, L_150ADBC4
    if (ctx->r10 != 0) {
        // 0x150ADF0C: nop
    
            goto L_150ADBC4;
    }
    // 0x150ADF0C: nop

    // 0x150ADF10: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x150ADF14: b           L_150ADBC4
    // 0x150ADF18: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
        goto L_150ADBC4;
    // 0x150ADF18: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150ADF1C: beq         $t2, $zero, L_150ADBC4
    if (ctx->r10 == 0) {
        // 0x150ADF20: nop
    
            goto L_150ADBC4;
    }
    // 0x150ADF20: nop

    // 0x150ADF24: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x150ADF28: b           L_150ADBC4
    // 0x150ADF2C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
        goto L_150ADBC4;
    // 0x150ADF2C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150ADF30: slt         $t3, $t3, $t4
    ctx->r11 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x150ADF34: b           L_150ADBC4
    // 0x150ADF38: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF38: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF3C: slt         $t3, $t4, $t3
    ctx->r11 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150ADF40: b           L_150ADBC4
    // 0x150ADF44: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF44: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF48: slt         $t3, $t4, $t3
    ctx->r11 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150ADF4C: xori        $t3, $t3, 0x1
    ctx->r11 = ctx->r11 ^ 0X1;
    // 0x150ADF50: b           L_150ADBC4
    // 0x150ADF54: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF54: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF58: slt         $t3, $t3, $t4
    ctx->r11 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x150ADF5C: xori        $t3, $t3, 0x1
    ctx->r11 = ctx->r11 ^ 0X1;
    // 0x150ADF60: b           L_150ADBC4
    // 0x150ADF64: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF64: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF68: xor         $t3, $t3, $t4
    ctx->r11 = ctx->r11 ^ ctx->r12;
    // 0x150ADF6C: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x150ADF70: b           L_150ADBC4
    // 0x150ADF74: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF74: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF78: xor         $t3, $t3, $t4
    ctx->r11 = ctx->r11 ^ ctx->r12;
    // 0x150ADF7C: sltu        $t3, $zero, $t3
    ctx->r11 = 0 < ctx->r11 ? 1 : 0;
    // 0x150ADF80: b           L_150ADBC4
    // 0x150ADF84: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_150ADBC4;
    // 0x150ADF84: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x150ADF88: addi        $s5, $s5, -0x4
    ctx->r21 = ADD32(ctx->r21, -0X4);
    // 0x150ADF8C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150ADF90: lw          $t3, 0x3844($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3844);
    // 0x150ADF94: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x150ADF98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ADF9C: sw          $t3, 0x3844($at)
    MEM_W(0X3844, ctx->r1) = ctx->r11;
    // 0x150ADFA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150ADFA4: bne         $a1, $at, L_150ADFB4
    if (ctx->r5 != ctx->r1) {
        // 0x150ADFA8: nop
    
            goto L_150ADFB4;
    }
    // 0x150ADFA8: nop

    // 0x150ADFAC: b           L_150ADBC4
    // 0x150ADFB0: sw          $a2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r6;
        goto L_150ADBC4;
    // 0x150ADFB0: sw          $a2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r6;
L_150ADFB4:
    // 0x150ADFB4: b           L_150ADBC4
    // 0x150ADFB8: sw          $t2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r10;
        goto L_150ADBC4;
    // 0x150ADFB8: sw          $t2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r10;
    // 0x150ADFBC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150ADFC0: lw          $t3, 0x3844($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3844);
    // 0x150ADFC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150ADFC8: sw          $t3, 0x3840($at)
    MEM_W(0X3840, ctx->r1) = ctx->r11;
    // 0x150ADFCC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150ADFD0: bnel        $a1, $at, L_150AE028
    if (ctx->r5 != ctx->r1) {
        // 0x150ADFD4: addi        $s5, $s5, -0x4
        ctx->r21 = ADD32(ctx->r21, -0X4);
            goto L_150AE028;
    }
    goto skip_3;
    // 0x150ADFD4: addi        $s5, $s5, -0x4
    ctx->r21 = ADD32(ctx->r21, -0X4);
    skip_3:
    // 0x150ADFD8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150ADFDC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150ADFE0: addiu       $v1, $v1, -0x795C
    ctx->r3 = ADD32(ctx->r3, -0X795C);
    // 0x150ADFE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150ADFE8: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x150ADFEC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x150ADFF0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150ADFF4: addiu       $t1, $t1, 0x3844
    ctx->r9 = ADD32(ctx->r9, 0X3844);
    // 0x150ADFF8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150ADFFC: jalr        $v1
    // 0x150AE000: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x150AE000: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    after_0:
    // 0x150AE004: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150AE008: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE00C: sw          $v0, 0x3848($at)
    MEM_W(0X3848, ctx->r1) = ctx->r2;
    // 0x150AE010: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150AE014: addiu       $t5, $t5, 0x3848
    ctx->r13 = ADD32(ctx->r13, 0X3848);
    // 0x150AE018: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150AE01C: addiu       $t1, $t1, 0x384C
    ctx->r9 = ADD32(ctx->r9, 0X384C);
    // 0x150AE020: b           L_150ADBC4
    // 0x150AE024: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
        goto L_150ADBC4;
    // 0x150AE024: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
L_150AE028:
    // 0x150AE028: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
    // 0x150AE02C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE030: sw          $zero, 0x3844($at)
    MEM_W(0X3844, ctx->r1) = 0;
    // 0x150AE034: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x150AE038: b           L_150ADBC4
    // 0x150AE03C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
        goto L_150ADBC4;
    // 0x150AE03C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150AE040: addi        $s5, $s5, -0x4
    ctx->r21 = ADD32(ctx->r21, -0X4);
    // 0x150AE044: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x150AE048: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x150AE04C: b           L_150ADBC4
    // 0x150AE050: sub         $s5, $s5, $t2
    ctx->r21 = SUB32(ctx->r21, ctx->r10);
        goto L_150ADBC4;
    // 0x150AE050: sub         $s5, $s5, $t2
    ctx->r21 = SUB32(ctx->r21, ctx->r10);
    // 0x150AE054: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x150AE058: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150AE05C: addiu       $t5, $t5, 0x3848
    ctx->r13 = ADD32(ctx->r13, 0X3848);
    // 0x150AE060: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE064: sw          $v0, 0x3848($at)
    MEM_W(0X3848, ctx->r1) = ctx->r2;
    // 0x150AE068: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE06C: sw          $t5, 0x384C($at)
    MEM_W(0X384C, ctx->r1) = ctx->r13;
    // 0x150AE070: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x150AE074: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x150AE078: addi        $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x150AE07C: lw          $s1, 0x0($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X0);
    // 0x150AE080: addi        $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x150AE084: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150AE088: addiu       $v1, $v1, 0x3860
    ctx->r3 = ADD32(ctx->r3, 0X3860);
    // 0x150AE08C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE090: sw          $zero, 0x3840($at)
    MEM_W(0X3840, ctx->r1) = 0;
    // 0x150AE094: addiu       $t1, $v1, 0x17FC
    ctx->r9 = ADD32(ctx->r3, 0X17FC);
    // 0x150AE098: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150AE09C: addiu       $v1, $v1, 0x3844
    ctx->r3 = ADD32(ctx->r3, 0X3844);
    // 0x150AE0A0: slt         $at, $s5, $t1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x150AE0A4: bne         $at, $zero, L_150ADBC4
    if (ctx->r1 != 0) {
        // 0x150AE0A8: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_150ADBC4;
    }
    // 0x150AE0A8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_150AE0AC:
    // 0x150AE0AC: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150AE0B0: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x150AE0B4: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x150AE0B8: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x150AE0BC: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x150AE0C0: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x150AE0C4: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x150AE0C8: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x150AE0CC: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x150AE0D0: lw          $gp, 0x24($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X24);
    // 0x150AE0D4: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x150AE0D8: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150AE0DC: lwc1        $f22, 0x30($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150AE0E0: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150AE0E4: lwc1        $f26, 0x38($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150AE0E8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150AE0EC: lwc1        $f30, 0x40($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150AE0F0: jr          $ra
    // 0x150AE0F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150AE0F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150AE0F8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150AE0FC: addiu       $v1, $v1, -0x7BE0
    ctx->r3 = ADD32(ctx->r3, -0X7BE0);
    // 0x150AE100: b           L_150AE140
    // 0x150AE104: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_150AE140;
    // 0x150AE104: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150AE108: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150AE10C: addiu       $v1, $v1, -0x7BA4
    ctx->r3 = ADD32(ctx->r3, -0X7BA4);
    // 0x150AE110: b           L_150AE140
    // 0x150AE114: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_150AE140;
    // 0x150AE114: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150AE118: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x150AE11C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150AE120: addiu       $v1, $v1, -0x7B68
    ctx->r3 = ADD32(ctx->r3, -0X7B68);
    // 0x150AE124: b           L_150AE140
    // 0x150AE128: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
        goto L_150AE140;
    // 0x150AE128: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150AE12C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x150AE130: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150AE134: addiu       $v1, $v1, -0x7B2C
    ctx->r3 = ADD32(ctx->r3, -0X7B2C);
    // 0x150AE138: b           L_150AE140
    // 0x150AE13C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
        goto L_150AE140;
    // 0x150AE13C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_150AE140:
    // 0x150AE140: or          $s7, $ra, $zero
    ctx->r23 = ctx->r31 | 0;
    // 0x150AE144: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150AE148: andi        $t3, $t2, 0xF000
    ctx->r11 = ctx->r10 & 0XF000;
    // 0x150AE14C: srl         $t3, $t3, 12
    ctx->r11 = S32(U32(ctx->r11) >> 12);
    // 0x150AE150: bne         $t3, $zero, L_150AE164
    if (ctx->r11 != 0) {
        // 0x150AE154: nop
    
            goto L_150AE164;
    }
    // 0x150AE154: nop

    // 0x150AE158: or          $ra, $s7, $zero
    ctx->r31 = ctx->r23 | 0;
    // 0x150AE15C: jr          $ra
    // 0x150AE160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150AE160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150AE164:
    // 0x150AE164: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x150AE168: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150AE16C: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x150AE170: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x150AE174: lui         $t3, 0xFFFF
    ctx->r11 = S32(0XFFFF << 16);
    // 0x150AE178: ori         $t3, $t3, 0xFFF
    ctx->r11 = ctx->r11 | 0XFFF;
    // 0x150AE17C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x150AE180: jalr        $v1
    // 0x150AE184: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x150AE184: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    after_1:
    // 0x150AE188: or          $ra, $s7, $zero
    ctx->r31 = ctx->r23 | 0;
    // 0x150AE18C: jr          $ra
    // 0x150AE190: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x150AE190: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x150AE194: or          $s7, $ra, $zero
    ctx->r23 = ctx->r31 | 0;
    // 0x150AE198: jal         0x150ADA20
    // 0x150AE19C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150AE19C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    after_2:
    // 0x150AE1A0: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150AE1A4: or          $ra, $s7, $zero
    ctx->r31 = ctx->r23 | 0;
    // 0x150AE1A8: jr          $ra
    // 0x150AE1AC: mfhi        $v0
    ctx->r2 = hi;
    return;
    return;
    // 0x150AE1AC: mfhi        $v0
    ctx->r2 = hi;
    // 0x150AE1B0: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150AE1B4: addiu       $t2, $t2, -0x1660
    ctx->r10 = ADD32(ctx->r10, -0X1660);
    // 0x150AE1B8: jr          $ra
    // 0x150AE1BC: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    return;
    return;
    // 0x150AE1BC: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x150AE1C0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150AE1C4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x150AE1C8: dmult       $t2, $t3
    DMULT(S64(ctx->r10), S64(ctx->r11), &lo, &hi);
    // 0x150AE1CC: mflo        $t2
    ctx->r10 = lo;
    // 0x150AE1D0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x150AE1D4: jr          $ra
    // 0x150AE1D8: dsrlv       $v0, $t2, $t3
    ctx->r2 = ctx->r10 >> (ctx->r11 & 63);
    return;
    return;
    // 0x150AE1D8: dsrlv       $v0, $t2, $t3
    ctx->r2 = ctx->r10 >> (ctx->r11 & 63);
    // 0x150AE1DC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150AE1E0: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x150AE1E4: dsll        $t2, $t2, 16
    ctx->r10 = ctx->r10 << 16;
    // 0x150AE1E8: ddiv        $zero, $t2, $t3
    DDIV(S64(ctx->r10), S64(ctx->r11), &lo, &hi);
    // 0x150AE1EC: jr          $ra
    // 0x150AE1F0: mflo        $v0
    ctx->r2 = lo;
    return;
    return;
    // 0x150AE1F0: mflo        $v0
    ctx->r2 = lo;
    // 0x150AE1F4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150AE1F8: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x150AE1FC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150AE200: lbu         $t4, -0x1660($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1660);
    // 0x150AE204: bgez        $t2, L_150AE21C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x150AE208: add         $t3, $t3, $t4
        ctx->r11 = ADD32(ctx->r11, ctx->r12);
            goto L_150AE21C;
    }
    // 0x150AE208: add         $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x150AE20C: bltz        $t3, L_150AE21C
    if (SIGNED(ctx->r11) < 0) {
        // 0x150AE210: nop
    
            goto L_150AE21C;
    }
    // 0x150AE210: nop

    // 0x150AE214: jr          $ra
    // 0x150AE218: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150AE218: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150AE21C:
    // 0x150AE21C: bne         $t2, $zero, L_150AE22C
    if (ctx->r10 != 0) {
        // 0x150AE220: nop
    
            goto L_150AE22C;
    }
    // 0x150AE220: nop

    // 0x150AE224: jr          $ra
    // 0x150AE228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150AE228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AE22C:
    // 0x150AE22C: jr          $ra
    // 0x150AE230: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    return;
    // 0x150AE230: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x150AE234: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150AE238: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x150AE23C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150AE240: lbu         $t4, -0x1660($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1660);
    // 0x150AE244: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x150AE248: bne         $at, $zero, L_150AE264
    if (ctx->r1 != 0) {
        // 0x150AE24C: sub         $t3, $t3, $t4
        ctx->r11 = SUB32(ctx->r11, ctx->r12);
            goto L_150AE264;
    }
    // 0x150AE24C: sub         $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x150AE250: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x150AE254: beq         $at, $zero, L_150AE264
    if (ctx->r1 == 0) {
        // 0x150AE258: nop
    
            goto L_150AE264;
    }
    // 0x150AE258: nop

    // 0x150AE25C: jr          $ra
    // 0x150AE260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150AE260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AE264:
    // 0x150AE264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150AE268: bne         $t2, $at, L_150AE278
    if (ctx->r10 != ctx->r1) {
        // 0x150AE26C: nop
    
            goto L_150AE278;
    }
    // 0x150AE26C: nop

    // 0x150AE270: jr          $ra
    // 0x150AE274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150AE274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150AE278:
    // 0x150AE278: jr          $ra
    // 0x150AE27C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    return;
    // 0x150AE27C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x150AE280: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150AE284: lw          $t2, 0x3858($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3858);
    // 0x150AE288: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AE28C: sw          $zero, 0x3858($at)
    MEM_W(0X3858, ctx->r1) = 0;
    // 0x150AE290: b           L_150AE0AC
    // 0x150AE294: or          $sp, $t2, $zero
    ctx->r29 = ctx->r10 | 0;
        goto L_150AE0AC;
    // 0x150AE294: or          $sp, $t2, $zero
    ctx->r29 = ctx->r10 | 0;
    // 0x150AE298: nop

    // 0x150AE29C: nop

    // 0x150AE2A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150AE2A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150AE2A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150AE2AC: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150AE2B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150AE2B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150AE2B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE2BC: lwc1        $f4, -0x8B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X8B0);
    // 0x150AE2C0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150AE2C4: lwc1        $f10, 0x178($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X178);
    // 0x150AE2C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE2CC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150AE2D0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150AE2D4: lwc1        $f10, 0x17C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X17C);
    // 0x150AE2D8: swc1        $f16, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->f16.u32l;
    // 0x150AE2DC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150AE2E0: lwc1        $f18, -0x8AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X8AC);
    // 0x150AE2E4: lwc1        $f12, 0x178($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X178);
    // 0x150AE2E8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150AE2EC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150AE2F0: jal         0x15144B68
    // 0x150AE2F4: swc1        $f8, 0x17C($s0)
    MEM_W(0X17C, ctx->r16) = ctx->f8.u32l;
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x150AE2F4: swc1        $f8, 0x17C($s0)
    MEM_W(0X17C, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x150AE2F8: addiu       $v0, $s0, 0x170
    ctx->r2 = ADD32(ctx->r16, 0X170);
    // 0x150AE2FC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x150AE300: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150AE304: jal         0x15144B68
    // 0x150AE308: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_15144B68(rdram, ctx);
        goto after_4;
    // 0x150AE308: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x150AE30C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x150AE310: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x150AE314: jal         0x15047D60
    // 0x150AE318: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x150AE318: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x150AE31C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE320: lwc1        $f16, -0x8A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X8A8);
    // 0x150AE324: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x150AE328: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150AE32C: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x150AE330: jal         0x15047D60
    // 0x150AE334: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x150AE334: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    after_6:
    // 0x150AE338: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150AE33C: lwc1        $f4, -0x8A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X8A4);
    // 0x150AE340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AE344: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150AE348: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x150AE34C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150AE350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150AE354: jr          $ra
    // 0x150AE358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150AE358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1000E7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E7A0: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x1000E7A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000E7A8: bne         $t6, $at, L_1000E7C4
    if (ctx->r14 != ctx->r1) {
        // 0x1000E7AC: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E7C4;
    }
    // 0x1000E7AC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E7B0: addiu       $v0, $v0, 0x1F04
    ctx->r2 = ADD32(ctx->r2, 0X1F04);
    // 0x1000E7B4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1000E7B8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x1000E7BC: jr          $ra
    // 0x1000E7C0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x1000E7C0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_1000E7C4:
    // 0x1000E7C4: andi        $t9, $a0, 0x2
    ctx->r25 = ctx->r4 & 0X2;
    // 0x1000E7C8: beq         $t9, $zero, L_1000E7F8
    if (ctx->r25 == 0) {
        // 0x1000E7CC: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E7F8;
    }
    // 0x1000E7CC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E7D0: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E7D4: addiu       $v1, $v1, 0x1F08
    ctx->r3 = ADD32(ctx->r3, 0X1F08);
    // 0x1000E7D8: addiu       $v0, $v0, 0x1F0C
    ctx->r2 = ADD32(ctx->r2, 0X1F0C);
    // 0x1000E7DC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1000E7E0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x1000E7E4: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x1000E7E8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1000E7EC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x1000E7F0: jr          $ra
    // 0x1000E7F4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    return;
    return;
    // 0x1000E7F4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_1000E7F8:
    // 0x1000E7F8: andi        $t4, $a0, 0x4
    ctx->r12 = ctx->r4 & 0X4;
    // 0x1000E7FC: beq         $t4, $zero, L_1000E828
    if (ctx->r12 == 0) {
        // 0x1000E800: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E828;
    }
    // 0x1000E800: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E804: addiu       $v0, $v0, 0x1F04
    ctx->r2 = ADD32(ctx->r2, 0X1F04);
    // 0x1000E808: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1000E80C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E810: addiu       $v1, $v1, 0x1F08
    ctx->r3 = ADD32(ctx->r3, 0X1F08);
    // 0x1000E814: addiu       $t5, $a1, 0x1
    ctx->r13 = ADD32(ctx->r5, 0X1);
    // 0x1000E818: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x1000E81C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x1000E820: jr          $ra
    // 0x1000E824: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    return;
    // 0x1000E824: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_1000E828:
    // 0x1000E828: andi        $t8, $a0, 0x8
    ctx->r24 = ctx->r4 & 0X8;
    // 0x1000E82C: beq         $t8, $zero, L_1000E8A0
    if (ctx->r24 == 0) {
        // 0x1000E830: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E8A0;
    }
    // 0x1000E830: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E834: addiu       $v0, $v0, 0x1F0C
    ctx->r2 = ADD32(ctx->r2, 0X1F0C);
    // 0x1000E838: sra         $t9, $a1, 8
    ctx->r25 = S32(SIGNED(ctx->r5) >> 8);
    // 0x1000E83C: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x1000E840: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1000E844: beq         $t0, $zero, L_1000E85C
    if (ctx->r8 == 0) {
        // 0x1000E848: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_1000E85C;
    }
    // 0x1000E848: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x1000E84C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1000E850: beq         $t0, $at, L_1000E85C
    if (ctx->r8 == ctx->r1) {
        // 0x1000E854: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1000E85C;
    }
    // 0x1000E854: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1000E858: bne         $t0, $at, L_1000E870
    if (ctx->r8 != ctx->r1) {
        // 0x1000E85C: lui         $v1, 0x8004
        ctx->r3 = S32(0X8004 << 16);
            goto L_1000E870;
    }
L_1000E85C:
    // 0x1000E85C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E860: addiu       $v1, $v1, 0x1F08
    ctx->r3 = ADD32(ctx->r3, 0X1F08);
    // 0x1000E864: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1000E868: jr          $ra
    // 0x1000E86C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    return;
    return;
    // 0x1000E86C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_1000E870:
    // 0x1000E870: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1000E874: bne         $a1, $at, L_1000E88C
    if (ctx->r5 != ctx->r1) {
        // 0x1000E878: lui         $v1, 0x8004
        ctx->r3 = S32(0X8004 << 16);
            goto L_1000E88C;
    }
    // 0x1000E878: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E87C: addiu       $v1, $v1, 0x1F08
    ctx->r3 = ADD32(ctx->r3, 0X1F08);
    // 0x1000E880: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1000E884: jr          $ra
    // 0x1000E888: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    return;
    return;
    // 0x1000E888: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_1000E88C:
    // 0x1000E88C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E890: addiu       $v1, $v1, 0x1F08
    ctx->r3 = ADD32(ctx->r3, 0X1F08);
    // 0x1000E894: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x1000E898: jr          $ra
    // 0x1000E89C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    return;
    return;
    // 0x1000E89C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_1000E8A0:
    // 0x1000E8A0: andi        $t4, $a0, 0x10
    ctx->r12 = ctx->r4 & 0X10;
    // 0x1000E8A4: beq         $t4, $zero, L_1000E8BC
    if (ctx->r12 == 0) {
        // 0x1000E8A8: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E8BC;
    }
    // 0x1000E8A8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E8AC: addiu       $v0, $v0, 0x1F04
    ctx->r2 = ADD32(ctx->r2, 0X1F04);
    // 0x1000E8B0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1000E8B4: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x1000E8B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_1000E8BC:
    // 0x1000E8BC: jr          $ra
    // 0x1000E8C0: nop

    return;
    return;
    // 0x1000E8C0: nop

;}
RECOMP_FUNC void func_15038468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15038468: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1503846C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x15038470: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15038474: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x15038478: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1503847C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15038480: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x15038484: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15038488: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1503848C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x15038490: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15038494: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15038498: beq         $a2, $zero, L_150384CC
    if (ctx->r6 == 0) {
        // 0x1503849C: lwc1        $f20, 0x48($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
            goto L_150384CC;
    }
    // 0x1503849C: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150384A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150384A4: beq         $a2, $at, L_150384FC
    if (ctx->r6 == ctx->r1) {
        // 0x150384A8: lwc1        $f20, 0x48($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
            goto L_150384FC;
    }
    // 0x150384A8: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150384AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150384B0: beq         $a2, $at, L_1503852C
    if (ctx->r6 == ctx->r1) {
        // 0x150384B4: lwc1        $f20, 0x48($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
            goto L_1503852C;
    }
    // 0x150384B4: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150384B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150384BC: beq         $a2, $at, L_1503855C
    if (ctx->r6 == ctx->r1) {
        // 0x150384C0: lwc1        $f20, 0x48($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
            goto L_1503855C;
    }
    // 0x150384C0: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150384C4: b           L_15038588
    // 0x150384C8: nop

        goto L_15038588;
    // 0x150384C8: nop

L_150384CC:
    // 0x150384CC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x150384D0: jal         0x150484A0
    // 0x150384D4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x150384D4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x150384D8: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x150384DC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x150384E0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x150384E4: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150384E8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150384EC: jal         0x150484A0
    // 0x150384F0: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_1;
    // 0x150384F0: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_1:
    // 0x150384F4: b           L_15038588
    // 0x150384F8: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
        goto L_15038588;
    // 0x150384F8: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_150384FC:
    // 0x150384FC: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x15038500: jal         0x150484A0
    // 0x15038504: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x15038504: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_2:
    // 0x15038508: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x1503850C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x15038510: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x15038514: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x15038518: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1503851C: jal         0x150484A0
    // 0x15038520: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_3;
    // 0x15038520: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_3:
    // 0x15038524: b           L_15038588
    // 0x15038528: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
        goto L_15038588;
    // 0x15038528: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_1503852C:
    // 0x1503852C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15038530: jal         0x150484A0
    // 0x15038534: neg.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = -ctx->f22.fl;
    func_150484A0(rdram, ctx);
        goto after_4;
    // 0x15038534: neg.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = -ctx->f22.fl;
    after_4:
    // 0x15038538: mul.s       $f16, $f22, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x1503853C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x15038540: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x15038544: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x15038548: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1503854C: jal         0x150484A0
    // 0x15038550: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_5;
    // 0x15038550: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_5:
    // 0x15038554: b           L_15038588
    // 0x15038558: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
        goto L_15038588;
    // 0x15038558: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_1503855C:
    // 0x1503855C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15038560: jal         0x150484A0
    // 0x15038564: neg.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = -ctx->f24.fl;
    func_150484A0(rdram, ctx);
        goto after_6;
    // 0x15038564: neg.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = -ctx->f24.fl;
    after_6:
    // 0x15038568: mul.s       $f4, $f24, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x1503856C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x15038570: neg.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = -ctx->f22.fl;
    // 0x15038574: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x15038578: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1503857C: jal         0x150484A0
    // 0x15038580: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_7;
    // 0x15038580: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_7:
    // 0x15038584: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_15038588:
    // 0x15038588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503858C: lwc1        $f2, -0x79B8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X79B8);
    // 0x15038590: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15038594: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15038598: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1503859C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150385A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150385A4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x150385A8: lwc1        $f16, 0x0($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150385AC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150385B0: swc1        $f18, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f18.u32l;
    // 0x150385B4: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150385B8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150385BC: nop

    // 0x150385C0: bc1fl       L_150385DC
    if (!c1cs) {
        // 0x150385C4: lwc1        $f0, 0x0($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
            goto L_150385DC;
    }
    goto skip_0;
    // 0x150385C4: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x150385C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150385CC: nop

    // 0x150385D0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x150385D4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x150385D8: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
L_150385DC:
    // 0x150385DC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150385E0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150385E4: nop

    // 0x150385E8: bc1fl       L_15038604
    if (!c1cs) {
        // 0x150385EC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15038604;
    }
    goto skip_1;
    // 0x150385EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x150385F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150385F4: nop

    // 0x150385F8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x150385FC: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x15038600: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15038604:
    // 0x15038604: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15038608: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x1503860C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x15038610: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15038614: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15038618: jr          $ra
    // 0x1503861C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1503861C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1514E31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E31C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x1514E320: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514E324: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1514E328: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x1514E32C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1514E330: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514E334: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1514E338: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x1514E33C: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x1514E340: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514E344: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1514E348: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514E34C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514E350: lwc1        $f8, 0x5E18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E18);
    // 0x1514E354: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514E358: lwc1        $f10, 0x5E1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5E1C);
    // 0x1514E35C: lw          $t3, 0x130($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X130);
    // 0x1514E360: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1514E364: addiu       $t7, $zero, 0x2012
    ctx->r15 = ADD32(0, 0X2012);
    // 0x1514E368: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514E36C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514E370: addiu       $t0, $zero, 0xE6
    ctx->r8 = ADD32(0, 0XE6);
    // 0x1514E374: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514E378: addiu       $t2, $zero, 0x401
    ctx->r10 = ADD32(0, 0X401);
    // 0x1514E37C: sb          $t6, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r14;
    // 0x1514E380: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x1514E384: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x1514E388: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x1514E38C: sh          $zero, 0x80($sp)
    MEM_H(0X80, ctx->r29) = 0;
    // 0x1514E390: sb          $t8, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r24;
    // 0x1514E394: sb          $t9, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r25;
    // 0x1514E398: sb          $t0, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r8;
    // 0x1514E39C: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x1514E3A0: sb          $t1, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r9;
    // 0x1514E3A4: sh          $t2, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r10;
    // 0x1514E3A8: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3AC: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3B0: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3B4: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3B8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3BC: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3C0: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    // 0x1514E3C4: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x1514E3C8: swc1        $f12, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
    // 0x1514E3CC: swc1        $f12, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f12.u32l;
    // 0x1514E3D0: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x1514E3D4: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x1514E3D8: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x1514E3DC: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x1514E3E0: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x1514E3E4: lbu         $t4, 0x3B($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X3B);
    // 0x1514E3E8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514E3EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514E3F0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1514E3F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1514E3F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514E3FC: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x1514E400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514E404: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x1514E408: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1514E40C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x1514E410: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x1514E414: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x1514E418: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x1514E41C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x1514E420: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    // 0x1514E424: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x1514E428: sb          $zero, 0x129($sp)
    MEM_B(0X129, ctx->r29) = 0;
    // 0x1514E42C: sb          $zero, 0x12A($sp)
    MEM_B(0X12A, ctx->r29) = 0;
    // 0x1514E430: sb          $zero, 0x12B($sp)
    MEM_B(0X12B, ctx->r29) = 0;
    // 0x1514E434: sb          $t7, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r15;
    // 0x1514E438: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1514E43C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514E440: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1514E444: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x1514E448: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x1514E44C: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x1514E450: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514E454: sb          $t4, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r12;
    // 0x1514E458: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x1514E45C: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x1514E460: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x1514E464: jal         0x15189FF0
    // 0x1514E468: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    func_15189FF0(rdram, ctx);
        goto after_0;
    // 0x1514E468: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514E46C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E470: lw          $a1, 0x130($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X130);
    // 0x1514E474: jal         0x1514EC1C
    // 0x1514E478: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514E478: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_1:
    // 0x1514E47C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514E480: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x1514E484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514E488: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x1514E48C: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x1514E490: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514E494: addiu       $t2, $zero, 0xB5
    ctx->r10 = ADD32(0, 0XB5);
    // 0x1514E498: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1514E49C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1514E4A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1514E4A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514E4A8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x1514E4AC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x1514E4B0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x1514E4B4: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x1514E4B8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1514E4BC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1514E4C0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1514E4C4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514E4C8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1514E4CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514E4D0: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x1514E4D4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1514E4D8: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x1514E4DC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514E4E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514E4E4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514E4E8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514E4EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1514E4F0: jal         0x15160A58
    // 0x1514E4F4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    func_15160A58(rdram, ctx);
        goto after_2;
    // 0x1514E4F4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x1514E4F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1514E4FC: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x1514E500: jr          $ra
    // 0x1514E504: nop

    return;
    return;
    // 0x1514E504: nop

;}
RECOMP_FUNC void func_150706F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150706F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150706FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15070700: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15070704: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070708: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507070C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15070710: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15070714: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x15070718: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x1507071C: bnel        $t6, $zero, L_1507073C
    if (ctx->r14 != 0) {
        // 0x15070720: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_1507073C;
    }
    goto skip_0;
    // 0x15070720: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    skip_0:
    // 0x15070724: jal         0x150F03F8
    // 0x15070728: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150F03F8(rdram, ctx);
        goto after_0;
    // 0x15070728: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1507072C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070730: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070734: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x15070738: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
L_1507073C:
    // 0x1507073C: bne         $t7, $zero, L_15070750
    if (ctx->r15 != 0) {
        // 0x15070740: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_15070750;
    }
    // 0x15070740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15070744: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15070748: jal         0x150F03F8
    // 0x1507074C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150F03F8(rdram, ctx);
        goto after_1;
    // 0x1507074C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_15070750:
    // 0x15070750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15070758: jr          $ra
    // 0x1507075C: nop

    return;
    return;
    // 0x1507075C: nop

;}
RECOMP_FUNC void func_15009894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15009898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500989C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150098A0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150098A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150098A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150098AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150098B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150098B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150098B8: jal         0x151615F8
    // 0x150098BC: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x150098BC: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x150098C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150098C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150098C8: jr          $ra
    // 0x150098CC: nop

    return;
    return;
    // 0x150098CC: nop

;}
RECOMP_FUNC void func_1512AD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512AD54: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1512AD58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1512AD5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512AD60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1512AD64: lwc1        $f12, 0x2C0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x1512AD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512AD6C: jal         0x1512B53C
    // 0x1512AD70: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    func_1512B53C(rdram, ctx);
        goto after_0;
    // 0x1512AD70: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1512AD74: bne         $v0, $zero, L_1512B0EC
    if (ctx->r2 != 0) {
        // 0x1512AD78: lwc1        $f12, 0x60($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
            goto L_1512B0EC;
    }
    // 0x1512AD78: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1512AD7C: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x1512AD80: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1512AD84: addiu       $t8, $t8, -0x3E10
    ctx->r24 = ADD32(ctx->r24, -0X3E10);
    // 0x1512AD88: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x1512AD8C: bne         $t7, $zero, L_1512ADD4
    if (ctx->r15 != 0) {
        // 0x1512AD90: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_1512ADD4;
    }
    // 0x1512AD90: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1512AD94: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512AD98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1512AD9C: lwc1        $f0, 0x17C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X17C);
    // 0x1512ADA0: lwc1        $f4, 0x180($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X180);
    // 0x1512ADA4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1512ADA8: nop

    // 0x1512ADAC: bc1fl       L_1512ADD8
    if (!c1cs) {
        // 0x1512ADB0: lbu         $a0, 0x23D($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X23D);
            goto L_1512ADD8;
    }
    goto skip_0;
    // 0x1512ADB0: lbu         $a0, 0x23D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X23D);
    skip_0:
    // 0x1512ADB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512ADB8: nop

    // 0x1512ADBC: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x1512ADC0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x1512ADC4: nop

    // 0x1512ADC8: bc1fl       L_1512ADD8
    if (!c1cs) {
        // 0x1512ADCC: lbu         $a0, 0x23D($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X23D);
            goto L_1512ADD8;
    }
    goto skip_1;
    // 0x1512ADCC: lbu         $a0, 0x23D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X23D);
    skip_1:
    // 0x1512ADD0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_1512ADD4:
    // 0x1512ADD4: lbu         $a0, 0x23D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X23D);
L_1512ADD8:
    // 0x1512ADD8: lw          $a1, 0x2BC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2BC);
    // 0x1512ADDC: lw          $a3, 0x2C4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C4);
    // 0x1512ADE0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x1512ADE4: addiu       $t0, $t0, -0x3E08
    ctx->r8 = ADD32(ctx->r8, -0X3E08);
    // 0x1512ADE8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1512ADEC: addiu       $t9, $t9, -0x3E0C
    ctx->r25 = ADD32(ctx->r25, -0X3E0C);
    // 0x1512ADF0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1512ADF4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1512ADF8: jal         0x1501A764
    // 0x1512ADFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1501A764(rdram, ctx);
        goto after_1;
    // 0x1512ADFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x1512AE00: lbu         $t4, 0x23D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X23D);
    // 0x1512AE04: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1512AE08: lw          $t3, -0x19D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19D8);
    // 0x1512AE0C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1512AE10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512AE14: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1512AE18: lwc1        $f8, -0x3E08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3E08);
    // 0x1512AE1C: sll         $t5, $t5, 7
    ctx->r13 = S32(ctx->r13 << 7);
    // 0x1512AE20: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512AE24: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    // 0x1512AE28: lwc1        $f12, 0x2C($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x1512AE2C: lwc1        $f18, -0x3E10($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E10);
    // 0x1512AE30: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1512AE34: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1512AE38: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1512AE3C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1512AE40: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1512AE44: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x1512AE48: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1512AE4C: nop

    // 0x1512AE50: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1512AE54: beql        $at, $zero, L_1512AE68
    if (ctx->r1 == 0) {
        // 0x1512AE58: lwc1        $f8, 0x30($a1)
        ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
            goto L_1512AE68;
    }
    goto skip_2;
    // 0x1512AE58: lwc1        $f8, 0x30($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
    skip_2:
    // 0x1512AE5C: b           L_1512AE90
    // 0x1512AE60: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
        goto L_1512AE90;
    // 0x1512AE60: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x1512AE64: lwc1        $f8, 0x30($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
L_1512AE68:
    // 0x1512AE68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1512AE6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1512AE70: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x1512AE74: nop

    // 0x1512AE78: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1512AE7C: beq         $at, $zero, L_1512AE8C
    if (ctx->r1 == 0) {
        // 0x1512AE80: nop
    
            goto L_1512AE8C;
    }
    // 0x1512AE80: nop

    // 0x1512AE84: b           L_1512AE8C
    // 0x1512AE88: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_1512AE8C;
    // 0x1512AE88: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_1512AE8C:
    // 0x1512AE8C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
L_1512AE90:
    // 0x1512AE90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512AE94: lwc1        $f18, -0x3E0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E0C);
    // 0x1512AE98: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    // 0x1512AE9C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x1512AEA0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1512AEA4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x1512AEA8: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1512AEAC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1512AEB0: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1512AEB4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x1512AEB8: nop

    // 0x1512AEBC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1512AEC0: beql        $at, $zero, L_1512AED4
    if (ctx->r1 == 0) {
        // 0x1512AEC4: lwc1        $f8, 0x28($a1)
        ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
            goto L_1512AED4;
    }
    goto skip_3;
    // 0x1512AEC4: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    skip_3:
    // 0x1512AEC8: b           L_1512AEFC
    // 0x1512AECC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
        goto L_1512AEFC;
    // 0x1512AECC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x1512AED0: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
L_1512AED4:
    // 0x1512AED4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1512AED8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1512AEDC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x1512AEE0: nop

    // 0x1512AEE4: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1512AEE8: beq         $at, $zero, L_1512AEF8
    if (ctx->r1 == 0) {
        // 0x1512AEEC: nop
    
            goto L_1512AEF8;
    }
    // 0x1512AEEC: nop

    // 0x1512AEF0: b           L_1512AEF8
    // 0x1512AEF4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_1512AEF8;
    // 0x1512AEF4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_1512AEF8:
    // 0x1512AEF8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_1512AEFC:
    // 0x1512AEFC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1512AF00: nop

    // 0x1512AF04: bc1tl       L_1512AF5C
    if (c1cs) {
        // 0x1512AF08: sh          $t2, 0x5F8($s0)
        MEM_H(0X5F8, ctx->r16) = ctx->r10;
            goto L_1512AF5C;
    }
    goto skip_4;
    // 0x1512AF08: sh          $t2, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r10;
    skip_4:
    // 0x1512AF0C: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x1512AF10: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x1512AF14: nop

    // 0x1512AF18: bc1tl       L_1512AF5C
    if (c1cs) {
        // 0x1512AF1C: sh          $t2, 0x5F8($s0)
        MEM_H(0X5F8, ctx->r16) = ctx->r10;
            goto L_1512AF5C;
    }
    goto skip_5;
    // 0x1512AF1C: sh          $t2, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r10;
    skip_5:
    // 0x1512AF20: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x1512AF24: nop

    // 0x1512AF28: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512AF2C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1512AF30: nop

    // 0x1512AF34: bc1tl       L_1512AF5C
    if (c1cs) {
        // 0x1512AF38: sh          $t2, 0x5F8($s0)
        MEM_H(0X5F8, ctx->r16) = ctx->r10;
            goto L_1512AF5C;
    }
    goto skip_6;
    // 0x1512AF38: sh          $t2, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r10;
    skip_6:
    // 0x1512AF3C: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x1512AF40: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1512AF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512AF48: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x1512AF4C: nop

    // 0x1512AF50: bc1fl       L_1512AF68
    if (!c1cs) {
        // 0x1512AF54: sb          $t4, 0x8B8($s0)
        MEM_B(0X8B8, ctx->r16) = ctx->r12;
            goto L_1512AF68;
    }
    goto skip_7;
    // 0x1512AF54: sb          $t4, 0x8B8($s0)
    MEM_B(0X8B8, ctx->r16) = ctx->r12;
    skip_7:
    // 0x1512AF58: sh          $t2, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r10;
L_1512AF5C:
    // 0x1512AF5C: b           L_1512B0EC
    // 0x1512AF60: sb          $zero, 0x8B8($s0)
    MEM_B(0X8B8, ctx->r16) = 0;
        goto L_1512B0EC;
    // 0x1512AF60: sb          $zero, 0x8B8($s0)
    MEM_B(0X8B8, ctx->r16) = 0;
    // 0x1512AF64: sb          $t4, 0x8B8($s0)
    MEM_B(0X8B8, ctx->r16) = ctx->r12;
L_1512AF68:
    // 0x1512AF68: sh          $a2, 0x8BA($s0)
    MEM_H(0X8BA, ctx->r16) = ctx->r6;
    // 0x1512AF6C: jal         0x1512B1B8
    // 0x1512AF70: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_1512B1B8(rdram, ctx);
        goto after_2;
    // 0x1512AF70: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_2:
    // 0x1512AF74: addiu       $v0, $s0, 0x2F8
    ctx->r2 = ADD32(ctx->r16, 0X2F8);
    // 0x1512AF78: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1512AF7C: addiu       $t3, $sp, 0x54
    ctx->r11 = ADD32(ctx->r29, 0X54);
    // 0x1512AF80: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1512AF84: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1512AF88: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1512AF8C: addiu       $a2, $a2, -0x3E04
    ctx->r6 = ADD32(ctx->r6, -0X3E04);
    // 0x1512AF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512AF94: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x1512AF98: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1512AF9C: addiu       $a1, $s0, 0x3EC
    ctx->r5 = ADD32(ctx->r16, 0X3EC);
    // 0x1512AFA0: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1512AFA4: jal         0x1512B730
    // 0x1512AFA8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_1512B730(rdram, ctx);
        goto after_3;
    // 0x1512AFA8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_3:
    // 0x1512AFAC: lwc1        $f2, 0x3EC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3EC);
    // 0x1512AFB0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1512AFB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512AFB8: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x1512AFBC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x1512AFC0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1512AFC4: addiu       $a1, $s0, 0x2BC
    ctx->r5 = ADD32(ctx->r16, 0X2BC);
    // 0x1512AFC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1512AFCC: bc1fl       L_1512B0A8
    if (!c1cs) {
        // 0x1512AFD0: sh          $t0, 0x5F8($s0)
        MEM_H(0X5F8, ctx->r16) = ctx->r8;
            goto L_1512B0A8;
    }
    goto skip_8;
    // 0x1512AFD0: sh          $t0, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r8;
    skip_8:
    // 0x1512AFD4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1512AFD8: jal         0x1508EF80
    // 0x1512AFDC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    func_1508EF80(rdram, ctx);
        goto after_4;
    // 0x1512AFDC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    after_4:
    // 0x1512AFE0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1512AFE4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1512AFE8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1512AFEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1512AFF0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x1512AFF4: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
    // 0x1512AFF8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x1512AFFC: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x1512B000: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x1512B004: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512B008: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x1512B00C: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x1512B010: beq         $t9, $zero, L_1512B02C
    if (ctx->r25 == 0) {
        // 0x1512B014: addiu       $a2, $s0, 0x3FC
        ctx->r6 = ADD32(ctx->r16, 0X3FC);
            goto L_1512B02C;
    }
    // 0x1512B014: addiu       $a2, $s0, 0x3FC
    ctx->r6 = ADD32(ctx->r16, 0X3FC);
    // 0x1512B018: lwc1        $f12, 0x3674($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3674);
    // 0x1512B01C: mul.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1512B020: nop

    // 0x1512B024: mul.s       $f2, $f16, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1512B028: nop

L_1512B02C:
    // 0x1512B02C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1512B030: lwc1        $f18, 0x7B4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512B034: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1512B038: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x1512B03C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x1512B040: jal         0x150495B0
    // 0x1512B044: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_150495B0(rdram, ctx);
        goto after_5;
    // 0x1512B044: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x1512B048: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1512B04C: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1512B050: addiu       $a0, $s0, 0x2FC
    ctx->r4 = ADD32(ctx->r16, 0X2FC);
    // 0x1512B054: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1512B058: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512B05C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1512B060: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x1512B064: addiu       $a2, $s0, 0x400
    ctx->r6 = ADD32(ctx->r16, 0X400);
    // 0x1512B068: jal         0x150495B0
    // 0x1512B06C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_6;
    // 0x1512B06C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x1512B070: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1512B074: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1512B078: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x1512B07C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1512B080: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512B084: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1512B088: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x1512B08C: addiu       $a2, $s0, 0x404
    ctx->r6 = ADD32(ctx->r16, 0X404);
    // 0x1512B090: jal         0x150495B0
    // 0x1512B094: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_7;
    // 0x1512B094: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x1512B098: sh          $zero, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = 0;
    // 0x1512B09C: b           L_1512B0A8
    // 0x1512B0A0: nop

        goto L_1512B0A8;
    // 0x1512B0A0: nop

    // 0x1512B0A4: sh          $t0, 0x5F8($s0)
    MEM_H(0X5F8, ctx->r16) = ctx->r8;
L_1512B0A8:
    // 0x1512B0A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512B0AC: lwc1        $f8, -0x3E04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3E04);
    // 0x1512B0B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1512B0B4: nop

    // 0x1512B0B8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x1512B0BC: nop

    // 0x1512B0C0: bc1tl       L_1512B0D8
    if (c1cs) {
        // 0x1512B0C4: lw          $t1, 0x240($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X240);
            goto L_1512B0D8;
    }
    goto skip_9;
    // 0x1512B0C4: lw          $t1, 0x240($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X240);
    skip_9:
    // 0x1512B0C8: lwc1        $f18, 0x2FC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512B0CC: sub.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x1512B0D0: swc1        $f4, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f4.u32l;
    // 0x1512B0D4: lw          $t1, 0x240($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X240);
L_1512B0D8:
    // 0x1512B0D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512B0DC: bnel        $t1, $at, L_1512B0EC
    if (ctx->r9 != ctx->r1) {
        // 0x1512B0E0: sw          $zero, 0x698($s0)
        MEM_W(0X698, ctx->r16) = 0;
            goto L_1512B0EC;
    }
    goto skip_10;
    // 0x1512B0E0: sw          $zero, 0x698($s0)
    MEM_W(0X698, ctx->r16) = 0;
    skip_10:
    // 0x1512B0E4: sw          $zero, 0x240($s0)
    MEM_W(0X240, ctx->r16) = 0;
    // 0x1512B0E8: sw          $zero, 0x698($s0)
    MEM_W(0X698, ctx->r16) = 0;
L_1512B0EC:
    // 0x1512B0EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1512B0F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1512B0F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x1512B0F8: jr          $ra
    // 0x1512B0FC: nop

    return;
    return;
    // 0x1512B0FC: nop

;}

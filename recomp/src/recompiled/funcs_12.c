#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1501C880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C880: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1501C884: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501C888: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x1501C88C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501C890: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1501C894: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501C898: addiu       $t2, $t2, -0x1638
    ctx->r10 = ADD32(ctx->r10, -0X1638);
    // 0x1501C89C: addiu       $a3, $a3, -0x1630
    ctx->r7 = ADD32(ctx->r7, -0X1630);
    // 0x1501C8A0: addiu       $v1, $v1, -0x152C
    ctx->r3 = ADD32(ctx->r3, -0X152C);
    // 0x1501C8A4: addiu       $s0, $s0, -0x1640
    ctx->r16 = ADD32(ctx->r16, -0X1640);
    // 0x1501C8A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501C8AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1501C8B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1501C8B4: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x1501C8B8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501C8BC: lw          $t6, 0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X4);
    // 0x1501C8C0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x1501C8C4: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x1501C8C8: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x1501C8CC: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x1501C8D0: addiu       $t4, $t4, -0x1528
    ctx->r12 = ADD32(ctx->r12, -0X1528);
    // 0x1501C8D4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1501C8D8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x1501C8DC: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x1501C8E0: subu        $t1, $t6, $t7
    ctx->r9 = SUB32(ctx->r14, ctx->r15);
    // 0x1501C8E4: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x1501C8E8: sra         $t8, $t1, 3
    ctx->r24 = S32(SIGNED(ctx->r9) >> 3);
    // 0x1501C8EC: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x1501C8F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1501C8F4: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x1501C8F8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1501C8FC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x1501C900: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x1501C904: sra         $t4, $a0, 3
    ctx->r12 = S32(SIGNED(ctx->r4) >> 3);
    // 0x1501C908: bltz        $t4, L_1501C91C
    if (SIGNED(ctx->r12) < 0) {
        // 0x1501C90C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_1501C91C;
    }
    // 0x1501C90C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x1501C910: slt         $at, $t1, $t4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1501C914: beq         $at, $zero, L_1501C9A8
    if (ctx->r1 == 0) {
        // 0x1501C918: nop
    
            goto L_1501C9A8;
    }
    // 0x1501C918: nop

L_1501C91C:
    // 0x1501C91C: jal         0x1501A39C
    // 0x1501C920: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_1501A39C(rdram, ctx);
        goto after_0;
    // 0x1501C920: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1501C924: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x1501C928: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501C92C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1501C930: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1501C934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1501C938: lw          $t7, -0x1628($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1628);
    // 0x1501C93C: addiu       $a3, $a3, -0x1630
    ctx->r7 = ADD32(ctx->r7, -0X1630);
    // 0x1501C940: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501C944: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501C948: addiu       $t2, $t2, -0x1638
    ctx->r10 = ADD32(ctx->r10, -0X1638);
    // 0x1501C94C: addiu       $v1, $v1, -0x152C
    ctx->r3 = ADD32(ctx->r3, -0X152C);
    // 0x1501C950: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1501C954: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1501C958: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x1501C95C: lui         $t9, 0xE900
    ctx->r25 = S32(0XE900 << 16);
    // 0x1501C960: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x1501C964: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x1501C968: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1501C96C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1501C970: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x1501C974: lui         $t4, 0xDF00
    ctx->r12 = S32(0XDF00 << 16);
    // 0x1501C978: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x1501C97C: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x1501C980: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1501C984: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1501C988: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x1501C98C: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x1501C990: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1501C994: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x1501C998: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x1501C99C: subu        $a0, $t8, $t0
    ctx->r4 = SUB32(ctx->r24, ctx->r8);
    // 0x1501C9A0: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x1501C9A4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_1501C9A8:
    // 0x1501C9A8: bltz        $a0, L_1501C9B8
    if (SIGNED(ctx->r4) < 0) {
        // 0x1501C9AC: addiu       $t3, $t1, -0x190
        ctx->r11 = ADD32(ctx->r9, -0X190);
            goto L_1501C9B8;
    }
    // 0x1501C9AC: addiu       $t3, $t1, -0x190
    ctx->r11 = ADD32(ctx->r9, -0X190);
    // 0x1501C9B0: slt         $at, $t3, $a0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1501C9B4: beq         $at, $zero, L_1501CA0C
    if (ctx->r1 == 0) {
        // 0x1501C9B8: addiu       $t4, $t1, -0x190
        ctx->r12 = ADD32(ctx->r9, -0X190);
            goto L_1501CA0C;
    }
L_1501C9B8:
    // 0x1501C9B8: addiu       $t4, $t1, -0x190
    ctx->r12 = ADD32(ctx->r9, -0X190);
    // 0x1501C9BC: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x1501C9C0: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x1501C9C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C9C8: sw          $t6, -0x1630($at)
    MEM_W(-0X1630, ctx->r1) = ctx->r14;
    // 0x1501C9CC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x1501C9D0: lui         $t8, 0xE900
    ctx->r24 = S32(0XE900 << 16);
    // 0x1501C9D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x1501C9D8: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1501C9DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1501C9E0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1501C9E4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x1501C9E8: lui         $t3, 0xDF00
    ctx->r11 = S32(0XDF00 << 16);
    // 0x1501C9EC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x1501C9F0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x1501C9F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1501C9F8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1501C9FC: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x1501CA00: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1501CA04: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x1501CA08: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
L_1501CA0C:
    // 0x1501CA0C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA10: sw          $t0, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->r8;
    // 0x1501CA14: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x1501CA18: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x1501CA1C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x1501CA20: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1501CA24: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1501CA28: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA2C: subu        $t6, $t8, $t5
    ctx->r14 = SUB32(ctx->r24, ctx->r13);
    // 0x1501CA30: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x1501CA34: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x1501CA38: jal         0x1501CC3C
    // 0x1501CA3C: sw          $t9, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r25;
    func_1501CC3C(rdram, ctx);
        goto after_1;
    // 0x1501CA3C: sw          $t9, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r25;
    after_1:
    // 0x1501CA40: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501CA44: addiu       $v1, $v1, -0x152C
    ctx->r3 = ADD32(ctx->r3, -0X152C);
    // 0x1501CA48: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1501CA50: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1501CA54: sw          $t4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r12;
    // 0x1501CA58: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA5C: lui         $v0, 0x1003
    ctx->r2 = S32(0X1003 << 16);
    // 0x1501CA60: addiu       $v0, $v0, -0x6F30
    ctx->r2 = ADD32(ctx->r2, -0X6F30);
    // 0x1501CA64: sw          $t5, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r13;
    // 0x1501CA68: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA6C: lui         $t9, 0x1003
    ctx->r25 = S32(0X1003 << 16);
    // 0x1501CA70: addiu       $t9, $t9, -0x6E60
    ctx->r25 = ADD32(ctx->r25, -0X6E60);
    // 0x1501CA74: sw          $v0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r2;
    // 0x1501CA78: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1501CA7C: subu        $t3, $t9, $v0
    ctx->r11 = SUB32(ctx->r25, ctx->r2);
    // 0x1501CA80: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501CA84: sw          $t3, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r11;
    // 0x1501CA88: lbu         $t8, -0x1460($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1460);
    // 0x1501CA8C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501CA90: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501CA94: beq         $t8, $zero, L_1501CAC0
    if (ctx->r24 == 0) {
        // 0x1501CA98: addiu       $a0, $a0, -0x19E9
        ctx->r4 = ADD32(ctx->r4, -0X19E9);
            goto L_1501CAC0;
    }
    // 0x1501CA98: addiu       $a0, $a0, -0x19E9
    ctx->r4 = ADD32(ctx->r4, -0X19E9);
    // 0x1501CA9C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAA0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501CAA4: addiu       $t5, $t5, 0x1060
    ctx->r13 = ADD32(ctx->r13, 0X1060);
    // 0x1501CAA8: sw          $t5, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r13;
    // 0x1501CAAC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501CAB0: lw          $t7, -0x1464($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1464);
    // 0x1501CAB4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAB8: b           L_1501CADC
    // 0x1501CABC: sw          $t7, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r15;
        goto L_1501CADC;
    // 0x1501CABC: sw          $t7, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r15;
L_1501CAC0:
    // 0x1501CAC0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAC4: addiu       $t3, $t3, -0x1450
    ctx->r11 = ADD32(ctx->r11, -0X1450);
    // 0x1501CAC8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501CACC: sw          $t3, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r11;
    // 0x1501CAD0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAD4: lw          $t8, -0x1530($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1530);
    // 0x1501CAD8: sw          $t8, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r24;
L_1501CADC:
    // 0x1501CADC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAE0: addiu       $t6, $zero, 0x800
    ctx->r14 = ADD32(0, 0X800);
    // 0x1501CAE4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1501CAE8: sw          $t6, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->r14;
    // 0x1501CAEC: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1501CAF0: addiu       $t9, $t9, -0x41F0
    ctx->r25 = ADD32(ctx->r25, -0X41F0);
    // 0x1501CAF4: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x1501CAF8: sw          $t9, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r25;
    // 0x1501CAFC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB00: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x1501CB04: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1501CB08: sw          $t4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r12;
    // 0x1501CB0C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB10: lw          $t5, -0x7F70($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7F70);
    // 0x1501CB14: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x1501CB18: addiu       $t3, $t3, -0x5A18
    ctx->r11 = ADD32(ctx->r11, -0X5A18);
    // 0x1501CB1C: sw          $t5, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r13;
    // 0x1501CB20: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB24: lw          $t7, -0x7F6C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7F6C);
    // 0x1501CB28: addiu       $t8, $zero, 0xC00
    ctx->r24 = ADD32(0, 0XC00);
    // 0x1501CB2C: addiu       $t6, $zero, 0x23
    ctx->r14 = ADD32(0, 0X23);
    // 0x1501CB30: sw          $t7, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->r15;
    // 0x1501CB34: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB38: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    // 0x1501CB3C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB40: sw          $t8, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r24;
    // 0x1501CB44: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB48: sw          $t6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r14;
    // 0x1501CB4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1501CB50: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1501CB54: beql        $t9, $zero, L_1501CB70
    if (ctx->r25 == 0) {
        // 0x1501CB58: lbu         $t8, 0x0($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X0);
            goto L_1501CB70;
    }
    goto skip_0;
    // 0x1501CB58: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    skip_0:
    // 0x1501CB5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB60: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x1501CB64: ori         $t4, $t3, 0x40
    ctx->r12 = ctx->r11 | 0X40;
    // 0x1501CB68: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x1501CB6C: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
L_1501CB70:
    // 0x1501CB70: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501CB74: beql        $t8, $zero, L_1501CBA0
    if (ctx->r24 == 0) {
        // 0x1501CB78: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_1501CBA0;
    }
    goto skip_1;
    // 0x1501CB78: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x1501CB7C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1501CB80: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x1501CB84: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x1501CB88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1501CB8C: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x1501CB90: or          $t3, $t5, $t9
    ctx->r11 = ctx->r13 | ctx->r25;
    // 0x1501CB94: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x1501CB98: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x1501CB9C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_1501CBA0:
    // 0x1501CBA0: addiu       $t4, $t4, -0x15F0
    ctx->r12 = ADD32(ctx->r12, -0X15F0);
    // 0x1501CBA4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501CBA8: sw          $t4, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->r12;
    // 0x1501CBAC: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x1501CBB0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1501CBB4: addiu       $t5, $t5, -0x1598
    ctx->r13 = ADD32(ctx->r13, -0X1598);
    // 0x1501CBB8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x1501CBBC: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x1501CBC0: sw          $t9, 0x5C($t3)
    MEM_W(0X5C, ctx->r11) = ctx->r25;
    // 0x1501CBC4: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x1501CBC8: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1501CBCC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501CBD0: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x1501CBD4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1501CBD8: lw          $t6, -0x5518($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5518);
    // 0x1501CBDC: jal         0x10024F10
    // 0x1501CBE0: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_2;
    // 0x1501CBE0: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    after_2:
    // 0x1501CBE4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501CBE8: addiu       $v1, $v1, -0x152C
    ctx->r3 = ADD32(ctx->r3, -0X152C);
    // 0x1501CBEC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1501CBF0: addiu       $a0, $a0, -0x4E18
    ctx->r4 = ADD32(ctx->r4, -0X4E18);
    // 0x1501CBF4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x1501CBF8: jal         0x10023580
    // 0x1501CBFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x1501CBFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x1501CC00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1501CC04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501CC08: addiu       $v0, $v0, -0x1558
    ctx->r2 = ADD32(ctx->r2, -0X1558);
    // 0x1501CC0C: beql        $t5, $zero, L_1501CC24
    if (ctx->r13 == 0) {
        // 0x1501CC10: lh          $t4, 0x0($v0)
        ctx->r12 = MEM_H(ctx->r2, 0X0);
            goto L_1501CC24;
    }
    goto skip_2;
    // 0x1501CC10: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    skip_2:
    // 0x1501CC14: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x1501CC18: xori        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 ^ 0X1;
    // 0x1501CC1C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x1501CC20: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
L_1501CC24:
    // 0x1501CC24: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x1501CC28: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x1501CC2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501CC30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501CC34: jr          $ra
    // 0x1501CC38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1501CC38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15004574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004574: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15004578: lbu         $v0, -0x4078($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4078);
    // 0x1500457C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15004580: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15004584: beq         $v0, $at, L_150045B4
    if (ctx->r2 == ctx->r1) {
        // 0x15004588: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_150045B4;
    }
    // 0x15004588: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1500458C: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15004590: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x15004594: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15004598: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1500459C: lw          $t8, 0x1C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C);
    // 0x150045A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150045A4: sw          $t8, -0x4074($at)
    MEM_W(-0X4074, ctx->r1) = ctx->r24;
    // 0x150045A8: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x150045AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150045B0: sw          $t9, -0x4070($at)
    MEM_W(-0X4070, ctx->r1) = ctx->r25;
L_150045B4:
    // 0x150045B4: jr          $ra
    // 0x150045B8: nop

    return;
    return;
    // 0x150045B8: nop

;}
RECOMP_FUNC void sqrtf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10026530: jr          $ra
    // 0x10026534: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    return;
    // 0x10026534: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void func_1511FC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511FC2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1511FC30: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1511FC34: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x1511FC38: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1511FC3C: jr          $ra
    // 0x1511FC40: nop

    return;
    return;
    // 0x1511FC40: nop

;}
RECOMP_FUNC void func_1001DAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001DAE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1001DAE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001DAEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1001DAF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1001DAF4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1001DAF8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x1001DAFC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1001DB00: bne         $t6, $at, L_1001DB3C
    if (ctx->r14 != ctx->r1) {
        // 0x1001DB04: nop
    
            goto L_1001DB3C;
    }
    // 0x1001DB04: nop

    // 0x1001DB08: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001DB0C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001DB10: lwc1        $f8, -0x3870($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3870);
    // 0x1001DB14: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001DB18: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x1001DB1C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1001DB20: nop

    // 0x1001DB24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1001DB28: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1001DB2C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1001DB30: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x1001DB34: b           L_1001DB5C
    // 0x1001DB38: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
        goto L_1001DB5C;
    // 0x1001DB38: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
L_1001DB3C:
    // 0x1001DB3C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x1001DB40: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1001DB44: bne         $t2, $at, L_1001DB5C
    if (ctx->r10 != ctx->r1) {
        // 0x1001DB48: nop
    
            goto L_1001DB5C;
    }
    // 0x1001DB48: nop

    // 0x1001DB4C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001DB50: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x1001DB54: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001DB58: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
L_1001DB5C:
    // 0x1001DB5C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001DB60: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001DB64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1001DB68: lw          $t7, 0x54($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X54);
    // 0x1001DB6C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x1001DB70: nop

    // 0x1001DB74: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1001DB78: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x1001DB7C: jal         0x1001CF38
    // 0x1001DB80: nop

    func_1001CF38(rdram, ctx);
        goto after_0;
    // 0x1001DB80: nop

    after_0:
    // 0x1001DB84: b           L_1001DB8C
    // 0x1001DB88: nop

        goto L_1001DB8C;
    // 0x1001DB88: nop

L_1001DB8C:
    // 0x1001DB8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001DB90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001DB94: jr          $ra
    // 0x1001DB98: nop

    return;
    return;
    // 0x1001DB98: nop

;}
RECOMP_FUNC void func_15158078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515807C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15158080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15158084: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15158088: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x1515808C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x15158090: addiu       $a0, $a0, 0x6060
    ctx->r4 = ADD32(ctx->r4, 0X6060);
    // 0x15158094: jal         0x15169260
    // 0x15158098: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15158098: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x1515809C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151580A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151580A4: jr          $ra
    // 0x151580A8: nop

    return;
    return;
    // 0x151580A8: nop

;}
RECOMP_FUNC void func_15155CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15155CFC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15155D00: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x15155D04: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15155D08: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15155D0C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x15155D10: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15155D14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15155D18: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15155D1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15155D20: lbu         $v0, 0x11($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X11);
    // 0x15155D24: lbu         $a3, 0x10($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X10);
    // 0x15155D28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15155D2C: beq         $v0, $at, L_15155D3C
    if (ctx->r2 == ctx->r1) {
        // 0x15155D30: sll         $t8, $a3, 2
        ctx->r24 = S32(ctx->r7 << 2);
            goto L_15155D3C;
    }
    // 0x15155D30: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x15155D34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15155D38: bne         $v0, $at, L_15155EE0
    if (ctx->r2 != ctx->r1) {
        // 0x15155D3C: subu        $t8, $t8, $a3
        ctx->r24 = SUB32(ctx->r24, ctx->r7);
            goto L_15155EE0;
    }
L_15155D3C:
    // 0x15155D3C: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15155D40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155D44: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x15155D48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155D4C: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15155D50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155D54: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x15155D58: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15155D5C: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15155D60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155D64: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x15155D68: lw          $t0, 0x31C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X31C);
    // 0x15155D6C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x15155D70: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15155D74: lbu         $t1, 0x75($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X75);
    // 0x15155D78: addu        $t3, $t3, $a2
    ctx->r11 = ADD32(ctx->r11, ctx->r6);
    // 0x15155D7C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15155D80: bne         $t1, $at, L_15155D98
    if (ctx->r9 != ctx->r1) {
        // 0x15155D84: lui         $t2, 0x800E
        ctx->r10 = S32(0X800E << 16);
            goto L_15155D98;
    }
    // 0x15155D84: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15155D88: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x15155D8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15155D90: b           L_15155DA4
    // 0x15155D94: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
        goto L_15155DA4;
    // 0x15155D94: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
L_15155D98:
    // 0x15155D98: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15155D9C: nop

    // 0x15155DA0: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
L_15155DA4:
    // 0x15155DA4: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x15155DA8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15155DAC: addu        $t3, $t3, $a2
    ctx->r11 = ADD32(ctx->r11, ctx->r6);
    // 0x15155DB0: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x15155DB4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15155DB8: lwc1        $f4, 0x380($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X380);
    // 0x15155DBC: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x15155DC0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x15155DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15155DC8: jal         0x15096934
    // 0x15155DCC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_15096934(rdram, ctx);
        goto after_0;
    // 0x15155DCC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15155DD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15155DD4: jal         0x15048A40
    // 0x15155DD8: lbu         $a0, 0x12($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X12);
    func_15048A40(rdram, ctx);
        goto after_1;
    // 0x15155DD8: lbu         $a0, 0x12($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X12);
    after_1:
    // 0x15155DDC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x15155DE0: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x15155DE4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15155DE8: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x15155DEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15155DF0: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15155DF4: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15155DF8: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15155DFC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15155E00: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15155E04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15155E08: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x15155E0C: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x15155E10: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x15155E14: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x15155E18: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x15155E1C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15155E20: lwc1        $f4, 0x98($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X98);
    // 0x15155E24: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15155E28: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x15155E2C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15155E30: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15155E34: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15155E38: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x15155E3C: addu        $a0, $s1, $t6
    ctx->r4 = ADD32(ctx->r17, ctx->r14);
    // 0x15155E40: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15155E44: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x15155E48: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x15155E4C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x15155E50: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x15155E54: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x15155E58: jal         0x15043D90
    // 0x15155E5C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_15043D90(rdram, ctx);
        goto after_2;
    // 0x15155E5C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x15155E60: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x15155E64: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x15155E68: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15155E6C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15155E70: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15155E74: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x15155E78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15155E7C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15155E80: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15155E84: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x15155E88: addiu       $t1, $t0, 0x18
    ctx->r9 = ADD32(ctx->r8, 0X18);
    // 0x15155E8C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x15155E90: lui         $t2, 0xD9FF
    ctx->r10 = S32(0XD9FF << 16);
    // 0x15155E94: ori         $t2, $t2, 0xFFFE
    ctx->r10 = ctx->r10 | 0XFFFE;
    // 0x15155E98: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x15155E9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15155EA0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15155EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15155EA8: lui         $t3, 0xDE00
    ctx->r11 = S32(0XDE00 << 16);
    // 0x15155EAC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x15155EB0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15155EB4: lw          $t4, 0x3E0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3E0);
    // 0x15155EB8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15155EBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15155EC0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15155EC4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15155EC8: lui         $t6, 0xD9FF
    ctx->r14 = S32(0XD9FF << 16);
    // 0x15155ECC: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x15155ED0: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x15155ED4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15155ED8: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x15155EDC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_15155EE0:
    // 0x15155EE0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15155EE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15155EE8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15155EEC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15155EF0: jr          $ra
    // 0x15155EF4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x15155EF4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_150719CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150719CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150719D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150719D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150719D8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150719DC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150719E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150719E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150719E8: jal         0x150FA520
    // 0x150719EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150FA520(rdram, ctx);
        goto after_0;
    // 0x150719EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150719F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150719F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150719F8: jr          $ra
    // 0x150719FC: nop

    return;
    return;
    // 0x150719FC: nop

;}
RECOMP_FUNC void func_150FAE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FAE18: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x150FAE1C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150FAE20: sll         $s1, $a0, 16
    ctx->r17 = S32(ctx->r4 << 16);
    // 0x150FAE24: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x150FAE28: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x150FAE2C: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x150FAE30: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x150FAE34: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x150FAE38: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x150FAE3C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150FAE40: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x150FAE44: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x150FAE48: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150FAE4C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150FAE50: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150FAE54: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x150FAE58: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x150FAE5C: sh          $s1, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r17;
    // 0x150FAE60: addiu       $t7, $zero, 0x61
    ctx->r15 = ADD32(0, 0X61);
    // 0x150FAE64: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150FAE68: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150FAE6C: sb          $t7, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r15;
    // 0x150FAE70: sb          $t8, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r24;
    // 0x150FAE74: sb          $t0, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r8;
    // 0x150FAE78: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x150FAE7C: lui         $t4, 0x6
    ctx->r12 = S32(0X6 << 16);
    // 0x150FAE80: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x150FAE84: addiu       $t1, $zero, 0xA5
    ctx->r9 = ADD32(0, 0XA5);
    // 0x150FAE88: addiu       $t2, $zero, 0x17
    ctx->r10 = ADD32(0, 0X17);
    // 0x150FAE8C: ori         $t3, $t3, 0x405
    ctx->r11 = ctx->r11 | 0X405;
    // 0x150FAE90: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x150FAE94: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150FAE98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150FAE9C: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x150FAEA0: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x150FAEA4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150FAEA8: sb          $t9, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r25;
    // 0x150FAEAC: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
    // 0x150FAEB0: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x150FAEB4: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
    // 0x150FAEB8: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    // 0x150FAEBC: sb          $t5, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r13;
    // 0x150FAEC0: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    // 0x150FAEC4: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x150FAEC8: sw          $t8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r24;
    // 0x150FAECC: sb          $t0, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r8;
    // 0x150FAED0: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x150FAED4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FAED8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FAEDC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FAEE0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FAEE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FAEE8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FAEEC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150FAEF0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150FAEF4: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x150FAEF8: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x150FAEFC: sb          $zero, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = 0;
    // 0x150FAF00: sh          $s1, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r17;
    // 0x150FAF04: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x150FAF08: sb          $zero, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = 0;
    // 0x150FAF0C: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x150FAF10: sb          $t1, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r9;
    // 0x150FAF14: sb          $t2, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r10;
    // 0x150FAF18: sb          $t3, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r11;
    // 0x150FAF1C: sb          $t4, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r12;
    // 0x150FAF20: sb          $t5, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r13;
    // 0x150FAF24: sb          $t6, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = ctx->r14;
    // 0x150FAF28: sb          $t7, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r15;
    // 0x150FAF2C: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x150FAF30: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x150FAF34: sb          $t8, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r24;
    // 0x150FAF38: addiu       $t0, $t0, 0x5480
    ctx->r8 = ADD32(ctx->r8, 0X5480);
    // 0x150FAF3C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x150FAF40: addiu       $t9, $sp, 0x108
    ctx->r25 = ADD32(ctx->r29, 0X108);
    // 0x150FAF44: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x150FAF48: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150FAF4C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x150FAF50: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x150FAF54: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x150FAF58: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150FAF5C: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150FAF60: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150FAF64: sh          $t4, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r12;
    // 0x150FAF68: sh          $t5, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r13;
    // 0x150FAF6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150FAF70: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x150FAF74: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x150FAF78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150FAF7C: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x150FAF80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FAF84: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x150FAF88: jal         0x15157010
    // 0x150FAF8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15157010(rdram, ctx);
        goto after_0;
    // 0x150FAF8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150FAF90: beq         $v0, $zero, L_150FAFA4
    if (ctx->r2 == 0) {
        // 0x150FAF94: addiu       $a1, $sp, 0x11C
        ctx->r5 = ADD32(ctx->r29, 0X11C);
            goto L_150FAFA4;
    }
    // 0x150FAF94: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FAF98: addiu       $a0, $v0, 0x120
    ctx->r4 = ADD32(ctx->r2, 0X120);
    // 0x150FAF9C: jal         0x10022EC0
    // 0x150FAFA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150FAFA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
L_150FAFA4:
    // 0x150FAFA4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x150FAFA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150FAFAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FAFB0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150FAFB4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150FAFB8: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x150FAFBC: addiu       $s3, $sp, 0x11C
    ctx->r19 = ADD32(ctx->r29, 0X11C);
    // 0x150FAFC0: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FAFC4: addiu       $t7, $t7, 0x1D20
    ctx->r15 = ADD32(ctx->r15, 0X1D20);
    // 0x150FAFC8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150FAFCC: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x150FAFD0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FAFD4: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x150FAFD8: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x150FAFDC: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x150FAFE0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x150FAFE4: sw          $t2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r10;
    // 0x150FAFE8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150FAFEC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FAFF0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FAFF4: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x150FAFF8: lw          $t2, 0xC($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XC);
    // 0x150FAFFC: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x150FB000: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FB004: sw          $t2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r10;
    // 0x150FB008: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x150FB00C: sh          $t0, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r8;
    // 0x150FB010: sb          $t3, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r11;
    // 0x150FB014: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FB018: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FB01C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150FB020: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150FB024: sh          $t1, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r9;
    // 0x150FB028: sh          $t9, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r25;
    // 0x150FB02C: sb          $t4, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r12;
    // 0x150FB030: sb          $t5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r13;
    // 0x150FB034: sb          $t6, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r14;
    // 0x150FB038: sb          $t8, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r24;
    // 0x150FB03C: sb          $t7, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r15;
    // 0x150FB040: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x150FB044: lui         $t3, 0x6
    ctx->r11 = S32(0X6 << 16);
    // 0x150FB048: lui         $at, 0x41C6
    ctx->r1 = S32(0X41C6 << 16);
    // 0x150FB04C: sh          $s1, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r17;
    // 0x150FB050: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FB054: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FB058: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150FB05C: ori         $t0, $t0, 0x405
    ctx->r8 = ctx->r8 | 0X405;
    // 0x150FB060: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x150FB064: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150FB068: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150FB06C: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x150FB070: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x150FB074: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150FB078: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150FB07C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150FB080: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x150FB084: sb          $zero, 0x82($sp)
    MEM_B(0X82, ctx->r29) = 0;
    // 0x150FB088: sb          $t2, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r10;
    // 0x150FB08C: sb          $t1, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r9;
    // 0x150FB090: sb          $t9, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r25;
    // 0x150FB094: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x150FB098: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x150FB09C: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x150FB0A0: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x150FB0A4: sb          $t4, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r12;
    // 0x150FB0A8: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x150FB0AC: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x150FB0B0: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
    // 0x150FB0B4: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x150FB0B8: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x150FB0BC: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x150FB0C0: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x150FB0C4: swc1        $f12, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f12.u32l;
    // 0x150FB0C8: swc1        $f12, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f12.u32l;
    // 0x150FB0CC: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x150FB0D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150FB0D4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
L_150FB0D8:
    // 0x150FB0D8: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x150FB0DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150FB0E0: bgez        $s0, L_150FB0F4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x150FB0E4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_150FB0F4;
    }
    // 0x150FB0E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150FB0E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FB0EC: nop

    // 0x150FB0F0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_150FB0F4:
    // 0x150FB0F4: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150FB0F8: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x150FB0FC: addu        $t1, $s2, $t2
    ctx->r9 = ADD32(ctx->r18, ctx->r10);
    // 0x150FB100: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150FB104: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150FB108: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x150FB10C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150FB110: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x150FB114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FB118: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x150FB11C: lh          $t9, 0x0($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X0);
    // 0x150FB120: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x150FB124: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x150FB128: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150FB12C: jal         0x1515548C
    // 0x150FB130: sb          $t9, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r25;
    func_1515548C(rdram, ctx);
        goto after_2;
    // 0x150FB130: sb          $t9, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r25;
    after_2:
    // 0x150FB134: beq         $v0, $zero, L_150FB148
    if (ctx->r2 == 0) {
        // 0x150FB138: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_150FB148;
    }
    // 0x150FB138: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x150FB13C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150FB140: jal         0x10022EC0
    // 0x150FB144: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x150FB144: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
L_150FB148:
    // 0x150FB148: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150FB14C: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x150FB150: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x150FB154: bne         $at, $zero, L_150FB0D8
    if (ctx->r1 != 0) {
        // 0x150FB158: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_150FB0D8;
    }
    // 0x150FB158: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x150FB15C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150FB160: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150FB164: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150FB168: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150FB16C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150FB170: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x150FB174: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x150FB178: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x150FB17C: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x150FB180: jr          $ra
    // 0x150FB184: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x150FB184: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_15030F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15030F94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15030F98: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x15030F9C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x15030FA0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x15030FA4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x15030FA8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x15030FAC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15030FB0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x15030FB4: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x15030FB8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15030FBC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15030FC0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15030FC4: beq         $s2, $zero, L_15030FE8
    if (ctx->r18 == 0) {
        // 0x15030FC8: nop
    
            goto L_15030FE8;
    }
    // 0x15030FC8: nop

    // 0x15030FCC: lw          $t6, 0x1D4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1D4);
    // 0x15030FD0: beq         $t6, $zero, L_15030FE8
    if (ctx->r14 == 0) {
        // 0x15030FD4: nop
    
            goto L_15030FE8;
    }
    // 0x15030FD4: nop

    // 0x15030FD8: lbu         $t7, 0x3B($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X3B);
    // 0x15030FDC: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15030FE0: bne         $t7, $zero, L_15030FF0
    if (ctx->r15 != 0) {
        // 0x15030FE4: nop
    
            goto L_15030FF0;
    }
    // 0x15030FE4: nop

L_15030FE8:
    // 0x15030FE8: b           L_1503104C
    // 0x15030FEC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_1503104C;
    // 0x15030FEC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_15030FF0:
    // 0x15030FF0: lw          $s0, 0x3EE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3EE0);
    // 0x15030FF4: beql        $s0, $zero, L_1503104C
    if (ctx->r16 == 0) {
        // 0x15030FF8: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_1503104C;
    }
    goto skip_0;
    // 0x15030FF8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_0:
    // 0x15030FFC: lbu         $t8, 0x3B($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3B);
L_15031000:
    // 0x15031000: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x15031004: lw          $s1, 0x54($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X54);
    // 0x15031008: bne         $t8, $t9, L_15031024
    if (ctx->r24 != ctx->r25) {
        // 0x1503100C: nop
    
            goto L_15031024;
    }
    // 0x1503100C: nop

    // 0x15031010: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x15031014: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15031018: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1503101C: bne         $t0, $zero, L_1503102C
    if (ctx->r8 != 0) {
        // 0x15031020: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_1503102C;
    }
    // 0x15031020: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
L_15031024:
    // 0x15031024: b           L_15031040
    // 0x15031028: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
        goto L_15031040;
    // 0x15031028: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_1503102C:
    // 0x1503102C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x15031030: jal         0x150311C4
    // 0x15031034: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    func_150311C4(rdram, ctx);
        goto after_0;
    // 0x15031034: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    after_0:
    // 0x15031038: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1503103C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_15031040:
    // 0x15031040: bnel        $s0, $zero, L_15031000
    if (ctx->r16 != 0) {
        // 0x15031044: lbu         $t8, 0x3B($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X3B);
            goto L_15031000;
    }
    goto skip_1;
    // 0x15031044: lbu         $t8, 0x3B($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3B);
    skip_1:
    // 0x15031048: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_1503104C:
    // 0x1503104C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15031050: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15031054: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15031058: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1503105C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x15031060: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x15031064: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x15031068: jr          $ra
    // 0x1503106C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1503106C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151D1388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D1388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D138C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D1390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D1394: jal         0x151D1368
    // 0x151D1398: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D1368(rdram, ctx);
        goto after_0;
    // 0x151D1398: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D139C: jal         0x1514933C
    // 0x151D13A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151D13A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D13A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D13A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D13AC: jr          $ra
    // 0x151D13B0: nop

    return;
    return;
    // 0x151D13B0: nop

;}
RECOMP_FUNC void func_15146BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15146BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15146BE0: jal         0x15146BF8
    // 0x15146BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15146BF8(rdram, ctx);
        goto after_0;
    // 0x15146BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15146BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15146BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15146BF0: jr          $ra
    // 0x15146BF4: nop

    return;
    return;
    // 0x15146BF4: nop

;}
RECOMP_FUNC void func_151564F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151564F8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151564FC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15156500: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15156504: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15156508: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1515650C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15156510: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x15156514: addiu       $t3, $sp, 0x59
    ctx->r11 = ADD32(ctx->r29, 0X59);
    // 0x15156518: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1515651C: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    // 0x15156520: lh          $a1, 0xA2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XA2);
    // 0x15156524: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x15156528: jal         0x151D5D60
    // 0x1515652C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1515652C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x15156530: lbu         $t4, 0x59($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X59);
    // 0x15156534: beql        $t4, $zero, L_1515657C
    if (ctx->r12 == 0) {
        // 0x15156538: lh          $t7, 0xA2($sp)
        ctx->r15 = MEM_H(ctx->r29, 0XA2);
            goto L_1515657C;
    }
    goto skip_0;
    // 0x15156538: lh          $t7, 0xA2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XA2);
    skip_0:
    // 0x1515653C: lh          $t5, 0xA2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XA2);
    // 0x15156540: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x15156544: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x15156548: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1515654C: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x15156550: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x15156554: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15156558: jal         0x10022EC0
    // 0x1515655C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1515655C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_1:
    // 0x15156560: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x15156564: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15156568: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x1515656C: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x15156570: jal         0x10022EC0
    // 0x15156574: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15156574: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_2:
    // 0x15156578: lh          $t7, 0xA2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XA2);
L_1515657C:
    // 0x1515657C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15156580: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x15156584: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15156588: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1515658C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15156590: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15156594: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15156598: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1515659C: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151565A0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151565A4: addiu       $t1, $t0, 0x2F8
    ctx->r9 = ADD32(ctx->r8, 0X2F8);
    // 0x151565A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151565AC: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x151565B0: sb          $t2, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r10;
    // 0x151565B4: lbu         $a0, 0x40($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X40);
    // 0x151565B8: lhu         $t6, 0x44($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X44);
    // 0x151565BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151565C0: andi        $t3, $a0, 0x6
    ctx->r11 = ctx->r4 & 0X6;
    // 0x151565C4: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x151565C8: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151565CC: andi        $t7, $t6, 0xFF00
    ctx->r15 = ctx->r14 & 0XFF00;
    // 0x151565D0: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x151565D4: andi        $t9, $a0, 0x2
    ctx->r25 = ctx->r4 & 0X2;
    // 0x151565D8: sb          $t8, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r24;
    // 0x151565DC: beq         $t9, $zero, L_151565E8
    if (ctx->r25 == 0) {
        // 0x151565E0: sb          $t6, 0x5B($sp)
        MEM_B(0X5B, ctx->r29) = ctx->r14;
            goto L_151565E8;
    }
    // 0x151565E0: sb          $t6, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r14;
    // 0x151565E4: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
L_151565E8:
    // 0x151565E8: andi        $t0, $a0, 0x4
    ctx->r8 = ctx->r4 & 0X4;
    // 0x151565EC: beq         $t0, $zero, L_151565FC
    if (ctx->r8 == 0) {
        // 0x151565F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151565FC;
    }
    // 0x151565F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151565F4: ori         $t1, $v1, 0x400
    ctx->r9 = ctx->r3 | 0X400;
    // 0x151565F8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_151565FC:
    // 0x151565FC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x15156600: ori         $t2, $a1, 0x5
    ctx->r10 = ctx->r5 | 0X5;
    // 0x15156604: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x15156608: lui         $a2, 0x1F
    ctx->r6 = S32(0X1F << 16);
    // 0x1515660C: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x15156610: jal         0x15142B7C
    // 0x15156614: or          $a1, $t2, $at
    ctx->r5 = ctx->r10 | ctx->r1;
    func_15142B7C(rdram, ctx);
        goto after_3;
    // 0x15156614: or          $a1, $t2, $at
    ctx->r5 = ctx->r10 | ctx->r1;
    after_3:
    // 0x15156618: lbu         $t4, 0x4C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4C);
    // 0x1515661C: addiu       $s1, $sp, 0x67
    ctx->r17 = ADD32(ctx->r29, 0X67);
    // 0x15156620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x15156624: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15156628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1515662C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15156630: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15156634: jal         0x15142C10
    // 0x15156638: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15142C10(rdram, ctx);
        goto after_4;
    // 0x15156638: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_4:
    // 0x1515663C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15156640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15156644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15156648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515664C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15156650: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15156654: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15156658: jal         0x15142CF0
    // 0x1515665C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_15142CF0(rdram, ctx);
        goto after_5;
    // 0x1515665C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_5:
    // 0x15156660: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15156664: lbu         $a1, 0x5A($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5A);
    // 0x15156668: jal         0x1513F4E4
    // 0x1515666C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_6;
    // 0x1515666C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x15156670: lbu         $t5, 0x5B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X5B);
    // 0x15156674: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15156678: addiu       $t7, $t7, 0x4AC8
    ctx->r15 = ADD32(ctx->r15, 0X4AC8);
    // 0x1515667C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x15156680: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x15156684: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x15156688: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1515668C: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x15156690: ori         $a1, $a1, 0x2CA0
    ctx->r5 = ctx->r5 | 0X2CA0;
    // 0x15156694: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15156698: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x1515669C: jal         0x15142FBC
    // 0x151566A0: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    func_15142FBC(rdram, ctx);
        goto after_7;
    // 0x151566A0: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    after_7:
    // 0x151566A4: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151566A8: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151566AC: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151566B0: lwc1        $f14, 0x28($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151566B4: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x151566B8: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x151566BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151566C0: sub.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x151566C4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151566C8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151566CC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151566D0: sub.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x151566D4: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x151566D8: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151566DC: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x151566E0: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151566E4: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151566E8: sub.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x151566EC: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151566F0: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x151566F4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151566F8: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151566FC: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15156700: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15156704: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x15156708: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1515670C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x15156710: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x15156714: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15156718: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x1515671C: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15156720: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15156724: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15156728: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1515672C: nop

    // 0x15156730: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15156734: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15156738: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1515673C: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x15156740: nop

    // 0x15156744: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15156748: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1515674C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15156750: nop

    // 0x15156754: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15156758: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x1515675C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15156760: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15156764: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15156768: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1515676C: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x15156770: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x15156774: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15156778: bc1f        L_15156794
    if (!c1cs) {
        // 0x1515677C: nop
    
            goto L_15156794;
    }
    // 0x1515677C: nop

    // 0x15156780: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15156784: nop

    // 0x15156788: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x1515678C: b           L_151567C0
    // 0x15156790: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_151567C0;
    // 0x15156790: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_15156794:
    // 0x15156794: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15156798: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1515679C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151567A0: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151567A4: mul.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151567A8: nop

    // 0x151567AC: mul.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151567B0: nop

    // 0x151567B4: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151567B8: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x151567BC: mov.s       $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = ctx->f10.fl;
L_151567C0:
    // 0x151567C0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151567C4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x151567C8: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151567CC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x151567D0: nop

    // 0x151567D4: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x151567D8: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151567DC: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x151567E0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151567E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151567E8: nop

    // 0x151567EC: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x151567F0: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151567F4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x151567F8: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151567FC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15156800: nop

    // 0x15156804: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x15156808: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1515680C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x15156810: add.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x15156814: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15156818: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x1515681C: nop

    // 0x15156820: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x15156824: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15156828: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1515682C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15156830: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15156834: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15156838: nop

    // 0x1515683C: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
    // 0x15156840: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15156844: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15156848: add.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1515684C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15156850: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15156854: nop

    // 0x15156858: sh          $t6, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r14;
    // 0x1515685C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15156860: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x15156864: lui         $t7, 0x100
    ctx->r15 = S32(0X100 << 16);
    // 0x15156868: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x1515686C: ori         $t7, $t7, 0x3006
    ctx->r15 = ctx->r15 | 0X3006;
    // 0x15156870: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15156874: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x15156878: nop

    // 0x1515687C: sh          $t9, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r25;
    // 0x15156880: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15156884: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x15156888: lui         $t9, 0x500
    ctx->r25 = S32(0X500 << 16);
    // 0x1515688C: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x15156890: ori         $t9, $t9, 0x204
    ctx->r25 = ctx->r25 | 0X204;
    // 0x15156894: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15156898: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x1515689C: nop

    // 0x151568A0: sh          $t2, 0x22($t3)
    MEM_H(0X22, ctx->r11) = ctx->r10;
    // 0x151568A4: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151568A8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151568AC: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x151568B0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151568B4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x151568B8: nop

    // 0x151568BC: sh          $t5, 0x24($t6)
    MEM_H(0X24, ctx->r14) = ctx->r13;
    // 0x151568C0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151568C4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x151568C8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151568CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151568D0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151568D4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151568D8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x151568DC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x151568E0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x151568E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151568E8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x151568EC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x151568F0: jr          $ra
    // 0x151568F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x151568F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15060BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15060BE4: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x15060BE8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15060BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15060BF0: beq         $v1, $at, L_15060D14
    if (ctx->r3 == ctx->r1) {
        // 0x15060BF4: nop
    
            goto L_15060D14;
    }
    // 0x15060BF4: nop

    // 0x15060BF8: lw          $a1, 0x1D4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1D4);
    // 0x15060BFC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15060C00: beq         $a1, $zero, L_15060D14
    if (ctx->r5 == 0) {
        // 0x15060C04: nop
    
            goto L_15060D14;
    }
    // 0x15060C04: nop

    // 0x15060C08: lbu         $t6, 0x3E90($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E90);
    // 0x15060C0C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15060C10: bne         $t6, $zero, L_15060D14
    if (ctx->r14 != 0) {
        // 0x15060C14: nop
    
            goto L_15060D14;
    }
    // 0x15060C14: nop

    // 0x15060C18: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15060C1C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x15060C20: lw          $v0, 0x1C90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C90);
    // 0x15060C24: lwc1        $f8, 0x150($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15060C28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15060C2C: lh          $t0, 0x14($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X14);
    // 0x15060C30: lbu         $t8, 0x27($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X27);
    // 0x15060C34: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15060C38: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15060C3C: addu        $a2, $a1, $t9
    ctx->r6 = ADD32(ctx->r5, ctx->r25);
    // 0x15060C40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15060C44: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15060C48: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x15060C4C: nop

    // 0x15060C50: bc1tl       L_15060CB8
    if (c1cs) {
        // 0x15060C54: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15060CB8;
    }
    goto skip_0;
    // 0x15060C54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x15060C58: lwc1        $f12, 0x10($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X10);
    // 0x15060C5C: lwc1        $f14, 0x14($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X14);
    // 0x15060C60: lwc1        $f16, 0x18($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X18);
    // 0x15060C64: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15060C68: nop

    // 0x15060C6C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15060C70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15060C74: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15060C78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15060C7C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15060C80: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15060C84: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x15060C88: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x15060C8C: bc1t        L_15060C98
    if (c1cs) {
        // 0x15060C90: nop
    
            goto L_15060C98;
    }
    // 0x15060C90: nop

    // 0x15060C94: div.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_15060C98:
    // 0x15060C98: mul.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x15060C9C: nop

    // 0x15060CA0: mul.s       $f2, $f14, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x15060CA4: nop

    // 0x15060CA8: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15060CAC: b           L_15060CC4
    // 0x15060CB0: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
        goto L_15060CC4;
    // 0x15060CB0: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x15060CB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15060CB8:
    // 0x15060CB8: nop

    // 0x15060CBC: swc1        $f0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f0.u32l;
    // 0x15060CC0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15060CC4:
    // 0x15060CC4: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x15060CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15060CCC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15060CD0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15060CD4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x15060CD8: nop

    // 0x15060CDC: sh          $t2, 0x1BC($a0)
    MEM_H(0X1BC, ctx->r4) = ctx->r10;
    // 0x15060CE0: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x15060CE4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15060CE8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15060CEC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x15060CF0: nop

    // 0x15060CF4: sh          $t4, 0x1BE($a0)
    MEM_H(0X1BE, ctx->r4) = ctx->r12;
    // 0x15060CF8: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x15060CFC: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x15060D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15060D04: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15060D08: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15060D0C: nop

    // 0x15060D10: sh          $t6, 0x1C0($a0)
    MEM_H(0X1C0, ctx->r4) = ctx->r14;
L_15060D14:
    // 0x15060D14: bne         $v0, $zero, L_15060D4C
    if (ctx->r2 != 0) {
        // 0x15060D18: nop
    
            goto L_15060D4C;
    }
    // 0x15060D18: nop

    // 0x15060D1C: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15060D20: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15060D24: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15060D28: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15060D2C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15060D30: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15060D34: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15060D38: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15060D3C: sh          $t8, 0x1BC($a0)
    MEM_H(0X1BC, ctx->r4) = ctx->r24;
    // 0x15060D40: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15060D44: sh          $t0, 0x1BE($a0)
    MEM_H(0X1BE, ctx->r4) = ctx->r8;
    // 0x15060D48: sh          $t2, 0x1C0($a0)
    MEM_H(0X1C0, ctx->r4) = ctx->r10;
L_15060D4C:
    // 0x15060D4C: jr          $ra
    // 0x15060D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15060D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15114348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114348: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x1511434C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15114350: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15114354: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15114358: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1511435C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15114360: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x15114364: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15114368: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x1511436C: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x15114370: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x15114374: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15114378: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x1511437C: sll         $s1, $a0, 2
    ctx->r17 = S32(ctx->r4 << 2);
    // 0x15114380: addu        $s1, $s1, $a0
    ctx->r17 = ADD32(ctx->r17, ctx->r4);
    // 0x15114384: sll         $s1, $s1, 5
    ctx->r17 = S32(ctx->r17 << 5);
    // 0x15114388: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x1511438C: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    // 0x15114390: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    // 0x15114394: swc1        $f20, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f20.u32l;
    // 0x15114398: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x1511439C: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x151143A0: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x151143A4: swc1        $f20, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f20.u32l;
    // 0x151143A8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151143AC: addu        $v0, $t6, $s1
    ctx->r2 = ADD32(ctx->r14, ctx->r17);
    // 0x151143B0: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x151143B4: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x151143B8: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x151143BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x151143C0: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x151143C4: lw          $t1, 0x10C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10C);
    // 0x151143C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151143CC: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x151143D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151143D4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151143D8: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x151143DC: lh          $t0, 0x12($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X12);
    // 0x151143E0: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x151143E4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x151143E8: nop

    // 0x151143EC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151143F0: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151143F4: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x151143F8: lh          $t2, 0x14($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X14);
    // 0x151143FC: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x15114400: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15114404: nop

    // 0x15114408: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511440C: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x15114410: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x15114414: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15114418: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    // 0x1511441C: nop

    // 0x15114420: bc1tl       L_151144A8
    if (c1cs) {
        // 0x15114424: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_151144A8;
    }
    goto skip_0;
    // 0x15114424: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x15114428: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511442C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x15114430: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15114434: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15114438: jal         0x15048190
    // 0x1511443C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x1511443C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x15114440: addiu       $t3, $sp, 0x50
    ctx->r11 = ADD32(ctx->r29, 0X50);
    // 0x15114444: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x15114448: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x1511444C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15114450: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15114454: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15114458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511445C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x15114460: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x15114464: jal         0x150A7960
    // 0x15114468: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15114468: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x1511446C: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x15114470: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x15114474: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x15114478: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1511447C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15114480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15114484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114488: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x1511448C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x15114490: jal         0x150A7960
    // 0x15114494: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_150A7960(rdram, ctx);
        goto after_2;
    // 0x15114494: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_2:
    // 0x15114498: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1511449C: lw          $t9, -0x410C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X410C);
    // 0x151144A0: addu        $v0, $t9, $s1
    ctx->r2 = ADD32(ctx->r25, ctx->r17);
    // 0x151144A4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_151144A8:
    // 0x151144A8: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x151144AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151144B0: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x151144B4: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x151144B8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x151144BC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151144C0: bc1tl       L_1511453C
    if (c1cs) {
        // 0x151144C4: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_1511453C;
    }
    goto skip_1;
    // 0x151144C4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x151144C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151144CC: jal         0x15048190
    // 0x151144D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x151144D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x151144D4: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x151144D8: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x151144DC: addiu       $t2, $sp, 0x58
    ctx->r10 = ADD32(ctx->r29, 0X58);
    // 0x151144E0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151144E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151144E8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151144EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151144F0: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151144F4: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x151144F8: jal         0x150A7960
    // 0x151144FC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    func_150A7960(rdram, ctx);
        goto after_4;
    // 0x151144FC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    after_4:
    // 0x15114500: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x15114504: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x15114508: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x1511450C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15114510: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15114514: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15114518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511451C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15114520: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15114524: jal         0x150A7960
    // 0x15114528: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_150A7960(rdram, ctx);
        goto after_5;
    // 0x15114528: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_5:
    // 0x1511452C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15114530: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15114534: addu        $v0, $t6, $s1
    ctx->r2 = ADD32(ctx->r14, ctx->r17);
    // 0x15114538: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_1511453C:
    // 0x1511453C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114540: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x15114544: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x15114548: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1511454C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15114550: bc1tl       L_151145CC
    if (c1cs) {
        // 0x15114554: lwc1        $f10, 0x4C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_151145CC;
    }
    goto skip_2;
    // 0x15114554: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    skip_2:
    // 0x15114558: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1511455C: jal         0x15048190
    // 0x15114560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_6;
    // 0x15114560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x15114564: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x15114568: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x1511456C: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x15114570: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15114574: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15114578: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1511457C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114580: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15114584: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15114588: jal         0x150A7960
    // 0x1511458C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_150A7960(rdram, ctx);
        goto after_7;
    // 0x1511458C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_7:
    // 0x15114590: addiu       $t0, $sp, 0x5C
    ctx->r8 = ADD32(ctx->r29, 0X5C);
    // 0x15114594: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x15114598: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x1511459C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151145A0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151145A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151145A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151145AC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x151145B0: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x151145B4: jal         0x150A7960
    // 0x151145B8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_150A7960(rdram, ctx);
        goto after_8;
    // 0x151145B8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_8:
    // 0x151145BC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151145C0: lw          $t3, -0x410C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X410C);
    // 0x151145C4: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
    // 0x151145C8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
L_151145CC:
    // 0x151145CC: lw          $a1, 0x60($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X60);
    // 0x151145D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151145D4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x151145D8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x151145DC: jal         0x15048190
    // 0x151145E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    guRotateF(rdram, ctx);
        goto after_9;
    // 0x151145E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x151145E4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151145E8: lw          $t4, -0x410C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X410C);
    // 0x151145EC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151145F0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x151145F4: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x151145F8: lw          $a1, 0x68($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X68);
    // 0x151145FC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x15114600: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x15114604: jal         0x15048190
    // 0x15114608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_10;
    // 0x15114608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x1511460C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114610: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x15114614: jal         0x150A7A48
    // 0x15114618: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_11;
    // 0x15114618: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x1511461C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15114620: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15114624: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15114628: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x1511462C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x15114630: lw          $a1, 0x64($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X64);
    // 0x15114634: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x15114638: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1511463C: jal         0x15048190
    // 0x15114640: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    guRotateF(rdram, ctx);
        goto after_12;
    // 0x15114640: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x15114644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114648: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x1511464C: jal         0x150A7A48
    // 0x15114650: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_13;
    // 0x15114650: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x15114654: addiu       $t8, $sp, 0xF0
    ctx->r24 = ADD32(ctx->r29, 0XF0);
    // 0x15114658: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x1511465C: addiu       $t0, $sp, 0xE8
    ctx->r8 = ADD32(ctx->r29, 0XE8);
    // 0x15114660: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15114664: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15114668: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1511466C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15114670: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x15114674: lw          $a2, 0xF8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF8);
    // 0x15114678: jal         0x150A7960
    // 0x1511467C: lw          $a3, 0xF4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF4);
    func_150A7960(rdram, ctx);
        goto after_14;
    // 0x1511467C: lw          $a3, 0xF4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF4);
    after_14:
    // 0x15114680: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15114684: lw          $t1, -0x410C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X410C);
    // 0x15114688: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1511468C: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x15114690: addu        $v0, $t1, $s1
    ctx->r2 = ADD32(ctx->r9, ctx->r17);
    // 0x15114694: lh          $t2, 0x5A($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X5A);
    // 0x15114698: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x1511469C: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x151146A0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x151146A4: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151146A8: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x151146AC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151146B0: sub.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151146B4: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151146B8: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151146BC: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x151146C0: lh          $t3, 0x5C($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X5C);
    // 0x151146C4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x151146C8: nop

    // 0x151146CC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151146D0: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151146D4: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151146D8: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151146DC: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x151146E0: lh          $t4, 0x5E($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X5E);
    // 0x151146E4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x151146E8: nop

    // 0x151146EC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151146F0: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151146F4: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x151146F8: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x151146FC: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15114700: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x15114704: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x15114708: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x1511470C: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15114710: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x15114714: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x15114718: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x1511471C: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x15114720: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x15114724: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15114728: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1511472C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15114730: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15114734: jr          $ra
    // 0x15114738: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x15114738: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_1515858C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515858C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15158590: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15158594: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15158598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1515859C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151585A0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151585A4: lw          $a1, 0xF8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF8);
    // 0x151585A8: lw          $a2, 0xFC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XFC);
    // 0x151585AC: jal         0x150A8050
    // 0x151585B0: lw          $a3, 0x100($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X100);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151585B0: lw          $a3, 0x100($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X100);
    after_0:
    // 0x151585B4: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151585B8: addiu       $v0, $s0, 0xF8
    ctx->r2 = ADD32(ctx->r16, 0XF8);
    // 0x151585BC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151585C0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x151585C4: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151585C8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151585CC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151585D0: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x151585D4: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151585D8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x151585DC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x151585E0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151585E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151585E8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151585EC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x151585F0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151585F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151585F8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151585FC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x15158600: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158604: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15158608: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1515860C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x15158610: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158614: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15158618: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1515861C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x15158620: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158624: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15158628: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1515862C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x15158630: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158634: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15158638: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1515863C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x15158640: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158644: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15158648: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1515864C: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x15158650: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158654: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15158658: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x1515865C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15158660: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15158664: jal         0x150A7790
    // 0x15158668: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15158668: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x1515866C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15158670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15158674: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15158678: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1515867C: jr          $ra
    // 0x15158680: nop

    return;
    return;
    // 0x15158680: nop

;}
RECOMP_FUNC void func_151A8A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A8A24: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A8A28: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151A8A2C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151A8A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A8A34: lbu         $v0, 0x5C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5C);
    // 0x151A8A38: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151A8A3C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x151A8A40: bnel        $at, $zero, L_151A8A50
    if (ctx->r1 != 0) {
        // 0x151A8A44: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_151A8A50;
    }
    goto skip_0;
    // 0x151A8A44: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    skip_0:
    // 0x151A8A48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A8A4C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
L_151A8A50:
    // 0x151A8A50: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x151A8A54: lw          $v1, -0x69C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X69C);
    // 0x151A8A58: beql        $v1, $zero, L_151A8A6C
    if (ctx->r3 == 0) {
        // 0x151A8A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151A8A6C;
    }
    goto skip_1;
    // 0x151A8A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151A8A60: jalr        $v1
    // 0x151A8A64: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x151A8A64: nop

    after_0:
    // 0x151A8A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151A8A6C:
    // 0x151A8A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A8A70: jr          $ra
    // 0x151A8A74: nop

    return;
    return;
    // 0x151A8A74: nop

;}
RECOMP_FUNC void func_15071DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071DFC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071E00: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15071E04: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x15071E08: jal         0x15192800
    // 0x15071E0C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_15192800(rdram, ctx);
        goto after_0;
    // 0x15071E0C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15071E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071E18: jr          $ra
    // 0x15071E1C: nop

    return;
    return;
    // 0x15071E1C: nop

;}
RECOMP_FUNC void func_15131958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131958: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1513195C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15131960: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15131964: blez        $v0, L_1513199C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15131968: nop
    
            goto L_1513199C;
    }
    // 0x15131968: nop

L_1513196C:
    // 0x1513196C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15131970: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15131974: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15131978: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1513197C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15131980: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15131984: nop

    // 0x15131988: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1513198C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x15131990: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x15131994: bgtz        $v0, L_1513196C
    if (SIGNED(ctx->r2) > 0) {
        // 0x15131998: swc1        $f18, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
            goto L_1513196C;
    }
    // 0x15131998: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
L_1513199C:
    // 0x1513199C: jr          $ra
    // 0x151319A0: nop

    return;
    return;
    // 0x151319A0: nop

;}
RECOMP_FUNC void func_1001147C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001147C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x10011480: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x10011484: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x10011488: beq         $a0, $zero, L_100114C4
    if (ctx->r4 == 0) {
        // 0x1001148C: andi        $t7, $a0, 0xF
        ctx->r15 = ctx->r4 & 0XF;
            goto L_100114C4;
    }
    // 0x1001148C: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x10011490: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x10011494: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x10011498: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1001149C: addiu       $t9, $t9, 0x25E0
    ctx->r25 = ADD32(ctx->r25, 0X25E0);
    // 0x100114A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x100114A4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x100114A8: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x100114AC: bnel        $a0, $t0, L_100114C8
    if (ctx->r4 != ctx->r8) {
        // 0x100114B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_100114C8;
    }
    goto skip_0;
    // 0x100114B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x100114B4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x100114B8: andi        $t1, $v0, 0x7FFF
    ctx->r9 = ctx->r2 & 0X7FFF;
    // 0x100114BC: jr          $ra
    // 0x100114C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    return;
    // 0x100114C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_100114C4:
    // 0x100114C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_100114C8:
    // 0x100114C8: jr          $ra
    // 0x100114CC: nop

    return;
    return;
    // 0x100114CC: nop

;}
RECOMP_FUNC void func_150C5E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5E0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150C5E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5E14: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C5E18: lbu         $t6, 0xB4($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XB4);
    // 0x150C5E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150C5E20: addiu       $v1, $a1, 0xB0
    ctx->r3 = ADD32(ctx->r5, 0XB0);
    // 0x150C5E24: bne         $t6, $zero, L_150C5E30
    if (ctx->r14 != 0) {
        // 0x150C5E28: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_150C5E30;
    }
    // 0x150C5E28: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150C5E2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_150C5E30:
    // 0x150C5E30: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x150C5E34: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x150C5E38: lh          $t7, 0x14($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X14);
    // 0x150C5E3C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x150C5E40: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x150C5E44: lh          $t0, 0x14($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X14);
    // 0x150C5E48: bgezl       $t0, L_150C5EC0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x150C5E4C: lw          $a0, 0x24($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X24);
            goto L_150C5EC0;
    }
    goto skip_0;
    // 0x150C5E4C: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x150C5E50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x150C5E54: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x150C5E58: jal         0x150ADA20
    // 0x150C5E5C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150C5E5C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x150C5E60: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x150C5E64: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150C5E68: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x150C5E6C: lh          $t1, 0x18($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X18);
    // 0x150C5E70: lh          $t4, 0x16($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X16);
    // 0x150C5E74: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x150C5E78: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150C5E7C: mfhi        $t3
    ctx->r11 = hi;
    // 0x150C5E80: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150C5E84: bne         $t2, $zero, L_150C5E90
    if (ctx->r10 != 0) {
        // 0x150C5E88: nop
    
            goto L_150C5E90;
    }
    // 0x150C5E88: nop

    // 0x150C5E8C: break       7
    do_break(353132172);
L_150C5E90:
    // 0x150C5E90: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
    // 0x150C5E94: jal         0x150ADA68
    // 0x150C5E98: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150C5E98: nop

    after_1:
    // 0x150C5E9C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x150C5EA0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150C5EA4: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x150C5EA8: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150C5EAC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150C5EB0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C5EB4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C5EB8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x150C5EBC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
L_150C5EC0:
    // 0x150C5EC0: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x150C5EC4: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150C5EC8: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x150C5ECC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150C5ED0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150C5ED4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x150C5ED8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C5EDC: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C5EE0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150C5EE4: nop

    // 0x150C5EE8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x150C5EEC: sw          $t8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r24;
    // 0x150C5EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5EF4: jr          $ra
    // 0x150C5EF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150C5EF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1512D368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D368: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1512D36C: jr          $ra
    // 0x1512D370: nop

    return;
    return;
    // 0x1512D370: nop

;}
RECOMP_FUNC void func_150F6394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F6398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F639C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F63A0: jal         0x150F631C
    // 0x150F63A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F631C(rdram, ctx);
        goto after_0;
    // 0x150F63A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F63A8: jal         0x15149368
    // 0x150F63AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150F63AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F63B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F63B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F63B8: jr          $ra
    // 0x150F63BC: nop

    return;
    return;
    // 0x150F63BC: nop

;}
RECOMP_FUNC void func_1514DDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DDAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DDB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DDB4: jal         0x1514DCAC
    // 0x1514DDB8: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DDB8: nop

    after_0:
    // 0x1514DDBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DDC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DDC4: jr          $ra
    // 0x1514DDC8: nop

    return;
    return;
    // 0x1514DDC8: nop

;}
RECOMP_FUNC void func_151CCD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CCD1C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151CCD20: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151CCD24: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151CCD28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151CCD2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151CCD30: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x151CCD34: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x151CCD38: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x151CCD3C: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x151CCD40: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x151CCD44: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x151CCD48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CCD4C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151CCD50: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x151CCD54: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x151CCD58: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x151CCD5C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x151CCD60: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151CCD64: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151CCD68: lbu         $t8, 0x23D($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X23D);
    // 0x151CCD6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151CCD70: lbu         $t7, 0xE7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE7);
    // 0x151CCD74: addiu       $t9, $t8, 0xB
    ctx->r25 = ADD32(ctx->r24, 0XB);
    // 0x151CCD78: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x151CCD7C: lbu         $t8, 0xEB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XEB);
    // 0x151CCD80: ori         $t2, $t1, 0x50
    ctx->r10 = ctx->r9 | 0X50;
    // 0x151CCD84: lbu         $t0, 0xEF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XEF);
    // 0x151CCD88: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151CCD8C: sh          $t2, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r10;
    // 0x151CCD90: sh          $t3, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r11;
    // 0x151CCD94: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x151CCD98: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x151CCD9C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CCDA0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151CCDA4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151CCDA8: sb          $t7, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r15;
    // 0x151CCDAC: sb          $t8, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r24;
    // 0x151CCDB0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CCDB4: sb          $t5, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r13;
    // 0x151CCDB8: sb          $t9, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r25;
    // 0x151CCDBC: sb          $t1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r9;
    // 0x151CCDC0: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    // 0x151CCDC4: sb          $t3, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r11;
    // 0x151CCDC8: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x151CCDCC: lui         $t8, 0x1F
    ctx->r24 = S32(0X1F << 16);
    // 0x151CCDD0: sb          $t0, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r8;
    // 0x151CCDD4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CCDD8: ori         $t7, $t7, 0x4
    ctx->r15 = ctx->r15 | 0X4;
    // 0x151CCDDC: ori         $t8, $t8, 0x601
    ctx->r24 = ctx->r24 | 0X601;
    // 0x151CCDE0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x151CCDE4: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x151CCDE8: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x151CCDEC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x151CCDF0: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151CCDF4: sh          $t4, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r12;
    // 0x151CCDF8: sb          $t4, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r12;
    // 0x151CCDFC: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    // 0x151CCE00: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151CCE04: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x151CCE08: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x151CCE0C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x151CCE10: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x151CCE14: sw          $t1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r9;
    // 0x151CCE18: sw          $t2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r10;
    // 0x151CCE1C: sb          $zero, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = 0;
    // 0x151CCE20: sb          $t3, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r11;
    // 0x151CCE24: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151CCE28: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151CCE2C: lbu         $t4, 0x23D($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X23D);
    // 0x151CCE30: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x151CCE34: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151CCE38: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CCE3C: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x151CCE40: sb          $t5, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r13;
    // 0x151CCE44: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x151CCE48: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x151CCE4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151CCE50: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151CCE54: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151CCE58: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151CCE5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCE64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CCE68: jal         0x1515548C
    // 0x151CCE6C: sb          $t4, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r12;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CCE6C: sb          $t4, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r12;
    after_0:
    // 0x151CCE70: beq         $v0, $zero, L_151CCE84
    if (ctx->r2 == 0) {
        // 0x151CCE74: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CCE84;
    }
    // 0x151CCE74: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CCE78: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151CCE7C: jal         0x10022EC0
    // 0x151CCE80: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CCE80: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CCE84:
    // 0x151CCE84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151CCE88: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151CCE8C: jr          $ra
    // 0x151CCE90: nop

    return;
    return;
    // 0x151CCE90: nop

;}
RECOMP_FUNC void func_1515BF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515BF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515BF84: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x1515BF88: jal         0x1514EDF0
    // 0x1515BF8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1515BF8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1515BF90: jal         0x15169824
    // 0x1515BF94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x1515BF94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1515BF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515BF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515BFA0: jr          $ra
    // 0x1515BFA4: nop

    return;
    return;
    // 0x1515BFA4: nop

;}
RECOMP_FUNC void func_15105BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15105BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15105BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15105BD0: lbu         $t6, 0x34($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X34);
    // 0x15105BD4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15105BD8: beql        $t7, $zero, L_15105C18
    if (ctx->r15 == 0) {
        // 0x15105BDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15105C18;
    }
    goto skip_0;
    // 0x15105BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15105BE0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x15105BE4: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x15105BE8: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x15105BEC: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x15105BF0: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x15105BF4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15105BF8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15105BFC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15105C00: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15105C04: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15105C08: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x15105C0C: jal         0x1508B20C
    // 0x15105C10: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    func_1508B20C(rdram, ctx);
        goto after_0;
    // 0x15105C10: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x15105C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15105C18:
    // 0x15105C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15105C1C: jr          $ra
    // 0x15105C20: nop

    return;
    return;
    // 0x15105C20: nop

;}
RECOMP_FUNC void func_151037DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151037DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151037E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151037E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151037E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151037EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151037F0: jr          $ra
    // 0x151037F4: nop

    return;
    return;
    // 0x151037F4: nop

;}
RECOMP_FUNC void func_1501A680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A680: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501A684: lw          $t6, -0x19E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19E0);
    // 0x1501A688: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x1501A68C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1501A690: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x1501A694: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x1501A698: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1501A69C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1501A6A0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501A6A4: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x1501A6A8: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x1501A6AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1501A6B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1501A6B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1501A6B8: lw          $t2, -0x5518($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5518);
    // 0x1501A6BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1501A6C0: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x1501A6C4: jr          $ra
    // 0x1501A6C8: nop

    return;
    return;
    // 0x1501A6C8: nop

;}
RECOMP_FUNC void func_15053750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15053750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15053754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15053758: lwc1        $f12, 0x154($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X154);
    // 0x1505375C: lwc1        $f14, 0x14C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15053760: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15053764: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x15053768: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x1505376C: nop

    // 0x15053770: bc1tl       L_150537F4
    if (c1cs) {
        // 0x15053774: lwc1        $f12, 0x158($a0)
        ctx->f12.u32l = MEM_W(ctx->r4, 0X158);
            goto L_150537F4;
    }
    goto skip_0;
    // 0x15053774: lwc1        $f12, 0x158($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X158);
    skip_0:
    // 0x15053778: lwc1        $f16, 0x15C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x1505377C: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15053780: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15053784: nop

    // 0x15053788: bc1fl       L_150537AC
    if (!c1cs) {
        // 0x1505378C: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_150537AC;
    }
    goto skip_1;
    // 0x1505378C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_1:
    // 0x15053790: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15053794: lw          $a2, 0x150($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X150);
    // 0x15053798: jal         0x15062BDC
    // 0x1505379C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15062BDC(rdram, ctx);
        goto after_0;
    // 0x1505379C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150537A0: b           L_150537F0
    // 0x150537A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_150537F0;
    // 0x150537A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150537A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_150537AC:
    // 0x150537AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150537B0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x150537B4: nop

    // 0x150537B8: bc1f        L_150537C8
    if (!c1cs) {
        // 0x150537BC: nop
    
            goto L_150537C8;
    }
    // 0x150537BC: nop

    // 0x150537C0: b           L_150537C8
    // 0x150537C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150537C8;
    // 0x150537C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150537C8:
    // 0x150537C8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150537CC: lw          $a2, 0x150($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X150);
    // 0x150537D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150537D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150537D8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150537DC: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x150537E0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150537E4: jal         0x15062BDC
    // 0x150537E8: nop

    func_15062BDC(rdram, ctx);
        goto after_1;
    // 0x150537E8: nop

    after_1:
    // 0x150537EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_150537F0:
    // 0x150537F0: lwc1        $f12, 0x158($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X158);
L_150537F4:
    // 0x150537F4: lwc1        $f18, 0x150($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X150);
    // 0x150537F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150537FC: sub.s       $f2, $f12, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x15053800: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x15053804: nop

    // 0x15053808: bc1tl       L_15053888
    if (c1cs) {
        // 0x1505380C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15053888;
    }
    goto skip_2;
    // 0x1505380C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15053810: lwc1        $f16, 0x15C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x15053814: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15053818: lwc1        $f14, 0x14C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x1505381C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15053820: nop

    // 0x15053824: bc1fl       L_15053848
    if (!c1cs) {
        // 0x15053828: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_15053848;
    }
    goto skip_3;
    // 0x15053828: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_3:
    // 0x1505382C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x15053830: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15053834: jal         0x15062BDC
    // 0x15053838: nop

    func_15062BDC(rdram, ctx);
        goto after_2;
    // 0x15053838: nop

    after_2:
    // 0x1505383C: b           L_15053888
    // 0x15053840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15053888;
    // 0x15053840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15053844: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_15053848:
    // 0x15053848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1505384C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x15053850: nop

    // 0x15053854: bc1f        L_15053864
    if (!c1cs) {
        // 0x15053858: nop
    
            goto L_15053864;
    }
    // 0x15053858: nop

    // 0x1505385C: b           L_15053864
    // 0x15053860: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15053864;
    // 0x15053860: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15053864:
    // 0x15053864: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15053868: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x1505386C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15053870: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15053874: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15053878: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1505387C: jal         0x15062BDC
    // 0x15053880: nop

    func_15062BDC(rdram, ctx);
        goto after_3;
    // 0x15053880: nop

    after_3:
    // 0x15053884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15053888:
    // 0x15053888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1505388C: jr          $ra
    // 0x15053890: nop

    return;
    return;
    // 0x15053890: nop

;}
RECOMP_FUNC void func_1501474C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501474C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15014750: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15014754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15014758: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1501475C: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x15014760: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x15014764: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x15014768: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1501476C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15014770: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15014774: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014778: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x1501477C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15014780: lwc1        $f10, 0x6690($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6690);
    // 0x15014784: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15014788: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501478C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x15014790: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15014794: jal         0x15047D60
    // 0x15014798: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15014798: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x1501479C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150147A0: lwc1        $f6, 0x6694($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6694);
    // 0x150147A4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150147A8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150147AC: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150147B0: jal         0x15047C00
    // 0x150147B4: nop

    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x150147B4: nop

    after_1:
    // 0x150147B8: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x150147BC: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x150147C0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150147C4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x150147C8: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150147CC: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150147D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150147D4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x150147D8: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x150147DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150147E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150147E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150147E8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150147EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150147F0: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x150147F4: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150147F8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150147FC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x15014800: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    // 0x15014804: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x15014808: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1501480C: nop

    // 0x15014810: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15014814: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x15014818: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501481C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15014820: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15014824: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15014828: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1501482C: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x15014830: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x15014834: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x15014838: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1501483C: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x15014840: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15014844: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15014848: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1501484C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15014850: add.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15014854: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15014858: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1501485C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x15014860: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x15014864: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x15014868: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x1501486C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15014870: nop

    // 0x15014874: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014878: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1501487C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15014880: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014884: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15014888: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1501488C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15014890: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x15014894: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x15014898: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    // 0x1501489C: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x150148A0: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x150148A4: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x150148A8: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150148AC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x150148B0: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150148B4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150148B8: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x150148BC: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150148C0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150148C4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x150148C8: lh          $t4, 0xA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XA);
    // 0x150148CC: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x150148D0: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x150148D4: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x150148D8: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x150148DC: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x150148E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150148E4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150148E8: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x150148EC: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150148F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150148F4: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150148F8: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150148FC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15014900: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x15014904: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x15014908: lh          $t0, 0xA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA);
    // 0x1501490C: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x15014910: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15014914: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x15014918: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501491C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15014920: addiu       $t0, $sp, 0x5C
    ctx->r8 = ADD32(ctx->r29, 0X5C);
    // 0x15014924: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15014928: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501492C: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15014930: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15014934: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15014938: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x1501493C: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x15014940: lh          $t2, 0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X6);
    // 0x15014944: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15014948: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x1501494C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15014950: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x15014954: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15014958: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1501495C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15014960: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15014964: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15014968: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x1501496C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15014970: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x15014974: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x15014978: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x1501497C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x15014980: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x15014984: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x15014988: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501498C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x15014990: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15014994: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15014998: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1501499C: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150149A0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150149A4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x150149A8: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x150149AC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150149B0: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150149B4: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x150149B8: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150149BC: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150149C0: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150149C4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150149C8: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x150149CC: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x150149D0: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x150149D4: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x150149D8: addu        $t4, $t7, $t6
    ctx->r12 = ADD32(ctx->r15, ctx->r14);
    // 0x150149DC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x150149E0: nop

    // 0x150149E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150149E8: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x150149EC: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x150149F0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150149F4: nop

    // 0x150149F8: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150149FC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x15014A00: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x15014A04: andi        $t2, $t8, 0xFF
    ctx->r10 = ctx->r24 & 0XFF;
    // 0x15014A08: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15014A0C: bgez        $t2, L_15014A20
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15014A10: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_15014A20;
    }
    // 0x15014A10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15014A14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15014A18: nop

    // 0x15014A1C: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_15014A20:
    // 0x15014A20: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15014A24: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014A28: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15014A2C: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x15014A30: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x15014A34: srl         $t9, $t1, 8
    ctx->r25 = S32(U32(ctx->r9) >> 8);
    // 0x15014A38: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x15014A3C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15014A40: bgez        $t0, L_15014A54
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15014A44: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15014A54;
    }
    // 0x15014A44: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014A48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15014A4C: nop

    // 0x15014A50: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_15014A54:
    // 0x15014A54: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15014A58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15014A5C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x15014A60: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15014A64: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x15014A68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014A6C: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15014A70: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15014A74: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x15014A78: srl         $t7, $t3, 16
    ctx->r15 = S32(U32(ctx->r11) >> 16);
    // 0x15014A7C: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x15014A80: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15014A84: bgez        $t6, L_15014A98
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15014A88: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15014A98;
    }
    // 0x15014A88: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15014A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15014A90: nop

    // 0x15014A94: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_15014A98:
    // 0x15014A98: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15014A9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15014AA0: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15014AA4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x15014AA8: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x15014AAC: srl         $t5, $t4, 24
    ctx->r13 = S32(U32(ctx->r12) >> 24);
    // 0x15014AB0: andi        $t8, $t5, 0xFF
    ctx->r24 = ctx->r13 & 0XFF;
    // 0x15014AB4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15014AB8: bgez        $t8, L_15014ACC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15014ABC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15014ACC;
    }
    // 0x15014ABC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15014AC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15014AC4: nop

    // 0x15014AC8: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_15014ACC:
    // 0x15014ACC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15014AD0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15014AD4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15014AD8: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x15014ADC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15014AE0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15014AE4: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x15014AE8: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x15014AEC: sb          $t1, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r9;
    // 0x15014AF0: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x15014AF4: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x15014AF8: srl         $t3, $t9, 8
    ctx->r11 = S32(U32(ctx->r25) >> 8);
    // 0x15014AFC: sb          $t3, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r11;
    // 0x15014B00: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x15014B04: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15014B08: srl         $t4, $t7, 16
    ctx->r12 = S32(U32(ctx->r15) >> 16);
    // 0x15014B0C: sb          $t4, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r12;
    // 0x15014B10: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x15014B14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15014B18: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15014B1C: srl         $t2, $t5, 24
    ctx->r10 = S32(U32(ctx->r13) >> 24);
    // 0x15014B20: sb          $t2, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r10;
    // 0x15014B24: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15014B28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15014B2C: jal         0x15149130
    // 0x15014B30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x15014B30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x15014B34: beq         $v0, $zero, L_15014B48
    if (ctx->r2 == 0) {
        // 0x15014B38: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15014B48;
    }
    // 0x15014B38: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15014B3C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x15014B40: jal         0x10022EC0
    // 0x15014B44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15014B44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
L_15014B48:
    // 0x15014B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15014B4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15014B50: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15014B54: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x15014B58: jr          $ra
    // 0x15014B5C: nop

    return;
    return;
    // 0x15014B5C: nop

;}
RECOMP_FUNC void func_1515BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BA48: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1515BA4C: jr          $ra
    // 0x1515BA50: nop

    return;
    return;
    // 0x1515BA50: nop

;}
RECOMP_FUNC void func_151E562C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E562C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E5630: addiu       $v0, $v0, 0xA8C
    ctx->r2 = ADD32(ctx->r2, 0XA8C);
    // 0x151E5634: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x151E5638: beq         $t6, $zero, L_151E5644
    if (ctx->r14 == 0) {
        // 0x151E563C: nop
    
            goto L_151E5644;
    }
    // 0x151E563C: nop

    // 0x151E5640: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_151E5644:
    // 0x151E5644: jr          $ra
    // 0x151E5648: nop

    return;
    return;
    // 0x151E5648: nop

;}
RECOMP_FUNC void func_150BE9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BE9B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150BE9B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150BE9B8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150BE9BC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x150BE9C0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x150BE9C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BE9C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BE9CC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x150BE9D0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150BE9D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150BE9D8: beq         $a3, $at, L_150BEA08
    if (ctx->r7 == ctx->r1) {
        // 0x150BE9DC: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_150BEA08;
    }
    // 0x150BE9DC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x150BE9E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150BE9E4: beq         $a3, $at, L_150BEA10
    if (ctx->r7 == ctx->r1) {
        // 0x150BE9E8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_150BEA10;
    }
    // 0x150BE9E8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150BE9EC: beq         $a3, $at, L_150BEA18
    if (ctx->r7 == ctx->r1) {
        // 0x150BE9F0: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_150BEA18;
    }
    // 0x150BE9F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150BE9F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150BE9F8: beq         $a3, $at, L_150BEA20
    if (ctx->r7 == ctx->r1) {
        // 0x150BE9FC: nop
    
            goto L_150BEA20;
    }
    // 0x150BE9FC: nop

    // 0x150BEA00: b           L_150BEA20
    // 0x150BEA04: nop

        goto L_150BEA20;
    // 0x150BEA04: nop

L_150BEA08:
    // 0x150BEA08: b           L_150BEA20
    // 0x150BEA0C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
        goto L_150BEA20;
    // 0x150BEA0C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
L_150BEA10:
    // 0x150BEA10: b           L_150BEA20
    // 0x150BEA14: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
        goto L_150BEA20;
    // 0x150BEA14: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_150BEA18:
    // 0x150BEA18: b           L_150BEA20
    // 0x150BEA1C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
        goto L_150BEA20;
    // 0x150BEA1C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_150BEA20:
    // 0x150BEA20: lw          $a0, 0x1D4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D4);
    // 0x150BEA24: jal         0x15142314
    // 0x150BEA28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150BEA28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x150BEA2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150BEA30: bnel        $a0, $zero, L_150BEA44
    if (ctx->r4 != 0) {
        // 0x150BEA34: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_150BEA44;
    }
    goto skip_0;
    // 0x150BEA34: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x150BEA38: b           L_150BEA94
    // 0x150BEA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150BEA94;
    // 0x150BEA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BEA40: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_150BEA44:
    // 0x150BEA44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BEA48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BEA4C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150BEA50: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150BEA54: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x150BEA58: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BEA5C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x150BEA60: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150BEA64: jal         0x1504715C
    // 0x150BEA68: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150BEA68: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x150BEA6C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BEA70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BEA74: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150BEA78: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150BEA7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BEA80: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150BEA84: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x150BEA88: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150BEA8C: jal         0x15046C80
    // 0x150BEA90: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x150BEA90: nop

    after_2:
L_150BEA94:
    // 0x150BEA94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BEA98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150BEA9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150BEAA0: jr          $ra
    // 0x150BEAA4: nop

    return;
    return;
    // 0x150BEAA4: nop

;}
RECOMP_FUNC void func_150D32FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D32FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D3300: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150D3304: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D3308: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D330C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D3310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D3314: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150D3318: bne         $a2, $at, L_150D3348
    if (ctx->r6 != ctx->r1) {
        // 0x150D331C: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_150D3348;
    }
    // 0x150D331C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x150D3320: addiu       $v0, $t7, 0x28
    ctx->r2 = ADD32(ctx->r15, 0X28);
    // 0x150D3324: lbu         $t9, 0x51($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X51);
    // 0x150D3328: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x150D332C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x150D3330: bnel        $t8, $t9, L_150D334C
    if (ctx->r24 != ctx->r25) {
        // 0x150D3334: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D334C;
    }
    goto skip_0;
    // 0x150D3334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150D3338: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150D333C: lbu         $a2, 0xC($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0XC);
    // 0x150D3340: jal         0x150D278C
    // 0x150D3344: lbu         $a3, 0x1($t7)
    ctx->r7 = MEM_BU(ctx->r15, 0X1);
    func_150D278C(rdram, ctx);
        goto after_0;
    // 0x150D3344: lbu         $a3, 0x1($t7)
    ctx->r7 = MEM_BU(ctx->r15, 0X1);
    after_0:
L_150D3348:
    // 0x150D3348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D334C:
    // 0x150D334C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D3350: jr          $ra
    // 0x150D3354: nop

    return;
    return;
    // 0x150D3354: nop

;}
RECOMP_FUNC void func_15145C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145C90: bgez        $a0, L_15145CA0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x15145C94: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_15145CA0;
    }
    // 0x15145C94: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15145C98: jr          $ra
    // 0x15145C9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15145C9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15145CA0:
    // 0x15145CA0: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15145CA4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15145CA8: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15145CAC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15145CB0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15145CB4: lbu         $v0, 0x6F($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X6F);
    // 0x15145CB8: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x15145CBC: xori        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 ^ 0X80;
    // 0x15145CC0: sltiu       $t0, $t0, 0x1
    ctx->r8 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x15145CC4: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x15145CC8: jr          $ra
    // 0x15145CCC: nop

    return;
    return;
    // 0x15145CCC: nop

;}
RECOMP_FUNC void func_1500C8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500C8D0: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1500C8D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1500C8D8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x1500C8DC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x1500C8E0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1500C8E4: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1500C8E8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1500C8EC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1500C8F0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1500C8F4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1500C8F8: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x1500C8FC: jal         0x1514462C
    // 0x1500C900: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    func_1514462C(rdram, ctx);
        goto after_0;
    // 0x1500C900: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    after_0:
    // 0x1500C904: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1500C908: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500C90C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1500C910: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C914: lwc1        $f6, 0x613C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X613C);
    // 0x1500C918: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x1500C91C: addiu       $t6, $zero, 0x4403
    ctx->r14 = ADD32(0, 0X4403);
    // 0x1500C920: mul.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1500C924: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x1500C928: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500C92C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1500C930: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1500C934: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x1500C938: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1500C93C: c.lt.s      $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f28.fl < ctx->f26.fl;
    // 0x1500C940: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1500C944: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x1500C948: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x1500C94C: bc1f        L_1500CE24
    if (!c1cs) {
        // 0x1500C950: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_1500CE24;
    }
    // 0x1500C950: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C954: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1500C958: nop

    // 0x1500C95C: lwc1        $f30, 0x6140($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6140);
    // 0x1500C960: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500C964: sh          $t6, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r14;
    // 0x1500C968: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x1500C96C: sb          $t8, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r24;
    // 0x1500C970: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1500C974: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x1500C978: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1500C97C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1500C980: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500C984: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1500C988: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x1500C98C: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1500C990: sb          $zero, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = 0;
    // 0x1500C994: sb          $zero, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = 0;
    // 0x1500C998: sb          $zero, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = 0;
    // 0x1500C99C: sb          $zero, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = 0;
    // 0x1500C9A0: sb          $zero, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = 0;
    // 0x1500C9A4: sb          $zero, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = 0;
    // 0x1500C9A8: sb          $t9, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r25;
    // 0x1500C9AC: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x1500C9B0: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x1500C9B4: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x1500C9B8: sh          $t0, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r8;
    // 0x1500C9BC: swc1        $f28, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f28.u32l;
    // 0x1500C9C0: sh          $t1, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r9;
    // 0x1500C9C4: sh          $t2, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r10;
    // 0x1500C9C8: sh          $t3, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r11;
    // 0x1500C9CC: sb          $t4, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r12;
    // 0x1500C9D0: sb          $t5, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r13;
    // 0x1500C9D4: sb          $t6, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = ctx->r14;
    // 0x1500C9D8: sb          $t7, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = ctx->r15;
    // 0x1500C9DC: sb          $t8, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r24;
    // 0x1500C9E0: sb          $zero, 0x10D($sp)
    MEM_B(0X10D, ctx->r29) = 0;
    // 0x1500C9E4: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x1500C9E8: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
    // 0x1500C9EC: swc1        $f28, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f28.u32l;
    // 0x1500C9F0: swc1        $f28, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f28.u32l;
    // 0x1500C9F4: lwc1        $f22, 0x6144($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6144);
L_1500C9F8:
    // 0x1500C9F8: jal         0x10024770
    // 0x1500C9FC: nop

    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x1500C9FC: nop

    after_1:
    // 0x1500CA00: jal         0x150ADA20
    // 0x1500CA04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1500CA04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x1500CA08: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CA0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CA10: mflo        $t9
    ctx->r25 = lo;
    // 0x1500CA14: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x1500CA18: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x1500CA1C: bgez        $t0, L_1500CA30
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1500CA20: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1500CA30;
    }
    // 0x1500CA20: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1500CA24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500CA28: nop

    // 0x1500CA2C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1500CA30:
    // 0x1500CA30: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500CA34: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x1500CA38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500CA3C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1500CA40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500CA44: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1500CA48: jal         0x150ADA20
    // 0x1500CA4C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1500CA4C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x1500CA50: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x1500CA54: beq         $t1, $zero, L_1500CA74
    if (ctx->r9 == 0) {
        // 0x1500CA58: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_1500CA74;
    }
    // 0x1500CA58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500CA5C: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x1500CA60: sb          $t2, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r10;
    // 0x1500CA64: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x1500CA68: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x1500CA6C: b           L_1500CA90
    // 0x1500CA70: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
        goto L_1500CA90;
    // 0x1500CA70: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
L_1500CA74:
    // 0x1500CA74: lwc1        $f16, 0x6148($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6148);
    // 0x1500CA78: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x1500CA7C: sb          $t3, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r11;
    // 0x1500CA80: mul.s       $f0, $f20, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x1500CA84: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x1500CA88: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x1500CA8C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_1500CA90:
    // 0x1500CA90: jal         0x10024770
    // 0x1500CA94: nop

    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x1500CA94: nop

    after_4:
    // 0x1500CA98: jal         0x150ADA20
    // 0x1500CA9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500CA9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x1500CAA0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CAA4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1500CAA8: mflo        $t4
    ctx->r12 = lo;
    // 0x1500CAAC: nop

    // 0x1500CAB0: nop

    // 0x1500CAB4: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x1500CAB8: mfhi        $t5
    ctx->r13 = hi;
    // 0x1500CABC: addiu       $t6, $t5, 0x32
    ctx->r14 = ADD32(ctx->r13, 0X32);
    // 0x1500CAC0: jal         0x10024770
    // 0x1500CAC4: sb          $t6, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r14;
    osGetCount_recomp(rdram, ctx);
        goto after_6;
    // 0x1500CAC4: sb          $t6, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r14;
    after_6:
    // 0x1500CAC8: jal         0x150ADA20
    // 0x1500CACC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1500CACC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x1500CAD0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CAD4: mflo        $t7
    ctx->r15 = lo;
    // 0x1500CAD8: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x1500CADC: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x1500CAE0: jal         0x10024770
    // 0x1500CAE4: sb          $t9, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r25;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x1500CAE4: sb          $t9, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r25;
    after_8:
    // 0x1500CAE8: jal         0x150ADA20
    // 0x1500CAEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1500CAEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_9:
    // 0x1500CAF0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CAF4: mflo        $t0
    ctx->r8 = lo;
    // 0x1500CAF8: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x1500CAFC: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x1500CB00: jal         0x10024770
    // 0x1500CB04: sb          $t2, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r10;
    osGetCount_recomp(rdram, ctx);
        goto after_10;
    // 0x1500CB04: sb          $t2, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r10;
    after_10:
    // 0x1500CB08: jal         0x150ADA20
    // 0x1500CB0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1500CB0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x1500CB10: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CB14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CB18: mflo        $t3
    ctx->r11 = lo;
    // 0x1500CB1C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x1500CB20: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1500CB24: bgez        $t4, L_1500CB38
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1500CB28: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1500CB38;
    }
    // 0x1500CB28: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500CB2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500CB30: nop

    // 0x1500CB34: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1500CB38:
    // 0x1500CB38: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1500CB3C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500CB40: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1500CB44: add.s       $f16, $f8, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x1500CB48: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x1500CB4C: jal         0x10024770
    // 0x1500CB50: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_12;
    // 0x1500CB50: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x1500CB54: jal         0x150ADA20
    // 0x1500CB58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1500CB58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x1500CB5C: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CB60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CB64: mflo        $t5
    ctx->r13 = lo;
    // 0x1500CB68: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x1500CB6C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x1500CB70: bgez        $t6, L_1500CB84
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1500CB74: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500CB84;
    }
    // 0x1500CB74: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500CB78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500CB7C: nop

    // 0x1500CB80: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1500CB84:
    // 0x1500CB84: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500CB88: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1500CB8C: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1500CB90: add.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1500CB94: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1500CB98: jal         0x150ADA20
    // 0x1500CB9C: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x1500CB9C: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x1500CBA0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1500CBA4: beq         $t7, $zero, L_1500CBB4
    if (ctx->r15 == 0) {
        // 0x1500CBA8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1500CBB4;
    }
    // 0x1500CBA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1500CBAC: b           L_1500CBB4
    // 0x1500CBB0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_1500CBB4;
    // 0x1500CBB0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_1500CBB4:
    // 0x1500CBB4: jal         0x150ADA20
    // 0x1500CBB8: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1500CBB8: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_15:
    // 0x1500CBBC: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x1500CBC0: beq         $t8, $zero, L_1500CBD0
    if (ctx->r24 == 0) {
        // 0x1500CBC4: lw          $v1, 0x64($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X64);
            goto L_1500CBD0;
    }
    // 0x1500CBC4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x1500CBC8: b           L_1500CBD4
    // 0x1500CBCC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_1500CBD4;
    // 0x1500CBCC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_1500CBD0:
    // 0x1500CBD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1500CBD4:
    // 0x1500CBD4: or          $t0, $s0, $v1
    ctx->r8 = ctx->r16 | ctx->r3;
    // 0x1500CBD8: ori         $t1, $t0, 0xC000
    ctx->r9 = ctx->r8 | 0XC000;
    // 0x1500CBDC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x1500CBE0: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x1500CBE4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x1500CBE8: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x1500CBEC: addiu       $t4, $sp, 0x80
    ctx->r12 = ADD32(ctx->r29, 0X80);
    // 0x1500CBF0: sw          $t3, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r11;
    // 0x1500CBF4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1500CBF8: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x1500CBFC: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x1500CC00: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    // 0x1500CC04: jal         0x15008340
    // 0x1500CC08: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    func_15008340(rdram, ctx);
        goto after_16;
    // 0x1500CC08: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_16:
    // 0x1500CC0C: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1500CC10: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1500CC14: jal         0x10024770
    // 0x1500CC18: sub.s       $f20, $f6, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f14.fl;
    osGetCount_recomp(rdram, ctx);
        goto after_17;
    // 0x1500CC18: sub.s       $f20, $f6, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f14.fl;
    after_17:
    // 0x1500CC1C: jal         0x150ADA20
    // 0x1500CC20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x1500CC20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_18:
    // 0x1500CC24: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CC28: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1500CC2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CC30: mflo        $t5
    ctx->r13 = lo;
    // 0x1500CC34: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x1500CC38: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x1500CC3C: bgez        $t6, L_1500CC50
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1500CC40: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1500CC50;
    }
    // 0x1500CC40: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1500CC44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500CC48: nop

    // 0x1500CC4C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_1500CC50:
    // 0x1500CC50: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500CC54: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500CC58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500CC5C: nop

    // 0x1500CC60: mul.s       $f6, $f20, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x1500CC64: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1500CC68: mul.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1500CC6C: nop

    // 0x1500CC70: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1500CC74: add.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x1500CC78: add.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1500CC7C: swc1        $f2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f2.u32l;
    // 0x1500CC80: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1500CC84: abs.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = fabsf(ctx->f0.fl);
    // 0x1500CC88: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1500CC8C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x1500CC90: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1500CC94: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1500CC98: nop

    // 0x1500CC9C: bc1fl       L_1500CCB0
    if (!c1cs) {
        // 0x1500CCA0: mov.s       $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
            goto L_1500CCB0;
    }
    goto skip_0;
    // 0x1500CCA0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    skip_0:
    // 0x1500CCA4: b           L_1500CCB0
    // 0x1500CCA8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_1500CCB0;
    // 0x1500CCA8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1500CCAC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_1500CCB0:
    // 0x1500CCB0: jal         0x10024770
    // 0x1500CCB4: nop

    osGetCount_recomp(rdram, ctx);
        goto after_19;
    // 0x1500CCB4: nop

    after_19:
    // 0x1500CCB8: jal         0x150ADA20
    // 0x1500CCBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_20;
    // 0x1500CCBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_20:
    // 0x1500CCC0: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CCC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CCC8: mflo        $t7
    ctx->r15 = lo;
    // 0x1500CCCC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x1500CCD0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x1500CCD4: bgez        $t8, L_1500CCE8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1500CCD8: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500CCE8;
    }
    // 0x1500CCD8: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500CCDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500CCE0: nop

    // 0x1500CCE4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_1500CCE8:
    // 0x1500CCE8: mul.s       $f16, $f6, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1500CCEC: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1500CCF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500CCF4: nop

    // 0x1500CCF8: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x1500CCFC: add.s       $f18, $f8, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x1500CD00: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1500CD04: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x1500CD08: jal         0x10024770
    // 0x1500CD0C: nop

    osGetCount_recomp(rdram, ctx);
        goto after_21;
    // 0x1500CD0C: nop

    after_21:
    // 0x1500CD10: jal         0x150ADA20
    // 0x1500CD14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_22;
    // 0x1500CD14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_22:
    // 0x1500CD18: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CD1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CD20: mflo        $t9
    ctx->r25 = lo;
    // 0x1500CD24: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x1500CD28: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1500CD2C: bgez        $t0, L_1500CD40
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1500CD30: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500CD40;
    }
    // 0x1500CD30: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500CD34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500CD38: nop

    // 0x1500CD3C: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_1500CD40:
    // 0x1500CD40: mul.s       $f0, $f16, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1500CD44: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500CD48: lwc1        $f18, 0x614C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X614C);
    // 0x1500CD4C: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1500CD50: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1500CD54: jal         0x10024770
    // 0x1500CD58: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    osGetCount_recomp(rdram, ctx);
        goto after_23;
    // 0x1500CD58: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    after_23:
    // 0x1500CD5C: jal         0x150ADA20
    // 0x1500CD60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_24;
    // 0x1500CD60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_24:
    // 0x1500CD64: multu       $v0, $s0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1500CD68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500CD6C: mflo        $t1
    ctx->r9 = lo;
    // 0x1500CD70: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x1500CD74: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x1500CD78: bgez        $t2, L_1500CD8C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1500CD7C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500CD8C;
    }
    // 0x1500CD7C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500CD80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500CD84: nop

    // 0x1500CD88: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1500CD8C:
    // 0x1500CD8C: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1500CD90: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500CD94: lwc1        $f18, 0x6150($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6150);
    // 0x1500CD98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500CD9C: lwc1        $f6, 0x6154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6154);
    // 0x1500CDA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500CDA4: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1500CDA8: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1500CDAC: jal         0x1510F800
    // 0x1500CDB0: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    func_1510F800(rdram, ctx);
        goto after_25;
    // 0x1500CDB0: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    after_25:
    // 0x1500CDB4: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1500CDB8: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1500CDBC: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1500CDC0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1500CDC4: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x1500CDC8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1500CDCC: jal         0x1510FD20
    // 0x1500CDD0: nop

    func_1510FD20(rdram, ctx);
        goto after_26;
    // 0x1500CDD0: nop

    after_26:
    // 0x1500CDD4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1500CDD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1500CDDC: sw          $v0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r2;
    // 0x1500CDE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1500CDE4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1500CDE8: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x1500CDEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1500CDF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500CDF4: jal         0x15130280
    // 0x1500CDF8: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    func_15130280(rdram, ctx);
        goto after_27;
    // 0x1500CDF8: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    after_27:
    // 0x1500CDFC: beq         $v0, $zero, L_1500CE10
    if (ctx->r2 == 0) {
        // 0x1500CE00: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_1500CE10;
    }
    // 0x1500CE00: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x1500CE04: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x1500CE08: jal         0x10022EC0
    // 0x1500CE0C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_28;
    // 0x1500CE0C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_28:
L_1500CE10:
    // 0x1500CE10: sub.s       $f26, $f26, $f28
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f28.fl;
    // 0x1500CE14: c.lt.s      $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f28.fl < ctx->f26.fl;
    // 0x1500CE18: nop

    // 0x1500CE1C: bc1t        L_1500C9F8
    if (c1cs) {
        // 0x1500CE20: nop
    
            goto L_1500C9F8;
    }
    // 0x1500CE20: nop

L_1500CE24:
    // 0x1500CE24: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x1500CE28: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1500CE2C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1500CE30: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1500CE34: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1500CE38: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1500CE3C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1500CE40: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1500CE44: jr          $ra
    // 0x1500CE48: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x1500CE48: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_151AB920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB920: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151AB924: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151AB928: jr          $ra
    // 0x151AB92C: nop

    return;
    return;
    // 0x151AB92C: nop

;}
RECOMP_FUNC void func_150DF4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DF4B8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150DF4BC: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x150DF4C0: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x150DF4C4: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x150DF4C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150DF4CC: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x150DF4D0: andi        $s7, $a3, 0xFF
    ctx->r23 = ctx->r7 & 0XFF;
    // 0x150DF4D4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150DF4D8: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x150DF4DC: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x150DF4E0: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x150DF4E4: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x150DF4E8: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150DF4EC: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x150DF4F0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150DF4F4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150DF4F8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150DF4FC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150DF500: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150DF504: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x150DF508: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150DF50C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x150DF510: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150DF514: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x150DF518: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x150DF51C: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x150DF520: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150DF524: jal         0x150ADA68
    // 0x150DF528: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150DF528: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    after_0:
    // 0x150DF52C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DF530: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150DF534: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150DF538: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150DF53C: nop

    // 0x150DF540: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150DF544: jal         0x150ADA68
    // 0x150DF548: add.s       $f20, $f4, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f22.fl;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150DF548: add.s       $f20, $f4, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f22.fl;
    after_1:
    // 0x150DF54C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF550: lwc1        $f28, 0xF28($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0XF28);
    // 0x150DF554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF558: lwc1        $f30, 0xF2C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0XF2C);
    // 0x150DF55C: mul.s       $f6, $f28, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x150DF560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF564: lwc1        $f16, 0xF30($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XF30);
    // 0x150DF568: mul.s       $f8, $f30, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x150DF56C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF570: lwc1        $f4, 0xF34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XF34);
    // 0x150DF574: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150DF578: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x150DF57C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF580: addiu       $t9, $zero, 0x6231
    ctx->r25 = ADD32(0, 0X6231);
    // 0x150DF584: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x150DF588: lwc1        $f8, 0xF38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XF38);
    // 0x150DF58C: addiu       $t0, $zero, 0x1A4D
    ctx->r8 = ADD32(0, 0X1A4D);
    // 0x150DF590: add.s       $f2, $f10, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x150DF594: sh          $t0, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r8;
    // 0x150DF598: sh          $t9, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r25;
    // 0x150DF59C: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150DF5A0: nop

    // 0x150DF5A4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150DF5A8: nop

    // 0x150DF5AC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150DF5B0: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x150DF5B4: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x150DF5B8: jal         0x150ADA20
    // 0x150DF5BC: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150DF5BC: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150DF5C0: addiu       $s5, $zero, 0x97
    ctx->r21 = ADD32(0, 0X97);
    // 0x150DF5C4: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150DF5C8: mfhi        $t1
    ctx->r9 = hi;
    // 0x150DF5CC: addiu       $t2, $t1, 0x96
    ctx->r10 = ADD32(ctx->r9, 0X96);
    // 0x150DF5D0: bne         $s5, $zero, L_150DF5DC
    if (ctx->r21 != 0) {
        // 0x150DF5D4: nop
    
            goto L_150DF5DC;
    }
    // 0x150DF5D4: nop

    // 0x150DF5D8: break       7
    do_break(353236440);
L_150DF5DC:
    // 0x150DF5DC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150DF5E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150DF5E4: sh          $t2, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r10;
    // 0x150DF5E8: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x150DF5EC: sb          $zero, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = 0;
    // 0x150DF5F0: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x150DF5F4: sb          $t3, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r11;
    // 0x150DF5F8: jal         0x150ADA20
    // 0x150DF5FC: sh          $t4, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150DF5FC: sh          $t4, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r12;
    after_3:
    // 0x150DF600: addiu       $s6, $zero, 0x9C
    ctx->r22 = ADD32(0, 0X9C);
    // 0x150DF604: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150DF608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF60C: lwc1        $f18, 0xF3C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XF3C);
    // 0x150DF610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF614: lwc1        $f4, 0xF40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XF40);
    // 0x150DF618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF61C: lw          $s4, 0xE0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE0);
    // 0x150DF620: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150DF624: lwc1        $f6, 0xF44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XF44);
    // 0x150DF628: mfhi        $t5
    ctx->r13 = hi;
    // 0x150DF62C: addiu       $t7, $t5, 0x64
    ctx->r15 = ADD32(ctx->r13, 0X64);
    // 0x150DF630: bne         $s6, $zero, L_150DF63C
    if (ctx->r22 != 0) {
        // 0x150DF634: nop
    
            goto L_150DF63C;
    }
    // 0x150DF634: nop

    // 0x150DF638: break       7
    do_break(353236536);
L_150DF63C:
    // 0x150DF63C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DF640: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150DF644: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x150DF648: sb          $t7, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r15;
    // 0x150DF64C: sb          $t6, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r14;
    // 0x150DF650: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x150DF654: sb          $t8, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r24;
    // 0x150DF658: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150DF65C: sb          $t9, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r25;
    // 0x150DF660: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150DF664: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x150DF668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DF66C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DF670: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x150DF674: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x150DF678: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x150DF67C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x150DF680: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x150DF684: jal         0x15149550
    // 0x150DF688: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    func_15149550(rdram, ctx);
        goto after_4;
    // 0x150DF688: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x150DF68C: jal         0x150ADA20
    // 0x150DF690: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150DF690: nop

    after_5:
    // 0x150DF694: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DF698: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DF69C: mfhi        $v1
    ctx->r3 = hi;
    // 0x150DF6A0: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x150DF6A4: blez        $s0, L_150DF7D0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x150DF6A8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_150DF7D0;
    }
    // 0x150DF6A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150DF6AC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150DF6B0: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150DF6B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150DF6B8: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
L_150DF6BC:
    // 0x150DF6BC: jal         0x150ADA20
    // 0x150DF6C0: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150DF6C0: nop

    after_6:
    // 0x150DF6C4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x150DF6C8: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x150DF6CC: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x150DF6D0: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150DF6D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x150DF6D8: jal         0x15143874
    // 0x150DF6DC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_15143874(rdram, ctx);
        goto after_7;
    // 0x150DF6DC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_7:
    // 0x150DF6E0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150DF6E4: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150DF6E8: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150DF6EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DF6F0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x150DF6F4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150DF6F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150DF6FC: jal         0x150ADA68
    // 0x150DF700: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150DF700: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x150DF704: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150DF708: jal         0x150ADA68
    // 0x150DF70C: add.s       $f20, $f8, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f22.fl;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150DF70C: add.s       $f20, $f8, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f22.fl;
    after_9:
    // 0x150DF710: mul.s       $f10, $f28, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x150DF714: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF718: lwc1        $f4, 0xF48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XF48);
    // 0x150DF71C: mul.s       $f16, $f30, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x150DF720: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF724: lwc1        $f8, 0xF4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XF4C);
    // 0x150DF728: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150DF72C: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x150DF730: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF734: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x150DF738: lwc1        $f16, 0xF50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XF50);
    // 0x150DF73C: add.s       $f2, $f18, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x150DF740: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150DF744: nop

    // 0x150DF748: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150DF74C: nop

    // 0x150DF750: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150DF754: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x150DF758: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x150DF75C: jal         0x150ADA20
    // 0x150DF760: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150DF760: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x150DF764: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150DF768: mfhi        $t2
    ctx->r10 = hi;
    // 0x150DF76C: addiu       $t3, $t2, 0x96
    ctx->r11 = ADD32(ctx->r10, 0X96);
    // 0x150DF770: bne         $s5, $zero, L_150DF77C
    if (ctx->r21 != 0) {
        // 0x150DF774: nop
    
            goto L_150DF77C;
    }
    // 0x150DF774: nop

    // 0x150DF778: break       7
    do_break(353236856);
L_150DF77C:
    // 0x150DF77C: sh          $t3, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r11;
    // 0x150DF780: jal         0x150ADA20
    // 0x150DF784: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150DF784: nop

    after_11:
    // 0x150DF788: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150DF78C: mfhi        $t4
    ctx->r12 = hi;
    // 0x150DF790: addiu       $t5, $t4, 0x64
    ctx->r13 = ADD32(ctx->r12, 0X64);
    // 0x150DF794: bne         $s6, $zero, L_150DF7A0
    if (ctx->r22 != 0) {
        // 0x150DF798: nop
    
            goto L_150DF7A0;
    }
    // 0x150DF798: nop

    // 0x150DF79C: break       7
    do_break(353236892);
L_150DF7A0:
    // 0x150DF7A0: sb          $t5, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r13;
    // 0x150DF7A4: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x150DF7A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150DF7AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x150DF7B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DF7B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DF7B8: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x150DF7BC: jal         0x15149550
    // 0x150DF7C0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    func_15149550(rdram, ctx);
        goto after_12;
    // 0x150DF7C0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_12:
    // 0x150DF7C4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x150DF7C8: bne         $s0, $zero, L_150DF6BC
    if (ctx->r16 != 0) {
        // 0x150DF7CC: nop
    
            goto L_150DF6BC;
    }
    // 0x150DF7CC: nop

L_150DF7D0:
    // 0x150DF7D0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x150DF7D4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x150DF7D8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x150DF7DC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x150DF7E0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x150DF7E4: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x150DF7E8: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x150DF7EC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x150DF7F0: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x150DF7F4: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x150DF7F8: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x150DF7FC: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x150DF800: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x150DF804: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x150DF808: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x150DF80C: jr          $ra
    // 0x150DF810: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x150DF810: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_150C1A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C1A40: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x150C1A44: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x150C1A48: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150C1A4C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150C1A50: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150C1A54: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150C1A58: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x150C1A5C: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x150C1A60: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150C1A64: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150C1A68: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150C1A6C: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150C1A70: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150C1A74: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150C1A78: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x150C1A7C: lw          $t6, 0x1D4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1D4);
    // 0x150C1A80: beql        $t6, $zero, L_150C1E04
    if (ctx->r14 == 0) {
        // 0x150C1A84: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150C1E04;
    }
    goto skip_0;
    // 0x150C1A84: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x150C1A88: lwc1        $f4, 0x14C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14C);
    // 0x150C1A8C: lwc1        $f6, 0x150($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X150);
    // 0x150C1A90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C1A94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C1A98: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C1A9C: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x150C1AA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150C1AA4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x150C1AA8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C1AAC: jal         0x150C19C0
    // 0x150C1AB0: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    func_150C19C0(rdram, ctx);
        goto after_0;
    // 0x150C1AB0: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150C1AB4: lhu         $v1, 0x76($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X76);
    // 0x150C1AB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C1ABC: lwc1        $f12, 0x124($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C1AC0: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x150C1AC4: addiu       $v1, $t7, 0x40
    ctx->r3 = ADD32(ctx->r15, 0X40);
    // 0x150C1AC8: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x150C1ACC: bne         $s0, $at, L_150C1ADC
    if (ctx->r16 != ctx->r1) {
        // 0x150C1AD0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_150C1ADC;
    }
    // 0x150C1AD0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x150C1AD4: b           L_150C1AE0
    // 0x150C1AD8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_150C1AE0;
    // 0x150C1AD8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_150C1ADC:
    // 0x150C1ADC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
L_150C1AE0:
    // 0x150C1AE0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150C1AE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C1AE8: lwc1        $f18, 0x120($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150C1AEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1AF0: lwc1        $f6, 0x210($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X210);
    // 0x150C1AF4: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C1AF8: lwc1        $f14, 0x180($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1AFC: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150C1B00: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150C1B04: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150C1B08: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150C1B0C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150C1B10: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150C1B14: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150C1B18: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x150C1B1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150C1B20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150C1B24: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x150C1B28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x150C1B2C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150C1B30: jal         0x1514C2F0
    // 0x150C1B34: lw          $a2, 0x12C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X12C);
    func_1514C2F0(rdram, ctx);
        goto after_1;
    // 0x150C1B34: lw          $a2, 0x12C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X12C);
    after_1:
    // 0x150C1B38: lwc1        $f18, 0x180($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1B3C: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C1B40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C1B44: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C1B48: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150C1B4C: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x150C1B50: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C1B54: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150C1B58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C1B5C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150C1B60: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150C1B64: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150C1B68: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150C1B6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C1B70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150C1B74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150C1B78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150C1B7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150C1B80: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C1B84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150C1B88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150C1B8C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150C1B90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150C1B94: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C1B98: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150C1B9C: jal         0x15165F80
    // 0x150C1BA0: nop

    func_15165F80(rdram, ctx);
        goto after_2;
    // 0x150C1BA0: nop

    after_2:
    // 0x150C1BA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C1BA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C1BAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1BB0: lwc1        $f8, 0x214($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X214);
    // 0x150C1BB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1BB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C1BBC: lwc1        $f16, 0x218($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X218);
    // 0x150C1BC0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150C1BC4: addiu       $t0, $zero, 0x29E9
    ctx->r8 = ADD32(0, 0X29E9);
    // 0x150C1BC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150C1BCC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C1BD0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C1BD4: sh          $t9, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r25;
    // 0x150C1BD8: sw          $t0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r8;
    // 0x150C1BDC: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x150C1BE0: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x150C1BE4: sb          $t1, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r9;
    // 0x150C1BE8: sb          $t2, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r10;
    // 0x150C1BEC: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x150C1BF0: sb          $zero, 0x107($sp)
    MEM_B(0X107, ctx->r29) = 0;
    // 0x150C1BF4: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x150C1BF8: sb          $zero, 0x109($sp)
    MEM_B(0X109, ctx->r29) = 0;
    // 0x150C1BFC: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x150C1C00: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x150C1C04: sb          $zero, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = 0;
    // 0x150C1C08: sb          $t3, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r11;
    // 0x150C1C0C: sw          $s2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r18;
    // 0x150C1C10: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x150C1C14: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x150C1C18: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x150C1C1C: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x150C1C20: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x150C1C24: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x150C1C28: lbu         $t4, 0x3B($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X3B);
    // 0x150C1C2C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150C1C30: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x150C1C34: sh          $t5, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r13;
    // 0x150C1C38: sh          $t6, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r14;
    // 0x150C1C3C: jal         0x150ADA20
    // 0x150C1C40: sb          $t4, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150C1C40: sb          $t4, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r12;
    after_3:
    // 0x150C1C44: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x150C1C48: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x150C1C4C: beq         $v1, $zero, L_150C1E00
    if (ctx->r3 == 0) {
        // 0x150C1C50: addiu       $s1, $v1, -0x1
        ctx->r17 = ADD32(ctx->r3, -0X1);
            goto L_150C1E00;
    }
    // 0x150C1C50: addiu       $s1, $v1, -0x1
    ctx->r17 = ADD32(ctx->r3, -0X1);
    // 0x150C1C54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1C58: lwc1        $f30, 0x21C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X21C);
    // 0x150C1C5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1C60: lwc1        $f28, 0x220($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X220);
    // 0x150C1C64: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150C1C68: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150C1C6C: addiu       $s3, $sp, 0xA4
    ctx->r19 = ADD32(ctx->r29, 0XA4);
L_150C1C70:
    // 0x150C1C70: jal         0x150ADA20
    // 0x150C1C74: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C1C74: nop

    after_4:
    // 0x150C1C78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150C1C7C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x150C1C80: jal         0x150ADA68
    // 0x150C1C84: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150C1C84: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    after_5:
    // 0x150C1C88: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150C1C8C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150C1C90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C1C94: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150C1C98: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150C1C9C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150C1CA0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x150C1CA4: add.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150C1CA8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C1CAC: nop

    // 0x150C1CB0: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C1CB4: jal         0x151423D8
    // 0x150C1CB8: nop

    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150C1CB8: nop

    after_6:
    // 0x150C1CBC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150C1CC0: jal         0x151423D8
    // 0x150C1CC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150C1CC4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_7:
    // 0x150C1CC8: jal         0x150ADA20
    // 0x150C1CCC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150C1CCC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_8:
    // 0x150C1CD0: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150C1CD4: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C1CD8: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x150C1CDC: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150C1CE0: addiu       $t0, $t9, 0x1E
    ctx->r8 = ADD32(ctx->r25, 0X1E);
    // 0x150C1CE4: sh          $t0, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r8;
    // 0x150C1CE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C1CEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C1CF0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C1CF4: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150C1CF8: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150C1CFC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x150C1D00: lwc1        $f6, 0x180($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1D04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C1D08: mul.s       $f6, $f20, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x150C1D0C: add.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x150C1D10: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x150C1D14: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150C1D18: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C1D1C: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150C1D20: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x150C1D24: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x150C1D28: jal         0x150ADA68
    // 0x150C1D2C: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150C1D2C: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x150C1D30: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150C1D34: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150C1D38: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150C1D3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C1D40: add.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x150C1D44: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C1D48: nop

    // 0x150C1D4C: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C1D50: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x150C1D54: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x150C1D58: jal         0x150ADA68
    // 0x150C1D5C: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150C1D5C: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    after_10:
    // 0x150C1D60: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C1D64: jal         0x150ADA68
    // 0x150C1D68: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150C1D68: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x150C1D6C: mul.s       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C1D70: jal         0x150ADA68
    // 0x150C1D74: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150C1D74: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x150C1D78: mul.s       $f18, $f0, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C1D7C: jal         0x150ADA68
    // 0x150C1D80: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150C1D80: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x150C1D84: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C1D88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C1D8C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C1D90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C1D94: nop

    // 0x150C1D98: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150C1D9C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150C1DA0: jal         0x150ADA68
    // 0x150C1DA4: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150C1DA4: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x150C1DA8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C1DAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C1DB0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C1DB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C1DB8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150C1DBC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150C1DC0: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C1DC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150C1DC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150C1DCC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150C1DD0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150C1DD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150C1DD8: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x150C1DDC: jal         0x15132A4C
    // 0x150C1DE0: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    func_15132A4C(rdram, ctx);
        goto after_15;
    // 0x150C1DE0: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x150C1DE4: beql        $v0, $zero, L_150C1DF8
    if (ctx->r2 == 0) {
        // 0x150C1DE8: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_150C1DF8;
    }
    goto skip_1;
    // 0x150C1DE8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_1:
    // 0x150C1DEC: lwc1        $f8, 0x180($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1DF0: swc1        $f8, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f8.u32l;
    // 0x150C1DF4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_150C1DF8:
    // 0x150C1DF8: bne         $s1, $zero, L_150C1C70
    if (ctx->r17 != 0) {
        // 0x150C1DFC: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_150C1C70;
    }
    // 0x150C1DFC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_150C1E00:
    // 0x150C1E00: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150C1E04:
    // 0x150C1E04: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150C1E08: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150C1E0C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150C1E10: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150C1E14: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150C1E18: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150C1E1C: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x150C1E20: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x150C1E24: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x150C1E28: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x150C1E2C: jr          $ra
    // 0x150C1E30: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    return;
    // 0x150C1E30: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_1506AF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AF74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506AF78: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1506AF7C: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x1506AF80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506AF84: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x1506AF88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506AF8C: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x1506AF90: lbu         $v1, 0x100($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X100);
    // 0x1506AF94: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506AF98: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x1506AF9C: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x1506AFA0: beq         $t6, $zero, L_1506AFB4
    if (ctx->r14 == 0) {
        // 0x1506AFA4: ori         $t7, $v1, 0x4
        ctx->r15 = ctx->r3 | 0X4;
            goto L_1506AFB4;
    }
    // 0x1506AFA4: ori         $t7, $v1, 0x4
    ctx->r15 = ctx->r3 | 0X4;
    // 0x1506AFA8: sb          $t7, 0x100($v0)
    MEM_B(0X100, ctx->r2) = ctx->r15;
    // 0x1506AFAC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x1506AFB0: lbu         $v1, 0x100($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X100);
L_1506AFB4:
    // 0x1506AFB4: andi        $t8, $v1, 0xF7
    ctx->r24 = ctx->r3 & 0XF7;
    // 0x1506AFB8: sb          $t8, 0x100($v0)
    MEM_B(0X100, ctx->r2) = ctx->r24;
    // 0x1506AFBC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1506AFC0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506AFC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506AFC8: jal         0x1505E650
    // 0x1506AFCC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506AFCC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_0:
    // 0x1506AFD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506AFD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506AFD8: jr          $ra
    // 0x1506AFDC: nop

    return;
    return;
    // 0x1506AFDC: nop

;}
RECOMP_FUNC void func_150767F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150767F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150767F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150767FC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076800: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15076804: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15076808: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1507680C: lbu         $t6, 0x222($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X222);
    // 0x15076810: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15076814: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15076818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1507681C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15076820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15076824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15076828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507682C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15076830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15076834: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15076838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507683C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x15076840: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15076844: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15076848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507684C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15076850: jal         0x1505A630
    // 0x15076854: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15076854: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x15076858: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507685C: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x15076860: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15076864: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15076868: lbu         $t2, 0x222($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X222);
    // 0x1507686C: lbu         $v1, 0x1891($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1891);
    // 0x15076870: sra         $t0, $v0, 8
    ctx->r8 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15076874: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15076878: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1507687C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15076880: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15076884: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15076888: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1507688C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15076890: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15076894: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15076898: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x1507689C: lhu         $t4, -0x3CB6($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X3CB6);
    // 0x150768A0: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x150768A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150768A8: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x150768AC: subu        $t6, $t0, $t5
    ctx->r14 = SUB32(ctx->r8, ctx->r13);
    // 0x150768B0: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x150768B4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x150768B8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150768BC: beql        $at, $zero, L_150768D0
    if (ctx->r1 == 0) {
        // 0x150768C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150768D0;
    }
    goto skip_0;
    // 0x150768C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150768C4: jal         0x15075400
    // 0x150768C8: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_1;
    // 0x150768C8: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_1:
    // 0x150768CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150768D0:
    // 0x150768D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150768D4: jr          $ra
    // 0x150768D8: nop

    return;
    return;
    // 0x150768D8: nop

;}
RECOMP_FUNC void func_1518B264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518B264: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1518B268: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1518B26C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1518B270: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518B274: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x1518B278: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1518B27C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x1518B280: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1518B284: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1518B288: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1518B28C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518B290: jal         0x1518B2A8
    // 0x1518B294: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_1518B2A8(rdram, ctx);
        goto after_0;
    // 0x1518B294: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x1518B298: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1518B29C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518B2A0: jr          $ra
    // 0x1518B2A4: nop

    return;
    return;
    // 0x1518B2A4: nop

;}
RECOMP_FUNC void func_150F6DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F6DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F6DB8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150F6DBC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x150F6DC0: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x150F6DC4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x150F6DC8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x150F6DCC: jal         0x151494E0
    // 0x150F6DD0: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x150F6DD0: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F6DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F6DD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F6DDC: jr          $ra
    // 0x150F6DE0: nop

    return;
    return;
    // 0x150F6DE0: nop

;}
RECOMP_FUNC void func_1500E5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500E5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500E5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500E5C8: jal         0x15012470
    // 0x1500E5CC: nop

    func_15012470(rdram, ctx);
        goto after_0;
    // 0x1500E5CC: nop

    after_0:
    // 0x1500E5D0: jal         0x15008A10
    // 0x1500E5D4: nop

    func_15008A10(rdram, ctx);
        goto after_1;
    // 0x1500E5D4: nop

    after_1:
    // 0x1500E5D8: jal         0x15012770
    // 0x1500E5DC: nop

    func_15012770(rdram, ctx);
        goto after_2;
    // 0x1500E5DC: nop

    after_2:
    // 0x1500E5E0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500E5E4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500E5E8: addiu       $v1, $v1, 0x964
    ctx->r3 = ADD32(ctx->r3, 0X964);
    // 0x1500E5EC: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
L_1500E5F0:
    // 0x1500E5F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1500E5F4: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x1500E5F8: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x1500E5FC: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x1500E600: bne         $v0, $v1, L_1500E5F0
    if (ctx->r2 != ctx->r3) {
        // 0x1500E604: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_1500E5F0;
    }
    // 0x1500E604: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x1500E608: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E60C: sb          $zero, -0x66DF($at)
    MEM_B(-0X66DF, ctx->r1) = 0;
    // 0x1500E610: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E614: sb          $zero, -0x66E0($at)
    MEM_B(-0X66E0, ctx->r1) = 0;
    // 0x1500E618: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E61C: sb          $zero, -0x66D8($at)
    MEM_B(-0X66D8, ctx->r1) = 0;
    // 0x1500E620: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E624: sb          $zero, -0x66C8($at)
    MEM_B(-0X66C8, ctx->r1) = 0;
    // 0x1500E628: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E62C: sb          $zero, -0x66D7($at)
    MEM_B(-0X66D7, ctx->r1) = 0;
    // 0x1500E630: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E634: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500E638: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500E63C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500E640: addiu       $a0, $a0, -0x66BA
    ctx->r4 = ADD32(ctx->r4, -0X66BA);
    // 0x1500E644: addiu       $v0, $v0, -0x66C6
    ctx->r2 = ADD32(ctx->r2, -0X66C6);
    // 0x1500E648: addiu       $v1, $v1, -0x66D6
    ctx->r3 = ADD32(ctx->r3, -0X66D6);
    // 0x1500E64C: sb          $zero, -0x66C7($at)
    MEM_B(-0X66C7, ctx->r1) = 0;
L_1500E650:
    // 0x1500E650: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1500E654: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x1500E658: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x1500E65C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x1500E660: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x1500E664: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x1500E668: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x1500E66C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1500E670: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x1500E674: bne         $v0, $a0, L_1500E650
    if (ctx->r2 != ctx->r4) {
        // 0x1500E678: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_1500E650;
    }
    // 0x1500E678: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x1500E67C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500E680: addiu       $v0, $v0, -0x6730
    ctx->r2 = ADD32(ctx->r2, -0X6730);
    // 0x1500E684: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E688: sb          $zero, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = 0;
    // 0x1500E68C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E690: sw          $zero, -0x676C($at)
    MEM_W(-0X676C, ctx->r1) = 0;
    // 0x1500E694: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x1500E698: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1500E69C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x1500E6A0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x1500E6A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E6A8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1500E6AC: sw          $zero, -0x7790($at)
    MEM_W(-0X7790, ctx->r1) = 0;
    // 0x1500E6B0: addiu       $a0, $a0, -0x1B00
    ctx->r4 = ADD32(ctx->r4, -0X1B00);
    // 0x1500E6B4: jal         0x100226F0
    // 0x1500E6B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x1500E6B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x1500E6BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1500E6C0: addiu       $v1, $v1, -0x66B0
    ctx->r3 = ADD32(ctx->r3, -0X66B0);
    // 0x1500E6C4: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x1500E6C8: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x1500E6CC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x1500E6D0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E6D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500E6D8: sb          $zero, -0x7680($at)
    MEM_B(-0X7680, ctx->r1) = 0;
    // 0x1500E6DC: addiu       $a0, $a0, -0x6560
    ctx->r4 = ADD32(ctx->r4, -0X6560);
    // 0x1500E6E0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x1500E6E4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1500E6E8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x1500E6EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500E6F0: sw          $zero, -0x1B10($at)
    MEM_W(-0X1B10, ctx->r1) = 0;
    // 0x1500E6F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E6F8: sb          $zero, -0x74C0($at)
    MEM_B(-0X74C0, ctx->r1) = 0;
    // 0x1500E6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500E700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500E704: jr          $ra
    // 0x1500E708: nop

    return;
    return;
    // 0x1500E708: nop

;}
RECOMP_FUNC void func_151C9B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9B30: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x151C9B34: lbu         $t6, 0x6F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6F);
    // 0x151C9B38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C9B3C: bnel        $t6, $zero, L_151C9B54
    if (ctx->r14 != 0) {
        // 0x151C9B40: lw          $t9, 0x14($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X14);
            goto L_151C9B54;
    }
    goto skip_0;
    // 0x151C9B40: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    skip_0:
    // 0x151C9B44: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x151C9B48: b           L_151C9B5C
    // 0x151C9B4C: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
        goto L_151C9B5C;
    // 0x151C9B4C: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    // 0x151C9B50: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
L_151C9B54:
    // 0x151C9B54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151C9B58: sb          $t8, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r24;
L_151C9B5C:
    // 0x151C9B5C: jr          $ra
    // 0x151C9B60: nop

    return;
    return;
    // 0x151C9B60: nop

;}
RECOMP_FUNC void func_16001044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001044: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x16001048: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x1600104C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x16001050: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x16001054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x16001058: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x1600105C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x16001060: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x16001064: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x16001068: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x1600106C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x16001070: lui         $t7, 0x1600
    ctx->r15 = S32(0X1600 << 16);
    // 0x16001074: addiu       $t7, $t7, 0x3B50
    ctx->r15 = ADD32(ctx->r15, 0X3B50);
    // 0x16001078: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
    // 0x1600107C: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
L_16001080:
    // 0x16001080: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x16001084: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x16001088: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x1600108C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x16001090: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x16001094: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x16001098: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x1600109C: bne         $t7, $t0, L_16001080
    if (ctx->r15 != ctx->r8) {
        // 0x160010A0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_16001080;
    }
    // 0x160010A0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x160010A4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x160010A8: lui         $t1, 0x1600
    ctx->r9 = S32(0X1600 << 16);
    // 0x160010AC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x160010B0: lw          $t1, 0x38A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X38A0);
    // 0x160010B4: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x160010B8: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x160010BC: bne         $at, $zero, L_1600128C
    if (ctx->r1 != 0) {
        // 0x160010C0: slti        $at, $s0, 0x341
        ctx->r1 = SIGNED(ctx->r16) < 0X341 ? 1 : 0;
            goto L_1600128C;
    }
    // 0x160010C0: slti        $at, $s0, 0x341
    ctx->r1 = SIGNED(ctx->r16) < 0X341 ? 1 : 0;
    // 0x160010C4: beql        $at, $zero, L_16001290
    if (ctx->r1 == 0) {
        // 0x160010C8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_16001290;
    }
    goto skip_0;
    // 0x160010C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x160010CC: jal         0x1600160C
    // 0x160010D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1600160C(rdram, ctx);
        goto after_0;
    // 0x160010D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x160010D4: beq         $s3, $zero, L_160010FC
    if (ctx->r19 == 0) {
        // 0x160010D8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_160010FC;
    }
    // 0x160010D8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x160010DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x160010E0: beq         $s3, $at, L_16001158
    if (ctx->r19 == ctx->r1) {
        // 0x160010E4: nop
    
            goto L_16001158;
    }
    // 0x160010E4: nop

    // 0x160010E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x160010EC: beql        $s3, $at, L_1600120C
    if (ctx->r19 == ctx->r1) {
        // 0x160010F0: lui         $at, 0x7F80
        ctx->r1 = S32(0X7F80 << 16);
            goto L_1600120C;
    }
    goto skip_1;
    // 0x160010F0: lui         $at, 0x7F80
    ctx->r1 = S32(0X7F80 << 16);
    skip_1:
    // 0x160010F4: b           L_16001290
    // 0x160010F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_16001290;
    // 0x160010F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_160010FC:
    // 0x160010FC: addiu       $s1, $v0, 0x70
    ctx->r17 = ADD32(ctx->r2, 0X70);
    // 0x16001100: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x16001104: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_16001108:
    // 0x16001108: andi        $v0, $s2, 0xF
    ctx->r2 = ctx->r18 & 0XF;
    // 0x1600110C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x16001110: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x16001114: bne         $at, $zero, L_16001128
    if (ctx->r1 != 0) {
        // 0x16001118: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_16001128;
    }
    // 0x16001118: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x1600111C: addiu       $a1, $v1, 0x7
    ctx->r5 = ADD32(ctx->r3, 0X7);
    // 0x16001120: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x16001124: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_16001128:
    // 0x16001128: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x1600112C: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x16001130: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x16001134: jal         0x160014F0
    // 0x16001138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_160014F0(rdram, ctx);
        goto after_1;
    // 0x16001138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x1600113C: sra         $t5, $s2, 4
    ctx->r13 = S32(SIGNED(ctx->r18) >> 4);
    // 0x16001140: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x16001144: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x16001148: bne         $s0, $s3, L_16001108
    if (ctx->r16 != ctx->r19) {
        // 0x1600114C: addiu       $s1, $s1, -0x10
        ctx->r17 = ADD32(ctx->r17, -0X10);
            goto L_16001108;
    }
    // 0x1600114C: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    // 0x16001150: b           L_16001290
    // 0x16001154: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_16001290;
    // 0x16001154: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_16001158:
    // 0x16001158: bgezl       $s2, L_16001178
    if (SIGNED(ctx->r18) >= 0) {
        // 0x1600115C: addiu       $t9, $sp, 0x78
        ctx->r25 = ADD32(ctx->r29, 0X78);
            goto L_16001178;
    }
    goto skip_2;
    // 0x1600115C: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    skip_2:
    // 0x16001160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x16001164: jal         0x160014F0
    // 0x16001168: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_160014F0(rdram, ctx);
        goto after_2;
    // 0x16001168: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_2:
    // 0x1600116C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x16001170: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    // 0x16001174: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
L_16001178:
    // 0x16001178: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1600117C: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x16001180: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x16001184: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x16001188: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_1600118C:
    // 0x1600118C: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x16001190: bne         $v0, $zero, L_1600119C
    if (ctx->r2 != 0) {
        // 0x16001194: nop
    
            goto L_1600119C;
    }
    // 0x16001194: nop

    // 0x16001198: break       7
    do_break(369103256);
L_1600119C:
    // 0x1600119C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x160011A0: bne         $v0, $at, L_160011B4
    if (ctx->r2 != ctx->r1) {
        // 0x160011A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_160011B4;
    }
    // 0x160011A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x160011A8: bne         $s2, $at, L_160011B4
    if (ctx->r18 != ctx->r1) {
        // 0x160011AC: nop
    
            goto L_160011B4;
    }
    // 0x160011AC: nop

    // 0x160011B0: break       6
    do_break(369103280);
L_160011B4:
    // 0x160011B4: mflo        $v1
    ctx->r3 = lo;
    // 0x160011B8: mfhi        $s2
    ctx->r18 = hi;
    // 0x160011BC: bgtzl       $v1, L_160011D8
    if (SIGNED(ctx->r3) > 0) {
        // 0x160011C0: addiu       $a1, $v1, 0x30
        ctx->r5 = ADD32(ctx->r3, 0X30);
            goto L_160011D8;
    }
    goto skip_3;
    // 0x160011C0: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    skip_3:
    // 0x160011C4: bnel        $s3, $zero, L_160011D8
    if (ctx->r19 != 0) {
        // 0x160011C8: addiu       $a1, $v1, 0x30
        ctx->r5 = ADD32(ctx->r3, 0X30);
            goto L_160011D8;
    }
    goto skip_4;
    // 0x160011C8: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    skip_4:
    // 0x160011CC: bnel        $s0, $s4, L_160011F4
    if (ctx->r16 != ctx->r20) {
        // 0x160011D0: addiu       $s0, $s0, -0x4
        ctx->r16 = ADD32(ctx->r16, -0X4);
            goto L_160011F4;
    }
    goto skip_5;
    // 0x160011D0: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    skip_5:
    // 0x160011D4: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
L_160011D8:
    // 0x160011D8: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x160011DC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x160011E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x160011E4: jal         0x160014F0
    // 0x160011E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_160014F0(rdram, ctx);
        goto after_3;
    // 0x160011E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_3:
    // 0x160011EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x160011F0: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
L_160011F4:
    // 0x160011F4: sltu        $at, $s0, $s5
    ctx->r1 = ctx->r16 < ctx->r21 ? 1 : 0;
    // 0x160011F8: beql        $at, $zero, L_1600118C
    if (ctx->r1 == 0) {
        // 0x160011FC: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1600118C;
    }
    goto skip_6;
    // 0x160011FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x16001200: b           L_16001290
    // 0x16001204: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_16001290;
    // 0x16001204: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x16001208: lui         $at, 0x7F80
    ctx->r1 = S32(0X7F80 << 16);
L_1600120C:
    // 0x1600120C: and         $v0, $s2, $at
    ctx->r2 = ctx->r18 & ctx->r1;
    // 0x16001210: sra         $t0, $v0, 23
    ctx->r8 = S32(SIGNED(ctx->r2) >> 23);
    // 0x16001214: blez        $t0, L_16001228
    if (SIGNED(ctx->r8) <= 0) {
        // 0x16001218: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_16001228;
    }
    // 0x16001218: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1600121C: slti        $at, $t0, 0xFF
    ctx->r1 = SIGNED(ctx->r8) < 0XFF ? 1 : 0;
    // 0x16001220: bnel        $at, $zero, L_16001250
    if (ctx->r1 != 0) {
        // 0x16001224: sw          $s2, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r18;
            goto L_16001250;
    }
    goto skip_7;
    // 0x16001224: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    skip_7:
L_16001228:
    // 0x16001228: bne         $v0, $zero, L_16001234
    if (ctx->r2 != 0) {
        // 0x1600122C: sll         $t7, $s2, 9
        ctx->r15 = S32(ctx->r18 << 9);
            goto L_16001234;
    }
    // 0x1600122C: sll         $t7, $s2, 9
    ctx->r15 = S32(ctx->r18 << 9);
    // 0x16001230: beq         $t7, $zero, L_1600124C
    if (ctx->r15 == 0) {
        // 0x16001234: lui         $a1, 0x1600
        ctx->r5 = S32(0X1600 << 16);
            goto L_1600124C;
    }
L_16001234:
    // 0x16001234: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16001238: addiu       $a1, $a1, 0x47E4
    ctx->r5 = ADD32(ctx->r5, 0X47E4);
    // 0x1600123C: jal         0x160012B0
    // 0x16001240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160012B0(rdram, ctx);
        goto after_4;
    // 0x16001240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x16001244: b           L_16001290
    // 0x16001248: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_16001290;
    // 0x16001248: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1600124C:
    // 0x1600124C: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
L_16001250:
    // 0x16001250: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x16001254: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x16001258: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x1600125C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x16001260: lui         $a2, 0x1600
    ctx->r6 = S32(0X1600 << 16);
    // 0x16001264: lui         $a3, 0x1600
    ctx->r7 = S32(0X1600 << 16);
    // 0x16001268: addiu       $a3, $a3, 0x47F4
    ctx->r7 = ADD32(ctx->r7, 0X47F4);
    // 0x1600126C: addiu       $a2, $a2, 0x47F0
    ctx->r6 = ADD32(ctx->r6, 0X47F0);
    // 0x16001270: sdc1        $f6, 0x10($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X10, ctx->r29);
    // 0x16001274: addiu       $a1, $a1, 0x47E8
    ctx->r5 = ADD32(ctx->r5, 0X47E8);
    // 0x16001278: jal         0x16001B34
    // 0x1600127C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_16001B34(rdram, ctx);
        goto after_5;
    // 0x1600127C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x16001280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x16001284: jal         0x160012B0
    // 0x16001288: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_160012B0(rdram, ctx);
        goto after_6;
    // 0x16001288: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
L_1600128C:
    // 0x1600128C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_16001290:
    // 0x16001290: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x16001294: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x16001298: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1600129C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x160012A0: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x160012A4: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x160012A8: jr          $ra
    // 0x160012AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x160012AC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1516F864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F864: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1516F868: addiu       $a2, $a2, -0x161C
    ctx->r6 = ADD32(ctx->r6, -0X161C);
    // 0x1516F86C: lb          $v1, 0x26($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X26);
    // 0x1516F870: lbu         $t9, 0x27($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X27);
    // 0x1516F874: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x1516F878: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x1516F87C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1516F880: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F884: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x1516F888: lbu         $t7, 0x2A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2A);
    // 0x1516F88C: lb          $v1, 0x28($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X28);
    // 0x1516F890: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x1516F894: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1516F898: lbu         $t7, 0x29($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X29);
    // 0x1516F89C: sll         $t6, $v1, 8
    ctx->r14 = S32(ctx->r3 << 8);
    // 0x1516F8A0: lh          $a1, 0x12($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X12);
    // 0x1516F8A4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1516F8A8: mflo        $t1
    ctx->r9 = lo;
    // 0x1516F8AC: addu        $t3, $v0, $t1
    ctx->r11 = ADD32(ctx->r2, ctx->r9);
    // 0x1516F8B0: sra         $t2, $t3, 8
    ctx->r10 = S32(SIGNED(ctx->r11) >> 8);
    // 0x1516F8B4: sh          $t2, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r10;
    // 0x1516F8B8: sb          $t3, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r11;
    // 0x1516F8BC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x1516F8C0: lbu         $t5, 0x2B($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X2B);
    // 0x1516F8C4: sll         $t4, $a1, 8
    ctx->r12 = S32(ctx->r5 << 8);
    // 0x1516F8C8: multu       $v1, $t8
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F8CC: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x1516F8D0: mflo        $t9
    ctx->r25 = lo;
    // 0x1516F8D4: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x1516F8D8: sra         $t0, $t1, 8
    ctx->r8 = S32(SIGNED(ctx->r9) >> 8);
    // 0x1516F8DC: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x1516F8E0: sb          $t1, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r9;
    // 0x1516F8E4: jr          $ra
    // 0x1516F8E8: nop

    return;
    return;
    // 0x1516F8E8: nop

;}
RECOMP_FUNC void func_1510281C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510281C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15102820: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15102824: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15102828: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x1510282C: lbu         $t8, 0x132($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X132);
    // 0x15102830: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x15102834: bnel        $a1, $t8, L_15102864
    if (ctx->r5 != ctx->r24) {
        // 0x15102838: lbu         $t1, 0xD4($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0XD4);
            goto L_15102864;
    }
    goto skip_0;
    // 0x15102838: lbu         $t1, 0xD4($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD4);
    skip_0:
    // 0x1510283C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x15102840: beq         $v1, $zero, L_15102858
    if (ctx->r3 == 0) {
        // 0x15102844: nop
    
            goto L_15102858;
    }
    // 0x15102844: nop

    // 0x15102848: lw          $t9, 0x31C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X31C);
    // 0x1510284C: lbu         $t0, 0x197($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X197);
    // 0x15102850: beql        $t0, $zero, L_15102864
    if (ctx->r8 == 0) {
        // 0x15102854: lbu         $t1, 0xD4($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0XD4);
            goto L_15102864;
    }
    goto skip_1;
    // 0x15102854: lbu         $t1, 0xD4($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD4);
    skip_1:
L_15102858:
    // 0x15102858: jr          $ra
    // 0x1510285C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1510285C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15102860: lbu         $t1, 0xD4($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD4);
L_15102864:
    // 0x15102864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15102868: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x1510286C: bne         $t2, $zero, L_1510287C
    if (ctx->r10 != 0) {
        // 0x15102870: nop
    
            goto L_1510287C;
    }
    // 0x15102870: nop

    // 0x15102874: jr          $ra
    // 0x15102878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15102878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510287C:
    // 0x1510287C: jr          $ra
    // 0x15102880: nop

    return;
    return;
    // 0x15102880: nop

;}
RECOMP_FUNC void func_1507ADAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507ADAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507ADB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507ADB4: jal         0x1507A3E8
    // 0x1507ADB8: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507ADB8: nop

    after_0:
    // 0x1507ADBC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507ADC0: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x1507ADC4: nor         $t7, $v0, $zero
    ctx->r15 = ~(ctx->r2 | 0);
    // 0x1507ADC8: lw          $t6, 0xF4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XF4);
    // 0x1507ADCC: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x1507ADD0: sw          $t8, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r24;
    // 0x1507ADD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507ADD8: jr          $ra
    // 0x1507ADDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1507ADDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1001C4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C4F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1001C4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C4F8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1001C4FC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1001C500: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1001C504: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1001C508: jal         0x10024880
    // 0x1001C50C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x1001C50C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x1001C510: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1001C514: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1001C518: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001C51C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x1001C520: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C524: beq         $t8, $zero, L_1001C65C
    if (ctx->r24 == 0) {
        // 0x1001C528: nop
    
            goto L_1001C65C;
    }
    // 0x1001C528: nop

L_1001C52C:
    // 0x1001C52C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C530: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001C534: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1001C538: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C53C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x1001C540: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1001C544: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x1001C548: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001C54C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001C550: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x1001C554: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1001C558: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1001C55C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001C560: lh          $t9, 0x46($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X46);
    // 0x1001C564: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x1001C568: bne         $t8, $t9, L_1001C648
    if (ctx->r24 != ctx->r25) {
        // 0x1001C56C: nop
    
            goto L_1001C648;
    }
    // 0x1001C56C: nop

    // 0x1001C570: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001C574: bne         $t0, $zero, L_1001C584
    if (ctx->r8 != 0) {
        // 0x1001C578: nop
    
            goto L_1001C584;
    }
    // 0x1001C578: nop

    // 0x1001C57C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001C580: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_1001C584:
    // 0x1001C584: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001C588: beq         $t2, $zero, L_1001C5A8
    if (ctx->r10 == 0) {
        // 0x1001C58C: nop
    
            goto L_1001C5A8;
    }
    // 0x1001C58C: nop

    // 0x1001C590: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1001C594: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x1001C598: lw          $t3, 0x8($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X8);
    // 0x1001C59C: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x1001C5A0: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x1001C5A4: sw          $t7, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r15;
L_1001C5A8:
    // 0x1001C5A8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C5AC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1001C5B0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001C5B4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001C5B8: beq         $t0, $zero, L_1001C5D0
    if (ctx->r8 == 0) {
        // 0x1001C5BC: nop
    
            goto L_1001C5D0;
    }
    // 0x1001C5BC: nop

    // 0x1001C5C0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001C5C4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x1001C5C8: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x1001C5CC: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
L_1001C5D0:
    // 0x1001C5D0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001C5D4: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1001C5D8: beq         $t6, $zero, L_1001C5F0
    if (ctx->r14 == 0) {
        // 0x1001C5DC: nop
    
            goto L_1001C5F0;
    }
    // 0x1001C5DC: nop

    // 0x1001C5E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001C5E4: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x1001C5E8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x1001C5EC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
L_1001C5F0:
    // 0x1001C5F0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C5F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1001C5F8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1001C5FC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1001C600: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x1001C604: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C608: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1001C60C: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x1001C610: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001C614: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C618: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x1001C61C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001C620: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x1001C624: beq         $t4, $zero, L_1001C63C
    if (ctx->r12 == 0) {
        // 0x1001C628: nop
    
            goto L_1001C63C;
    }
    // 0x1001C628: nop

    // 0x1001C62C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x1001C630: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C634: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001C638: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
L_1001C63C:
    // 0x1001C63C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C640: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001C644: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_1001C648:
    // 0x1001C648: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1001C64C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x1001C650: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C654: bne         $t3, $zero, L_1001C52C
    if (ctx->r11 != 0) {
        // 0x1001C658: nop
    
            goto L_1001C52C;
    }
    // 0x1001C658: nop

L_1001C65C:
    // 0x1001C65C: jal         0x10024880
    // 0x1001C660: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x1001C660: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x1001C664: b           L_1001C674
    // 0x1001C668: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_1001C674;
    // 0x1001C668: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x1001C66C: b           L_1001C674
    // 0x1001C670: nop

        goto L_1001C674;
    // 0x1001C670: nop

L_1001C674:
    // 0x1001C674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C678: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1001C67C: jr          $ra
    // 0x1001C680: nop

    return;
    return;
    // 0x1001C680: nop

    // 0x1001C684: nop

    // 0x1001C688: nop

    // 0x1001C68C: nop

;}
RECOMP_FUNC void func_151D1328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D1328: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D132C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D1330: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151D1334: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151D1338: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151D133C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151D1340: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151D1344: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151D1348: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x151D134C: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x151D1350: jal         0x15169850
    // 0x151D1354: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151D1354: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151D1358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D135C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D1360: jr          $ra
    // 0x151D1364: nop

    return;
    return;
    // 0x151D1364: nop

;}
RECOMP_FUNC void func_151422DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151422DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151422E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151422E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151422E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151422EC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x151422F0: jr          $ra
    // 0x151422F4: nop

    return;
    return;
    // 0x151422F4: nop

;}
RECOMP_FUNC void func_1000FF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000FF90: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1000FF94: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000FF98: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x1000FF9C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000FFA0: addiu       $a1, $a1, 0x1FE0
    ctx->r5 = ADD32(ctx->r5, 0X1FE0);
    // 0x1000FFA4: blez        $v0, L_10010010
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1000FFA8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_10010010;
    }
    // 0x1000FFA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000FFAC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1000FFB0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_1000FFB4:
    // 0x1000FFB4: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x1000FFB8: bnel        $a0, $t6, L_10010004
    if (ctx->r4 != ctx->r14) {
        // 0x1000FFBC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_10010004;
    }
    goto skip_0;
    // 0x1000FFBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x1000FFC0: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x1000FFC4: beql        $a3, $t7, L_1000FFD8
    if (ctx->r7 == ctx->r15) {
        // 0x1000FFC8: lw          $t8, 0x1C($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X1C);
            goto L_1000FFD8;
    }
    goto skip_1;
    // 0x1000FFC8: lw          $t8, 0x1C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X1C);
    skip_1:
    // 0x1000FFCC: bnel        $a3, $t0, L_10010004
    if (ctx->r7 != ctx->r8) {
        // 0x1000FFD0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_10010004;
    }
    goto skip_2;
    // 0x1000FFD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x1000FFD4: lw          $t8, 0x1C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X1C);
L_1000FFD8:
    // 0x1000FFD8: beql        $a2, $t8, L_1000FFEC
    if (ctx->r6 == ctx->r24) {
        // 0x1000FFDC: lw          $t9, 0x10($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X10);
            goto L_1000FFEC;
    }
    goto skip_3;
    // 0x1000FFDC: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    skip_3:
    // 0x1000FFE0: bnel        $a2, $t1, L_10010004
    if (ctx->r6 != ctx->r9) {
        // 0x1000FFE4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_10010004;
    }
    goto skip_4;
    // 0x1000FFE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x1000FFE8: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
L_1000FFEC:
    // 0x1000FFEC: andi        $t2, $t9, 0x80
    ctx->r10 = ctx->r25 & 0X80;
    // 0x1000FFF0: bnel        $t2, $zero, L_10010004
    if (ctx->r10 != 0) {
        // 0x1000FFF4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_10010004;
    }
    goto skip_5;
    // 0x1000FFF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_5:
    // 0x1000FFF8: jr          $ra
    // 0x1000FFFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1000FFFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x10010000: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_10010004:
    // 0x10010004: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x10010008: bne         $at, $zero, L_1000FFB4
    if (ctx->r1 != 0) {
        // 0x1001000C: addiu       $a1, $a1, 0x30
        ctx->r5 = ADD32(ctx->r5, 0X30);
            goto L_1000FFB4;
    }
    // 0x1001000C: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
L_10010010:
    // 0x10010010: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x10010014: jr          $ra
    // 0x10010018: nop

    return;
    return;
    // 0x10010018: nop

;}
RECOMP_FUNC void func_15073C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15073C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073C30: jal         0x1507F640
    // 0x15073C34: nop

    func_1507F640(rdram, ctx);
        goto after_0;
    // 0x15073C34: nop

    after_0:
    // 0x15073C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15073C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15073C40: jr          $ra
    // 0x15073C44: nop

    return;
    return;
    // 0x15073C44: nop

;}
RECOMP_FUNC void n_alCSPGetTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017EC0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x10017EC4: bne         $t6, $zero, L_10017ED4
    if (ctx->r14 != 0) {
        // 0x10017EC8: nop
    
            goto L_10017ED4;
    }
    // 0x10017EC8: nop

    // 0x10017ECC: jr          $ra
    // 0x10017ED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x10017ED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10017ED4:
    // 0x10017ED4: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x10017ED8: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x10017EDC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x10017EE0: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x10017EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x10017EE8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x10017EEC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x10017EF0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x10017EF4: jr          $ra
    // 0x10017EF8: nop

    return;
    return;
    // 0x10017EF8: nop

    // 0x10017EFC: jr          $ra
    // 0x10017F00: nop

    return;
    return;
    // 0x10017F00: nop

    // 0x10017F04: jr          $ra
    // 0x10017F08: nop

    return;
    return;
    // 0x10017F08: nop

;}
RECOMP_FUNC void func_15062D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062D10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15062D14: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15062D18: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15062D1C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x15062D20: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15062D24: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15062D28: lw          $t6, 0x19A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X19A0);
    // 0x15062D2C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15062D30: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x15062D34: beq         $t6, $zero, L_15062E1C
    if (ctx->r14 == 0) {
        // 0x15062D38: lw          $t8, 0x10($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X10);
            goto L_15062E1C;
    }
    // 0x15062D38: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x15062D3C: lw          $t7, 0x4488($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4488);
    // 0x15062D40: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15062D44: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x15062D48: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x15062D4C: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x15062D50: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x15062D54: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x15062D58: addu        $a3, $a1, $t3
    ctx->r7 = ADD32(ctx->r5, ctx->r11);
    // 0x15062D5C: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x15062D60: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x15062D64: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x15062D68: sra         $v1, $a2, 12
    ctx->r3 = S32(SIGNED(ctx->r6) >> 12);
    // 0x15062D6C: andi        $t4, $v1, 0xFFF
    ctx->r12 = ctx->r3 & 0XFFF;
    // 0x15062D70: andi        $a0, $a2, 0xFFF
    ctx->r4 = ctx->r6 & 0XFFF;
    // 0x15062D74: addiu       $v1, $t4, 0x2
    ctx->r3 = ADD32(ctx->r12, 0X2);
    // 0x15062D78: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x15062D7C: beq         $t0, $zero, L_15062D90
    if (ctx->r8 == 0) {
        // 0x15062D80: lw          $a2, 0x0($a3)
        ctx->r6 = MEM_W(ctx->r7, 0X0);
            goto L_15062D90;
    }
    // 0x15062D80: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x15062D84: andi        $t5, $v0, 0xFFF
    ctx->r13 = ctx->r2 & 0XFFF;
    // 0x15062D88: b           L_15062DBC
    // 0x15062D8C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_15062DBC;
    // 0x15062D8C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_15062D90:
    // 0x15062D90: sra         $t6, $a2, 12
    ctx->r14 = S32(SIGNED(ctx->r6) >> 12);
    // 0x15062D94: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x15062D98: addu        $a1, $t8, $t7
    ctx->r5 = ADD32(ctx->r24, ctx->r15);
    // 0x15062D9C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15062DA0: beq         $at, $zero, L_15062DB0
    if (ctx->r1 == 0) {
        // 0x15062DA4: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_15062DB0;
    }
    // 0x15062DA4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x15062DA8: b           L_15062DBC
    // 0x15062DAC: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
        goto L_15062DBC;
    // 0x15062DAC: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
L_15062DB0:
    // 0x15062DB0: bgez        $a1, L_15062DBC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15062DB4: nop
    
            goto L_15062DBC;
    }
    // 0x15062DB4: nop

    // 0x15062DB8: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
L_15062DBC:
    // 0x15062DBC: beq         $t0, $zero, L_15062DD4
    if (ctx->r8 == 0) {
        // 0x15062DC0: andi        $t6, $v0, 0xFFF
        ctx->r14 = ctx->r2 & 0XFFF;
            goto L_15062DD4;
    }
    // 0x15062DC0: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x15062DC4: lw          $v1, 0xC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC);
    // 0x15062DC8: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x15062DCC: b           L_15062E00
    // 0x15062DD0: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_15062E00;
    // 0x15062DD0: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_15062DD4:
    // 0x15062DD4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x15062DD8: andi        $t1, $a2, 0xFFF
    ctx->r9 = ctx->r6 & 0XFFF;
    // 0x15062DDC: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x15062DE0: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15062DE4: beq         $at, $zero, L_15062DF4
    if (ctx->r1 == 0) {
        // 0x15062DE8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_15062DF4;
    }
    // 0x15062DE8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x15062DEC: b           L_15062E00
    // 0x15062DF0: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
        goto L_15062E00;
    // 0x15062DF0: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
L_15062DF4:
    // 0x15062DF4: bgezl       $a1, L_15062E04
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15062DF8: lui         $at, 0xFF00
        ctx->r1 = S32(0XFF00 << 16);
            goto L_15062E04;
    }
    goto skip_0;
    // 0x15062DF8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    skip_0:
    // 0x15062DFC: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
L_15062E00:
    // 0x15062E00: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
L_15062E04:
    // 0x15062E04: and         $t3, $a2, $at
    ctx->r11 = ctx->r6 & ctx->r1;
    // 0x15062E08: andi        $t4, $v1, 0xFFF
    ctx->r12 = ctx->r3 & 0XFFF;
    // 0x15062E0C: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x15062E10: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x15062E14: or          $a2, $t5, $t8
    ctx->r6 = ctx->r13 | ctx->r24;
    // 0x15062E18: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_15062E1C:
    // 0x15062E1C: jr          $ra
    // 0x15062E20: nop

    return;
    return;
    // 0x15062E20: nop

;}
RECOMP_FUNC void func_1504C0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504C0E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1504C0EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1504C0F0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1504C0F4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1504C0F8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1504C0FC: lh          $a2, -0x3D4E($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3D4E);
    // 0x1504C100: bne         $a2, $zero, L_1504C12C
    if (ctx->r6 != 0) {
        // 0x1504C104: nop
    
            goto L_1504C12C;
    }
    // 0x1504C104: nop

    // 0x1504C108: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C10C: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x1504C110: slti        $at, $v0, -0x1D
    ctx->r1 = SIGNED(ctx->r2) < -0X1D ? 1 : 0;
    // 0x1504C114: bne         $at, $zero, L_1504C12C
    if (ctx->r1 != 0) {
        // 0x1504C118: slti        $at, $v0, 0x1E
        ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
            goto L_1504C12C;
    }
    // 0x1504C118: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x1504C11C: beq         $at, $zero, L_1504C12C
    if (ctx->r1 == 0) {
        // 0x1504C120: nop
    
            goto L_1504C12C;
    }
    // 0x1504C120: nop

    // 0x1504C124: b           L_1504C170
    // 0x1504C128: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
        goto L_1504C170;
    // 0x1504C128: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
L_1504C12C:
    // 0x1504C12C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504C130: lwc1        $f6, 0x1550($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1504C134: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504C138: lwc1        $f8, -0x3D4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D4C);
    // 0x1504C13C: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C140: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1504C144: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x1504C148: subu        $t6, $a2, $v0
    ctx->r14 = SUB32(ctx->r6, ctx->r2);
    // 0x1504C14C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1504C150: nop

    // 0x1504C154: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504C158: mul.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1504C15C: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1504C160: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x1504C164: nop

    // 0x1504C168: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x1504C16C: sh          $t2, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r10;
L_1504C170:
    // 0x1504C170: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C174: lbu         $t3, 0x6B($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X6B);
    // 0x1504C178: bnel        $t3, $zero, L_1504C848
    if (ctx->r11 != 0) {
        // 0x1504C17C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504C848;
    }
    goto skip_0;
    // 0x1504C17C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1504C180: lbu         $t4, 0x65($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X65);
    // 0x1504C184: addiu       $t0, $zero, 0x3E7
    ctx->r8 = ADD32(0, 0X3E7);
    // 0x1504C188: beql        $t4, $zero, L_1504C1B0
    if (ctx->r12 == 0) {
        // 0x1504C18C: lbu         $t6, 0x81($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X81);
            goto L_1504C1B0;
    }
    goto skip_1;
    // 0x1504C18C: lbu         $t6, 0x81($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X81);
    skip_1:
    // 0x1504C190: lbu         $t5, 0x104($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X104);
    // 0x1504C194: bnel        $t5, $zero, L_1504C1B0
    if (ctx->r13 != 0) {
        // 0x1504C198: lbu         $t6, 0x81($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X81);
            goto L_1504C1B0;
    }
    goto skip_2;
    // 0x1504C198: lbu         $t6, 0x81($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X81);
    skip_2:
    // 0x1504C19C: jal         0x15064A14
    // 0x1504C1A0: nop

    func_15064A14(rdram, ctx);
        goto after_0;
    // 0x1504C1A0: nop

    after_0:
    // 0x1504C1A4: b           L_1504C848
    // 0x1504C1A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1504C848;
    // 0x1504C1A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1504C1AC: lbu         $t6, 0x81($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X81);
L_1504C1B0:
    // 0x1504C1B0: bnel        $t6, $zero, L_1504C7DC
    if (ctx->r14 != 0) {
        // 0x1504C1B4: lhu         $t2, 0x84($a0)
        ctx->r10 = MEM_HU(ctx->r4, 0X84);
            goto L_1504C7DC;
    }
    goto skip_3;
    // 0x1504C1B4: lhu         $t2, 0x84($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X84);
    skip_3:
    // 0x1504C1B8: lbu         $t7, 0x104($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X104);
    // 0x1504C1BC: bnel        $t7, $zero, L_1504C7DC
    if (ctx->r15 != 0) {
        // 0x1504C1C0: lhu         $t2, 0x84($a0)
        ctx->r10 = MEM_HU(ctx->r4, 0X84);
            goto L_1504C7DC;
    }
    goto skip_4;
    // 0x1504C1C0: lhu         $t2, 0x84($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X84);
    skip_4:
    // 0x1504C1C4: lbu         $t8, 0xAD($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XAD);
    // 0x1504C1C8: bnel        $t8, $zero, L_1504C7DC
    if (ctx->r24 != 0) {
        // 0x1504C1CC: lhu         $t2, 0x84($a0)
        ctx->r10 = MEM_HU(ctx->r4, 0X84);
            goto L_1504C7DC;
    }
    goto skip_5;
    // 0x1504C1CC: lhu         $t2, 0x84($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X84);
    skip_5:
    // 0x1504C1D0: lbu         $t9, 0x83($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X83);
    // 0x1504C1D4: bnel        $t9, $zero, L_1504C7A4
    if (ctx->r25 != 0) {
        // 0x1504C1D8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_1504C7A4;
    }
    goto skip_6;
    // 0x1504C1D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_6:
    // 0x1504C1DC: lbu         $t1, 0x11A($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X11A);
    // 0x1504C1E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1504C1E4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1504C1E8: beq         $t1, $at, L_1504C7A0
    if (ctx->r9 == ctx->r1) {
        // 0x1504C1EC: addiu       $v0, $v0, -0x3D44
        ctx->r2 = ADD32(ctx->r2, -0X3D44);
            goto L_1504C7A0;
    }
    // 0x1504C1EC: addiu       $v0, $v0, -0x3D44
    ctx->r2 = ADD32(ctx->r2, -0X3D44);
    // 0x1504C1F0: lbu         $t3, 0x100($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X100);
    // 0x1504C1F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1504C1F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504C1FC: andi        $t4, $t3, 0xF3
    ctx->r12 = ctx->r11 & 0XF3;
    // 0x1504C200: sb          $t2, 0x80($a0)
    MEM_B(0X80, ctx->r4) = ctx->r10;
    // 0x1504C204: sb          $t4, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r12;
    // 0x1504C208: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504C20C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1504C210: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1504C214: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1504C218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504C21C: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x1504C220: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1504C224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C228: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1504C22C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1504C230: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C234: lwc1        $f8, -0x6E24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E24);
    // 0x1504C238: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C23C: lwc1        $f4, -0x6E20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6E20);
    // 0x1504C240: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1504C244: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1504C248: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C24C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1504C250: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1504C254: lh          $t7, 0x46($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X46);
    // 0x1504C258: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x1504C25C: bgtz        $t7, L_1504C2C8
    if (SIGNED(ctx->r15) > 0) {
        // 0x1504C260: add.s       $f2, $f10, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
            goto L_1504C2C8;
    }
    // 0x1504C260: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1504C264: lbu         $t8, 0x4E($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4E);
    // 0x1504C268: bnel        $t8, $zero, L_1504C2CC
    if (ctx->r24 != 0) {
        // 0x1504C26C: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_7;
    // 0x1504C26C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_7:
    // 0x1504C270: lbu         $t9, 0x13C($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X13C);
    // 0x1504C274: slti        $at, $t9, 0x64
    ctx->r1 = SIGNED(ctx->r25) < 0X64 ? 1 : 0;
    // 0x1504C278: beql        $at, $zero, L_1504C2CC
    if (ctx->r1 == 0) {
        // 0x1504C27C: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_8;
    // 0x1504C27C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_8:
    // 0x1504C280: bnel        $a3, $zero, L_1504C2CC
    if (ctx->r7 != 0) {
        // 0x1504C284: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_9;
    // 0x1504C284: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_9:
    // 0x1504C288: lhu         $t1, 0x32($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X32);
    // 0x1504C28C: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x1504C290: bnel        $t2, $zero, L_1504C2CC
    if (ctx->r10 != 0) {
        // 0x1504C294: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_10;
    // 0x1504C294: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_10:
    // 0x1504C298: lbu         $t3, 0x78($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X78);
    // 0x1504C29C: bnel        $t3, $zero, L_1504C2CC
    if (ctx->r11 != 0) {
        // 0x1504C2A0: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_11;
    // 0x1504C2A0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_11:
    // 0x1504C2A4: lbu         $t4, 0x1A($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1A);
    // 0x1504C2A8: bnel        $t4, $zero, L_1504C2CC
    if (ctx->r12 != 0) {
        // 0x1504C2AC: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_12;
    // 0x1504C2AC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_12:
    // 0x1504C2B0: lh          $t5, 0x8($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X8);
    // 0x1504C2B4: bgtzl       $t5, L_1504C2CC
    if (SIGNED(ctx->r13) > 0) {
        // 0x1504C2B8: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_1504C2CC;
    }
    goto skip_13;
    // 0x1504C2B8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_13:
    // 0x1504C2BC: lbu         $t6, 0x17($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X17);
    // 0x1504C2C0: beq         $t6, $zero, L_1504C30C
    if (ctx->r14 == 0) {
        // 0x1504C2C4: nop
    
            goto L_1504C30C;
    }
    // 0x1504C2C4: nop

L_1504C2C8:
    // 0x1504C2C8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_1504C2CC:
    // 0x1504C2CC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1504C2D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1504C2D4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1504C2D8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1504C2DC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x1504C2E0: jal         0x15064B94
    // 0x1504C2E4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_15064B94(rdram, ctx);
        goto after_1;
    // 0x1504C2E4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x1504C2E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504C2EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504C2F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1504C2F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1504C2F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1504C2FC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1504C300: bne         $v0, $zero, L_1504C844
    if (ctx->r2 != 0) {
        // 0x1504C304: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_1504C844;
    }
    // 0x1504C304: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504C308: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
L_1504C30C:
    // 0x1504C30C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1504C310: lw          $t7, -0x3D7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D7C);
    // 0x1504C314: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1504C318: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1504C31C: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x1504C320: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x1504C324: beq         $t8, $zero, L_1504C358
    if (ctx->r24 == 0) {
        // 0x1504C328: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_1504C358;
    }
    // 0x1504C328: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x1504C32C: lbu         $t9, -0x3D4F($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D4F);
    // 0x1504C330: bnel        $t9, $zero, L_1504C35C
    if (ctx->r25 != 0) {
        // 0x1504C334: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_1504C35C;
    }
    goto skip_14;
    // 0x1504C334: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_14:
    // 0x1504C338: lbu         $t1, 0x78($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X78);
    // 0x1504C33C: bnel        $t1, $zero, L_1504C35C
    if (ctx->r9 != 0) {
        // 0x1504C340: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_1504C35C;
    }
    goto skip_15;
    // 0x1504C340: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_15:
    // 0x1504C344: lbu         $t2, 0x4E($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X4E);
    // 0x1504C348: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1504C34C: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x1504C350: bne         $a2, $t3, L_1504C6E0
    if (ctx->r6 != ctx->r11) {
        // 0x1504C354: nop
    
            goto L_1504C6E0;
    }
    // 0x1504C354: nop

L_1504C358:
    // 0x1504C358: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_1504C35C:
    // 0x1504C35C: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C360: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1504C364: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x1504C368: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x1504C36C: nop

    // 0x1504C370: bc1fl       L_1504C384
    if (!c1cs) {
        // 0x1504C374: lbu         $a1, 0x4E($v1)
        ctx->r5 = MEM_BU(ctx->r3, 0X4E);
            goto L_1504C384;
    }
    goto skip_16;
    // 0x1504C374: lbu         $a1, 0x4E($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X4E);
    skip_16:
    // 0x1504C378: sb          $zero, 0x37($v1)
    MEM_B(0X37, ctx->r3) = 0;
    // 0x1504C37C: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C380: lbu         $a1, 0x4E($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X4E);
L_1504C384:
    // 0x1504C384: beq         $a2, $a1, L_1504C394
    if (ctx->r6 == ctx->r5) {
        // 0x1504C388: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_1504C394;
    }
    // 0x1504C388: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x1504C38C: bnel        $v0, $at, L_1504C3FC
    if (ctx->r2 != ctx->r1) {
        // 0x1504C390: lb          $t4, 0x4A($v1)
        ctx->r12 = MEM_B(ctx->r3, 0X4A);
            goto L_1504C3FC;
    }
    goto skip_17;
    // 0x1504C390: lb          $t4, 0x4A($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X4A);
    skip_17:
L_1504C394:
    // 0x1504C394: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x1504C398: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x1504C39C: bc1fl       L_1504C3FC
    if (!c1cs) {
        // 0x1504C3A0: lb          $t4, 0x4A($v1)
        ctx->r12 = MEM_B(ctx->r3, 0X4A);
            goto L_1504C3FC;
    }
    goto skip_18;
    // 0x1504C3A0: lb          $t4, 0x4A($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X4A);
    skip_18:
    // 0x1504C3A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504C3A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1504C3AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504C3B0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1504C3B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504C3B8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x1504C3BC: lwc1        $f0, 0x3C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C3C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C3C4: lwc1        $f18, -0x6E1C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E1C);
    // 0x1504C3C8: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1504C3CC: addiu       $t0, $zero, 0x302
    ctx->r8 = ADD32(0, 0X302);
    // 0x1504C3D0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x1504C3D4: nop

    // 0x1504C3D8: bc1f        L_1504C600
    if (!c1cs) {
        // 0x1504C3DC: add.s       $f12, $f8, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
            goto L_1504C600;
    }
    // 0x1504C3DC: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1504C3E0: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x1504C3E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C3E8: lwc1        $f10, -0x6E18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E18);
    // 0x1504C3EC: addiu       $t0, $zero, 0x303
    ctx->r8 = ADD32(0, 0X303);
    // 0x1504C3F0: b           L_1504C600
    // 0x1504C3F4: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
        goto L_1504C600;
    // 0x1504C3F4: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1504C3F8: lb          $t4, 0x4A($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X4A);
L_1504C3FC:
    // 0x1504C3FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1504C400: blezl       $t4, L_1504C434
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1504C404: lb          $t5, 0x4B($v1)
        ctx->r13 = MEM_B(ctx->r3, 0X4B);
            goto L_1504C434;
    }
    goto skip_19;
    // 0x1504C404: lb          $t5, 0x4B($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X4B);
    skip_19:
    // 0x1504C408: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504C40C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x1504C410: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x1504C414: nop

    // 0x1504C418: bc1fl       L_1504C434
    if (!c1cs) {
        // 0x1504C41C: lb          $t5, 0x4B($v1)
        ctx->r13 = MEM_B(ctx->r3, 0X4B);
            goto L_1504C434;
    }
    goto skip_20;
    // 0x1504C41C: lb          $t5, 0x4B($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X4B);
    skip_20:
    // 0x1504C420: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504C424: addiu       $t0, $zero, 0x2B
    ctx->r8 = ADD32(0, 0X2B);
    // 0x1504C428: b           L_1504C600
    // 0x1504C42C: div.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
        goto L_1504C600;
    // 0x1504C42C: div.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1504C430: lb          $t5, 0x4B($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X4B);
L_1504C434:
    // 0x1504C434: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1504C438: blez        $t5, L_1504C468
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1504C43C: nop
    
            goto L_1504C468;
    }
    // 0x1504C43C: nop

    // 0x1504C440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1504C444: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x1504C448: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x1504C44C: nop

    // 0x1504C450: bc1f        L_1504C468
    if (!c1cs) {
        // 0x1504C454: nop
    
            goto L_1504C468;
    }
    // 0x1504C454: nop

    // 0x1504C458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504C45C: addiu       $t0, $zero, 0xDF
    ctx->r8 = ADD32(0, 0XDF);
    // 0x1504C460: b           L_1504C600
    // 0x1504C464: div.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
        goto L_1504C600;
    // 0x1504C464: div.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
L_1504C468:
    // 0x1504C468: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C46C: lwc1        $f10, -0x6E14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E14);
    // 0x1504C470: lwc1        $f0, 0x118($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X118);
    // 0x1504C474: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x1504C478: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x1504C47C: nop

    // 0x1504C480: bc1tl       L_1504C4E4
    if (c1cs) {
        // 0x1504C484: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1504C4E4;
    }
    goto skip_21;
    // 0x1504C484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_21:
    // 0x1504C488: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1504C48C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1504C490: nop

    // 0x1504C494: bc1fl       L_1504C4E4
    if (!c1cs) {
        // 0x1504C498: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1504C4E4;
    }
    goto skip_22;
    // 0x1504C498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_22:
    // 0x1504C49C: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C4A0: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x1504C4A4: nop

    // 0x1504C4A8: bc1fl       L_1504C4E4
    if (!c1cs) {
        // 0x1504C4AC: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1504C4E4;
    }
    goto skip_23;
    // 0x1504C4AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_23:
    // 0x1504C4B0: bnel        $a1, $zero, L_1504C4E4
    if (ctx->r5 != 0) {
        // 0x1504C4B4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1504C4E4;
    }
    goto skip_24;
    // 0x1504C4B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_24:
    // 0x1504C4B8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x1504C4BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1504C4C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C4C4: lwc1        $f10, -0x6E10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E10);
    // 0x1504C4C8: div.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1504C4CC: addiu       $t6, $zero, 0x4B
    ctx->r14 = ADD32(0, 0X4B);
    // 0x1504C4D0: addiu       $t0, $zero, 0x8B
    ctx->r8 = ADD32(0, 0X8B);
    // 0x1504C4D4: sb          $t6, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r14;
    // 0x1504C4D8: b           L_1504C600
    // 0x1504C4DC: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
        goto L_1504C600;
    // 0x1504C4DC: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1504C4E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_1504C4E4:
    // 0x1504C4E4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1504C4E8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1504C4EC: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x1504C4F0: nop

    // 0x1504C4F4: bc1fl       L_1504C538
    if (!c1cs) {
        // 0x1504C4F8: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_1504C538;
    }
    goto skip_25;
    // 0x1504C4F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_25:
    // 0x1504C4FC: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x1504C500: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1504C504: addiu       $t0, $zero, 0x1B2
    ctx->r8 = ADD32(0, 0X1B2);
    // 0x1504C508: beq         $t7, $at, L_1504C518
    if (ctx->r15 == ctx->r1) {
        // 0x1504C50C: nop
    
            goto L_1504C518;
    }
    // 0x1504C50C: nop

    // 0x1504C510: b           L_1504C518
    // 0x1504C514: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
        goto L_1504C518;
    // 0x1504C514: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_1504C518:
    // 0x1504C518: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x1504C51C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1504C520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C524: lwc1        $f18, -0x6E0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E0C);
    // 0x1504C528: div.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x1504C52C: b           L_1504C600
    // 0x1504C530: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_1504C600;
    // 0x1504C530: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1504C534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_1504C538:
    // 0x1504C538: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1504C53C: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x1504C540: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x1504C544: nop

    // 0x1504C548: bc1tl       L_1504C578
    if (c1cs) {
        // 0x1504C54C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_1504C578;
    }
    goto skip_26;
    // 0x1504C54C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_26:
    // 0x1504C550: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x1504C554: nop

    // 0x1504C558: bc1fl       L_1504C594
    if (!c1cs) {
        // 0x1504C55C: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_1504C594;
    }
    goto skip_27;
    // 0x1504C55C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_27:
    // 0x1504C560: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C564: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x1504C568: nop

    // 0x1504C56C: bc1fl       L_1504C594
    if (!c1cs) {
        // 0x1504C570: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_1504C594;
    }
    goto skip_28;
    // 0x1504C570: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_28:
    // 0x1504C574: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_1504C578:
    // 0x1504C578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C57C: lwc1        $f4, -0x6E08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6E08);
    // 0x1504C580: mul.s       $f18, $f2, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1504C584: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x1504C588: b           L_1504C600
    // 0x1504C58C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
        goto L_1504C600;
    // 0x1504C58C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1504C590: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_1504C594:
    // 0x1504C594: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1504C598: bc1fl       L_1504C5E4
    if (!c1cs) {
        // 0x1504C59C: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_1504C5E4;
    }
    goto skip_29;
    // 0x1504C59C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    skip_29:
    // 0x1504C5A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504C5A4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x1504C5A8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1504C5AC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1504C5B0: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x1504C5B4: bne         $t8, $at, L_1504C5C4
    if (ctx->r24 != ctx->r1) {
        // 0x1504C5B8: nop
    
            goto L_1504C5C4;
    }
    // 0x1504C5B8: nop

    // 0x1504C5BC: b           L_1504C5C4
    // 0x1504C5C0: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
        goto L_1504C5C4;
    // 0x1504C5C0: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
L_1504C5C4:
    // 0x1504C5C4: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x1504C5C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504C5CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C5D0: lwc1        $f18, -0x6E04($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E04);
    // 0x1504C5D4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1504C5D8: b           L_1504C600
    // 0x1504C5DC: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_1504C600;
    // 0x1504C5DC: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1504C5E0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
L_1504C5E4:
    // 0x1504C5E4: jal         0x1504C078
    // 0x1504C5E8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_1504C078(rdram, ctx);
        goto after_2;
    // 0x1504C5E8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x1504C5EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1504C5F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1504C5F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1504C5F8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504C5FC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_1504C600:
    // 0x1504C600: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1504C604: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504C608: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1504C60C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x1504C610: nop

    // 0x1504C614: bc1fl       L_1504C648
    if (!c1cs) {
        // 0x1504C618: lui         $at, 0x4190
        ctx->r1 = S32(0X4190 << 16);
            goto L_1504C648;
    }
    goto skip_30;
    // 0x1504C618: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    skip_30:
    // 0x1504C61C: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C620: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504C624: lbu         $t1, 0x4E($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X4E);
    // 0x1504C628: bnel        $t1, $zero, L_1504C648
    if (ctx->r9 != 0) {
        // 0x1504C62C: lui         $at, 0x4190
        ctx->r1 = S32(0X4190 << 16);
            goto L_1504C648;
    }
    goto skip_31;
    // 0x1504C62C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    skip_31:
    // 0x1504C630: lbu         $t2, 0x100($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X100);
    // 0x1504C634: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504C638: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x1504C63C: ori         $t3, $t2, 0x10
    ctx->r11 = ctx->r10 | 0X10;
    // 0x1504C640: sb          $t3, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r11;
    // 0x1504C644: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
L_1504C648:
    // 0x1504C648: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504C64C: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C650: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1504C654: nop

    // 0x1504C658: bc1f        L_1504C6D8
    if (!c1cs) {
        // 0x1504C65C: nop
    
            goto L_1504C6D8;
    }
    // 0x1504C65C: nop

    // 0x1504C660: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C664: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1504C668: lbu         $v0, 0x11A($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X11A);
    // 0x1504C66C: beq         $a2, $v0, L_1504C6D8
    if (ctx->r6 == ctx->r2) {
        // 0x1504C670: nop
    
            goto L_1504C6D8;
    }
    // 0x1504C670: nop

    // 0x1504C674: beq         $v0, $at, L_1504C6D8
    if (ctx->r2 == ctx->r1) {
        // 0x1504C678: lwc1        $f18, 0x48($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
            goto L_1504C6D8;
    }
    // 0x1504C678: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1504C67C: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x1504C680: nop

    // 0x1504C684: bc1f        L_1504C6D8
    if (!c1cs) {
        // 0x1504C688: nop
    
            goto L_1504C6D8;
    }
    // 0x1504C688: nop

    // 0x1504C68C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1504C690: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1504C694: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x1504C698: nop

    // 0x1504C69C: bc1f        L_1504C6D8
    if (!c1cs) {
        // 0x1504C6A0: nop
    
            goto L_1504C6D8;
    }
    // 0x1504C6A0: nop

    // 0x1504C6A4: lbu         $t5, -0x3D84($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3D84);
    // 0x1504C6A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504C6AC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x1504C6B0: bne         $t5, $zero, L_1504C6D8
    if (ctx->r13 != 0) {
        // 0x1504C6B4: nop
    
            goto L_1504C6D8;
    }
    // 0x1504C6B4: nop

    // 0x1504C6B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504C6BC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1504C6C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504C6C4: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x1504C6C8: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x1504C6CC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1504C6D0: sb          $t6, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r14;
    // 0x1504C6D4: sb          $t7, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r15;
L_1504C6D8:
    // 0x1504C6D8: b           L_1504C7A0
    // 0x1504C6DC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
        goto L_1504C7A0;
    // 0x1504C6DC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
L_1504C6E0:
    // 0x1504C6E0: beq         $v0, $zero, L_1504C7A0
    if (ctx->r2 == 0) {
        // 0x1504C6E4: swc1        $f12, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
            goto L_1504C7A0;
    }
    // 0x1504C6E4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x1504C6E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1504C6EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504C6F0: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504C6F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1504C6F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504C6FC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1504C700: nop

    // 0x1504C704: bc1f        L_1504C710
    if (!c1cs) {
        // 0x1504C708: nop
    
            goto L_1504C710;
    }
    // 0x1504C708: nop

    // 0x1504C70C: sb          $t8, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r24;
L_1504C710:
    // 0x1504C710: lwc1        $f18, -0x6E00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E00);
    // 0x1504C714: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1504C718: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1504C71C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x1504C720: nop

    // 0x1504C724: bc1fl       L_1504C78C
    if (!c1cs) {
        // 0x1504C728: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_1504C78C;
    }
    goto skip_32;
    // 0x1504C728: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_32:
    // 0x1504C72C: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C730: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x1504C734: lbu         $t9, 0x37($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X37);
    // 0x1504C738: beql        $t9, $zero, L_1504C78C
    if (ctx->r25 == 0) {
        // 0x1504C73C: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_1504C78C;
    }
    goto skip_33;
    // 0x1504C73C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_33:
    // 0x1504C740: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1504C744: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504C748: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x1504C74C: sb          $t1, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r9;
    // 0x1504C750: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1504C754: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1504C758: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1504C75C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504C760: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504C764: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504C768: div.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1504C76C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1504C770: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1504C774: jal         0x1504C0B8
    // 0x1504C778: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    func_1504C0B8(rdram, ctx);
        goto after_3;
    // 0x1504C778: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x1504C77C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1504C780: b           L_1504C7A0
    // 0x1504C784: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_1504C7A0;
    // 0x1504C784: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1504C788: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_1504C78C:
    // 0x1504C78C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x1504C790: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1504C794: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x1504C798: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1504C79C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
L_1504C7A0:
    // 0x1504C7A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_1504C7A4:
    // 0x1504C7A4: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x1504C7A8: beq         $t0, $at, L_1504C844
    if (ctx->r8 == ctx->r1) {
        // 0x1504C7AC: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_1504C844;
    }
    // 0x1504C7AC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504C7B0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1504C7B4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1504C7B8: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x1504C7BC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x1504C7C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1504C7C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1504C7C8: jal         0x1505E650
    // 0x1504C7CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_1505E650(rdram, ctx);
        goto after_4;
    // 0x1504C7CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x1504C7D0: b           L_1504C848
    // 0x1504C7D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1504C848;
    // 0x1504C7D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1504C7D8: lhu         $t2, 0x84($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X84);
L_1504C7DC:
    // 0x1504C7DC: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x1504C7E0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1504C7E4: bnel        $t2, $at, L_1504C848
    if (ctx->r10 != ctx->r1) {
        // 0x1504C7E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504C848;
    }
    goto skip_34;
    // 0x1504C7E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_34:
    // 0x1504C7EC: lbu         $t3, -0x3D4F($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3D4F);
    // 0x1504C7F0: bnel        $t3, $zero, L_1504C848
    if (ctx->r11 != 0) {
        // 0x1504C7F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504C848;
    }
    goto skip_35;
    // 0x1504C7F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_35:
    // 0x1504C7F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1504C7FC: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1504C800: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1504C804: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x1504C808: nop

    // 0x1504C80C: bc1fl       L_1504C848
    if (!c1cs) {
        // 0x1504C810: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504C848;
    }
    goto skip_36;
    // 0x1504C810: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_36:
    // 0x1504C814: lw          $t4, -0x3D7C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3D7C);
    // 0x1504C818: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x1504C81C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x1504C820: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x1504C824: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x1504C828: andi        $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 & 0X2000;
    // 0x1504C82C: beql        $t6, $zero, L_1504C848
    if (ctx->r14 == 0) {
        // 0x1504C830: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504C848;
    }
    goto skip_37;
    // 0x1504C830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_37:
    // 0x1504C834: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x1504C838: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1504C83C: jal         0x1505E650
    // 0x1504C840: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_5;
    // 0x1504C840: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_5:
L_1504C844:
    // 0x1504C844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1504C848:
    // 0x1504C848: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1504C84C: jr          $ra
    // 0x1504C850: nop

    return;
    return;
    // 0x1504C850: nop

;}
RECOMP_FUNC void func_150FE49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE49C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150FE4A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150FE4A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FE4A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FE4AC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150FE4B0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150FE4B4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x150FE4B8: beql        $s0, $zero, L_150FE5F4
    if (ctx->r16 == 0) {
        // 0x150FE4BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150FE5F4;
    }
    goto skip_0;
    // 0x150FE4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x150FE4C0: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FE4C4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FE4C8: addiu       $t7, $t7, 0x1FC8
    ctx->r15 = ADD32(ctx->r15, 0X1FC8);
    // 0x150FE4CC: beq         $t6, $zero, L_150FE51C
    if (ctx->r14 == 0) {
        // 0x150FE4D0: lui         $t8, 0x800A
        ctx->r24 = S32(0X800A << 16);
            goto L_150FE51C;
    }
    // 0x150FE4D0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150FE4D4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150FE4D8: lbu         $t2, -0x746C($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X746C);
    // 0x150FE4DC: addiu       $t8, $t8, 0x1FD4
    ctx->r24 = ADD32(ctx->r24, 0X1FD4);
    // 0x150FE4E0: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x150FE4E4: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x150FE4E8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x150FE4EC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x150FE4F0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150FE4F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150FE4F8: lw          $t1, 0x1D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FE4FC: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x150FE500: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150FE504: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x150FE508: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150FE50C: jal         0x15145EA4
    // 0x150FE510: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150FE510: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x150FE514: b           L_150FE564
    // 0x150FE518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_150FE564;
    // 0x150FE518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150FE51C:
    // 0x150FE51C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150FE520: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150FE524: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FE528: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x150FE52C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150FE530: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x150FE534: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x150FE538: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FE53C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x150FE540: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150FE544: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x150FE548: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FE54C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150FE550: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x150FE554: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x150FE558: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FE55C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150FE560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150FE564:
    // 0x150FE564: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150FE568: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x150FE56C: jal         0x151D3E6C
    // 0x150FE570: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    func_151D3E6C(rdram, ctx);
        goto after_1;
    // 0x150FE570: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    after_1:
    // 0x150FE574: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150FE578: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x150FE57C: jal         0x151D3F14
    // 0x150FE580: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_151D3F14(rdram, ctx);
        goto after_2;
    // 0x150FE580: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x150FE584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FE588: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150FE58C: lbu         $a2, 0x4F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4F);
    // 0x150FE590: jal         0x150FE604
    // 0x150FE594: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_150FE604(rdram, ctx);
        goto after_3;
    // 0x150FE594: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x150FE598: jal         0x150FE7D4
    // 0x150FE59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150FE7D4(rdram, ctx);
        goto after_4;
    // 0x150FE59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150FE5A0: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x150FE5A4: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x150FE5A8: addiu       $t3, $sp, 0x30
    ctx->r11 = ADD32(ctx->r29, 0X30);
    // 0x150FE5AC: beql        $t9, $zero, L_150FE5D0
    if (ctx->r25 == 0) {
        // 0x150FE5B0: lw          $v0, 0x58($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X58);
            goto L_150FE5D0;
    }
    goto skip_1;
    // 0x150FE5B0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    skip_1:
    // 0x150FE5B4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x150FE5B8: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150FE5BC: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x150FE5C0: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x150FE5C4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x150FE5C8: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150FE5CC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
L_150FE5D0:
    // 0x150FE5D0: beql        $v0, $zero, L_150FE5F4
    if (ctx->r2 == 0) {
        // 0x150FE5D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150FE5F4;
    }
    goto skip_2;
    // 0x150FE5D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x150FE5D8: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150FE5DC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150FE5E0: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x150FE5E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x150FE5E8: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150FE5EC: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150FE5F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150FE5F4:
    // 0x150FE5F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150FE5F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150FE5FC: jr          $ra
    // 0x150FE600: nop

    return;
    return;
    // 0x150FE600: nop

;}
RECOMP_FUNC void func_1513E070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513E070: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1513E074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1513E078: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1513E07C: jr          $ra
    // 0x1513E080: nop

    return;
    return;
    // 0x1513E080: nop

;}
RECOMP_FUNC void func_1518A360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518A360: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1518A364: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1518A368: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1518A36C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1518A370: bne         $a2, $at, L_1518A3B4
    if (ctx->r6 != ctx->r1) {
        // 0x1518A374: addiu       $v0, $a0, 0x170
        ctx->r2 = ADD32(ctx->r4, 0X170);
            goto L_1518A3B4;
    }
    // 0x1518A374: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x1518A378: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1518A37C: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    // 0x1518A380: bnel        $v1, $a2, L_1518A3A0
    if (ctx->r3 != ctx->r6) {
        // 0x1518A384: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_1518A3A0;
    }
    goto skip_0;
    // 0x1518A384: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x1518A388: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x1518A38C: sw          $t7, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r15;
    // 0x1518A390: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x1518A394: jr          $ra
    // 0x1518A398: sb          $t8, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x1518A398: sb          $t8, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r24;
    // 0x1518A39C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_1518A3A0:
    // 0x1518A3A0: bne         $t9, $a2, L_1518A3B4
    if (ctx->r25 != ctx->r6) {
        // 0x1518A3A4: nop
    
            goto L_1518A3B4;
    }
    // 0x1518A3A4: nop

    // 0x1518A3A8: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x1518A3AC: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x1518A3B0: sb          $t0, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r8;
L_1518A3B4:
    // 0x1518A3B4: jr          $ra
    // 0x1518A3B8: nop

    return;
    return;
    // 0x1518A3B8: nop

;}
RECOMP_FUNC void func_1514F110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514F114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514F118: jal         0x1514F194
    // 0x1514F11C: nop

    func_1514F194(rdram, ctx);
        goto after_0;
    // 0x1514F11C: nop

    after_0:
    // 0x1514F120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514F124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514F128: jr          $ra
    // 0x1514F12C: nop

    return;
    return;
    // 0x1514F12C: nop

;}
RECOMP_FUNC void func_150CE694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CE694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150CE698: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150CE69C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150CE6A0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150CE6A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CE6A8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150CE6AC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150CE6B0: bne         $a2, $at, L_150CE700
    if (ctx->r6 != ctx->r1) {
        // 0x150CE6B4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150CE700;
    }
    // 0x150CE6B4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150CE6B8: addiu       $v0, $a3, 0x18
    ctx->r2 = ADD32(ctx->r7, 0X18);
    // 0x150CE6BC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150CE6C0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150CE6C4: bnel        $v1, $a0, L_150CE6E4
    if (ctx->r3 != ctx->r4) {
        // 0x150CE6C8: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150CE6E4;
    }
    goto skip_0;
    // 0x150CE6C8: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150CE6CC: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150CE6D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150CE6D4: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150CE6D8: b           L_150CE730
    // 0x150CE6DC: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_150CE730;
    // 0x150CE6DC: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x150CE6E0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150CE6E4:
    // 0x150CE6E4: bnel        $t9, $a0, L_150CE734
    if (ctx->r25 != ctx->r4) {
        // 0x150CE6E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150CE734;
    }
    goto skip_1;
    // 0x150CE6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150CE6EC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150CE6F0: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150CE6F4: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x150CE6F8: b           L_150CE734
    // 0x150CE6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150CE734;
    // 0x150CE6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150CE700:
    // 0x150CE700: bne         $v0, $zero, L_150CE730
    if (ctx->r2 != 0) {
        // 0x150CE704: addiu       $v0, $a3, 0x18
        ctx->r2 = ADD32(ctx->r7, 0X18);
            goto L_150CE730;
    }
    // 0x150CE704: addiu       $v0, $a3, 0x18
    ctx->r2 = ADD32(ctx->r7, 0X18);
    // 0x150CE708: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150CE70C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150CE710: beq         $v1, $t1, L_150CE728
    if (ctx->r3 == ctx->r9) {
        // 0x150CE714: nop
    
            goto L_150CE728;
    }
    // 0x150CE714: nop

    // 0x150CE718: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x150CE71C: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x150CE720: bnel        $t2, $t3, L_150CE734
    if (ctx->r10 != ctx->r11) {
        // 0x150CE724: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150CE734;
    }
    goto skip_2;
    // 0x150CE724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_150CE728:
    // 0x150CE728: jal         0x1516972C
    // 0x150CE72C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150CE72C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_150CE730:
    // 0x150CE730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150CE734:
    // 0x150CE734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150CE738: jr          $ra
    // 0x150CE73C: nop

    return;
    return;
    // 0x150CE73C: nop

;}
RECOMP_FUNC void func_1509DD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DD10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509DD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509DD18: jr          $ra
    // 0x1509DD1C: nop

    return;
    return;
    // 0x1509DD1C: nop

;}
RECOMP_FUNC void func_150409BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409C0: jr          $ra
    // 0x150409C4: nop

    return;
    return;
    // 0x150409C4: nop

;}
RECOMP_FUNC void func_150770E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150770E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150770E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150770EC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150770F0: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x150770F4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150770F8: lbu         $t9, 0x1892($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1892);
    // 0x150770FC: lbu         $t7, 0x222($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X222);
    // 0x15077100: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15077104: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15077108: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1507710C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15077110: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15077114: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15077118: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507711C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15077120: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15077124: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15077128: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507712C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15077130: lwc1        $f4, -0x3CF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3CF4);
    // 0x15077134: bgez        $t9, L_1507714C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15077138: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1507714C;
    }
    // 0x15077138: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1507713C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15077140: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15077144: nop

    // 0x15077148: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1507714C:
    // 0x1507714C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x15077150: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077154: bc1fl       L_15077168
    if (!c1cs) {
        // 0x15077158: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15077168;
    }
    goto skip_0;
    // 0x15077158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507715C: jal         0x15075400
    // 0x15077160: lbu         $a0, 0x1893($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1893);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x15077160: lbu         $a0, 0x1893($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1893);
    after_0:
    // 0x15077164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15077168:
    // 0x15077168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507716C: jr          $ra
    // 0x15077170: nop

    return;
    return;
    // 0x15077170: nop

;}
RECOMP_FUNC void func_1500A8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A8C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1500A8CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1500A8D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1500A8D4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A8D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A8DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A8E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A8E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500A8E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1500A8EC: jal         0x151615F8
    // 0x1500A8F0: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x1500A8F0: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x1500A8F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500A8F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1500A8FC: jr          $ra
    // 0x1500A900: nop

    return;
    return;
    // 0x1500A900: nop

;}
RECOMP_FUNC void func_1509F248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509F24C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509F250: beql        $a0, $zero, L_1509F274
    if (ctx->r4 == 0) {
        // 0x1509F254: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1509F274;
    }
    goto skip_0;
    // 0x1509F254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1509F258: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x1509F25C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1509F260: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x1509F264: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x1509F268: jal         0x100111C8
    // 0x1509F26C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x1509F26C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    after_0:
    // 0x1509F270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509F274:
    // 0x1509F274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509F278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509F27C: jr          $ra
    // 0x1509F280: nop

    return;
    return;
    // 0x1509F280: nop

;}
RECOMP_FUNC void func_151D3FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3FF4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151D3FF8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151D3FFC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151D4000: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151D4004: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151D4008: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151D400C: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
    // 0x151D4010: sb          $t7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r15;
    // 0x151D4014: jal         0x150ADA20
    // 0x151D4018: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D4018: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x151D401C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151D4020: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D4024: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151D4028: mfhi        $t8
    ctx->r24 = hi;
    // 0x151D402C: addiu       $t9, $t8, 0x14
    ctx->r25 = ADD32(ctx->r24, 0X14);
    // 0x151D4030: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x151D4034: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x151D4038: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151D403C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151D4040: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x151D4044: nop

    // 0x151D4048: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x151D404C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151D4050: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151D4054: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151D4058: nop

    // 0x151D405C: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x151D4060: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151D4064: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151D4068: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x151D406C: jal         0x150ADA20
    // 0x151D4070: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151D4070: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_1:
    // 0x151D4074: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x151D4078: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D407C: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x151D4080: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x151D4084: mfhi        $a2
    ctx->r6 = hi;
    // 0x151D4088: addiu       $t6, $zero, 0xA1
    ctx->r14 = ADD32(0, 0XA1);
    // 0x151D408C: addiu       $t7, $zero, 0xA2
    ctx->r15 = ADD32(0, 0XA2);
    // 0x151D4090: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151D4094: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151D4098: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D409C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D40A0: addiu       $a2, $a2, 0x22
    ctx->r6 = ADD32(ctx->r6, 0X22);
    // 0x151D40A4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151D40A8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151D40AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151D40B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151D40B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151D40B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151D40BC: jal         0x151602C0
    // 0x151D40C0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x151D40C0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x151D40C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151D40C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151D40CC: jr          $ra
    // 0x151D40D0: nop

    return;
    return;
    // 0x151D40D0: nop

;}
RECOMP_FUNC void func_15157248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515724C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15157250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15157254: jal         0x151571C4
    // 0x15157258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151571C4(rdram, ctx);
        goto after_0;
    // 0x15157258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1515725C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x15157260: jal         0x1518CA04
    // 0x15157264: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_1518CA04(rdram, ctx);
        goto after_1;
    // 0x15157264: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_1:
    // 0x15157268: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1515726C: jal         0x1503F7B8
    // 0x15157270: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    func_1503F7B8(rdram, ctx);
        goto after_2;
    // 0x15157270: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    after_2:
    // 0x15157274: jal         0x15169804
    // 0x15157278: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_3;
    // 0x15157278: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x1515727C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15157280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15157284: jr          $ra
    // 0x15157288: nop

    return;
    return;
    // 0x15157288: nop

;}
RECOMP_FUNC void func_15008DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008DD0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15008DD4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15008DD8: addiu       $v0, $v0, -0x2B98
    ctx->r2 = ADD32(ctx->r2, -0X2B98);
    // 0x15008DDC: addiu       $v1, $v1, -0x2BA0
    ctx->r3 = ADD32(ctx->r3, -0X2BA0);
L_15008DE0:
    // 0x15008DE0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15008DE4: bne         $v1, $v0, L_15008DE0
    if (ctx->r3 != ctx->r2) {
        // 0x15008DE8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_15008DE0;
    }
    // 0x15008DE8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x15008DEC: jr          $ra
    // 0x15008DF0: nop

    return;
    return;
    // 0x15008DF0: nop

;}
RECOMP_FUNC void func_10010A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10010A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10010A44: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x10010A48: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x10010A4C: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x10010A50: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x10010A54: beql        $t6, $zero, L_10010A7C
    if (ctx->r14 == 0) {
        // 0x10010A58: lbu         $a2, 0x3B($a1)
        ctx->r6 = MEM_BU(ctx->r5, 0X3B);
            goto L_10010A7C;
    }
    goto skip_0;
    // 0x10010A58: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
    skip_0:
    // 0x10010A5C: lhu         $a0, 0x8C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8C);
    // 0x10010A60: beql        $a0, $zero, L_10010A98
    if (ctx->r4 == 0) {
        // 0x10010A64: sh          $zero, 0x8C($a1)
        MEM_H(0X8C, ctx->r5) = 0;
            goto L_10010A98;
    }
    goto skip_1;
    // 0x10010A64: sh          $zero, 0x8C($a1)
    MEM_H(0X8C, ctx->r5) = 0;
    skip_1:
    // 0x10010A68: jal         0x100111C8
    // 0x10010A6C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x10010A6C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x10010A70: b           L_10010A94
    // 0x10010A74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_10010A94;
    // 0x10010A74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x10010A78: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
L_10010A7C:
    // 0x10010A7C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x10010A80: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x10010A84: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x10010A88: jal         0x1000FD38
    // 0x10010A8C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x10010A8C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x10010A90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_10010A94:
    // 0x10010A94: sh          $zero, 0x8C($a1)
    MEM_H(0X8C, ctx->r5) = 0;
L_10010A98:
    // 0x10010A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10010A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10010AA0: jr          $ra
    // 0x10010AA4: nop

    return;
    return;
    // 0x10010AA4: nop

;}
RECOMP_FUNC void n_alClose(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10018E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10018E18: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10018E1C: lw          $t6, -0x45C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45C0);
    // 0x10018E20: beq         $t6, $zero, L_10018E40
    if (ctx->r14 == 0) {
        // 0x10018E24: nop
    
            goto L_10018E40;
    }
    // 0x10018E24: nop

    // 0x10018E28: jal         0x1001E480
    // 0x10018E2C: nop

    n_alSynDelete(rdram, ctx);
        goto after_0;
    // 0x10018E2C: nop

    after_0:
    // 0x10018E30: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10018E34: sw          $zero, -0x45C0($at)
    MEM_W(-0X45C0, ctx->r1) = 0;
    // 0x10018E38: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10018E3C: sw          $zero, -0x45BC($at)
    MEM_W(-0X45BC, ctx->r1) = 0;
L_10018E40:
    // 0x10018E40: b           L_10018E48
    // 0x10018E44: nop

        goto L_10018E48;
    // 0x10018E44: nop

L_10018E48:
    // 0x10018E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10018E50: jr          $ra
    // 0x10018E54: nop

    return;
    return;
    // 0x10018E54: nop

;}
RECOMP_FUNC void func_150F07E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F07E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F07E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F07EC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F07F0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F07F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F07F8: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x150F07FC: bne         $a2, $zero, L_150F0834
    if (ctx->r6 != 0) {
        // 0x150F0800: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_150F0834;
    }
    // 0x150F0800: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x150F0804: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150F0808: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150F080C: beq         $v1, $t7, L_150F0824
    if (ctx->r3 == ctx->r15) {
        // 0x150F0810: nop
    
            goto L_150F0824;
    }
    // 0x150F0810: nop

    // 0x150F0814: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x150F0818: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x150F081C: bnel        $t8, $t9, L_150F0880
    if (ctx->r24 != ctx->r25) {
        // 0x150F0820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F0880;
    }
    goto skip_0;
    // 0x150F0820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150F0824:
    // 0x150F0824: jal         0x1516972C
    // 0x150F0828: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F0828: nop

    after_0:
    // 0x150F082C: b           L_150F0880
    // 0x150F0830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150F0880;
    // 0x150F0830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F0834:
    // 0x150F0834: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150F0838: bnel        $v1, $at, L_150F0880
    if (ctx->r3 != ctx->r1) {
        // 0x150F083C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F0880;
    }
    goto skip_1;
    // 0x150F083C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150F0840: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x150F0844: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x150F0848: bnel        $a0, $v1, L_150F0868
    if (ctx->r4 != ctx->r3) {
        // 0x150F084C: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_150F0868;
    }
    goto skip_2;
    // 0x150F084C: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x150F0850: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x150F0854: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x150F0858: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x150F085C: b           L_150F087C
    // 0x150F0860: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_150F087C;
    // 0x150F0860: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x150F0864: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_150F0868:
    // 0x150F0868: bnel        $t2, $v1, L_150F0880
    if (ctx->r10 != ctx->r3) {
        // 0x150F086C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F0880;
    }
    goto skip_3;
    // 0x150F086C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x150F0870: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x150F0874: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x150F0878: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_150F087C:
    // 0x150F087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F0880:
    // 0x150F0880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0884: jr          $ra
    // 0x150F0888: nop

    return;
    return;
    // 0x150F0888: nop

;}
RECOMP_FUNC void func_150706C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150706C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150706C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150706CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150706D0: addiu       $a1, $a2, -0x3E
    ctx->r5 = ADD32(ctx->r6, -0X3E);
    // 0x150706D4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150706D8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150706DC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150706E0: jal         0x150EEF40
    // 0x150706E4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_150EEF40(rdram, ctx);
        goto after_0;
    // 0x150706E4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x150706E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150706EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150706F0: jr          $ra
    // 0x150706F4: nop

    return;
    return;
    // 0x150706F4: nop

;}
RECOMP_FUNC void func_1506EDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EDF0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506EDF4: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506EDF8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506EDFC: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x1506EE00: lw          $t6, 0xF4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XF4);
    // 0x1506EE04: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x1506EE08: sw          $t8, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r24;
    // 0x1506EE0C: jr          $ra
    // 0x1506EE10: nop

    return;
    return;
    // 0x1506EE10: nop

;}
RECOMP_FUNC void func_151D5514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5514: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151D5518: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x151D551C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151D5520: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151D5524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D5528: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151D552C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151D5530: addiu       $t8, $zero, -0x40
    ctx->r24 = ADD32(0, -0X40);
    // 0x151D5534: addiu       $t9, $zero, 0x4A
    ctx->r25 = ADD32(0, 0X4A);
    // 0x151D5538: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x151D553C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151D5540: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x151D5544: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x151D5548: sh          $t8, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r24;
    // 0x151D554C: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x151D5550: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151D5554: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151D5558: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x151D555C: addiu       $t2, $sp, 0x2C
    ctx->r10 = ADD32(ctx->r29, 0X2C);
    // 0x151D5560: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151D5564: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151D5568: lw          $t5, 0x4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X4);
    // 0x151D556C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151D5570: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151D5574: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151D5578: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x151D557C: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x151D5580: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x151D5584: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151D5588: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D558C: lwc1        $f4, -0x4DE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4DE4);
    // 0x151D5590: lui         $at, 0x4356
    ctx->r1 = S32(0X4356 << 16);
    // 0x151D5594: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151D5598: lui         $at, 0x434B
    ctx->r1 = S32(0X434B << 16);
    // 0x151D559C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D55A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55A4: lwc1        $f10, -0x4DE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4DE0);
    // 0x151D55A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55AC: lwc1        $f16, -0x4DDC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4DDC);
    // 0x151D55B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55B4: lwc1        $f18, -0x4DD8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4DD8);
    // 0x151D55B8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x151D55BC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x151D55C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151D55C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55C8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151D55CC: lwc1        $f6, -0x4DD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4DD4);
    // 0x151D55D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55D4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151D55D8: lwc1        $f8, -0x4DD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4DD0);
    // 0x151D55DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D55E0: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151D55E4: lwc1        $f10, -0x4DCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4DCC);
    // 0x151D55E8: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x151D55EC: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x151D55F0: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x151D55F4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x151D55F8: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x151D55FC: sh          $t8, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r24;
    // 0x151D5600: sh          $t9, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r25;
    // 0x151D5604: sh          $t0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r8;
    // 0x151D5608: sh          $t1, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r9;
    // 0x151D560C: sh          $t4, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r12;
    // 0x151D5610: sh          $t3, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r11;
    // 0x151D5614: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x151D5618: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151D561C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x151D5620: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x151D5624: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x151D5628: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x151D562C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x151D5630: jal         0x1514FCE8
    // 0x151D5634: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_1514FCE8(rdram, ctx);
        goto after_0;
    // 0x151D5634: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151D5638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D563C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x151D5640: jr          $ra
    // 0x151D5644: nop

    return;
    return;
    // 0x151D5644: nop

;}
RECOMP_FUNC void func_15075400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075400: slti        $at, $a0, 0xF7
    ctx->r1 = SIGNED(ctx->r4) < 0XF7 ? 1 : 0;
    // 0x15075404: beq         $at, $zero, L_1507542C
    if (ctx->r1 == 0) {
        // 0x15075408: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_1507542C;
    }
    // 0x15075408: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507540C: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15075410: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15075414: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15075418: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x1507541C: lw          $t6, 0x218($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X218);
    // 0x15075420: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15075424: jr          $ra
    // 0x15075428: sw          $t8, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x15075428: sw          $t8, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r24;
L_1507542C:
    // 0x1507542C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15075430: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15075434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_15075438:
    // 0x15075438: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x1507543C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15075440: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x15075444: lw          $v1, 0x218($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X218);
    // 0x15075448: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x1507544C: addiu       $t9, $v1, 0x5
    ctx->r25 = ADD32(ctx->r3, 0X5);
    // 0x15075450: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x15075454: slti        $at, $a2, 0xF7
    ctx->r1 = SIGNED(ctx->r6) < 0XF7 ? 1 : 0;
    // 0x15075458: beq         $at, $zero, L_15075468
    if (ctx->r1 == 0) {
        // 0x1507545C: andi        $a3, $a2, 0xFF
        ctx->r7 = ctx->r6 & 0XFF;
            goto L_15075468;
    }
    // 0x1507545C: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
    // 0x15075460: b           L_15075484
    // 0x15075464: sw          $t9, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r25;
        goto L_15075484;
    // 0x15075464: sw          $t9, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r25;
L_15075468:
    // 0x15075468: bne         $a0, $a3, L_15075484
    if (ctx->r4 != ctx->r7) {
        // 0x1507546C: sw          $t1, 0x218($v0)
        MEM_W(0X218, ctx->r2) = ctx->r9;
            goto L_15075484;
    }
    // 0x1507546C: sw          $t1, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r9;
    // 0x15075470: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15075474: lw          $t2, 0x218($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X218);
    // 0x15075478: addiu       $t3, $t2, -0x5
    ctx->r11 = ADD32(ctx->r10, -0X5);
    // 0x1507547C: jr          $ra
    // 0x15075480: sw          $t3, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r11;
    return;
    return;
    // 0x15075480: sw          $t3, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r11;
L_15075484:
    // 0x15075484: slti        $at, $t4, 0x64
    ctx->r1 = SIGNED(ctx->r12) < 0X64 ? 1 : 0;
    // 0x15075488: bne         $at, $zero, L_15075438
    if (ctx->r1 != 0) {
        // 0x1507548C: or          $a1, $t4, $zero
        ctx->r5 = ctx->r12 | 0;
            goto L_15075438;
    }
    // 0x1507548C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x15075490: jr          $ra
    // 0x15075494: nop

    return;
    return;
    // 0x15075494: nop

;}
RECOMP_FUNC void func_15190518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519051C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190520: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15190524: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x15190528: lbu         $t6, 0x3B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3B);
    // 0x1519052C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    // 0x15190530: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x15190534: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x15190538: jal         0x1516944C
    // 0x1519053C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_1516944C(rdram, ctx);
        goto after_0;
    // 0x1519053C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x15190540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15190544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15190548: jr          $ra
    // 0x1519054C: nop

    return;
    return;
    // 0x1519054C: nop

;}
RECOMP_FUNC void func_15075050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075050: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15075054: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15075058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1507505C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15075060: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15075064: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15075068: swc1        $f0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f0.u32l;
    // 0x1507506C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x15075070: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15075074: nop

    // 0x15075078: bc1fl       L_15075090
    if (!c1cs) {
        // 0x1507507C: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_15075090;
    }
    goto skip_0;
    // 0x1507507C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    skip_0:
    // 0x15075080: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15075084: nop

    // 0x15075088: swc1        $f8, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f8.u32l;
    // 0x1507508C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_15075090:
    // 0x15075090: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15075094: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x15075098: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x1507509C: jr          $ra
    // 0x150750A0: nop

    return;
    return;
    // 0x150750A0: nop

;}
RECOMP_FUNC void func_1513F4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513F4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513F4B4: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x1513F4B8: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1513F4BC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1513F4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513F4C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1513F4C8: addiu       $a1, $a0, 0x110
    ctx->r5 = ADD32(ctx->r4, 0X110);
    // 0x1513F4CC: jal         0x15140410
    // 0x1513F4D0: addiu       $a2, $a0, 0x11C
    ctx->r6 = ADD32(ctx->r4, 0X11C);
    func_15140410(rdram, ctx);
        goto after_0;
    // 0x1513F4D0: addiu       $a2, $a0, 0x11C
    ctx->r6 = ADD32(ctx->r4, 0X11C);
    after_0:
    // 0x1513F4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513F4DC: jr          $ra
    // 0x1513F4E0: nop

    return;
    return;
    // 0x1513F4E0: nop

;}
RECOMP_FUNC void func_1506BBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BBA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506BBAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BBB0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1506BBB4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1506BBB8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BBBC: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506BBC0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BBC4: addiu       $a2, $zero, 0x2EE0
    ctx->r6 = ADD32(0, 0X2EE0);
    // 0x1506BBC8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1506BBCC: lw          $t7, 0x318($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X318);
    // 0x1506BBD0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1506BBD4: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506BBD8: bne         $t7, $zero, L_1506BC08
    if (ctx->r15 != 0) {
        // 0x1506BBDC: addiu       $t9, $zero, 0x9C4
        ctx->r25 = ADD32(0, 0X9C4);
            goto L_1506BC08;
    }
    // 0x1506BBDC: addiu       $t9, $zero, 0x9C4
    ctx->r25 = ADD32(0, 0X9C4);
    // 0x1506BBE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1506BBE4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BBE8: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    // 0x1506BBEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1506BBF0: addiu       $a2, $zero, 0x36B0
    ctx->r6 = ADD32(0, 0X36B0);
    // 0x1506BBF4: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x1506BBF8: jal         0x10010154
    // 0x1506BBFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010154(rdram, ctx);
        goto after_0;
    // 0x1506BBFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x1506BC00: b           L_1506BC18
    // 0x1506BC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BC18;
    // 0x1506BC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BC08:
    // 0x1506BC08: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    // 0x1506BC0C: jal         0x10010154
    // 0x1506BC10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_10010154(rdram, ctx);
        goto after_1;
    // 0x1506BC10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x1506BC14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BC18:
    // 0x1506BC18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506BC1C: jr          $ra
    // 0x1506BC20: nop

    return;
    return;
    // 0x1506BC20: nop

;}
RECOMP_FUNC void n_alInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10018DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018DA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10018DAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x10018DB0: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10018DB4: lw          $t6, -0x45C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45C0);
    // 0x10018DB8: bne         $t6, $zero, L_10018DF4
    if (ctx->r14 != 0) {
        // 0x10018DBC: nop
    
            goto L_10018DF4;
    }
    // 0x10018DBC: nop

    // 0x10018DC0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x10018DC4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10018DC8: sw          $t7, -0x45C0($at)
    MEM_W(-0X45C0, ctx->r1) = ctx->r15;
    // 0x10018DCC: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10018DD0: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10018DD4: bne         $t8, $zero, L_10018DF4
    if (ctx->r24 != 0) {
        // 0x10018DD8: nop
    
            goto L_10018DF4;
    }
    // 0x10018DD8: nop

    // 0x10018DDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x10018DE0: lw          $t9, -0x45C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45C0);
    // 0x10018DE4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10018DE8: sw          $t9, -0x45BC($at)
    MEM_W(-0X45BC, ctx->r1) = ctx->r25;
    // 0x10018DEC: jal         0x10018E60
    // 0x10018DF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    n_alSynNew(rdram, ctx);
        goto after_0;
    // 0x10018DF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
L_10018DF4:
    // 0x10018DF4: b           L_10018DFC
    // 0x10018DF8: nop

        goto L_10018DFC;
    // 0x10018DF8: nop

L_10018DFC:
    // 0x10018DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10018E04: jr          $ra
    // 0x10018E08: nop

    return;
    return;
    // 0x10018E08: nop

;}
RECOMP_FUNC void func_15144598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144598: lbu         $v0, 0x15($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15);
    // 0x1514459C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151445A0: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x151445A4: beql        $t6, $zero, L_151445FC
    if (ctx->r14 == 0) {
        // 0x151445A8: lh          $v0, 0x6($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X6);
            goto L_151445FC;
    }
    goto skip_0;
    // 0x151445A8: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    skip_0:
    // 0x151445AC: beq         $t6, $at, L_151445F8
    if (ctx->r14 == ctx->r1) {
        // 0x151445B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151445F8;
    }
    // 0x151445B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151445B4: beq         $t6, $at, L_151445C8
    if (ctx->r14 == ctx->r1) {
        // 0x151445B8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_151445C8;
    }
    // 0x151445B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151445BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151445C0: b           L_15144624
    // 0x151445C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_15144624;
    // 0x151445C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_151445C8:
    // 0x151445C8: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x151445CC: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x151445D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151445D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151445D8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151445DC: mflo        $t9
    ctx->r25 = lo;
    // 0x151445E0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151445E4: nop

    // 0x151445E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151445EC: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151445F0: b           L_15144624
    // 0x151445F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_15144624;
    // 0x151445F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_151445F8:
    // 0x151445F8: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
L_151445FC:
    // 0x151445FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15144600: lwc1        $f18, 0x5694($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5694);
    // 0x15144604: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15144608: mflo        $t0
    ctx->r8 = lo;
    // 0x1514460C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15144610: nop

    // 0x15144614: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15144618: mul.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514461C: nop

    // 0x15144620: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15144624:
    // 0x15144624: jr          $ra
    // 0x15144628: nop

    return;
    return;
    // 0x15144628: nop

;}
RECOMP_FUNC void __n_alCSeqGetTrackEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100182A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x100182AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100182B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x100182B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x100182B8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x100182BC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x100182C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x100182C4: jal         0x100189D0
    // 0x100182C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_0;
    // 0x100182C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x100182CC: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x100182D0: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x100182D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x100182D8: bne         $t6, $at, L_100185C0
    if (ctx->r14 != ctx->r1) {
        // 0x100182DC: nop
    
            goto L_100185C0;
    }
    // 0x100182DC: nop

    // 0x100182E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x100182E4: jal         0x100189D0
    // 0x100182E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_1;
    // 0x100182E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x100182EC: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x100182F0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x100182F4: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x100182F8: bne         $t7, $at, L_10018374
    if (ctx->r15 != ctx->r1) {
        // 0x100182FC: nop
    
            goto L_10018374;
    }
    // 0x100182FC: nop

    // 0x10018300: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x10018304: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x10018308: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x1001830C: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x10018310: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10018314: sb          $t0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r8;
    // 0x10018318: lbu         $t2, 0x23($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X23);
    // 0x1001831C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x10018320: sb          $t2, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r10;
    // 0x10018324: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x10018328: jal         0x100189D0
    // 0x1001832C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_2;
    // 0x1001832C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x10018330: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10018334: sb          $v0, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r2;
    // 0x10018338: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1001833C: jal         0x100189D0
    // 0x10018340: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_3;
    // 0x10018340: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x10018344: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x10018348: sb          $v0, 0xC($t5)
    MEM_B(0XC, ctx->r13) = ctx->r2;
    // 0x1001834C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x10018350: jal         0x100189D0
    // 0x10018354: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_4;
    // 0x10018354: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x10018358: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1001835C: sb          $v0, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r2;
    // 0x10018360: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10018364: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x10018368: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1001836C: b           L_100185B8
    // 0x10018370: sb          $zero, 0xA8($t9)
    MEM_B(0XA8, ctx->r25) = 0;
        goto L_100185B8;
    // 0x10018370: sb          $zero, 0xA8($t9)
    MEM_B(0XA8, ctx->r25) = 0;
L_10018374:
    // 0x10018374: lbu         $t0, 0x23($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X23);
    // 0x10018378: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x1001837C: bne         $t0, $at, L_100183DC
    if (ctx->r8 != ctx->r1) {
        // 0x10018380: nop
    
            goto L_100183DC;
    }
    // 0x10018380: nop

    // 0x10018384: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10018388: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1001838C: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x10018390: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x10018394: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x10018398: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1001839C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x100183A0: xor         $t7, $t5, $t6
    ctx->r15 = ctx->r13 ^ ctx->r14;
    // 0x100183A4: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x100183A8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x100183AC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x100183B0: beq         $t9, $zero, L_100183C8
    if (ctx->r25 == 0) {
        // 0x100183B4: nop
    
            goto L_100183C8;
    }
    // 0x100183B4: nop

    // 0x100183B8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x100183BC: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x100183C0: b           L_100183D4
    // 0x100183C4: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
        goto L_100183D4;
    // 0x100183C4: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
L_100183C8:
    // 0x100183C8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x100183CC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x100183D0: sh          $t1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r9;
L_100183D4:
    // 0x100183D4: b           L_100185B8
    // 0x100183D8: nop

        goto L_100185B8;
    // 0x100183D8: nop

L_100183DC:
    // 0x100183DC: lbu         $t5, 0x23($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X23);
    // 0x100183E0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x100183E4: bne         $t5, $at, L_10018450
    if (ctx->r13 != ctx->r1) {
        // 0x100183E8: nop
    
            goto L_10018450;
    }
    // 0x100183E8: nop

    // 0x100183EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x100183F0: jal         0x100189D0
    // 0x100183F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_5;
    // 0x100183F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x100183F8: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x100183FC: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x10018400: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10018404: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x10018408: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x1001840C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x10018410: jal         0x100189D0
    // 0x10018414: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_6;
    // 0x10018414: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x10018418: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x1001841C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10018420: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x10018424: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x10018428: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x1001842C: sw          $t2, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r10;
    // 0x10018430: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10018434: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x10018438: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x1001843C: sb          $zero, 0xA8($t5)
    MEM_B(0XA8, ctx->r13) = 0;
    // 0x10018440: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x10018444: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x10018448: b           L_100185B8
    // 0x1001844C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
        goto L_100185B8;
    // 0x1001844C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_10018450:
    // 0x10018450: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x10018454: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x10018458: bne         $t4, $at, L_100185B8
    if (ctx->r12 != ctx->r1) {
        // 0x1001845C: nop
    
            goto L_100185B8;
    }
    // 0x1001845C: nop

    // 0x10018460: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x10018464: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10018468: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x1001846C: addu        $t8, $t9, $t2
    ctx->r24 = ADD32(ctx->r25, ctx->r10);
    // 0x10018470: lw          $t1, 0x18($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X18);
    // 0x10018474: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x10018478: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001847C: lbu         $t5, 0x0($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X0);
    // 0x10018480: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x10018484: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10018488: sb          $t5, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r13;
    // 0x1001848C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10018490: lbu         $t4, 0x0($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X0);
    // 0x10018494: sb          $t4, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r12;
    // 0x10018498: lbu         $t0, 0x29($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X29);
    // 0x1001849C: beq         $t0, $zero, L_100184B0
    if (ctx->r8 == 0) {
        // 0x100184A0: nop
    
            goto L_100184B0;
    }
    // 0x100184A0: nop

    // 0x100184A4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x100184A8: bne         $t9, $zero, L_100184DC
    if (ctx->r25 != 0) {
        // 0x100184AC: nop
    
            goto L_100184DC;
    }
    // 0x100184AC: nop

L_100184B0:
    // 0x100184B0: lbu         $t2, 0x2A($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2A);
    // 0x100184B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x100184B8: sb          $t2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r10;
    // 0x100184BC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x100184C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x100184C4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x100184C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x100184CC: addiu       $t5, $t1, 0x5
    ctx->r13 = ADD32(ctx->r9, 0X5);
    // 0x100184D0: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x100184D4: b           L_1001859C
    // 0x100184D8: sw          $t5, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r13;
        goto L_1001859C;
    // 0x100184D8: sw          $t5, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r13;
L_100184DC:
    // 0x100184DC: lbu         $t0, 0x29($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X29);
    // 0x100184E0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x100184E4: beq         $t0, $at, L_100184FC
    if (ctx->r8 == ctx->r1) {
        // 0x100184E8: nop
    
            goto L_100184FC;
    }
    // 0x100184E8: nop

    // 0x100184EC: lbu         $t9, 0x29($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X29);
    // 0x100184F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x100184F4: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x100184F8: sb          $t2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r10;
L_100184FC:
    // 0x100184FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10018500: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x10018504: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10018508: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001850C: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x10018510: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x10018514: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x10018518: sll         $t5, $t7, 24
    ctx->r13 = S32(ctx->r15 << 24);
    // 0x1001851C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x10018520: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x10018524: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x10018528: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x1001852C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x10018530: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10018534: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x10018538: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x1001853C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x10018540: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10018544: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10018548: lbu         $t3, 0x0($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X0);
    // 0x1001854C: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x10018550: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x10018554: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x10018558: addu        $t2, $t7, $t4
    ctx->r10 = ADD32(ctx->r15, ctx->r12);
    // 0x1001855C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x10018560: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10018564: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x10018568: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x1001856C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x10018570: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x10018574: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x10018578: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1001857C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x10018580: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10018584: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x10018588: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001858C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x10018590: subu        $t2, $t7, $t4
    ctx->r10 = SUB32(ctx->r15, ctx->r12);
    // 0x10018594: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x10018598: sw          $t2, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r10;
L_1001859C:
    // 0x1001859C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x100185A0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x100185A4: addu        $t3, $t6, $t1
    ctx->r11 = ADD32(ctx->r14, ctx->r9);
    // 0x100185A8: sb          $zero, 0xA8($t3)
    MEM_B(0XA8, ctx->r11) = 0;
    // 0x100185AC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x100185B0: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x100185B4: sh          $t7, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r15;
L_100185B8:
    // 0x100185B8: b           L_100186BC
    // 0x100185BC: nop

        goto L_100186BC;
    // 0x100185BC: nop

L_100185C0:
    // 0x100185C0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x100185C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x100185C8: sh          $t0, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r8;
    // 0x100185CC: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x100185D0: andi        $t2, $t8, 0x80
    ctx->r10 = ctx->r24 & 0X80;
    // 0x100185D4: beq         $t2, $zero, L_10018624
    if (ctx->r10 == 0) {
        // 0x100185D8: nop
    
            goto L_10018624;
    }
    // 0x100185D8: nop

    // 0x100185DC: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x100185E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x100185E4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x100185E8: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x100185EC: or          $t3, $t6, $t1
    ctx->r11 = ctx->r14 | ctx->r9;
    // 0x100185F0: sb          $t3, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r11;
    // 0x100185F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x100185F8: jal         0x100189D0
    // 0x100185FC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_7;
    // 0x100185FC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x10018600: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10018604: sb          $v0, 0x9($t4)
    MEM_B(0X9, ctx->r12) = ctx->r2;
    // 0x10018608: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1001860C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x10018610: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x10018614: lbu         $t5, 0x8($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X8);
    // 0x10018618: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x1001861C: b           L_10018648
    // 0x10018620: sb          $t5, 0xA8($t9)
    MEM_B(0XA8, ctx->r25) = ctx->r13;
        goto L_10018648;
    // 0x10018620: sb          $t5, 0xA8($t9)
    MEM_B(0XA8, ctx->r25) = ctx->r13;
L_10018624:
    // 0x10018624: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10018628: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1001862C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10018630: addu        $t3, $t6, $t1
    ctx->r11 = ADD32(ctx->r14, ctx->r9);
    // 0x10018634: lbu         $t7, 0xA8($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0XA8);
    // 0x10018638: sb          $t7, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r15;
    // 0x1001863C: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x10018640: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10018644: sb          $t0, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r8;
L_10018648:
    // 0x10018648: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1001864C: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x10018650: lbu         $t5, 0x8($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X8);
    // 0x10018654: andi        $t9, $t5, 0xF0
    ctx->r25 = ctx->r13 & 0XF0;
    // 0x10018658: beq         $t9, $at, L_100186B4
    if (ctx->r25 == ctx->r1) {
        // 0x1001865C: nop
    
            goto L_100186B4;
    }
    // 0x1001865C: nop

    // 0x10018660: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x10018664: beq         $t9, $at, L_100186B4
    if (ctx->r25 == ctx->r1) {
        // 0x10018668: nop
    
            goto L_100186B4;
    }
    // 0x10018668: nop

    // 0x1001866C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x10018670: jal         0x100189D0
    // 0x10018674: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __getTrackByte(rdram, ctx);
        goto after_8;
    // 0x10018674: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x10018678: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1001867C: sb          $v0, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r2;
    // 0x10018680: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10018684: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x10018688: lbu         $t3, 0x8($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X8);
    // 0x1001868C: andi        $t7, $t3, 0xF0
    ctx->r15 = ctx->r11 & 0XF0;
    // 0x10018690: bne         $t7, $at, L_100186AC
    if (ctx->r15 != ctx->r1) {
        // 0x10018694: nop
    
            goto L_100186AC;
    }
    // 0x10018694: nop

    // 0x10018698: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1001869C: jal         0x10018BC4
    // 0x100186A0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    __readVarLen(rdram, ctx);
        goto after_9;
    // 0x100186A0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x100186A4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x100186A8: sw          $v0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r2;
L_100186AC:
    // 0x100186AC: b           L_100186BC
    // 0x100186B0: nop

        goto L_100186BC;
    // 0x100186B0: nop

L_100186B4:
    // 0x100186B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x100186B8: sb          $zero, 0xA($t0)
    MEM_B(0XA, ctx->r8) = 0;
L_100186BC:
    // 0x100186BC: b           L_100186CC
    // 0x100186C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_100186CC;
    // 0x100186C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x100186C4: b           L_100186CC
    // 0x100186C8: nop

        goto L_100186CC;
    // 0x100186C8: nop

L_100186CC:
    // 0x100186CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100186D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x100186D4: jr          $ra
    // 0x100186D8: nop

    return;
    return;
    // 0x100186D8: nop

;}
RECOMP_FUNC void func_151695F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151695F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151695F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151695F8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151695FC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15169600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15169604: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15169608: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x1516960C: lbu         $t7, 0x3B($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X3B);
    // 0x15169610: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15169614: jal         0x15169040
    // 0x15169618: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    func_15169040(rdram, ctx);
        goto after_0;
    // 0x15169618: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x1516961C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15169620: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15169624: jr          $ra
    // 0x15169628: nop

    return;
    return;
    // 0x15169628: nop

;}
RECOMP_FUNC void func_150F892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F892C: addiu       $sp, $sp, -0x208
    ctx->r29 = ADD32(ctx->r29, -0X208);
    // 0x150F8930: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x150F8934: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150F8938: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x150F893C: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x150F8940: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x150F8944: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x150F8948: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x150F894C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x150F8950: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x150F8954: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x150F8958: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x150F895C: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x150F8960: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x150F8964: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x150F8968: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x150F896C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x150F8970: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x150F8974: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F8978: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F897C: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150F8980: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150F8984: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x150F8988: addiu       $a1, $zero, 0x1EB
    ctx->r5 = ADD32(0, 0X1EB);
    // 0x150F898C: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
L_150F8990:
    // 0x150F8990: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x150F8994: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150F8998: bne         $a0, $t6, L_150F89BC
    if (ctx->r4 != ctx->r14) {
        // 0x150F899C: nop
    
            goto L_150F89BC;
    }
    // 0x150F899C: nop

    // 0x150F89A0: lhu         $t7, 0x84($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X84);
    // 0x150F89A4: bne         $a1, $t7, L_150F89BC
    if (ctx->r5 != ctx->r15) {
        // 0x150F89A8: nop
    
            goto L_150F89BC;
    }
    // 0x150F89A8: nop

    // 0x150F89AC: lbu         $t8, 0x222($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X222);
    // 0x150F89B0: bne         $t8, $zero, L_150F89BC
    if (ctx->r24 != 0) {
        // 0x150F89B4: nop
    
            goto L_150F89BC;
    }
    // 0x150F89B4: nop

    // 0x150F89B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150F89BC:
    // 0x150F89BC: bne         $v1, $a2, L_150F8990
    if (ctx->r3 != ctx->r6) {
        // 0x150F89C0: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_150F8990;
    }
    // 0x150F89C0: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    // 0x150F89C4: beq         $s0, $zero, L_150F96D8
    if (ctx->r16 == 0) {
        // 0x150F89C8: addiu       $fp, $s3, 0x28
        ctx->r30 = ADD32(ctx->r19, 0X28);
            goto L_150F96D8;
    }
    // 0x150F89C8: addiu       $fp, $s3, 0x28
    ctx->r30 = ADD32(ctx->r19, 0X28);
    // 0x150F89CC: lbu         $t9, 0x8($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X8);
    // 0x150F89D0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150F89D4: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x150F89D8: beq         $at, $zero, L_150F8B18
    if (ctx->r1 == 0) {
        // 0x150F89DC: nop
    
            goto L_150F8B18;
    }
    // 0x150F89DC: nop

    // 0x150F89E0: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x150F89E4: lh          $t0, 0x6($fp)
    ctx->r8 = MEM_H(ctx->r30, 0X6);
    // 0x150F89E8: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F89EC: mflo        $t2
    ctx->r10 = lo;
    // 0x150F89F0: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x150F89F4: sh          $t3, 0x6($fp)
    MEM_H(0X6, ctx->r30) = ctx->r11;
    // 0x150F89F8: lh          $t4, 0x6($fp)
    ctx->r12 = MEM_H(ctx->r30, 0X6);
    // 0x150F89FC: bgez        $t4, L_150F8B18
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150F8A00: nop
    
            goto L_150F8B18;
    }
    // 0x150F8A00: nop

    // 0x150F8A04: jal         0x150ADA20
    // 0x150F8A08: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150F8A08: nop

    after_0:
    // 0x150F8A0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150F8A10: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8A14: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150F8A18: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150F8A1C: lbu         $t6, 0x8($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X8);
    // 0x150F8A20: mfhi        $a0
    ctx->r4 = hi;
    // 0x150F8A24: addiu       $t2, $zero, 0x1F4
    ctx->r10 = ADD32(0, 0X1F4);
    // 0x150F8A28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150F8A2C: addu        $t8, $fp, $t7
    ctx->r24 = ADD32(ctx->r30, ctx->r15);
    // 0x150F8A30: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x150F8A34: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x150F8A38: addiu       $a0, $a0, 0x2B3
    ctx->r4 = ADD32(ctx->r4, 0X2B3);
    // 0x150F8A3C: lh          $t9, 0x10($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X10);
    // 0x150F8A40: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x150F8A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F8A48: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150F8A4C: lh          $t1, 0x12($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X12);
    // 0x150F8A50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F8A54: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F8A58: lh          $t0, 0x14($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X14);
    // 0x150F8A5C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150F8A60: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150F8A64: jal         0x10010F88
    // 0x150F8A68: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x150F8A68: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x150F8A6C: lbu         $t5, 0x8($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X8);
    // 0x150F8A70: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F8A74: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x150F8A78: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150F8A7C: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x150F8A80: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x150F8A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150F8A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F8A8C: sb          $t4, 0x6E($t8)
    MEM_B(0X6E, ctx->r24) = ctx->r12;
    // 0x150F8A90: lbu         $t9, 0x8($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X8);
    // 0x150F8A94: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x150F8A98: andi        $t0, $t1, 0xFF
    ctx->r8 = ctx->r9 & 0XFF;
    // 0x150F8A9C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x150F8AA0: sb          $t1, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r9;
    // 0x150F8AA4: addu        $t3, $fp, $t2
    ctx->r11 = ADD32(ctx->r30, ctx->r10);
    // 0x150F8AA8: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x150F8AAC: sb          $zero, 0x6E($t5)
    MEM_B(0X6E, ctx->r13) = 0;
    // 0x150F8AB0: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x150F8AB4: lbu         $a3, 0xC($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0XC);
    // 0x150F8AB8: jal         0x15164F0C
    // 0x150F8ABC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15164F0C(rdram, ctx);
        goto after_2;
    // 0x150F8ABC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x150F8AC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F8AC4: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150F8AC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F8ACC: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150F8AD0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150F8AD4: sb          $t7, 0x1F0($sp)
    MEM_B(0X1F0, ctx->r29) = ctx->r15;
    // 0x150F8AD8: sh          $t4, 0x1F2($sp)
    MEM_H(0X1F2, ctx->r29) = ctx->r12;
    // 0x150F8ADC: sb          $t8, 0x1F5($sp)
    MEM_B(0X1F5, ctx->r29) = ctx->r24;
    // 0x150F8AE0: sb          $t9, 0x1F4($sp)
    MEM_B(0X1F4, ctx->r29) = ctx->r25;
    // 0x150F8AE4: sb          $t1, 0x1F6($sp)
    MEM_B(0X1F6, ctx->r29) = ctx->r9;
    // 0x150F8AE8: lbu         $a3, 0x1($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X1);
    // 0x150F8AEC: lbu         $a2, 0xC($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XC);
    // 0x150F8AF0: addiu       $a0, $sp, 0x1F0
    ctx->r4 = ADD32(ctx->r29, 0X1F0);
    // 0x150F8AF4: jal         0x151D8868
    // 0x150F8AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_3;
    // 0x150F8AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x150F8AFC: jal         0x150ADA20
    // 0x150F8B00: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150F8B00: nop

    after_4:
    // 0x150F8B04: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150F8B08: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8B0C: mfhi        $t0
    ctx->r8 = hi;
    // 0x150F8B10: addiu       $t2, $t0, 0x46
    ctx->r10 = ADD32(ctx->r8, 0X46);
    // 0x150F8B14: sh          $t2, 0x6($fp)
    MEM_H(0X6, ctx->r30) = ctx->r10;
L_150F8B18:
    // 0x150F8B18: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150F8B1C: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x150F8B20: lh          $t3, 0x3C($fp)
    ctx->r11 = MEM_H(ctx->r30, 0X3C);
    // 0x150F8B24: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F8B28: multu       $t5, $s0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F8B2C: mflo        $t6
    ctx->r14 = lo;
    // 0x150F8B30: subu        $t7, $t3, $t6
    ctx->r15 = SUB32(ctx->r11, ctx->r14);
    // 0x150F8B34: sh          $t7, 0x3C($fp)
    MEM_H(0X3C, ctx->r30) = ctx->r15;
    // 0x150F8B38: lh          $t4, 0x3C($fp)
    ctx->r12 = MEM_H(ctx->r30, 0X3C);
    // 0x150F8B3C: bgez        $t4, L_150F8C10
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150F8B40: nop
    
            goto L_150F8C10;
    }
    // 0x150F8B40: nop

    // 0x150F8B44: jal         0x150ADA20
    // 0x150F8B48: sb          $t8, 0x1E8($sp)
    MEM_B(0X1E8, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150F8B48: sb          $t8, 0x1E8($sp)
    MEM_B(0X1E8, ctx->r29) = ctx->r24;
    after_5:
    // 0x150F8B4C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150F8B50: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8B54: mfhi        $t9
    ctx->r25 = hi;
    // 0x150F8B58: addiu       $t1, $t9, 0xA
    ctx->r9 = ADD32(ctx->r25, 0XA);
    // 0x150F8B5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F8B60: sh          $t1, 0x1EA($sp)
    MEM_H(0X1EA, ctx->r29) = ctx->r9;
    // 0x150F8B64: jal         0x150ADA20
    // 0x150F8B68: sb          $t0, 0x1ED($sp)
    MEM_B(0X1ED, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150F8B68: sb          $t0, 0x1ED($sp)
    MEM_B(0X1ED, ctx->r29) = ctx->r8;
    after_6:
    // 0x150F8B6C: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x150F8B70: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x150F8B74: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F8B78: sb          $t5, 0x1EC($sp)
    MEM_B(0X1EC, ctx->r29) = ctx->r13;
    // 0x150F8B7C: sb          $t3, 0x1EE($sp)
    MEM_B(0X1EE, ctx->r29) = ctx->r11;
    // 0x150F8B80: lbu         $a3, 0x1($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X1);
    // 0x150F8B84: lbu         $a2, 0xC($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XC);
    // 0x150F8B88: addiu       $a0, $sp, 0x1E8
    ctx->r4 = ADD32(ctx->r29, 0X1E8);
    // 0x150F8B8C: jal         0x151D8868
    // 0x150F8B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_7;
    // 0x150F8B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x150F8B94: jal         0x150ADA20
    // 0x150F8B98: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150F8B98: nop

    after_8:
    // 0x150F8B9C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150F8BA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F8BA4: lbu         $t7, 0x8($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X8);
    // 0x150F8BA8: andi        $a0, $v0, 0x3
    ctx->r4 = ctx->r2 & 0X3;
    // 0x150F8BAC: addiu       $t2, $zero, 0x1F4
    ctx->r10 = ADD32(0, 0X1F4);
    // 0x150F8BB0: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x150F8BB4: addu        $t8, $fp, $t4
    ctx->r24 = ADD32(ctx->r30, ctx->r12);
    // 0x150F8BB8: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x150F8BBC: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x150F8BC0: addiu       $a0, $a0, 0x6D6
    ctx->r4 = ADD32(ctx->r4, 0X6D6);
    // 0x150F8BC4: lh          $t9, 0x10($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X10);
    // 0x150F8BC8: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x150F8BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F8BD0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150F8BD4: lh          $t1, 0x12($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X12);
    // 0x150F8BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F8BDC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F8BE0: lh          $t0, 0x14($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X14);
    // 0x150F8BE4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150F8BE8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150F8BEC: jal         0x10010F88
    // 0x150F8BF0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_10010F88(rdram, ctx);
        goto after_9;
    // 0x150F8BF0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_9:
    // 0x150F8BF4: jal         0x150ADA20
    // 0x150F8BF8: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150F8BF8: nop

    after_10:
    // 0x150F8BFC: addiu       $at, $zero, 0x97
    ctx->r1 = ADD32(0, 0X97);
    // 0x150F8C00: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8C04: mfhi        $t3
    ctx->r11 = hi;
    // 0x150F8C08: addiu       $t6, $t3, 0x96
    ctx->r14 = ADD32(ctx->r11, 0X96);
    // 0x150F8C0C: sh          $t6, 0x3C($fp)
    MEM_H(0X3C, ctx->r30) = ctx->r14;
L_150F8C10:
    // 0x150F8C10: jal         0x150ADA68
    // 0x150F8C14: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150F8C14: nop

    after_11:
    // 0x150F8C18: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x150F8C1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8C20: lwc1        $f20, 0x1C70($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1C70);
    // 0x150F8C24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150F8C28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F8C2C: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F8C30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8C34: lwc1        $f18, 0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1C74);
    // 0x150F8C38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F8C3C: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x150F8C40: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150F8C44: addiu       $s0, $sp, 0x1D8
    ctx->r16 = ADD32(ctx->r29, 0X1D8);
    // 0x150F8C48: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F8C4C: lwc1        $f10, 0x38($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X38);
    // 0x150F8C50: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F8C54: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x150F8C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F8C5C: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x150F8C60: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150F8C64: swc1        $f18, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->f18.u32l;
    // 0x150F8C68: lwc1        $f6, 0x38($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X38);
    // 0x150F8C6C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150F8C70: nop

    // 0x150F8C74: bc1f        L_150F8D54
    if (!c1cs) {
        // 0x150F8C78: nop
    
            goto L_150F8D54;
    }
    // 0x150F8C78: nop

    // 0x150F8C7C: lbu         $t7, 0x5($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X5);
    // 0x150F8C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F8C84: addiu       $s1, $sp, 0x1E0
    ctx->r17 = ADD32(ctx->r29, 0X1E0);
    // 0x150F8C88: andi        $t4, $t7, 0x1
    ctx->r12 = ctx->r15 & 0X1;
    // 0x150F8C8C: beq         $t4, $zero, L_150F8C9C
    if (ctx->r12 == 0) {
        // 0x150F8C90: nop
    
            goto L_150F8C9C;
    }
    // 0x150F8C90: nop

    // 0x150F8C94: b           L_150F8C9C
    // 0x150F8C98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150F8C9C;
    // 0x150F8C98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150F8C9C:
    // 0x150F8C9C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_150F8CA0:
    // 0x150F8CA0: jal         0x150ADA20
    // 0x150F8CA4: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150F8CA4: nop

    after_12:
    // 0x150F8CA8: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x150F8CAC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8CB0: mfhi        $t8
    ctx->r24 = hi;
    // 0x150F8CB4: addiu       $t9, $t8, -0xDC
    ctx->r25 = ADD32(ctx->r24, -0XDC);
    // 0x150F8CB8: lw          $a1, 0x48($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X48);
    // 0x150F8CBC: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F8CC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150F8CC4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x150F8CC8: mflo        $a0
    ctx->r4 = lo;
    // 0x150F8CCC: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x150F8CD0: jal         0x15143874
    // 0x150F8CD4: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    func_15143874(rdram, ctx);
        goto after_13;
    // 0x150F8CD4: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    after_13:
    // 0x150F8CD8: jal         0x150ADA68
    // 0x150F8CDC: nop

    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150F8CDC: nop

    after_14:
    // 0x150F8CE0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150F8CE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F8CE8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F8CEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F8CF0: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F8CF4: lwc1        $f4, 0x1D8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1D8);
    // 0x150F8CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F8CFC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150F8D00: lwc1        $f10, 0x1E0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1E0);
    // 0x150F8D04: swc1        $f18, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f18.u32l;
    // 0x150F8D08: lwc1        $f6, 0x40($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X40);
    // 0x150F8D0C: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F8D10: swc1        $f16, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f16.u32l;
    // 0x150F8D14: lwc1        $f8, 0x44($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X44);
    // 0x150F8D18: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150F8D1C: swc1        $f18, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f18.u32l;
    // 0x150F8D20: lbu         $a2, 0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X1);
    // 0x150F8D24: jal         0x151C329C
    // 0x150F8D28: lbu         $a1, 0xC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XC);
    func_151C329C(rdram, ctx);
        goto after_15;
    // 0x150F8D28: lbu         $a1, 0xC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XC);
    after_15:
    // 0x150F8D2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F8D30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F8D34: lwc1        $f4, 0x38($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X38);
    // 0x150F8D38: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150F8D3C: swc1        $f6, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->f6.u32l;
    // 0x150F8D40: lwc1        $f16, 0x38($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X38);
    // 0x150F8D44: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x150F8D48: nop

    // 0x150F8D4C: bc1t        L_150F8CA0
    if (c1cs) {
        // 0x150F8D50: nop
    
            goto L_150F8CA0;
    }
    // 0x150F8D50: nop

L_150F8D54:
    // 0x150F8D54: jal         0x150ADA68
    // 0x150F8D58: nop

    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150F8D58: nop

    after_16:
    // 0x150F8D5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F8D60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F8D64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F8D68: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F8D6C: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150F8D70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8D74: lwc1        $f4, 0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1C78);
    // 0x150F8D78: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150F8D7C: lwc1        $f8, 0x34($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X34);
    // 0x150F8D80: addiu       $t3, $zero, 0x39E8
    ctx->r11 = ADD32(0, 0X39E8);
    // 0x150F8D84: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F8D88: addiu       $t6, $zero, 0x86
    ctx->r14 = ADD32(0, 0X86);
    // 0x150F8D8C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F8D90: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x150F8D94: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150F8D98: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150F8D9C: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x150F8DA0: add.s       $f16, $f20, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x150F8DA4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150F8DA8: addiu       $s6, $sp, 0x158
    ctx->r22 = ADD32(ctx->r29, 0X158);
    // 0x150F8DAC: addiu       $s5, $sp, 0x18C
    ctx->r21 = ADD32(ctx->r29, 0X18C);
    // 0x150F8DB0: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F8DB4: addiu       $s4, $zero, 0x25
    ctx->r20 = ADD32(0, 0X25);
    // 0x150F8DB8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F8DBC: swc1        $f4, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->f4.u32l;
    // 0x150F8DC0: lwc1        $f6, 0x34($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X34);
    // 0x150F8DC4: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x150F8DC8: nop

    // 0x150F8DCC: bc1f        L_150F9090
    if (!c1cs) {
        // 0x150F8DD0: nop
    
            goto L_150F9090;
    }
    // 0x150F8DD0: nop

    // 0x150F8DD4: lbu         $t2, 0x5($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X5);
    // 0x150F8DD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F8DDC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150F8DE0: andi        $t5, $t2, 0x1
    ctx->r13 = ctx->r10 & 0X1;
    // 0x150F8DE4: beq         $t5, $zero, L_150F8DF4
    if (ctx->r13 == 0) {
        // 0x150F8DE8: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150F8DF4;
    }
    // 0x150F8DE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8DEC: b           L_150F8DF8
    // 0x150F8DF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150F8DF8;
    // 0x150F8DF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150F8DF4:
    // 0x150F8DF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150F8DF8:
    // 0x150F8DF8: lwc1        $f28, 0x1C7C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X1C7C);
    // 0x150F8DFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8E00: lwc1        $f26, 0x1C80($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X1C80);
    // 0x150F8E04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8E08: lwc1        $f24, 0x1C84($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1C84);
    // 0x150F8E0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F8E10: lwc1        $f22, 0x1C88($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X1C88);
    // 0x150F8E14: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150F8E18: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150F8E1C: swc1        $f2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f2.u32l;
    // 0x150F8E20: swc1        $f2, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f2.u32l;
    // 0x150F8E24: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x150F8E28: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x150F8E2C: swc1        $f2, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f2.u32l;
    // 0x150F8E30: sw          $t3, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r11;
    // 0x150F8E34: sh          $t6, 0x1AE($sp)
    MEM_H(0X1AE, ctx->r29) = ctx->r14;
    // 0x150F8E38: sb          $zero, 0x1B0($sp)
    MEM_B(0X1B0, ctx->r29) = 0;
    // 0x150F8E3C: sw          $zero, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = 0;
    // 0x150F8E40: sb          $t7, 0x1B8($sp)
    MEM_B(0X1B8, ctx->r29) = ctx->r15;
    // 0x150F8E44: sb          $t4, 0x1B9($sp)
    MEM_B(0X1B9, ctx->r29) = ctx->r12;
    // 0x150F8E48: sb          $zero, 0x1BA($sp)
    MEM_B(0X1BA, ctx->r29) = 0;
    // 0x150F8E4C: sb          $zero, 0x1BB($sp)
    MEM_B(0X1BB, ctx->r29) = 0;
    // 0x150F8E50: sb          $zero, 0x1BC($sp)
    MEM_B(0X1BC, ctx->r29) = 0;
    // 0x150F8E54: sb          $zero, 0x1BD($sp)
    MEM_B(0X1BD, ctx->r29) = 0;
    // 0x150F8E58: sb          $zero, 0x1BE($sp)
    MEM_B(0X1BE, ctx->r29) = 0;
    // 0x150F8E5C: sb          $zero, 0x1BF($sp)
    MEM_B(0X1BF, ctx->r29) = 0;
    // 0x150F8E60: sb          $zero, 0x1C0($sp)
    MEM_B(0X1C0, ctx->r29) = 0;
    // 0x150F8E64: sb          $t8, 0x1C2($sp)
    MEM_B(0X1C2, ctx->r29) = ctx->r24;
    // 0x150F8E68: sw          $zero, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = 0;
    // 0x150F8E6C: sb          $zero, 0x1C8($sp)
    MEM_B(0X1C8, ctx->r29) = 0;
    // 0x150F8E70: sh          $t9, 0x1CA($sp)
    MEM_H(0X1CA, ctx->r29) = ctx->r25;
    // 0x150F8E74: sh          $t1, 0x1CC($sp)
    MEM_H(0X1CC, ctx->r29) = ctx->r9;
    // 0x150F8E78: sw          $zero, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = 0;
    // 0x150F8E7C: swc1        $f16, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f16.u32l;
    // 0x150F8E80: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
L_150F8E84:
    // 0x150F8E84: jal         0x150ADA20
    // 0x150F8E88: nop

    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x150F8E88: nop

    after_17:
    // 0x150F8E8C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150F8E90: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8E94: mfhi        $s2
    ctx->r18 = hi;
    // 0x150F8E98: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x150F8E9C: sll         $t0, $s2, 16
    ctx->r8 = S32(ctx->r18 << 16);
    // 0x150F8EA0: jal         0x150ADA20
    // 0x150F8EA4: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x150F8EA4: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    after_18:
    // 0x150F8EA8: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x150F8EAC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F8EB0: mfhi        $t5
    ctx->r13 = hi;
    // 0x150F8EB4: addiu       $t3, $t5, -0xDC
    ctx->r11 = ADD32(ctx->r13, -0XDC);
    // 0x150F8EB8: lw          $a1, 0x48($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X48);
    // 0x150F8EBC: multu       $t3, $s7
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F8EC0: addiu       $a2, $sp, 0x180
    ctx->r6 = ADD32(ctx->r29, 0X180);
    // 0x150F8EC4: addiu       $a3, $sp, 0x188
    ctx->r7 = ADD32(ctx->r29, 0X188);
    // 0x150F8EC8: mflo        $v1
    ctx->r3 = lo;
    // 0x150F8ECC: sll         $s0, $v1, 16
    ctx->r16 = S32(ctx->r3 << 16);
    // 0x150F8ED0: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x150F8ED4: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x150F8ED8: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150F8EDC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x150F8EE0: jal         0x15143874
    // 0x150F8EE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_15143874(rdram, ctx);
        goto after_19;
    // 0x150F8EE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_19:
    // 0x150F8EE8: jal         0x150ADA68
    // 0x150F8EEC: nop

    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x150F8EEC: nop

    after_20:
    // 0x150F8EF0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150F8EF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F8EF8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F8EFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F8F00: mul.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F8F04: lwc1        $f6, 0x180($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X180);
    // 0x150F8F08: addiu       $s3, $s0, -0x7
    ctx->r19 = ADD32(ctx->r16, -0X7);
    // 0x150F8F0C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F8F10: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x150F8F14: swc1        $f4, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f4.u32l;
    // 0x150F8F18: lwc1        $f16, 0x40($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X40);
    // 0x150F8F1C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150F8F20: swc1        $f18, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f18.u32l;
    // 0x150F8F24: lwc1        $f10, 0x44($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X44);
    // 0x150F8F28: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F8F2C: blez        $s2, L_150F9068
    if (SIGNED(ctx->r18) <= 0) {
        // 0x150F8F30: swc1        $f4, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->f4.u32l;
            goto L_150F9068;
    }
    // 0x150F8F30: swc1        $f4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f4.u32l;
L_150F8F34:
    // 0x150F8F34: jal         0x150ADA20
    // 0x150F8F38: nop

    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x150F8F38: nop

    after_21:
    // 0x150F8F3C: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x150F8F40: addiu       $t8, $t4, 0x23
    ctx->r24 = ADD32(ctx->r12, 0X23);
    // 0x150F8F44: jal         0x150ADA68
    // 0x150F8F48: sh          $t8, 0x1AC($sp)
    MEM_H(0X1AC, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_22;
    // 0x150F8F48: sh          $t8, 0x1AC($sp)
    MEM_H(0X1AC, ctx->r29) = ctx->r24;
    after_22:
    // 0x150F8F4C: mul.s       $f6, $f0, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150F8F50: add.s       $f2, $f6, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x150F8F54: swc1        $f2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f2.u32l;
    // 0x150F8F58: jal         0x150ADA68
    // 0x150F8F5C: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_23;
    // 0x150F8F5C: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    after_23:
    // 0x150F8F60: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150F8F64: jal         0x150ADA68
    // 0x150F8F68: swc1        $f16, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_24;
    // 0x150F8F68: swc1        $f16, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f16.u32l;
    after_24:
    // 0x150F8F6C: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150F8F70: jal         0x150ADA68
    // 0x150F8F74: swc1        $f18, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_25;
    // 0x150F8F74: swc1        $f18, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f18.u32l;
    after_25:
    // 0x150F8F78: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150F8F7C: jal         0x150ADA20
    // 0x150F8F80: swc1        $f8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_26;
    // 0x150F8F80: swc1        $f8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f8.u32l;
    after_26:
    // 0x150F8F84: jal         0x150ADA20
    // 0x150F8F88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_27;
    // 0x150F8F88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_27:
    // 0x150F8F8C: jal         0x150ADA68
    // 0x150F8F90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_28;
    // 0x150F8F90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_28:
    // 0x150F8F94: divu        $zero, $s0, $s4
    lo = S32(U32(ctx->r16) / U32(ctx->r20)); hi = S32(U32(ctx->r16) % U32(ctx->r20));
    // 0x150F8F98: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150F8F9C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150F8FA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F8FA4: andi        $t9, $s1, 0xF
    ctx->r25 = ctx->r17 & 0XF;
    // 0x150F8FA8: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    // 0x150F8FAC: mfhi        $a1
    ctx->r5 = hi;
    // 0x150F8FB0: addiu       $a1, $a1, -0x3F
    ctx->r5 = ADD32(ctx->r5, -0X3F);
    // 0x150F8FB4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150F8FB8: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x150F8FBC: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150F8FC0: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x150F8FC4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150F8FC8: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150F8FCC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x150F8FD0: bne         $s4, $zero, L_150F8FDC
    if (ctx->r20 != 0) {
        // 0x150F8FD4: nop
    
            goto L_150F8FDC;
    }
    // 0x150F8FD4: nop

    // 0x150F8FD8: break       7
    do_break(353341400);
L_150F8FDC:
    // 0x150F8FDC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x150F8FE0: jal         0x15143794
    // 0x150F8FE4: nop

    func_15143794(rdram, ctx);
        goto after_29;
    // 0x150F8FE4: nop

    after_29:
    // 0x150F8FE8: jal         0x150ADA68
    // 0x150F8FEC: nop

    func_150ADA68(rdram, ctx);
        goto after_30;
    // 0x150F8FEC: nop

    after_30:
    // 0x150F8FF0: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150F8FF4: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x150F8FF8: jal         0x150ADA68
    // 0x150F8FFC: swc1        $f18, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_31;
    // 0x150F8FFC: swc1        $f18, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f18.u32l;
    after_31:
    // 0x150F9000: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150F9004: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x150F9008: jal         0x150ADA68
    // 0x150F900C: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_32;
    // 0x150F900C: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
    after_32:
    // 0x150F9010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9014: lwc1        $f4, 0x1C8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1C8C);
    // 0x150F9018: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F901C: lwc1        $f16, 0x1C90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1C90);
    // 0x150F9020: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F9024: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F9028: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150F902C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150F9030: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150F9034: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150F9038: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150F903C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150F9040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150F9044: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F9048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F904C: jal         0x1513264C
    // 0x150F9050: swc1        $f18, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f18.u32l;
    func_1513264C(rdram, ctx);
        goto after_33;
    // 0x150F9050: swc1        $f18, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f18.u32l;
    after_33:
    // 0x150F9054: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150F9058: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x150F905C: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150F9060: bgtz        $s2, L_150F8F34
    if (SIGNED(ctx->r18) > 0) {
        // 0x150F9064: nop
    
            goto L_150F8F34;
    }
    // 0x150F9064: nop

L_150F9068:
    // 0x150F9068: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F906C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F9070: lwc1        $f8, 0x34($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X34);
    // 0x150F9074: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150F9078: swc1        $f10, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->f10.u32l;
    // 0x150F907C: lwc1        $f4, 0x34($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X34);
    // 0x150F9080: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150F9084: nop

    // 0x150F9088: bc1t        L_150F8E84
    if (c1cs) {
        // 0x150F908C: nop
    
            goto L_150F8E84;
    }
    // 0x150F908C: nop

L_150F9090:
    // 0x150F9090: jal         0x150ADA68
    // 0x150F9094: nop

    func_150ADA68(rdram, ctx);
        goto after_34;
    // 0x150F9094: nop

    after_34:
    // 0x150F9098: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F909C: lwc1        $f6, 0x1C94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1C94);
    // 0x150F90A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F90A4: lwc1        $f16, 0x1C98($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1C98);
    // 0x150F90A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F90AC: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F90B0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F90B4: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150F90B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F90BC: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x150F90C0: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150F90C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F90C8: lui         $t5, 0x9F
    ctx->r13 = S32(0X9F << 16);
    // 0x150F90CC: addiu       $t1, $zero, 0x86
    ctx->r9 = ADD32(0, 0X86);
    // 0x150F90D0: addiu       $t0, $zero, 0x4404
    ctx->r8 = ADD32(0, 0X4404);
    // 0x150F90D4: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150F90D8: lwc1        $f18, 0x30($fp)
    ctx->f18.u32l = MEM_W(ctx->r30, 0X30);
    // 0x150F90DC: ori         $t2, $t2, 0x5
    ctx->r10 = ctx->r10 | 0X5;
    // 0x150F90E0: ori         $t5, $t5, 0x600
    ctx->r13 = ctx->r13 | 0X600;
    // 0x150F90E4: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150F90E8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F90EC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F90F0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F90F4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F90F8: addiu       $s7, $sp, 0xE0
    ctx->r23 = ADD32(ctx->r29, 0XE0);
    // 0x150F90FC: addiu       $s6, $sp, 0x128
    ctx->r22 = ADD32(ctx->r29, 0X128);
    // 0x150F9100: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150F9104: addiu       $s5, $zero, -0xC1
    ctx->r21 = ADD32(0, -0XC1);
    // 0x150F9108: addiu       $s4, $zero, 0x9C
    ctx->r20 = ADD32(0, 0X9C);
    // 0x150F910C: swc1        $f10, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->f10.u32l;
    // 0x150F9110: lwc1        $f8, 0x30($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X30);
    // 0x150F9114: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x150F9118: nop

    // 0x150F911C: bc1fl       L_150F9460
    if (!c1cs) {
        // 0x150F9120: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_150F9460;
    }
    goto skip_0;
    // 0x150F9120: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    skip_0:
    // 0x150F9124: lbu         $t8, 0x5($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X5);
    // 0x150F9128: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150F912C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F9130: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x150F9134: beq         $t9, $zero, L_150F9144
    if (ctx->r25 == 0) {
        // 0x150F9138: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_150F9144;
    }
    // 0x150F9138: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F913C: b           L_150F9144
    // 0x150F9140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150F9144;
    // 0x150F9140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150F9144:
    // 0x150F9144: sb          $t1, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r9;
    // 0x150F9148: sw          $t2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r10;
    // 0x150F914C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F9150: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F9154: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150F9158: sh          $t0, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r8;
    // 0x150F915C: sw          $t5, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r13;
    // 0x150F9160: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x150F9164: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x150F9168: sb          $t3, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r11;
    // 0x150F916C: sb          $t6, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r14;
    // 0x150F9170: sb          $t7, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r15;
    // 0x150F9174: sb          $t4, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r12;
    // 0x150F9178: sb          $t8, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r24;
    // 0x150F917C: sb          $t9, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r25;
    // 0x150F9180: sb          $t1, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = ctx->r9;
    // 0x150F9184: addiu       $t2, $t2, 0x5480
    ctx->r10 = ADD32(ctx->r10, 0X5480);
    // 0x150F9188: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150F918C: addiu       $t0, $sp, 0x11C
    ctx->r8 = ADD32(ctx->r29, 0X11C);
    // 0x150F9190: lw          $t6, 0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X4);
    // 0x150F9194: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150F9198: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150F919C: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x150F91A0: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x150F91A4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150F91A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F91AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F91B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150F91B4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150F91B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F91BC: lwc1        $f26, 0x1C9C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X1C9C);
    // 0x150F91C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F91C4: lwc1        $f24, 0x1CA0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1CA0);
    // 0x150F91C8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150F91CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150F91D0: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x150F91D4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150F91D8: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x150F91DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F91E0: ori         $t9, $t9, 0xC207
    ctx->r25 = ctx->r25 | 0XC207;
    // 0x150F91E4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x150F91E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x150F91EC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150F91F0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150F91F4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150F91F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F91FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150F9200: sh          $t7, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r15;
    // 0x150F9204: sh          $t4, 0x100($sp)
    MEM_H(0X100, ctx->r29) = ctx->r12;
    // 0x150F9208: sh          $t8, 0x102($sp)
    MEM_H(0X102, ctx->r29) = ctx->r24;
    // 0x150F920C: sw          $t9, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r25;
    // 0x150F9210: sb          $t1, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r9;
    // 0x150F9214: sb          $t3, 0x141($sp)
    MEM_B(0X141, ctx->r29) = ctx->r11;
    // 0x150F9218: sb          $t5, 0x142($sp)
    MEM_B(0X142, ctx->r29) = ctx->r13;
    // 0x150F921C: sb          $t0, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r8;
    // 0x150F9220: sb          $t2, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r10;
    // 0x150F9224: sb          $zero, 0x145($sp)
    MEM_B(0X145, ctx->r29) = 0;
    // 0x150F9228: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x150F922C: sb          $t6, 0x146($sp)
    MEM_B(0X146, ctx->r29) = ctx->r14;
    // 0x150F9230: sh          $zero, 0x148($sp)
    MEM_H(0X148, ctx->r29) = 0;
    // 0x150F9234: swc1        $f18, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f18.u32l;
    // 0x150F9238: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x150F923C: swc1        $f16, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f16.u32l;
L_150F9240:
    // 0x150F9240: jal         0x150ADA20
    // 0x150F9244: nop

    func_150ADA20(rdram, ctx);
        goto after_35;
    // 0x150F9244: nop

    after_35:
    // 0x150F9248: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150F924C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F9250: mfhi        $s2
    ctx->r18 = hi;
    // 0x150F9254: addiu       $s2, $s2, 0x7
    ctx->r18 = ADD32(ctx->r18, 0X7);
    // 0x150F9258: jal         0x150ADA20
    // 0x150F925C: nop

    func_150ADA20(rdram, ctx);
        goto after_36;
    // 0x150F925C: nop

    after_36:
    // 0x150F9260: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x150F9264: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F9268: mfhi        $t7
    ctx->r15 = hi;
    // 0x150F926C: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x150F9270: addiu       $t4, $t7, -0xDC
    ctx->r12 = ADD32(ctx->r15, -0XDC);
    // 0x150F9274: lw          $a1, 0x48($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X48);
    // 0x150F9278: multu       $t4, $t8
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F927C: addiu       $a2, $sp, 0x110
    ctx->r6 = ADD32(ctx->r29, 0X110);
    // 0x150F9280: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x150F9284: mflo        $v1
    ctx->r3 = lo;
    // 0x150F9288: sll         $s0, $v1, 16
    ctx->r16 = S32(ctx->r3 << 16);
    // 0x150F928C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x150F9290: sra         $t9, $s0, 16
    ctx->r25 = S32(SIGNED(ctx->r16) >> 16);
    // 0x150F9294: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150F9298: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x150F929C: jal         0x15143874
    // 0x150F92A0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_15143874(rdram, ctx);
        goto after_37;
    // 0x150F92A0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_37:
    // 0x150F92A4: jal         0x150ADA68
    // 0x150F92A8: nop

    func_150ADA68(rdram, ctx);
        goto after_38;
    // 0x150F92A8: nop

    after_38:
    // 0x150F92AC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150F92B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F92B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F92B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F92BC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F92C0: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150F92C4: addiu       $s3, $s0, -0x4
    ctx->r19 = ADD32(ctx->r16, -0X4);
    // 0x150F92C8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150F92CC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150F92D0: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x150F92D4: lwc1        $f18, 0x40($fp)
    ctx->f18.u32l = MEM_W(ctx->r30, 0X40);
    // 0x150F92D8: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150F92DC: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x150F92E0: lwc1        $f4, 0x44($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X44);
    // 0x150F92E4: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150F92E8: blez        $s2, L_150F9434
    if (SIGNED(ctx->r18) <= 0) {
        // 0x150F92EC: swc1        $f8, 0x118($sp)
        MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
            goto L_150F9434;
    }
    // 0x150F92EC: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
L_150F92F0:
    // 0x150F92F0: jal         0x150ADA20
    // 0x150F92F4: nop

    func_150ADA20(rdram, ctx);
        goto after_39;
    // 0x150F92F4: nop

    after_39:
    // 0x150F92F8: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150F92FC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F9300: mfhi        $t3
    ctx->r11 = hi;
    // 0x150F9304: addiu       $t5, $t3, 0x1E
    ctx->r13 = ADD32(ctx->r11, 0X1E);
    // 0x150F9308: jal         0x150ADA20
    // 0x150F930C: sh          $t5, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_40;
    // 0x150F930C: sh          $t5, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r13;
    after_40:
    // 0x150F9310: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x150F9314: mfhi        $t0
    ctx->r8 = hi;
    // 0x150F9318: addiu       $t2, $t0, 0x64
    ctx->r10 = ADD32(ctx->r8, 0X64);
    // 0x150F931C: bne         $s4, $zero, L_150F9328
    if (ctx->r20 != 0) {
        // 0x150F9320: nop
    
            goto L_150F9328;
    }
    // 0x150F9320: nop

    // 0x150F9324: break       7
    do_break(353342244);
L_150F9328:
    // 0x150F9328: sb          $t2, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r10;
    // 0x150F932C: jal         0x150ADA68
    // 0x150F9330: nop

    func_150ADA68(rdram, ctx);
        goto after_41;
    // 0x150F9330: nop

    after_41:
    // 0x150F9334: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150F9338: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x150F933C: and         $t7, $t6, $s5
    ctx->r15 = ctx->r14 & ctx->r21;
    // 0x150F9340: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
    // 0x150F9344: add.s       $f2, $f16, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x150F9348: swc1        $f2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f2.u32l;
    // 0x150F934C: jal         0x150ADA20
    // 0x150F9350: swc1        $f2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_42;
    // 0x150F9350: swc1        $f2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f2.u32l;
    after_42:
    // 0x150F9354: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x150F9358: beq         $t4, $zero, L_150F9368
    if (ctx->r12 == 0) {
        // 0x150F935C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150F9368;
    }
    // 0x150F935C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150F9360: b           L_150F9368
    // 0x150F9364: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_150F9368;
    // 0x150F9364: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_150F9368:
    // 0x150F9368: jal         0x150ADA20
    // 0x150F936C: nop

    func_150ADA20(rdram, ctx);
        goto after_43;
    // 0x150F936C: nop

    after_43:
    // 0x150F9370: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x150F9374: beq         $t8, $zero, L_150F9384
    if (ctx->r24 == 0) {
        // 0x150F9378: lw          $t9, 0x138($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X138);
            goto L_150F9384;
    }
    // 0x150F9378: lw          $t9, 0x138($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X138);
    // 0x150F937C: b           L_150F9388
    // 0x150F9380: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_150F9388;
    // 0x150F9380: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_150F9384:
    // 0x150F9384: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_150F9388:
    // 0x150F9388: or          $t1, $s0, $s1
    ctx->r9 = ctx->r16 | ctx->r17;
    // 0x150F938C: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x150F9390: jal         0x150ADA20
    // 0x150F9394: sw          $t3, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_44;
    // 0x150F9394: sw          $t3, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r11;
    after_44:
    // 0x150F9398: jal         0x150ADA20
    // 0x150F939C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_45;
    // 0x150F939C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_45:
    // 0x150F93A0: jal         0x150ADA68
    // 0x150F93A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_46;
    // 0x150F93A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_46:
    // 0x150F93A8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150F93AC: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150F93B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150F93B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F93B8: mfhi        $t5
    ctx->r13 = hi;
    // 0x150F93BC: andi        $a1, $s0, 0x7
    ctx->r5 = ctx->r16 & 0X7;
    // 0x150F93C0: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F93C4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x150F93C8: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    // 0x150F93CC: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x150F93D0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150F93D4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150F93D8: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150F93DC: add.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x150F93E0: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x150F93E4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150F93E8: jal         0x15143794
    // 0x150F93EC: nop

    func_15143794(rdram, ctx);
        goto after_47;
    // 0x150F93EC: nop

    after_47:
    // 0x150F93F0: jal         0x150ADA68
    // 0x150F93F4: nop

    func_150ADA68(rdram, ctx);
        goto after_48;
    // 0x150F93F4: nop

    after_48:
    // 0x150F93F8: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150F93FC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F9400: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F9404: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150F9408: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150F940C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150F9410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150F9414: add.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x150F9418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F941C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F9420: jal         0x15130280
    // 0x150F9424: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    func_15130280(rdram, ctx);
        goto after_49;
    // 0x150F9424: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    after_49:
    // 0x150F9428: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150F942C: bgtz        $s2, L_150F92F0
    if (SIGNED(ctx->r18) > 0) {
        // 0x150F9430: nop
    
            goto L_150F92F0;
    }
    // 0x150F9430: nop

L_150F9434:
    // 0x150F9434: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F9438: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F943C: lwc1        $f16, 0x30($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X30);
    // 0x150F9440: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x150F9444: swc1        $f18, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->f18.u32l;
    // 0x150F9448: lwc1        $f6, 0x30($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X30);
    // 0x150F944C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150F9450: nop

    // 0x150F9454: bc1t        L_150F9240
    if (c1cs) {
        // 0x150F9458: nop
    
            goto L_150F9240;
    }
    // 0x150F9458: nop

    // 0x150F945C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_150F9460:
    // 0x150F9460: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150F9464: jal         0x150ADA68
    // 0x150F9468: nop

    func_150ADA68(rdram, ctx);
        goto after_50;
    // 0x150F9468: nop

    after_50:
    // 0x150F946C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9470: lwc1        $f10, 0x1CA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1CA4);
    // 0x150F9474: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9478: lwc1        $f4, 0x1CA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1CA8);
    // 0x150F947C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F9480: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F9484: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F9488: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150F948C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F9490: addiu       $s6, $zero, 0x79
    ctx->r22 = ADD32(0, 0X79);
    // 0x150F9494: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150F9498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F949C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F94A0: addiu       $s5, $sp, 0xD0
    ctx->r21 = ADD32(ctx->r29, 0XD0);
    // 0x150F94A4: addiu       $s4, $sp, 0xBC
    ctx->r20 = ADD32(ctx->r29, 0XBC);
    // 0x150F94A8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150F94AC: lwc1        $f8, 0x2C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x150F94B0: addiu       $s3, $sp, 0xC8
    ctx->r19 = ADD32(ctx->r29, 0XC8);
    // 0x150F94B4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150F94B8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F94BC: swc1        $f18, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->f18.u32l;
    // 0x150F94C0: lwc1        $f16, 0x2C($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x150F94C4: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x150F94C8: nop

    // 0x150F94CC: bc1fl       L_150F96DC
    if (!c1cs) {
        // 0x150F94D0: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_150F96DC;
    }
    goto skip_1;
    // 0x150F94D0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_1:
    // 0x150F94D4: lbu         $t9, 0x5($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X5);
    // 0x150F94D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F94DC: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x150F94E0: beq         $t1, $zero, L_150F94F0
    if (ctx->r9 == 0) {
        // 0x150F94E4: nop
    
            goto L_150F94F0;
    }
    // 0x150F94E4: nop

    // 0x150F94E8: b           L_150F94F0
    // 0x150F94EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150F94F0;
    // 0x150F94EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150F94F0:
    // 0x150F94F0: lwc1        $f30, 0x1CAC($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X1CAC);
    // 0x150F94F4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150F94F8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150F94FC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150F9500: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150F9504: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
L_150F9508:
    // 0x150F9508: jal         0x150ADA20
    // 0x150F950C: nop

    func_150ADA20(rdram, ctx);
        goto after_51;
    // 0x150F950C: nop

    after_51:
    // 0x150F9510: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x150F9514: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F9518: mfhi        $t3
    ctx->r11 = hi;
    // 0x150F951C: addiu       $t5, $t3, -0xDC
    ctx->r13 = ADD32(ctx->r11, -0XDC);
    // 0x150F9520: lw          $a1, 0x48($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X48);
    // 0x150F9524: multu       $t5, $s7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F9528: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x150F952C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x150F9530: mflo        $v1
    ctx->r3 = lo;
    // 0x150F9534: sll         $s2, $v1, 16
    ctx->r18 = S32(ctx->r3 << 16);
    // 0x150F9538: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x150F953C: sra         $t0, $s2, 16
    ctx->r8 = S32(SIGNED(ctx->r18) >> 16);
    // 0x150F9540: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150F9544: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x150F9548: jal         0x15143874
    // 0x150F954C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_15143874(rdram, ctx);
        goto after_52;
    // 0x150F954C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_52:
    // 0x150F9550: jal         0x150ADA68
    // 0x150F9554: nop

    func_150ADA68(rdram, ctx);
        goto after_53;
    // 0x150F9554: nop

    after_53:
    // 0x150F9558: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150F955C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9560: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F9564: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F9568: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F956C: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F9570: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F9574: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150F9578: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x150F957C: lwc1        $f16, 0x40($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X40);
    // 0x150F9580: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150F9584: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x150F9588: lwc1        $f10, 0x44($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X44);
    // 0x150F958C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F9590: jal         0x150ADA20
    // 0x150F9594: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_54;
    // 0x150F9594: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    after_54:
    // 0x150F9598: jal         0x150ADA20
    // 0x150F959C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_55;
    // 0x150F959C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_55:
    // 0x150F95A0: jal         0x150ADA68
    // 0x150F95A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_56;
    // 0x150F95A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_56:
    // 0x150F95A8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150F95AC: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150F95B0: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150F95B4: mfhi        $t6
    ctx->r14 = hi;
    // 0x150F95B8: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x150F95BC: andi        $a1, $s0, 0x7
    ctx->r5 = ctx->r16 & 0X7;
    // 0x150F95C0: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x150F95C4: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x150F95C8: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x150F95CC: add.s       $f16, $f6, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x150F95D0: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150F95D4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150F95D8: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150F95DC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150F95E0: jal         0x15143794
    // 0x150F95E4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_15143794(rdram, ctx);
        goto after_57;
    // 0x150F95E4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_57:
    // 0x150F95E8: jal         0x150ADA68
    // 0x150F95EC: nop

    func_150ADA68(rdram, ctx);
        goto after_58;
    // 0x150F95EC: nop

    after_58:
    // 0x150F95F0: jal         0x150ADA68
    // 0x150F95F4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_59;
    // 0x150F95F4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_59:
    // 0x150F95F8: jal         0x150ADA20
    // 0x150F95FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_60;
    // 0x150F95FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_60:
    // 0x150F9600: jal         0x150ADA20
    // 0x150F9604: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_61;
    // 0x150F9604: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_61:
    // 0x150F9608: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F960C: lwc1        $f10, 0x1CB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1CB0);
    // 0x150F9610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F9614: lwc1        $f18, 0x1CB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1CB4);
    // 0x150F9618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F961C: lwc1        $f16, 0x1CB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1CB8);
    // 0x150F9620: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150F9624: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150F9628: mfhi        $t1
    ctx->r9 = hi;
    // 0x150F962C: mul.s       $f4, $f22, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x150F9630: addiu       $t3, $t1, 0x23
    ctx->r11 = ADD32(ctx->r9, 0X23);
    // 0x150F9634: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150F9638: mul.s       $f6, $f20, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x150F963C: add.s       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x150F9640: mfhi        $t5
    ctx->r13 = hi;
    // 0x150F9644: addiu       $t0, $t5, 0x64
    ctx->r8 = ADD32(ctx->r13, 0X64);
    // 0x150F9648: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x150F964C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150F9650: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x150F9654: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150F9658: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F965C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F9660: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x150F9664: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150F9668: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150F966C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150F9670: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150F9674: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150F9678: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150F967C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150F9680: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150F9684: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x150F9688: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    // 0x150F968C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150F9690: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150F9694: bne         $s6, $zero, L_150F96A0
    if (ctx->r22 != 0) {
        // 0x150F9698: nop
    
            goto L_150F96A0;
    }
    // 0x150F9698: nop

    // 0x150F969C: break       7
    do_break(353343132);
L_150F96A0:
    // 0x150F96A0: jal         0x151DB5D0
    // 0x150F96A4: nop

    func_151DB5D0(rdram, ctx);
        goto after_62;
    // 0x150F96A4: nop

    after_62:
    // 0x150F96A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F96AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F96B0: lwc1        $f8, 0x2C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x150F96B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F96B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F96BC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150F96C0: swc1        $f18, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->f18.u32l;
    // 0x150F96C4: lwc1        $f16, 0x2C($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x150F96C8: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x150F96CC: nop

    // 0x150F96D0: bc1t        L_150F9508
    if (c1cs) {
        // 0x150F96D4: nop
    
            goto L_150F9508;
    }
    // 0x150F96D4: nop

L_150F96D8:
    // 0x150F96D8: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_150F96DC:
    // 0x150F96DC: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x150F96E0: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x150F96E4: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x150F96E8: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x150F96EC: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x150F96F0: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x150F96F4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x150F96F8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x150F96FC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x150F9700: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x150F9704: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x150F9708: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x150F970C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x150F9710: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x150F9714: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x150F9718: jr          $ra
    // 0x150F971C: addiu       $sp, $sp, 0x208
    ctx->r29 = ADD32(ctx->r29, 0X208);
    return;
    return;
    // 0x150F971C: addiu       $sp, $sp, 0x208
    ctx->r29 = ADD32(ctx->r29, 0X208);
;}
RECOMP_FUNC void func_1509D08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509D08C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509D090: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509D094: lw          $v0, 0x2FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FB0);
    // 0x1509D098: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x1509D09C: bne         $v0, $zero, L_1509D0C4
    if (ctx->r2 != 0) {
        // 0x1509D0A0: addu        $v1, $v0, $t7
        ctx->r3 = ADD32(ctx->r2, ctx->r15);
            goto L_1509D0C4;
    }
    // 0x1509D0A0: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x1509D0A4: beq         $a2, $zero, L_1509D0B0
    if (ctx->r6 == 0) {
        // 0x1509D0A8: addiu       $t6, $zero, 0xBF
        ctx->r14 = ADD32(0, 0XBF);
            goto L_1509D0B0;
    }
    // 0x1509D0A8: addiu       $t6, $zero, 0xBF
    ctx->r14 = ADD32(0, 0XBF);
    // 0x1509D0AC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
L_1509D0B0:
    // 0x1509D0B0: beq         $a3, $zero, L_1509D0BC
    if (ctx->r7 == 0) {
        // 0x1509D0B4: nop
    
            goto L_1509D0BC;
    }
    // 0x1509D0B4: nop

    // 0x1509D0B8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_1509D0BC:
    // 0x1509D0BC: jr          $ra
    // 0x1509D0C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1509D0C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509D0C4:
    // 0x1509D0C4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x1509D0C8: bne         $a0, $zero, L_1509D0F0
    if (ctx->r4 != 0) {
        // 0x1509D0CC: nop
    
            goto L_1509D0F0;
    }
    // 0x1509D0CC: nop

    // 0x1509D0D0: beq         $a2, $zero, L_1509D0DC
    if (ctx->r6 == 0) {
        // 0x1509D0D4: addiu       $t8, $zero, 0xBF
        ctx->r24 = ADD32(0, 0XBF);
            goto L_1509D0DC;
    }
    // 0x1509D0D4: addiu       $t8, $zero, 0xBF
    ctx->r24 = ADD32(0, 0XBF);
    // 0x1509D0D8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_1509D0DC:
    // 0x1509D0DC: beq         $a3, $zero, L_1509D0E8
    if (ctx->r7 == 0) {
        // 0x1509D0E0: nop
    
            goto L_1509D0E8;
    }
    // 0x1509D0E0: nop

    // 0x1509D0E4: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_1509D0E8:
    // 0x1509D0E8: jr          $ra
    // 0x1509D0EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1509D0EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509D0F0:
    // 0x1509D0F0: beq         $a2, $zero, L_1509D108
    if (ctx->r6 == 0) {
        // 0x1509D0F4: nop
    
            goto L_1509D108;
    }
    // 0x1509D0F4: nop

    // 0x1509D0F8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x1509D0FC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x1509D100: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x1509D104: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
L_1509D108:
    // 0x1509D108: beq         $a3, $zero, L_1509D120
    if (ctx->r7 == 0) {
        // 0x1509D10C: lui         $a2, 0x800D
        ctx->r6 = S32(0X800D << 16);
            goto L_1509D120;
    }
    // 0x1509D10C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1509D110: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x1509D114: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x1509D118: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x1509D11C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
L_1509D120:
    // 0x1509D120: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x1509D124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509D128: beql        $v1, $zero, L_1509D178
    if (ctx->r3 == 0) {
        // 0x1509D12C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1509D178;
    }
    goto skip_0;
    // 0x1509D12C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1509D130: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x1509D134: lw          $a2, 0x2E4C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2E4C);
L_1509D138:
    // 0x1509D138: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x1509D13C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1509D140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1509D144: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x1509D148: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x1509D14C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x1509D150: andi        $t3, $a0, 0x7
    ctx->r11 = ctx->r4 & 0X7;
    // 0x1509D154: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x1509D158: and         $t9, $t5, $t8
    ctx->r25 = ctx->r13 & ctx->r24;
    // 0x1509D15C: bne         $t9, $zero, L_1509D16C
    if (ctx->r25 != 0) {
        // 0x1509D160: sltu        $at, $v0, $v1
        ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_1509D16C;
    }
    // 0x1509D160: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x1509D164: jr          $ra
    // 0x1509D168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1509D168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509D16C:
    // 0x1509D16C: bne         $at, $zero, L_1509D138
    if (ctx->r1 != 0) {
        // 0x1509D170: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_1509D138;
    }
    // 0x1509D170: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x1509D174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509D178:
    // 0x1509D178: jr          $ra
    // 0x1509D17C: nop

    return;
    return;
    // 0x1509D17C: nop

;}
RECOMP_FUNC void func_150368C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150368C4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150368C8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x150368CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150368D0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150368D4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x150368D8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x150368DC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150368E0: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x150368E4: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x150368E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150368EC: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x150368F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150368F4: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x150368F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150368FC: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x15036900: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15036904: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15036908: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503690C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x15036910: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x15036914: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15036918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503691C: lbu         $v0, 0x75($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X75);
    // 0x15036920: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15036924: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15036928: beq         $v0, $at, L_15036940
    if (ctx->r2 == ctx->r1) {
        // 0x1503692C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_15036940;
    }
    // 0x1503692C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15036930: beq         $v0, $at, L_15036940
    if (ctx->r2 == ctx->r1) {
        // 0x15036934: nop
    
            goto L_15036940;
    }
    // 0x15036934: nop

    // 0x15036938: b           L_15036C50
    // 0x1503693C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_15036C50;
    // 0x1503693C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_15036940:
    // 0x15036940: jal         0x1503195C
    // 0x15036944: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x15036944: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    after_0:
    // 0x15036948: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x1503694C: bne         $v0, $zero, L_1503695C
    if (ctx->r2 != 0) {
        // 0x15036950: sw          $v0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r2;
            goto L_1503695C;
    }
    // 0x15036950: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x15036954: b           L_15036C50
    // 0x15036958: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_15036C50;
    // 0x15036958: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1503695C:
    // 0x1503695C: blez        $a3, L_1503696C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x15036960: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1503696C;
    }
    // 0x15036960: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15036964: b           L_15036C50
    // 0x15036968: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_15036C50;
    // 0x15036968: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1503696C:
    // 0x1503696C: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x15036970: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15036974: addiu       $t4, $t4, 0x3FC0
    ctx->r12 = ADD32(ctx->r12, 0X3FC0);
    // 0x15036978: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x1503697C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x15036980: lw          $v1, 0x28($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X28);
    // 0x15036984: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x15036988: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x1503698C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15036990: lbu         $t5, 0x30C($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X30C);
    // 0x15036994: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15036998: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x1503699C: sb          $t5, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r13;
    // 0x150369A0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x150369A4: lbu         $t7, 0x30D($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X30D);
    // 0x150369A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x150369AC: addiu       $v1, $v1, 0x300
    ctx->r3 = ADD32(ctx->r3, 0X300);
    // 0x150369B0: sb          $t7, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r15;
    // 0x150369B4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x150369B8: lbu         $t9, 0xE($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XE);
    // 0x150369BC: sb          $t9, 0xE($t1)
    MEM_B(0XE, ctx->r9) = ctx->r25;
    // 0x150369C0: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x150369C4: lbu         $t2, 0xC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC);
    // 0x150369C8: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x150369CC: sb          $t2, 0xC($t4)
    MEM_B(0XC, ctx->r12) = ctx->r10;
    // 0x150369D0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x150369D4: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    // 0x150369D8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x150369DC: sb          $t5, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r13;
    // 0x150369E0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x150369E4: lbu         $t8, 0xE($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XE);
    // 0x150369E8: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x150369EC: sb          $t8, 0xE($t1)
    MEM_B(0XE, ctx->r9) = ctx->r24;
    // 0x150369F0: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x150369F4: lbu         $t3, 0xC($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XC);
    // 0x150369F8: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x150369FC: sb          $t3, 0x1C($t4)
    MEM_B(0X1C, ctx->r12) = ctx->r11;
    // 0x15036A00: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x15036A04: lbu         $t6, 0xD($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD);
    // 0x15036A08: addu        $t7, $t5, $v0
    ctx->r15 = ADD32(ctx->r13, ctx->r2);
    // 0x15036A0C: sb          $t6, 0x1D($t7)
    MEM_B(0X1D, ctx->r15) = ctx->r14;
    // 0x15036A10: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15036A14: lbu         $t9, 0xE($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XE);
    // 0x15036A18: addu        $t1, $t8, $v0
    ctx->r9 = ADD32(ctx->r24, ctx->r2);
    // 0x15036A1C: sb          $t9, 0x1E($t1)
    MEM_B(0X1E, ctx->r9) = ctx->r25;
    // 0x15036A20: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x15036A24: lbu         $t2, 0xC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC);
    // 0x15036A28: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15036A2C: sb          $t2, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = ctx->r10;
    // 0x15036A30: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15036A34: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    // 0x15036A38: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15036A3C: sb          $t5, 0x2D($t7)
    MEM_B(0X2D, ctx->r15) = ctx->r13;
    // 0x15036A40: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15036A44: lbu         $t8, 0xE($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XE);
    // 0x15036A48: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x15036A4C: sb          $t8, 0x2E($t1)
    MEM_B(0X2E, ctx->r9) = ctx->r24;
    // 0x15036A50: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x15036A54: lbu         $t3, 0xC($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XC);
    // 0x15036A58: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x15036A5C: sb          $t3, 0x3C($t4)
    MEM_B(0X3C, ctx->r12) = ctx->r11;
    // 0x15036A60: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x15036A64: lbu         $t6, 0xD($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD);
    // 0x15036A68: addu        $t7, $t5, $v0
    ctx->r15 = ADD32(ctx->r13, ctx->r2);
    // 0x15036A6C: sb          $t6, 0x3D($t7)
    MEM_B(0X3D, ctx->r15) = ctx->r14;
    // 0x15036A70: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15036A74: lbu         $t9, 0xE($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XE);
    // 0x15036A78: addu        $t1, $t8, $v0
    ctx->r9 = ADD32(ctx->r24, ctx->r2);
    // 0x15036A7C: sb          $t9, 0x3E($t1)
    MEM_B(0X3E, ctx->r9) = ctx->r25;
    // 0x15036A80: lw          $v0, 0x1D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D4);
    // 0x15036A84: bne         $v0, $zero, L_15036A94
    if (ctx->r2 != 0) {
        // 0x15036A88: addiu       $a1, $v0, 0x240
        ctx->r5 = ADD32(ctx->r2, 0X240);
            goto L_15036A94;
    }
    // 0x15036A88: addiu       $a1, $v0, 0x240
    ctx->r5 = ADD32(ctx->r2, 0X240);
    // 0x15036A8C: b           L_15036C50
    // 0x15036A90: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_15036C50;
    // 0x15036A90: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_15036A94:
    // 0x15036A94: addiu       $a2, $v0, 0x100
    ctx->r6 = ADD32(ctx->r2, 0X100);
    // 0x15036A98: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15036A9C: jal         0x15036570
    // 0x15036AA0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_15036570(rdram, ctx);
        goto after_1;
    // 0x15036AA0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_1:
    // 0x15036AA4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15036AA8: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x15036AAC: addiu       $t3, $t3, 0x4350
    ctx->r11 = ADD32(ctx->r11, 0X4350);
    // 0x15036AB0: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x15036AB4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x15036AB8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15036ABC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15036AC0: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x15036AC4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15036AC8: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x15036ACC: lw          $t7, 0x314($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X314);
    // 0x15036AD0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15036AD4: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x15036AD8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x15036ADC: lw          $a1, 0x304($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X304);
    // 0x15036AE0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x15036AE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15036AE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15036AEC: lbu         $a2, 0x301($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X301);
    // 0x15036AF0: jal         0x1515E544
    // 0x15036AF4: lbu         $a3, 0x302($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X302);
    func_1515E544(rdram, ctx);
        goto after_2;
    // 0x15036AF4: lbu         $a3, 0x302($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X302);
    after_2:
    // 0x15036AF8: lbu         $v1, 0x66($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X66);
    // 0x15036AFC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15036B00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15036B04: andi        $t2, $v1, 0xC
    ctx->r10 = ctx->r3 & 0XC;
    // 0x15036B08: bne         $t2, $at, L_15036B2C
    if (ctx->r10 != ctx->r1) {
        // 0x15036B0C: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_15036B2C;
    }
    // 0x15036B0C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x15036B10: lui         $t3, 0xD9FD
    ctx->r11 = S32(0XD9FD << 16);
    // 0x15036B14: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x15036B18: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15036B1C: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x15036B20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15036B24: b           L_15036BA0
    // 0x15036B28: nop

        goto L_15036BA0;
    // 0x15036B28: nop

L_15036B2C:
    // 0x15036B2C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15036B30: beq         $v1, $at, L_15036B60
    if (ctx->r3 == ctx->r1) {
        // 0x15036B34: lw          $t4, 0x78($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X78);
            goto L_15036B60;
    }
    // 0x15036B34: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x15036B38: lbu         $t5, 0x4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4);
    // 0x15036B3C: lui         $t8, 0xD9FD
    ctx->r24 = S32(0XD9FD << 16);
    // 0x15036B40: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x15036B44: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x15036B48: bne         $t6, $zero, L_15036B60
    if (ctx->r14 != 0) {
        // 0x15036B4C: addiu       $s1, $v0, 0x8
        ctx->r17 = ADD32(ctx->r2, 0X8);
            goto L_15036B60;
    }
    // 0x15036B4C: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x15036B50: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15036B54: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15036B58: b           L_15036BA0
    // 0x15036B5C: nop

        goto L_15036BA0;
    // 0x15036B5C: nop

L_15036B60:
    // 0x15036B60: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15036B64: lw          $t7, -0x3284($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3284);
    // 0x15036B68: lui         $t2, 0xD9FD
    ctx->r10 = S32(0XD9FD << 16);
    // 0x15036B6C: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x15036B70: beq         $t7, $zero, L_15036B98
    if (ctx->r15 == 0) {
        // 0x15036B74: addiu       $s1, $v0, 0x8
        ctx->r17 = ADD32(ctx->r2, 0X8);
            goto L_15036B98;
    }
    // 0x15036B74: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x15036B78: lui         $t9, 0xD9FF
    ctx->r25 = S32(0XD9FF << 16);
    // 0x15036B7C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x15036B80: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x15036B84: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x15036B88: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15036B8C: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x15036B90: b           L_15036BA0
    // 0x15036B94: nop

        goto L_15036BA0;
    // 0x15036B94: nop

L_15036B98:
    // 0x15036B98: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x15036B9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_15036BA0:
    // 0x15036BA0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15036BA4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15036BA8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x15036BAC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15036BB0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15036BB4: addiu       $a1, $a1, 0x3BC
    ctx->r5 = ADD32(ctx->r5, 0X3BC);
    // 0x15036BB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15036BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15036BC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15036BC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15036BC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15036BCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15036BD0: jal         0x15094F70
    // 0x15036BD4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_15094F70(rdram, ctx);
        goto after_3;
    // 0x15036BD4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_3:
    // 0x15036BD8: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x15036BDC: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x15036BE0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15036BE4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15036BE8: addiu       $t5, $t5, -0x6B90
    ctx->r13 = ADD32(ctx->r13, -0X6B90);
    // 0x15036BEC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15036BF0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x15036BF4: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x15036BF8: ori         $t6, $t6, 0x1002
    ctx->r14 = ctx->r14 | 0X1002;
    // 0x15036BFC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x15036C00: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15036C04: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x15036C08: ori         $t9, $t9, 0x400A
    ctx->r25 = ctx->r25 | 0X400A;
    // 0x15036C0C: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x15036C10: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x15036C14: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15036C18: lui         $t3, 0x500
    ctx->r11 = S32(0X500 << 16);
    // 0x15036C1C: ori         $t3, $t3, 0x204
    ctx->r11 = ctx->r11 | 0X204;
    // 0x15036C20: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x15036C24: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    // 0x15036C28: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x15036C2C: lui         $t4, 0x500
    ctx->r12 = S32(0X500 << 16);
    // 0x15036C30: ori         $t4, $t4, 0x608
    ctx->r12 = ctx->r12 | 0X608;
    // 0x15036C34: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x15036C38: sw          $t2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r10;
    // 0x15036C3C: sw          $t3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r11;
    // 0x15036C40: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x15036C44: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x15036C48: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x15036C4C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_15036C50:
    // 0x15036C50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15036C54: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15036C58: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15036C5C: jr          $ra
    // 0x15036C60: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15036C60: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151CCF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CCF08: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x151CCF0C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151CCF10: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x151CCF14: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x151CCF18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151CCF1C: sll         $t7, $a2, 24
    ctx->r15 = S32(ctx->r6 << 24);
    // 0x151CCF20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151CCF24: sra         $a2, $t7, 24
    ctx->r6 = S32(SIGNED(ctx->r15) >> 24);
    // 0x151CCF28: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151CCF2C: andi        $s4, $a3, 0xFF
    ctx->r20 = ctx->r7 & 0XFF;
    // 0x151CCF30: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151CCF34: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151CCF38: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151CCF3C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151CCF40: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151CCF44: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151CCF48: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151CCF4C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x151CCF50: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x151CCF54: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x151CCF58: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x151CCF5C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151CCF60: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x151CCF64: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x151CCF68: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x151CCF6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CCF70: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x151CCF74: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x151CCF78: sltiu       $t9, $t9, 0x1
    ctx->r25 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x151CCF7C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x151CCF80: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x151CCF84: lwc1        $f4, -0x5274($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5274);
    // 0x151CCF88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CCF8C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x151CCF90: lwc1        $f6, -0x524C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X524C);
    // 0x151CCF94: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x151CCF98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CCF9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151CCFA0: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    // 0x151CCFA4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151CCFA8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x151CCFAC: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x151CCFB0: bne         $a2, $at, L_151CCFC0
    if (ctx->r6 != ctx->r1) {
        // 0x151CCFB4: swc1        $f8, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
            goto L_151CCFC0;
    }
    // 0x151CCFB4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151CCFB8: b           L_151CCFC4
    // 0x151CCFBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151CCFC4;
    // 0x151CCFBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CCFC0:
    // 0x151CCFC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CCFC4:
    // 0x151CCFC4: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x151CCFC8: sb          $v0, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r2;
    // 0x151CCFCC: sb          $a2, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r6;
    // 0x151CCFD0: beq         $a1, $zero, L_151CCFE0
    if (ctx->r5 == 0) {
        // 0x151CCFD4: sh          $t1, 0xF2($sp)
        MEM_H(0XF2, ctx->r29) = ctx->r9;
            goto L_151CCFE0;
    }
    // 0x151CCFD4: sh          $t1, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r9;
    // 0x151CCFD8: b           L_151CCFE4
    // 0x151CCFDC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_151CCFE4;
    // 0x151CCFDC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_151CCFE0:
    // 0x151CCFE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CCFE4:
    // 0x151CCFE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CCFE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151CCFEC: lui         $at, 0x420F
    ctx->r1 = S32(0X420F << 16);
    // 0x151CCFF0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151CCFF4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CCFF8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151CCFFC: ori         $t3, $v0, 0x30
    ctx->r11 = ctx->r2 | 0X30;
    // 0x151CD000: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151CD004: sb          $t6, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = ctx->r14;
    // 0x151CD008: sb          $t7, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r15;
    // 0x151CD00C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CD010: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151CD014: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151CD018: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CD01C: sh          $t3, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r11;
    // 0x151CD020: sh          $t4, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r12;
    // 0x151CD024: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CD028: sb          $t8, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r24;
    // 0x151CD02C: sb          $t9, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r25;
    // 0x151CD030: sb          $t0, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r8;
    // 0x151CD034: sb          $t1, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r9;
    // 0x151CD038: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x151CD03C: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x151CD040: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151CD044: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CD048: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151CD04C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151CD050: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CD054: ori         $t6, $t6, 0x4
    ctx->r14 = ctx->r14 | 0X4;
    // 0x151CD058: ori         $t7, $t7, 0x601
    ctx->r15 = ctx->r15 | 0X601;
    // 0x151CD05C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151CD060: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x151CD064: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x151CD068: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x151CD06C: sh          $t5, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r13;
    // 0x151CD070: sb          $t2, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r10;
    // 0x151CD074: sb          $t3, 0x101($sp)
    MEM_B(0X101, ctx->r29) = ctx->r11;
    // 0x151CD078: sb          $t4, 0x102($sp)
    MEM_B(0X102, ctx->r29) = ctx->r12;
    // 0x151CD07C: sb          $t5, 0x103($sp)
    MEM_B(0X103, ctx->r29) = ctx->r13;
    // 0x151CD080: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x151CD084: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x151CD088: sw          $t7, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r15;
    // 0x151CD08C: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x151CD090: sw          $t9, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r25;
    // 0x151CD094: sw          $t0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r8;
    // 0x151CD098: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x151CD09C: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x151CD0A0: sb          $zero, 0x121($sp)
    MEM_B(0X121, ctx->r29) = 0;
    // 0x151CD0A4: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x151CD0A8: lbu         $t2, 0x23D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X23D);
    // 0x151CD0AC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151CD0B0: lui         $at, 0x42B8
    ctx->r1 = S32(0X42B8 << 16);
    // 0x151CD0B4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151CD0B8: lui         $at, 0x430F
    ctx->r1 = S32(0X430F << 16);
    // 0x151CD0BC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151CD0C0: lui         $at, 0x428F
    ctx->r1 = S32(0X428F << 16);
    // 0x151CD0C4: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x151CD0C8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151CD0CC: swc1        $f0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f0.u32l;
    // 0x151CD0D0: swc1        $f0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f0.u32l;
    // 0x151CD0D4: addiu       $s6, $s6, -0x3D8
    ctx->r22 = ADD32(ctx->r22, -0X3D8);
    // 0x151CD0D8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x151CD0DC: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x151CD0E0: addiu       $s2, $sp, 0xE0
    ctx->r18 = ADD32(ctx->r29, 0XE0);
    // 0x151CD0E4: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
    // 0x151CD0E8: swc1        $f2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f2.u32l;
    // 0x151CD0EC: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
    // 0x151CD0F0: swc1        $f24, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f24.u32l;
    // 0x151CD0F4: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x151CD0F8: sb          $t2, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r10;
L_151CD0FC:
    // 0x151CD0FC: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x151CD100: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151CD104: beq         $s5, $zero, L_151CD114
    if (ctx->r21 == 0) {
        // 0x151CD108: sw          $at, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r1;
            goto L_151CD114;
    }
    // 0x151CD108: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x151CD10C: b           L_151CD118
    // 0x151CD110: swc1        $f26, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f26.u32l;
        goto L_151CD118;
    // 0x151CD110: swc1        $f26, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f26.u32l;
L_151CD114:
    // 0x151CD114: swc1        $f28, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f28.u32l;
L_151CD118:
    // 0x151CD118: beq         $s5, $zero, L_151CD128
    if (ctx->r21 == 0) {
        // 0x151CD11C: lhu         $t6, 0xF4($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0XF4);
            goto L_151CD128;
    }
    // 0x151CD11C: lhu         $t6, 0xF4($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XF4);
    // 0x151CD120: b           L_151CD12C
    // 0x151CD124: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CD12C;
    // 0x151CD124: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CD128:
    // 0x151CD128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CD12C:
    // 0x151CD12C: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x151CD130: beq         $s5, $zero, L_151CD144
    if (ctx->r21 == 0) {
        // 0x151CD134: sh          $t7, 0xF4($sp)
        MEM_H(0XF4, ctx->r29) = ctx->r15;
            goto L_151CD144;
    }
    // 0x151CD134: sh          $t7, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r15;
    // 0x151CD138: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151CD13C: b           L_151CD14C
    // 0x151CD140: sb          $t8, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r24;
        goto L_151CD14C;
    // 0x151CD140: sb          $t8, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r24;
L_151CD144:
    // 0x151CD144: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151CD148: sb          $t9, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r25;
L_151CD14C:
    // 0x151CD14C: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x151CD150: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151CD154: bgez        $s0, L_151CD168
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151CD158: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_151CD168;
    }
    // 0x151CD158: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151CD15C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CD160: nop

    // 0x151CD164: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_151CD168:
    // 0x151CD168: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151CD16C: addu        $t0, $s1, $s0
    ctx->r8 = ADD32(ctx->r17, ctx->r16);
    // 0x151CD170: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x151CD174: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151CD178: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151CD17C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x151CD180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CD184: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x151CD188: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CD18C: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x151CD190: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x151CD194: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x151CD198: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151CD19C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x151CD1A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151CD1A4: jal         0x1515548C
    // 0x151CD1A8: sb          $t1, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r9;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CD1A8: sb          $t1, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r9;
    after_0:
    // 0x151CD1AC: beq         $v0, $zero, L_151CD1C0
    if (ctx->r2 == 0) {
        // 0x151CD1B0: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CD1C0;
    }
    // 0x151CD1B0: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CD1B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151CD1B8: jal         0x10022EC0
    // 0x151CD1BC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CD1BC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CD1C0:
    // 0x151CD1C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151CD1C4: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x151CD1C8: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x151CD1CC: bne         $at, $zero, L_151CD14C
    if (ctx->r1 != 0) {
        // 0x151CD1D0: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_151CD14C;
    }
    // 0x151CD1D0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x151CD1D4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x151CD1D8: andi        $t5, $s5, 0xFF
    ctx->r13 = ctx->r21 & 0XFF;
    // 0x151CD1DC: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x151CD1E0: bne         $at, $zero, L_151CD0FC
    if (ctx->r1 != 0) {
        // 0x151CD1E4: or          $s5, $t5, $zero
        ctx->r21 = ctx->r13 | 0;
            goto L_151CD0FC;
    }
    // 0x151CD1E4: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
    // 0x151CD1E8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x151CD1EC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151CD1F0: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x151CD1F4: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x151CD1F8: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x151CD1FC: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x151CD200: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151CD204: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151CD208: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151CD20C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151CD210: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151CD214: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x151CD218: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x151CD21C: jr          $ra
    // 0x151CD220: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x151CD220: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_15135670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15135670: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15135674: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15135678: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1513567C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15135680: addiu       $t7, $t7, 0x3FBC
    ctx->r15 = ADD32(ctx->r15, 0X3FBC);
    // 0x15135684: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15135688: addiu       $t6, $zero, 0x3E8
    ctx->r14 = ADD32(0, 0X3E8);
    // 0x1513568C: addiu       $t8, $zero, 0xB7A
    ctx->r24 = ADD32(0, 0XB7A);
    // 0x15135690: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15135694: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15135698: addiu       $a1, $a1, 0x3FB4
    ctx->r5 = ADD32(ctx->r5, 0X3FB4);
    // 0x1513569C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151356A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151356A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151356A8: jal         0x151422DC
    // 0x151356AC: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    func_151422DC(rdram, ctx);
        goto after_0;
    // 0x151356AC: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    after_0:
    // 0x151356B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x151356B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151356B8: lwc1        $f8, 0x45B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X45B4);
    // 0x151356BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151356C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151356C4: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151356C8: nop

    // 0x151356CC: jr          $ra
    // 0x151356D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151356D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151169B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151169B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151169B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151169BC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x151169C0: lh          $t7, 0x10($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X10);
    // 0x151169C4: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x151169C8: bne         $t6, $t7, L_151169F0
    if (ctx->r14 != ctx->r15) {
        // 0x151169CC: sra         $v1, $v0, 10
        ctx->r3 = S32(SIGNED(ctx->r2) >> 10);
            goto L_151169F0;
    }
    // 0x151169CC: sra         $v1, $v0, 10
    ctx->r3 = S32(SIGNED(ctx->r2) >> 10);
    // 0x151169D0: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x151169D4: lh          $t9, 0x12($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X12);
    // 0x151169D8: bne         $t8, $t9, L_151169F0
    if (ctx->r24 != ctx->r25) {
        // 0x151169DC: nop
    
            goto L_151169F0;
    }
    // 0x151169DC: nop

    // 0x151169E0: lw          $t2, 0x84($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X84);
    // 0x151169E4: lh          $t3, 0x14($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X14);
    // 0x151169E8: beql        $t2, $t3, L_15116B40
    if (ctx->r10 == ctx->r11) {
        // 0x151169EC: sh          $zero, 0x5E($a0)
        MEM_H(0X5E, ctx->r4) = 0;
            goto L_15116B40;
    }
    goto skip_0;
    // 0x151169EC: sh          $zero, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = 0;
    skip_0:
L_151169F0:
    // 0x151169F0: beq         $v1, $zero, L_15116A24
    if (ctx->r3 == 0) {
        // 0x151169F4: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_15116A24;
    }
    // 0x151169F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x151169F8: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x151169FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15116A00: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15116A04: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15116A08: lh          $t5, -0x6D98($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X6D98);
    // 0x15116A0C: beql        $t5, $zero, L_15116A28
    if (ctx->r13 == 0) {
        // 0x15116A10: lui         $at, 0xFFFF
        ctx->r1 = S32(0XFFFF << 16);
            goto L_15116A28;
    }
    goto skip_1;
    // 0x15116A10: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    skip_1:
    // 0x15116A14: jal         0x15116BAC
    // 0x15116A18: nop

    func_15116BAC(rdram, ctx);
        goto after_0;
    // 0x15116A18: nop

    after_0:
    // 0x15116A1C: b           L_15116BA0
    // 0x15116A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15116BA0;
    // 0x15116A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15116A24:
    // 0x15116A24: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
L_15116A28:
    // 0x15116A28: ori         $at, $at, 0x3FF
    ctx->r1 = ctx->r1 | 0X3FF;
    // 0x15116A2C: beq         $v1, $zero, L_15116A80
    if (ctx->r3 == 0) {
        // 0x15116A30: and         $t0, $v0, $at
        ctx->r8 = ctx->r2 & ctx->r1;
            goto L_15116A80;
    }
    // 0x15116A30: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x15116A34: lhu         $t6, 0x74($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X74);
    // 0x15116A38: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15116A3C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15116A40: bne         $t6, $zero, L_15116A80
    if (ctx->r14 != 0) {
        // 0x15116A44: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15116A80;
    }
    // 0x15116A44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15116A48: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15116A4C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x15116A50: lh          $a1, -0x6DA0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DA0);
    // 0x15116A54: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15116A58: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15116A5C: beq         $a1, $zero, L_15116A80
    if (ctx->r5 == 0) {
        // 0x15116A60: addiu       $t8, $zero, 0xFA0
        ctx->r24 = ADD32(0, 0XFA0);
            goto L_15116A80;
    }
    // 0x15116A60: addiu       $t8, $zero, 0xFA0
    ctx->r24 = ADD32(0, 0XFA0);
    // 0x15116A64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15116A68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15116A6C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15116A70: jal         0x15114D24
    // 0x15116A74: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_15114D24(rdram, ctx);
        goto after_1;
    // 0x15116A74: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x15116A78: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15116A7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
L_15116A80:
    // 0x15116A80: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15116A84: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x15116A88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15116A8C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x15116A90: multu       $t0, $t9
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15116A94: addiu       $a1, $a0, 0x7C
    ctx->r5 = ADD32(ctx->r4, 0X7C);
    // 0x15116A98: addiu       $a2, $a0, 0x5A
    ctx->r6 = ADD32(ctx->r4, 0X5A);
    // 0x15116A9C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x15116AA0: mflo        $t0
    ctx->r8 = lo;
    // 0x15116AA4: sra         $t2, $t0, 1
    ctx->r10 = S32(SIGNED(ctx->r8) >> 1);
    // 0x15116AA8: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
L_15116AAC:
    // 0x15116AAC: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x15116AB0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x15116AB4: sh          $t3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r11;
    // 0x15116AB8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x15116ABC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x15116AC0: beq         $v1, $a0, L_15116B18
    if (ctx->r3 == ctx->r4) {
        // 0x15116AC4: slt         $at, $a0, $v1
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_15116B18;
    }
    // 0x15116AC4: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15116AC8: beq         $at, $zero, L_15116AF8
    if (ctx->r1 == 0) {
        // 0x15116ACC: addu        $t5, $v1, $t0
        ctx->r13 = ADD32(ctx->r3, ctx->r8);
            goto L_15116AF8;
    }
    // 0x15116ACC: addu        $t5, $v1, $t0
    ctx->r13 = ADD32(ctx->r3, ctx->r8);
    // 0x15116AD0: subu        $t4, $v1, $t0
    ctx->r12 = SUB32(ctx->r3, ctx->r8);
    // 0x15116AD4: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15116AD8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x15116ADC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x15116AE0: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15116AE4: beql        $at, $zero, L_15116B1C
    if (ctx->r1 == 0) {
        // 0x15116AE8: lh          $t6, 0x0($a2)
        ctx->r14 = MEM_H(ctx->r6, 0X0);
            goto L_15116B1C;
    }
    goto skip_2;
    // 0x15116AE8: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    skip_2:
    // 0x15116AEC: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x15116AF0: b           L_15116B18
    // 0x15116AF4: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
        goto L_15116B18;
    // 0x15116AF4: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_15116AF8:
    // 0x15116AF8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x15116AFC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x15116B00: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x15116B04: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15116B08: beql        $at, $zero, L_15116B1C
    if (ctx->r1 == 0) {
        // 0x15116B0C: lh          $t6, 0x0($a2)
        ctx->r14 = MEM_H(ctx->r6, 0X0);
            goto L_15116B1C;
    }
    goto skip_3;
    // 0x15116B0C: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    skip_3:
    // 0x15116B10: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x15116B14: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
L_15116B18:
    // 0x15116B18: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
L_15116B1C:
    // 0x15116B1C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x15116B20: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15116B24: subu        $t7, $v1, $t6
    ctx->r15 = SUB32(ctx->r3, ctx->r14);
    // 0x15116B28: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x15116B2C: bne         $a3, $t1, L_15116AAC
    if (ctx->r7 != ctx->r9) {
        // 0x15116B30: sh          $t7, -0x2($a2)
        MEM_H(-0X2, ctx->r6) = ctx->r15;
            goto L_15116AAC;
    }
    // 0x15116B30: sh          $t7, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r15;
    // 0x15116B34: b           L_15116BA0
    // 0x15116B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15116BA0;
    // 0x15116B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15116B3C: sh          $zero, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = 0;
L_15116B40:
    // 0x15116B40: lh          $v0, 0x5E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X5E);
    // 0x15116B44: lhu         $t8, 0x74($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X74);
    // 0x15116B48: sh          $v0, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r2;
    // 0x15116B4C: beq         $t8, $zero, L_15116B9C
    if (ctx->r24 == 0) {
        // 0x15116B50: sh          $v0, 0x5A($a0)
        MEM_H(0X5A, ctx->r4) = ctx->r2;
            goto L_15116B9C;
    }
    // 0x15116B50: sh          $v0, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r2;
    // 0x15116B54: beq         $v1, $zero, L_15116B98
    if (ctx->r3 == 0) {
        // 0x15116B58: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_15116B98;
    }
    // 0x15116B58: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15116B5C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15116B60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15116B64: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15116B68: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x15116B6C: lh          $a1, -0x6D9C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6D9C);
    // 0x15116B70: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15116B74: addiu       $a3, $zero, 0x7D0
    ctx->r7 = ADD32(0, 0X7D0);
    // 0x15116B78: beq         $a1, $zero, L_15116B98
    if (ctx->r5 == 0) {
        // 0x15116B7C: addiu       $t2, $zero, 0xFA0
        ctx->r10 = ADD32(0, 0XFA0);
            goto L_15116B98;
    }
    // 0x15116B7C: addiu       $t2, $zero, 0xFA0
    ctx->r10 = ADD32(0, 0XFA0);
    // 0x15116B80: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x15116B84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15116B88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15116B8C: jal         0x15114D24
    // 0x15116B90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x15116B90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x15116B94: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_15116B98:
    // 0x15116B98: sh          $zero, 0x74($a0)
    MEM_H(0X74, ctx->r4) = 0;
L_15116B9C:
    // 0x15116B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15116BA0:
    // 0x15116BA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15116BA4: jr          $ra
    // 0x15116BA8: nop

    return;
    return;
    // 0x15116BA8: nop

;}
RECOMP_FUNC void func_1502EA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502EA50: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1502EA54: sb          $t6, 0xA4($a0)
    MEM_B(0XA4, ctx->r4) = ctx->r14;
    // 0x1502EA58: jr          $ra
    // 0x1502EA5C: nop

    return;
    return;
    // 0x1502EA5C: nop

;}
RECOMP_FUNC void func_151A561C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A561C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151A5620: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151A5624: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151A5628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A562C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151A5630: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x151A5634: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151A5638: addiu       $t6, $t6, -0x7290
    ctx->r14 = ADD32(ctx->r14, -0X7290);
    // 0x151A563C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151A5640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151A5644: jal         0x15169260
    // 0x151A5648: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x151A5648: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    after_0:
    // 0x151A564C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A5650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151A5654: jr          $ra
    // 0x151A5658: nop

    return;
    return;
    // 0x151A5658: nop

;}
RECOMP_FUNC void func_1505B5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505B5F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1505B5FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1505B600: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x1505B604: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1505B608: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1505B60C: lw          $t6, 0xF8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF8);
    // 0x1505B610: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1505B614: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x1505B618: bnel        $t7, $zero, L_1505B9B4
    if (ctx->r15 != 0) {
        // 0x1505B61C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B9B4;
    }
    goto skip_0;
    // 0x1505B61C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1505B620: lbu         $v0, 0x252($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X252);
    // 0x1505B624: beql        $v0, $zero, L_1505B6B4
    if (ctx->r2 == 0) {
        // 0x1505B628: lwc1        $f0, 0x18($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
            goto L_1505B6B4;
    }
    goto skip_1;
    // 0x1505B628: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x1505B62C: lbu         $t8, 0x253($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X253);
    // 0x1505B630: lwc1        $f8, 0x1CC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1CC);
    // 0x1505B634: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505B638: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1505B63C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1505B640: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1505B644: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505B648: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x1505B64C: nop

    // 0x1505B650: bc1fl       L_1505B6B4
    if (!c1cs) {
        // 0x1505B654: lwc1        $f0, 0x18($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
            goto L_1505B6B4;
    }
    goto skip_2;
    // 0x1505B654: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    skip_2:
    // 0x1505B658: lbu         $t0, 0x104($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X104);
    // 0x1505B65C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1505B660: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505B664: bnel        $t0, $zero, L_1505B6B4
    if (ctx->r8 != 0) {
        // 0x1505B668: lwc1        $f0, 0x18($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
            goto L_1505B6B4;
    }
    goto skip_3;
    // 0x1505B668: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    skip_3:
    // 0x1505B66C: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x1505B670: sb          $t1, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r9;
    // 0x1505B674: sb          $zero, 0x105($s0)
    MEM_B(0X105, ctx->r16) = 0;
    // 0x1505B678: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x1505B67C: jal         0x1505E7CC
    // 0x1505B680: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_1505E7CC(rdram, ctx);
        goto after_0;
    // 0x1505B680: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x1505B684: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1505B688: sb          $v0, 0x106($s0)
    MEM_B(0X106, ctx->r16) = ctx->r2;
    // 0x1505B68C: sh          $t2, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r10;
    // 0x1505B690: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1505B694: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1505B698: jal         0x1505E874
    // 0x1505B69C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1505E874(rdram, ctx);
        goto after_1;
    // 0x1505B69C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x1505B6A0: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1505B6A4: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1505B6A8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1505B6AC: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x1505B6B0: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
L_1505B6B4:
    // 0x1505B6B4: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x1505B6B8: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x1505B6BC: bc1f        L_1505B9B0
    if (!c1cs) {
        // 0x1505B6C0: swc1        $f8, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
            goto L_1505B9B0;
    }
    // 0x1505B6C0: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x1505B6C4: lw          $t3, 0xF4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XF4);
    // 0x1505B6C8: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x1505B6CC: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x1505B6D0: sw          $t4, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r12;
    // 0x1505B6D4: lw          $t5, 0xDF0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XDF0);
    // 0x1505B6D8: lbu         $v0, 0x13($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X13);
    // 0x1505B6DC: beql        $v0, $zero, L_1505B76C
    if (ctx->r2 == 0) {
        // 0x1505B6E0: lbu         $a0, 0x104($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X104);
            goto L_1505B76C;
    }
    goto skip_4;
    // 0x1505B6E0: lbu         $a0, 0x104($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X104);
    skip_4:
    // 0x1505B6E4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1505B6E8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1505B6EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1505B6F0: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
    // 0x1505B6F4: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x1505B6F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1505B6FC: addiu       $t7, $zero, 0x199
    ctx->r15 = ADD32(0, 0X199);
    // 0x1505B700: bc1t        L_1505B768
    if (c1cs) {
        // 0x1505B704: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_1505B768;
    }
    // 0x1505B704: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x1505B708: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x1505B70C: mflo        $a2
    ctx->r6 = lo;
    // 0x1505B710: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x1505B714: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1505B718: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1505B71C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1505B720: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1505B724: bne         $v0, $zero, L_1505B730
    if (ctx->r2 != 0) {
        // 0x1505B728: nop
    
            goto L_1505B730;
    }
    // 0x1505B728: nop

    // 0x1505B72C: break       7
    do_break(352696108);
L_1505B730:
    // 0x1505B730: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1505B734: bne         $v0, $at, L_1505B748
    if (ctx->r2 != ctx->r1) {
        // 0x1505B738: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1505B748;
    }
    // 0x1505B738: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1505B73C: bne         $t6, $at, L_1505B748
    if (ctx->r14 != ctx->r1) {
        // 0x1505B740: nop
    
            goto L_1505B748;
    }
    // 0x1505B740: nop

    // 0x1505B744: break       6
    do_break(352696132);
L_1505B748:
    // 0x1505B748: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1505B74C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1505B750: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1505B754: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x1505B758: jal         0x15174690
    // 0x1505B75C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_15174690(rdram, ctx);
        goto after_2;
    // 0x1505B75C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1505B760: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1505B764: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
L_1505B768:
    // 0x1505B768: lbu         $a0, 0x104($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X104);
L_1505B76C:
    // 0x1505B76C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1505B770: swc1        $f14, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f14.u32l;
    // 0x1505B774: bne         $a0, $zero, L_1505B78C
    if (ctx->r4 != 0) {
        // 0x1505B778: swc1        $f12, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f12.u32l;
            goto L_1505B78C;
    }
    // 0x1505B778: swc1        $f12, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f12.u32l;
    // 0x1505B77C: lw          $t1, 0xF8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XF8);
    // 0x1505B780: sll         $t2, $t1, 15
    ctx->r10 = S32(ctx->r9 << 15);
    // 0x1505B784: bltzl       $t2, L_1505B9B4
    if (SIGNED(ctx->r10) < 0) {
        // 0x1505B788: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B9B4;
    }
    goto skip_5;
    // 0x1505B788: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
L_1505B78C:
    // 0x1505B78C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x1505B790: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505B794: bne         $t3, $at, L_1505B7BC
    if (ctx->r11 != ctx->r1) {
        // 0x1505B798: lui         $at, 0xC0C0
        ctx->r1 = S32(0XC0C0 << 16);
            goto L_1505B7BC;
    }
    // 0x1505B798: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x1505B79C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505B7A0: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B7A4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1505B7A8: nop

    // 0x1505B7AC: bc1fl       L_1505B9B4
    if (!c1cs) {
        // 0x1505B7B0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B9B4;
    }
    goto skip_6;
    // 0x1505B7B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
    // 0x1505B7B4: b           L_1505B9B0
    // 0x1505B7B8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_1505B9B0;
    // 0x1505B7B8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_1505B7BC:
    // 0x1505B7BC: lwc1        $f18, 0x1CC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1CC);
    // 0x1505B7C0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505B7C4: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x1505B7C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505B7CC: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1505B7D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1505B7D4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1505B7D8: nop

    // 0x1505B7DC: bc1f        L_1505B818
    if (!c1cs) {
        // 0x1505B7E0: nop
    
            goto L_1505B818;
    }
    // 0x1505B7E0: nop

    // 0x1505B7E4: lbu         $v0, 0x1CA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1505B7E8: blez        $v0, L_1505B818
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1505B7EC: nop
    
            goto L_1505B818;
    }
    // 0x1505B7EC: nop

    // 0x1505B7F0: lw          $v1, 0x144($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X144);
    // 0x1505B7F4: beq         $v1, $zero, L_1505B818
    if (ctx->r3 == 0) {
        // 0x1505B7F8: nop
    
            goto L_1505B818;
    }
    // 0x1505B7F8: nop

    // 0x1505B7FC: lbu         $t4, 0xE($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XE);
    // 0x1505B800: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x1505B804: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x1505B808: bne         $t5, $zero, L_1505B818
    if (ctx->r13 != 0) {
        // 0x1505B80C: nop
    
            goto L_1505B818;
    }
    // 0x1505B80C: nop

    // 0x1505B810: sb          $t6, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = ctx->r14;
    // 0x1505B814: lbu         $a0, 0x104($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X104);
L_1505B818:
    // 0x1505B818: bne         $a0, $zero, L_1505B90C
    if (ctx->r4 != 0) {
        // 0x1505B81C: swc1        $f14, 0x1CC($s0)
        MEM_W(0X1CC, ctx->r16) = ctx->f14.u32l;
            goto L_1505B90C;
    }
    // 0x1505B81C: swc1        $f14, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f14.u32l;
    // 0x1505B820: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1505B824: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505B828: nop

    // 0x1505B82C: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x1505B830: nop

    // 0x1505B834: bc1fl       L_1505B910
    if (!c1cs) {
        // 0x1505B838: lw          $t1, 0xF4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0XF4);
            goto L_1505B910;
    }
    goto skip_7;
    // 0x1505B838: lw          $t1, 0xF4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XF4);
    skip_7:
    // 0x1505B83C: lw          $t7, 0xF8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XF8);
    // 0x1505B840: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x1505B844: beql        $t8, $zero, L_1505B8E8
    if (ctx->r24 == 0) {
        // 0x1505B848: lw          $t0, 0x0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X0);
            goto L_1505B8E8;
    }
    goto skip_8;
    // 0x1505B848: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x1505B84C: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
    // 0x1505B850: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1505B854: bc1tl       L_1505B8E8
    if (c1cs) {
        // 0x1505B858: lw          $t0, 0x0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X0);
            goto L_1505B8E8;
    }
    goto skip_9;
    // 0x1505B858: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x1505B85C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505B860: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505B864: lwc1        $f6, 0x1550($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1505B868: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1505B86C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B870: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B874: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1505B878: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1505B87C: nop

    // 0x1505B880: bc1fl       L_1505B8E8
    if (!c1cs) {
        // 0x1505B884: lw          $t0, 0x0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X0);
            goto L_1505B8E8;
    }
    goto skip_10;
    // 0x1505B884: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x1505B888: lb          $t9, 0x2CB($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2CB);
    // 0x1505B88C: lwc1        $f4, -0x6AF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6AF4);
    // 0x1505B890: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1505B894: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1505B898: lw          $v0, 0x2CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2CC);
    // 0x1505B89C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1505B8A0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1505B8A4: mul.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1505B8A8: nop

    // 0x1505B8AC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1505B8B0: beq         $v0, $zero, L_1505B9B0
    if (ctx->r2 == 0) {
        // 0x1505B8B4: swc1        $f8, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
            goto L_1505B9B0;
    }
    // 0x1505B8B4: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x1505B8B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505B8BC: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B8C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505B8C4: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x1505B8C8: nop

    // 0x1505B8CC: bc1fl       L_1505B9B4
    if (!c1cs) {
        // 0x1505B8D0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1505B9B4;
    }
    goto skip_11;
    // 0x1505B8D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_11:
    // 0x1505B8D4: jal         0x1506E5FC
    // 0x1505B8D8: sw          $v0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r2;
    func_1506E5FC(rdram, ctx);
        goto after_3;
    // 0x1505B8D8: sw          $v0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r2;
    after_3:
    // 0x1505B8DC: b           L_1505B9B4
    // 0x1505B8E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1505B9B4;
    // 0x1505B8E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1505B8E4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
L_1505B8E8:
    // 0x1505B8E8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1505B8EC: beq         $t0, $at, L_1505B9B0
    if (ctx->r8 == ctx->r1) {
        // 0x1505B8F0: lui         $at, 0xC080
        ctx->r1 = S32(0XC080 << 16);
            goto L_1505B9B0;
    }
    // 0x1505B8F0: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1505B8F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505B8F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505B8FC: lwc1        $f6, 0x1550($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1505B900: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1505B904: b           L_1505B9B0
    // 0x1505B908: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_1505B9B0;
    // 0x1505B908: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_1505B90C:
    // 0x1505B90C: lw          $t1, 0xF4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XF4);
L_1505B910:
    // 0x1505B910: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1505B914: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x1505B918: beql        $t2, $zero, L_1505B930
    if (ctx->r10 == 0) {
        // 0x1505B91C: c.eq.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
            goto L_1505B930;
    }
    goto skip_12;
    // 0x1505B91C: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
    skip_12:
    // 0x1505B920: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505B924: b           L_1505B99C
    // 0x1505B928: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
        goto L_1505B99C;
    // 0x1505B928: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x1505B92C: c.eq.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl == ctx->f12.fl;
L_1505B930:
    // 0x1505B930: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x1505B934: bc1t        L_1505B96C
    if (c1cs) {
        // 0x1505B938: nop
    
            goto L_1505B96C;
    }
    // 0x1505B938: nop

    // 0x1505B93C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505B940: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1505B944: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505B948: lwc1        $f8, 0x1550($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1505B94C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1505B950: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1505B954: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B958: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1505B95C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1505B960: nop

    // 0x1505B964: bc1fl       L_1505B978
    if (!c1cs) {
        // 0x1505B968: lb          $t3, 0x2CB($s0)
        ctx->r11 = MEM_B(ctx->r16, 0X2CB);
            goto L_1505B978;
    }
    goto skip_13;
    // 0x1505B968: lb          $t3, 0x2CB($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2CB);
    skip_13:
L_1505B96C:
    // 0x1505B96C: b           L_1505B99C
    // 0x1505B970: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
        goto L_1505B99C;
    // 0x1505B970: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x1505B974: lb          $t3, 0x2CB($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2CB);
L_1505B978:
    // 0x1505B978: lwc1        $f6, -0x6AF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6AF0);
    // 0x1505B97C: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1505B980: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x1505B984: nop

    // 0x1505B988: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1505B98C: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1505B990: nop

    // 0x1505B994: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1505B998: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
L_1505B99C:
    // 0x1505B99C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505B9A0: lwc1        $f4, -0x6AEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6AEC);
    // 0x1505B9A4: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505B9A8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1505B9AC: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
L_1505B9B0:
    // 0x1505B9B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505B9B4:
    // 0x1505B9B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1505B9B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1505B9BC: jr          $ra
    // 0x1505B9C0: nop

    return;
    return;
    // 0x1505B9C0: nop

;}
RECOMP_FUNC void func_150409E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409E4: jr          $ra
    // 0x150409E8: nop

    return;
    return;
    // 0x150409E8: nop

;}
RECOMP_FUNC void func_150FEBC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FEBC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150FEBCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FEBD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150FEBD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150FEBD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x150FEBDC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x150FEBE0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150FEBE4: lbu         $t8, -0x7460($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7460);
    // 0x150FEBE8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x150FEBEC: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150FEBF0: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x150FEBF4: addiu       $t0, $t0, 0x2000
    ctx->r8 = ADD32(ctx->r8, 0X2000);
    // 0x150FEBF8: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x150FEBFC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150FEC00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150FEC04: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x150FEC08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150FEC0C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150FEC10: jal         0x15145EA4
    // 0x150FEC14: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150FEC14: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x150FEC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FEC1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150FEC20: jr          $ra
    // 0x150FEC24: nop

    return;
    return;
    // 0x150FEC24: nop

;}
RECOMP_FUNC void func_1504AF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504AF10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1504AF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1504AF18: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1504AF1C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1504AF20: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1504AF24: lhu         $v1, 0x92($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X92);
    // 0x1504AF28: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1504AF2C: beql        $v1, $zero, L_1504B0F0
    if (ctx->r3 == 0) {
        // 0x1504AF30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1504B0F0;
    }
    goto skip_0;
    // 0x1504AF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1504AF34: bne         $t6, $zero, L_1504AF40
    if (ctx->r14 != 0) {
        // 0x1504AF38: sra         $t7, $v1, 15
        ctx->r15 = S32(SIGNED(ctx->r3) >> 15);
            goto L_1504AF40;
    }
    // 0x1504AF38: sra         $t7, $v1, 15
    ctx->r15 = S32(SIGNED(ctx->r3) >> 15);
    // 0x1504AF3C: bne         $t7, $zero, L_1504B0EC
    if (ctx->r15 != 0) {
        // 0x1504AF40: sra         $a0, $v1, 12
        ctx->r4 = S32(SIGNED(ctx->r3) >> 12);
            goto L_1504B0EC;
    }
L_1504AF40:
    // 0x1504AF40: sra         $a0, $v1, 12
    ctx->r4 = S32(SIGNED(ctx->r3) >> 12);
    // 0x1504AF44: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x1504AF48: andi        $a2, $v1, 0x7FFF
    ctx->r6 = ctx->r3 & 0X7FFF;
    // 0x1504AF4C: bne         $t8, $zero, L_1504AF80
    if (ctx->r24 != 0) {
        // 0x1504AF50: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_1504AF80;
    }
    // 0x1504AF50: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1504AF54: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1504AF58: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x1504AF5C: jal         0x1504AEF4
    // 0x1504AF60: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_1504AEF4(rdram, ctx);
        goto after_0;
    // 0x1504AF60: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x1504AF64: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1504AF68: beq         $v0, $zero, L_1504AF80
    if (ctx->r2 == 0) {
        // 0x1504AF6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1504AF80;
    }
    // 0x1504AF6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1504AF70: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1504AF74: sll         $t9, $v0, 12
    ctx->r25 = S32(ctx->r2 << 12);
    // 0x1504AF78: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x1504AF7C: sh          $t1, 0x92($a3)
    MEM_H(0X92, ctx->r7) = ctx->r9;
L_1504AF80:
    // 0x1504AF80: lhu         $t2, 0x92($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X92);
    // 0x1504AF84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1504AF88: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1504AF8C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x1504AF90: bne         $a0, $at, L_1504B0EC
    if (ctx->r4 != ctx->r1) {
        // 0x1504AF94: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_1504B0EC;
    }
    // 0x1504AF94: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x1504AF98: beq         $t4, $zero, L_1504AFC8
    if (ctx->r12 == 0) {
        // 0x1504AF9C: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_1504AFC8;
    }
    // 0x1504AF9C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1504AFA0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x1504AFA4: multu       $t3, $a0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504AFA8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1504AFAC: addiu       $v1, $v1, -0x410C
    ctx->r3 = ADD32(ctx->r3, -0X410C);
    // 0x1504AFB0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1504AFB4: mflo        $t7
    ctx->r15 = lo;
    // 0x1504AFB8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x1504AFBC: sb          $zero, 0x4E($t8)
    MEM_B(0X4E, ctx->r24) = 0;
    // 0x1504AFC0: b           L_1504B0EC
    // 0x1504AFC4: sh          $zero, 0x92($a3)
    MEM_H(0X92, ctx->r7) = 0;
        goto L_1504B0EC;
    // 0x1504AFC4: sh          $zero, 0x92($a3)
    MEM_H(0X92, ctx->r7) = 0;
L_1504AFC8:
    // 0x1504AFC8: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1504AFCC: subu        $t0, $a3, $t9
    ctx->r8 = SUB32(ctx->r7, ctx->r25);
    // 0x1504AFD0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1504AFD4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x1504AFD8: mflo        $t1
    ctx->r9 = lo;
    // 0x1504AFDC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1504AFE0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x1504AFE4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1504AFE8: multu       $t4, $a0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504AFEC: addiu       $v1, $v1, -0x410C
    ctx->r3 = ADD32(ctx->r3, -0X410C);
    // 0x1504AFF0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1504AFF4: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x1504AFF8: mflo        $t6
    ctx->r14 = lo;
    // 0x1504AFFC: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x1504B000: sb          $t2, 0x4E($t5)
    MEM_B(0X4E, ctx->r13) = ctx->r10;
    // 0x1504B004: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1504B008: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1504B00C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1504B010: beq         $t7, $zero, L_1504B030
    if (ctx->r15 == 0) {
        // 0x1504B014: nop
    
            goto L_1504B030;
    }
    // 0x1504B014: nop

    // 0x1504B018: multu       $t9, $a0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B01C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1504B020: mflo        $t0
    ctx->r8 = lo;
    // 0x1504B024: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1504B028: b           L_1504B0EC
    // 0x1504B02C: sb          $zero, 0x4E($t1)
    MEM_B(0X4E, ctx->r9) = 0;
        goto L_1504B0EC;
    // 0x1504B02C: sb          $zero, 0x4E($t1)
    MEM_B(0X4E, ctx->r9) = 0;
L_1504B030:
    // 0x1504B030: multu       $t3, $a0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B034: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1504B038: mflo        $t6
    ctx->r14 = lo;
    // 0x1504B03C: addu        $v0, $t4, $t6
    ctx->r2 = ADD32(ctx->r12, ctx->r14);
    // 0x1504B040: lbu         $t2, 0x4F($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4F);
    // 0x1504B044: andi        $t5, $t2, 0xFF9F
    ctx->r13 = ctx->r10 & 0XFF9F;
    // 0x1504B048: sb          $t5, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r13;
    // 0x1504B04C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1504B050: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1504B054: multu       $t9, $a0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B058: mflo        $t8
    ctx->r24 = lo;
    // 0x1504B05C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1504B060: lbu         $t0, 0x4F($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4F);
    // 0x1504B064: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x1504B068: sb          $t1, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r9;
    // 0x1504B06C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1504B070: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1504B074: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1504B078: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B07C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1504B080: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1504B084: mflo        $t5
    ctx->r13 = lo;
    // 0x1504B088: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x1504B08C: sh          $t4, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r12;
    // 0x1504B090: lh          $t7, 0x90($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X90);
    // 0x1504B094: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1504B098: lwc1        $f8, 0x18($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1504B09C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1504B0A0: multu       $t3, $a0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B0A4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1504B0A8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1504B0AC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1504B0B0: mflo        $t2
    ctx->r10 = lo;
    // 0x1504B0B4: addu        $t6, $t1, $t2
    ctx->r14 = ADD32(ctx->r9, ctx->r10);
    // 0x1504B0B8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1504B0BC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x1504B0C0: nop

    // 0x1504B0C4: sh          $t0, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r8;
    // 0x1504B0C8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1504B0CC: lwc1        $f6, 0x1C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1504B0D0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1504B0D4: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1504B0D8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1504B0DC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1504B0E0: mflo        $t8
    ctx->r24 = lo;
    // 0x1504B0E4: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x1504B0E8: sh          $t4, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r12;
L_1504B0EC:
    // 0x1504B0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1504B0F0:
    // 0x1504B0F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1504B0F4: jr          $ra
    // 0x1504B0F8: nop

    return;
    return;
    // 0x1504B0F8: nop

;}
RECOMP_FUNC void func_15073EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073EA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15073EA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15073EAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15073EB0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15073EB4: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15073EB8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x15073EBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15073EC0: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x15073EC4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15073EC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15073ECC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15073ED0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15073ED4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x15073ED8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15073EDC: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x15073EE0: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x15073EE4: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x15073EE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15073EEC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x15073EF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15073EF4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15073EF8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15073EFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15073F00: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x15073F04: jal         0x1506C460
    // 0x15073F08: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_1506C460(rdram, ctx);
        goto after_0;
    // 0x15073F08: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15073F0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15073F10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15073F14: jr          $ra
    // 0x15073F18: nop

    return;
    return;
    // 0x15073F18: nop

;}
RECOMP_FUNC void func_15009DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009DB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009DB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009DBC: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x15009DC0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15009DC4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15009DC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15009DCC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15009DD0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15009DD4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009DD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009DDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15009DE0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15009DE4: jal         0x15162740
    // 0x15009DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x15009DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15009DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009DF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009DF4: jr          $ra
    // 0x15009DF8: nop

    return;
    return;
    // 0x15009DF8: nop

;}
